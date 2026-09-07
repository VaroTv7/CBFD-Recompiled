#!/usr/bin/env python3
"""
Fix 'GLOBAL.fieldName' where GLOBAL is declared in variables.h as a
POINTER to a real, named struct/typedef (never scalar/void* -- those
are fix_untyped_global_access.py's job) -- "Selector requires
struct/union as left hand side" (dot notation requires the left side
to actually BE a struct/union, but a pointer to one is not itself a
struct/union; needs '->' instead).

Background: found via D_800DCD20, declared 'extern struct100
*D_800DCD20;' in variables.h (struct100 is a real 3-field typedef in
structs.h), but accessed throughout game_3CE80.c/game_18A8F0.c as
'D_800DCD20.unk0' etc. -- a straightforward dot/arrow typo on an
otherwise-correctly-typed real pointer, not a decompiler
type-inference gap the way the untyped-global scripts handle.

Only touches a global whose variables.h declaration is a pointer to a
type NOT in the scalar/void allowlist (those go through
fix_untyped_global_access.py's byte-offset-macro treatment instead,
which is the correct fix when there's no real struct type to reference
a field name on). Purely syntactic: 'GLOBAL.field' -> 'GLOBAL->field',
field name and everything else on the line left untouched.

Usage:
    python3 fix_dot_on_struct_pointer_global.py --root .            # dry run
    python3 fix_dot_on_struct_pointer_global.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

SCALAR_TYPES = {"f32", "s32", "u32", "s16", "u16", "s8", "u8"}

# 'extern TYPE *NAME;' where TYPE is a real (non-scalar, non-void)
# struct/typedef name.
REAL_STRUCT_PTR_RE = re.compile(
    r'^\s*extern\s+([A-Za-z_]\w*)\s*\*\s*([A-Za-z_]\w*)\s*;'
)


def get_real_struct_pointer_globals(variables_h_path):
    text = Path(variables_h_path).read_text(errors='replace')
    names = set()
    for line in text.split('\n'):
        m = REAL_STRUCT_PTR_RE.match(line)
        if m:
            typ, name = m.group(1), m.group(2)
            if typ not in SCALAR_TYPES and typ != 'void':
                names.add(name)
    return names


def build_dot_regex(varname):
    return re.compile(rf'\b{re.escape(varname)}\s*\.\s*([A-Za-z_]\w*)')


def fix_file(path, struct_ptr_globals, apply_changes):
    text = path.read_text(errors='replace')
    lines = text.split('\n')
    count = 0

    relevant = [g for g in struct_ptr_globals if g in text]
    if not relevant:
        return 0

    for i, line in enumerate(lines):
        if '.' not in line or line.strip().startswith('//'):
            continue
        new_line = line
        for varname in relevant:
            pat = build_dot_regex(varname)
            def repl(m, v=varname):
                nonlocal count
                count += 1
                return f'{v}->{m.group(1)}'
            new_line = pat.sub(repl, new_line)
        if new_line != line:
            lines[i] = new_line

    if count and apply_changes:
        path.write_text('\n'.join(lines), encoding='utf-8', newline='')
    return count


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    struct_ptr_globals = get_real_struct_pointer_globals(root / 'include' / 'variables.h')
    print(f"Found {len(struct_ptr_globals)} real struct-pointer globals in variables.h")

    total = 0
    files_touched = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = fix_file(path, struct_ptr_globals, args.apply)
        if count:
            print(f"{path}: {'fixed' if args.apply else 'would fix'} {count}")
            total += count
            files_touched += 1

    print()
    print(f"{'Fixed' if args.apply else 'Would fix'} {total} dot-on-pointer access(es) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
