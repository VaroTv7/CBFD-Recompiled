# Conker's Bad Fur Day: Recompiled

A native PC port of **Conker's Bad Fur Day** (N64, US version). It's built by
statically recompiling the game with [N64Recomp](https://github.com/N64Recomp/N64Recomp),
starting from the [Conker decompilation](https://github.com/mkst/conker). It runs on
[N64ModernRuntime](https://github.com/N64Recomp/N64ModernRuntime) and is rendered by
[RT64](https://github.com/rt64/rt64).

> **This repository contains no game data.** You need your own legally obtained
> copy of the US ROM. Everything from the game is extracted from that ROM on
> your machine during the build.

## Features

- Runs natively on Windows (Direct3D 12 or Vulkan) and Linux (Vulkan), rendered
  by RT64. Supports higher resolutions, widescreen, anti-aliasing and high
  frame-rate presentation.
- Game controllers and keyboard, with remappable controls and rumble.
- Full audio: music, sound effects and the voice acting.
- Saving (EEPROM), stored per user.
- A launcher with settings, controls and a mod menu (RecompFrontend, as in
  Zelda 64: Recompiled and Banjo: Recompiled).
- Mod support (`.nrm` mods: function patches and hooks). Two example mods are
  included: **Skip Any Cutscene** and **Cheats**.

## Status

The game is playable, and has been played through its first chapters and the hub
without problems. It hasn't been played to the end yet. Known issues:

- Widescreen: some full-screen effects are still 4:3, such as the pause-screen
  blur and the circle wipe when Conker dies.
- Environment-mapped (reflective) surfaces render without their reflection texture.
- Only the US ROM is supported.
- Linux: the build and the game have been tested on Ubuntu 24.04 under WSL, with
  software Vulkan (llvmpipe) and sound. It hasn't been played on Linux with a
  real GPU driver yet, so reports are welcome, especially about performance or
  audio (under WSL the sound crackles while the software renderer loads the CPU).

If the game crashes on Windows, a report is written to `crash.log` next to the
executable and shown in a message box. On Linux, the crash report is printed to the
terminal. Please include it when reporting a problem.

## Requirements

- The **US** ROM of Conker's Bad Fur Day in big-endian `.z64` format, with
  SHA-1 `4cbadd3c4e0729dec46af64ad018050eada4f47a`.
- Git.
- **Linux** (x86-64; tested on Ubuntu 24.04): a Vulkan driver (Mesa, or NVIDIA's)
  and the packages in step 4. The whole build happens on Linux.
- **Windows 10 or 11** (x64):
  - **WSL** with Ubuntu. The decompilation and the recompiler are built there
    (steps 4 and 5).
  - **Visual Studio 2022 or later**, with the *Desktop development with C++*
    workload (which includes CMake and Ninja), for the game itself (step 6). The
    free Build Tools edition is enough.

Clone into a path without an apostrophe (`'`): some of RT64's build steps break on one.

## Building

### 1. Clone, with submodules

```sh
git clone --recursive https://github.com/sciaschi/CBFD-Recompiled.git
cd CBFD-Recompiled
```

If you cloned without `--recursive`, run `git submodule update --init --recursive`.

The repository checks files out with LF line endings (see `.gitattributes`),
which the decompilation's compiler needs. That works even with Git for Windows'
default `core.autocrlf=true`.

### 2. Apply the patches to the tools

Some tools carry changes for Conker. Apply them once, from the repository root:

```sh
git -C tools/N64Recomp apply ../../recomp/n64recomp.patch
git -C tools/N64ModernRuntime apply ../../recomp/n64modernruntime.patch
git -C tools/rt64 apply ../../recomp/rt64.patch
```

### 3. Add your ROM

Copy your ROM to `conker/baserom.us.z64`. It is ignored by git and never committed.

### 4. Build the decompilation (Linux, or WSL on Windows)

Install the build dependencies once. The last three packages are only needed to
build the game on Linux (step 6):

```sh
sudo apt update
sudo apt install build-essential git python3 python3-venv binutils-mips-linux-gnu \
    cmake ninja-build clang pkg-config libsdl2-dev libgtk-3-dev libfreetype-dev
```

The decompilation's tools need some Python packages. Recent Ubuntu versions don't
allow installing them system-wide, so use a virtual environment. Create it once,
from the repository root:

```sh
python3 -m venv .venv
.venv/bin/pip install -r requirements.txt
```

Then, from the repository root (on Windows, in WSL: for example
`cd /mnt/d/path/to/CBFD-Recompiled`), activate it and build:

```sh
. .venv/bin/activate      # in every new shell before building
cd conker
make extract              # checks the ROM and splits it into conker/assets/
make -C conker extract    # splits the game code
make -C conker -j8 NON_MATCHING=1   # compiles it -> conker/conker/build/conker.us.elf
cd ..
```

`NON_MATCHING=1` skips the check that the rebuilt ROM is identical to yours. The
decompilation isn't finished, and the recompiler uses your ROM's original code
wherever the decompiled code differs.

### 5. Recompile the game (Linux, or WSL on Windows)

Build the recompiler, then run it on the decompilation:

```sh
cmake -S tools/N64Recomp -B tools/N64Recomp/build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build tools/N64Recomp/build --target N64RecompCLI RSPRecomp RecompModTool
sh recomp/run.sh
```

`run.sh` writes the recompiled C code to `RecompiledFuncs/`, along with the symbol
files mods are built against. Rerun it after pulling changes: the game's build
stops with "RecompiledFuncs/ is out of date" when its inputs have changed.

### 6. Build the game

The first build takes a while, because the recompiled game is a lot of C code.

**Linux**, from the repository root:

```sh
cmake -S host -B host/build -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build host/build
```

This builds `host/build/ConkerRecomp`.

**Windows**, from a normal Command Prompt in the repository root:

```bat
host\build_windows.cmd
```

The script finds Visual Studio, sets up the compiler environment and builds
`host\build-win\ConkerRecomp.exe`.

## Playing

Run `host/build/ConkerRecomp` (Linux) or `host\build-win\ConkerRecomp.exe`
(Windows). The first time, pick **Load ROM** in the launcher and select your ROM
(the same `baserom.us.z64` works). After that it's remembered, so just choose
**Start Game**.

- **Settings** (in the launcher, or Esc / the controller's menu button in game)
  has graphics (resolution, aspect ratio, anti-aliasing, frame rate), controls,
  sound and mod options.
- Saves, settings and the stored ROM live in `~/.config/ConkerRecompiled` on
  Linux and `%LOCALAPPDATA%\ConkerRecompiled` on Windows. Put an empty
  `portable.txt` next to the executable to keep them there instead.
- Default keyboard controls: move with WASD, A = Space, B = Left Shift,
  Z = Q, L = E, R = R, Start = Enter, C buttons = arrow keys, D-pad = IJKL.
  Everything can be remapped in Controls.

## Mods

Mods are `.nrm` files. Install one by copying it into the `mods` folder of the
data folder above (or dropping it onto the Mods menu), then enable it in the
**Mods** menu. Some mods have options there too.

The included mods are in `mods/`. Build one on Linux (or in WSL), from the
repository root, after `recomp/run.sh`:

```sh
sh mods/build_mod.sh mods/skip_cutscenes
```

The `.nrm` ends up in the mod's `build/` folder.

- **Skip Any Cutscene** (`mods/skip_cutscenes`): L skips a cutscene even the
  first time you see it. An option also allows skipping the ones the game never
  lets you skip.
- **Cheats** (`mods/cheats`): infinite health, infinite lives and a full wallet,
  each toggled in the mod's options.

Writing your own is covered in [recomp/README.md](recomp/README.md#mods).

## How it works

[recomp/README.md](recomp/README.md) documents the whole pipeline:

- how the decomp's ELF is prepared for N64Recomp (`recomp/prepare_elf.py`);
- the recompiler configuration and hooks (`conker.toml`);
- the audio microcode;
- the changes to N64Recomp, N64ModernRuntime and RT64 (Conker's graphics
  microcode, widescreen);
- the host application in `host/`;
- debugging tools.

## Credits

- The [Conker's Bad Fur Day decompilation](https://github.com/mkst/conker) project,
  whose work this is built on.
- [N64Recomp](https://github.com/N64Recomp/N64Recomp),
  [N64ModernRuntime](https://github.com/N64Recomp/N64ModernRuntime) and
  [RecompFrontend](https://github.com/N64Recomp/RecompFrontend) by Wiseguy and
  contributors.
- [RT64](https://github.com/rt64/rt64) by Darío and contributors.
- The mod headers follow the
  [Banjo: Recompiled mod template](https://github.com/BanjoRecomp/BKRecompModTemplate).
- Fonts: [Inter](https://rsms.me/inter/), [Noto Emoji](https://fonts.google.com/noto/specimen/Noto+Emoji)
  and [promptfont](https://shinmera.github.io/promptfont/).

## License

This project's own code is under the [MIT License](LICENSE). The submodules keep
their own licenses. The game itself is not included and not covered by it.

Conker's Bad Fur Day is © Rare Ltd. This project is not affiliated with or
endorsed by Rare, Microsoft or Nintendo.
