# Static recompilation (N64Recomp)

Turns the decomp's US ELF into C with [N64Recomp](../tools/N64Recomp) and runs
it on [N64ModernRuntime](../tools/N64ModernRuntime) through the host
application in [`host/`](../host).

**Status:** the game runs on Windows in a window, rendered by
[RT64](../tools/rt64), and can be played with a game controller or the
keyboard. The boot screens, the 3D intro, the attract-mode cutscenes and the
menus render correctly, and there is sound: music, effects and the MP3
voice acting. On Linux/WSL the host still builds headless only (null renderer,
no input, no sound output).

## Building and running

In WSL, from the repo root, after building the decomp (`make` in `conker/conker`):

```sh
git -C tools/N64Recomp apply ../../recomp/n64recomp.patch
git -C tools/N64ModernRuntime apply ../../recomp/n64modernruntime.patch
(cd tools/N64Recomp/build && ninja N64Recomp)

sh recomp/run.sh                 # -> RecompiledFuncs/ (gitignored)
cmake -S host -B host/build -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build host/build
cd host/build && ./ConkerRecomp --rom ../../conker/baserom.us.z64 --seconds 30
```

`run.sh` records hashes of the files that shape `RecompiledFuncs/` (`conker.toml`,
`prepare_elf.py`, the N64Recomp patch, ...), and CMake stops with "RecompiledFuncs/
is out of date" when any of them has changed since: rerun `sh recomp/run.sh` after
pulling, then build.

`tools/N64Recomp` (ffb39cd) and `tools/N64ModernRuntime` (cdf5abb) are
untracked checkouts, so their changes live in the patch files here.

### Windows, with RT64

`RecompiledFuncs/` comes from the WSL step above. Then, from the repo root, with
Visual Studio 2022 or later (Build Tools is enough, with the C++ workload), CMake and Ninja:

```bat
git -C tools/N64ModernRuntime apply ../../recomp/n64modernruntime.patch
git -C tools/rt64 apply ../../recomp/rt64.patch
host\build_windows.cmd
host\build-win\ConkerRecomp.exe
```

`tools/rt64` is an untracked checkout of rt64/rt64 at 4337374, and
`tools/RecompFrontend` one of N64Recomp/RecompFrontend at b1a1477, both with their
submodules (`git submodule update --init --recursive`). `build_windows.cmd` finds
Visual Studio, sets up the x64 compiler environment and builds `host/build-win`
(RelWithDebInfo, so the crash handler can name functions). Extra arguments go to
`cmake --build`, e.g. `host\build_windows.cmd -- -j 8 -k 0`. SDL2 and DXC come
from RT64's bundled dependencies and are copied next to the exe, and so is
`host/assets/` (the menus' fonts, icons and the launcher picture).

The game opens on RecompFrontend's launcher: Start Game (or Load ROM, the first
time), Controls, Settings, Mods and Exit. Settings has the General (rumble),
Graphics (resolution, aspect ratio, fullscreen, anti-aliasing, framerate, HUD
placement), Controls (remapping for keyboard and controller), Sound (volume) and
Mods tabs; Esc or the controller's menu button opens it in game too. The ROM,
saves and settings live in `%LOCALAPPDATA%\ConkerRecompiled` (or next to the exe
when a `portable.txt` is there); a `conker_data/` from older builds next to the exe
is copied over once. `--rom PATH` stores a ROM from the command line, `--seconds N`
starts the game directly (no launcher) and quits after N seconds, and `--headless`
runs without a window, input or sound (then with `conker_data/` next to the exe).

`host/capture_run.ps1` runs the game for a while, saves screenshots of the window
at given times and can press keys, for checking a build without watching it:
`powershell -File host\capture_run.ps1 -Seconds 60 -Shots "20,40" -Keys "30:Enter"`
(`-Launcher` opens the launcher instead of starting the game). It sets
`CONKER_NO_CONTROLLER=1`, which makes the game ignore controllers, so a test run
doesn't pick up someone playing on the same machine.

## Debugging tools

- `sh host/debug_run.sh [SECONDS]`: runs under gdb and prints the crashing
  thread's backtrace, or every game thread's after SECONDS. Recompiled
  functions are named after their vram.
- `sh host/difftest.sh <func> [hit]`: snapshots RAM and registers at a call in
  the recompiled game, then runs the **original machine code** for the same
  call in [`mipsinterp.py`](mipsinterp.py) (a small VR4300 interpreter) and
  compares `$v0` and every RDRAM word written. This found most of the bugs below.
