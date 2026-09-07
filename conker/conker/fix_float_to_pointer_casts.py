#!/usr/bin/env python3
"""
Fix invalid float-to-pointer casts like '(void *) temp_f12' or
'(u8 *) var_f14' (illegal -- you can't cast a float VALUE to a pointer
type in C) by converting them to a proper bit-reinterpretation:
'(*(void **)&temp_f12)' / '(*(u8 **)&var_f14)'.

Background: an earlier fix converted a decompiler annotation
'(bitwise ? *)' to '(void *)', intending to preserve the original
"reinterpret these bits as a pointer" meaning. But a direct value cast
doesn't do that for a float -- it needs to reinterpret the same 4 bytes,
not convert the numeric value. Since float and pointers are both 4
bytes on this 32-bit target, taking the address and dereferencing
through a TYPE** achieves the correct bit-for-bit reinterpretation,
for ANY target pointer type -- not just 'void *' (the original,
narrower version of this script only handled that one case; extended
after finding the identical bug with 'f32 *'/'u8 *'/'s16 *'/'s32 *'/
'void **' targets too).

General rule: '(TARGET_TYPE) X' -> '(*(TARGET_TYPE *)&X)' where
TARGET_TYPE is whatever pointer type was in the original cast, verified
against the pre-existing 'void *' case: TARGET_TYPE = 'void *' gives
'(*(void * *)&X)' = '(*(void **)&X)', exactly the original transform.

Only touches identifiers matching this codebase's float-naming
convention (temp_f*, var_f*), which are unambiguously float-typed --
other identifiers following a pointer cast (arg0, temp_v0, function
pointers, etc.) are typically already fine as ordinary pointer/integer
casts and are left untouched.

Usage:
    python3 fix_float_to_pointer_casts.py --root . --apply
"""
import argparse
import re
from pathlib import Path

# TARGET_TYPE: a type name followed by one or more '*' (a pointer cast).
PATTERN = re.compile(
    r'\(([A-Za-z_]\w*\s*\*+)\)\s*((?:temp_f|var_f)\w*)'
)


def fix_file(path, apply_changes):
    text = path.read_text(errors='replace')
    new_text, count = PATTERN.subn(r'(*(\1 *)&\2)', text)
    if count and apply_changes:
        path.write_text(new_text, encoding='utf-8', newline='')
    return count


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    total = 0
    files_touched = 0
    for path in root.glob('src/**/*.c'):
        count = fix_file(path, args.apply)
        if count:
            print(f"{path}: {'fixed' if args.apply else 'would fix'} {count}")
            total += count
            files_touched += 1

    print()
    print(f"{'Fixed' if args.apply else 'Would fix'} {total} invalid cast(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
