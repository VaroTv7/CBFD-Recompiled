#!/usr/bin/env python3
"""
One-off retroactive fix for a bug in an earlier version of
fix_untyped_field_access.py: for a bare 'f32' by-value parameter/local
used with '->unkXX' (a decompiler type-misinference -- the register
actually holds a pointer), the fix generated
'(*(TYPE *)((char *)(floatVar) + 0xXX))' -- but casting a FLOAT VALUE
directly to a pointer is ALWAYS a hard C error ('Cast a non-integral
type into a pointer'), unlike int-to-pointer which is merely a
warning. fix_untyped_field_access.py now generates the correct form
going forward (reinterpreting the float's bits via an address-of +
void** round trip first); this script retroactively repairs the
already-converted lines this bug produced before that fix landed.

Detection mirrors fix_untyped_field_access.py's own per-function scan
for bare 'f32' parameters/locals, then looks for the exact broken
shape '(char *)(VARNAME)' for each one and repairs it in place.

Usage:
    python3 fix_retroactive_float_arrow_cast.py --root .            # dry run
    python3 fix_retroactive_float_arrow_cast.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

FUNC_DEF_RE = re.compile(
    r'^[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{\s*(?://.*)?$'
)
F32_VALUE_PARAM_RE = re.compile(r'\bf32\s+([A-Za-z_]\w*)\b(?!\s*[\[\*])')
# Trailing-comment tolerance (see fix_untyped_field_access.py's
# TRAILING_COMMENT): without it, a commented local like 'void *sp9C;
# /* compiler-managed */' looks like the end of the declaration block
# to the scan below, silently excluding every later declaration.
TRAILING_COMMENT = r';\s*(?:/\*.*?\*/|//.*)?\s*$'
F32_LOCAL_RE = re.compile(r'^\s*f32\s+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT)
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
        if (F32_LOCAL_RE.match(lines[j]) or GENERIC_DECL_RE.match(lines[j])
                or FUNC_PTR_DECL_RE.match(lines[j])):
            j += 1
            continue
        break
    return j - 1


def process_file(path, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.splitlines(keepends=True)
    total_fixes = 0

    for start, end, params in find_function_bodies(lines):
        float_vars = set(F32_VALUE_PARAM_RE.findall(params))
        decl_end = collect_declaration_block_end(lines, start, end)
        for j in range(start + 1, decl_end + 1):
            m = F32_LOCAL_RE.match(lines[j])
            if m:
                float_vars.add(m.group(1))

        if not float_vars:
            continue

        for name in float_vars:
            broken = f'(char *)({name})'
            fixed = f'(char *)(*(void **)&({name}))'
            for j in range(start, end + 1):
                if broken in lines[j]:
                    count = lines[j].count(broken)
                    lines[j] = lines[j].replace(broken, fixed)
                    total_fixes += count

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
    total = 0
    files_touched = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, args.apply)
        if count:
            total += count
            files_touched += 1

    print()
    print(f"{'Would fix' if not args.apply else 'Fixed'} {total} occurrence(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
