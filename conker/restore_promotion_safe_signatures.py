#!/usr/bin/env python3
"""
Restore accurate (non-relaxed) signatures for functions that have a REAL
C body definition using a promotion-risky parameter type (f32, s8, u8,
s16, u16 used directly, not as a pointer).

Background: relax_prototypes.py converts every prototype to empty
parens ('TYPE name();'), which is safe and necessary for the vast
majority of functions (mismatched call-site argument counts). But for
a function that actually HAS a real C definition using a promotion-risky
type directly, an empty-paren K&R declaration conflicts with that real
definition -- K&R declarations imply default argument promotion
(float->double, char/short->int), which the real definition's
unpromoted parameter type doesn't satisfy. This produces:
    'prototype and non-prototype declaration found for X, the type of
    this parameter is not compatible with the type after applying
    default argument promotion'

This script finds every such real definition across the whole tree,
and restores functions.h / local per-file declarations for just those
specific functions to match the real definition exactly -- sanitizing
any custom/unknown type in the parameter list to a generic stand-in
(void* for pointers, s32 for by-value) so the restored declaration
doesn't introduce a *different* problem (referencing a type not
visible wherever the declaration is included from), while our own
project's structs.h types and common N64 SDK types are kept exact
since they're safe to reference everywhere.

Must be run AFTER relax_prototypes.py, since it depends on being able
to find and override already-relaxed (or never-relaxed) declarations
for exactly the functions that need it -- everything else stays
relaxed.

IMPORTANT bug found and fixed: sanitize_params()'s per-parameter regex
used '(\**)' for the pointer-star run, which only matches CONSECUTIVE
'*' characters -- but this codebase's own style routinely puts
whitespace BETWEEN multiple stars in a type ('void * *arg1', not
'void **arg1'; see relax_prototypes.py's PROTOTYPE_RE and fix_pointer_
to_float_cast.py's own docstrings for the same trap already found and
fixed in OTHER scripts). For a whitespace-separated multi-star
parameter, the regex failed to match the parameter at all, silently
falling through to the 's32' by-value default -- SILENTLY DISCARDING
the parameter's real pointer-ness. Caught when a hand-written 'void *
*arg1'-shaped fix to a redeclaration mismatch (see HANDOFF.md's manual
fixes for "Incompatible type for the function parameter") got reverted
right back to a bare 's32' the very next time this script ran as part
of the standard full-pipeline rerun -- confirmed by re-reading the file
after the pipeline pass and finding the hand fix gone. Fixed by
widening the star-matching group to '(?:\*\s*)*', matching the exact
fix already applied to PROTOTYPE_RE in relax_prototypes.py.

Usage:
    python3 restore_promotion_safe_signatures.py --root . --apply
"""
import argparse
import re
from pathlib import Path

SAFE_TYPES = {"s8", "u8", "s16", "u16", "s32", "u32", "f32", "void"}
SDK_TYPES = {"Mtx", "Vtx", "Gfx", "MtxF", "Lights1", "LookAt", "Light",
             "Vp", "OSTask", "OSMesg", "OSThread", "OSMesgQueue"}
PROMOTION_RISKY = {"f32", "s8", "u8", "s16", "u16"}

FUNC_DEF_RE = re.compile(
    r'^[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{\s*(?://.*)?$'
)
RELAXED_RE = re.compile(r'^(\s*[\w ]+?\s*\**\s*)([A-Za-z_]\w*)\s*\(\s*\)(\s*;.*)$')
FULL_PROTO_RE = re.compile(r'^(\s*[\w ]+?\s*\**\s*)([A-Za-z_]\w*)\s*\(([^()]*)\)(\s*;.*)$')


def get_project_structs(structs_h_path):
    text = Path(structs_h_path).read_text(errors='replace')
    names = set(re.findall(r'\bstruct\s+(\w+)\s*\{', text))
    names |= set(re.findall(r'\btypedef\s+struct\s+\w*\s*(\w+)\s*;', text))
    names |= set(re.findall(r'^\}\s*(\w+)\s*;', text, re.MULTILINE))
    return names


