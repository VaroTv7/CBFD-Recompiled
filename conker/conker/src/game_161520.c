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

void func_151348F0(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {
}

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

void func_15134CD4(f32 arg0, f32 arg1, s32 arg2, s32 arg3) {
}

// NON-MATCHING: mips_to_c reconstruction, hand-typed. Struct unidentified
// here - raw offset casts. Integrates two velocity fields into two
// position fields using the global timestep, fails (returns 0) if
// position unk14 exceeds 130.0, then decrements a counter and fails if
// it goes negative. Content and order are otherwise close (reading
// unk2E early, before the float math, matches target's instruction
// interleaving) but target's final decrement-and-check uses a
// branch-likely (bgezl) that this reconstruction doesn't reproduce -
// same unresolved category as func_15144B68 above.
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134CEC.s")
// s32 func_15134CEC(void *arg0) {
//     s32 v1 = *((u8 *) arg0 + 0x2E);
//
//     *(f32 *) ((char *) arg0 + 0x70) += 0.125f * D_800BE9A4;
//     *(f32 *) ((char *) arg0 + 0x74) += D_800A45B0 * D_800BE9A4;
//     *(f32 *) ((char *) arg0 + 0x14) += *(f32 *) ((char *) arg0 + 0x70) * D_800BE9A4;
//     *(f32 *) ((char *) arg0 + 0x1C) += *(f32 *) ((char *) arg0 + 0x74) * D_800BE9A4;
//     if (*(f32 *) ((char *) arg0 + 0x14) > 130.0f) {
//         return 0;
//     }
//     v1 = v1 - D_800BE9E4 * 2;
//     *((u8 *) arg0 + 0x2E) = v1;
//     if (v1 < 0) {
//         return 0;
//     }
//     return 1;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15134E48.s")

void func_151352EC(struct102 *arg0) {
    func_15169804(arg0);
}

void func_1513530C(struct102 *arg0) {
    func_15169824(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513532C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151353A8.s")

void func_15135424(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 local1[2];
    s32 local2[2];

    local1[0] = arg1;
    local1[1] = arg2;
    local2[0] = arg3;
    local2[1] = arg4;
    func_15145EA4(local1, local2, arg0, 2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135480.s")

void func_1513555C(void *arg0, void *arg1, u8 arg2) {
    if (arg2 == 0 || arg2 == 0x12) {
        if (*(s32 *) arg1 == *(s32 *) ((char *) arg0 + 0x1C) || *((u8 *) arg1 + 4) == *((u8 *) arg0 + 0x18)) {
            func_1516972C((struct102 *) arg0);
        }
    }
}

// NON-MATCHING: mips_to_c reconstruction, hand-typed. Sibling of
// func_1513555C above (same id/unique_id match guard on *arg1 vs arg0),
// but dispatches on arg2==0 (call func_1516972C) vs arg2==3 (clear bit
// 0 of arg0->unk10) separately instead of merging both trigger values
// into one action. Written as a switch (an if/else chain merges the two
// cases into an inverted single test that doesn't match), which gets
// the branch structure and almost the whole function right except one
// spot: target has a genuinely duplicated `sw` for the arg2==3 write
// (the `and` that computes the new value is shared/computed once, but
// the store appears twice, once per incoming control-flow edge into
// that point) - a merged `||` condition produces the store once (39/40
// instructions - missing the duplicate), while splitting it into an
// explicit if/else duplicates BOTH the `and` and the `sw` (44/40
// instructions - too much). Couldn't find a source form that
// duplicates only the store.
#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151355B8.s")
// void func_151355B8(void *arg0, void *arg1, u8 arg2) {
//     switch (arg2) {
//         case 0:
//             if (*(s32 *) arg1 == *(s32 *) ((char *) arg0 + 0x1C) || *((u8 *) arg1 + 4) == *((u8 *) arg0 + 0x18)) {
//                 func_1516972C((struct102 *) arg0);
//             }
//             break;
//         case 3:
//             if (*(s32 *) arg1 == *(s32 *) ((char *) arg0 + 0x1C) || *((u8 *) arg1 + 4) == *((u8 *) arg0 + 0x18)) {
//                 *(s32 *) ((char *) arg0 + 0x10) &= ~1;
//             }
//             break;
//     }
// }

s32 func_15135658(void *arg0) {
    *(f32 *) ((char *) arg0 + 0x74) = 1.0f;
    return 1;
}

f32 func_15135670(s32 arg0) {
    // "power", "../Effects/Blood/blood.c"
    return func_151422DC(0, D_800A3FB4, 0, 2000, 1000, D_800A3FBC, 2938) * D_800A45B4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_151356D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15135DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_15136698.s")

// NON-MATCHING: mips_to_c reconstruction, hand-typed. Sibling of
// func_1513F6E8 above (same arg0->unk2C/unk30 += arg0->unk128 *
// D_800BE9A4 tail), gated by a clamp check on arg0->unk1C/unk5C first.
s32 func_151368A8(struct210 *arg0) {
    f32 *ptr = &arg0->unk128;
    s16 v0 = arg0->unk1C;

    if (v0 < 0x20) {
        s32 v1 = v0 * 8;
        if (v1 < arg0->unk5C) {
            arg0->unk5C = v1;
        }
    }
    arg0->unk2C += *ptr * D_800BE9A4;
    arg0->unk30 += *ptr * D_800BE9A4;
    return 1;
}

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

void func_15136A50(s32 arg0, s32 arg1, s32 arg2, s16 arg3, u8 arg4, s32 arg5) {
    struct {
        s32 f0; s32 f4; s32 f8; f32 fC; f32 f10; s16 f14;
        u8 f16; u8 f17; u8 f18; s8 f19;
    } local;
    local.f0 = arg0; local.f4 = arg1; local.f8 = arg2;
    local.fC = D_800A461C; local.f10 = D_800A4620;
    local.f14 = arg3;
    local.f16 = 5;
    local.f17 = 5;
    local.f18 = 2;
    local.f19 = -1;
    func_15134908(&local, 0, arg4, arg5);
}

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

// Struct unidentified here (sibling func_15137E10 above also uses raw
// casts) - raw offset casts. Fails if arg0->unk1D4 is 0, or if the low
// nibble of arg0->unk74 isn't 0xF; otherwise calls func_15143134 with a
// slot from D_800A3FD8 selected by arg1, arg2, arg0->unk1D4+0x300, and
// arg1 again.
s32 func_151380B4(void *arg0, s32 arg1, s32 arg2) {
    s32 v0 = *(s32 *) ((char *) arg0 + 0x1D4);

    if (v0 == 0) {
        return 0;
    }
    if ((*(u8 *) ((char *) arg0 + 0x74) & 0xF) == 0xF) {
        return 0;
    }
    func_15143134(D_800A3FD8 + arg1 * 16, arg2, v0 + 0x300, arg1);
    return 1;
}

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

// Decrements a counter at arg0+0x170 when arg2==0x45, OR-ing a flag bit at
// arg0+0x60 if it goes negative. Target reads arg0+0x170 via plain `lw`
// (integer), which directly contradicts struct210's speculative `f32
// unk170` from the never-confirmed func_15141564 - used raw pointer casts
// here instead of asserting a struct210 field to avoid compounding that
// unresolved conflict. Matched by declaring the pointer UNCONDITIONALLY
// before the `if`, rather than inside it: IDO then folds the address
// computation into the branch's delay slot (matching target exactly)
// instead of recomputing/dropping it. See HANDOFF.md for the general
// pattern.
void func_1513B0B8(void *arg0, s32 arg1, u8 arg2) {
    s32 *p = (s32 *) ((char *) arg0 + 0x170);

    if (arg2 == 0x45) {
        *p -= 1;
        if (*p < 0) {
            *(s32 *) ((char *) arg0 + 0x60) |= 0x80;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_161520/func_1513B0F8.s")
