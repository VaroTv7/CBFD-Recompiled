#!/usr/bin/env python3
"""
Fix 'EXPR - &GLOBAL_ARRAY' / 'EXPR - GLOBAL_PTR' where EXPR is a
plain scalar VALUE (not a real pointer) but the right-hand side is a
genuine pointer expression (either the address of a real struct-typed
array global, or a real struct-pointer global used bare) --
"Unacceptable operand of '-'" (int - pointer is not a valid C
operation; only pointer - pointer or pointer - int are).

Background: this codebase's decompiled index-recovery idiom divides a
byte difference by an element size to recover an array index, e.g.
'(s32) (sp7C - &gObjects) / 812' (812 == sizeof(struct127), gObjects's
element type) -- but mips_to_c left the left operand as a plain scalar
instead of a real pointer, so the subtraction itself doesn't type-check
even though the INTENT (byte-level pointer subtraction) is completely
valid C once the left side is actually cast to a pointer. This is the
tree-wide, mechanical generalization of the one hand-fixed instance
already documented in HANDOFF.md's "Manual fixes applied" section
(game_100810.c's 'sp7C - &gObjects' -> '(char *)(sp7C) - (char
*)&gObjects') -- the exact same shape recurs ~30 more times across the
tree using 'gObjects' and other real struct-typed globals.

Only touches a right-hand-side that is PROVABLY a real pointer
already (never a scalar/void* global, which could be either
direction's actual bug and isn't this script's business):
  - '&NAME' where NAME is declared 'extern STRUCTTYPE NAME[...];' with
    STRUCTTYPE a real (non-scalar, non-void) struct/typedef -- the
    address of an array is unambiguously a pointer.
  - bare 'NAME' where NAME is declared 'extern STRUCTTYPE *NAME;' with
    STRUCTTYPE real (non-scalar, non-void) -- already a real pointer.

The left operand (EXPR) is found via a backward paren/identifier scan
from the ' - ' -- handles a bare identifier, a parenthesized
expression (most commonly a macro-read), or a function call
'func(args)'. Wraps ONLY that left operand in '(char *)(...)' (a cast
binds tighter than '-', so nothing else on the line needs to change,
and the surrounding '(s32)(...) / ELEMSIZE' idiom keeps working
unmodified). Skips any left operand that's already wrapped in
'(char *)' (idempotency).

Usage:
    python3 fix_pointer_subtraction_index.py --root .            # dry run
    python3 fix_pointer_subtraction_index.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

SCALAR_TYPES = {"f32", "s32", "u32", "s16", "u16", "s8", "u8"}

REAL_STRUCT_ARRAY_RE = re.compile(
    r'^\s*extern\s+([A-Za-z_]\w*)\s+([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;'
)
REAL_STRUCT_PTR_RE = re.compile(
    r'^\s*extern\s+([A-Za-z_]\w*)\s*\*\s*([A-Za-z_]\w*)\s*;'
)


def get_real_struct_names(variables_h_path):
    """Returns (array_names, pointer_names) -- globals declared as a
    real (non-scalar, non-void) struct-typed array, and as a real
    struct-typed pointer, respectively."""
    text = Path(variables_h_path).read_text(errors='replace')
    array_names = set()
    ptr_names = set()
    for line in text.split('\n'):
        m = REAL_STRUCT_ARRAY_RE.match(line)
        if m and m.group(1) not in SCALAR_TYPES and m.group(1) != 'void':
            array_names.add(m.group(2))
        m2 = REAL_STRUCT_PTR_RE.match(line)
        if m2 and m2.group(1) not in SCALAR_TYPES and m2.group(1) != 'void':
            ptr_names.add(m2.group(2))
    return array_names, ptr_names


def find_matching_open(line, close_idx):
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


def find_left_operand_start(line, minus_idx):
    """minus_idx is the index of the '-' itself. Scans backward over
    optional whitespace, then one of: a parenthesized expression
    (optionally preceded by a function-name identifier, i.e. a call),
    or a bare identifier/number. Returns the start index of the left
    operand, or None if the shape isn't recognized."""
    i = minus_idx - 1
    while i >= 0 and line[i] == ' ':
        i -= 1
    if i < 0:
        return None
    if line[i] == ')':
        open_idx = find_matching_open(line, i)
        if open_idx is None:
            return None
        j = open_idx - 1
        # Extend backward over a function-name identifier, if present
        # (e.g. 'func_151149AC(...)').
        k = j
        while k >= 0 and (line[k].isalnum() or line[k] == '_'):
            k -= 1
        if k != j:
            return k + 1
        return open_idx
    if line[i].isalnum() or line[i] == '_':
        j = i
        while j >= 0 and (line[j].isalnum() or line[j] == '_'):
            j -= 1
        start = j + 1
        # Reject if this identifier is itself a FIELD NAME (immediately
        # preceded by '.' or '->'), e.g. 'gObjects[idx].x_position' --
        # 'x_position' here is a struct member, not a standalone
        # variable, and must never be treated as the left operand of
        # the subtraction. Confirmed live: 'gObjects[idx].x_position -
        # gCurrentObject->x_position' (already valid C, float - float)
        # was wrongly rewritten into
        # 'gObjects[idx].(char *)(x_position) - (char
        # *)(gCurrentObject)->x_position' -- a hard syntax error --
        # because this check was missing.
        prefix = line[:start]
        if prefix.endswith('.') or prefix.endswith('->'):
            return None
        return start
    return None


