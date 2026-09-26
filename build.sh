#!/bin/sh
# Builds Conker's Bad Fur Day: Recompiled from a clone and your ROM, in one go:
#   ./build.sh [path/to/rom.z64]
# The ROM is copied to conker/baserom.us.z64 (needed once). Safe to run again after
# `git pull`: every step skips what's already done or only rebuilds what changed.
#   --decomp  for developers: also build the decompilation (checked against your ROM)
#             and regenerate the committed symbols from it (recomp/run.sh), which
#             needs the decompilation's tools too (IDO runs through binutils-mips)
set -e

cd "$(dirname "$0")"
ROOT=$(pwd)
DECOMP=
ROM=
for arg in "$@"; do
    case "$arg" in
        --decomp) DECOMP=1 ;;
        -h|--help) sed -n '2,8p' "$0" | sed 's/^# \{0,1\}//'; exit 0 ;;
        *) ROM=$arg ;;
    esac
done
JOBS=$(nproc 2>/dev/null || echo 4)

step() { printf '\n==> %s\n' "$*"; }
fail() { printf '\nError: %s\n' "$*" >&2; exit 1; }

case "$ROOT" in
    *\'*) fail "the folder path contains an apostrophe ($ROOT). Some of RT64's build steps break on one: move the clone somewhere else." ;;
esac

# ---------------------------------------------------------------- prerequisites
step "Checking the tools"
missing=
for cmd in git python3 cmake ninja clang pkg-config; do
    command -v "$cmd" >/dev/null 2>&1 || missing="$missing $cmd"
done
if command -v pkg-config >/dev/null 2>&1; then
    for lib in sdl2 gtk+-3.0 freetype2; do
        pkg-config --exists "$lib" || missing="$missing $lib"
    done
fi
packages="git python3 cmake ninja-build clang pkg-config libsdl2-dev libgtk-3-dev libfreetype-dev"
if [ -n "$DECOMP" ]; then
    for cmd in make gcc mips-linux-gnu-as; do
        command -v "$cmd" >/dev/null 2>&1 || missing="$missing $cmd"
    done
    python3 -c 'import venv, ensurepip' 2>/dev/null || missing="$missing python3-venv"
    packages="$packages build-essential binutils-mips-linux-gnu python3-venv"
fi
if [ -n "$missing" ]; then
    echo "Missing:$missing"
    if command -v apt-get >/dev/null 2>&1; then
        echo "They're in these packages:"
        echo "  sudo apt install $packages"
        printf 'Install them now? [Y/n] '
        read -r answer || answer=n
        case "$answer" in
            [nN]*) fail "install the packages above, then run this again." ;;
        esac
        sudo apt-get update && sudo apt-get install -y $packages || fail "couldn't install the packages."
    else
        fail "install the missing tools with your distribution's package manager (on Ubuntu: $packages), then run this again."
    fi
fi

# ---------------------------------------------------------------- the ROM
BASEROM=conker/baserom.us.z64
if [ -n "$ROM" ]; then
    [ -f "$ROM" ] || fail "no file at $ROM."
    step "Copying your ROM to $BASEROM"
    cp "$ROM" "$BASEROM"
fi
[ -f "$BASEROM" ] || fail "no ROM yet. Run this with the path to your ROM, for example:
  ./build.sh ~/Downloads/conker.z64"
# Checks it's the right ROM (it says so if not).
python3 -c "import sys; sys.path.insert(0, 'recomp'); import unpack_rom; unpack_rom.unpack(open('$BASEROM', 'rb').read())"

# ---------------------------------------------------------------- tools
step "Getting the submodules"
# A pull can move a patched tool to another commit, which the patch would block.
for tool in tools/N64Recomp tools/N64ModernRuntime tools/rt64; do
    if [ -e "$tool/.git" ]; then
        want=$(git ls-tree HEAD "$tool" | awk '{print $3}')
        if [ "$want" != "$(git -C "$tool" rev-parse HEAD)" ]; then
            echo "  $tool moved to another commit: resetting it (its patch is applied again below)."
            git -C "$tool" reset --hard -q
            git -C "$tool" clean -fdq
        fi
    fi
done
git submodule update --init --recursive

# Applies a patch unless it's already applied. If the tool holds an older version of
# the patch (after a git pull that changed it), the tool is reset and patched again.
apply_patch() {
    tool=$1; patch=$2
    if git -C "$tool" apply --reverse --check "$ROOT/$patch" 2>/dev/null; then
        return
    fi
    if ! git -C "$tool" apply --check "$ROOT/$patch" 2>/dev/null; then
        echo "  $tool has changes that aren't $patch (probably an older version of it): resetting it."
        git -C "$tool" reset --hard -q
        git -C "$tool" clean -fdq
    fi
    git -C "$tool" apply "$ROOT/$patch" || fail "couldn't apply $patch to $tool."
    echo "  patched $tool"
}
step "Patching the tools"
apply_patch tools/N64Recomp recomp/n64recomp.patch
apply_patch tools/N64ModernRuntime recomp/n64modernruntime.patch
apply_patch tools/rt64 recomp/rt64.patch

step "Building the recompiler"
if [ ! -f tools/N64Recomp/build/build.ninja ]; then
    cmake -S tools/N64Recomp -B tools/N64Recomp/build -G Ninja -DCMAKE_BUILD_TYPE=Release
fi
cmake --build tools/N64Recomp/build --target N64RecompCLI RSPRecomp RecompModTool

# ---------------------------------------------------------------- recompilation
if [ -n "$DECOMP" ]; then
    step "Setting up Python for the decompilation (.venv)"
    if [ ! -x .venv/bin/python3 ]; then
        python3 -m venv .venv
    fi
    if [ ! -f .venv/requirements.stamp ] || [ requirements.txt -nt .venv/requirements.stamp ]; then
        .venv/bin/pip install -q -r requirements.txt
        touch .venv/requirements.stamp
    fi
    . .venv/bin/activate
    step "Extracting the game from your ROM"
    make -C conker extract
    # splat writes the assembly for every #pragma GLOBAL_ASM, so it runs again whenever
    # the decompiled sources or its configuration change.
    SPLAT_STAMP=conker/conker/build/.splat.stamp
    if [ ! -f "$SPLAT_STAMP" ] || [ -n "$(find conker/conker/src conker/conker/conker.us.yaml -newer "$SPLAT_STAMP" -print -quit)" ]; then
        make -C conker/conker extract
        mkdir -p conker/conker/build
        touch "$SPLAT_STAMP"
    fi
    step "Building the decompilation (checked against your ROM)"
    make -C conker/conker -j"$JOBS"
    step "Regenerating the symbols from the decompilation, and recompiling"
    sh recomp/run.sh
else
    step "Recompiling the game from your ROM"
    python3 recomp/recompile.py
fi

# ---------------------------------------------------------------- the game
step "Building the game"
if [ ! -f host/build/build.ninja ]; then
    cmake -S host -B host/build -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
        -DCMAKE_BUILD_TYPE=RelWithDebInfo
fi
cmake --build host/build

printf '\nDone. Run the game with:\n  %s/host/build/ConkerRecomp\n' "$ROOT"
printf 'The first time, pick Load ROM in the launcher and select your ROM (%s works).\n' "$BASEROM"
