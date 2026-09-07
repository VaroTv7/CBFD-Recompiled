#!/usr/bin/env python3
"""
Fix raw pointer arithmetic on genuinely untyped ('void *') variables/
parameters/globals -- illegal in ANSI C ('Unacceptable operand of '+'.'
/ 'Bad operand type for += or -='), a common decompiler artifact once
a file's includes are fixed and its real types come into scope (see
fix_missing_includes.py).

IMPORTANT: this is 'void *' ONLY, never a scalar-pointer type like
'f32 *'/'s32 *'. Arithmetic on a real scalar-pointer IS valid C (e.g.
's32 *p; p + 1;' legitimately advances by 4 bytes, one element) -- the
only thing actually illegal about a scalar-pointer is '->'/'.' member
access on it (fix_untyped_field_access.py's job, a completely
different bug class). Conflating the two here would silently corrupt
already-correct arithmetic on real typed pointers.

Only rewrites the purely mechanical, unambiguous shapes below -- never
touches '->'/'.' accesses. General 'IDENT - EXPR' (subtracting another
POINTER-like expression, e.g. '&GLOBAL' or a real pointer variable) is
deliberately NOT handled here -- that's fix_pointer_subtraction_index.py's
job, since it requires casting BOTH operands and confirming the other
side really is pointer-shaped, a less mechanical judgment call:

  1. Binary '+', untyped IDENT on the LEFT:  'IDENT + REST'  ->
     '(char *)(IDENT) + REST'. A zero-width match on IDENT itself
     (lookahead for the following '+', lookbehind to skip already-cast
     occurrences) -- this never needs to know where the right-hand
     expression ends, since a cast binds tighter than '+' and the rest
     of the expression (however long/complex) is untouched and still
     parses exactly the same way.

  1b. Binary '+', untyped IDENT on the RIGHT:  'REST + IDENT'  ->
     'REST + (char *)(IDENT)'. The mirror image of rule 1 -- '+' is
     commutative for this error ("illegal void* arithmetic" fires
     regardless of which side the untyped pointer sits on), but rule 1's
     regex only ever looks for IDENT immediately BEFORE a '+', so a
     line like 'var_s2 + arg3' (arg3 untyped, on the right) was
     invisible to it. Found via 4 near-identical instances in
     game_61D10.c ('var_s2 + arg3' / 'var_s2_2 + arg3', `arg3` a `void
     *` parameter) plus a 5th in game_C1D70.c ('(arg2 * 4) + arg1'),
     all under "Unacceptable operand of '+'.". Matches '+' then
     optional whitespace then IDENT, excludes an immediately-following
     '&IDENT' (already valid, same reasoning as rule 1's guard) and an
     IDENT immediately followed by '.'/'->'/'[' (a different bug class
     entirely -- field access or indexing on the untyped pointer, not
     itself an arithmetic operand this rule should touch). Naturally
     idempotent: inserting the cast breaks the required '+' -immediately-
     followed-by-IDENT adjacency, so a second pass finds nothing to redo.

  2. Compound '+=' / '-=':  'IDENT += EXPR;'  ->  'IDENT = (char *)(IDENT) + EXPR;'
     (and '-=' -> '-'). A compound assignment's left side must be a
     real lvalue, so unlike case 1 this can't just be cast in place;
     it's rewritten as a full assignment instead. Only applied to
     lines that look like a single, complete statement (start with the
     identifier, end with ';') to keep this safe/conservative.

  3. Binary '-' against a bare NUMERIC CONSTANT only:
     'IDENT - 0x40'  ->  '(char *)(IDENT) - 0x40' (hex or decimal).
     Unlike a general 'IDENT - EXPR', subtracting a plain integer
     literal is UNAMBIGUOUSLY a byte-offset ("walk back N bytes from
     this untyped pointer") idiom -- there's no other reasonable
     reading, so this is exactly as mechanically safe as case 1, just
     restricted to a numeric right operand to avoid any overlap with
     fix_pointer_subtraction_index.py's more delicate pointer-vs-
     pointer cases. A negative lookahead excludes a literal immediately
     followed by '.' or 'f'/'F' (a float literal like '4.0f') -- this
     byte-offset idiom is always a plain integer in this codebase, and
     a float constant here would mean something else entirely. Found
     via the recurring 'Unacceptable operand of '-'' shape '(*(s32 *)(
     (char *)(VAR) + 0x4)) = (void *) (IDENT - 0x60);' appearing near-
     identically across a dozen files.

Untyped-variable detection mirrors fix_untyped_field_access.py's void*
handling exactly (same per-function param/local scan, plus the
project's known void* globals from variables.h).

Usage:
    python3 fix_void_pointer_arithmetic.py --root .            # dry run
    python3 fix_void_pointer_arithmetic.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

SCALAR_TYPES = {"f32", "s32", "u32", "s16", "u16", "s8", "u8"}

FUNC_DEF_RE = re.compile(
    r'^[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{\s*(?://.*)?$'
)
VOID_PTR_PARAM_RE = re.compile(r'\bvoid\s*(?:\*\s*)+([A-Za-z_]\w*)\b')
# Trailing-comment tolerance (see fix_untyped_field_access.py's
# TRAILING_COMMENT): without it, a commented local like 'void *sp9C;
# /* compiler-managed */' looks like the end of the declaration block
# to the scan below, silently excluding every later declaration.
TRAILING_COMMENT = r';\s*(?:/\*.*?\*/|//.*)?\s*$'
VOID_PTR_LOCAL_RE = re.compile(r'^\s*void\s*(?:\*\s*)+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT)
# Only used here to keep the declaration-block scanner in sync with
# fix_untyped_field_access.py -- NOT added to the untyped-for-arithmetic
# set (see module docstring).
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


GLOBAL_VOID_PTR_EXTERN_RE = re.compile(
    r'^\s*extern\s+void\s*(?:\*\s*)+([A-Za-z_]\w*)\s*;\s*$', re.MULTILINE
)


def get_global_void_ptr_names(variables_h_path):
    """Only 'void *' (or 'void **' etc) globals -- see module docstring
    for why scalar-pointer globals must never be included here."""
    text = Path(variables_h_path).read_text(errors='replace')
    names = set()
    for m in GLOBAL_VOID_PTR_EXTERN_RE.finditer(text):
        names.add(m.group(1))
    return names


def get_file_local_void_ptr_externs(lines, top_end):
    """A FILE's own top-of-file 'extern void *NAME;' declarations (this
    codebase's per-file convention for a global not listed in
    variables.h -- see remove_redundant_externs.py/add_relaxed_self_
    declarations.py for the same per-file-local-extern pattern). These
    are invisible to get_global_void_ptr_names (which only scans
    variables.h) and to the per-function untyped scan (which only
    covers a function's own params/locals) -- found via 'gGameState'
    being declared this way in several files and going completely
    undetected by both, silently leaving '(gGameState + EXPR)'-shaped
    arithmetic unfixed even after get_global_void_ptr_names would have
    caught it had it lived in variables.h instead. Bounded to the
    leading declaration block (before the first function body), same
    boundary already computed for the per-function local-declaration
    scan, to avoid matching a line inside a function body."""
    names = set()
    for line in lines[:top_end]:
        m = GLOBAL_VOID_PTR_EXTERN_RE.match(line)
        if m:
            names.add(m.group(1))
    return names


_PLUS_RE_CACHE = {}
_RIGHT_PLUS_RE_CACHE = {}
_MINUS_CONST_RE_CACHE = {}
_COMPOUND_RE_CACHE = {}

NUMBER_PATTERN = r'(?:0[xX][0-9A-Fa-f]+|\d+)'


def build_minus_const_regex(varname):
    r = _MINUS_CONST_RE_CACHE.get(varname)
    if r is None:
        r = re.compile(
            r'(?<!\(char \*\)\()(?<!&)\b' + re.escape(varname)
            + r'\b(?=\s*-(?!-|=)\s*' + NUMBER_PATTERN
            + r'\b(?!\.))'
        )
        _MINUS_CONST_RE_CACHE[varname] = r
    return r


def build_plus_regex(varname):
    r = _PLUS_RE_CACHE.get(varname)
    if r is None:
        # Safety guard: never match when the OTHER operand is
        # address-of ('IDENT + &GLOBAL') -- 'void* + &GLOBAL' is
        # ALREADY illegal C on its own (pointer + pointer is never
        # valid, regardless of one side being void*), so casting IDENT
        # to char* here wouldn't fix it, just reformat the same error
        # into a different pointer+pointer combination. That's a
        # different, non-mechanical bug -- leave it alone.
        # Second safety guard: never match when IDENT is ITSELF the
        # operand of a preceding '&' ('&IDENT + REST'). Address-of
        # ALWAYS produces a real, well-typed pointer regardless of
        # IDENT's own declared type (even a bare scalar's address is a
        # genuine pointer) -- '&IDENT + REST' was therefore ALREADY
        # valid C, unconditionally, with no error possible. Missing
        # this guard wrapped IDENT alone in a cast, producing
        # '&(char *)(IDENT) + REST' -- taking the address of a CAST
        # RVALUE, which is illegal (Unacceptable operand of '&') where
        # the original had no error at all. Confirmed via
        # '&sp74 + 0xC' (sp74 a local 'void *') being rewritten into
        # '&(char *)(sp74) + 0xC'.
        r = re.compile(
            r'(?<!\(char \*\)\()(?<!&)\b' + re.escape(varname)
            + r'\b(?=\s*\+(?!\+|=))(?!\s*\+\s*&)'
        )
        _PLUS_RE_CACHE[varname] = r
    return r


def build_right_plus_regex(varname):
    r = _RIGHT_PLUS_RE_CACHE.get(varname)
    if r is None:
        r = re.compile(
            r'\+\s*(?!&)(' + re.escape(varname)
            + r')\b(?!\s*[.\[]|\s*->)'
        )
        _RIGHT_PLUS_RE_CACHE[varname] = r
    return r


def build_compound_regex(varname):
    r = _COMPOUND_RE_CACHE.get(varname)
    if r is None:
        r = re.compile(
            r'^(\s*)' + re.escape(varname) + r'\s*(\+=|-=)\s*(.+?);\s*$'
        )
        _COMPOUND_RE_CACHE[varname] = r
    return r


def process_file(path, global_void_ptrs, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines(keepends=True)

    total_fixes = 0

    top_end = len(lines)
    for i, line in enumerate(lines):
        if '{' in line and not line.strip().startswith('//'):
            top_end = i
            break
    file_local_void_ptrs = get_file_local_void_ptr_externs(lines, top_end)

    for start, end, params in find_function_bodies(lines):
        untyped = set(VOID_PTR_PARAM_RE.findall(params))

        decl_end = collect_declaration_block_end(lines, start, end)
        for j in range(start + 1, decl_end + 1):
            m = VOID_PTR_LOCAL_RE.match(lines[j])
            if m:
                untyped.add(m.group(1))

        untyped |= global_void_ptrs
        untyped |= file_local_void_ptrs
        if not untyped:
            continue

        for j in range(start, end + 1):
            line = lines[j]
            if '+' not in line and '-' not in line:
                continue
            if line.strip().startswith('//'):
                continue

            new_line = line
            for varname in untyped:
                if varname not in new_line:
                    continue
                # Compound += / -= : rewrite the whole statement.
                cm = build_compound_regex(varname).match(new_line)
                if cm:
                    indent, op, rhs = cm.groups()
                    sign = '+' if op == '+=' else '-'
                    newline_end = '\r\n' if new_line.endswith('\r\n') else '\n' if new_line.endswith('\n') else ''
                    new_line = (f'{indent}{varname} = (char *)({varname}) {sign} {rhs};'
                                f'{newline_end}')
                    total_fixes += 1
                    continue

                # Binary '+', untyped IDENT on the left: cast in place.
                pat = build_plus_regex(varname)
                new_line2 = pat.sub(f'(char *)({varname})', new_line)
                if new_line2 != new_line:
                    total_fixes += len(pat.findall(new_line))
                    new_line = new_line2

                # Binary '+', untyped IDENT on the right: cast in place.
                # Group 1 (the identifier) always ends the match, so the
                # replacement keeps everything before it (the '+' and
                # any whitespace) and swaps just the identifier for its
                # cast form.
                pat_right = build_right_plus_regex(varname)
                matches_right = pat_right.findall(new_line)
                if matches_right:
                    new_line = pat_right.sub(
                        lambda m: m.group(0)[:-len(m.group(1))]
                        + f'(char *)({varname})',
                        new_line)
                    total_fixes += len(matches_right)

                # Binary '-' against a bare numeric constant only.
                pat_minus = build_minus_const_regex(varname)
                new_line3 = pat_minus.sub(f'(char *)({varname})', new_line)
                if new_line3 != new_line:
                    total_fixes += len(pat_minus.findall(new_line))
                    new_line = new_line3

            if new_line != line:
                lines[j] = new_line

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
    global_void_ptrs = get_global_void_ptr_names(root / 'include' / 'variables.h')
    print(f"Found {len(global_void_ptrs)} void* globals in variables.h")

    targets = list(root.glob('src/**/*.c'))
    total_fixed = 0
    files_fixed = 0

    for path in sorted(targets):
        count = process_file(path, global_void_ptrs, args.apply)
        if count:
            total_fixed += count
            files_fixed += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total_fixed} occurrence(s) "
          f"across {files_fixed} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
