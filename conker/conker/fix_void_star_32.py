#!/usr/bin/env python3
"""
Fix the mangled 'void *32' pseudo-type left behind by an earlier ad-hoc
decompiler-annotation cleanup (the same kind of issue documented in
fix_float_to_pointer_casts.py, but a different mangled spelling).

Every occurrence -- as a cast '(void *32) expr', a parameter type
'void *32 argN', a pointer-to-it 'void *32 *argN', or an array-of-
function-pointers spelling like 'void *32 (*)[]' -- is used purely as a
same-size (32-bit) scalar reinterpretation: every call site and every
use inside the defining function treats it as a plain s32 (e.g.
'(*(s32 *)...) = arg6;' with no pointer dereference of arg6 anywhere).
Replacing the literal token 'void *32' with 's32' everywhere makes all
of these forms valid C with no behavior change on this 32-bit target
(s32 and void* are both 4 bytes).

Usage:
    python3 fix_void_star_32.py --root .            # dry run
    python3 fix_void_star_32.py --root . --apply    # write changes
"""
import argparse
from pathlib import Path

PATTERN = "void *32"
REPLACEMENT = "s32"


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

    for path in sorted(list(root.glob('src/**/*.c')) + list(root.glob('include/**/*.h'))):
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
