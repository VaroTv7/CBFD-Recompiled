#!/usr/bin/env python3
"""
Fix field accesses on genuinely untyped variables (void* or bare scalars)
across the whole src tree, via per-function static analysis rather than
reacting to compiler errors one at a time.

The problem: many decompiled functions have parameters/locals the
decompiler left as 'void *' (pointer case) or a bare scalar type like
'f32'/'s32' (value case), but the code still accesses them with
'->fieldName' or '.fieldName' where fieldName matches this codebase's
'unkXX' (hex offset) convention. Real ANSI C disallows struct-member
access on void* or scalar types at all -- these are genuine compile
errors, not compiler bugs.

The fix, per accessed field: rewrite the access into raw pointer
arithmetic that reinterprets the variable's own memory at the given
offset, WITHOUT needing to invent a full struct type for the variable:

    ptr->unkXX      ->  (*(TYPE *)((char *)(ptr) + 0xXX))
    scalar.unkXX    ->  (*(TYPE *)((char *)&(scalar) + 0xXX))

TYPE is inferred from a cast on the same line when present, defaulting
to s32.

CRITICAL SAFETY RULE: only variables whose declared type in THIS
function is exactly 'void *' (pointer case) or a bare scalar type in a
fixed allowlist (f32/s32/u32/s16/u16/s8/u8) get touched. Any variable
with a real struct type (e.g. 'struct127 *') is left completely alone,
since its accesses are presumably already correct.

This is a best-effort, regex/brace-based analysis, not a full C parser.
It handles the overwhelming majority of this codebase's actual style
(single-line function signatures, declarations grouped at the top of
each function body) but isn't guaranteed to catch every edge case.

Usage:
    python3 fix_untyped_field_access.py            # dry run, report only
    python3 fix_untyped_field_access.py --apply    # write changes
"""
import argparse
import re
from pathlib import Path

SCALAR_TYPES = {"f32", "s32", "u32", "s16", "u16", "s8", "u8"}

# A function definition line: return type, optional pointer stars, name,
# parameter list, opening brace -- all on one line, optionally followed
# by a trailing comment.
FUNC_DEF_RE = re.compile(
    r'^[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{\s*(?://.*)?$'
)

# A parameter declared as a bare 'void *name' or 'void **name' etc.
VOID_PTR_PARAM_RE = re.compile(r'\bvoid\s*(?:\*\s*)+([A-Za-z_]\w*)\b')

# A parameter declared as a pointer (single OR double, e.g. 'f32 *arg0'
# or 's32 **arg0') to a bare scalar type. A real struct/union is never
# declared this way (structs are always a named struct/typedef, never a
# builtin scalar keyword), so '->fieldName' on one of these is exactly
# the same class of bug as on a void* -- the decompiler emitting raw
# offset access without ever having a real struct type to attach it to.
# '(?:\*\s*)+' (one or more stars) rather than a single '\*' -- found
# via 's32 **temp_v0;' used as 'temp_v0->unk168' in game_15F680.c,
# which a single-star-only regex silently never recognized as untyped.
SCALAR_PTR_PARAM_RE = re.compile(
    r'\b(?:' + '|'.join(SCALAR_TYPES) + r')\s*(?:\*\s*)+([A-Za-z_]\w*)\b'
)

