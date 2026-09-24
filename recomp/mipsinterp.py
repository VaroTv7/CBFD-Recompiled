#!/usr/bin/env python3
"""
A small VR4300 interpreter for differential testing of the recompiled code.

It runs the ORIGINAL machine code from the decomp ELF against a snapshot of
RDRAM and CPU registers taken from the recompiled game (see host/snapshot.gdb),
so a function's result can be compared with what the recompiled C produced.

Scope: user-mode integer and FPU instructions (FR=1, as Conker runs), branch
delay slots and branch-likely nullification. No TLB, cache or exceptions; code
is fetched from the ELF by vram, data is RDRAM only (KSEG0/KSEG1 and the .init
TLB alias at 0x10000000). libultra calls can be replaced with Python hooks.

Library use:
    cpu = Cpu.from_snapshot(elf_path, rdram_dump, ctx_dump)
    cpu.hooks[0x10024880] = lambda cpu: cpu.hle_return(0)   # osSetIntMask
    cpu.call(0x15001BC8)
"""

import math
import struct
import sys

M32 = 0xFFFFFFFF
M64 = 0xFFFFFFFFFFFFFFFF
SENTINEL = 0x80FFFFF0  # return address that ends cpu.call()


def sx32(v):
    v &= M32
    return v - (1 << 32) if v & 0x80000000 else v


def sx16(v):
    v &= 0xFFFF
    return v - 0x10000 if v & 0x8000 else v


def u64(v):
    return v & M64


def s64(v):
    v &= M64
    return v - (1 << 64) if v >> 63 else v


def f32_from_bits(b):
    return struct.unpack(">f", struct.pack(">I", b & M32))[0]


def f32_bits(x):
    try:
        return struct.unpack(">I", struct.pack(">f", x))[0]
    except OverflowError:
        return 0x7F800000 if x > 0 else 0xFF800000


def f64_from_bits(b):
    return struct.unpack(">d", struct.pack(">Q", b & M64))[0]


def f64_bits(x):
    return struct.unpack(">Q", struct.pack(">d", x))[0]


def ieee_div(a, b):
    if b == 0.0:
        if a == 0.0 or math.isnan(a):
            return math.nan
        return math.copysign(math.inf, a) * math.copysign(1.0, b)
    return a / b


class Elf:
    """Loads allocatable sections of a 32-bit big-endian ELF by vram."""

    def __init__(self, path):
        data = open(path, "rb").read()
        shoff, = struct.unpack_from(">I", data, 0x20)
        shentsize, shnum, _ = struct.unpack_from(">HHH", data, 0x2E)
        self.ranges = []
        for i in range(shnum):
            name, typ, flags, addr, off, size = struct.unpack_from(">6I", data, shoff + i * shentsize)
            if typ == 1 and (flags & 4) and size:  # PROGBITS, executable
                self.ranges.append((addr, addr + size, data[off:off + size]))

    def fetch(self, pc):
        for lo, hi, blob in self.ranges:
            if lo <= pc < hi:
                return struct.unpack_from(">I", blob, pc - lo)[0]
        raise RuntimeError(f"no code at 0x{pc:08X}")


