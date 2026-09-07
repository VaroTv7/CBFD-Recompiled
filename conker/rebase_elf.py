#!/usr/bin/env python3
"""
Rebase the real, splat-built conker.us.elf from ROM-relative addresses to
real N64 runtime addresses, using objcopy.

Background: readelf on the real ELF shows .init_us at Addr 0x00001000 --
that's the ROM file offset, not a runtime address. This matches what we
independently reverse-engineered from raw ROM bytes earlier: real N64
boot-time code segments load to fixed hardware addresses (0x80000000+ for
RDRAM/KSEG0, 0xA4000000+ for SP DMEM), but the ELF as built keeps
ROM-relative addresses since the real runtime placement is a linker/build
convenience, not something baked into the object files.

This script:
  1. Strips out all .assetsXX / .compressed* / .game_us_rzip sections.
     Those are compressed or dynamically-placed data, not fixed-address
     code -- keeping them would reintroduce the same "huge address gap"
     crash we already hit and fixed once with a hand-built ELF.
  2. Keeps: header_us, boot_us, init_us, the small ucode-looking segments
     (_2D4B0 through _3C124), and debugger_us.
  3. Shifts .boot_us to +0xA4000000 (SP DMEM boot domain) and everything
     else kept to +0x80000000 (RDRAM/KSEG0), using objcopy's
     --adjust-section-vma, which updates symbol values and program
     headers consistently -- not just the section header's address field.

Requires: the same objcopy used to build the project (check your
Makefile's OBJCOPY/CROSS variable if the default name below doesn't work).
"""

import argparse
import re
import shutil
import subprocess
import sys
from pathlib import Path

RDRAM_OFFSET = 0x80000000
SP_OFFSET = 0xA4000000

# Sections to keep, in the order they appear in the real ELF (from the
# yaml's segment list, stopping before the compressed/asset data).
KEEP_SECTIONS_RDRAM = [
    "header_us",
    "init_us",
    "_2D4B0",
    "_2DE08",
    "_2E698",
    "_2F520",
    "_2FDB0",
    "_30C38",
    "_314C8",
    "_31FE8",
    "_3293D",
    "_334F8",
    "_33E4D",
    "_34A08",
    "_3535D",
    "_35F38",
    "_3688D",
    "_37468",
    "_37DBA",
    "_38908",
    "_3925C",
    "_39DA8",
    "_3A6FC",
    "_3B248",
    "_3BB9C",
    "_3C124",
    "debugger_us",
]
KEEP_SECTIONS_SP = ["boot_us"]


def find_objcopy(explicit):
    if explicit:
        return explicit
    candidates = [
        "mips-linux-gnu-objcopy",
        "mips64-elf-objcopy",
        "mips-elf-objcopy",
        "objcopy",
    ]
    for name in candidates:
        found = shutil.which(name)
        if found:
            return found
    print("ERROR: couldn't find an objcopy binary. Check your Makefile for the")
    print("OBJCOPY/CROSS variable it uses and pass it explicitly with --objcopy.")
    sys.exit(1)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("input_elf", type=Path, help="path to build/conker.us.elf")
    parser.add_argument("output_elf", type=Path, help="path to write the rebased ELF")
    parser.add_argument("--objcopy", help="explicit path to the objcopy binary to use")
    parser.add_argument(
        "--target",
        default="elf32-tradbigmips",
        help="BFD target forced for both input and output, to route around a "
             "binutils bug where objcopy refuses MIPS ELFs with e_flags=0 "
             "('error in private header data: sorry, cannot handle this "
             "file') -- pass '' to disable and let objcopy auto-detect",
    )
    args = parser.parse_args()

    objcopy = find_objcopy(args.objcopy)
    print(f"Using objcopy: {objcopy}")

    all_keep = KEEP_SECTIONS_RDRAM + KEEP_SECTIONS_SP

    cmd = [objcopy]
    if args.target:
        cmd += ["-I", args.target, "-O", args.target]
    for name in all_keep:
        cmd += ["-j", f".{name}"]
    for name in KEEP_SECTIONS_SP:
        cmd += [f"--adjust-section-vma=.{name}+{SP_OFFSET:#x}"]
    for name in KEEP_SECTIONS_RDRAM:
        cmd += [f"--adjust-section-vma=.{name}+{RDRAM_OFFSET:#x}"]
    cmd += [str(args.input_elf), str(args.output_elf)]

    print("Running:")
    print("  " + " ".join(cmd))
    result = subprocess.run(cmd, capture_output=True, text=True)

    if result.returncode != 0:
        print("objcopy failed:")
        print(result.stdout)
        print(result.stderr)
        sys.exit(1)

    if result.stdout.strip():
        print(result.stdout)
    if result.stderr.strip():
        print(result.stderr)

    print(f"Wrote {args.output_elf}")


if __name__ == "__main__":
    main()