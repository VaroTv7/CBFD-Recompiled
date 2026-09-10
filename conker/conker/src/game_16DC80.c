#include <ultra64.h>

#include "functions.h"
#include "variables.h"


#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151407D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151408A4.s")

void func_151411A4(struct210 *arg0) {
    func_1513CA6C(arg0);
}

void func_151411C4(struct210 *arg0) {
    func_1513CAA0(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151411E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_15141250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151412BC.s")

// NON-MATCHING: mips_to_c reconstruction, hand-typed. Copies (unk34,
// unk38, unk3C) into *unk154's (x, y, z) when unk154 is non-null. Target
// reads unk3C via lwc1 (as f32) but struct210's unk3C is already
// established as s32 elsewhere in this codebase - either arg0 isn't really
// struct210 here, or unk3C is a union of s32/f32 depending on caller;
// didn't resolve which this round, so raw f32 casts were used instead.
// Isolated via scratch harness this round: with `void *v0 = arg0+0x110;`
// as a raw-cast local declared unconditionally *before* the `if` (the
// usual intermediate-pointer-hoisting fix), IDO does keep `addiu
// v0,a0,0x110` materialized as a real register (rather than
// constant-folding it into direct `arg0+0x154` offsets, which happens
// if declared *inside* the if with no other use), but positions it
// *before* the guard branch instead of as the guard's first
// true-branch instruction, and reuses one register for all three
// `v0+0x44` reloads instead of target's three distinct temps
// (t7/t8/t9). Declaring the guard flag as a separate local read first
// (`s32 flag = arg0->unk154; ...; if (flag != 0) {...}`) does get IDO
// to schedule `addiu v0,a0,0x110` into the branch's own delay slot
// (better shape than target, which leaves that slot as `nop`) with
// three distinct destination registers for the reloads - but that's a
// 1-instruction-shorter function than target (IDO fills the slot
// target leaves empty), so still not byte-perfect. Whatever the real
// source form is, it must produce a "wasted" nop in the delay slot
// that these reconstructions won't reproduce.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_1514143C.s")
// void func_1514143C(struct210 *arg0) {
//     if (arg0->unk154 != 0) {
//         arg0->unk154->x = arg0->unk34;
//         arg0->unk154->y = arg0->unk38;
//         arg0->unk154->z = arg0->unk3C;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_15141478.s")

// NON-MATCHING (extremely close - 2 words off out of 28). Applying the
// func_1513B0B8 intermediate-pointer fix here (hoist `f32 *p =
// &arg0->unk170;` to the top, use p[0..3] consistently instead of direct
// arg0-> field access) plus reordering both additions as `mult_term +
// plain_term` (matching target's operand register order) gets the frame
// size (-0x28), EVERY individual instruction's content, and instruction
// order exactly right - except the `v1` spill/reload around the
// func_15144B68 call lands at sp+0x1C here vs target's sp+0x18. Tried 8+
// source variants (operand order in the add, operand order in the
// multiply, explicit named temps for the mult and/or sinf results,
// separate vs combined pointer-assignment statement); every variant that
// achieves the correct -0x28 frame size also lands the spill at 0x1C, and
// every variant that gets 0x18 regresses to a wrong (-0x20) frame size -
// the two seem coupled through some IDO register-allocation heuristic
// this session couldn't isolate further. Best candidate kept below for
// reference; not activated since it isn't byte-perfect.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_15141564.s")
// s32 func_15141564(struct210 *arg0) {
//     f32 *p = &arg0->unk170;
//
//     arg0->unk158 = p[1] * sinf(arg0->unk178) + p[0];
//     p[2] = p[3] * D_800BE9A4 + p[2];
//     p[2] = func_15144B68(p[2]);
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151415D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151416E8.s")

// ???
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Copies D_8008A074
// (s32[2]) into a stack-local, sets a stack-local byte to arg0's low byte,
// then calls func_15169260(&local1, 2, &local2, arg1). Target's actual
// register allocation is substantially different (loads both D_8008A074
// words into scratch registers first, spills them to different stack
// offsets, and computes the arg0-byte address differently) - this wasn't
// close enough to be a simple ordering tweak, needs a fresh look.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_151417C4.s")
// void func_151417C4(s32 arg0, u8 arg1) {
//     s32 local1[2];
//     u8 local2;
//
//     local1[0] = D_8008A074[0];
//     local1[1] = D_8008A074[1];
//     local2 = (u8) arg0;
//     func_15169260(local1, 2, &local2, arg1);
// }

s32 func_15141818(s32 arg0, s32 arg1) {
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_1514182C.s")
// f32 func_1514182C(void *arg0, void *arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5) {
//     f32 sp6C;
//     f32 sp68;
//     f32 sp64;
//     ? sp34;
//     f32 temp_f0;
//     f32 temp_f12;
//     f32 temp_f2;
//
//     func_150A8050(&sp34, arg4, 0, arg5);
//     sp64 = arg1->unk0;
//     sp68 = arg1->unk4;
//     sp6C = arg1->unk8;
//     func_150A7960(&sp34, 0, arg2, 0, arg0 + 0x34, arg0 + 0x38, arg0 + 0x3C);
//     temp_f0 = arg0->unk34;
//     temp_f2 = arg0->unk38;
//     temp_f12 = arg0->unk3C;
//     arg0->unk40 = (f32) (temp_f0 + ((temp_f0 - arg1->unk0) * arg3 * 500.0f));
//     arg0->unk44 = (f32) (temp_f2 + ((temp_f2 - arg1->unk4) * arg3 * 500.0f));
//     arg0->unk48 = (f32) (temp_f12 + ((temp_f12 - arg1->unk8) * arg3 * 500.0f));
//     return temp_f0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_16DC80/func_15141928.s")
// s32 func_15141928(void *arg0) {
//     void *temp_v0 = arg0->unk178;
//     func_1514182C(arg0, arg0->unk17C, arg0->unk170, arg0->unk174, temp_v0->unk0, temp_v0->unk8);
//     return 1;
// }
