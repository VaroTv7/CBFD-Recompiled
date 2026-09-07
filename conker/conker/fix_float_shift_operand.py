#!/usr/bin/env python3
"""
Fix '(*(f32 *)(...)) << N' / '(*(f32 *)(...)) >> N' -- shifting a
float VALUE -- "Unacceptable operand of shift operator." (both operands
of '<<'/'>>' must be integer types; a float macro-read is always
illegal here, unconditionally, regardless of surrounding context --
unlike the '+' case in fix_float_times_int_addend.py, no "is this an
addend" check is needed, since a shift operand is a shift operand no
matter what).

Fix: wrap the float macro-read in '(s32)(...)', truncating it to an
integer before the shift -- '(s32)((*(f32 *)(...)))'. Safe
unconditionally: a shift's operands are always required to be integer,
so this can only ever turn an illegal expression legal.

Reuses the exact same paren-accounting as
fix_float_times_int_addend.py's MACRO_READ_START_RE/find_matching_close
pair (a float macro-read '(*(f32 *)(BASE))' has TWO opening parens --
the outer wrapper and BASE's own -- each needing its own separate
closing paren; get this wrong and the replacement corrupts the line,
as fix_float_times_int_addend.py's first version did).

Usage:
    python3 fix_float_shift_operand.py --root .            # dry run
    python3 fix_float_shift_operand.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

MACRO_READ_START_RE = re.compile(r'\(\*\(f32\s*\*\)\(')


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
    search_from = 0
    while True:
        m = MACRO_READ_START_RE.search(line, search_from)
        if not m:
            break
        macro_start = m.start()
        base_open = m.end() - 1
        base_close = find_matching_close(line, base_open)
        if base_close is None or line[base_close + 1:base_close + 2] != ')':
            search_from = m.end()
            continue
        macro_close = base_close + 1
        rest = line[macro_close + 1:]

        mm = re.match(r'\s*(<<|>>)', rest)
        if not mm:
            search_from = macro_close + 1
            continue

        before = line[:macro_start].rstrip()
        if before.endswith('(s32)'):
            search_from = macro_close + 1
            continue

        whole = line[macro_start:macro_close + 1]
        replacement = f'(s32)({whole})'
        line = line[:macro_start] + replacement + line[macro_close + 1:]
        fixes += 1
        search_from = macro_start + len(replacement)

    return line, fixes


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')
    total = 0
    for i, line in enumerate(lines):
        if 'f32 *)(' not in line or line.strip().startswith('//'):
            continue
        new_line, n = process_line(line)
        if n:
            lines[i] = new_line
            total += n
    if total > 0:
        print(f"{path}: {total} fix(es)")
        if apply_changes:
            path.write_text('\n'.join(lines), encoding='utf-8', newline='')
    return total


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    total = 0
    files_touched = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, args.apply)
        if count:
            total += count
            files_touched += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total} float-shift operand(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
