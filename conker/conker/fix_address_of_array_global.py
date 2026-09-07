#!/usr/bin/env python3
"""
Fix '&ARRAYNAME' where ARRAYNAME is declared in variables.h as a
scalar-type ARRAY global (e.g. 'extern f32 D_800DD1D8[];') -- seen at
least as "Unacceptable operand of a multiplicative operator" (and
likely other operator categories) when the resulting pointer-to-array
value is used in further pointer arithmetic or dereferenced.

Background: an array name ALREADY decays to a pointer to its first
element in essentially every expression context in C -- 'ARRAYNAME'
alone is already the right pointer, correctly scaled by
'sizeof(element)' for arithmetic ('ARRAYNAME + N' advances N
*elements*). Taking '&ARRAYNAME' instead gives a pointer-TO-THE-ARRAY
('TYPE (*)[N]', or for this codebase's common size-unspecified style
'extern TYPE NAME[];', a pointer to an INCOMPLETE array type) -- a
different, less useful type that doesn't support element-scaled
arithmetic at all (the pointee's size isn't known), which is exactly
what "Unacceptable operand of a multiplicative/binary operator" flags
when the result is later multiplied/added/dereferenced as if it were a
plain element pointer. Every observed usage in this codebase treats
these as if they were plain element pointers (e.g.
'*(&D_800DD1D8 + temp_t0) * temp_f0', clearly intending "the temp_t0'th
f32 element of D_800DD1D8, times temp_f0") -- mips_to_c emitted the
address-of only because it had no better way to express "the base
address of this array," not because a pointer-to-array type was
actually wanted anywhere.

Fix: drop the '&' entirely -- 'ARRAYNAME' alone already IS the correct,
properly-scaled base pointer. Only touches scalar-type array globals
(the same set fix_untyped_global_access.py's GLOBAL_ARRAY_EXTERN_RE
already tracks) -- never a real struct-typed array (e.g. `gObjects`),
where '&gObjects' has its own separate, already-discussed pattern (see
HANDOFF.md's "structural pattern" notes on `&gObjects + N`) that this
script deliberately does not touch.

Usage:
    python3 fix_address_of_array_global.py --root .            # dry run
    python3 fix_address_of_array_global.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

SCALAR_TYPES = {"f32", "s32", "u32", "s16", "u16", "s8", "u8"}
GLOBAL_ARRAY_EXTERN_RE = re.compile(
    r'^\s*extern\s+(?:' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;'
)


def get_array_globals(variables_h_path):
    text = Path(variables_h_path).read_text(errors='replace')
    names = set()
    for line in text.split('\n'):
        m = GLOBAL_ARRAY_EXTERN_RE.match(line)
        if m:
            names.add(m.group(1))
    return names


def get_local_array_globals(text):
    names = set()
    for line in text.split('\n'):
        m = GLOBAL_ARRAY_EXTERN_RE.match(line)
        if m:
            names.add(m.group(1))
    return names


def process_file(path, global_arrays, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')

    all_arrays = global_arrays | get_local_array_globals(text)
    relevant = [g for g in all_arrays if ('&' + g) in text]
    if not relevant:
        return 0

    total = 0
    for i, line in enumerate(lines):
        if '&' not in line or line.strip().startswith('//'):
            continue
        new_line = line
        for name in relevant:
            pat = re.compile(r'&' + re.escape(name) + r'\b')
            new_line, n = pat.subn(name, new_line)
            total += n
        if new_line != line:
            lines[i] = new_line

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
    global_arrays = get_array_globals(root / 'include' / 'variables.h')
    print(f"Found {len(global_arrays)} scalar-array globals in variables.h")

    total = 0
    files_touched = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, global_arrays, args.apply)
        if count:
            total += count
            files_touched += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total} address-of-array "
          f"occurrence(s) across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
