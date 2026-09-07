#!/usr/bin/env python3
"""
Fix a TRAILING '*((SCALAR_VAR * CONST) + UNTYPED_IDENT)' dereference
where UNTYPED_IDENT (the LAST term of the sum) is a known untyped
scalar variable/parameter/global -- "Dereferenced a non-pointer.".
This is the mirror image of fix_leading_dereference.py: that script
only checks whether the FIRST operand of a sum is the untyped one;
this script covers the case where mips_to_c emitted the operands in
the other order, e.g.:

    s32 temp_v1;
    ...
    *((var_a0 * 8) + temp_v1)

Here 'var_a0 * 8' is an ordinary int computation (a byte stride) and
'temp_v1' is semantically the base ADDRESS (declared as a plain s32 by
mips_to_c, same untyped-inference gap fix_leading_dereference.py/
fix_untyped_field_access.py already handle for the leading-operand
case) -- addition is commutative, so this needs the same '(char *)'
cast fix_leading_dereference.py applies, just on the other operand.

DELIBERATELY NARROW SCOPE (see bug history below): only matches when
the LEADING expression is EXACTLY '(SCALAR_VAR * CONSTANT)' or
'SCALAR_VAR * CONSTANT' -- a single bare identifier multiplied by a
numeric literal, nothing else. Multiplying a genuine pointer by a
constant is never valid C on its own, so if this shape appears as
already-parseable code, SCALAR_VAR is unambiguously a plain integer,
regardless of whether it happens to also appear in the untyped-name
sets used elsewhere in this pipeline. This narrow shape is the ONLY
one verified safe -- see bug history.

Bug history (why this script is now much narrower than its first
version): the first version accepted ANY leading expression and
applied the same '(char *)' wrap to the trailing identifier
unconditionally (mirroring fix_pointer_comparison.py's "blanket safe"
reasoning) -- but unlike that script's == / != comparison (where
casting both sides to the SAME type is provably always safe), pointer
ADDITION is asymmetric: if the leading operand was ALREADY a real
pointer (an explicit cast like '(char *)(sp78)', or a bare identifier
declared as a genuine pointer, e.g. 'extern f32 *D_800D2350;', or even
a 'void *' global that this pipeline's OTHER scripts also treat as
"untyped"), then 'LEADING + UNTYPED_IDENT' was frequently ALREADY
valid C (pointer + int) with no error at all -- adding a SECOND cast
to the trailing identifier turned it into pointer + pointer, which is
NEVER valid. Confirmed via game_B3020.c's 'sp78' (declared 'void
*sp78;'): '*((char *)(sp78) + temp_t6)' was already correct; the first
version's blanket scan (matching the textual shape everywhere, not
just error-list-derived lines) rewrote it to
'(*(s32 *)((char *)(sp78) + (char *)(temp_t6)))', a NEW illegal
pointer+pointer expression the build log had never flagged as broken
in the first place. 91 instances were wrongly touched this way across
19 files before being caught (by manually diffing a "should be simple"
file and noticing an existing cast on the leading side) and fully
reverted. The general "is the leading expression already a pointer"
question turned out to be unsafe to answer with a blanket textual
scan; restricting to the 'VAR * CONSTANT' shape sidesteps the question
entirely because that shape can never legitimately be pointer-typed.

Must run AFTER fix_untyped_field_access.py / fix_untyped_global_access.py
(reuses their untyped-name detection for the TRAILING identifier only)
and pairs with fix_leading_dereference.py (covers the operand-order
this script doesn't).

Usage:
    python3 fix_trailing_dereference.py --root .            # dry run
    python3 fix_trailing_dereference.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

SCALAR_TYPES = {"f32", "s32", "u32", "s16", "u16", "s8", "u8"}

FUNC_DEF_RE = re.compile(
    r'^[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{\s*(?://.*)?$'
)
VOID_PTR_PARAM_RE = re.compile(r'\bvoid\s*(?:\*\s*)+([A-Za-z_]\w*)\b')
SCALAR_PTR_PARAM_RE = re.compile(
    r'\b(?:' + '|'.join(SCALAR_TYPES) + r')\s*(?:\*\s*)+([A-Za-z_]\w*)\b'
)
SCALAR_VALUE_PARAM_RE = re.compile(
    r'\b(?:' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\b(?!\s*[\[\*])'
)
F32_VALUE_PARAM_RE = re.compile(r'\bf32\s+([A-Za-z_]\w*)\b(?!\s*[\[\*])')

TRAILING_COMMENT = r';\s*(?:/\*.*?\*/|//.*)?\s*$'
F32_LOCAL_RE = re.compile(r'^\s*f32\s+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT)
VOID_PTR_LOCAL_RE = re.compile(r'^\s*void\s*(?:\*\s*)+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT)
SCALAR_PTR_LOCAL_RE = re.compile(
    r'^\s*(?:' + '|'.join(SCALAR_TYPES) + r')\s*(?:\*\s*)+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT
)
SCALAR_LOCAL_RE = re.compile(
    r'^\s*(?:' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT
)
GENERIC_DECL_RE = re.compile(
    r'^\s*[A-Za-z_]\w*(?:\s*\*)*\s+\**[A-Za-z_]\w*\s*(?:\[[^\]]*\])?\s*' + TRAILING_COMMENT
)
FUNC_PTR_DECL_RE = re.compile(
    r'^\s*[A-Za-z_]\w*(?:\s*\*)*\s*\(\s*\*+\s*[A-Za-z_]\w*\s*\)\s*\([^;]*\)\s*' + TRAILING_COMMENT
)
GLOBAL_EXTERN_RE = re.compile(
    r'^\s*extern\s+(?:(?:' + '|'.join(SCALAR_TYPES) + r')\s+|void\s*\*\s*)([A-Za-z_]\w*)\s*;'
)
GLOBAL_ARRAY_EXTERN_RE = re.compile(
    r'^\s*extern\s+(?:' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;'
)
CAST_RE = re.compile(r'\((s8|u8|s16|u16|s32|u32|f32)\)')

# The ONLY accepted leading-expression shape: a bare identifier times a
# numeric literal, optionally parenthesized. Never a cast, never
# address-of, never a compound expression -- see module docstring.
LEADING_SHAPE_RE = re.compile(
    r'^\(?\s*([A-Za-z_]\w*)\s*\*\s*(0[xX][0-9A-Fa-f]+|\d+)\s*\)?$'
)


def find_function_bodies(lines):
    i = 0
    n = len(lines)
    while i < n:
        m = FUNC_DEF_RE.match(lines[i])
        if m:
            params = m.group(2)
            depth = 1
            j = i + 1
            while j < n and depth > 0:
                depth += lines[j].count('{') - lines[j].count('}')
                j += 1
            yield i, j - 1, params
            i = j
        else:
            i += 1


def collect_declaration_block_end(lines, start, end):
    j = start + 1
    while j <= end:
        stripped = lines[j].strip()
        if stripped == '':
            j += 1
            continue
        if (VOID_PTR_LOCAL_RE.match(lines[j]) or SCALAR_PTR_LOCAL_RE.match(lines[j])
                or SCALAR_LOCAL_RE.match(lines[j]) or GENERIC_DECL_RE.match(lines[j])
                or FUNC_PTR_DECL_RE.match(lines[j])):
            j += 1
            continue
        break
    return j - 1


def get_global_untyped_names(variables_h_path):
    text = Path(variables_h_path).read_text(errors='replace')
    names = set()
    for line in text.split('\n'):
        m = GLOBAL_EXTERN_RE.match(line)
        if m:
            names.add(m.group(1))
        m2 = GLOBAL_ARRAY_EXTERN_RE.match(line)
        if m2:
            names.add(m2.group(1))
    return names


def get_local_untyped_globals(text):
    names = set()
    for line in text.split('\n'):
        m = GLOBAL_EXTERN_RE.match(line)
        if m:
            names.add(m.group(1))
        m2 = GLOBAL_ARRAY_EXTERN_RE.match(line)
        if m2:
            names.add(m2.group(1))
    return names


def infer_type(line):
    m = CAST_RE.search(line)
    return m.group(1) if m else 's32'


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


def process_line(line, untyped_names, float_names):
    fixes = 0
    search_from = 0
    while True:
        star_idx = line.find('*(', search_from)
        if star_idx == -1:
            break
        prev = line[star_idx - 1] if star_idx > 0 else ''
        if prev.isalnum() or prev in ('_', ')', ']'):
            search_from = star_idx + 1
            continue
        open_idx = star_idx + 1
        content_idx = open_idx + 1
        close_idx = find_matching_close(line, open_idx)
        if close_idx is None:
            search_from = star_idx + 1
            continue
        content = line[content_idx:close_idx]

        m = re.match(r'^(.*[^+\-*/\s])\s*\+\s*([A-Za-z_]\w*)$', content)
        if not m:
            search_from = star_idx + 1
            continue
        leading_expr, ident = m.group(1), m.group(2)
        if ident not in untyped_names:
            search_from = star_idx + 1
            continue
        if not LEADING_SHAPE_RE.match(leading_expr.strip()):
            search_from = star_idx + 1
            continue

        field_type = infer_type(line)
        if ident in float_names:
            base = f'(*(void **)&({ident}))'
        else:
            base = f'({ident})'
        new_middle = f'{leading_expr} + (char *){base}'
        replacement = f'(*({field_type} *)({new_middle}))'
        line = line[:star_idx] + replacement + line[close_idx + 1:]
        fixes += 1
        search_from = star_idx + len(replacement)

    return line, fixes


def process_file(path, global_untyped, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines(keepends=True)
    total_fixes = 0

    all_globals = global_untyped | get_local_untyped_globals(text)

    for start, end, params in find_function_bodies(lines):
        untyped = set(VOID_PTR_PARAM_RE.findall(params))
        untyped |= set(SCALAR_PTR_PARAM_RE.findall(params))
        untyped |= set(SCALAR_VALUE_PARAM_RE.findall(params))
        float_names = set(F32_VALUE_PARAM_RE.findall(params))

        decl_end = collect_declaration_block_end(lines, start, end)
        for j in range(start + 1, decl_end + 1):
            m = VOID_PTR_LOCAL_RE.match(lines[j])
            if m:
                untyped.add(m.group(1))
                continue
            m = SCALAR_PTR_LOCAL_RE.match(lines[j])
            if m:
                untyped.add(m.group(1))
                continue
            m = SCALAR_LOCAL_RE.match(lines[j])
            if m:
                untyped.add(m.group(1))
                if F32_LOCAL_RE.match(lines[j]):
                    float_names.add(m.group(1))

        untyped |= all_globals

        for j in range(start, end + 1):
            line = lines[j]
            if '*(' not in line:
                continue
            if line.strip().startswith('//'):
                continue
            new_line, fixes = process_line(line, untyped, float_names)
            if fixes:
                lines[j] = new_line
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
    global_untyped = get_global_untyped_names(root / 'include' / 'variables.h')

    total_fixed = 0
    files_fixed = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, global_untyped, args.apply)
        if count:
            total_fixed += count
            files_fixed += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total_fixed} trailing dereference(s) "
          f"across {files_fixed} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
