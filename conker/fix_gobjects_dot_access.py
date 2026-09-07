#!/usr/bin/env python3
"""
gObjects is `extern struct127 gObjects[25];` -- an array, not a single
struct. Bare `gObjects.fieldName` dot-access (as opposed to the correct
`gObjects[N].fieldName` or `gObjects[0].fieldName`) is a decompiler
artifact that mips_to_c renders when the real index is always 0 and it
collapses `(&gObjects[0])->field` down to `gObjects->field`-shaped
output that then gets further mis-rendered as dot-access. Every other
already-fixed occurrence in this codebase (game_90840.c, game_FDD70.c)
uses index 0, so this is a safe, mechanical, single-shape rewrite:
`gObjects.` -> `gObjects[0].` (never touches `gObjects[...]` which is
already correct, and never touches `&gObjects` which is a separate,
already-handled pattern).

Usage:
    python3 fix_gobjects_dot_access.py            # dry run
    python3 fix_gobjects_dot_access.py --apply    # write changes
"""
import argparse
import re
from pathlib import Path

PATTERN = re.compile(r'\bgObjects\.')


def process_file(path, apply_changes):
    text = path.read_text(errors='replace')
    count = len(PATTERN.findall(text))
    if count:
        print(f"{path}: {count} occurrence(s)")
        if apply_changes:
            new_text = PATTERN.sub('gObjects[0].', text)
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
