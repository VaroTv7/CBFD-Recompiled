#!/bin/sh
# Regenerate RecompiledFuncs/ from the decomp's US ELF. Run from the repo root inside WSL.
# The code sections are overlaid with the original game's bytes (conker/assets/*.us.bin),
# so decomp functions that don't match yet can't change the recompiled game's behaviour.
set -e
# Files that shape RecompiledFuncs/; keep in sync with RECOMP_INPUTS in host/CMakeLists.txt.
RECOMP_INPUTS="conker.toml recomp/prepare_elf.py recomp/n64recomp.patch recomp/emit_tlb_pages.py recomp/audio_ucode.toml"
python3 recomp/prepare_elf.py conker/conker/build/conker.us.elf recomp/conker.us.recomp.elf \
    tools/N64Recomp/src/symbol_lists.cpp \
    --original .init=conker/assets/init.us.bin \
    --original .game=conker/assets/game.us.bin \
    --original .debugger=conker/assets/debugger.us.bin
rm -rf RecompiledFuncs && mkdir RecompiledFuncs
./tools/N64Recomp/build/N64Recomp conker.toml > recomp/n64recomp.out 2> recomp/n64recomp.err || {
    echo "N64Recomp failed:"; tail -5 recomp/n64recomp.err; exit 1; }
python3 recomp/emit_tlb_pages.py recomp/conker.us.recomp.elf RecompiledFuncs/tlb_pages.c     .game=conker/assets/game.us.bin .debugger=conker/assets/debugger.us.bin
./tools/N64Recomp/build/RSPRecomp recomp/audio_ucode.toml
# Hashes of the inputs, which host/CMakeLists.txt checks so a build can't use stale output
# (line endings stripped, so a CRLF checkout on Windows matches).
for f in $RECOMP_INPUTS; do printf '%s %s\n' "$(tr -d '\r' < "$f" | sha256sum | cut -d' ' -f1)" "$f"; done > RecompiledFuncs/inputs.sha256
echo "N64Recomp OK: $(ls RecompiledFuncs | wc -l) files"
