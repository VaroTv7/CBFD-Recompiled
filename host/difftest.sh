#!/bin/sh
# Differential test of one recompiled function against the original machine code.
#
#   sh host/difftest.sh <func_name> [hit_number]
#
# Runs the host under gdb, stops at the <hit_number>th call (default 1) of the
# function, snapshots RDRAM and the CPU context, lets the recompiled call return,
# snapshots again, then runs the ORIGINAL code for that call in
# recomp/mipsinterp.py from the first snapshot and compares $v0 and every RDRAM
# word written. Run from the repo root in WSL.
set -e
FUNC=$1
HIT=${2:-1}
RDRAM=0x7ffef6fff000   # gdb disables ASLR, so the runtime's RDRAM mapping is stable
cd host/build
cat > $HOME/difftest.gdb <<EOF
set pagination off
set print thread-events off
break $FUNC
run --rom ../../baserom.us.z64
EOF
i=1
while [ "$i" -lt "$HIT" ]; do echo "continue" >> $HOME/difftest.gdb; i=$((i + 1)); done
cat >> $HOME/difftest.gdb <<EOF
dump binary memory $HOME/dt_before_rdram.bin $RDRAM $RDRAM+0x800000
dump binary memory $HOME/dt_before_ctx.bin ctx ((char*)ctx)+528
printf "RECOMP_SP %x\n", (unsigned)ctx->r29
finish
printf "RECOMP_V0 %d\n", (int)ctx->r2
dump binary memory $HOME/dt_after_rdram.bin $RDRAM $RDRAM+0x800000
kill
quit
EOF
timeout 1200 gdb -q -batch -x $HOME/difftest.gdb ./ConkerRecomp > $HOME/difftest.log 2>&1 || true
grep -E "RECOMP_|received signal" $HOME/difftest.log || true
cd ../..
DT=$HOME python3 - "$FUNC" <<'PY'
import os, struct, subprocess, sys
H = os.environ['DT']
sys.path.insert(0, 'recomp')
from mipsinterp import Cpu
func = sys.argv[1]
out = subprocess.run(['mips-linux-gnu-readelf', '-s', '-W', 'recomp/conker.us.recomp.elf'], capture_output=True, text=True).stdout
addr = next(int(l.split()[1], 16) for l in out.splitlines() if len(l.split()) >= 8 and l.split()[7] == func)
cpu = Cpu.from_snapshot('recomp/conker.us.recomp.elf', H + '/dt_before_rdram.bin', H + '/dt_before_ctx.bin')
cpu.hooks[0x10024880] = lambda c: c.hle_return(0)   # osSetIntMask
try:
    v0 = cpu.call(addr)
    print('INTERP_V0', ((v0 + 0x80000000) & 0xFFFFFFFF) - 0x80000000, f'({cpu.instructions} instructions)')
except Exception as e:
    print('INTERP stopped:', e)
try:
    after = open(H + '/dt_after_rdram.bin', 'rb').read()
except FileNotFoundError:
    sys.exit(0)
before = open(H + '/dt_before_rdram.bin', 'rb').read()
if after == before and len(after) == 0:
    sys.exit(0)
swap = lambda b: b''.join(b[i:i + 4][::-1] for i in range(0, len(b), 4))
rec = swap(after)
diffs = [k for k in range(0, len(rec), 4) if rec[k:k + 4] != cpu.mem[k:k + 4]]
# Ignore the stack below the snapshot's $sp (scratch space of the call).
sp = cpu.gpr[29] & 0x7FFFFF
print('RDRAM words differing (recomp vs original):', len(diffs))
for k in diffs[:24]:
    print('  0x%08X recomp=%s original=%s' % (0x80000000 + k, rec[k:k + 4].hex(), bytes(cpu.mem[k:k + 4]).hex()))
PY
