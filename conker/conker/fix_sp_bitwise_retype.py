#!/usr/bin/env python3
"""
Retype a 'spNN' local from f32 to s32 when it's genuinely used in an
integer/bitwise context ('&', '|', '%', '<<', '>>' as an operand) --
"Unacceptable operand of &." / "...remainder operator." / etc.

Background: fix_missing_sp_declarations.py defaults every genuinely-
undeclared spNN stack temp to f32 (see that script's docstring for why
that's the safe MAJORITY default in this codebase). But a minority of
spNN names turn out to be flag/bitfield-style integers, not floats --
'(sp68 & 1)', '(sp58 % 56U)' -- and f32 doesn't support bitwise/integer
operators at all, so the blanket default produces a NEW hard error for
exactly these. This is the expected, narrow follow-up correction (the
same "cascading exposure reveals a wrong guess, fix it" pattern this
whole session has used repeatedly) -- not a flaw unique to that script;
any single-type default would have the same minority-case problem.

Reads exact (file, line) pairs from a build_log.txt-shaped error list
(only "Unacceptable operand of &."/"...remainder operator." -- the two
categories that unambiguously mean "this operand must be an integer,
never a float", unlike e.g. "multiplicative operator" errors which can
have other causes). For each, finds every spNN-shaped identifier on
that exact line that is a direct operand of one of the integer-only
operators (&, |, %, <<, >>), and if that name is declared 'f32' inside
its own enclosing function (the same declaration-block scan used by
the sibling script), changes just that declaration line to 's32'.

Does NOT touch a spNN name that isn't currently declared f32 (e.g.
already s32, or array/pointer-typed) -- only ever narrows an existing
plain f32 declaration this project's OWN prior script added.
"""
import argparse
import re
from pathlib import Path
from collections import defaultdict

ERROR_RE = re.compile(
    r"^cfe: Error: ([^,]+), line (\d+): "
    r"(?:Unacceptable operand of &\.|Unacceptable operand of the remainder operator\.)"
)

SPNAME_RE = re.compile(r'\bsp[0-9A-Fa-f]+\b')

FUNC_DEF_RE = re.compile(
    r'^[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{\s*(?://.*)?$'
)


def parse_errors(errors_path):
    by_file = defaultdict(set)
    text = Path(errors_path).read_text(encoding='utf-8', errors='replace')
    for line in text.split('\n'):
        m = ERROR_RE.match(line)
        if not m:
            continue
        path = m.group(1).replace('\\', '/')
        by_file[path].add(int(m.group(2)))
    return by_file


def find_function_start(lines, error_line_idx):
    i = error_line_idx
    depth = 0
    while i >= 0:
        depth += lines[i].count('}') - lines[i].count('{')
        if depth < 0 and FUNC_DEF_RE.match(lines[i]):
            return i
        i -= 1
    return None


def find_function_end(lines, start_idx):
    depth = 1
    j = start_idx + 1
    while j < len(lines) and depth > 0:
        depth += lines[j].count('{') - lines[j].count('}')
        j += 1
    return j - 1


def names_used_as_integer_operand(line):
    """spNN names on this line directly adjacent (as an operand) to an
    integer-only binary operator: &, |, %, <<, >>."""
    names = set()
    for m in SPNAME_RE.finditer(line):
        name = m.group(0)
        before = line[:m.start()].rstrip()
        after = line[m.end():].lstrip()
        # Operand BEFORE the operator: 'NAME & ...', 'NAME % ...', etc.
        if re.match(r'^(?:&|\||%|<<|>>)(?!=)', after):
            names.add(name)
            continue
        # Operand AFTER the operator: '... & NAME', '... % NAME', etc.
        # (avoid matching '&NAME' address-of by requiring a space or
        # another operand char immediately before the operator)
        if re.search(r'(?:[)\w]\s*&|[)\w]\s*\||[)\w]\s*%|[)\w]\s*<<|[)\w]\s*>>)\s*$', before):
            names.add(name)
    return names


def process_file(path, error_lines, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')

    to_retype = set()
    for lineno in error_lines:
        idx = lineno - 1
        if idx < 0 or idx >= len(lines):
            continue
        names = names_used_as_integer_operand(lines[idx])
        if not names:
            continue
        func_start = find_function_start(lines, idx)
        if func_start is None:
            continue
        func_end = find_function_end(lines, func_start)
        for name in names:
            decl_re = re.compile(r'^\s*f32\s+' + re.escape(name) + r'\s*;\s*$')
            for j in range(func_start, func_end + 1):
                if decl_re.match(lines[j]):
                    to_retype.add((j, name))
                    break

    if not to_retype:
        return 0

    for j, name in to_retype:
        lines[j] = re.sub(r'^(\s*)f32(\s+' + re.escape(name) + r'\s*;\s*)$',
                           r'\1s32\2', lines[j])

    print(f"{path}: retyped {len(to_retype)} declaration(s): "
          f"{sorted(n for _, n in to_retype)}")
    if apply_changes:
        path.write_text('\n'.join(lines), encoding='utf-8', newline='')
    return len(to_retype)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    parser.add_argument('--errors-from', required=True)
    args = parser.parse_args()

    root = Path(args.root)
    by_file = parse_errors(args.errors_from)

    total = 0
    files_touched = 0
    for file_rel, error_lines in sorted(by_file.items()):
        path = root / file_rel
        if not path.exists():
            continue
        count = process_file(path, error_lines, args.apply)
        if count:
            total += count
            files_touched += 1

    print()
    print(f"{'Would retype' if not args.apply else 'Retyped'} {total} declaration(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
