#!/usr/bin/env python3
"""
Recover Rare's original subsystem/owner naming by scanning the extracted
rodata (asm/data/**/*.s) for leftover debug/assert strings, then
cross-referencing each string's label against every raw #pragma GLOBAL_ASM
function (asm/nonmatchings/**/*.s) and already-decompiled C source
(src/**/*.c) that actually loads/uses it.

A string with a live code reference tells you, in the developers' own
words, what the referencing function/subsystem is - useful for naming
still-generic func_ADDR/D_ADDR symbols. Strings with a "(Name)" tag (Rare's
crash system attributed some error categories to the programmer who owned
that subsystem) are flagged separately since they're the most immediately
useful.

Usage: python3 find_debug_strings.py [--min-len N] [--out FILE]
"""
import argparse
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.abspath(__file__))

LABEL_RE = re.compile(r'^\s*glabel\s+(\S+)\s*$')
ASCII_RE = re.compile(r'^\s*(?:/\*[^*]*\*/\s*)?\.(asciz|ascii)\s+"(.*)"\s*$')
D_TOKEN_RE = re.compile(r'\bD_[0-9A-Fa-f]{6,8}\b')
FUNC_SIG_RE = re.compile(r'^\s*[\w\*][\w\s\*]*?(\w+)\s*\([^;{}]*\)\s*\{?\s*$')


def unescape_asm_string(s):
    out = []
    i = 0
    mapping = {'n': '\n', 't': '\t', 'r': '\r', '"': '"', '\\': '\\', '0': '\0'}
    while i < len(s):
        c = s[i]
        if c == '\\' and i + 1 < len(s):
            out.append(mapping.get(s[i + 1], s[i + 1]))
            i += 2
        else:
            out.append(c)
            i += 1
    return ''.join(out)


def find_strings(data_glob):
    """Return dict: label -> (decoded string, rodata file path)."""
    strings = {}
    for path in sorted(glob.glob(data_glob, recursive=True)):
        try:
            with open(path, 'r', encoding='utf-8', errors='replace') as f:
                lines = f.readlines()
        except OSError:
            continue
        current_label = None
        for line in lines:
            m = LABEL_RE.match(line)
            if m:
                current_label = m.group(1)
                continue
            m = ASCII_RE.match(line)
            if m and current_label:
                strings[current_label] = (unescape_asm_string(m.group(2)), path)
                # a glabel is consumed by the first asciz that follows it;
                # further asciz lines in the same blob have no symbol of
                # their own to cross-reference against, so drop tracking
                current_label = None
    return strings


def is_interesting(s, min_len):
    if len(s) < min_len:
        return False
    printable = sum(1 for c in s if 32 <= ord(c) < 127)
    if printable / max(len(s), 1) < 0.9:
        return False
    return any(c.isalpha() for c in s)


def build_asm_reference_index(nonmatch_glob):
    """Return dict: D_label -> set of (func_name, file_path)."""
    index = {}
    for path in sorted(glob.glob(nonmatch_glob, recursive=True)):
        try:
            with open(path, 'r', encoding='utf-8', errors='replace') as f:
                lines = f.readlines()
        except OSError:
            continue
        current_func = None
        for line in lines:
            m = LABEL_RE.match(line)
            if m:
                current_func = m.group(1)
                continue
            if current_func is None:
                continue
            for tok in D_TOKEN_RE.findall(line):
                index.setdefault(tok, set()).add((current_func, path))
    return index


def build_c_reference_index(src_glob):
    """Return dict: D_label -> set of (enclosing_func_guess, 'file:line')."""
    index = {}
    for path in sorted(glob.glob(src_glob, recursive=True)):
        try:
            with open(path, 'r', encoding='utf-8', errors='replace') as f:
                lines = f.readlines()
        except OSError:
            continue
        current_func = None
        brace_depth = 0
        for i, line in enumerate(lines, 1):
            stripped = line.rstrip('\n')
            if brace_depth == 0:
                m = FUNC_SIG_RE.match(stripped)
                if (m and '=' not in stripped
                        and not stripped.strip().startswith(('#', '//', '/*'))):
                    current_func = m.group(1)
            brace_depth += stripped.count('{') - stripped.count('}')
            if brace_depth < 0:
                brace_depth = 0
            for tok in D_TOKEN_RE.findall(stripped):
                index.setdefault(tok, set()).add((current_func or '?', f'{path}:{i}'))
    return index


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--min-len', type=int, default=6,
                     help='minimum string length to consider (default 6)')
    ap.add_argument('--out', default=os.path.join(ROOT, 'debug_string_report.txt'))
    args = ap.parse_args()

    print('Scanning rodata for strings...', file=sys.stderr)
    strings = find_strings(os.path.join(ROOT, 'asm', 'data', '**', '*.s'))
    print(f'  found {len(strings)} labeled strings', file=sys.stderr)

    interesting = {lbl: (s, path) for lbl, (s, path) in strings.items()
                    if is_interesting(s, args.min_len)}
    print(f'  {len(interesting)} look like real text', file=sys.stderr)

    print('Indexing raw-asm references...', file=sys.stderr)
    asm_index = build_asm_reference_index(
        os.path.join(ROOT, 'asm', 'nonmatchings', '**', '*.s'))
    print(f'  {sum(len(v) for v in asm_index.values())} references '
          f'across {len(asm_index)} labels', file=sys.stderr)

    print('Indexing decompiled C references...', file=sys.stderr)
    c_index = build_c_reference_index(os.path.join(ROOT, 'src', '**', '*.c'))
    print(f'  {sum(len(v) for v in c_index.values())} references '
          f'across {len(c_index)} labels', file=sys.stderr)

    hits = []
    for lbl, (s, rodata_path) in interesting.items():
        refs = [('asm', func, path) for func, path in sorted(asm_index.get(lbl, []))]
        refs += [('c', func, loc) for func, loc in sorted(c_index.get(lbl, []))]
        if refs:
            hits.append((lbl, s, rodata_path, refs))

    hits.sort(key=lambda h: (-len(h[1]), h[0]))

    with open(args.out, 'w', encoding='utf-8') as out:
        out.write('# Debug string -> function cross-reference report\n')
        out.write(f'# {len(interesting)} candidate strings scanned, '
                   f'{len(hits)} have a code reference\n\n')
        for lbl, s, rodata_path, refs in hits:
            out.write(f'{lbl}  "{s}"\n')
            out.write(f'    rodata: {rodata_path}\n')
            for kind, func, loc in refs:
                out.write(f'    referenced by [{kind}] {func}  ({loc})\n')
            out.write('\n')

    print(f'Wrote {len(hits)} cross-referenced strings to {args.out}', file=sys.stderr)

    attributed = [(lbl, s, refs) for lbl, s, _, refs in hits
                  if re.search(r'\([A-Z][a-z]+\)', s)]
    if attributed:
        print(f'\n{len(attributed)} attributed strings (has a "(Name)" tag):')
        for lbl, s, refs in attributed:
            fn_list = ', '.join(sorted({r[1] for r in refs}))
            print(f'  "{s}"  ->  {fn_list}')


if __name__ == '__main__':
    main()