- `sh recomp/check_unresolved.sh`: calls that neither the output nor the
  runtime defines.
- The host prints a backtrace on SIGSEGV.

## Memory layout

| section      | vram       | notes |
|--------------|------------|-------|
| `.init`      | 0x10001000 | TLB entry 0 aliases KSEG0: the boot code runs at 0x80001000, then jumps to 0x1000xxxx |
| `.init_data` | 0x800290D0 | |
| `.game`      | 0x15000000 | demand-paged: a TLB-miss handler (`func_10005C2C`) pages code in from compressed ROM |
| `.game_data` | 0x80082B20 | `.game`'s rodata, data and jump tables |
| `.debugger`  | 0x16000000 | code plus rodata |

Most data is in KSEG0, but the hand-written math code keeps lookup tables
inside its own `.game` pages (e.g. 0x150AA318), and the debugger reads its
rodata at 0x1600xxxx. The runtime reserves 4 GB for game memory and maps only
RDRAM, so the host maps those ranges and copies the original segments in
(`emit_tlb_pages.py` -> `RecompiledFuncs/tlb_pages.c`).

The boot code sets `Status.FR` and the hand-written math uses odd FPRs, so
`uses_mips3_float_mode = true`, and the host puts every thread context into FR=1
mode (which also points `ctx->f_odd` at the odd registers).

## `prepare_elf.py`

Runs before N64Recomp.
- Overlays the code sections with the **original** bytes
  (`conker/assets/*.us.bin`). Drift is 0, so every function is at its original
  address, and decomp functions whose C doesn't match yet can't change
  behaviour (e.g. `func_15125690`, whose C reconstruction adds a load).
- Sizes the asm `glabel` functions, extends functions that fall through into
  the next label, and re-homes glabels that `undefined_funcs_auto.txt` turned
  into ABS symbols.
- Creates function starts for branch targets in the middle of other routines,
  for code addresses the game takes as values (callbacks, `D_` continuation
  labels in hand-written asm, a bare `jr $ra` used as an empty callback), and
  for `EMBEDDED_DATA` boundaries.
- Recompiled calls never set `$ra`, so hand-written asm that treats it as a
  value is rewritten:
  - `jr rX` where rX is a copy of `$ra`, or a link register every caller loads
    with its return point, becomes `jr $ra`.
  - `$ra = ret; j F` becomes `jal F`, and the function is re-sized to take in
    the code the call returns into (`func_150A7A00` stores a transform's W
    there; cut off, the camera spun around Conker at the start of Hungover).
  - A loop head kept in `$ra` moves to `$k1`, and its `jr $ra` gotos become
    `jr $k1`.
- Gives .game's `<name>2` libultra duplicates their libultra names when
  N64Recomp skips or replaces them.

## `conker.toml`

- Stubs the TLB paging system, the exception/thread dispatch code and the
  debugger's TLB dump.
- Nops the boot code's TLB and Status writes and the pre-NMI thread's
  `__osViInit`, and keeps `func_10005B04`'s page-pool allocations while
  dropping its cop0 writes.
- Replaces direct hardware and KSEG1 loads with hooks into the host: the
  audio thread's `AI_LEN` read, Rare's PIO ROM copy (`func_1000480C`) and an
  anti-piracy ROM read (`func_15001A08`), plus an uncached RDRAM pointer
  retargeted to KSEG0.
- Creates libultra's `__osEepromTimerQ` after the game's `osContInit` (the
  runtime's `osContInit` doesn't). Rare's EEPROM code paces its accesses with
  timers on it; without it the game froze on a black screen at the first save,
  after the intro cutscene.
- Turns the script interpreter's abort (`func_150AE280`, which reloads the `$sp`
  saved by `func_150ADAF0` and jumps to its epilogue) into a `setjmp`/`longjmp`.
  Recompiled as plain calls, it returned only from the innermost function and
  crashed in the Panther King cutscene.
- Runs the collision code's `$t0`-linked subroutine at 0x150AC1C4 as a call
  from `func_150AC1B4` and `func_150AC0F8`, which enter it by fall-through with
  `$t0` holding a goto target rather than a return point (`prepare_elf.py` warns about such
  entries). Recompiled as a return, it skipped `func_150AB1F0`'s epilogue and
  crashed shortly after Hungover starts.
