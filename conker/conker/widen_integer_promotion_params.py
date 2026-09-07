#!/usr/bin/env python3
"""
Widen small-integer parameter types (u8/s8/u16/s16) in real function
DEFINITIONS to their C default-argument-promotion equivalent (s32),
for functions whose parameter list is otherwise free of 'f32'.

Background: relax_prototypes.py relaxes every declaration to K&R-style
empty parens ('TYPE name();'), which tolerates the widespread
inconsistent-argument-count-per-call-site problem in this decompiled
codebase. restore_promotion_safe_signatures.py then has to re-restore
the EXACT signature wherever a real definition uses an unpromoted type
directly (u8/s8/u16/s16/f32) -- otherwise ANSI C rejects the mix of a
K&R declaration and a definition using an unpromoted type ("prototype
and non-prototype declaration ... not compatible with default argument
promotion"). But functions.h is included by every file, so restoring
the exact (small) argument count there re-enables strict argument-count
checking for EVERY caller -- which is exactly the problem relaxation
was meant to avoid, and breaks any caller whose call sites don't all
agree on argument count (extremely common here).

The actual fix: eliminate the promotion risk at its source instead of
routing around it. If a definition's u8/s8/u16/s16 parameter is
rewritten to its own promoted type (s32), the definition is no longer
"unpromoted" at all -- a K&R/relaxed declaration is then compatible
with it everywhere, with NO restoration needed anywhere, functions.h
included. This is exactly what "default argument promotion" already
means for an old-style call: the caller widens the value when passing
it, so a definition that expects the widened type directly is exactly
what an unprototyped call site already produces.

Deliberately NOT done for 'f32' parameters: float promotes to 'double'
under K&R rules, but on this MIPS/N64 ABI, f32 and f64 use entirely
different floating-point register/calling conventions (single- vs
double-precision) -- unlike integer promotion (still just a wider value
in the same general-purpose register), widening f32->f64 here would be
a genuine calling-convention change, not just a paperwork fix. Any
function with an 'f32' parameter is left alone for
restore_promotion_safe_signatures.py to handle via its narrower
(functions.h + defining-file-only) restoration instead.

Only rewrites the DEFINITION line itself (never a declaration) --
after this runs, has_promotion_risk() in
restore_promotion_safe_signatures.py naturally stops flagging these
functions at all, since their real definitions no longer contain any
promotion-risky type.

Must run BEFORE relax_prototypes.py / restore_promotion_safe_signatures.py.

Usage:
    python3 widen_integer_promotion_params.py --root .            # dry run
    python3 widen_integer_promotion_params.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

INT_RISKY = {"s8", "u8", "s16", "u16"}
ALL_RISKY = INT_RISKY | {"f32"}

FUNC_DEF_RE = re.compile(
    r'^([A-Za-z_][\w ]*?\**\s+\**\s*[A-Za-z_]\w*\s*)\(([^;{]*)\)(\s*\{\s*(?://.*)?)$'
)
NAME_IN_PREFIX_RE = re.compile(r'([A-Za-z_]\w*)\s*$')

# Real N64 SDK functions whose ONLY other declaration is a REAL SDK
# header (e.g. include/2.0L/PR/n_libaudio.h) that relax_prototypes.py
# never touches (it only relaxes functions.h and this project's own
# per-file local declarations) -- so widening the DEFINITION here does
# NOT eliminate the promotion-risk conflict the way it does for every
# other function; it just trades one mismatch (this project's relaxed
# declaration vs. the real def) for a DIFFERENT one (the real def vs.
# the SDK header's own strict, never-relaxed prototype). Found via
# 'n_alSynSetFXMix': widening its 'u8 fxmix' definition parameter to
# 's32' immediately reintroduced "Incompatible type for the function
# parameter" against n_libaudio.h's own 'u8 fxmix' declaration -- a
# hand fix matching the definition to the header's real type kept
# getting silently reverted by this script every time the full
# pipeline reran, until traced back to here.
SDK_HEADER_STRICT_NAMES = {"n_alSynSetFXMix"}

# One parameter: optional leading type, optional stars, name, optional array.
PARAM_RE = re.compile(
    r'^\s*(' + '|'.join(INT_RISKY) + r')\b(\s*)((?:\*\s*)*)([A-Za-z_]\w*)?\s*((?:\[[^\]]*\])*)\s*$'
)


def widen_params(params):
    """Returns (new_params, changed) -- widens bare (non-pointer,
    non-array) u8/s8/u16/s16 parameters to s32. A pointer/array
    parameter of these types (e.g. 'u8 *arg0', 'u8 arg0[4]') is left
    untouched -- pointee width matters there, and it's not promotion-
    risky anyway (only by-value small integers are)."""
    parts = params.split(',')
    changed = False
    new_parts = []
    for part in parts:
        m = PARAM_RE.match(part)
        if m and not m.group(3) and not m.group(5):  # no '*' stars, no array
            new_parts.append(f' s32{m.group(2)}{m.group(4) or ""}')
            changed = True
        else:
            new_parts.append(part)
    return ','.join(new_parts), changed


def has_f32(params):
    """A pointer-to-f32 parameter ('f32 *arg0') is NOT promotion-risky at
    all -- only a BY-VALUE float is (pointers are never promoted under
    default argument promotion). Only count a bare 'f32 name' parameter
    (no '*' before the name) as an actual risk."""
    for part in params.split(','):
        m = re.match(r'^\s*f32\b(\s*)((?:\*\s*)*)', part)
        if m and not m.group(2):
            return True
    return False


def has_int_risk(params):
    return bool(re.search(r'\b(' + '|'.join(INT_RISKY) + r')\b', params))


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')
    total = 0

    for i, line in enumerate(lines):
        m = FUNC_DEF_RE.match(line)
        if not m:
            continue
        prefix, params, suffix = m.groups()
        name_m = NAME_IN_PREFIX_RE.search(prefix)
        if name_m and name_m.group(1) in SDK_HEADER_STRICT_NAMES:
            continue
        if has_f32(params) or not has_int_risk(params):
            continue
        new_params, changed = widen_params(params)
        if changed:
            lines[i] = f'{prefix}({new_params}){suffix}'
            total += 1

    if total > 0:
        print(f"{path}: widened {total} definition(s)")
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
    print(f"{'Would widen' if not args.apply else 'Widened'} {total} definition(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
