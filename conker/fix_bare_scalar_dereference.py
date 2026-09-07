#!/usr/bin/env python3
"""
Fix a BARE dereference '*(EXPR)' where EXPR, in its ENTIRETY, is a
plain scalar VALUE rather than a real pointer -- "Dereferenced a
non-pointer". This is the no-addition sibling of
fix_leading_dereference.py's '*(LEADING_TERM + REST)' case: that
script only fires when the leading term is followed by a top-level
'+'; this one fires when the leading term IS the whole parenthesized
expression, e.g.:

    *(*(s32 *)((char *)(arg0) + 0x36C))   -- a macro-read's s32 VALUE,
                                              re-dereferenced directly
    *D_800CBE00                            -- a bare untyped scalar global
    *(*var_v1)                             -- *IDENT where IDENT is a
                                               pointer-to-scalar

In every one of these, the OUTER '*' is trying to treat a plain scalar
VALUE as a pointer without a cast -- always a hard "Dereferenced a
non-pointer" error. Since there's no addition involved (the byte
offset is baked into whatever produced EXPR, e.g. the macro-read's own
0x36C), the fix is a direct cast + dereference, no '(char *)' byte
arithmetic needed: '*(EXPR)' -> '(*(TYPE *)(EXPR))'.

Reuses the exact same per-function untyped-variable detection as
fix_leading_dereference.py/fix_untyped_field_access.py (params/locals
declared 'void *', scalar-pointer, or bare scalar by value), and the
same float-value trap handling (a float VALUE can't be cast to a
pointer directly -- always a hard error, unlike the int case -- so it
goes through the address-of/'void **' round trip instead).

Must run after fix_untyped_field_access.py/fix_compound_arrow_access.py
(many EXPRs here are macro-reads those scripts produce) and benefits
from running near fix_leading_dereference.py, though the two don't
overlap (this one only fires when there's NO trailing '+').

Usage:
    python3 fix_bare_scalar_dereference.py --root .            # dry run
    python3 fix_bare_scalar_dereference.py --root . --apply    # write changes
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
F32_PTR_PARAM_RE = re.compile(r'\bf32\s*\*\s*([A-Za-z_]\w*)\b')

# Trailing-comment tolerance (see fix_untyped_field_access.py's
# TRAILING_COMMENT note) -- mips_to_c routinely appends a comment like
# '/* compiler-managed */' to stack-frame locals, and without
# tolerating that, the declaration-block scan below stops at the first
# commented line and silently excludes every variable declared after
# it.
TRAILING_COMMENT = r';\s*(?:/\*.*?\*/|//.*)?\s*$'
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
# Scalar-BY-VALUE globals only (no void* branch) -- needed separately
# from GLOBAL_EXTERN_RE above because pass 2 (bare '*IDENT', no
# parens) must never fire on a void*-declared global: dereferencing
# void* directly is a different error category this script doesn't
# target, not the "scalar value used as pointer" bug this script fixes.
GLOBAL_SCALAR_ONLY_RE = re.compile(
    r'^\s*extern\s+(?:' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\s*;'
)
# A scalar-type ARRAY global, e.g. 'extern s32 D_800BE728[];' -- same
# untyped-storage bug as GLOBAL_SCALAR_ONLY_RE, just with an array
# declarator. Treated the same as a scalar-by-value name for BOTH
# passes: an array name decays to a pointer to its first element, so
# dereferencing it directly has the identical "value used as address"
# shape as a bare scalar (never a real scalar-pointer/void*, which
# would already be valid to dereference). Found via D_800BE728, used
# as '*(D_800BE728 + (var_v0 * 4))' and bare '**D_800BE728'.
GLOBAL_ARRAY_EXTERN_RE = re.compile(
    r'^\s*extern\s+(?:' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;'
)

CAST_RE = re.compile(r'\((s8|u8|s16|u16|s32|u32|f32)\)')
# A macro-read consuming the ENTIRE content of the outer '*(...)',
# i.e. WITHOUT its own leading '(' (the outer dereference's own '('
# already plays that role): '*(TYPE *)(BASE)'.
BARE_MACRO_READ_RE = re.compile(r'^\*\((s8|u8|s16|u16|s32|u32|f32)\s*\*\)\(')


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
    names = set()
    scalar_names = set()
    if not Path(variables_h_path).exists():
        return names, scalar_names
    text = Path(variables_h_path).read_text(errors='replace')
    for line in text.split('\n'):
        m = GLOBAL_EXTERN_RE.match(line)
        if m:
            names.add(m.group(1))
        m2 = GLOBAL_SCALAR_ONLY_RE.match(line)
        if m2:
            scalar_names.add(m2.group(1))
        m3 = GLOBAL_ARRAY_EXTERN_RE.match(line)
        if m3:
            names.add(m3.group(1))
            scalar_names.add(m3.group(1))
    return names, scalar_names


def get_local_untyped_globals(text):
    names = set()
    scalar_names = set()
    for line in text.split('\n'):
        m = GLOBAL_EXTERN_RE.match(line)
        if m:
            names.add(m.group(1))
        m2 = GLOBAL_SCALAR_ONLY_RE.match(line)
        if m2:
            scalar_names.add(m2.group(1))
        m3 = GLOBAL_ARRAY_EXTERN_RE.match(line)
        if m3:
            names.add(m3.group(1))
            scalar_names.add(m3.group(1))
    return names, scalar_names


def infer_type(line):
    m = CAST_RE.search(line)
    return m.group(1) if m else 's32'


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


def content_is_whole_untyped_term(content, untyped_names, scalar_ptr_names):
    """Returns True if `content` (the FULL text strictly inside the
    outer '*( ... )') is, in its entirety, one of:
      - a bare identifier in untyped_names
      - '*IDENT' where IDENT is in scalar_ptr_names
      - a macro-read '*(TYPE *)(BASE)' that consumes all of `content`
    i.e. the outer '*(...)' has NOTHING else inside it -- no trailing
    '+REST' (that's fix_leading_dereference.py's job instead)."""
    m = re.match(r'^[A-Za-z_]\w*$', content)
    if m and content in untyped_names:
        return True
    m1 = re.match(r'^\*([A-Za-z_]\w*)$', content)
    if m1 and m1.group(1) in scalar_ptr_names:
        return True
    m2 = BARE_MACRO_READ_RE.match(content)
    if m2:
        # The cast's own '(' is right after ')' in '*(TYPE *)(' -- find
        # where BARE_MACRO_READ_RE's match ends to get that '('.
        inner_open = m2.end() - 1
        inner_close = find_matching_close(content, inner_open)
        if inner_close is not None and inner_close == len(content) - 1:
            return True
    return False


def is_float_term(content, float_names, float_ptr_names):
    if content in float_names:
        return True
    m = BARE_MACRO_READ_RE.match(content)
    if m and m.group(1) == 'f32':
        return True
    m1 = re.match(r'^\*([A-Za-z_]\w*)$', content)
    return bool(m1 and m1.group(1) in float_ptr_names)


# A BARE (no wrapping parens) dereference of a plain identifier, e.g.
# '*D_800CBE00' or '*var_v1' -- distinct from the '*(...)' shape above
# (no parens at all right after the star). Only matches when the name
# isn't immediately followed by something that would make this a
# DIFFERENT, unrelated construct: '(' (a call through a function
# pointer), '[' (array indexing), '.'/'->'(chained member access,
# already this codebase's own '->unkXX'/'.unkXX' convention handled by
# other scripts) -- so this only fires on a genuinely bare, final-use
# dereference of the identifier's own scalar value.
BARE_STAR_IDENT_RE = re.compile(r'\*([A-Za-z_]\w*)(?!\s*[(\[.]|\s*->)')


def process_line(line, untyped_names, float_names, scalar_ptr_names, float_ptr_names):
    fixes = 0

    # Pass 1: '*(...)' -- content may be a macro-read, a bare
    # identifier wrapped in parens, or '*IDENT' (pointer-to-scalar).
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
        if not content_is_whole_untyped_term(content, untyped_names, scalar_ptr_names):
            search_from = star_idx + 1
            continue

        field_type = infer_type(line)
        if is_float_term(content, float_names, float_ptr_names):
            base = f'(*(void **)&({content}))'
        else:
            base = f'({content})'
        replacement = f'(*({field_type} *)({base}))'

        line = line[:star_idx] + replacement + line[close_idx + 1:]
        fixes += 1
        search_from = star_idx + len(replacement)

    return line, fixes


def process_line_bare_ident(line, bare_scalar_names, float_names):
    """Second pass: '*IDENT' with NO wrapping parens at all, where
    IDENT is a plain scalar-BY-VALUE name (never a real scalar-pointer
    or void* -- dereferencing one of those directly is already valid,
    or a different error category respectively; see BARE_STAR_IDENT_RE
    and the bare_scalar_names set passed in, which the caller has
    already restricted to exclude both)."""
    fixes = 0
    search_from = 0
    while True:
        m = BARE_STAR_IDENT_RE.search(line, search_from)
        if not m:
            break
        star_idx = m.start()
        prev = line[star_idx - 1] if star_idx > 0 else ''
        if prev.isalnum() or prev in ('_', ')', ']'):
            search_from = star_idx + 1
            continue
        name = m.group(1)
        if name not in bare_scalar_names:
            search_from = m.end()
            continue
        field_type = infer_type(line)
        if name in float_names:
            base = f'(*(void **)&({name}))'
        else:
            base = f'({name})'
        replacement = f'(*({field_type} *)({base}))'
        line = line[:star_idx] + replacement + line[m.end():]
        fixes += 1
        search_from = star_idx + len(replacement)
    return line, fixes


def process_line_full(line, untyped_names, float_names, scalar_ptr_names,
                       float_ptr_names, bare_scalar_names):
    """Runs both passes repeatedly (bounded) until the line stops
    changing -- handles a nested double-dereference like
    '**D_800BE728' (bare scalar global), where fixing the INNER '*'
    first turns it into '*(*(TYPE *)(D_800BE728))', a shape pass 1
    (the '*(...)' macro-read case) can then fix on the next round."""
    total = 0
    for _ in range(4):
        line, n1 = process_line(line, untyped_names, float_names,
                                 scalar_ptr_names, float_ptr_names)
        line, n2 = process_line_bare_ident(line, bare_scalar_names, float_names)
        total += n1 + n2
        if n1 == 0 and n2 == 0:
            break
    return line, total


def process_file(path, global_untyped, global_scalar, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines(keepends=True)

    local_globals, local_scalar_globals = get_local_untyped_globals(text)
    all_globals = global_untyped | local_globals
    all_scalar_globals = global_scalar | local_scalar_globals

    total_fixes = 0

    for start, end, params in find_function_bodies(lines):
        void_ptr_names = set(VOID_PTR_PARAM_RE.findall(params))
        scalar_ptr_names = set(SCALAR_PTR_PARAM_RE.findall(params))
        scalar_value_names = set(SCALAR_VALUE_PARAM_RE.findall(params))
        float_names = set(F32_VALUE_PARAM_RE.findall(params))
        float_ptr_names = set(F32_PTR_PARAM_RE.findall(params))

        decl_end = collect_declaration_block_end(lines, start, end)
        for j in range(start + 1, decl_end + 1):
            m = VOID_PTR_LOCAL_RE.match(lines[j])
            if m:
                void_ptr_names.add(m.group(1))
                continue
            m = SCALAR_PTR_LOCAL_RE.match(lines[j])
            if m:
                scalar_ptr_names.add(m.group(1))
                continue
            m = SCALAR_LOCAL_RE.match(lines[j])
            if m:
                scalar_value_names.add(m.group(1))
                if re.match(r'^\s*f32\s+', lines[j]):
                    float_names.add(m.group(1))
                continue

        # untyped_names (pass 1, '*(...)' shapes) can safely include
        # every category -- see module notes; bare_scalar_names (pass
        # 2, parenless '*IDENT') is deliberately restricted to
        # scalar-BY-VALUE names only, never a real scalar-pointer or
        # void* (dereferencing either of those directly is either
        # already valid C or a different error category entirely).
        untyped_names = void_ptr_names | scalar_ptr_names | scalar_value_names | all_globals
        bare_scalar_names = scalar_value_names | all_scalar_globals

        for j in range(start, end + 1):
            line = lines[j]
            if '*' not in line:
                continue
            if line.strip().startswith('//'):
                continue
            new_line, n = process_line_full(line, untyped_names, float_names,
                                             scalar_ptr_names, float_ptr_names,
                                             bare_scalar_names)
            if n:
                lines[j] = new_line
                total_fixes += n

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
    global_untyped, global_scalar = get_global_untyped_names(root / 'include' / 'variables.h')

    total_fixed = 0
    files_fixed = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, global_untyped, global_scalar, args.apply)
        if count:
            total_fixed += count
            files_fixed += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total_fixed} bare dereference(s) "
          f"across {files_fixed} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
