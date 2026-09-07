#!/usr/bin/env python3
"""
Remove local per-file 'extern' forward-declarations that collide with a
real N64 SDK (libultra) function already declared -- with the real,
exact signature -- by a header pulled in via <ultra64.h> (e.g. gu.h's
sinf/cosf/guMtxF2L/guMtxL2F/guMtxIdentF, os_libc.h's bzero/bcopy,
os_message.h's osRecvMesg/osCreateMesgQueue, etc).

Background: this codebase's convention is for every file that calls a
function to carry its own local forward-declaration copy (see
remove_redundant_externs.py, which does the same thing for THIS
project's own functions.h/variables.h names). That script never
touches SDK names since they're not declared in functions.h/
variables.h. Until recently, most files didn't even include
<ultra64.h> (see fix_missing_includes.py) so this never surfaced --
now that they do, the local copy (always a bare 'TYPE name();' K&R
declaration with no real parameter list) conflicts with the SDK
header's real prototyped declaration:
    'redeclaration of X; previous declaration at line N in file Y'
    'prototype and non-prototype declaration found for X, the type of
    this parameter is not compatible with default argument promotion'

Fix: just delete the local copy -- the SDK header's own declaration
(pulled in transitively by <ultra64.h>) is already in scope and
correct.

Usage:
    python3 remove_sdk_extern_redeclarations.py --root .            # dry run
    python3 remove_sdk_extern_redeclarations.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

# Real libultra/SDK functions that are declared for real (with a
# genuine prototype) by headers pulled in via <ultra64.h>, but which
# this codebase's decompiled files also routinely carry a redundant
# bare local 'extern'-style declaration for.
SDK_NAMES = {
    "sinf", "cosf", "sqrtf", "bzero", "bcopy",
    "guMtxF2L", "guMtxL2F", "guMtxIdentF",
    "guMtxCatL", "guMtxXFMF", "guPerspective", "guPerspectiveF",
    "osRecvMesg", "osCreateMesgQueue", "osSetTimer", "osSendMesg",
    "osWritebackDCache", "osWritebackDCacheAll", "osInvalDCache",
    "osSpTaskLoad", "osPiStartDma", "osGetTime",
}

# A local top-of-file declaration line: 'TYPE name(...);' optionally
# followed by a trailing comment, matching this codebase's own style
# (see remove_redundant_externs.py). Only matches declarations (no
# '{'), never real definitions.
DECL_RE = re.compile(
    r'^\s*[A-Za-z_][\w ]*?\**\s*\b(' + '|'.join(SDK_NAMES) + r')\s*\([^;{]*\)\s*;\s*(?:/[/*].*)?$'
)


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')

    # Bound to the leading declaration block (before the first real
    # function body). Without this, DECL_RE's '[\w ]*?\s*\bNAME\s*(...);'
    # shape also matches an ordinary call STATEMENT inside a function
    # body (e.g. 'return sinf(x);', where 'return' plays the role of the
    # "type" prefix) -- unbounded, this would DELETE that entire live
    # call statement, not just a redundant declaration. Same bug class/
    # fix as restore_promotion_safe_signatures.py and
    # add_relaxed_self_declarations.py's locally_declared scan, but
    # worse here since the matched line is deleted outright rather than
    # having its arguments rewritten.
    top_end = len(lines)
    for i, line in enumerate(lines):
        if '{' in line and not line.strip().startswith('//'):
            top_end = i
            break

    new_lines = []
    removed = []
    for i, line in enumerate(lines):
        if i < top_end:
            m = DECL_RE.match(line)
            if m:
                removed.append(m.group(1))
                continue
        new_lines.append(line)

    if not removed:
        return 0

    print(f"{path}: removed {len(removed)} declaration(s) ({', '.join(sorted(set(removed)))})")
    if apply_changes:
        path.write_text('\n'.join(new_lines), encoding='utf-8', newline='')
    return len(removed)


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
    print(f"{'Would remove' if not args.apply else 'Removed'} {total} declaration(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