def sanitize_params(params, known_safe):
    params = params.strip()
    if params == '' or params == 'void':
        return params
    parts = []
    for part in params.split(','):
        part = part.strip()
        if part == '' or part == '...':
            parts.append(part)
            continue
        m = re.match(r'^(?:struct\s+)?([A-Za-z_]\w*)\s*((?:\*\s*)*)\s*([A-Za-z_]\w*)?((?:\[[^\]]*\])*)$', part)
        if not m:
            parts.append('s32')
            continue
        typ, stars, name, arr = m.groups()
        if typ in known_safe:
            parts.append(part)
        elif stars or arr:
            parts.append('void *')
        else:
            parts.append('s32')
    return ', '.join(p for p in parts if p != '')


def has_promotion_risk(params):
    """A pointer-to-risky-type parameter (e.g. 'f32 *arg0', 'u8 *arg0')
    is NOT actually promotion-risky -- only a BY-VALUE parameter of one
    of these types is (pointers are never subject to default argument
    promotion). Checking for the bare type name anywhere in the params
    string over-flags pointer parameters too, which over-restores (and
    thus over-constrains against inconsistent call-site argument
    counts) functions that never had a real promotion conflict to begin
    with -- see widen_integer_promotion_params.py's has_f32 for the
    same fix applied there."""
    for part in params.split(','):
        m = re.match(r'^\s*(' + '|'.join(PROMOTION_RISKY) + r')\b(\s*)((?:\*\s*)*)', part)
        if m and not m.group(3):
            return True
    return False


def find_real_defs(root, known_safe):
    """Handles both single-line and short multi-line (<=5 line) signatures.

    Returns {name: (sanitized_params, raw_params, defining_path)}. The
    defining path matters: see fix_file's docstring for why the restored
    signature is only ever written into that one file (plus functions.h)
    rather than every caller's independent local declaration.

    raw_params (the definition's own parameter list, unsanitized) is kept
    alongside sanitized_params because fix_file must use different text
    depending on WHERE it writes: functions.h is included everywhere, so
    it needs the sanitized (generic-safe) version, but the defining file
    itself already has the real definition's own types in scope (it's
    the exact same translation unit) -- sanitizing there was found to
    silently downgrade a visible, correct type (e.g. 'N_ALCSPlayer *')
    to 'void *' just because it wasn't in the small known_safe allowlist,
    which then conflicts with the real definition sitting right below it
    ('redeclaration' / 'Incompatible type for the function parameter').
    See __n_setUsptFromTempo in src/libultra/audio/n_csplayer.c."""
    real_defs = {}
    for path in Path(root).glob('src/**/*.c'):
        lines = path.read_text(errors='replace').split('\n')
        i = 0
        while i < len(lines):
            m = FUNC_DEF_RE.match(lines[i])
            if m:
                name, params = m.group(1), m.group(2)
                if has_promotion_risk(params):
                    real_defs[name] = (sanitize_params(params, known_safe), params.strip(), path)
                i += 1
                continue
            # multi-line signature: starts with a call-like opening paren,
            # no '{' yet, ends within a few lines at ') {' (optionally
            # followed by a trailing comment)
            if '(' in lines[i] and '{' not in lines[i] and ';' not in lines[i]:
                joined = lines[i]
                j = i
                found = False
                while j < min(i + 5, len(lines) - 1):
                    j += 1
                    joined += ' ' + lines[j].strip()
                    stripped = lines[j].rstrip()
                    if re.search(r'\{\s*(?://.*)?$', stripped):
                        found = True
                        break
                if found:
                    pm = re.match(
                        r'^[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\(([^()]*)\)\s*\{\s*(?://.*)?$',
                        joined
                    )
                    if pm:
                        name, params = pm.group(1), pm.group(2)
                        if has_promotion_risk(params):
                            real_defs[name] = (sanitize_params(params, known_safe), params.strip(), path)
            i += 1
    return real_defs


