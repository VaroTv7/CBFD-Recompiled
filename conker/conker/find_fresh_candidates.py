#!/usr/bin/env python3
"""One-off: list #pragma GLOBAL_ASM functions in top-level src/*.c files
(the "live" tree, not src/game/'s auto-decompiled drafts) that have no
NON-MATCHING/near-miss comment anywhere in the 20 lines above them, sorted
by their raw instruction count (smallest first) so the mips_to_c loop can
pick a fresh, hopefully-easy candidate quickly."""
import re
import glob
import os

fresh = []
for path in glob.glob('src/**/*.c', recursive=True):
    norm = path.replace('\\', '/')
    if '/game/' in norm:
        continue
    with open(path, encoding='utf-8', errors='replace') as f:
        lines = f.readlines()
    for i, line in enumerate(lines):
        m = re.search(r'GLOBAL_ASM\("asm/nonmatchings/([^"]+)"\)', line)
        if not m:
            continue
        start = max(0, i - 20)
        window = ''.join(lines[start:i])
        if 'non-matching' in window.lower():
            continue
        fresh.append((path, i + 1, m.group(1)))

rows = []
for path, lineno, relpath in fresh:
    full = os.path.join('asm/nonmatchings', relpath)
    try:
        with open(full, encoding='utf-8', errors='replace') as f:
            n = sum(1 for l in f if '/*' in l)
    except OSError:
        n = -1
    rows.append((n, path, lineno, relpath))

rows.sort(key=lambda r: r[0])
for n, path, lineno, relpath in rows:
    print(n, path, lineno, relpath)
