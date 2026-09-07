#!/usr/bin/env python3
"""
Relax function prototypes to old-style K&R declarations (empty parens,
meaning 'unspecified arguments') across functions.h and every source
file's own local top-of-file declarations.

Background: many decompiled call sites for the same function use
different argument counts throughout the codebase (a known mips_to_c
limitation when it can't reliably determine every call site's real
arguments). Once functions have a real ANSI prototype in scope, ANSI C
enforces that every call matches -- causing widespread 'number of
arguments doesn't agree with the number in the declaration' errors.

K&R-style empty-parens declarations ('TYPE name();') mean "unspecified
arguments" and disable this check entirely, while leaving return-type
checking (and everything else) intact. This costs compile-time
argument validation, but not runtime correctness -- the generated call
code doesn't depend on the prototype's parameter list.

Only touches lines matching a full, simple prototype declaration
(TYPE name(params);) with a non-empty parameter list -- never touches
actual function definitions (which have a body).

Usage:
    python3 relax_prototypes.py                # dry run
    python3 relax_prototypes.py --apply        # write changes
"""
import argparse
import re
from pathlib import Path

# A prototype declaration: return type + optional stars, name, non-empty
# parameter list, ';' possibly followed by a comment, end of line.
# Excludes lines with '{' (real definitions) via the trailing ';' anchor.
# Stars use '(?:\*\s*)*', not '\**', because this codebase's own style
# routinely puts whitespace BETWEEN multiple stars in a return type
# ('void * *func_NAME(...)', not 'void **func_NAME(...)') -- '\**' only
# matches CONSECUTIVE '*' characters, so it silently failed to match
# these lines at all, leaving them un-relaxed with no error or warning.
# This was a real, confirmed bug: a function with a real, non-promotion
# -risky body (so restore_promotion_safe_signatures.py never touches
# it either) whose ONLY separate declaration used this spacing sat
# there un-relaxed indefinitely, its stale/mismatched-from-the-real-
# -definition parameter types silently never questioned until some
# OTHER fix in the same file let the compiler parse far enough to
# report the resulting 'redeclaration' conflict as an entirely new-
# looking error.
PROTOTYPE_RE = re.compile(
    r'^(\s*[\w ]+?\s*(?:\*\s*)*\s*[A-Za-z_]\w*\s*)\(([^();]+)\)(\s*;\s*(?:/\*.*\*/)?\s*)$'
)


def relax_line(line):
    m = PROTOTYPE_RE.match(line)
    if not m:
        return line, False
    prefix, params, suffix = m.groups()
    if params.strip() == '':
        return line, False  # already empty
    return f'{prefix}(){suffix}', True


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')

    count = 0
    for i, line in enumerate(lines):
        new_line, changed = relax_line(line)
        if changed:
            lines[i] = new_line
            count += 1

    if count > 0:
        print(f"{path}: relaxed {count} prototype(s)")
        if apply_changes:
            path.write_text('\n'.join(lines), encoding='utf-8', newline='')

    return count


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)

    total = 0
    files_touched = 0

    # functions.h itself
    fn_h = root / 'include' / 'functions.h'
    if fn_h.exists():
        count = process_file(fn_h, args.apply)
        if count:
            total += count
            files_touched += 1

    # Every source file's own local top-of-file declarations. To stay
    # safe (never touch anything inside a real function body), only
    # scan the leading block of each file up to its first '{'.
    for path in sorted(root.glob('src/**/*.c')):
        text = path.read_text(encoding='utf-8', errors='replace')
        lines = text.split('\n')
        top_end = len(lines)
        for i, line in enumerate(lines):
            if '{' in line and not line.strip().startswith('//'):
                top_end = i
                break

        count = 0
        for i in range(top_end):
            new_line, changed = relax_line(lines[i])
            if changed:
                lines[i] = new_line
                count += 1

        if count > 0:
            print(f"{path}: relaxed {count} local prototype(s)")
            if args.apply:
                path.write_text('\n'.join(lines), encoding='utf-8', newline='')
            total += count
            files_touched += 1

    print()
    print(f"{'Would relax' if not args.apply else 'Relaxed'} {total} prototype(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
