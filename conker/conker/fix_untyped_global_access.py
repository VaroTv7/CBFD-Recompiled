#!/usr/bin/env python3
"""
Fix 'GLOBAL.unkXX' and 'GLOBAL->unkXX' field accesses on global
variables that are declared as a bare scalar, scalar-pointer, or void*
type in variables.h.

Background: fix_untyped_field_access.py only ever looked at local
variables and function parameters. Global variables with the exact
same problem (declared 'extern f32 NAME;' but accessed like a struct,
e.g. 'D_800A5480.unk0') were never covered by that pass at all.

Since a global has one consistent type everywhere (no per-function
scoping ambiguity like locals), this fixes it directly and uniformly
across the whole tree: 'GLOBAL.unkXX' -> pointer-arithmetic through the
global's own address (dot: treat the global's OWN STORAGE as the base),
'GLOBAL->unkXX' -> treat the global's VALUE as the address (same two
treatments fix_untyped_field_access.py applies for the equivalent
local-variable case -- extended mid-session after finding a
scalar-declared global, e.g. 'extern s32 D_800BE4E0;', accessed as
'D_800BE4E0->unk10' in the wild: arrow access implies the decompiler
meant the global's value to be read as a pointer, exactly like the
void*-parameter case, just for a global instead of a local/param).
Extended again after finding 'gGameState', which different files
declare with DIFFERENT untyped types ('extern f32 *gGameState;' in one
file, 'extern void *gGameState;' in another, 'extern s32 gGameState;'
in a third) -- the scalar-POINTER form ('f32 *gGameState') wasn't
matched by the original detection regex at all (it only recognized
bare scalar or void*), so 'gGameState->unk20' in that specific file
was invisible to this script.

TYPE for each access is inferred from a cast on the same line when
present, defaulting to s32.

Usage:
    python3 fix_untyped_global_access.py --root . --apply
"""
import argparse
import re
from pathlib import Path

SCALAR_TYPES = {"f32", "s32", "u32", "s16", "u16", "s8", "u8"}
CAST_RE = re.compile(r'\((s8|u8|s16|u16|s32|u32|f32)\)')


GLOBAL_EXTERN_RE = re.compile(
    r'^\s*extern\s+(?:(?:' + '|'.join(SCALAR_TYPES) + r')\s*\*\s*|(?:' + '|'.join(SCALAR_TYPES) + r')\s+|void\s*\*\s*)([A-Za-z_]\w*)\s*;'
)
# A scalar-type ARRAY global, e.g. 'extern s32 D_800D1958[12];' or
# 'extern u8 D_800D2E60[];'. Same underlying bug as the bare-scalar
# case above -- mips_to_c had no struct type to attach to the storage,
# so it declared it as a flat scalar array instead -- but '.unkXX'/
# '->unkXX' access on one of these hits "Selector requires struct/
# union as left hand side" (arrays aren't struct/union either) rather
# than the plain-scalar error, so it needed its own detection. Found
# via D_800D1958/D_800D2E60/D_800DCD28/D_800BE748/D_800B0E00, each
# declared 'extern TYPE NAME[N or empty];' and accessed with
# '.unkXX' throughout.
GLOBAL_ARRAY_EXTERN_RE = re.compile(
    r'^\s*extern\s+(?:' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;'
)


def get_untyped_globals(variables_h_path):
    text = Path(variables_h_path).read_text(errors='replace')
    names = set()
    for line in text.split('\n'):
        m = GLOBAL_EXTERN_RE.match(line)
        if m:
            names.add(m.group(1))
        m2 = GLOBAL_ARRAY_EXTERN_RE.match(line)
        if m2:
            names.add(m2.group(1))
    return names


def get_local_untyped_globals(text):
    """Some globals are never added to variables.h at all -- only ever
    given a local 'extern' declaration in the one file that uses them
    (same per-file convention documented for functions). A global still
    has exactly one type within that file, so these are just as safe to
    fix as the variables.h-wide ones -- just scoped to this file only."""
    names = set()
    for line in text.split('\n'):
        m = GLOBAL_EXTERN_RE.match(line)
        if m:
            names.add(m.group(1))
        m2 = GLOBAL_ARRAY_EXTERN_RE.match(line)
        if m2:
            names.add(m2.group(1))
    return names


def infer_type(line):
    m = CAST_RE.search(line)
    return m.group(1) if m else 's32'


def build_access_regex(varname, sep):
    sep_re = re.escape(sep)
    return re.compile(rf'\b{re.escape(varname)}\s*{sep_re}\s*unk([0-9A-Fa-f]+)\b')


def fix_file(path, untyped_globals, apply_changes):
    text = path.read_text(errors='replace')
    lines = text.split('\n')
    count = 0

    all_untyped = untyped_globals | get_local_untyped_globals(text)

    # Only consider globals actually referenced somewhere in this file,
    # to keep the per-line regex work cheap.
    relevant = [g for g in all_untyped if g in text]
    if not relevant:
        return 0

    for i, line in enumerate(lines):
        if not ('.' in line or '->' in line) or line.strip().startswith('//'):
            continue
        field_type = infer_type(line)
        new_line = line
        for varname in relevant:
            # '->' usage: treat the global's VALUE as the address.
            pat_arrow = build_access_regex(varname, '->')
            def repl_arrow(m, v=varname):
                nonlocal count
                count += 1
                return f'(*({field_type} *)((char *)({v}) + 0x{m.group(1)}))'
            new_line = pat_arrow.sub(repl_arrow, new_line)

            # '.' usage: treat the global's OWN STORAGE as the base.
            pat_dot = build_access_regex(varname, '.')
            def repl_dot(m, v=varname):
                nonlocal count
                count += 1
                return f'(*({field_type} *)((char *)&({v}) + 0x{m.group(1)}))'
            new_line = pat_dot.sub(repl_dot, new_line)
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
    untyped_globals = get_untyped_globals(root / 'include' / 'variables.h')
    print(f"Found {len(untyped_globals)} scalar/void* globals in variables.h")

    total = 0
    files_touched = 0
    for path in root.glob('src/**/*.c'):
        count = fix_file(path, untyped_globals, args.apply)
        if count:
            print(f"{path}: {'fixed' if args.apply else 'would fix'} {count}")
            total += count
            files_touched += 1

    print()
    print(f"{'Fixed' if args.apply else 'Would fix'} {total} global field access(es) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
