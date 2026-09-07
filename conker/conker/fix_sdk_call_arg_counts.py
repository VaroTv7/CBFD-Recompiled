#!/usr/bin/env python3
"""
Fix call sites to real N64 SDK (libultra) functions that pass a
different number of arguments than the SDK's own fixed, unrelaxable
prototype requires.

Background: relax_prototypes.py can tolerate mismatched call-site
argument counts for THIS PROJECT's own functions by relaxing their
declarations to K&R empty parens -- but SDK functions like
'sinf'/'cosf' (declared 'extern float sinf(float);' in
include/2.0L/PR/gu.h, a real header we never touch) always have a
real, strict prototype in scope via <ultra64.h>. mips_to_c's decompiled
call sites routinely guess extra (or too few) arguments for these --
e.g. 'sinf(temp_f2 * 2.0f, temp_a1, temp_a2, (s8) temp_a3)' (4 args)
when the real 'sinf' takes exactly 1 -- producing "the number of
arguments doesn't agree with the number in the declaration" at every
such call site, tree-wide.

Fix: trim excess trailing arguments down to each function's known real
arity (the first argument[s] are consistently the "real" one(s); the
extra trailing arguments are decompiler noise from mis-inferred
registers). Never pads under-counted calls for these functions (too
rare and too ambiguous what the missing argument's real value should
be here, unlike this project's OWN functions in
pad_undercounted_same_file_calls.py where padding with a placeholder
'0' is safe because behavior isn't the goal) -- those are left for
manual inspection.

Usage:
    python3 fix_sdk_call_arg_counts.py --root .            # dry run
    python3 fix_sdk_call_arg_counts.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

# name -> real fixed argument count (per the actual SDK header
# declaration, never relaxed since it's outside this project).
SDK_ARITY = {
    "sinf": 1,
    "cosf": 1,
    "bzero": 2,
    "bcopy": 3,
}


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
    """Split on top-level commas only (respecting nested parens)."""
    parts = []
    depth = 0
    current = []
    for ch in argstr:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        if ch == ',' and depth == 0:
            parts.append(''.join(current))
            current = []
        else:
            current.append(ch)
    parts.append(''.join(current))
    return parts


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines(keepends=True)
    total_fixes = 0

    for i, line in enumerate(lines):
        if line.strip().startswith('//'):
            continue
        new_line = line
        for name, arity in SDK_ARITY.items():
            if name not in new_line:
                continue
            call_re = re.compile(r'\b' + re.escape(name) + r'\s*\(')
            search_from = 0
            while True:
                m = call_re.search(new_line, search_from)
                if not m:
                    break
                open_idx = m.end() - 1
                close_idx = find_matching_close(new_line, open_idx)
                if close_idx is None:
                    break
                # Skip a definition/declaration line (never a call).
                after = new_line[close_idx + 1:close_idx + 2].strip()
                if new_line[close_idx + 1:close_idx + 2] == '{':
                    search_from = close_idx + 1
                    continue
                argstr = new_line[open_idx + 1:close_idx]
                args = split_top_level_args(argstr) if argstr.strip() else []
                if len(args) > arity:
                    kept = ','.join(args[:arity])
                    new_line = (new_line[:open_idx + 1] + kept + ')'
                                + new_line[close_idx + 1:])
                    total_fixes += 1
                    search_from = open_idx + 1 + len(kept) + 1
                else:
                    search_from = close_idx + 1
        if new_line != line:
            lines[i] = new_line

    if total_fixes > 0:
        print(f"{path}: {total_fixes} fix(es)")
        if apply_changes:
            path.write_text(''.join(lines), encoding='utf-8', newline='')

    return total_fixes


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
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total} call(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
