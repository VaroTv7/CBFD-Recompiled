#include <ultra64.h>
#include "functions.h"
#include "variables.h"

// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134070.s")

s32 func_1513416C(struct102 *arg0) {
    s16 temp_v0 = arg0->unk1C;
    if (temp_v0 < 32) {
        arg0->unk28 = temp_v0 * 8;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513418C.s")
// void *func_1513418C(s32 arg0, s32 arg1 /* size/offset */, u8 arg2, s32 arg3) {
//     void *sp24;
//     s32 temp_v1;
//     u8 temp_a0;
//     void *temp_ret;
//     void *temp_v0;
//     struct127 *temp_v0_2;
//
//     temp_ret = func_15167A68(0x28, arg3, arg1 + 0x58, 1, arg2, 1);
//     temp_v0 = temp_ret;
//     if (temp_v0 == 0) {
//         return NULL;
//     }
//     sp24 = temp_v0;
//     memcpy(&temp_v0->unk10, arg0, 0x30); //, temp_v0);
//     temp_a0 = temp_v0->unk3A;
//     if ((temp_a0 & 2) != 0) {
//         temp_v0_2 = temp_v0->unk1C;
//         if ((temp_v0_2->unk0 == 0) || (temp_v0->unk18 != temp_v0_2->unk3B)) {
//             func_1516972C(temp_v0);
//             return NULL;
//         }
//         temp_v1 = temp_v0_2->unk1D4;
//         if ((temp_v1 != 0) && ((temp_v0_2->unk74 & 0xF) != 0xF)) {
//             sp24 = temp_v0;
//             func_15143134(temp_v0->unk24, temp_v0->unk40, temp_v1 + (temp_v0->unk20 << 6), temp_v0);
//         } else {
//             temp_v0->unk3A = (u8) (temp_a0 | 8);
//         }
//     } else {
//         temp_v0->unk3A = (u8) (temp_a0 | 0x18);
//     }
//     temp_ret->unk50 = 0.0f;
//     temp_ret->unk4C = (f32) (1.0f / (2.0f * temp_ret->unk30));
//     return temp_ret;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151342BC.s")

s32 func_151346D0(s32 arg0, struct102 *arg1, s32 arg2) {
    arg1->unk3A &= 0xFFEF;
    return arg0;
}

void func_151346EC(struct102 *arg0) {
    func_15169804(arg0);
}

void func_1513470C(struct102 *arg0) {
    func_15169824(arg0);
}

void func_1513472C(struct102 *arg0) {
    s32 idx = arg0->unk3D;
    if (idx < 0) {
        idx = 0;
    }
    if (idx >= 10) {
        idx = 0;
    }
    D_80089AAC[idx]();
}

void func_1513477C(struct102 *arg0) {
  s32 idx = arg0->unk3D;
  if (idx < 0) {
      idx = 0;
  }
  if (idx >= 10) {
      idx = 0;
  }
    D_80089AD4[idx]();
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151347CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151348F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151349D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134C98.s")
// NON-MATCHING: semantically correct and same compiled size (0x38 bytes),
// but IDO -O2 orders the ra/a2 prologue stores and the arg2-mask timing
// differently than target for every source variation tried (direct
// forward, redundant temp, s32-typed arg2 with explicit (u8) cast at the
// call site, hoisting the arg0->unk28 condition into a temp first).
// void func_15134C98(struct102 *arg0, void *arg1, u8 arg2) {
//     if (arg0->unk28 == 1) {
//         func_151BC5A4(arg0, arg1, arg2);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134CD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134CEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134E48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151352EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513530C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513532C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151353A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135480.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513555C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151355B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135658.s")

f32 func_15135670(s32 arg0) {
    // "power", "../Effects/Blood/blood.c"
    return func_151422DC(0, D_800A3FB4, 0, 2000, 1000, D_800A3FBC, 2938) * D_800A45B4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151356D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151368A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136918.s")

s32 func_15136A1C(struct102 *arg0) {
    s32 v1;

    if (arg0->unk1C < 0x20) {
        v1 = arg0->unk1C * 8;
        if (v1 < arg0->unk28) {
            arg0->unk28 = v1;
        }
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15137610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513783C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15137C64.s")

// randomizes a timer/duration field (arg0->unk74) into roughly [580, 630),
// scaled by a global time factor. func_150ADA68 is a confirmed random-float-
// in-[0,1) generator (64-bit xorshift PRNG state at D_800885B0). Would-be
// name: setRandomTimer - not applied to the symbol because this function is
// referenced by name from asm/data/22E4E0.rodata.s, which is gitignored
// (regenerated by `make extract` from the ROM) and not committed, so a
// rename there wouldn't survive a fresh clone/re-extraction.
extern f32 D_800A4828;

s32 func_15137E10(void *arg0) {
    *(f32 *)((char *) arg0 + 0x74) = (func_150ADA68() * 50.0f + 580.0f) * D_800A4828;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15137E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15137F30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151380B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151382E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151389A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138C80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15138E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15139578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15139768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15139D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A24C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A48C.s")

// NON-MATCHING: mips_to_c reconstruction, hand-typed. Two unresolved gaps:
// (1) target re-masks arg3 to u8 a second time at the func_1513A5E0 call
// site (andi a1,a3,0xff) even though it was already masked once in the
// prologue - every variation collapsed to a single mask, reused; (2) the
// arg0->unk1D4 check has a genuinely empty body in target (reads the field,
// branches, then falls through to the same epilogue either way) but IDO
// -O2 dead-code-eliminates the entire read+branch when the if-body is
// empty in source, unlike the tanf/func_151EF080 precedent where an empty
// body still got reproduced (that involved a real return, not a no-op).
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Two unresolved gaps:
// (1) target masks arg3 to u8 once in the prologue (spilled + andi) then
// re-masks it a second time at the func_1513A5E0 call site for the a1 slot
// (andi a1,a3,0xff) while implicitly forwarding the same masked value as
// a3 too - tried arg3 as u8 (single mask, reused, no re-mask), as s32 with
// one explicit (u8) cast (drops the prologue mask entirely, matches the
// call-site andi but not the early spill), and as s32 with two explicit
// (u8) casts (compiler switches to spilling+lbu instead of andi/move,
// worse). (2) the arg0->unk1D4 check has a genuinely empty body in target
// (reads the field, branches, falls through to the same epilogue either
// way) but IDO -O2 dead-code-eliminates the entire read+branch when the
// if-body is empty in source - unlike the tanf/func_151EF080 precedent
// (that involved a real return, not a no-op).
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A594.s")
// void func_1513A594(struct127 *arg0, void *arg1, s32 arg2, u8 arg3, s32 arg4) {
//     func_1513A5E0(arg1, arg3, arg4);
//     if (arg0->unk1D4 != 0) {
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A5E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513A6E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513ABB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513B0B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513B0F8.s")
