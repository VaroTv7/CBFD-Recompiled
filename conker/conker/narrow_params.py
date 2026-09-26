#!/usr/bin/env python3
# For functions whose only differences are narrowed parameter reads (the original
# reads a parameter's stack slot with lbu/lb/lhu/lh, ours with lw), finds which
# parameters those are and rewrites the definitions old-style with those types
# (to_old_style.py). Run from conker/conker after a build and find_code_diff.py:
#   python narrow_params.py func_1516037C func_15007A70 ...   [--dry-run]
import re, subprocess, sys

names = [a for a in sys.argv[1:] if not a.startswith('--')]
dry = '--dry-run' in sys.argv
types = {'lbu': 'u8', 'lb': 's8', 'lhu': 'u16', 'lh': 's16'}
widths = {'lbu': 3, 'lb': 3, 'lhu': 2, 'lh': 2}

for name in names:
    out = subprocess.run([sys.executable, 'func_diff.py', name, '0'], capture_output=True, text=True).stdout
    frame = None
    first = subprocess.run([sys.executable, 'func_diff.py', name, '100000'], capture_output=True, text=True).stdout
    m = re.search(r'target addiu\s+sp,sp,-(\d+)', first)
    if m:
        frame = int(m.group(1))
    wanted = {}
    ok = frame is not None
    for line in out.splitlines():
        if not line.startswith('*'):
            continue
        m = re.search(r'target (lbu|lb|lhu|lh)\s+\w+,(\d+)\(sp\)\s+ours lw\s+\w+,(\d+)\(sp\)', line)
        if not m or int(m.group(2)) - widths[m.group(1)] != int(m.group(3)):
            ok = False
            break
        slot = (int(m.group(3)) - frame) // 4
        if slot < 0:
            ok = False
            break
        wanted[slot] = types[m.group(1)]
    if not ok or not wanted:
        print(f'{name}: not only narrowed parameter reads, skipped')
        continue
    src = subprocess.run(['grep', '-rlE', r'^[A-Za-z].*[ *]' + name + r'\(.*\)\s*\{', 'src', '--include=*.c'],
                         capture_output=True, text=True).stdout.split()
    if len(src) != 1:
        print(f'{name}: definition not found uniquely ({src}), skipped')
        continue
    text = open(src[0], 'rb').read().decode()
    d = re.search(r'\b' + name + r'\(([^)]*)\)\s*\{', text)
    params = [re.match(r'.*?(\w+)$', p.strip()).group(1) for p in d.group(1).split(',')]
    args = [f'{params[slot]}={t}' for slot, t in sorted(wanted.items())]
    print(f'{name} ({src[0]}, frame {frame}): {" ".join(args)}')
    if not dry:
        subprocess.run([sys.executable, 'to_old_style.py', src[0], name, *args], check=True, capture_output=True)