class Cpu:
    def __init__(self, elf, rdram):
        self.elf = elf
        self.mem = bytearray(rdram)
        self.gpr = [0] * 32
        self.fpr = [0] * 32          # raw 64-bit contents (FR=1)
        self.hi = self.lo = 0
        self.fcr31 = 0
        self.pc = 0
        self.hooks = {}              # vram -> fn(cpu); called instead of the function
        self.watch = {}              # vram -> fn(cpu, event, info)
        self.instructions = 0
        self.call_stack = []

    # -- snapshot -----------------------------------------------------------
    @classmethod
    def from_snapshot(cls, elf_path, rdram_dump, ctx_dump):
        raw = open(rdram_dump, "rb").read()
        # The runtime stores each 32-bit word in host (little-endian) order.
        rdram = bytearray(len(raw))
        for i in range(0, len(raw) - 3, 4):
            rdram[i:i + 4] = raw[i:i + 4][::-1]
        cpu = cls(Elf(elf_path), rdram)
        ctx = open(ctx_dump, "rb").read()
        regs = struct.unpack_from("<64Q", ctx, 0)
        cpu.gpr = [r & M64 for r in regs[:32]]
        cpu.gpr[0] = 0
        cpu.fpr = [r & M64 for r in regs[32:64]]
        cpu.hi, cpu.lo = struct.unpack_from("<QQ", ctx, 512)
        return cpu

    # -- memory -------------------------------------------------------------
    def phys(self, vaddr):
        v = vaddr & M32
        if 0x80000000 <= v < 0xC0000000:
            p = v & 0x1FFFFFFF
        elif 0x10000000 <= v < 0x10800000:
            p = v - 0x10000000
        else:
            raise RuntimeError(f"unmapped data access 0x{v:08X} at pc 0x{self.pc:08X}")
        if p + 8 > len(self.mem):
            raise RuntimeError(f"access past RDRAM 0x{v:08X} at pc 0x{self.pc:08X}")
        return p

    def r8(self, a):
        return self.mem[self.phys(a)]

    def r16(self, a):
        p = self.phys(a)
        return (self.mem[p] << 8) | self.mem[p + 1]

    def r32(self, a):
        p = self.phys(a)
        return struct.unpack_from(">I", self.mem, p)[0]

    def r64(self, a):
        return (self.r32(a) << 32) | self.r32(a + 4)

    def w8(self, a, v):
        self.mem[self.phys(a)] = v & 0xFF

    def w16(self, a, v):
        p = self.phys(a)
        self.mem[p] = (v >> 8) & 0xFF
        self.mem[p + 1] = v & 0xFF

    def w32(self, a, v):
        struct.pack_into(">I", self.mem, self.phys(a), v & M32)

    def w64(self, a, v):
        self.w32(a, v >> 32)
        self.w32(a + 4, v)

    # -- helpers ------------------------------------------------------------
    def set(self, r, v):
        if r:
            self.gpr[r] = u64(v)

    def set32(self, r, v):
        self.set(r, sx32(v))

    def fs(self, i):
        return f32_from_bits(self.fpr[i])

    def fd(self, i):
        return f64_from_bits(self.fpr[i])

    def set_fs(self, i, x):
        self.fpr[i] = (self.fpr[i] & ~M32 & M64) | f32_bits(x)

    def set_fd(self, i, x):
        self.fpr[i] = f64_bits(x)

    def round_to_int(self, x):
        mode = self.fcr31 & 3
        if math.isnan(x) or math.isinf(x):
            return 0x7FFFFFFF
        if mode == 0:
            return round(x)          # round half to even
        if mode == 1:
            return math.trunc(x)
        if mode == 2:
            return math.ceil(x)
        return math.floor(x)

    def hle_return(self, v0=None):
        if v0 is not None:
            self.set(2, v0)
        return self.gpr[31] & M32

    # -- execution ----------------------------------------------------------
    def call(self, addr, max_instructions=200_000_000):
        self.gpr[31] = u64(sx32(SENTINEL))
        self.pc = addr
        return self.run(max_instructions)

    def run(self, max_instructions):
        pc = self.pc
        while pc != SENTINEL:
            if pc in self.hooks:
                pc = self.hooks[pc](self) & M32
                continue
            if pc in self.watch:
                self.watch[pc](self, "enter", None)
                self.call_stack.append((pc, self.gpr[31] & M32))
            if self.call_stack and pc == self.call_stack[-1][1]:
                fn, _ = self.call_stack.pop()
                if fn in self.watch:
                    self.watch[fn](self, "return", None)
            pc = self.step(pc)
            self.instructions += 1
            if self.instructions > max_instructions:
                raise RuntimeError("instruction limit reached")
        self.pc = pc
        return self.gpr[2]

    def step(self, pc):
        """Execute the instruction at pc (plus its delay slot if it branches); return the next pc."""
        self.pc = pc
        w = self.elf.fetch(pc)
        taken, target, likely, link = self.execute(w, pc)
        if target is None:
            return (pc + 4) & M32
        if link:
            self.set(link, sx32(pc + 8))
        if likely and not taken:
            return (pc + 8) & M32
        # Delay slot.
        self.pc = pc + 4
        dw = self.elf.fetch(pc + 4)
        _, dtarget, _, _ = self.execute(dw, pc + 4)
        if dtarget is not None:
            raise RuntimeError(f"branch in delay slot at 0x{pc + 4:08X}")
        return (target if taken else pc + 8) & M32

    def execute(self, w, pc):
        """Returns (taken, target, likely, link_reg); target None means not a branch."""
        op = w >> 26
        rs = (w >> 21) & 31
        rt = (w >> 16) & 31
        rd = (w >> 11) & 31
        sa = (w >> 6) & 31
        fn = w & 63
        imm = w & 0xFFFF
        simm = sx16(imm)
        g = self.gpr
        btarget = (pc + 4 + (simm << 2)) & M32

        if op == 0:
            if fn == 0x00: self.set32(rd, (g[rt] << sa) & M32)
            elif fn == 0x02: self.set32(rd, (g[rt] & M32) >> sa)
            elif fn == 0x03: self.set32(rd, sx32(g[rt]) >> sa)
            elif fn == 0x04: self.set32(rd, (g[rt] << (g[rs] & 31)) & M32)
            elif fn == 0x06: self.set32(rd, (g[rt] & M32) >> (g[rs] & 31))
            elif fn == 0x07: self.set32(rd, sx32(g[rt]) >> (g[rs] & 31))
            elif fn == 0x08: return True, g[rs] & M32, False, 0
            elif fn == 0x09: return True, g[rs] & M32, False, rd
            elif fn == 0x0C: raise RuntimeError(f"syscall at 0x{pc:08X}")
            elif fn == 0x0D: raise RuntimeError(f"break at 0x{pc:08X}")
            elif fn == 0x0F: pass  # sync
            elif fn == 0x10: self.set(rd, self.hi)
            elif fn == 0x11: self.hi = g[rs]
            elif fn == 0x12: self.set(rd, self.lo)
            elif fn == 0x13: self.lo = g[rs]
            elif fn == 0x14: self.set(rd, g[rt] << (g[rs] & 63))
            elif fn == 0x16: self.set(rd, g[rt] >> (g[rs] & 63))
            elif fn == 0x17: self.set(rd, s64(g[rt]) >> (g[rs] & 63))
            elif fn in (0x18, 0x19):
                a, b = (sx32(g[rs]), sx32(g[rt])) if fn == 0x18 else (g[rs] & M32, g[rt] & M32)
                p = a * b
                self.lo, self.hi = u64(sx32(p)), u64(sx32(p >> 32))
            elif fn in (0x1A, 0x1B):
                a, b = (sx32(g[rs]), sx32(g[rt])) if fn == 0x1A else (g[rs] & M32, g[rt] & M32)
                if b != 0:
                    q = abs(a) // abs(b) * (1 if (a >= 0) == (b >= 0) else -1)
                    self.lo, self.hi = u64(sx32(q)), u64(sx32(a - q * b))
            elif fn in (0x1C, 0x1D):
                a, b = (s64(g[rs]), s64(g[rt])) if fn == 0x1C else (g[rs], g[rt])
                p = a * b
                self.lo, self.hi = u64(p), u64(p >> 64)
            elif fn in (0x1E, 0x1F):
                a, b = (s64(g[rs]), s64(g[rt])) if fn == 0x1E else (g[rs], g[rt])
                if b != 0:
                    q = abs(a) // abs(b) * (1 if (a >= 0) == (b >= 0) else -1)
                    self.lo, self.hi = u64(q), u64(a - q * b)
            elif fn in (0x20, 0x21): self.set32(rd, g[rs] + g[rt])
            elif fn in (0x22, 0x23): self.set32(rd, g[rs] - g[rt])
            elif fn == 0x24: self.set(rd, g[rs] & g[rt])
            elif fn == 0x25: self.set(rd, g[rs] | g[rt])
            elif fn == 0x26: self.set(rd, g[rs] ^ g[rt])
            elif fn == 0x27: self.set(rd, ~(g[rs] | g[rt]))
            elif fn == 0x2A: self.set(rd, 1 if s64(g[rs]) < s64(g[rt]) else 0)
            elif fn == 0x2B: self.set(rd, 1 if g[rs] < g[rt] else 0)
            elif fn in (0x2C, 0x2D): self.set(rd, g[rs] + g[rt])
            elif fn in (0x2E, 0x2F): self.set(rd, g[rs] - g[rt])
            elif fn == 0x38: self.set(rd, g[rt] << sa)
            elif fn == 0x3A: self.set(rd, g[rt] >> sa)
            elif fn == 0x3B: self.set(rd, s64(g[rt]) >> sa)
            elif fn == 0x3C: self.set(rd, g[rt] << (sa + 32))
            elif fn == 0x3E: self.set(rd, g[rt] >> (sa + 32))
            elif fn == 0x3F: self.set(rd, s64(g[rt]) >> (sa + 32))
            else: raise RuntimeError(f"unhandled SPECIAL 0x{fn:02X} at 0x{pc:08X}")
            return None, None, False, 0

        if op == 1:
            v = s64(g[rs])
            cond = {0: v < 0, 1: v >= 0, 2: v < 0, 3: v >= 0, 16: v < 0, 17: v >= 0, 18: v < 0, 19: v >= 0}.get(rt)
            if cond is None:
                raise RuntimeError(f"unhandled REGIMM {rt} at 0x{pc:08X}")
            return cond, btarget, rt in (2, 3, 18, 19), 31 if rt >= 16 else 0
        if op in (2, 3):
            return True, ((pc + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2), False, 31 if op == 3 else 0
        if op in (4, 20): return g[rs] == g[rt], btarget, op == 20, 0
        if op in (5, 21): return g[rs] != g[rt], btarget, op == 21, 0
        if op in (6, 22): return s64(g[rs]) <= 0, btarget, op == 22, 0
        if op in (7, 23): return s64(g[rs]) > 0, btarget, op == 23, 0
        if op in (8, 9): self.set32(rt, g[rs] + simm)
        elif op == 10: self.set(rt, 1 if s64(g[rs]) < simm else 0)
        elif op == 11: self.set(rt, 1 if g[rs] < u64(simm) else 0)
        elif op == 12: self.set(rt, g[rs] & imm)
        elif op == 13: self.set(rt, g[rs] | imm)
        elif op == 14: self.set(rt, g[rs] ^ imm)
        elif op == 15: self.set32(rt, imm << 16)
        elif op in (24, 25): self.set(rt, g[rs] + simm)
        elif op == 17: return self.cop1(w, pc, rs, rt, rd, sa, fn, btarget)
        elif op == 47: pass  # cache
        else:
            addr = (g[rs] + simm) & M32
            if op == 32: self.set(rt, sx32(sx16(self.r8(addr) << 8) >> 8))
            elif op == 33: self.set(rt, sx16(self.r16(addr)))
            elif op == 35: self.set(rt, sx32(self.r32(addr)))
            elif op == 36: self.set(rt, self.r8(addr))
            elif op == 37: self.set(rt, self.r16(addr))
            elif op == 39: self.set(rt, self.r32(addr))
            elif op == 55: self.set(rt, self.r64(addr))
            elif op == 34:  # lwl
                shift = (addr & 3) * 8
                word = self.r32(addr & ~3)
                mask = (M32 << shift) & M32
                self.set32(rt, (g[rt] & ~mask) | ((word << shift) & mask))
            elif op == 38:  # lwr
                shift = (3 - (addr & 3)) * 8
                word = self.r32(addr & ~3)
                mask = M32 >> shift
                self.set32(rt, (g[rt] & ~mask) | (word >> shift))
            elif op == 40: self.w8(addr, g[rt])
            elif op == 41: self.w16(addr, g[rt])
            elif op == 43: self.w32(addr, g[rt])
            elif op == 63: self.w64(addr, g[rt])
            elif op == 42:  # swl
                shift = (addr & 3) * 8
                old = self.r32(addr & ~3)
                mask = M32 >> shift
                self.w32(addr & ~3, (old & ~mask) | ((g[rt] & M32) >> shift))
            elif op == 46:  # swr
                shift = (3 - (addr & 3)) * 8
                old = self.r32(addr & ~3)
                mask = (M32 << shift) & M32
                self.w32(addr & ~3, (old & ~mask) | (((g[rt] & M32) << shift) & mask))
            elif op == 49: self.fpr[rt] = (self.fpr[rt] & ~M32 & M64) | self.r32(addr)   # lwc1
            elif op == 53: self.fpr[rt] = self.r64(addr)                                  # ldc1
            elif op == 57: self.w32(addr, self.fpr[rt])                                   # swc1
            elif op == 61: self.w64(addr, self.fpr[rt])                                   # sdc1
            else: raise RuntimeError(f"unhandled opcode {op} at 0x{pc:08X}")
        return None, None, False, 0

    def cop1(self, w, pc, fmt, ft, fs, fd, fn, btarget):
        g = self.gpr
        if fmt == 0: self.set32(ft, self.fpr[fs])                                       # mfc1
        elif fmt == 1: self.set(ft, self.fpr[fs])                                       # dmfc1
        elif fmt == 2: self.set32(ft, self.fcr31 if fs == 31 else 0)                    # cfc1
        elif fmt == 4: self.fpr[fs] = (self.fpr[fs] & ~M32 & M64) | (g[ft] & M32)       # mtc1
        elif fmt == 5: self.fpr[fs] = g[ft]                                             # dmtc1
        elif fmt == 6:                                                                  # ctc1
            if fs == 31:
                self.fcr31 = g[ft] & M32
        elif fmt == 8:                                                                  # bc1
            cond = bool(self.fcr31 & 0x800000)
            nd, tf = (ft >> 1) & 1, ft & 1
            return (cond if tf else not cond), btarget, bool(nd), 0
        elif fmt in (16, 17):                                                           # .s / .d
            single = fmt == 16
            get = self.fs if single else self.fd
            put = self.set_fs if single else self.set_fd
            a, b = get(fs), get(ft)
            if fn == 0: put(fd, a + b)
            elif fn == 1: put(fd, a - b)
            elif fn == 2: put(fd, a * b)
            elif fn == 3: put(fd, ieee_div(a, b))
            elif fn == 4: put(fd, math.sqrt(a) if a >= 0 else math.nan)
            elif fn == 5: put(fd, abs(a))
            elif fn == 6: self.fpr[fd] = self.fpr[fs] if not single else (self.fpr[fd] & ~M32 & M64) | (self.fpr[fs] & M32)
            elif fn == 7: put(fd, -a)
            elif fn in (8, 9, 10, 11): raise RuntimeError(f"64-bit round/trunc at 0x{pc:08X}")
            elif fn in (12, 13, 14, 15):                                                # round/trunc/ceil/floor.w
                x = a
                v = (round(x) if fn == 12 else math.trunc(x) if fn == 13 else math.ceil(x) if fn == 14 else math.floor(x)) \
                    if not (math.isnan(x) or math.isinf(x)) else 0x7FFFFFFF
                self.fpr[fd] = (self.fpr[fd] & ~M32 & M64) | (v & M32)
            elif fn == 32: self.set_fs(fd, a)                                           # cvt.s (from d)
            elif fn == 33: self.set_fd(fd, a)                                           # cvt.d (from s)
            elif fn == 36:                                                              # cvt.w
                self.fpr[fd] = (self.fpr[fd] & ~M32 & M64) | (self.round_to_int(a) & M32)
            elif fn >= 48:                                                              # c.cond
                unordered = math.isnan(a) or math.isnan(b)
                c = ((fn & 1) and unordered) or ((fn & 2) and not unordered and a == b) or \
                    ((fn & 4) and not unordered and a < b)
                self.fcr31 = (self.fcr31 | 0x800000) if c else (self.fcr31 & ~0x800000)
            else: raise RuntimeError(f"unhandled COP1 fn {fn} fmt {fmt} at 0x{pc:08X}")
        elif fmt in (20, 21):                                                           # .w / .l -> float
            src = sx32(self.fpr[fs]) if fmt == 20 else s64(self.fpr[fs])
            if fn == 32: self.set_fs(fd, float(src))
            elif fn == 33: self.set_fd(fd, float(src))
            else: raise RuntimeError(f"unhandled COP1 fn {fn} fmt {fmt} at 0x{pc:08X}")
        else:
            raise RuntimeError(f"unhandled COP1 fmt {fmt} at 0x{pc:08X}")
        return None, None, False, 0


if __name__ == "__main__":
    sys.exit(__doc__)
