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

The game is playable, and has been played through to the end. Known issues:

- Widescreen: the pause menu's blurred background is the 4:3 frame stretched to
  the full width.
- Environment-mapped (reflective) surfaces render without their reflection texture.
- Only the US ROM is supported.
- Linux: the build and the game have been tested on Ubuntu 24.04 under WSL, with
  software Vulkan (llvmpipe) and sound. It hasn't been played on Linux with a
  real GPU driver yet, so reports are welcome, especially about performance or
  audio (under WSL the sound crackles while the software renderer loads the CPU).

If the game crashes on Windows, a report is written to `crash.log` next to the
executable and shown in a message box. On Linux, the crash report is printed to the
terminal. Please include it when reporting a problem.

## What you need

- The **US** ROM of Conker's Bad Fur Day in big-endian `.z64` format, with
  SHA-1 `4cbadd3c4e0729dec46af64ad018050eada4f47a`. It is never committed: the
  build extracts what it needs from your copy.
- A folder path without an apostrophe (`'`) to clone into. Some of RT64's build
  steps break on one.

Then follow the guide for your system: [Linux](#building-on-linux) or
[Windows](#building-on-windows). The first full build takes a while, because the
recompiled game is a lot of C code.

## Building on Linux

Tested on Ubuntu 24.04 (x86-64). You need a Vulkan driver: Mesa's, which most
distributions install by default, or NVIDIA's.

### 1. Install the packages

```sh
sudo apt update
sudo apt install build-essential git python3 python3-venv binutils-mips-linux-gnu \
    cmake ninja-build clang pkg-config libsdl2-dev libgtk-3-dev libfreetype-dev
```

### 2. Clone the repository, with its submodules

```sh
git clone --recursive https://github.com/sciaschi/CBFD-Recompiled.git
cd CBFD-Recompiled
```

All the following commands run from this folder.

### 3. Apply the patches to the tools

```sh
git -C tools/N64Recomp apply ../../recomp/n64recomp.patch
git -C tools/N64ModernRuntime apply ../../recomp/n64modernruntime.patch
git -C tools/rt64 apply ../../recomp/rt64.patch
```

### 4. Add your ROM

Copy your ROM to `conker/baserom.us.z64`.

### 5. Set up Python

The decompilation's tools need some Python packages. Recent Ubuntu versions don't
allow installing them system-wide, so they go in a virtual environment:

```sh
python3 -m venv .venv
.venv/bin/pip install -r requirements.txt
```

### 6. Build the decompilation

```sh
. .venv/bin/activate      # in every new terminal before building
cd conker
make extract              # checks the ROM and splits it into conker/assets/
make -C conker extract    # splits the game code
make -C conker -j8
cd ..
```

This builds `conker/conker/build/conker.us.elf` and checks that the rebuilt code
is byte-for-byte identical to your ROM's (`build/conker.us.bin: OK`). The
decompilation is a work in progress: about 9% of the code is C so far, and the
rest is still the original assembly.

### 7. Recompile the game

```sh
cmake -S tools/N64Recomp -B tools/N64Recomp/build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build tools/N64Recomp/build --target N64RecompCLI RSPRecomp RecompModTool
sh recomp/run.sh
```

`run.sh` writes the recompiled C code to `RecompiledFuncs/`, along with the symbol
files mods are built against.

### 8. Build the game

```sh
cmake -S host -B host/build -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build host/build
```

Then run `host/build/ConkerRecomp` (see [Playing](#playing)).

### Updating

```sh
git pull
git submodule update --init --recursive
```

If the pull changed a patch in `recomp/`, reset that tool and apply its patch
again, for example for RT64:

```sh
git -C tools/rt64 reset --hard && git -C tools/rt64 clean -fd && git -C tools/rt64 apply ../../recomp/rt64.patch
```

Then run steps 6 to 8 again; they only rebuild what changed. The game's build
stops with "RecompiledFuncs/ is out of date" if `recomp/run.sh` needs rerunning.

## Building on Windows

Windows 10 or 11 (x64). The decompilation and the recompiler are Linux programs,
so they run in WSL; the game itself is built with Visual Studio.

### 1. Install the tools

- [Git for Windows](https://git-scm.com/download/win).
- **Visual Studio 2022 or later** with the *Desktop development with C++*
  workload, which includes CMake and Ninja. The free *Build Tools for Visual
  Studio* edition is enough.
- **WSL with Ubuntu**: in an administrator PowerShell, `wsl --install -d Ubuntu`,
  then restart and finish Ubuntu's first-run setup. In the Ubuntu terminal,
  install the packages the decompilation and recompiler need:

  ```sh
  sudo apt update
  sudo apt install build-essential git python3 python3-venv binutils-mips-linux-gnu \
      cmake ninja-build clang
  ```

### 2. Clone the repository, with its submodules

In a Command Prompt, in the folder you want it in (for example `D:\Games`):

```bat
git clone --recursive https://github.com/sciaschi/CBFD-Recompiled.git
cd CBFD-Recompiled
```

The repository checks files out with LF line endings (see `.gitattributes`),
which the decompilation's compiler needs, whatever Git's `core.autocrlf` setting is.

### 3. Apply the patches to the tools

Still in the Command Prompt, in `CBFD-Recompiled`:

```bat
git -C tools/N64Recomp apply ../../recomp/n64recomp.patch
git -C tools/N64ModernRuntime apply ../../recomp/n64modernruntime.patch
git -C tools/rt64 apply ../../recomp/rt64.patch
```

### 4. Add your ROM

Copy your ROM to `conker\baserom.us.z64`.

### 5. Build the decompilation and recompile the game (in WSL)

Open the Ubuntu terminal and go to the same folder. Windows drives are under
`/mnt`, so `D:\Games\CBFD-Recompiled` is:

```sh
cd /mnt/d/Games/CBFD-Recompiled
```

Set up the Python packages once. Recent Ubuntu versions don't allow installing them
system-wide, so they go in a virtual environment:

```sh
python3 -m venv .venv
.venv/bin/pip install -r requirements.txt
```

Build the decompilation:

```sh
. .venv/bin/activate      # in every new terminal before building
cd conker
make extract              # checks the ROM and splits it into conker/assets/
make -C conker extract    # splits the game code
make -C conker -j8
cd ..
```

This builds `conker/conker/build/conker.us.elf` and checks that the rebuilt code
is byte-for-byte identical to your ROM's (`build/conker.us.bin: OK`). The
decompilation is a work in progress: about 9% of the code is C so far, and the
rest is still the original assembly.

Then build the recompiler and run it:

```sh
cmake -S tools/N64Recomp -B tools/N64Recomp/build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build tools/N64Recomp/build --target N64RecompCLI RSPRecomp RecompModTool
sh recomp/run.sh
```

`run.sh` writes the recompiled C code to `RecompiledFuncs/`, along with the symbol
files mods are built against.

### 6. Build the game (in the Command Prompt)

Back in the Command Prompt, in `CBFD-Recompiled`:

```bat
host\build_windows.cmd
```

The script finds Visual Studio, sets up the compiler environment and builds
`host\build-win\ConkerRecomp.exe` (see [Playing](#playing)).

### Updating

In the Command Prompt:

```bat
git pull
git submodule update --init --recursive
```

If the pull changed a patch in `recomp\`, reset that tool and apply its patch
again, for example for RT64:

```bat
git -C tools/rt64 reset --hard && git -C tools/rt64 clean -fd && git -C tools/rt64 apply ../../recomp/rt64.patch
```

Then run step 5 again in WSL and step 6 in the Command Prompt; they only rebuild
what changed. The game's build stops with "RecompiledFuncs/ is out of date" if
`recomp/run.sh` needs rerunning.

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
