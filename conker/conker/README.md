# Conker's Bad Fur Day (code) decompilation

**TL;DR** - Read the [wiki](https://github.com/mkst/conker/wiki) for the most up-to-date information.

## Status (as of 2026-09-07)

- ✅ **Build: fully working.** `make -j$(nproc) -k` compiles and links
  successfully (produces a valid `.elf`/`.bin`) for all four ROM
  versions — `us`, `eu`, `ects`, and `debug` — confirmed reproducible
  from a clean rebuild. (A working tree loss mid-session briefly broke
  this — `conker.ld`, `asm/`, and submodule content are all gitignored
  and were lost together; full recovery chain documented in
  `HANDOFF.md`.)
- ⏳ **Matching: in progress, not the current focus.** The build is
  *not* byte-perfect against the original ROM — plenty of correctness
  was traded for compile success along the way, and thousands of
  functions are still marked `NON-MATCHING`/`GLOBAL_ASM` in the
  source. Two real matching regressions found during a follow-up
  investigation have been fixed; see `HANDOFF.md` for what was tried
  and what wasn't worth pursuing further.
- 📊 **Progress vs. [jefemagril/conker](https://github.com/jefemagril/conker)**
  (computed 2026-09-07 via `tools/progress.py`, same methodology both
  sides — % of functions not under `GLOBAL_ASM`): we're **ahead
  overall and on two of three sections**, behind only on `init`.

  | section  | this repo (us)         | jefemagril/conker      |
  |----------|-------------------------|--------------------------|
  | init     | 49.60% (307/619)        | **60.73%** (410/575)    |
  | game     | **19.68%** (1429/7261)  | 8.30% (1642/7274)       |
  | debugger | **87.91%** (160/182)    | 42.12% (162/182)        |
  | **total**| **23.51%** (1896/8064)  | 12.41% (2214/8031)      |

- 📄 **Full details:** [`HANDOFF.md`](HANDOFF.md) has the complete
  history — every fixer script, every bug found and fixed (including
  in the fixer scripts themselves), the exact numeric error-count
  progression, and the reasoning behind every non-obvious decision.
  Worth reading before starting a new session of work here.

There are three code sections within the ROM:
 - initialisation code + libultra; this is referred to as `init` and is translated to address `0x10000000`
 - core game code; this is referred to as `game` and is translated to address `0x15000000`
 - debugger code; referred to as `debugger` and translated to address `0x16000000`

In the `us`, `eu` and `debug` ROMs this `game` code is compressed; in the earlier `ects` ROM it is not.

These sections are pulled out of the ROM and combined in order to have a standard way of compiling the code across the different versions.

## Building

The following assumes you are within the `conker/` directory of the repo,

**Extract the `game.VERSION.bin`**

```sh
make extract
```

**Compile**

```sh
make --jobs
```

**Replace sections of original ROM split with newly compiled**

```sh
make replace
```

**Rebuild ROM**
```sh
make -C ..
```
