#!/usr/bin/env python3
"""
Fix '(void *)CONSTANT' / '(void * *)CONSTANT' / '(f32 *)CONSTANT' --
casting a bare numeric literal directly to a pointer type -- "Constants
must have arithmetic type." (IDO cc rejects a pointer-typed constant
expression outright in several contexts: plain assignment into an
integer-typed memory slot, a function argument expected to be
arithmetic like bzero's size parameter, etc.)

Background: this codebase's decompiled output sometimes carries a
pointer-type cast on what is actually just a raw integer/bit-pattern
constant (mips_to_c inferring "this register holds an address" for a
register that's really just holding a literal small integer or a raw
bit pattern, e.g. a float's IEEE754 encoding written as a hex
literal). Observed:
    (*(s32 *)((char *)(arg0) + 0x980)) = (void *)0x41000000;
    bzero(&D_800DF700, (void *)0xB4);

Fix: drop the pointer cast entirely, leaving the bare numeric literal
-- '(void *)0x41000000' -> '0x41000000'. Safe unconditionally: this
codebase already tolerates the resulting implicit int<->pointer
conversion everywhere else (documented throughout this pipeline as a
mere warning, never a hard error) if the value's context actually
wanted a pointer, so stripping the cast can only ever remove an
already-illegal explicit cast, never introduce a NEW hard error.

Only matches when the cast is applied DIRECTLY to a bare numeric
literal (hex or decimal) -- never a variable or expression, which
could legitimately need a real pointer cast this script has no basis
to second-guess.

Usage:
    python3 fix_pointer_cast_constant.py --root .            # dry run
    python3 fix_pointer_cast_constant.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

PAT = re.compile(
    r'\(\s*(?:void\s*\*\s*\*|void\s*\*|f32\s*\*)\s*\)'
    r'\s*(0[xX][0-9A-Fa-f]+|\d+)\b'
)


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')

    def repl(m):
        return m.group(1)

    count = 0
    for i, line in enumerate(lines):
        if line.strip().startswith('//'):
            continue
        new_line, n = PAT.subn(repl, line)
        if n:
            lines[i] = new_line
            count += n

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
    print(f"{'Fixed' if args.apply else 'Would fix'} {total} pointer-cast-of-constant(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
