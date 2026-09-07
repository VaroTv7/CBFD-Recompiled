#!/usr/bin/env python3
"""
Pad/trim CROSS-FILE calls to a function whose STRICT (non-relaxed)
prototype in functions.h disagrees with the call site's own argument
count -- "The number of arguments doesn't agree with the number in the
declaration."

Background: relax_prototypes.py relaxes every functions.h prototype to
empty parens ('TYPE name();'), which disables arg-count checking
entirely -- the usual, safe way this codebase tolerates mismatched
call-site argument counts across files. But
restore_promotion_safe_signatures.py must then RESTORE the real, full
prototype for any function whose actual C definition uses a
promotion-risky parameter type directly (f32, s8, u8, s16, u16 -- see
that script's docstring for why: a K&R empty-parens declaration implies
default argument promotion, which such a definition's own unpromoted
parameter type doesn't satisfy, producing a DIFFERENT hard error). This
is unavoidable -- the prototype must stay strict for these functions --
which means any OTHER file's call site with the wrong argument count is
now exposed to the exact "number of arguments doesn't agree" error that
relax_prototypes.py exists to prevent, just for this one carved-out set
of functions, and pad_undercounted_same_file_calls.py /
trim_overcounted_same_file_calls.py don't reach it since those calls
live in a DIFFERENT file than the definition.

Fix: read every currently-strict (non-empty-parens) prototype out of
functions.h as the authoritative real parameter count, then scan every
.c file tree-wide for calls to that name and pad (with trailing '0'
arguments) or trim (drop excess trailing arguments) to match -- the
exact same safe, mechanical, build-only-priority philosophy as the
same-file pad/trim scripts, just sourced from functions.h and scoped to
the whole tree instead of one file. Skips a name's own definition line
(ends in '{') wherever it lives, so re-running this after the same-file
scripts is a safe no-op for calls they already fixed.

Usage:
    python3 fix_cross_file_arg_counts.py --root .            # dry run
    python3 fix_cross_file_arg_counts.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

STRICT_PROTO_RE = re.compile(
    r'^\s*[\w ]+?\s*(?:\*\s*)*\s*([A-Za-z_]\w*)\s*\(([^();]+)\)\s*;'
)


def count_params(paramstr):
    paramstr = paramstr.strip()
    if paramstr == '' or paramstr == 'void':
        return 0
    return len([p for p in paramstr.split(',') if p.strip() != ''])


def count_call_args(argstr):
    argstr = argstr.strip()
    if argstr == '':
        return 0
    depth = 0
    count = 1
    for ch in argstr:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        elif ch == ',' and depth == 0:
            count += 1
    return count


def find_matching_close(text, open_idx):
    depth = 0
    i = open_idx
    while i < len(text):
        if text[i] == '(':
            depth += 1
        elif text[i] == ')':
            depth -= 1
            if depth == 0:
                return i
        i += 1
    return None


def split_top_level_args(argstr):
    parts = []
    depth = 0
    start = 0
    for i, ch in enumerate(argstr):
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        elif ch == ',' and depth == 0:
            parts.append(argstr[start:i])
            start = i + 1
    parts.append(argstr[start:])
    return parts


def get_strict_functions(functions_h_path):
    text = Path(functions_h_path).read_text(encoding='utf-8', errors='replace')
    names = {}
    for line in text.split('\n'):
        m = STRICT_PROTO_RE.match(line)
        if not m:
            continue
        name, params = m.group(1), m.group(2)
        names[name] = count_params(params)
    return names


def process_file(path, targets, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')

    total = 0
    for i, line in enumerate(lines):
        if not any(name in line for name in targets):
            continue
        new_line = line
        search_from = 0
        changed = False
        while True:
            m = re.search(r'\b([A-Za-z_]\w*)\s*\(', new_line[search_from:])
            if not m:
                break
            name = m.group(1)
            open_idx = search_from + m.end() - 1
            if name not in targets:
                search_from = open_idx + 1
                continue
            param_count = targets[name]
            close_idx = find_matching_close(new_line, open_idx)
            if close_idx is None:
                break
            after = new_line[close_idx + 1:close_idx + 2]
            if after == '{':
                search_from = close_idx + 1
                continue
            argstr = new_line[open_idx + 1:close_idx]
            nargs = count_call_args(argstr)
            if nargs < param_count:
                if nargs == 0:
                    pad = '0' + ', 0' * (param_count - 1)
                else:
                    pad = ', 0' * (param_count - nargs)
                new_line = new_line[:close_idx] + pad + new_line[close_idx:]
                total += 1
                changed = True
                search_from = close_idx + len(pad) + 1
            elif nargs > param_count:
                args = split_top_level_args(argstr)
                kept = args[:param_count]
                new_argstr = ','.join(kept)
                new_line = (new_line[:open_idx + 1] + new_argstr
                            + new_line[close_idx:])
                total += 1
                changed = True
                search_from = open_idx + 1 + len(new_argstr) + 1
            else:
                search_from = close_idx + 1
        if changed:
            lines[i] = new_line

    if total > 0:
        print(f"{path}: fixed {total} call(s)")
        if apply_changes:
            path.write_text('\n'.join(lines), encoding='utf-8', newline='')
    return total


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    targets = get_strict_functions(root / 'include' / 'functions.h')
    print(f"Loaded {len(targets)} strict (non-relaxed) function.h prototype(s)")

    total = 0
    files_touched = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, targets, args.apply)
        if count:
            total += count
            files_touched += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total} cross-file call(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
