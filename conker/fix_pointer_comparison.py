#!/usr/bin/env python3
"""
Fix 'IDENT == &TARGET' / 'IDENT != &TARGET' where IDENT is a plain
scalar value (not a real pointer) but the other side is unambiguously
a pointer (an address-of expression) -- "Unacceptable operand of ==
or !=" (comparing a scalar value against a pointer requires both sides
to be compatible pointer types; only comparing against the literal
constant 0 is exempt).

Background: this is the equality-comparison sibling of
fix_pointer_subtraction_index.py's problem -- this codebase's
decompiled "walk a pointer, compare against a sentinel/end address"
loop idiom (`do { ... var += size; } while (var != &end);`) leaves the
walking variable as a plain scalar instead of a real pointer, so the
comparison itself doesn't type-check even though the intent (pointer
comparison) is completely valid C once both sides are actually
pointers.

Unlike the subtraction case, this fix doesn't need to restrict itself
to a known-untyped-variable allowlist: casting BOTH sides of an
equality/inequality comparison to '(char *)' is safe regardless of
what IDENT's real declared type turns out to be -- if the comparison
was ALREADY valid (both sides already real, compatible pointers),
adding a same-cast on both sides changes nothing observable (the
compared values are numerically identical after casting either way);
if it was invalid (this bug), the cast makes it valid. So this script
applies unconditionally wherever the shape appears, rather than cross-
referencing declarations first.

Only touches the exact 'IDENT (==|!=) &TARGET' shape (a bare
identifier immediately preceding the operator, and a bare address-of
immediately following it) -- more complex expressions on either side
are left alone (lower confidence in the boundary-finding, and rarer in
practice for this specific error).

Usage:
    python3 fix_pointer_comparison.py --root .            # dry run
    python3 fix_pointer_comparison.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

# Bare IDENT, then == or !=, then &TARGET (also bare). Word boundaries
# ensure we don't clip a longer identifier. Excludes an IDENT that's
# already been cast (line already contains '(char *)(IDENT)' right
# before the operator) via the negative lookbehind-free re-check in
# already_fixed() below, since Python's re has limited lookbehind.
COMPARISON_RE = re.compile(
    r'\b([A-Za-z_]\w*)\s*(==|!=)\s*&([A-Za-z_]\w*)\b'
)


def already_fixed(line, start_idx):
    prefix = line[:start_idx].rstrip()
    return prefix.endswith('(char *)(') or prefix.endswith('(char *)')


def process_line(line):
    fixes = 0
    result = []
    last_end = 0
    for m in COMPARISON_RE.finditer(line):
        ident, op, target = m.group(1), m.group(2), m.group(3)
        # Skip if this occurrence is already the RHS of a previous
        # replacement on this same line (rare, but be safe) or if the
        # LHS is already wrapped in a cast from a prior run.
        if already_fixed(line, m.start(1)):
            continue
        result.append(line[last_end:m.start()])
        result.append(f'(char *)({ident}) {op} (char *)(&{target})')
        last_end = m.end()
        fixes += 1
    result.append(line[last_end:])
    return ''.join(result), fixes


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')
    total = 0
    for i, line in enumerate(lines):
        if ('==' not in line and '!=' not in line) or line.strip().startswith('//'):
            continue
        new_line, n = process_line(line)
        if n:
            lines[i] = new_line
            total += n
    if total > 0:
        print(f"{path}: {total} fix(es)")
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
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total} pointer comparison(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
