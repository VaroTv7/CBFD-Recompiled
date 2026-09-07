#!/usr/bin/env python3
"""
Trim same-file calls to a function that pass MORE arguments than its
own real definition (in that same file) declares, when those calls
occur AFTER the definition.

Background: this is the mirror image of
pad_undercounted_same_file_calls.py's problem (see that script's
docstring for the full explanation of why a same-file call located
AFTER its own function's definition is checked strictly against that
definition's real parameter count, no matter what else was declared
earlier in the file, or how many other call sites disagree).

Where the call passes MORE arguments than the definition expects, this
is the OTHER half of this codebase's well-documented "structural
pattern" (see HANDOFF.md): mips_to_c's decompiled call sites sometimes
carry trailing arguments the real function signature doesn't actually
use (a genuinely-unused parameter the decompiler never inferred into
the definition because the function body never references it). Since
we only aim for successful compilation (not byte-accurate behavior --
see HANDOFF.md's stated goal), dropping the call's excess trailing
arguments to match the real parameter count is a safe, mechanical fix:
it makes the call's arity agree with the definition (resolving the
compile error) without touching the definition itself or any OTHER
caller in a different file (which still goes through the file's own
relaxed/empty-parens declaration and was never broken in the first
place). This is the same trim-to-fit philosophy already used for real
SDK calls in fix_sdk_call_arg_counts.py, applied here to this
project's own same-file functions instead.

Deliberately does NOT handle the opposite direction (a call passing
FEWER arguments than the definition) -- that's pad_undercounted_same_
file_calls.py's job.

Extension: same as pad_undercounted_same_file_calls.py's -- a strict
local forward declaration appearing BEFORE the definition governs calls
between itself and the definition just as strictly as the definition
governs calls after it, so the search must start at the earliest of
(strict declaration, definition), not just the definition. See that
script's docstring for the full rationale.

Usage:
    python3 trim_overcounted_same_file_calls.py --root .            # dry run
    python3 trim_overcounted_same_file_calls.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

FUNC_DEF_RE = re.compile(
    r'^[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{\s*(?://.*)?$'
)
STRICT_DECL_RE = re.compile(
    r'^\s*[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*;'
)


def count_params(paramstr):
    paramstr = paramstr.strip()
    if paramstr == '' or paramstr == 'void':
        return 0
    return len([p for p in paramstr.split(',') if p.strip() != ''])


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
    """Splits argstr into a list of top-level (depth-0) argument
    substrings, preserving each argument's own exact text (including
    any internal whitespace) so trimming can just drop trailing
    entries without reformatting the ones that remain."""
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


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')

    # name -> (param_count, def_line_idx)
    defs = {}
    for i, line in enumerate(lines):
        m = FUNC_DEF_RE.match(line)
        if m:
            name, params = m.group(1), m.group(2)
            defs[name] = (count_params(params), i)

    if not defs:
        return 0

    # name -> earliest line idx of a strict (non-empty, typed) local
    # forward declaration, when it appears BEFORE that name's own
    # definition and its param count matches the definition's.
    strict_decl_start = {}
    for i, line in enumerate(lines):
        m = STRICT_DECL_RE.match(line)
        if not m:
            continue
        name, params = m.group(1), m.group(2)
        if name not in defs:
            continue
        param_count, def_idx = defs[name]
        if i >= def_idx:
            continue
        if count_params(params) != param_count:
            continue
        if name not in strict_decl_start or i < strict_decl_start[name]:
            strict_decl_start[name] = i

    total = 0
    for name, (param_count, def_idx) in defs.items():
        # Never trim a variadic-looking definition down to 0 -- if the
        # def itself takes 0 params ('void' or empty), any call with
        # args is a different, more suspicious mismatch; leave alone.
        if param_count == 0:
            continue
        start_idx = min(def_idx, strict_decl_start.get(name, def_idx))
        call_re = re.compile(r'\b' + re.escape(name) + r'\s*\(')
        for i in range(start_idx + 1, len(lines)):
            line = lines[i]
            if name not in line:
                continue
            search_from = 0
            new_line = line
            while True:
                m = call_re.search(new_line, search_from)
                if not m:
                    break
                open_idx = m.end() - 1
                close_idx = find_matching_close(new_line, open_idx)
                if close_idx is None:
                    break
                after = new_line[close_idx + 1:close_idx + 2]
                if after == '{':
                    search_from = close_idx + 1
                    continue
                argstr = new_line[open_idx + 1:close_idx]
                args = split_top_level_args(argstr)
                nargs = len(args) if argstr.strip() != '' else 0
                if nargs > param_count:
                    kept = args[:param_count]
                    new_argstr = ','.join(kept)
                    new_line = (new_line[:open_idx + 1] + new_argstr
                                + new_line[close_idx:])
                    total += 1
                    search_from = open_idx + 1 + len(new_argstr) + 1
                else:
                    search_from = close_idx + 1
            if new_line != line:
                lines[i] = new_line

    if total > 0:
        print(f"{path}: trimmed {total} call(s)")
        if apply_changes:
            path.write_text('\n'.join(lines), encoding='utf-8', newline='')

    return total


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
    print(f"{'Would trim' if not args.apply else 'Trimmed'} {total} call(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