def already_cast(line, start_idx):
    prefix = line[:start_idx].rstrip()
    return prefix.endswith('(char *)')


# No whitespace tolerated between '&' and NAME -- this codebase's own
# style never writes '& NAME', only '&NAME', which keeps the index
# math below simple and exact (the '&' is always exactly one character
# before group(1)'s start).
# Both exclude a following '(' (a function call, not a bare variable)
# AND a following '.'/'->' (a field-access base, e.g. 'gCurrentObject'
# in 'gCurrentObject->x_position' -- the identifier there is the BASE
# of a member access, not a standalone value being subtracted; treating
# it as one wrongly rewrote an already-valid
# 'gObjects[idx].x_position - gCurrentObject->x_position' into a hard
# syntax error -- see find_left_operand_start's matching guard for the
# left-side half of this same bug).
ARRAY_RHS_RE = re.compile(r'-\s*&([A-Za-z_]\w*)\b(?!\s*(?:->|\.))')
PTR_RHS_RE = re.compile(r'-\s*([A-Za-z_]\w*)\b(?!\s*\()(?!\s*(?:->|\.))')


def find_next_candidate(line, search_from, array_names, ptr_names):
    """Scans forward from search_from for the next '-' whose RHS is a
    known real-pointer-producing name, skipping any '-' whose RHS
    isn't one of our target names (rather than stopping the whole
    line's scan at the first non-matching '-'). Returns
    (minus_idx, rhs_start, rhs_end, rhs_expr) or None, where rhs_expr
    is the exact RHS text to wrap in '(char *)(...)' -- '&NAME' for
    the array case, bare 'NAME' for the already-a-pointer case."""
    i = search_from
    while True:
        idx = line.find('-', i)
        if idx == -1:
            return None
        m = ARRAY_RHS_RE.match(line, idx)
        if m and m.group(1) in array_names:
            rhs_start = m.start(1) - 1  # position of '&'
            return idx, rhs_start, m.end(), line[rhs_start:m.end()]
        m2 = PTR_RHS_RE.match(line, idx)
        if m2 and m2.group(1) in ptr_names:
            return idx, m2.start(1), m2.end(), m2.group(1)
        i = idx + 1


def process_line(line, array_names, ptr_names):
    """Both operands of a valid pointer subtraction must have matching
    pointee types -- casting only the left side (as an earlier, buggy
    version of this script did, and may have already left behind in
    files from a prior run) still leaves 'char* - struct127(*)[25]',
    itself illegal. Both the left operand and the RHS name/address-of
    expression are wrapped in '(char *)(...)' -- independently, so a
    line where only the left side was already cast (that earlier bug's
    leftover) still gets its RHS completed rather than being skipped
    entirely."""
    fixes = 0
    search_from = 0
    while True:
        cand = find_next_candidate(line, search_from, array_names, ptr_names)
        if cand is None:
            break
        minus_idx, rhs_start, rhs_end, rhs_expr = cand

        rhs_already_cast = line[:rhs_start].rstrip().endswith('(char *)(')
        left_start = find_left_operand_start(line, minus_idx)
        left_already_cast = left_start is not None and already_cast(line, left_start)

        if rhs_already_cast and left_already_cast:
            search_from = minus_idx + 1
            continue
        if left_start is None:
            search_from = minus_idx + 1
            continue
        left_expr = line[left_start:minus_idx].rstrip()
        if not left_expr:
            search_from = minus_idx + 1
            continue

        left_replacement = ('(char *)(' + left_expr + ')') if not left_already_cast else left_expr
        rhs_replacement = ('(char *)(' + rhs_expr + ')') if not rhs_already_cast else rhs_expr
        # Assemble right-to-left so earlier positions stay valid.
        line = (line[:left_start] + left_replacement
                + line[left_start + len(left_expr):rhs_start]
                + rhs_replacement + line[rhs_end:])
        fixes += 1
        new_rhs_end = (left_start + len(left_replacement)
                        + (rhs_start - (left_start + len(left_expr)))
                        + len(rhs_replacement))
        search_from = new_rhs_end

    return line, fixes


def process_file(path, array_names, ptr_names, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')
    total = 0
    for i, line in enumerate(lines):
        if '-' not in line or line.strip().startswith('//'):
            continue
        new_line, n = process_line(line, array_names, ptr_names)
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
    array_names, ptr_names = get_real_struct_names(root / 'include' / 'variables.h')
    print(f"Found {len(array_names)} real struct-array globals, "
          f"{len(ptr_names)} real struct-pointer globals")

    total = 0
    files_touched = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, array_names, ptr_names, args.apply)
        if count:
            total += count
            files_touched += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total} pointer-subtraction(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
