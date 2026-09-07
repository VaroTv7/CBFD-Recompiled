#!/usr/bin/env python3
"""
struct127 (gObjects's element type) had ~22 of its fields renamed from
generic `unkXX` names to semantic names (x_position, y_position,
animation_speed, disable_run, stunned, immune, camera, etc) at some
point, each still carrying an explicit `/* 0xNN */` offset comment in
structs.h. Older/decompiled call sites that access `gObjects[N].unkXX`
for one of these now-renamed offsets reference a member name that no
longer exists, producing a paired
"'unkXX' undefined" + "member of structure or union required" error
(NOT a "no such member" error -- IDO falls back to treating the
unresolved member name as a bare identifier, which is also undefined).

This script rebuilds the offset->real-name map directly from
structs.h's explicit `/* 0xNN */` comments on struct127's fields, then
rewrites `gObjects[<index>].unkXX` (any array index, not just 0) to
use the real field name wherever XX matches one of those offsets.
Fields that were never renamed (still literally `unkXX` in structs.h)
are left untouched -- this only touches the ~22 known renamed offsets.

Usage:
    python3 fix_gobjects_renamed_fields.py            # dry run
    python3 fix_gobjects_renamed_fields.py --apply    # write changes
"""
import argparse
import re
from pathlib import Path

STRUCTS_H = "include/structs.h"


def build_offset_map():
    lines = Path(STRUCTS_H).read_text(errors="replace").split("\n")
    start = end = None
    for i, l in enumerate(lines):
        if l.strip().startswith("struct struct127 {"):
            start = i
        if start is not None and l.strip().startswith("};") and i > start:
            end = i
            break
    body = lines[start + 1:end]

    mapping = {}
    for l in body:
        m = re.search(r'/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*[\w\s\*]+?\b(\w+)\s*(\[|;)', l)
        if m:
            off = int(m.group(1), 16)
            name = m.group(2)
            if not re.match(r'^(unk|pad)[0-9A-Fa-f]+$', name):
                mapping[f"unk{off:X}"] = name
    return mapping


def process_file(path, pattern, mapping, apply_changes):
    text = path.read_text(errors='replace')

    def repl(m):
        return m.group(1) + mapping[m.group(2)]

    new_text, count = pattern.subn(repl, text)
    if count:
        print(f"{path}: {count} occurrence(s)")
        if apply_changes:
            path.write_text(new_text, encoding='utf-8', newline='')
    return count


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    mapping = build_offset_map()
    print(f"Loaded {len(mapping)} renamed struct127 field(s) from structs.h")
    names = sorted(mapping, key=lambda n: int(n[3:], 16))
    alt = '|'.join(re.escape(n) for n in names)
    pattern = re.compile(r'(gObjects\[[^\]]+\]\.)(' + alt + r')\b')

    total = 0
    files_touched = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, pattern, mapping, args.apply)
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
