#!/usr/bin/env python3
"""
Fix a leading '*(LEADING_TERM + REST)' dereference where LEADING_TERM
is a plain scalar VALUE, not a real pointer -- 'Dereferenced a
non-pointer.'.

Two forms of LEADING_TERM, both definitionally scalar (never a real
struct/typed pointer), so this transform is safe without any
per-function struct-type tracking beyond the untyped-variable detection
fix_untyped_field_access.py / fix_untyped_global_access.py already use:

  1. A known untyped variable/parameter/global (void*, scalar-pointer,
     or bare scalar -- same three categories fix_untyped_field_access.py
     tracks for locals/params, extended here to also cover globals from
     variables.h / per-file local externs). Plain scalar+scalar addition
     (e.g. 'D_800BE510 + idx*3', both declared s32) is completely legal
     C on its own -- no error is ever raised for the '+' itself, only
     for the surrounding '*(...)' trying to dereference the resulting
     plain integer. Example seen in the wild:
         extern s32 D_800BE510;
         *(D_800BE510 + ((temp_t2 & 0xFFFF) * 3)) = ...;
     's32 + s32' never errors -- only wrapping it in '*(...)' does.

  2. A macro-style read '(*(TYPE *)(...))' -- by construction (this is
     exactly what fix_untyped_field_access.py/fix_compound_arrow_access.py
     generate) always a plain scalar VALUE pulled through this
     codebase's 'unkXX' raw-offset convention, never a real pointer.

Fix, for both forms: wrap LEADING_TERM in a '(char *)(...)' cast (byte-
address reinterpretation) and the WHOLE '*(...)' expression in
'(*(TYPE *)(...))', TYPE inferred the same way as everywhere else in
this pipeline (nearest cast on the line, default s32):

    *(LEADING_TERM + REST)   ->   (*(TYPE *)((char *)(LEADING_TERM) + REST))

Must run AFTER fix_untyped_field_access.py / fix_untyped_global_access.py
(reuses their untyped-name detection) and benefits from running after
fix_compound_arrow_access.py (many LEADING_TERM macro-reads are produced
by that script).

Usage:
    python3 fix_leading_dereference.py --root .            # dry run
    python3 fix_leading_dereference.py --root . --apply    # write changes
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
# Same as fix_untyped_field_access.py's F32_VALUE_PARAM_RE: a bare
# 'f32' by-value name needs its bits reinterpreted via address-of +
# void** first, never cast to a pointer directly (always a hard
# error, unlike int->pointer which is merely a warning).
F32_VALUE_PARAM_RE = re.compile(r'\bf32\s+([A-Za-z_]\w*)\b(?!\s*[\[\*])')
# Trailing-comment tolerance (see fix_untyped_field_access.py's
# TRAILING_COMMENT for the full explanation): mips_to_c routinely
# appends a comment like '/* compiler-managed */' to stack-frame
# locals, and every one of these regexes participates in
# collect_declaration_block_end()'s scan below -- a plain ';\s*$'
# would treat the first commented declaration as the end of the block,
# silently excluding every variable declared after it.
TRAILING_COMMENT = r';\s*(?:/\*.*?\*/|//.*)?\s*$'
F32_LOCAL_RE = re.compile(r'^\s*f32\s+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT)
# Pointer-to-f32 specifically (single star) -- needed to know when a
# bare '*IDENT' dereference (see leading_term_len's third shape)
# yields a float value rather than an integer one.
F32_PTR_PARAM_RE = re.compile(r'\bf32\s*\*\s*([A-Za-z_]\w*)\b')
F32_PTR_LOCAL_RE = re.compile(r'^\s*f32\s*\*\s*([A-Za-z_]\w*)\s*' + TRAILING_COMMENT)
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
# A scalar-type ARRAY global, e.g. 'extern s32 D_800BE728[];' -- same
# untyped-storage bug as the bare-scalar case above, but with an array
# declarator instead of a bare ';'. See fix_untyped_global_access.py's
# GLOBAL_ARRAY_EXTERN_RE for the original discovery of this gap (found
# there first via D_800D1958 etc., then found to ALSO be missing here
# via D_800BE728, used as '*(D_800BE728 + (var_v0 * 4))' -- this
# script's exact LEADING_TERM + REST dereference shape).
GLOBAL_ARRAY_EXTERN_RE = re.compile(
    r'^\s*extern\s+(?:' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;'
)
CAST_RE = re.compile(r'\((s8|u8|s16|u16|s32|u32|f32)\)')
MACRO_READ_START_RE = re.compile(r'^\(\*\((?:s8|u8|s16|u16|s32|u32|f32)\s*\*\)\(')


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


def leading_term_len(text, untyped_names, scalar_ptr_names):
    """text starts right after '*('. Returns the length of the
    LEADING_TERM (identifier, macro-read, or single dereference of a
    scalar-pointer) if immediately followed by '+' (a top-level
    addition), else None."""
    m = MACRO_READ_START_RE.match(text)
    if m:
        # The macro-read is '(*(TYPE *)(BASE_EXPR))' -- text[0] is its
        # OUTERMOST '(', which is what needs to match all the way to
        # ITS OWN closing ')' (not the inner '(' that opens BASE_EXPR,
        # which closes one paren earlier).
        close = find_matching_close(text, 0)
        if close is None:
            return None
        term_len = close + 1
    else:
        # '*IDENT' -- a single ordinary dereference of a variable
        # declared as a pointer-to-SCALAR (never pointer-to-pointer or
        # void*, which could legitimately yield a real pointer here) --
        # guaranteed to produce a plain scalar value, e.g. 's32 *temp_a1;
        # ... *temp_a1 + offset' where the '*temp_a1' dereference itself
        # is completely valid C, but the RESULT (an s32) then can't
        # legally be added-to-and-dereferenced again by an enclosing
        # '*(...)'.
        m1 = re.match(r'\*([A-Za-z_]\w*)\b', text)
        if m1 and m1.group(1) in scalar_ptr_names:
            term_len = m1.end()
        else:
            m2 = re.match(r'[A-Za-z_]\w*', text)
            if not m2 or m2.group(0) not in untyped_names:
                return None
            term_len = m2.end()
    rest = text[term_len:]
    m3 = re.match(r'\s*\+(?!\+|=)\s*', rest)
    if not m3:
        return None
    # Safety guard: if the OTHER operand is itself address-of
    # ('... + &GLOBAL'), the original 'LEADING_TERM + &GLOBAL' was
    # already a valid pointer expression on its own (int + pointer is
    # legal and commutative in C) -- the real bug, if any, is
    # elsewhere. Casting LEADING_TERM to char* here would make it
    # 'char* + GLOBAL_TYPE*', which is a NEW, different illegal
    # operation (pointer + pointer is never valid). Leave these alone.
    if rest[m3.end():m3.end() + 1] == '&':
        return None
    return term_len


MACRO_READ_TYPE_RE = re.compile(r'^\(\*\((s8|u8|s16|u16|s32|u32|f32)\s*\*\)\(')


def is_float_term(leading_term, float_names, float_ptr_names):
    """True if LEADING_TERM's VALUE is a float bit pattern -- a bare
    name declared 'f32' by value, an 'f32'-typed macro-read, or a
    single dereference '*IDENT' of a variable declared 'f32 *' (both
    need address-of/void** reinterpretation instead of a direct cast,
    which is illegal for a float value)."""
    if leading_term in float_names:
        return True
    m = MACRO_READ_TYPE_RE.match(leading_term)
    if m and m.group(1) == 'f32':
        return True
    m1 = re.match(r'^\*([A-Za-z_]\w*)$', leading_term)
    return bool(m1 and m1.group(1) in float_ptr_names)


def process_line(line, untyped_names, float_names, scalar_ptr_names, float_ptr_names):
    fixes = 0
    search_from = 0
    while True:
        star_idx = line.find('*(', search_from)
        if star_idx == -1:
            break
        # Skip '->' contexts, '*=' etc: ensure this '*' is a genuine
        # unary dereference (not preceded by an identifier/close-paren,
        # which would make it multiplication).
        prev = line[star_idx - 1] if star_idx > 0 else ''
        if prev.isalnum() or prev in ('_', ')', ']'):
            search_from = star_idx + 1
            continue
        open_idx = star_idx + 1        # index of '(' itself
        content_idx = open_idx + 1     # index of the first char INSIDE the '('
        term_len = leading_term_len(line[content_idx:], untyped_names, scalar_ptr_names)
        if term_len is None:
            search_from = star_idx + 1
            continue
        close_idx = find_matching_close(line, open_idx)
        if close_idx is None:
            search_from = star_idx + 1
            continue
        leading_term = line[content_idx:content_idx + term_len]
        rest = line[content_idx + term_len:close_idx]
        field_type = infer_type(line)
        if is_float_term(leading_term, float_names, float_ptr_names):
            base = f'(*(void **)&({leading_term}))'
        else:
            base = f'({leading_term})'
        replacement = f'(*({field_type} *)((char *){base}{rest}))'
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
        scalar_ptr_names = set(SCALAR_PTR_PARAM_RE.findall(params))
        float_ptr_names = set(F32_PTR_PARAM_RE.findall(params))

        decl_end = collect_declaration_block_end(lines, start, end)
        for j in range(start + 1, decl_end + 1):
            m = VOID_PTR_LOCAL_RE.match(lines[j])
            if m:
                untyped.add(m.group(1))
                continue
            m = SCALAR_PTR_LOCAL_RE.match(lines[j])
            if m:
                untyped.add(m.group(1))
                scalar_ptr_names.add(m.group(1))
                if F32_PTR_LOCAL_RE.match(lines[j]):
                    float_ptr_names.add(m.group(1))
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
            new_line, fixes = process_line(line, untyped, float_names, scalar_ptr_names, float_ptr_names)
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
    print(f"Found {len(global_untyped)} scalar/void* globals in variables.h")

    total_fixed = 0
    files_fixed = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, global_untyped, args.apply)
        if count:
            total_fixed += count
            files_fixed += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total_fixed} leading dereference(s) "
          f"across {files_fixed} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
