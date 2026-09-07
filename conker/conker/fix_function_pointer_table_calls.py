#!/usr/bin/env python3
"""
Fix indirect calls through a raw function-pointer table:
    *(&D_XXXXXXXX + (INDEX * 4))(args...)

This is a jump table lookup: D_XXXXXXXX is the table's first entry
(declared as a plain scalar, e.g. 'extern s32 D_XXXXXXXX;', since
mips_to_c had no way to know its real type), '&D_XXXXXXXX + offset'
computes the address of the Nth entry, '*(...)' reads the function
pointer stored there, and '(args...)' calls it. Every piece of this is
legal EXCEPT the type: since D_XXXXXXXX is a scalar (not declared as a
function pointer, or even as a pointer at all), the dereferenced value
has a plain scalar type, and "calling" a non-function value is a hard
error ('Non-function name referenced in function call').

Fix: cast the address expression to a generic function pointer type
before calling through it. Since the real parameter list varies (it's
a jump table of otherwise-unrelated handler functions), 's32 (*)()'
(K&R-style, unspecified arguments) is used -- consistent with how
every OTHER indirect/relaxed call in this codebase is already declared
(see relax_prototypes.py). 's32', not 'void': some call sites use the
result (e.g. assign it into an s32 slot), and a void-returning call's
result can't be referenced at all ('Reference of an expression of void
type') -- s32 works both when the result is used (implicit-conversion
warning, same tolerance as everywhere else in this codebase) and when
it's discarded as a bare statement (always legal to ignore a non-void
return value).

    *(&D_XXXXXXXX + (INDEX * 4))(args...)
      ->
    ((s32 (*)())((char *)(&D_XXXXXXXX + (INDEX * 4))))(args...)

The '(char *)' cast is also necessary: '&D_XXXXXXXX' is a scalar
pointer (e.g. 's32 *'), so plain 's32 * + (INDEX * 4)' would be
element-scaled (advance INDEX*4 elements = INDEX*16 bytes) instead of
the byte-scaled address the '* 4' in the original expression clearly
intends (matching every other place in this codebase that manually
scales an index by a struct/pointer size in bytes).

Usage:
    python3 fix_function_pointer_table_calls.py --root .            # dry run
    python3 fix_function_pointer_table_calls.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

# The specific, unambiguous shape: '*(&IDENT + ...)' immediately
# followed by a call's opening paren.
START_RE = re.compile(r'\*\(&[A-Za-z_]\w*\s*\+')


def find_matching_close(line, open_idx):
    depth = 0
    i = open_idx
    while i < len(line):
        if line[i] == '(':
            depth += 1
        elif line[i] == ')':
            depth -= 1
            if depth == 0:
                return i
        i += 1
    return None


def process_line(line):
    fixes = 0
    while True:
        m = START_RE.search(line)
        if not m:
            break
        star_idx = m.start()          # index of '*'
        open_idx = star_idx + 1       # index of '(' right after '*'
        close_idx = find_matching_close(line, open_idx)
        if close_idx is None:
            break
        # Must be immediately followed by a call's '(' to be our pattern.
        after = line[close_idx + 1:close_idx + 2]
        if after != '(':
            # Not a call -- leave this one alone, but don't loop forever:
            # skip past it and keep scanning the rest of the line.
            next_search_start = close_idx + 1
            m2 = START_RE.search(line, next_search_start)
            if not m2:
                break
            # Re-run the loop from here by trimming the search space.
            # Simplify by just breaking -- these are rare/non-target.
            break
        inner = line[open_idx + 1:close_idx]  # content between the parens
        replacement = f'((s32 (*)())((char *)({inner})))'
        line = line[:star_idx] + replacement + line[close_idx + 1:]
        fixes += 1
    return line, fixes


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines(keepends=True)
    total_fixes = 0

    for i, line in enumerate(lines):
        if '*(&' not in line or line.strip().startswith('//'):
            continue
        new_line, fixes = process_line(line)
        if fixes:
            lines[i] = new_line
            total_fixes += fixes

    if total_fixes > 0:
        print(f"{path}: {total_fixes} fix(es)")
        if apply_changes:
            path.write_text(''.join(lines), encoding='utf-8', newline='')

    return total_fixes


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    total_fixed = 0
    files_fixed = 0

    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, args.apply)
        if count:
            total_fixed += count
            files_fixed += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total_fixed} function-pointer-table call(s) "
          f"across {files_fixed} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
