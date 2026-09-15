#!/usr/bin/env python3
"""List #pragma GLOBAL_ASM functions in top-level src/*.c files (the "live"
tree, not src/game/'s auto-decompiled drafts) that have no NON-MATCHING /
near-miss / handwritten marker anywhere near them - checked both above
(within 20 lines) AND below (until the next #pragma or blank-line gap),
since documentation comments get placed inconsistently on either side.
Sorted by raw instruction count (smallest first)."""
import re
import glob
import os

PRAGMA_RE = re.compile(r'GLOBAL_ASM\("asm/nonmatchings/([^"]+)"\)')
MARKER_RE = re.compile(r'non-matching|handwritten|hand-written|hand written', re.IGNORECASE)

fresh = []
for path in glob.glob('src/**/*.c', recursive=True):
    norm = path.replace('\\', '/')
    if '/game/' in norm:
        continue
    with open(path, encoding='utf-8', errors='replace') as f:
        lines = f.readlines()
    pragma_idxs = [i for i, line in enumerate(lines) if PRAGMA_RE.search(line)]
    for idx, i in enumerate(pragma_idxs):
        m = PRAGMA_RE.search(lines[i])
        above_start = pragma_idxs[idx - 1] + 1 if idx > 0 else max(0, i - 20)
        above = ''.join(lines[above_start:i])
        below_end = pragma_idxs[idx + 1] if idx + 1 < len(pragma_idxs) else min(len(lines), i + 25)
        below = ''.join(lines[i + 1:below_end])
        if MARKER_RE.search(above) or MARKER_RE.search(below):
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
