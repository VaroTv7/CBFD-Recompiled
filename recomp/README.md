# Static recompilation (N64Recomp)

Turns the decomp's US ELF into C with [N64Recomp](../tools/N64Recomp).
Status: N64Recomp gets through a full pass over `.init`, `.game` and `.debugger`
and the output compiles (`clang -fsyntax-only`). There is no host application yet.

## Running it

From the repo root, after building the decomp (`conker/conker`, `make` in WSL):

```sh
wsl sh recomp/run.sh
```

This runs `prepare_elf.py`, then N64Recomp with [`conker.toml`](../conker.toml),
writing `RecompiledFuncs/` (gitignored). Set `N64RECOMP_KEEP_GOING=1` to have
N64Recomp report every failing function instead of stopping at the first one.

N64Recomp needs the local changes in [`n64recomp.patch`](n64recomp.patch)
(`tools/N64Recomp` is an untracked checkout at ffb39cd):

```sh
git -C tools/N64Recomp apply ../../recomp/n64recomp.patch
wsl bash -lc "cd tools/N64Recomp/build && ninja N64Recomp"
```

The patch:
- looks jump tables up in the section that contains them, not the function's
  own section. Conker's code is TLB-mapped at 0x15000000 but its rodata is in
  `.game_data` at 0x8008xxxx.
- treats stack accesses below `$sp` in hand-written asm as untracked instead
  of aborting.
- turns a `jr` through a table of structs, which is not a jump table, into an
  indirect tail call instead of aborting.
- adds `N64RECOMP_KEEP_GOING`.

## Memory layout

| section      | vram       | rom      | notes |
|--------------|------------|----------|-------|
| `.init`      | 0x10001000 | 0x001000 | TLB entry 0 maps 0x10000000–0x107FFFFF to physical 0–8 MB, the same memory as KSEG0 |
| `.init_data` | 0x800290D0 | 0x0290D0 | |
| `.game`      | 0x15000000 | 0x02D4B0 | demand-paged: the TLB-miss handler `func_10005C2C` pages in 0x15000000–0x151FC000 |
| `.game_data` | 0x80082B20 | 0x2275E0 | all of `.game`'s rodata, data and jump tables |
| `.debugger`  | 0x16000000 | 0x255880 | |

Code runs at TLB-mapped addresses, but every data access goes to KSEG0. The
only 0x10xxxxxx values the code builds are function pointers, and N64Recomp
resolves those through its function lookup. So recompiled code needs no TLB
emulation.

Boot: the ROM entrypoint 0x80001000 is `.init`'s first function, which
N64Recomp renames `recomp_entrypoint`. It clears `.bss`, then jumps to
0x80005AB0 (`func_10005AB0` through KSEG0). That function writes TLB entry 0
and jumps to 0x10001050. `conker.toml` redirects the first jump to 0x10005AB0
and nops out the TLB writes.

The boot code sets `Status.FR`, and the hand-written math in `.game` uses odd
FPRs as independent singles, so `uses_mips3_float_mode = true`.

## What `prepare_elf.py` fixes

- asm `glabel` functions have `st_size` 0, which N64Recomp skips. They get sizes.
- Functions that fall through into the next label are extended over it.
- `undefined_funcs_auto.txt` turns 151 asm glabels into ABS symbols. They're
  moved back into their sections.
- Hand-written asm (the inflate code in `.init`, the math code in `.game`)
  branches into the middle of other routines. 61 synthetic `func_<addr>`
  symbols make those branches into tail calls.
- 2041 jump-table labels become NOTYPE. `D_` symbols in code, plus the string
  in `EMBEDDED_DATA`, act only as boundaries.

## Stubbed functions

These use TLB, cop0 or cache instructions the runtime can't run, and the
runtime replaces what they do: the `.game` paging system, exception and thread
dispatch in `init_5AB0.s`, and the debugger's TLB dump. See `conker.toml`.

## libultra and the runtime

The runtime replaces libultra by name, so the decomp's names matter:
- .game carries a second copy of libultra's controller and Controller Pak
  code, named `<name>2` in the decomp. `prepare_elf.py` gives the 26 copies
  whose names N64Recomp skips or replaces their libultra names, so the runtime
  catches them too.
- Named in the decomp for this: `osEepromProbe/Read/Write`, `__osEepStatus`,
  `__osPackEep{Read,Write}Data` (.game), `__osSiRawReadIo/WriteIo`,
  `osPiReadIo`, `osContInit2`, `osSetTimer2`. The decomp also had
  `osMotorInit` and `_MakeMotorData` swapped, which would have broken rumble
  under the runtime.
- `conker.toml` patches out the Status-register calls in the boot init and
  `__osViInit` in the pre-NMI thread.

`wsl sh recomp/check_unresolved.sh` lists calls that neither the output nor
N64ModernRuntime defines. The host application has to provide these three:
- `osPiRawReadIo`, `osPiReadIo`: Rare's anti-piracy checks read ROM words
  (e.g. 0xB0000054, compared against 0x01090C2B after `func_150A1040`), so
  these must return real ROM contents.
- `osPfsInit`: Rare's rumble setup (`func_15006234`) calls it before
  `osMotorInit`.

Some of the output calls functions the runtime defines but `funcs.h` doesn't
declare (`__ll_lshift`, `__osPiGetAccess`, ...). The host build needs
`-Wno-implicit-function-declaration` or a header declaring them.

## Next steps

1. Build a host application (N64ModernRuntime + RT64) that provides the three
   functions above, then RSP recompilation for the audio microcode.
2. Direct hardware access that the runtime's memory macros can't reach: the
   audio thread `func_100095A0` reads AI registers (0xA450xxxx), and a few
   .game functions (`func_15001A08`, `func_150A5610`, `func_150A6A5C`,
   `func_150B1DB0`) use uncached 0xA0xxxxxx addresses.
