#!/usr/bin/env python3
"""
Fix the '?32' unknown-but-32-bit-wide type placeholder left by
mips_to_c -- a sibling of the 'void *32' pattern fix_void_star_32.py
already handles, and of the bare '?' placeholder fix_unknown_types.py
handles in prototype lines. This one shows up as a LOCAL variable or
global declaration's type ('?32 sp36C;', '?32 *var_a0;',
'extern ?32 D_800889A0;'), which fix_unknown_types.py's '?' handling
never catches: its LEADING_QMARK_RE requires the '?' to be followed by
whitespace, but here it's glued directly to '32' with no space, and
these lines sit inside function bodies (past the first '{'), which
that script deliberately never touches (real ternary expressions live
there too).

'?32' unambiguously denotes a 32-bit-wide value of unknown type,
consistent with every occurrence being a declaration's type token
(never inside an actual expression -- a real ternary is always
'? <expr>', never '?32' glued together). Resolving it to 's32'
everywhere (matching fix_void_star_32.py's resolution for the
analogous 'void *32' pattern) handles both the bare and
pointer-to-it forms correctly with one literal substitution:
'?32 var;' -> 's32 var;', '?32 *var;' -> 's32 *var;'.

Usage:
    python3 fix_question_32.py --root .            # dry run
    python3 fix_question_32.py --root . --apply    # write changes
"""
import argparse
from pathlib import Path

PATTERN = "?32"
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
