#!/bin/sh
# List calls in RecompiledFuncs/ to functions that neither the recompiled
# output nor N64ModernRuntime defines: the host application must provide these.
# Run from the repo root after recomp/run.sh.
grep -rhoE 'void +\w+_recomp *\((uint8_t *\* *rdram|RDRAM_ARG)' tools/N64ModernRuntime/librecomp tools/N64ModernRuntime/ultramodern |
    sed -E 's/^void +//; s/ *\(.*//' | sort -u > recomp/.defined
grep -hoE '^RECOMP_FUNC void \w+' RecompiledFuncs/funcs_*.c | sed 's/^RECOMP_FUNC void //' | sort -u >> recomp/.defined
awk '
  FNR == 1 { file++ }
  file == 1 { defn[$0] = 1; next }
  /^RECOMP_FUNC void / { cur = $3; sub(/\(.*/, "", cur); next }
  {
    while (match($0, /[A-Za-z_0-9]+\(rdram, ctx\)/)) {
      name = substr($0, RSTART, RLENGTH - 12)
      if (!(name in defn)) missing[name] = missing[name] " " cur
      $0 = substr($0, RSTART + RLENGTH)
    }
  }
  END { for (n in missing) print n ":" missing[n] }
' recomp/.defined RecompiledFuncs/funcs_*.c | sort
rm -f recomp/.defined
