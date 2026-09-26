#!/usr/bin/env python3
# Per-function census of non-relocation word differences between the linked
# code sections and the original segment dumps in ../assets/*.us.bin.
# Differences in jal targets and lui/addiu/load/store immediates are treated
# as relocations and ignored.  Run from the repo root after a build.
import re, struct, bisect, subprocess
for s in ('init', 'game', 'debugger'):
    subprocess.run("wsl mips-linux-gnu-objcopy -O binary --only-section=.%s build/conker.us.elf build/tmp/sec_%s.bin" % (s, s), shell=True, check=True)
pat=re.compile(r'^\s*0x([0-9a-fA-F]{8})\s+((?:func)_([0-9A-Fa-f]{8}))\s*$')
syms=sorted((int(m.group(1),16),m.group(2)) for l in open('build/conker.us.map',encoding='utf-8',errors='replace') if (m:=pat.match(l)))
addrs=[a for a,_ in syms]
def rel(x,y):
    op=x>>26
    if op!=(y>>26): return False
    if op in (2,3): return True
    # Offsets from $sp are stack layout, not relocations.
    if op in (15,9,35,32,36,37,33,40,41,43,49,57,53,61): return (x&0xFFFF0000)==(y&0xFFFF0000) and (x>>21)&31!=29
    return False
tot=0
for sec,base,rom in [('init',0x10001000,'init'),('game',0x15000000,'game'),('debugger',0x16000000,'debugger')]:
    o=open(f'build/tmp/sec_{sec}.bin','rb').read(); t=open(f'../assets/{rom}.us.bin','rb').read()
    n=min(len(o),len(t))//4*4
    bad={}
    for k in range(0,n,4):
        x=struct.unpack('>I',t[k:k+4])[0]; y=struct.unpack('>I',o[k:k+4])[0]
        if x!=y and not rel(x,y):
            a=base+k; i=bisect.bisect_right(addrs,a)-1
            nm=syms[i][1] if i>=0 else '?'
            bad[nm]=bad.get(nm,0)+1
    print(sec, 'len ours/target', len(o), len(t), 'functions with non-reloc diffs:', len(bad), 'words:', sum(bad.values()))
    for nm,c in sorted(bad.items(),key=lambda z:-z[1]): print('   ',nm,c)
