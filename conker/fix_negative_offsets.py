#!/usr/bin/env python3
"""
Fix the systemic 'IDENT->unk-N' pattern found across ~68 files -- a
decompiler artifact where a negative hex byte-offset got embedded
directly into a field name (e.g. 'var_v0->unk-8'), which isn't a valid
C identifier at all ('-' can't appear in a name; the compiler parses
this as subtraction).

Converts 'IDENT->unk-N' to a valid pointer-offset expression:
    *(TYPE *)((char *)(IDENT) - 0xN)

TYPE is inferred from a cast appearing on the same line (e.g. '(s16)',
'(u8)') when exactly one distinct cast type is present; otherwise
defaults to s32 (a safe, common width for this codebase's decompiled
register-width values).

Only matches a SIMPLE IDENTIFIER immediately before '->unk-N' -- this
covers the overwhelming majority of real occurrences. A handful of
occurrences with a compound parenthesized expression before '->' are
deliberately left untouched (they're rare, and a wrong substitution
there is worse than leaving them for manual handling).

Skips lines that are entirely commented out (start with // after
stripping whitespace) -- those are dead code and don't need fixing.

Usage:
    python3 fix_negative_offsets.py            # dry run, report only
    python3 fix_negative_offsets.py --apply    # write changes
"""
import argparse
import re
from pathlib import Path

# Matches: simple identifier, '->', 'unk-', then a hex offset (digits/A-F,
# case-insensitive, matching this codebase's "unkNN means hex offset NN"
# convention), with a word boundary after so we don't eat trailing digits
# that are actually part of a different, valid field name.
PATTERN = re.compile(r'\b([A-Za-z_]\w*)\s*->\s*unk-([0-9A-Fa-f]+)\b')

CAST_RE = re.compile(r'\((s8|u8|s16|u16|s32|u32|f32)\)')


def infer_type(line):
    m = CAST_RE.search(line)
    if m:
        return m.group(1)
    return 's32'


def fix_line(line):
    if not PATTERN.search(line):
        return line, 0
    if line.strip().startswith('//'):
        return line, 0

    field_type = infer_type(line)
    count = 0

    def replace(m):
        nonlocal count
        count += 1
        ident, offset_hex = m.group(1), m.group(2)
        return f'(*({field_type} *)((char *)({ident}) - 0x{offset_hex}))'

    new_line = PATTERN.sub(replace, line)
    return new_line, count


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines(keepends=True)

    total = 0
    new_lines = []
    changed = []

    for i, line in enumerate(lines, 1):
        new_line, count = fix_line(line)
        if count:
            total += count
            changed.append((i, line.rstrip('\n'), new_line.rstrip('\n')))
        new_lines.append(new_line)

    if total > 0:
        print(f"{path}: {total} fix(es) in {len(changed)} line(s)")
        if apply_changes:
            path.write_text(''.join(new_lines), encoding='utf-8', newline='')

    return total


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    targets = list(root.glob('src/**/*.c'))

    total_fixed = 0
    files_fixed = 0

    for path in sorted(targets):
        count = process_file(path, args.apply)
        if count:
            total_fixed += count
            files_fixed += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total_fixed} occurrence(s) "
          f"across {files_fixed} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
