#!/usr/bin/env python3
"""
Fix '+ ((*(f32 *)(...)) * N)' -- adding the result of a float multiply
to something else (usually a pointer/address expression) --
"Unacceptable operand of '+'." (pointer arithmetic, and most binary
'+' generally, requires an INTEGER right-hand operand; a float value
is never acceptable, even when it's the result of multiplying a float
macro-read by an integer constant, since float * int still promotes to
float).

Background: this codebase's decompiled "index into an array of
pointers by a float-typed field, scaled by element size" idiom, e.g.:

    struct124 *D_800D1C90[187];
    ...
    *(&D_800D1C90 + ((*(f32 *)((char *)(arg0) + 0x4)) * 4))

The multiplication '(*(f32 *)(...)) * 4' is a float (float * int
promotes to float in C), and adding a float to a pointer (or even to
another int) is illegal -- the intent is clearly an INTEGER byte/
element offset (a whole-number index scaled by a constant), just
computed through a field mips_to_c inferred as f32.

Fix: wrap the whole multiplication in '(s32)(...)', truncating it to
an integer before the addition -- '(s32)((*(f32 *)(...)) * N)'. This
is safe REGARDLESS of what the other operand of the '+' turns out to
be: pointer + int and int + int are both valid, whereas pointer +
float and int + float are never valid, so this transform can only ever
turn an illegal expression legal, never the reverse. (In the rare case
the float multiply was genuinely intended to stay float -- added to
another real float, which already compiles fine on its own without
ever hitting this error -- this script doesn't touch it, since it only
fires on the exact textual shape next to a `+`; a truly float-integral
context is not to blame here.)

Only touches a multiplication whose LEFT factor is EXACTLY a float
macro-read '(*(f32 *)(...))' and whose RIGHT factor is a bare numeric
literal -- the same syntactically-unambiguous-shape philosophy used
throughout this pipeline (fix_pointer_to_float_cast.py, etc.).

Usage:
    python3 fix_float_times_int_addend.py --root .            # dry run
    python3 fix_float_times_int_addend.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

MACRO_READ_START_RE = re.compile(r'\(\*\(f32\s*\*\)\(')


def find_matching_close(line, open_idx):
    depth = 0
    i = open_idx
    while i < len(line):
        if line[i] == '(':
            depth += 1
        elif line[i] == ')':
            depth -= 1
            if depth == 0:
                return i
        i += 1
    return None


def process_line(line):
    fixes = 0
    search_from = 0
    while True:
        m = MACRO_READ_START_RE.search(line, search_from)
        if not m:
            break
        macro_start = m.start()
        # 'm' matched '(*(f32 *)(' -- TWO opening parens: the outer one
        # at macro_start (wrapping the whole '(*(...))' macro-read) and
        # the inner one (base_open) opening BASE_EXPR. Each needs its
        # own closing paren: base_close closes BASE_EXPR, and the very
        # next char after that closes the outer wrapper -- the true end
        # of the macro-read expression is base_close + 1, not base_close
        # alone (an earlier version of this script used base_close
        # directly and never found a match as a result).
        base_open = m.end() - 1
        base_close = find_matching_close(line, base_open)
        if base_close is None or line[base_close + 1:base_close + 2] != ')':
            search_from = m.end()
            continue
        macro_close = base_close + 1
        rest = line[macro_close + 1:]
        # The numeric literal must be matched IN FULL, including a
        # float literal's decimal point/exponent/'f' suffix (e.g.
        # '500.0f') -- an earlier version only matched the leading
        # integer digits ('500'), leaving '.0f' dangling OUTSIDE the
        # inserted '(s32)(...)' wrapper and producing syntactically
        # broken output like '(s32)(EXPR * 500).0f)'. Confirmed via
        # game_11C2B0.c/game_15B960.c/game_DDB60.c, all reverted and
        # refixed after this correction.
        mm = re.match(
            r'\s*\*\s*(0[xX][0-9A-Fa-f]+|\d+\.\d+(?:[eE][+-]?\d+)?[fF]?|\d+[fF]?)\b',
            rest
        )
        if not mm:
            search_from = m.end()
            continue
        mult_end = macro_close + 1 + mm.end()
        # Only fire when this multiplication is genuinely an ADDEND --
        # require a top-level '+' immediately before it (skipping
        # whitespace and, at most, one open-paren used purely to group
        # this addend, e.g. 'X + ((*(f32*)(...)) * 4)'). This is what
        # actually distinguishes "float value being added to something
        # expecting int" from an ordinary standalone float computation
        # (e.g. 'x = (*(f32*)(...)) * 4.0;' assigned to a real float
        # variable), which this script must NOT touch.
        before = line[:macro_start].rstrip()
        if before.endswith('('):
            before = before[:-1].rstrip()
        if not before.endswith('+') or before.endswith('++'):
            search_from = mult_end
            continue
        whole = line[macro_start:mult_end]
        replacement = f'(s32)({whole})'
        line = line[:macro_start] + replacement + line[mult_end:]
        fixes += 1
        search_from = macro_start + len(replacement)

    return line, fixes


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')
    total = 0
    for i, line in enumerate(lines):
        if 'f32 *)(' not in line or line.strip().startswith('//'):
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
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total} float*int addend(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