# A parameter declared as a BARE (by-value) scalar, e.g. 'f32 arg0' --
# no pointer star at all. This is a distinct decompiler mistake from
# the pointer case above: mips_to_c inferred the wrong primitive type
# entirely for a register that's actually holding a pointer (observed:
# a param declared 'f32 arg0' used throughout its function as
# 'arg0->unkXX'). Since a scalar VALUE parameter can never legitimately
# have a real struct type, '->'/'.' access on one is the same bug
# class -- just add it to the same untyped set as the void*/scalar-
# pointer cases (the fix loop below already applies both the
# arrow-treats-value-as-address and dot-treats-storage-as-base
# rewrites uniformly to everything in that set).
SCALAR_VALUE_PARAM_RE = re.compile(
    r'\b(?:' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\b(?!\s*[\[\*])'
)
# Same as above, restricted to 'f32' -- these need different handling
# for '->' access than the other scalar types (see FLOAT_ARROW note
# where float_value_vars is used below): C allows reinterpreting an
# int VALUE as a pointer via a direct cast (with just a warning), but
# NEVER allows casting a float value to a pointer directly at all
# ('Cast a non-integral type into a pointer' -- always a hard error).
F32_VALUE_PARAM_RE = re.compile(r'\bf32\s+([A-Za-z_]\w*)\b(?!\s*[\[\*])')

# A local declaration line: 'void *name;' / 'void * *name;' or
# 'TYPE name;' (simple, no initializer, no array, no multiple
# declarators -- keeps this safe and conservative rather than trying
# to handle every declaration form).
#
# Trailing-comment tolerance: every one of these ends in
# ';\s*TRAILING_COMMENT\s*$' rather than a bare ';\s*$'. mips_to_c
# routinely appends a comment to stack-frame locals (observed:
# 'void *sp9C;                    /* compiler-managed */'). Without
# tolerating that, this line fails EVERY local-declaration regex used
# by collect_declaration_block_end() below, which treats the first
# non-matching line as the END of the leading declaration block --
# silently excluding every variable declared AFTER it (even ones on
# their own plain, comment-free line) from all_untyped_vars, so their
# real '->unkXX'/'.unkXX' accesses never get fixed. Confirmed live on
# src/game/game_10EF60.c: 'void *temp_v0;' declared two lines after a
# '/* compiler-managed */' local was silently skipped, leaving
# 'temp_v0->unk84' as an uncaught "Selector requires struct/union
# pointer" compile error.
TRAILING_COMMENT = r';\s*(?:/\*.*?\*/|//.*)?\s*$'
VOID_PTR_LOCAL_RE = re.compile(r'^\s*void\s*(?:\*\s*)+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT)
SCALAR_LOCAL_RE = re.compile(
    r'^\s*(' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT
)
# 'f32 *name;' etc -- a local pointer-to-scalar (see SCALAR_PTR_PARAM_RE).
SCALAR_PTR_LOCAL_RE = re.compile(
    r'^\s*(?:' + '|'.join(SCALAR_TYPES) + r')\s*(?:\*\s*)+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT
)

CAST_RE = re.compile(r'\((s8|u8|s16|u16|s32|u32|f32)\)')

# Detects a CHAINED access immediately following a replaced one, e.g.
# 'arg0->unk31C->unk1BC' -- the first link's rewritten result is used
# purely as a base address for the second link, not as a final value,
# so it must stay pointer-compatible (forced to 's32') regardless of
# whatever cast infer_type() finds elsewhere on the line (very often
# the FINAL link's own assignment cast, which is unrelated and would
# otherwise produce an illegal '(char *)((*(f32 *)(...)))' -- can't
# cast a float value to a pointer).
CHAINED_RE = re.compile(r'^\s*(?:->|\.)\s*unk[0-9A-Fa-f]')

# Broad "this still looks like a declaration, keep scanning" check --
# matches things like 'f32 *sp3C;', 'struct127 *arg0;', 'u8 buf[16];',
# etc. that we don't specifically target for fixing, but which must
# not be mistaken for the end of the declaration block (which would
# cause every declaration listed AFTER them to be missed entirely).
GENERIC_DECL_RE = re.compile(
    r'^\s*[A-Za-z_]\w*(?:\s*\*)*\s+\**[A-Za-z_]\w*\s*(?:\[[^\]]*\])?\s*' + TRAILING_COMMENT
)

# A function-pointer local declaration, e.g.
# 's32 (*sp44)(void *, void *, u32 *, void *, s32 *, u16 *);' -- doesn't
# match GENERIC_DECL_RE at all, so without this it looks like the end of
# the declaration block and every declaration listed AFTER it gets
# silently skipped for the rest of the function.
FUNC_PTR_DECL_RE = re.compile(
    r'^\s*[A-Za-z_]\w*(?:\s*\*)*\s*\(\s*\*+\s*[A-Za-z_]\w*\s*\)\s*\([^;]*\)\s*' + TRAILING_COMMENT
)


def infer_type(line):
    m = CAST_RE.search(line)
    return m.group(1) if m else 's32'


def find_function_bodies(lines):
    """Yields (start_idx, end_idx, param_list_str) for each function
    definition found, where lines[start_idx] is the signature line and
    lines[end_idx] is the closing brace line (inclusive range)."""
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
    """Returns the index of the last line that's part of the leading
    declaration block (conservative: stops at the first line that
    doesn't look like a declaration of any kind, or blank line)."""
    j = start + 1
    while j <= end:
        stripped = lines[j].strip()
        if stripped == '':
            j += 1
            continue
        if (VOID_PTR_LOCAL_RE.match(lines[j]) or SCALAR_LOCAL_RE.match(lines[j])
                or GENERIC_DECL_RE.match(lines[j]) or FUNC_PTR_DECL_RE.match(lines[j])):
            j += 1
            continue
        break
    return j - 1


def build_access_regex(varname, sep):
    # sep is '->' or '.'; word boundary after the offset digits so we
    # don't eat trailing chars that are part of a different valid name.
    sep_re = re.escape(sep)
    return re.compile(
        rf'\b{re.escape(varname)}\s*{sep_re}\s*unk([0-9A-Fa-f]+)\b'
    )


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines(keepends=True)

    total_fixes = 0
    touched_vars = 0

    for start, end, params in find_function_bodies(lines):
        void_ptr_vars = set(VOID_PTR_PARAM_RE.findall(params))
        void_ptr_vars |= set(SCALAR_PTR_PARAM_RE.findall(params))
        void_ptr_vars |= set(SCALAR_VALUE_PARAM_RE.findall(params))
        # Names declared bare 'f32' (param or local) need '->' access
        # reinterpreted through an address-of/void** round-trip instead
        # of a direct cast -- see F32_VALUE_PARAM_RE.
        float_value_vars = set(F32_VALUE_PARAM_RE.findall(params))
        scalar_vars = {}  # name -> declared type

        decl_end = collect_declaration_block_end(lines, start, end)
        for j in range(start + 1, decl_end + 1):
            m = VOID_PTR_LOCAL_RE.match(lines[j])
            if m:
                void_ptr_vars.add(m.group(1))
                continue
            m = SCALAR_PTR_LOCAL_RE.match(lines[j])
            if m:
                void_ptr_vars.add(m.group(1))
                continue
            m = SCALAR_LOCAL_RE.match(lines[j])
            if m:
                scalar_vars[m.group(2)] = m.group(1)
                if m.group(1) == 'f32':
                    float_value_vars.add(m.group(2))

        all_untyped_vars = void_ptr_vars | set(scalar_vars.keys())
        if not all_untyped_vars:
            continue

        for j in range(start, end + 1):
            line = lines[j]
            if not ('->' in line or '.' in line):
                continue
            if line.strip().startswith('//'):
                continue

            whole_line_type = infer_type(line)
            new_line = line
            line_fixes = 0

            def pick_type(m, source):
                # See CHAINED_RE: a non-final link in a chain must stay
                # pointer-compatible, regardless of any cast elsewhere
                # on the line (typically the final link's own cast).
                if CHAINED_RE.match(source[m.end():]):
                    return 's32'
                return whole_line_type

            for varname in all_untyped_vars:
                # '->' usage: treat the variable's VALUE as the address.
                pat_arrow = build_access_regex(varname, '->')
                def repl_ptr(m, v=varname, source=new_line):
                    nonlocal line_fixes
                    line_fixes += 1
                    field_type = pick_type(m, source)
                    if v in float_value_vars:
                        # Can't cast a float VALUE to a pointer directly
                        # (always a hard error, unlike int->pointer which
                        # is merely warned) -- reinterpret its bits as a
                        # pointer first via address-of + void** round
                        # trip (same technique as
                        # fix_float_to_pointer_casts.py), THEN do the
                        # normal byte-offset arithmetic on that.
                        base = f'(*(void **)&({v}))'
                    else:
                        base = f'({v})'
                    return f'(*({field_type} *)((char *){base} + 0x{m.group(1)}))'
                new_line2 = pat_arrow.sub(repl_ptr, new_line)
                if new_line2 != new_line:
                    new_line = new_line2

                # '.' usage: treat the variable's OWN STORAGE as the base,
                # regardless of whether it's declared as a pointer --
                # dot notation on a void*-declared variable means the
                # decompiled source's real intent was a value, not the
                # pointer itself.
                pat_dot = build_access_regex(varname, '.')
                def repl_dot(m, v=varname, source=new_line):
                    nonlocal line_fixes
                    line_fixes += 1
                    field_type = pick_type(m, source)
                    return f'(*({field_type} *)((char *)&({v}) + 0x{m.group(1)}))'
                new_line2 = pat_dot.sub(repl_dot, new_line)
                if new_line2 != new_line:
                    new_line = new_line2

            if line_fixes:
                lines[j] = new_line
                total_fixes += line_fixes

        if all_untyped_vars:
            touched_vars += len(all_untyped_vars)

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
    targets = list(root.glob('src/**/*.c'))

    total_fixed = 0
    files_fixed = 0

    for path in sorted(targets):
        count = process_file(path, args.apply)
        if count:
            total_fixed += count
            files_fixed += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total_fixed} field access(es) "
          f"across {files_fixed} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
