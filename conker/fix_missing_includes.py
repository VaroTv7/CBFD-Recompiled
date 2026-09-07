#!/usr/bin/env python3
"""
Add the standard include block to decompiled .c files that are missing it
entirely.

Background: every properly set-up file in this codebase starts with a
leading '/** ... */' doc comment (added by the decompilation tooling)
followed by:

    #include <ultra64.h>

    #include "functions.h"
    #include "variables.h"

...before any code, since 's32'/'f32'/'u8'/etc (and every project
function/global declared in functions.h/variables.h) are only defined
via those headers. A large number of files across src/game (and a
handful elsewhere) are missing this block entirely -- most likely lost
at some point during the raw-asm-to-C conversion process -- meaning
they fail to compile the moment they reference any of those types with
errors like 'Syntax Error' / 'Empty declaration specifiers' on every
single line. Because make aborts scheduling further parallel recipes
after the first hard error, most of these were never individually
compiled/discovered until a full '-k' (keep-going) build was run.

This script only touches files that:
  - start with the standard leading '/** ... */' doc comment, AND
  - have zero '#include' directives anywhere in the file (so we never
    risk double-including or fighting a file that already gets these
    types some other way, e.g. via a different SDK header like
    n_libaudio.h).

Insertion point: immediately after the closing '*/' of the leading doc
comment, using the exact spacing/style already used by every other
converted file in this codebase.

Usage:
    python3 fix_missing_includes.py --root .            # dry run
    python3 fix_missing_includes.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

DOC_COMMENT_START_RE = re.compile(r'^/\*\*\s*$')
DOC_COMMENT_END_RE = re.compile(r'\*/\s*$')

INCLUDE_BLOCK = (
    '\n#include <ultra64.h>\n'
    '\n#include "functions.h"\n'
    '#include "variables.h"\n'
)


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    if '#include' in text:
        return False
    lines = text.split('\n')
    if not lines or not DOC_COMMENT_START_RE.match(lines[0]):
        return False

    end_idx = None
    for i, line in enumerate(lines):
        if DOC_COMMENT_END_RE.search(line):
            end_idx = i
            break
    if end_idx is None:
        return False

    new_lines = lines[:end_idx + 1] + INCLUDE_BLOCK.split('\n') + lines[end_idx + 1:]
    new_text = '\n'.join(new_lines)

    print(f"{path}: added include block after line {end_idx + 1}")
    if apply_changes:
        path.write_text(new_text, encoding='utf-8', newline='')
    return True


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    targets = list(root.glob('src/**/*.c'))

    fixed = 0
    for path in sorted(targets):
        if process_file(path, args.apply):
            fixed += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {fixed} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
