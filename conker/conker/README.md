# Conker's Bad Fur Day (code) decompilation

**TL;DR** - Read the [wiki](https://github.com/mkst/conker/wiki) for the most up-to-date information.

## Status (as of 2026-09-07)

- ✅ **Build: fully working.** `make -j$(nproc) -k` compiles and links
  successfully (produces a valid `.elf`/`.bin`) for all four ROM
  versions — `us`, `eu`, `ects`, and `debug` — confirmed reproducible
  from a clean rebuild.
- ⏳ **Matching: in progress, not the current focus.** The build is
  *not* byte-perfect against the original ROM — plenty of correctness
  was traded for compile success along the way, and ~400+ functions
  are still marked `NON-MATCHING`/`fakematch` in the source. Two real
  matching regressions found during a follow-up investigation have
  been fixed; see below for what was tried and what wasn't worth
  pursuing further.
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
