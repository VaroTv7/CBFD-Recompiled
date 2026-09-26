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

- Runs natively on Windows (Direct3D 12 or Vulkan through RT64). Supports higher
  resolutions, widescreen, anti-aliasing and high frame-rate presentation.
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
- Only the US ROM is supported. Linux builds run headless only (no window, input
  or sound yet).

If the game crashes, a report is written to `crash.log` next to the executable
and shown in a message box. Please include it when reporting a problem.

## Requirements

- Windows 10 or 11 (x64).
- **WSL** with Ubuntu (20.04 or later). It builds the decompilation and runs the
  recompiler.
- **Visual Studio 2022 or later**, with the *Desktop development with C++*
  workload (which includes CMake and Ninja). The free Build Tools edition is enough.
- Git.
- The **US** ROM of Conker's Bad Fur Day in big-endian `.z64` format, with
  SHA-1 `4cbadd3c4e0729dec46af64ad018050eada4f47a`.

## Building

### 1. Clone, with submodules

```sh
git clone --recursive https://github.com/sciaschi/conkerrecomp.git
cd conkerrecomp
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

### 4. Build the decompilation (in WSL)

Install the build dependencies once:

```sh
sudo apt update
sudo apt install $(cat conker/packages.txt) cmake ninja-build clang
python3 -m pip install --user -r conker/requirements.txt
```

Then, from the repository root inside WSL (for example `cd /mnt/d/path/to/conkerrecomp`):

```sh
cd conker
make extract              # checks the ROM and splits it into conker/assets/
make -C conker extract    # splits the game code
make -C conker -j8        # compiles the decompilation -> conker/conker/build/conker.us.elf
cd ..
```

### 5. Recompile the game (in WSL)

Build the recompiler, then run it on the decompilation:

```sh
cmake -S tools/N64Recomp -B tools/N64Recomp/build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build tools/N64Recomp/build --target N64RecompCLI RSPRecomp RecompModTool
sh recomp/run.sh
```

`run.sh` writes the recompiled C code to `RecompiledFuncs/`, along with the symbol
files mods are built against. Rerun it after pulling changes: the Windows build
stops with "RecompiledFuncs/ is out of date" when its inputs have changed.

### 6. Build the game (Windows)

From a normal Command Prompt in the repository root:

```bat
host\build_windows.cmd
```

The script finds Visual Studio, sets up the compiler environment and builds
`host\build-win\ConkerRecomp.exe`. The first build takes a while, because the
recompiled game is a lot of C code.

## Playing

Run `host\build-win\ConkerRecomp.exe`. The first time, pick **Load ROM** in the
launcher and select your ROM (the same `baserom.us.z64` works). After that it's
remembered, so just choose **Start Game**.

- **Settings** (in the launcher, or Esc / the controller's menu button in game)
  has graphics (resolution, aspect ratio, anti-aliasing, frame rate), controls,
  sound and mod options.
- Saves, settings and the stored ROM live in `%LOCALAPPDATA%\ConkerRecompiled`.
  Put an empty `portable.txt` next to the exe to keep them there instead.
- Default keyboard controls: move with WASD, A = Space, B = Left Shift,
  Z = Q, L = E, R = R, Start = Enter, C buttons = arrow keys, D-pad = IJKL.
  Everything can be remapped in Controls.

## Mods

Mods are `.nrm` files. Install one by copying it into
`%LOCALAPPDATA%\ConkerRecompiled\mods` (or dropping it onto the Mods menu), then
enable it in the **Mods** menu. Some mods have options there too.

The included mods are in `mods/`. Build one in WSL, from the repository root,
after `recomp/run.sh`:

```sh
sudo apt install clang binutils-mips-linux-gnu   # once
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

Conker's Bad Fur Day is © Rare Ltd. This project is not affiliated with or
endorsed by Rare, Microsoft or Nintendo.
