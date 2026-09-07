#!/usr/bin/env python3
"""
Fix '(f32) POINTER_EXPR' -- the mirror image of the float trap
documented in HANDOFF.md: just as a float VALUE can never be cast
directly to a pointer, a pointer VALUE can never be cast directly to
'f32' either ('Cast a pointer into a non-integral type'). Seen at
call sites where the real function parameter was inferred as f32 but
the actual argument computed is a pointer/address expression (a
mips_to_c type-confusion artifact, much like the untyped-field-access
cases elsewhere in this pipeline) -- e.g. 'func(..., (f32) &sp84, ...)'
or 'func(..., (f32) ((char *)(arg0) + 0x2FC), ...)'.

Targets four shapes:
  1. '(f32) &IDENT'            -- address-of is always a pointer.
  2. '(f32) ((char *)...)'      -- an explicit char* cast is always a
                                    pointer.
  3. '(f32) *(&IDENT ...)'      -- a dereference of an address-of-based
                                    expression is always a pointer
                                    VALUE at that computed address (the
                                    pointee type doesn't matter -- we're
                                    not tracking it, just converting the
                                    already-wrong type numerically like
                                    every other case here).
  4. '(f32) GLOBALNAME' where GLOBALNAME is declared in variables.h as
     a pointer to a real (non-scalar, non-void) struct/typedef -- a
     bare identifier is normally excluded (could legitimately be an
     int/float variable, needing real per-function tracking this
     script doesn't attempt), but a GLOBAL's declared type is known
     with certainty tree-wide from variables.h, so this one case is
     safe without any per-function analysis.

Fix: insert an intermediate '(s32)' cast -- '(f32)(s32)(EXPR)'. Unlike
the float->pointer direction (where a BIT reinterpretation via
address-of/void** is used, since there's a real stored float to read
the bits back from), a computed pointer RVALUE like '&sp84' has no
storage of its own to reinterpret through -- there's nothing to take
the address of a second time. Since the underlying decompilation is
already type-confused here (the real parameter is almost certainly not
actually an f32 at all), a plain NUMERIC conversion through s32
(address value -> integer -> float number) is used instead: simpler,
works uniformly for both rvalue and lvalue pointer expressions, and
just as arbitrary as any other resolution of an already-wrong type --
this project's stated goal is a successful compile, not byte-accurate
behavior.

Usage:
    python3 fix_pointer_to_float_cast.py --root .            # dry run
    python3 fix_pointer_to_float_cast.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

ADDR_OF_RE = re.compile(r'\(f32\)\s*&')
CHAR_CAST_RE = re.compile(r'\(f32\)\s*\(\(char \*\)')
DEREF_ADDR_RE = re.compile(r'\(f32\)\s*\*\(&')
SCALAR_TYPES = {"f32", "s32", "u32", "s16", "u16", "s8", "u8"}
REAL_STRUCT_PTR_RE = re.compile(
    r'^\s*extern\s+([A-Za-z_]\w*)\s*\*\s*([A-Za-z_]\w*)\s*;'
)


def get_real_struct_pointer_globals(variables_h_path):
    text = Path(variables_h_path).read_text(errors='replace')
    names = set()
    for line in text.split('\n'):
        m = REAL_STRUCT_PTR_RE.match(line)
        if m:
            typ, name = m.group(1), m.group(2)
            if typ not in SCALAR_TYPES and typ != 'void':
                names.add(name)
    return names


def fix_file(path, struct_ptr_globals, apply_changes):
    text = path.read_text(errors='replace')

    new_text, n1 = ADDR_OF_RE.subn('(f32)(s32)&', text)
    new_text, n2 = CHAR_CAST_RE.subn('(f32)(s32)((char *)', new_text)
    new_text, n3 = DEREF_ADDR_RE.subn('(f32)(s32)*(&', new_text)
    count = n1 + n2 + n3

    if struct_ptr_globals:
        global_re = re.compile(
            r'\(f32\)\s*(' + '|'.join(re.escape(g) for g in struct_ptr_globals) + r')\b'
        )
        new_text, n4 = global_re.subn(r'(f32)(s32)\1', new_text)
        count += n4

    if count and apply_changes:
        path.write_text(new_text, encoding='utf-8', newline='')
    return count


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    struct_ptr_globals = get_real_struct_pointer_globals(root / 'include' / 'variables.h')
    total = 0
    files_touched = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = fix_file(path, struct_ptr_globals, args.apply)
        if count:
            print(f"{path}: {'fixed' if args.apply else 'would fix'} {count}")
            total += count
            files_touched += 1

    print()
    print(f"{'Fixed' if args.apply else 'Would fix'} {total} cast(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
