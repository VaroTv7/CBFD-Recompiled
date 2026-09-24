#!/bin/sh
# Regenerate RecompiledFuncs/ from the decomp's US ELF. Run from the repo root inside WSL.
set -e
python3 recomp/prepare_elf.py conker/conker/build/conker.us.elf recomp/conker.us.recomp.elf tools/N64Recomp/src/symbol_lists.cpp
rm -rf RecompiledFuncs && mkdir RecompiledFuncs
./tools/N64Recomp/build/N64Recomp conker.toml > recomp/n64recomp.out 2> recomp/n64recomp.err || {
    echo "N64Recomp failed:"; tail -5 recomp/n64recomp.err; exit 1; }
echo "N64Recomp OK: $(ls RecompiledFuncs | wc -l) files"