def fix_file(path, real_defs, is_functions_h):
    """Only restores a name's signature in the ONE file that actually
    needs it: functions.h (included everywhere, so any promotion-risky
    function it lists must always be exact), and the specific file that
    contains that function's own real definition (a K&R-relaxed
    declaration there would conflict with the real definition sitting
    right below it in the SAME translation unit).

    Deliberately does NOT touch any other caller's independent local
    'extern' copy: each .c file is compiled on its own, so a caller that
    never sees the real definition can never trigger the 'prototype and
    non-prototype declaration' conflict regardless of its own local
    declaration's form -- and many such callers pass a different
    argument count per call site (the exact problem relax_prototypes.py
    exists to tolerate). Restoring the strict, exact-arity signature
    there would just re-break that tolerance for no benefit. See
    HANDOFF.md's note on functions needing 'full-signature safety' vs
    'inconsistent-call-site tolerance' -- this is that conflict, and a
    function's own defining file is the only place both can be
    satisfied at once."""
    text = path.read_text(errors='replace')
    lines = text.split('\n')

    # Bound the scan to the leading declaration block only (before the
    # first real function body). Without this, RELAXED_RE/FULL_PROTO_RE
    # -- which only look for 'NAME(args);' -- also match ordinary call
    # statements inside function bodies (e.g. 'return func_NAME(arg0,
    # arg1, ...);'), and this function would then overwrite the call's
    # actual arguments with the restored TYPE-annotated parameter list,
    # producing the exact type-echoed-call-args corruption
    # fix_type_echoed_call_args.py exists to remove. Confirmed live on
    # src/game/game_C1D70.c's call to func_15095A90. Same bounding
    # technique already used by relax_prototypes.py and
    # remove_redundant_externs.py.
    top_end = len(lines)
    for i, line in enumerate(lines):
        if '{' in line and not line.strip().startswith('//'):
            top_end = i
            break

    count = 0
    for i, line in enumerate(lines):
        if i >= top_end:
            break
        m = RELAXED_RE.match(line)
        if m:
            prefix, name, suffix = m.group(1), m.group(2), m.group(3)
        else:
            m2 = FULL_PROTO_RE.match(line)
            if m2:
                prefix, name, suffix = m2.group(1), m2.group(2), m2.group(4)
            else:
                continue
        if name in real_defs:
            sanitized_params, raw_params, def_path = real_defs[name]
            if not (is_functions_h or def_path == path):
                continue
            params = sanitized_params if is_functions_h else raw_params
            new_line = f"{prefix}{name}({params}){suffix}"
            if new_line != line:
                lines[i] = new_line
                count += 1
    if count:
        path.write_text('\n'.join(lines), encoding='utf-8', newline='')
    return count


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    project_structs = get_project_structs(root / 'include' / 'structs.h')
    known_safe = SAFE_TYPES | project_structs | SDK_TYPES
    print(f"Known-safe types: {len(known_safe)} "
          f"(project structs: {len(project_structs)}, SDK: {len(SDK_TYPES)})")

    real_defs = find_real_defs(root, known_safe)
    print(f"Found {len(real_defs)} promotion-risky real definitions")

    if not args.apply:
        print("Dry run -- add --apply to write changes.")
        return

    total = 0
    files_touched = 0

    fh = root / 'include' / 'functions.h'
    c = fix_file(fh, real_defs, is_functions_h=True)
    if c:
        total += c
        files_touched += 1
        print(f"{fh}: restored {c}")

    for path in sorted(root.glob('src/**/*.c')):
        c = fix_file(path, real_defs, is_functions_h=False)
        if c:
            total += c
            files_touched += 1
            print(f"{path}: restored {c}")

    print()
    print(f"Restored {total} promotion-safe signature(s) across {files_touched} file(s)")


if __name__ == '__main__':
    main()
