#!/usr/bin/env python3
"""
Fix 'unkXX' arrow access on a PARENTHESIZED COMPOUND EXPRESSION, e.g.
'(arg0 + (D_800BE9C0 * 4))->unk20' or '(&gObjects + (i * 0x32C))->unkCC'
or '(*(s32 *)((char *)(x) + 0x31C))->unk4E'.

fix_untyped_field_access.py already fixes 'VAR->unkXX' for a single bare
identifier known to be untyped in that function's scope. It can't match
these because the arrow isn't immediately preceded by a bare identifier
-- it's preceded by a whole parenthesized expression (raw pointer
arithmetic on a void*/array, or another already-macro'd dereference).

Why this is safe to rewrite UNCONDITIONALLY, without any per-function
type tracking at all: this codebase's own 'unkXX' naming convention
means the hex suffix IS the field's real byte offset (that's the whole
point of the convention -- see structs.h). So for any expression EXPR,
'(EXPR)->unkXX' -- legal or not -- always denotes the exact same byte
address as '(*(TYPE *)((char *)(EXPR) + 0xXX))': the sub-expression
EXPR is evaluated completely unchanged either way, only the type-safe
'->' member access is replaced by an equivalent raw byte-offset read.
This is a pure type-safety relaxation, never a behavior change -- so
it's safe to apply even to already-valid code (e.g. real struct-pointer
arithmetic that happens to reach a field still named 'unkXX'), not just
to lines the compiler currently rejects.

Only the '->' form is handled: '(EXPR)->unkXX' -> treat EXPR's VALUE as
the base address. The '.' form ('(EXPR).unkXX') is deliberately left
alone -- EXPR being an arbitrary compound expression usually isn't a
valid address-of target, unlike the single-variable case
fix_untyped_field_access.py already covers.

Only matches when EXPR is genuinely parenthesized (i.e. immediately
precedes '->unkXX' with a matching '(') -- a bare identifier is left
alone entirely (that's the other script's job, and it already tracks
per-function types precisely enough to know when NOT to touch a real
struct pointer name).

Usage:
    python3 fix_compound_arrow_access.py --root .            # dry run
    python3 fix_compound_arrow_access.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

ARROW_UNK_RE = re.compile(r'\)\s*->\s*unk(-?[0-9A-Fa-f]+)\b')
CAST_RE = re.compile(r'\((s8|u8|s16|u16|s32|u32|f32)\)')


def infer_type(line):
    m = CAST_RE.search(line)
    return m.group(1) if m else 's32'


def find_matching_open_paren(line, close_idx):
    """close_idx is the index of the ')' that precedes '->unkXX'.
    Returns the index of its matching '(', or None if unbalanced."""
    depth = 0
    i = close_idx
    while i >= 0:
        if line[i] == ')':
            depth += 1
        elif line[i] == '(':
            depth -= 1
            if depth == 0:
                return i
        i -= 1
    return None


CHAINED_RE = re.compile(r'^\s*(?:->|\.)\s*unk[0-9A-Fa-f]')
MACRO_READ_TYPE_RE = re.compile(r'^\(\*\((s8|u8|s16|u16|s32|u32|f32)\s*\*\)\(')


def find_matching_close_fwd(text, open_idx):
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


def is_float_macro_read(expr):
    """True if EXPR is EXACTLY a single 'f32'-typed macro-read
    '(*(f32 *)(...))' with nothing else appended -- its VALUE is a
    float, so wrapping it in '(char *)(...)' (to use as a pointer base)
    is illegal (can't cast a float value to a pointer directly, unlike
    int->pointer which is merely a warning). Only fires when the
    macro-read's own closing paren IS the very end of EXPR (not just a
    prefix of some larger addition, e.g. '(macroread + extra)', which
    would need different handling this doesn't attempt -- falling
    through to the plain cast in that case is conservative, not wrong,
    it just won't optimize that rarer shape)."""
    m = MACRO_READ_TYPE_RE.match(expr)
    if not m or m.group(1) != 'f32':
        return False
    base_open = m.end() - 1  # index of the BASE expression's '('
    base_close = find_matching_close_fwd(expr, base_open)
    if base_close is None:
        return False
    # After BASE's own close, exactly one more ')' (the outer wrapper)
    # should end EXPR, with nothing else in between.
    return expr[base_close + 1:] == ')'


def process_line(line):
    whole_line_type = infer_type(line)
    fixes = 0
    # Repeatedly find+fix the first remaining match, left to right,
    # since each fix changes string length/content and we re-scan.
    while True:
        m = ARROW_UNK_RE.search(line)
        if not m:
            break
        close_idx = m.start()  # index of ')'
        open_idx = find_matching_open_paren(line, close_idx)
        if open_idx is None:
            break
        expr = line[open_idx:close_idx + 1]  # includes surrounding parens
        offset = m.group(1)
        if offset.startswith('-'):
            sign, offset = '-', offset[1:]
        else:
            sign = '+'
        # If this access is itself immediately followed by another
        # '->unkXX'/'.unkXX' (a chain, e.g. 'arg0->unk31C->unk1BC'),
        # this link's result is used purely as a base address for the
        # NEXT access, not as the final value -- it must stay
        # pointer-compatible regardless of whatever cast happens to
        # appear elsewhere on the line (often the *final* link's
        # assignment cast, which is unrelated and was being wrongly
        # picked up here, producing e.g. an illegal
        # '(char *)((*(f32 *)(...)))' -- can't cast a float value to a
        # pointer). Force the codebase's generic tolerant default
        # (s32) for any non-final link in a chain instead.
        if CHAINED_RE.match(line[m.end():]):
            field_type = 's32'
        else:
            field_type = whole_line_type
        if is_float_macro_read(expr):
            base = f'(*(void **)&({expr}))'
        else:
            base = f'({expr})'
        replacement = f'(*({field_type} *)((char *){base} {sign} 0x{offset}))'
        line = line[:open_idx] + replacement + line[m.end():]
        fixes += 1
    return line, fixes


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines(keepends=True)
    total_fixes = 0

    for i, line in enumerate(lines):
        if '->' not in line or line.strip().startswith('//'):
            continue
        new_line, fixes = process_line(line)
        if fixes:
            lines[i] = new_line
            total_fixes += fixes

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
    total_fixed = 0
    files_fixed = 0

    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, args.apply)
        if count:
            total_fixed += count
            files_fixed += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total_fixed} compound arrow access(es) "
          f"across {files_fixed} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
