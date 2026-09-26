#!/usr/bin/env python3
# Shows one function's instructions where the build differs from the original:
#   python func_diff.py func_1000F91C [context]
# Run from conker/conker after a build (and find_code_diff.py, which extracts the
# linked sections to build/tmp/). Relocation-only differences are marked with ~.
import re, struct, subprocess, sys

name = sys.argv[1]
context = int(sys.argv[2]) if len(sys.argv) > 2 else 3
pat = re.compile(r'^\s*0x([0-9a-fA-F]{8})\s+(func_[0-9A-Fa-f]{8})\s*$')
syms = sorted((int(m.group(1), 16), m.group(2))
              for l in open('build/conker.us.map', encoding='utf-8', errors='replace') if (m := pat.match(l)))
start = next(a for a, n in syms if n == name)
end = next((a for a, n in syms if a > start), start + 0x1000)
for sec, base, rom in [('init', 0x10001000, 'init'), ('game', 0x15000000, 'game'), ('debugger', 0x16000000, 'debugger')]:
    if base <= start < base + 0x1000000:
        break
ours = open(f'build/tmp/sec_{sec}.bin', 'rb').read()
target = open(f'../assets/{rom}.us.bin', 'rb').read()


def rel(x, y):
    op = x >> 26
    if op != (y >> 26):
        return False
    if op in (2, 3):
        return True
    if op in (15, 9, 35, 32, 36, 37, 33, 40, 41, 43, 49, 57, 53, 61):
        return (x & 0xFFFF0000) == (y & 0xFFFF0000)
    return False


def disasm(words, addr):
    data = b''.join(struct.pack('>I', w) for w in words)
    open('build/tmp/fd.bin', 'wb').write(data)
    out = subprocess.run(['wsl', 'mips-linux-gnu-objdump', '-D', '-b', 'binary', '-m', 'mips:4300', '-EB',
                          '--adjust-vma=0x%X' % addr, 'build/tmp/fd.bin'], capture_output=True, text=True).stdout
    return [l.split('\t', 2)[-1] if '\t' in l else '' for l in out.splitlines() if re.match(r'^\s*[0-9a-f]+:\t', l)]


n = (end - start) // 4
t = [struct.unpack('>I', target[start - base + 4 * i:start - base + 4 * i + 4])[0] for i in range(n)]
o = [struct.unpack('>I', ours[start - base + 4 * i:start - base + 4 * i + 4])[0] for i in range(n)]
td, od = disasm(t, start), disasm(o, start)
diffs = [i for i in range(n) if t[i] != o[i] and not rel(t[i], o[i])]
print(f'{name} {start:08X}-{end:08X}: {n} words, {len(diffs)} non-relocation differences')
show = sorted({j for i in diffs for j in range(max(0, i - context), min(n, i + context + 1))})
last = -2
for i in show:
    if i != last + 1:
        print('  ...')
    mark = '*' if i in diffs else ('~' if t[i] != o[i] else ' ')
    print(f'{mark} {start + 4 * i:08X}  target {td[i]:<40} ours {od[i]}')
    last = i