=======
- Makes the fall-through into `func_150AB1F0`'s internal subroutine at
  0x150AC1C4 a call followed by a jump to 0x150AB6F0. The subroutine returns with
  `jr $t0`, which `prepare_elf.py` rewrites to `jr $ra` for its jal caller; on the
  fall-through path (`$t0` = 0x150AB6F0, no jal) that return left the routine
  without its epilogue, `$sp` ended up 0x268 low, and the camera code's saved
  registers came back as garbage (a spinning camera, then a crash in
  `func_1512BB10`). `prepare_elf.py` warns about any such fall-through entry.

## Local changes to the tools

N64Recomp (`n64recomp.patch`):
- finds a jump table in the section that holds it (Conker's are in
  `.game_data`), and treats a `jr` through a struct table as an indirect jump.
- tolerates stack accesses below `$sp`.
- **only turns branch targets inside a function into labels.** Out-of-function
  targets were shifting every following label, which broke loops in
  hand-written asm.
- `N64RECOMP_KEEP_GOING=1` reports every failing function.
- division by zero gives the VR4300's results instead of trapping on the host
  (the hand-written `func_150A3CBC` divides by zero during the attract mode).

N64ModernRuntime (`n64modernruntime.patch`):
- PI DMA completion posts the request's `OSIoMesg` pointer, as libultra does,
  instead of 0 (Conker's audio code reads it).
- `osPiStartDma` fills in the `OSIoMesg` (`dramAddr`, `devAddr`, `size`,
  `retQueue`) as libultra does. Rare's instrument cache (`func_10009CBC` loads,
  `func_1000A03C` collects) matches finished DMAs by `mb->dramAddr`; without it
  no instrument ever finished loading, every MIDI channel waited forever, and
  only the MP3 voices played.
- `ultramodern::set_running_thread_variable` keeps the game's
  `__osRunningThread` pointing at the running thread (Conker reads it
  directly).
- GCC-only warning flags are skipped under MSVC.

RT64 (`rt64.patch`): Conker's graphics microcode, F3DEX2 with Rare's changes,
as in GLideN64's `F3DEX2CBFD`. RT64 identifies a microcode by a hash of its
text and data. Conker's two builds ("F3DEXBG.NoN fifo 2.08" and "F3DEX.NoN fifo
2.08") are added to the database and mapped to a new `GBI_F3DEX2CBFD`
(`src/gbi/rt64_gbi_f3dex2cbfd.cpp`). It handles:
- a four-triangle command at opcodes 0x10-0x1F;
- light counts in bytes (`w1/48`);
- up to 12 lights, with point lights and a separate per-vertex normal array
  (`G_MV_NORMALES`);
- a coordinate modifier (`G_MW_COORD_MOD`);
- `G_LOAD_UCODE` reused to switch on the "advanced" lighting.

RT64's shaders can't see those normals, so lighting is computed on the CPU into
the vertex colours (`RSP::lightVerticesCBFD`), and `G_LIGHTING` is hidden from
the shaders. Texture generation (`G_TEXTURE_GEN`), which needs the same normals,
is disabled for now, so environment-mapped surfaces render without their
reflection texture.

The patch also changes widescreen. RT64 widens a projection only if its
scissor covers the whole width of its framebuffer's combined scissor. Conker's
3D scissor stops 2 pixels short of each edge of its 292-wide frame. Some effects
(water, diving) also draw a rectangle with a full-frame scissor. In those frames
the 3D fell back to 4:3, so the picture flickered between the two, and the water
surface was cut at the 4:3 edges. Both checks, the wide viewport in
`FramebufferRenderer` and the projection adjustment in `ProjectionProcessor`,
now allow 4 pixels of slack (`CoversWidthSlack`). They must agree, or the 3D is
stretched.

A rectangle whose scissor spans the frame (with the same slack) is clipped at
the edges of the widened frame, as widened 3D is, instead of at the 4:3 area.
Together with the game-side hooks in `host/src/widescreen.cpp`, that keeps
screen-space sprites (bubbles, bees) whole past the 4:3 edges. The hooks emit
each sprite as RT64's extended texture rectangle with signed corners. It takes
the same three commands as the game's `G_TEXRECT`. The enable goes where the
sprite's pipe sync was, so the display lists don't grow; they're allocated to
fit what the game writes.

## Audio

