#!/usr/bin/env python3
"""
Remove local top-of-file 'extern'-style declarations that duplicate a
real declaration already provided by functions.h or variables.h.

Background: many auto-decompiled files carry their own local forward
declarations for functions/globals actually defined elsewhere, written
before functions.h/variables.h existed or were being included. Once a
file gets the standard '#include "functions.h"' / '#include
"variables.h"' block, these local declarations become redundant --
and often actively conflict (different, since-corrected types),
causing 'redeclaration' / 'Incompatible function return type' errors.

Only removes declarations that are:
  - in the leading block of a file, before its first function body
    ('{' outside a comment)
  - NOT tagged '/* static */' (those are legitimate forward decls for
    functions this same file defines later, and must be kept even if
    the name happens to collide)
  - for a name that genuinely exists in functions.h or variables.h

Usage:
    python3 remove_redundant_externs.py            # dry run
    python3 remove_redundant_externs.py --apply    # write changes
"""
import argparse
import re
from pathlib import Path

# Stars use '(?:\*\s*)*', not '\**' -- this codebase routinely puts
# whitespace BETWEEN multiple stars in a type ('void * *NAME', not
# 'void **NAME'), and '\**' only matches CONSECUTIVE '*' characters,
# so it silently fails to match these lines at all (same bug class
# found and fixed in relax_prototypes.py's PROTOTYPE_RE).
LOCAL_DECL_RE = re.compile(
    r'^\s*(?:extern\s+)?[\w ]+?\s*(?:\*\s*)*([A-Za-z_]\w*)\s*'
    r'(?:\([^;]*\)|\[[^\]]*\])?\s*;\s*(?:/\*.*\*/)?\s*$'
)


def extract_names_from_header(path):
    names = set()
    text = Path(path).read_text(errors='replace')
    for m in re.finditer(
        r'^\s*[\w ]+?\s+(?:\*\s*)*([A-Za-z_]\w*)\s*\([^;]*\)\s*;', text, re.MULTILINE
    ):
        names.add(m.group(1))
    for m in re.finditer(
        r'^\s*extern\s+[\w ]+?\s*(?:\*\s*)*([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;',
        text, re.MULTILINE
    ):
        names.add(m.group(1))
    return names


def process_file(path, functions_names, variables_names, apply_changes):
    text = path.read_text(errors='replace')
    lines = text.split('\n')

    # A local extern is only genuinely redundant if THIS file actually
    # includes the header that (re-)provides it -- functions.h/variables.h
    # aren't visible to every .c file (notably the libultra/SDK-side
    # files, which never include the game's variables.h). Removing a
    # local extern just because the name happens to exist in one of
    # those headers, without checking the file's own #include list,
    # silently reintroduces 'undefined' errors in exactly the files that
    # don't have that header in scope. Found via n_synthesizer.c and
    # getthreadpri.c: both needed a hand-added local `extern` for a name
    # that genuinely lives in variables.h, and this script kept
    # stripping it back out on every rerun since neither file includes
    # variables.h at all.
    real_names = set()
    if re.search(r'#include\s*"functions\.h"', text):
        real_names |= functions_names
    if re.search(r'#include\s*"variables\.h"', text):
        real_names |= variables_names

    # Find where the leading declaration block ends: the first line
    # containing an unescaped '{' that isn't inside a // comment.
    top_end = len(lines)
    for i, line in enumerate(lines):
        stripped = line.strip()
        if '{' in line and not stripped.startswith('//'):
            top_end = i
            break

    removed = []
    kept_lines = []
    for i, line in enumerate(lines):
        if i < top_end:
            if '/* static */' not in line:
                m = LOCAL_DECL_RE.match(line)
                if m and m.group(1) in real_names:
                    removed.append(line.strip())
                    continue
        kept_lines.append(line)

    if removed:
        print(f"{path}: removing {len(removed)} redundant declaration(s)")
        if apply_changes:
            path.write_text('\n'.join(kept_lines), encoding='utf-8', newline='')

    return len(removed)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    parser.add_argument('--functions-h', default='include/functions.h')
    parser.add_argument('--variables-h', default='include/variables.h')
    args = parser.parse_args()

    root = Path(args.root)
    functions_names = extract_names_from_header(Path(args.root) / args.functions_h)
    variables_names = extract_names_from_header(Path(args.root) / args.variables_h)
    print(f"Loaded {len(functions_names)} names from functions.h, "
          f"{len(variables_names)} from variables.h")

    total = 0
    files_touched = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, functions_names, variables_names, args.apply)
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
