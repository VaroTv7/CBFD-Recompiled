#!/usr/bin/env python3
"""
Find and fix bare '?' type placeholders (left over from mips_to_c's
"unknown type" output) in forward-declaration prototype lines.

IMPORTANT SAFETY NOTE: '?' is also C's ternary operator, used constantly
inside real function bodies (cond ? a : b). This script only touches
lines that look like a complete, standalone prototype declaration
(TYPE name(params);) with no function body -- prototypes never contain
ternary expressions, since they have no executable code at all. It does
NOT touch anything inside { } function bodies.

Replaces each standalone '?' type slot with 'void *' -- a generic
placeholder that's compatible (with implicit-cast warnings, same as
the "illegal combination of pointer and integer" warnings already
common throughout this codebase) with most real parameter types.

Usage:
    python3 fix_unknown_types.py --dry-run    # report only, no changes
    python3 fix_unknown_types.py --apply      # apply changes
"""
import argparse
import re
import sys
from pathlib import Path

# Within a line, a standalone '?' type slot sits right after '(' or ','
# (with optional whitespace), and is followed by ',' or ')' or a
# pointer '*'. This works regardless of nested parens (e.g. function
# pointer parameter types) since it doesn't try to parse structure --
# it just finds '?' tokens in type-slot position anywhere on the line.
PARAM_QMARK_RE = re.compile(r'([(,]\s*)\?')

# A bare '?' as the return type at the very start of the line.
LEADING_QMARK_RE = re.compile(r'^(\s*)\?(?=\s)')

# 'extern ? NAME;' -- a bare '?' as a global variable's type. Use a
# plain scalar type (s32), not 'void', since 'void NAME;' is invalid
# for an object (only valid as a function return type / 'void *').
EXTERN_QMARK_RE = re.compile(r'(extern\s+)\?(\s+\w+\s*;)')

# 'extern ? *NAME;' -- same placeholder, but already followed by a
# pointer star (the decompiler's own pointer-case placeholder), e.g.
# 'extern ? *D_80090060;'. Unlike the bare-value case above, this one
# already has its own '*', so resolves to 'void' (giving 'void
# *NAME'), not 's32' (which would double up: 's32 *NAME' works too,
# but 'void *' is what fix_unknown_types.py already uses everywhere
# else for a pointer-shaped placeholder, e.g. LEADING_QMARK_RE/
# PARAM_QMARK_RE below -- kept consistent).
EXTERN_QMARK_PTR_RE = re.compile(r'(extern\s+)\?(\s*\*\s*\w+\s*;)')

# 'extern ? (*NAME)(args);' -- a bare '?' as a function POINTER
# global's return type, e.g. 'extern ? (*D_800E0934)(s32, s32, s32);'.
EXTERN_QMARK_FUNCPTR_RE = re.compile(r'(extern\s+)\?(\s*\(\s*\*\s*\w+\s*\)\s*\()')


def fix_line(line):
    if '?' not in line:
        return line, 0

    # Only the portion before the first '{' is a declaration/signature;
    # anything from '{' onward is a real function body and must never
    # be touched (that's where genuine ternary expressions live).
    brace_idx = line.find('{')
    if brace_idx == -1:
        head, tail = line, ''
    else:
        head, tail = line[:brace_idx], line[brace_idx:]

    if ':' in head:  # extra caution: a real ternary always has a matching ':'
        return line, 0

    count = 0

    def replace_leading(m):
        nonlocal count
        count += 1
        return m.group(1) + 'void *'

    def replace_param(m):
        nonlocal count
        count += 1
        return m.group(1) + 'void *'

    def replace_extern(m):
        nonlocal count
        count += 1
        return m.group(1) + 's32' + m.group(2)

    def replace_extern_ptr(m):
        nonlocal count
        count += 1
        return m.group(1) + 'void' + m.group(2)

    new_head = EXTERN_QMARK_PTR_RE.sub(replace_extern_ptr, head)
    new_head = EXTERN_QMARK_FUNCPTR_RE.sub(replace_extern_ptr, new_head)
    new_head = EXTERN_QMARK_RE.sub(replace_extern, new_head)
    new_head = LEADING_QMARK_RE.sub(replace_leading, new_head)
    new_head = PARAM_QMARK_RE.sub(replace_param, new_head)

    return new_head + tail, count


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines(keepends=True)

    total = 0
    new_lines = []
    changed_lines = []

    for i, line in enumerate(lines, 1):
        new_line, count = fix_line(line)
        if count:
            total += count
            changed_lines.append((i, line.rstrip('\n'), new_line.rstrip('\n')))
        new_lines.append(new_line)

    if total > 0:
        print(f"{path}: {total} placeholder(s) in {len(changed_lines)} line(s)")
        for lineno, old, new in changed_lines:
            print(f"  line {lineno}:")
            print(f"    - {old}")
            print(f"    + {new}")

        if apply_changes:
            path.write_text(''.join(new_lines), encoding='utf-8', newline='')

    return total


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true',
                         help='Actually write changes (default: dry run/report only)')
    parser.add_argument('--root', default='.',
                         help='Root directory to scan (default: current dir)')
    args = parser.parse_args()

    root = Path(args.root)
    targets = list(root.glob('src/**/*.c')) + list(root.glob('src/**/*.h')) + \
              list(root.glob('include/**/*.h'))

    total_fixed = 0
    files_fixed = 0

    for path in sorted(targets):
        count = process_file(path, args.apply)
        if count:
            total_fixed += count
            files_fixed += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total_fixed} placeholder(s) "
          f"across {files_fixed} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
