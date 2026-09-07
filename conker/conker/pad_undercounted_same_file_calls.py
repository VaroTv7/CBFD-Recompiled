#!/usr/bin/env python3
"""
Pad same-file calls to a function that pass FEWER arguments than its
own real definition (in that same file) declares, when those calls
occur AFTER the definition.

Background: add_relaxed_self_declarations.py handles a function
defined and called in the same file with no separate declaration, by
inserting a relaxed forward declaration before the definition -- but
that only helps calls that occur BEFORE the definition. In C, once a
full prototyped declaration is visible (and a function DEFINITION,
having real parameter types, is itself as strict as an explicit
prototype), it governs every later use in that translation unit --
an EARLIER, separately-declared relaxed form does not un-govern calls
that come after the strict one. So a same-file call located AFTER its
own function's definition is checked strictly against that
definition's real parameter count, no matter what else was declared
earlier in the file.

Where the call passes FEWER arguments than the definition expects,
this is this codebase's well-documented pattern (see HANDOFF.md's
"structural pattern" note): mips_to_c's decompiled call sites are
sometimes missing trailing arguments the real function signature
needs. Since we only aim for successful compilation (not
byte-accurate behavior -- see HANDOFF.md's stated goal), padding the
call with trailing '0' arguments to match the real parameter count is
a safe, mechanical fix: it makes the call's arity agree with the
definition (resolving the compile error) without touching the
definition itself or any OTHER caller in a different file (which
still goes through the file's own relaxed/empty-parens declaration
and was never broken in the first place).

Deliberately does NOT handle the opposite direction (a call passing
MORE arguments than the definition) -- that's the other half of the
same structural pattern (the definition itself is missing a genuinely
unused parameter mips_to_c couldn't infer), and needs the definition's
signature extended instead, which requires knowing the real ABI
argument position, not just discarding extra call-site arguments.

Bug history: an earlier version's padding condition was
'nargs < param_count and nargs > 0', silently skipping the ZERO-
argument case ('func()') entirely -- found via func_151F8870() being
called with no args where its real definition takes 2. The exclusion
turned out to be load-bearing for the ORIGINAL (buggy) padding
construction, not a deliberate business rule: 'pad = ", 0" * n'
assumes there's already at least one real argument to attach the
leading ", " to, so applying it when argstr is EMPTY would have
produced 'func(, 0)' -- invalid syntax with a leading comma and
nothing before it. Fixed by special-casing nargs == 0 to pad with a
bare '0' first (no leading comma) followed by ', 0' for any remaining
slots, and removing the 'nargs > 0' exclusion.

Extension: a function can also have a full, STRICT forward declaration
(a real typed prototype, not a relaxed empty-parens one -- see
add_relaxed_self_declarations.py, which deliberately skips adding a
relaxed declaration when a strict one already exists locally, since it
assumes that already solves the tolerance problem) appearing BEFORE its
own definition in the same file. Such a declaration governs calls
between itself and the definition just as strictly as the definition
governs calls after it -- so the search for under-counted calls must
start at the EARLIEST of (strict local declaration, definition), not
just the definition, while still padding against the DEFINITION's
param count (the authoritative real signature).

Usage:
    python3 pad_undercounted_same_file_calls.py --root .            # dry run
    python3 pad_undercounted_same_file_calls.py --root . --apply    # write changes
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
    # definition and its param count matches the definition's (sanity
    # check -- a mismatched count here would mean this isn't really the
    # same declaration, so leave the def_idx-only start point alone).
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
        start_idx = min(def_idx, strict_decl_start.get(name, def_idx))
        call_re = re.compile(r'\b' + re.escape(name) + r'\s*\(')
        for i in range(start_idx + 1, len(lines)):
            line = lines[i]
            if name not in line:
                continue
            # Process left-to-right, allow multiple calls on one line.
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
                # Skip the definition line itself (shouldn't recur here
                # since we start after def_idx, but a same-named local
                # forward-declaration ending in ';' should be skipped).
                after = new_line[close_idx + 1:close_idx + 2]
                if after == '{':
                    search_from = close_idx + 1
                    continue
                argstr = new_line[open_idx + 1:close_idx]
                nargs = count_call_args(argstr)
                if nargs < param_count:
                    # A zero-arg call ('func()') has an EMPTY argstr --
                    # ', 0' repeated would prepend a leading comma with
                    # nothing before it ('func(, 0)'), which is invalid.
                    # The first pad entry must be a bare '0' in that
                    # case; every other missing slot still gets ', 0'.
                    if nargs == 0:
                        pad = '0' + ', 0' * (param_count - 1)
                    else:
                        pad = ', 0' * (param_count - nargs)
                    new_line = new_line[:close_idx] + pad + new_line[close_idx:]
                    total += 1
                    search_from = close_idx + len(pad) + 1
                else:
                    search_from = close_idx + 1
            if new_line != line:
                lines[i] = new_line

    if total > 0:
        print(f"{path}: padded {total} call(s)")
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
    print(f"{'Would pad' if not args.apply else 'Padded'} {total} call(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
