#!/usr/bin/env python3
"""
Fix a wrong-type-inference bug from fix_untyped_field_access.py /
fix_compound_arrow_access.py: when a CHAINED access like
'arg0->unk31C->unk1BC = (f32) something;' gets its first link
('arg0->unk31C') rewritten into a macro-style read, both of those
scripts infer the read's TYPE from the first '(TYPE)' cast found
ANYWHERE on the line -- which, for a chained access, is very often the
cast belonging to the FINAL assignment's right-hand side (here, the
'(f32)' in front of 'something'), not the type the intermediate link
actually needs to be treated as. Since the intermediate value gets
immediately used as a base address for the second '->' access, it
needs a pointer-compatible type (s32, by this codebase's established
int-to-pointer-tolerance convention) -- 'f32' produces exactly
'(char *)((*(f32 *)(...)))', a direct "cast a float value to a
pointer" which IDO cc correctly rejects.

This is unambiguous and safe to fix as a blanket literal-text
substitution: '(char *)((*(f32 *)' can ONLY ever appear as the result
of this exact bug (a float-typed dereference immediately wrapped for
pointer arithmetic) -- there's no legitimate reason to cast a real
float value to a byte pointer, so every occurrence is already a
compile error before this fix. Swaps just the inner 'f32' for 's32',
which is always a valid change since the surrounding scripts default
to 's32' as their own generic fallback type everywhere else.

Usage:
    python3 fix_chained_float_type_inference.py --root .            # dry run
    python3 fix_chained_float_type_inference.py --root . --apply    # write changes
"""
import argparse
from pathlib import Path

PATTERN = '(char *)((*(f32 *)'
REPLACEMENT = '(char *)((*(s32 *)'


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    count = text.count(PATTERN)
    if count == 0:
        return 0

    print(f"{path}: {count} occurrence(s)")
    if apply_changes:
        path.write_text(text.replace(PATTERN, REPLACEMENT), encoding='utf-8', newline='')
    return count


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
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total} occurrence(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