Conker's audio microcode is an ABI-style ucode like libultra's `aspMain`
(n_audio command numbers), except that command 7 decodes MP3 (the voices). Its
text is at ROM 0x291A0 and its data at 0x2C960. The first 0xF70 bytes are the
main code (IMEM 0x1080). The 0x9C0-byte MP3 overlay (text offset 0xF70) is
DMAed over the main code from IMEM 0x1238 and swaps it back when it's done.
[`audio_ucode.toml`](audio_ucode.toml) describes this to RSPRecomp, which
`run.sh` runs to produce `RecompiledFuncs/rsp/audio_ucode.cpp`.

The output is 22020 Hz stereo. `host/src/audio_output.cpp` queues it on an SDL
device. The audio thread (`func_100095A0`) sizes each buffer from AI_LEN: 736
frames, or 552 when 249 or more samples are still playing. So the host reports
only what is queued beyond one buffer, as AI_LEN counts only the buffer playing
now. Reporting the whole queue made the game fall behind and pop.

## Host (`host/`)

`main.cpp` registers the game (ROM hash, entrypoint, 16Kbit EEPROM), sets FR
mode, `osCicId` = 6105 (the idle thread won't start the game otherwise) and
`__osRunningThread`. It also registers the TLB-mapped code sections and maps
the code pages. `ultra_extras.cpp` provides `osPiRawReadIo`/`osPiReadIo` (Rare's
anti-piracy checks read real ROM words), `osPfsInit` (Rare's rumble detection),
the KSEG1 read helper and `recomp_syscall_handler` (Conker halts with
`syscall` on fatal errors). `frontend.cpp` wires RecompFrontend in: the SDL
window, recompui's renderer (RT64 plus the menus drawn over it), recompinput for
the keyboard and controllers, and the launcher entry (`supported_games`, which
recompui declares extern). `conker_config.cpp` sets up the settings tabs and
Conker's control descriptions, and `audio_output.cpp` plays the sound at the
Sound tab's volume. `patches/` holds the headers recompui includes for the
game-side patch code that mods will use. `null_renderer.cpp` is used with
`--headless` and on Linux. A crash prints a backtrace (SIGSEGV on Linux; on
Windows an unhandled-exception filter with DbgHelp, which also writes
`crash.log` next to the exe and shows a message box).

## Mods

Mods are `.nrm` files for N64ModernRuntime, installed by dropping them into
`mods/` in the data folder (or through the launcher's Mods menu, which also
enables and configures them). Each mod in `mods/` here has a `mod.toml` and C
sources in `src/`; build one in WSL from the repo root with

    sh mods/build_mod.sh mods/skip_cutscenes

which compiles for MIPS with clang, links with `mips-linux-gnu-ld` (`ld.lld`
isn't needed) and runs RecompModTool, leaving the `.nrm` in the mod's `build/`.
Mods link against `mods/syms/conker.us.{syms,datasyms}.toml`, which
`recomp/run.sh` regenerates with N64Recomp's `--dump-context`; rebuild mods
after the game's function layout changes.

Mods can replace a game function (`RECOMP_PATCH`) or run code before it or
when it returns (`RECOMP_HOOK`, `RECOMP_HOOK_RETURN`). Patching rewrites the
start of the recompiled host function, which is why the exe links with
`/OPT:NOICF`. A hook makes the runtime recompile the hooked function again,
with LiveRecomp, from its instructions in the ROM. `.game` is compressed in the
real ROM, so `conker::decompress_rom` (`host/src/overlays.cpp`) builds the ROM
the recompiler saw instead: the original `.game` and `.debugger` code (which
the exe already carries for the TLB pages) at their ROM addresses in the
recompiled layout, plus the words `prepare_elf.py` rewrote
(`emit_tlb_pages.py` emits both). Limits of hooks: a function with a jump
table can't be hooked (its table is in `.game_data`, which the regenerated
code can't see), and hooking a function that `conker.toml` hooks drops the
toml hook. `func_1501BBB8` (reads the controllers once per game frame) makes
a good per-frame hook.

The game exports `recomp_printf` (`host/src/mod_api.cpp`), and the runtime
provides the `recomp_get_config_*` functions for a mod's config options.

`mods/skip_cutscenes` lets L skip any cutscene the first time it plays (the game
normally only lets you skip ones you've watched), and optionally the ones the
game's script never lets you skip, like the opening. `mods/cheats` has infinite
health, infinite lives and a full wallet, each an option.

## Next steps

1. Texture generation for CBFD (pass the CPU-computed normals through to RT64).
2. Play further into the game: saves (EEPROM), rumble, the other microcode build.
3. An RT64 window and sound on Linux.
