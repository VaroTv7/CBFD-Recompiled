#!/usr/bin/env python3
"""
Prepare the decomp's conker.us.elf for N64Recomp.

N64Recomp splits code into functions using the ELF's STT_FUNC symbols and
their sizes, and turns every branch out of a function into a tail call to a
known function start. The decomp ELF needs some help to fit that model:

  * Functions still coming from splat `glabel`s in asm have st_size 0, and
    N64Recomp skips size-0 functions. Each gets a size reaching to the next
    function start in its section (or to the section's *_TEXT_END marker).
  * A function that falls through into the next label instead of ending in a
    jump is extended over that label (N64Recomp returns at a function's end).
    Overlapping functions are fine for N64Recomp.
  * The linker script's undefined_funcs_auto.txt (`func_X = 0x...;`) turns
    some asm glabels into SHN_ABS symbols. Those inside a code section are
    moved back into it.
  * Hand-written asm (the inflate code in .init, the math blob in .game)
    branches and jumps into the middle of other routines. Every such target is
    given a synthetic `func_<addr>` symbol so the branch becomes a tail call.
    This repeats until no new targets appear.
  * Data embedded in asm text without a symbol (EMBEDDED_DATA) ends the code
    before it.
  * Jump-table labels (`.L<addr>...`) that splat emitted as FUNC glabels become
    NOTYPE; `D_` symbols in code (data embedded in asm) become OBJECT and act
    only as boundaries.

Section contents are never changed. Symbols are rewritten in place, and the
synthetic ones are appended by moving .symtab/.strtab to the end of the file.

Usage: prepare_elf.py <in.elf> <out.elf>
"""

import struct
import sys

STT_NOTYPE, STT_OBJECT, STT_FUNC = 0, 1, 2
STB_GLOBAL = 1
SHN_LORESERVE, SHN_ABS = 0xFF00, 0xFFF1
CODE_SECTIONS = {".init", ".game", ".debugger"}

# Data embedded in hand-written asm text with no D_ symbol of its own.
EMBEDDED_DATA = {
    0x150AA98C: "debug printf format string before func_150AA9A0 (math blob in D7980.s)",
}
SYM_ENT = 16


