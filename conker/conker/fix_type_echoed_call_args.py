#!/usr/bin/env python3
"""
Fix 'return func_NAME(TYPE arg0, TYPE arg1, ...);' -- a decompiler
artifact where mips_to_c, unable to resolve a tail-call's real
arguments, fell back to echoing the CALLEE's own inferred parameter
list verbatim (types and all) instead of the actual argument
expressions (which are almost always just the enclosing function's own
same-named parameters, passed straight through). Always a hard
"Syntax Error" (a type keyword is not a valid expression).

Only touches 'return func_NAME(...);' lines where EVERY argument in
the parens looks like a declaration ('TYPE name', 'TYPE *name',
'struct37 *name', 'u8 name[]', etc.) -- i.e. the whole call was
generated this way, not a normal call that happens to pass one
oddly-named value. For each such argument, strips everything but the
trailing identifier (the parameter's name), which is what should
actually be passed through.

Usage:
    python3 fix_type_echoed_call_args.py --root .            # dry run
    python3 fix_type_echoed_call_args.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

CALL_RE = re.compile(r'^(\s*return\s+func_[0-9A-Fa-f]+\s*\()(.*)(\)\s*;\s*)$')
# One declaration-shaped argument: optional type tokens/stars, then the
# trailing identifier, then an optional array suffix to drop.
ARG_RE = re.compile(
    r'^\s*(?:[A-Za-z_]\w*\s+)*\**\s*([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$'
)


def try_fix_line(line):
    m = CALL_RE.match(line)
    if not m:
        return line, False
    prefix, argstr, suffix = m.groups()
    if not argstr.strip():
        return line, False
    parts = [p.strip() for p in argstr.split(',')]
    names = []
    for part in parts:
        am = ARG_RE.match(part)
        if not am:
            return line, False  # not every arg looks declaration-shaped
        names.append(am.group(1))
    # Require at least one arg to actually contain a type keyword/star
    # (otherwise this wasn't the bug -- it's just a normal call already).
    if not re.search(r'\b(void|s8|u8|s16|u16|s32|u32|f32|struct\w*)\b|\*', argstr):
        return line, False
    return prefix + ', '.join(names) + suffix, True


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')
    count = 0
    for i, line in enumerate(lines):
        new_line, changed = try_fix_line(line)
        if changed:
            lines[i] = new_line
            count += 1
    if count and apply_changes:
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
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, args.apply)
        if count:
            print(f"{path}: {'fixed' if args.apply else 'would fix'} {count}")
            total += count
            files_touched += 1

    print()
    print(f"{'Fixed' if args.apply else 'Would fix'} {total} call(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
