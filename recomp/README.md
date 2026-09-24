# Static recompilation (N64Recomp)

Turns the decomp's US ELF into C with [N64Recomp](../tools/N64Recomp) and runs
it on [N64ModernRuntime](../tools/N64ModernRuntime) through the host
application in [`host/`](../host).

**Status:** the game boots and runs headless. With a null renderer, no audio
microcode and no input, it submits display lists at about 30 per second (Conker's
frame rate) and has run for minutes without crashing. Nothing is drawn yet:
next is RT64.

## Building and running

In WSL, from the repo root, after building the decomp (`make` in `conker/conker`):

```sh
git -C tools/N64Recomp apply ../../recomp/n64recomp.patch
git -C tools/N64ModernRuntime apply ../../recomp/n64modernruntime.patch
(cd tools/N64Recomp/build && ninja N64Recomp)

sh recomp/run.sh                 # -> RecompiledFuncs/ (gitignored)
cmake -S host -B host/build -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build host/build
cd host/build && ./ConkerRecomp --rom ../../baserom.us.z64 --seconds 30
```

`tools/N64Recomp` (ffb39cd) and `tools/N64ModernRuntime` (cdf5abb) are
untracked checkouts, so their changes live in the two patch files here.

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
  - `$ra = ret; j F` becomes `jal F`.
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

## Local changes to the tools

N64Recomp (`n64recomp.patch`):
- finds a jump table in the section that holds it (Conker's are in
  `.game_data`), and treats a `jr` through a struct table as an indirect jump.
- tolerates stack accesses below `$sp`.
- **only turns branch targets inside a function into labels.** Out-of-function
  targets were shifting every following label, which broke loops in
  hand-written asm.
- `N64RECOMP_KEEP_GOING=1` reports every failing function.

N64ModernRuntime (`n64modernruntime.patch`):
- PI DMA completion posts the request's `OSIoMesg` pointer, as libultra does,
  instead of 0 (Conker's audio code reads it).
- `ultramodern::set_running_thread_variable` keeps the game's
  `__osRunningThread` pointing at the running thread (Conker reads it
  directly).

## Host (`host/`)

`main.cpp` registers the game (ROM hash, entrypoint, 16Kbit EEPROM), sets FR
mode, `osCicId` = 6105 (the idle thread won't start the game otherwise) and
`__osRunningThread`. It also registers the TLB-mapped code sections and maps
the code pages. `ultra_extras.cpp` provides `osPiRawReadIo`/`osPiReadIo` (Rare's
anti-piracy checks read real ROM words), `osPfsInit` (Rare's rumble detection),
the KSEG1 read helper and `recomp_syscall_handler` (Conker halts with
`syscall` on fatal errors). `null_renderer.cpp` stands in for RT64.

## Next steps

1. RT64 for rendering, with a window and input.
2. Recompile the audio microcode with RSPRecomp and hook up audio output.
3. Check the save path (EEPROM) and rumble.