class Elf:
    def __init__(self, raw):
        self.data = bytearray(raw)
        if self.data[:4] != b"\x7fELF" or self.data[4] != 1 or self.data[5] != 2:
            sys.exit("expected a 32-bit big-endian ELF")
        self.shoff, = struct.unpack_from(">I", self.data, 0x20)
        self.shentsize, self.shnum, shstrndx = struct.unpack_from(">HHH", self.data, 0x2E)
        self.shdrs = [list(struct.unpack_from(">10I", self.data, self.shoff + i * self.shentsize))
                      for i in range(self.shnum)]
        shstr = self.shdrs[shstrndx][4]
        self.names = [self.cstr(shstr + sh[0]) for sh in self.shdrs]
        self.symtab = self.names.index(".symtab")
        self.strtab = self.shdrs[self.symtab][6]

    def cstr(self, off):
        return self.data[off:self.data.index(b"\0", off)].decode()

    def symbols(self):
        _, _, _, _, off, size, _, _, _, _ = self.shdrs[self.symtab]
        str_off = self.shdrs[self.strtab][4]
        out = []
        for k in range(size // SYM_ENT):
            name, value, sz, info, other, shndx = struct.unpack_from(">IIIBBH", self.data, off + k * SYM_ENT)
            out.append({"name": self.cstr(str_off + name), "name_off": name, "value": value,
                        "size": sz, "info": info, "other": other, "shndx": shndx})
        return out

    def write(self, path, syms):
        """Rewrite .symtab/.strtab (appended at the end of the file) from `syms`."""
        old_str = self.shdrs[self.strtab]
        strtab = bytearray(self.data[old_str[4]:old_str[4] + old_str[5]])
        symtab = bytearray()
        for s in syms:
            if s.get("new"):
                s["name_off"] = len(strtab)
                strtab += s["name"].encode() + b"\0"
            symtab += struct.pack(">IIIBBH", s["name_off"], s["value"], s["size"], s["info"], s["other"], s["shndx"])
        out = bytearray(self.data)
        for idx, blob in ((self.symtab, symtab), (self.strtab, strtab)):
            while len(out) % 4:
                out.append(0)
            self.shdrs[idx][4] = len(out)
            self.shdrs[idx][5] = len(blob)
            out += blob
        for i, sh in enumerate(self.shdrs):
            struct.pack_into(">10I", out, self.shoff + i * self.shentsize, *sh)
        open(path, "wb").write(out)

    def word(self, shndx, addr):
        sh = self.shdrs[shndx]
        return struct.unpack_from(">I", self.data, sh[4] + addr - sh[3])[0]


def is_unconditional(w):
    op = w >> 26
    return (op == 2                                        # j
            or (op == 0 and (w & 0x3F) == 8)               # jr
            or (op == 4 and (w >> 16) & 0x3FF == 0)        # b (beq $zero, $zero)
            or w == 0x42000018)                            # eret


def branch_target(w, pc):
    """Static target of a branch/jump at pc, or None."""
    op = w >> 26
    if op in (2, 3):                                       # j, jal
        return ((pc + 4) & 0xF0000000) | ((w & 0x03FFFFFF) << 2)
    off = (pc + 4 + (((w & 0xFFFF) ^ 0x8000) - 0x8000) * 4) & 0xFFFFFFFF
    if op in (4, 5, 6, 7, 20, 21, 22, 23):                 # beq bne blez bgtz (+likely)
        return off
    if op == 1 and ((w >> 16) & 0x1F) in (0, 1, 2, 3, 16, 17, 18, 19):  # bltz bgez (+likely, +al)
        return off
    if op == 17 and ((w >> 21) & 0x1F) == 8:               # bc1f bc1t (+likely)
        return off
    return None


def main(src, dst):
    elf = Elf(open(src, "rb").read())
    syms = elf.symbols()
    code = {i for i, n in enumerate(elf.names) if n in CODE_SECTIONS}
    lo = {i: elf.shdrs[i][3] for i in code}
    text_end = {i: elf.shdrs[i][3] + elf.shdrs[i][5] for i in code}
    for s in syms:
        if s["name"].endswith("_TEXT_END"):
            for i in code:
                if elf.names[i] == "." + s["name"][:-len("_TEXT_END")]:
                    text_end[i] = min(text_end[i], s["value"])

    def owner(addr):
        return next((i for i in code if lo[i] <= addr < text_end[i]), None)

    stats = dict(adopted=0, labels=0, data=0, interior=0, synthetic=0, extended=0)
    kinds = {i: {} for i in code}          # start addr -> "func" | "data"
    c_funcs = {i: [] for i in code}        # (start, end) of sized (compiled C) functions
    asm_funcs = []                         # symbols whose size we compute

    for s in syms:
        typ = s["info"] & 0xF
        if typ != STT_FUNC:
            continue
        if s["shndx"] == SHN_ABS:
            sec = owner(s["value"])
            if sec is None or s["name"].startswith((".L", "D_")):
                continue
            s["shndx"] = sec
            stats["adopted"] += 1
        sec = s["shndx"]
        if sec >= SHN_LORESERVE or sec not in code:
            continue
        if s["name"].startswith(".L"):
            s["info"] = (s["info"] & 0xF0) | STT_NOTYPE
            stats["labels"] += 1
        elif s["name"].startswith("D_") or s["value"] >= text_end[sec]:
            if s["value"] < text_end[sec]:
                kinds[sec].setdefault(s["value"], "data")
            s["info"] = (s["info"] & 0xF0) | STT_OBJECT
            stats["data"] += 1
        else:
            kinds[sec][s["value"]] = "func"
            if s["size"]:
                c_funcs[sec].append((s["value"], s["value"] + s["size"]))
            else:
                asm_funcs.append(s)

    for addr in EMBEDDED_DATA:
        sec = owner(addr)
        if sec is not None:
            kinds[sec][addr] = "data"

    def inside_c(sec, addr):
        return any(a < addr < b for a, b in c_funcs[sec])

    # An adopted label inside a compiled C function is an interior label, not a start.
    for s in list(asm_funcs):
        if inside_c(s["shndx"], s["value"]):
            kinds[s["shndx"]].pop(s["value"], None)
            s["info"] = (s["info"] & 0xF0) | STT_NOTYPE
            asm_funcs.remove(s)
            stats["interior"] += 1

    def ends_control_flow(sec, a, b):
        p = b - 4
        while p >= a and elf.word(sec, p) == 0:
            p -= 4
        return any(q >= a and is_unconditional(elf.word(sec, q)) for q in (p, p - 4))

    taken = {s["name"] for s in syms}
    while True:
        ordered = {i: sorted(set(k) | {text_end[i]}) for i, k in kinds.items()}
        for s in asm_funcs:
            sec, start = s["shndx"], s["value"]
            b = ordered[sec]
            k = next(n for n, a in enumerate(b) if a > start)
            while not ends_control_flow(sec, start, b[k]) and b[k] < text_end[sec] and kinds[sec].get(b[k]) == "func":
                k += 1
            s["size"] = b[k] - start

        new_targets = set()
        for s in asm_funcs:
            sec, start, end = s["shndx"], s["value"], s["value"] + s["size"]
            for pc in range(start, end, 4):
                t = branch_target(elf.word(sec, pc), pc)
                if t is None or start <= t < end or t & 3:
                    continue
                tsec = owner(t)
                if tsec is None or t in kinds[tsec] or inside_c(tsec, t):
                    continue
                new_targets.add((tsec, t))
        if not new_targets:
            break
        for sec, t in sorted(new_targets):
            name = f"func_{t:08X}"
            if name in taken:
                name += "_label"
            taken.add(name)
            s = {"name": name, "new": True, "value": t, "size": 0, "info": (STB_GLOBAL << 4) | STT_FUNC,
                 "other": 0, "shndx": sec}
            syms.append(s)
            asm_funcs.append(s)
            kinds[sec][t] = "func"
            stats["synthetic"] += 1

    starts = {i: sorted(k) for i, k in kinds.items()}
    for s in asm_funcs:
        nxt = next(a for a in starts[s["shndx"]] + [text_end[s["shndx"]]] if a > s["value"])
        if s["value"] + s["size"] > nxt:
            stats["extended"] += 1

    elf.write(dst, syms)
    print("{n} asm functions sized ({extended} extended over a fall-through), {synthetic} synthetic branch "
          "targets, {adopted} ABS labels adopted ({interior} interior), {labels} jump-table labels, "
          "{data} data symbols -> {dst}".format(n=len(asm_funcs), dst=dst, **stats))


if __name__ == "__main__":
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    main(sys.argv[1], sys.argv[2])
