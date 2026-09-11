#include <ultra64.h>

#include "functions.h"
#include "variables.h"

f32 random_float();                                /* extern */

void func_15141970(struct37 *arg0) {
    func_1514EDF0(arg0, arg0->unk2C);
}

void func_15141990(void *arg0) {
    func_15141970(arg0);
}

void func_151419B0(void *arg0) {
    func_15141970(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151419D0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15141A7C.s")
// requires jump table
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15141C0C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15141CC0.s")

void func_15141DA4(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 < 12) && (arg1 >= 0) &&
        (arg2 < 20) && (arg2 >= 0) &&
        (D_800BE616 == 0) &&
        (D_8008A084[arg1] != 0) && (arg2 != -1)) {
        if ((D_8008A0B4[arg2].unk0 != 0) && (D_8008A0B4[arg2].unk4 > 0)) {
            func_15141E38(arg0, arg2);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15141E38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15141F78.s")
// NON-MATCHING: need to determine arguments
// void func_1513C650(s32, s32, s32, u16, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, u8, s32);
// s32 func_1513C650(s32 arg0, u8 arg1, u8 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, u8 arg9, u8 argA, s32 argB, s32 argC, s32 argD, u8 argE, s32 argF);
// void func_15141F78(u8 arg0, struct157 *arg1, f32 arg2, s32 arg3, struct157 *arg4, u8 arg5) {
//     struct157 tmp;
//     f32 temp_f2;
//     s32 phi_v0;
//
//     tmp.unk6 = arg0;
//     tmp.unk7 = 0;
//     tmp.unk0 = 0x6F701;
//     tmp.unk4 = (random_u32() % 61U) + 100;
//     tmp.unk8 = 0;
//     tmp.unkC = 0;
//     tmp.unk10 = (random_u32() & 0x7F) + 128;
//     tmp.unk11 = 0xFF;
//     tmp.unk12 = 0xFF;
//     tmp.unk13 = 0xFF;
//     tmp.unk14 = 0xFF;
//     tmp.unk15 = 0xFF;
//     tmp.unk18 = 0x3B0002;
//     tmp.unk16 = 0;
//     tmp.unk17 = 7;
//     tmp.unk20 = 0xFF;
//     tmp.unk1C = arg1->unk18;
//     tmp.unk22 = 0x28;
//     tmp.unk24 = 6;
//     temp_f2 = ((random_float() * 5.0f) + 10.0f) * arg2;
//     // --- matching to here ---
//     if (arg5 == 2) {
//         phi_v0 = 1;
//     } else {
//         phi_v0 = 0;
//     }
//     func_1513C650(&tmp, 0, 0, arg1->unk4, arg4->unk0, arg1->unk0, arg4->unk8, temp_f2, temp_f2, arg3, phi_v0, 3, 1, 0, 0xFF, 1);
// }

// Copies the 6-entry D_800A5200 table into a local buffer and passes it
// (with arg0's index into gObjects) to func_150A2AEC.
s32 func_151420F8(struct127 *arg0) {
    struct261 tmp = D_800A5200;

    if (func_150A2AEC(arg0 - gObjects, 6, &tmp) == -1) {
        return 0;
    }
    return 1;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142180.s")

s32 func_151422C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (arg3 + arg2) >> 1;
}

s32 func_151422DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    return arg4;
}

s32 func_151422F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    return arg4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142314.s")
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Wraps arg0 into a
// quarter-circle index [0,0x40) with mirroring, then looks up D_8009A220
// with a sign flip depending on which quadrant (top 2 bits of arg0) it
// came from - a sine-style lookup table. Content and structure are
// otherwise exact (confirmed against the real, already-matched callers
// in game_15F680.c/game_1DD500.c/game_E8C10.c: this really is
// f32 func_151423D8(u8 arg0)) but the quadrant mask (arg0 & 0xC0) lands
// in a reused $a0 instead of target's fresh $t0 - tried a separate
// hoisted alias variable, didn't change the allocation.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151423D8.s")
// f32 func_151423D8(u8 arg0) {
//     s32 idx;
//
//     if (arg0 & 0x40) {
//         idx = 0x40 - (arg0 & 0x3F);
//     } else {
//         idx = arg0 & 0x3F;
//     }
//     if ((arg0 & 0xC0) == 0 || (arg0 & 0xC0) == 0xC0) {
//         return D_8009A220[idx];
//     }
//     return -D_8009A220[idx];
// }
// NON-MATCHING: mips_to_c reconstruction, hand-typed. If arg0 is a real
// id (!=0xFF) and arg1 already matches it (non-null, alive, same
// unique_id), or arg0==0xFF (use arg1 as-is), returns arg1 when it's
// "ready" (unk1D4 set), else 0. Otherwise falls back to looking the
// object up fresh via func_15083E90(arg0). Logic and branch shapes
// (including the guard-chain "||"-to-search jumps) match target, but
// target hoists a v0=a0 alias unconditionally in the outer bne's delay
// slot and keeps arg0's masked value in $v0 throughout, while this
// reconstruction gets it allocated into $a2 instead - a pervasive
// register-choice difference (not just one instruction) that cascades
// through most of the function; didn't find a source form that steers
// IDO toward $v0 specifically.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142444.s")
// struct127 *func_15142444(u8 arg0, struct127 *arg1) {
//     struct127 *v0;
//
//     if (arg0 == 0xFF) {
//         if (arg1->unk1D4 == 0) {
//             return 0;
//         }
//         return arg1;
//     }
//     if (arg1 == 0 || arg1->interaction_state == 0 || arg0 != arg1->unique_id) {
//         goto search;
//     }
//     if (arg1->unk1D4 == 0) {
//         return 0;
//     }
//     return arg1;
//
// search:
//     v0 = func_15083E90(arg0);
//     if (v0 == 0) {
//         return 0;
//     }
//     if (v0->unk1D4 == 0) {
//         return 0;
//     }
//     return v0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151424F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142600.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142838.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142914.s")
// Looks up a packed RGB triplet from D_8008A160 (12 bytes per arg0,
// 4 sub-entries of 3 bytes each selected by func_150ADA20()&3) and
// unpacks it into *arg1/*arg2/*arg3.
void func_151429E0(u8 arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    u8 *entry = &D_8008A160[arg0 * 12 + (func_150ADA20() & 3) * 3];

    *arg1 = entry[0];
    *arg2 = entry[1];
    *arg3 = entry[2];
}
// Returns 1 if arg0->unk2D0->unk3C > 0, else 0 (unk2D0 is struct197*, but
// struct197 isn't currently mapped out to offset 0x3C, so used a raw
// pointer cast instead of extending it speculatively).
s32 func_15142A5C(struct127 *arg0) {
    void *v0 = arg0->unk2D0;

    if (*(s16 *) ((char *) v0 + 0x3C) > 0) {
        return 1;
    }
    return 0;
}
extern f32 D_800A5624;

f32 func_15142A80(f32 arg0) {
    return (1.0f - arg0) * (arg0 - 2.0f) * arg0 * D_800A5624;
}
f32 func_15142AC0(f32 arg0) {
    return (arg0 + 1.0f) * (arg0 - 1.0f) * (arg0 - 2.0f) * 0.5f;
}
f32 func_15142B04(f32 arg0) {
    return (2.0f - arg0) * (arg0 + 1.0f) * arg0 * 0.5f;
}
extern f32 D_800A5628;

f32 func_15142B44(f32 arg0) {
    return (arg0 + 1.0f) * (arg0 - 1.0f) * arg0 * D_800A5628;
}
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Writes up to two
// "othermode" gfx display-list commands into arg0's buffer, one per
// bitmask (arg2 against D_800DD200, arg1 against D_800DD1FC), only for
// bits not already set in the tracked global state, then updates that
// state. Returns the advanced write pointer. Content matches target
// exactly (including hoisting a "p = arg0" alias unconditionally before
// the first check, per the func_1513B0B8 pattern) but IDO schedules the
// store/increment/global-update triple within each block in a different
// relative order than source - same 3 instructions, just rotated.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142B7C.s")
// void *func_15142B7C(void *arg0, s32 arg1, s32 arg2) {
//     void *p = arg0;
//
//     if ((~D_800DD200) & arg2) {
//         *(u32 *) p = 0xD9000000 | (~arg2 & 0xFFFFFF);
//         arg0 = (char *) arg0 + 8;
//         *(u32 *) ((char *) p + 4) = 0;
//         D_800DD200 |= arg2;
//     }
//     if ((~D_800DD1FC) & arg1) {
//         p = arg0;
//         arg0 = (char *) arg0 + 8;
//         *(u32 *) p = 0xD9FFFFFF;
//         *(u32 *) ((char *) p + 4) = arg1;
//         D_800DD1FC |= arg1;
//     }
//     return arg0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142C10.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142CF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142E24.s")
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Skips (returns
// arg0 unchanged) if arg1/arg2 already match the cached
// D_800DD218/D_800DD21C values. Otherwise, if *arg3==1, emits a
// RDPPIPESYNC command and clears the flag; then always emits a "set"
// command carrying arg1 (rounded up to a multiple of 0x10, masked to 24
// bits) and arg2, and updates the cache. Returns the advanced pointer.
// Content matches for the first ~5 words, but target's second guard
// (arg2 == D_800DD21C) compiles to a direct beql-to-return, while every
// source form tried here (&&, nested if) instead compiles to a second
// bnel-to-skip matching the first guard's shape - possibly the same
// "IDO's branch-likely selection depends on more than the literal
// condition" issue documented for func_1516434C's investigation
// earlier in this project. Target's final write block also keeps a
// separate v0=arg0 alias for the two stores where this reconstruction
// gets CSE'd back down to using arg0 directly (same category as the
// func_15142B7C/func_1513B0B8-adjacent aliasing quirks).
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142FBC.s")
// void *func_15142FBC(void *arg0, s32 arg1, s32 arg2, u8 *arg3) {
//     void *v0;
//
//     if (arg1 == D_800DD218 && arg2 == D_800DD21C) {
//         return arg0;
//     }
//     if (*arg3 == 1) {
//         v0 = arg0;
//         arg0 = (char *) arg0 + 8;
//         *(u32 *) v0 = 0xE7000000;
//         *(u32 *) ((char *) v0 + 4) = 0;
//         *arg3 = 0;
//     }
//     v0 = arg0;
//     *(u32 *) v0 = 0xEF000000 | ((arg1 | 0xF) & 0xFFFFFF);
//     *(u32 *) ((char *) v0 + 4) = arg2;
//     arg0 = (char *) arg0 + 8;
//     D_800DD218 = arg1;
//     D_800DD21C = arg2;
//     return arg0;
// }
s16 func_15143044(u8 arg0, s32 arg1) {
    return 0x7FFF - arg0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514306C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151432BC.s")

// void func_151432BC(struct208 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
//     struct209 tmp;
//     f32 temp_f2;
//     f32 temp_f6;
//     f32 temp_ret;
//     s32 temp_t6;
//     u8 temp_a0;
//
//     temp_t6 = (arg0->unk15) & 3;
//     if (temp_t6 == 0) {
//         tmp.unk1B = random_u32();
//         tmp.unk14 = func_151423D8((tmp.unk1B - 64) & 0xFF);
//         tmp.unk10 = func_151423D8(tmp.unk1B);
//         temp_ret = random_float();
//         temp_f2 = temp_ret * arg0->unk6;
//         *arg1 = (arg0->unk0 + (temp_f2 * tmp.unk10));
//         *arg2 = (arg0->unk4 - (temp_f2 * tmp.unk14));
//         *arg3 = (arg0->unk2 + arg0->unk8);
//         *arg4 = arg0->unk2;
//     } else if (temp_t6 != 1) {
//         if (temp_t6 == 2) {
//             tmp.unk2F = (u32) (arg0->unk10 * D_800A5644); // 0.7111111283302307
//             tmp.unk28 = func_151423D8((tmp.unk2F - 64));
//             tmp.unk24 = func_151423D8(tmp.unk2F);
//             tmp.unk20 = (random_float() * (2.0f * (f32) arg0->unk6)) + (f32) -(s32) arg0->unk6;
//             temp_f2 = (random_float() * (2.0f * (f32) arg0->unkA)) + (f32) -(s32) arg0->unkA;
//             temp_f6 = temp_f2 * tmp.unk24;
//             *arg1 = (arg0->unk0 + ((tmp.unk20 * tmp.unk24) + (temp_f2 * tmp.unk28)));
//             *arg2 = (arg0->unk4 + (temp_f6 - (tmp.unk20 * tmp.unk28)));
//             *arg3 = (arg0->unk2 + arg0->unk8);
//             *arg4 = arg0->unk2;
//         } else {
//             *arg1 = arg0->unk0;
//             *arg2 = arg0->unk4;
//             *arg3 = (arg0->unk2 + arg0->unk8);
//             *arg4 = (arg0->unk2 - arg0->unk8);
//         }
//     } else {
//         tmp.unkB = random_u32();
//         tmp.unk4 = func_151423D8((tmp.unkB - 64));
//         tmp.unk0 = func_151423D8(tmp.unkB);
//         temp_ret = random_float();
//         temp_f2 = temp_ret * (f32) arg0->unk6;
//         *arg1 = (arg0->unk0 + (temp_f2 * tmp.unk0));
//         *arg2 = (arg0->unk4 - (temp_f2 * tmp.unk4));
//         *arg3 = (arg0->unk2 + arg0->unk8);
//         *arg4 = (arg0->unk2 - arg0->unk8);
//     }
// }


void func_151436B4(f32 arg0, f32 arg1, f32 arg2, f32 *arg3) {
    f32 cos0 = cosf(arg0);
    f32 sin0 = sinf(arg0);
    f32 cos1 = cosf(arg1);
    f32 sin1 = sinf(arg1);
    f32 tmp = arg2 * cos1;

    arg3[0] = tmp * sin0;
    arg3[1] = -arg2 * sin1;
    arg3[2] = tmp * cos0;
}
void func_1514373C(f32 arg0, f32 arg1, f32 *arg2, f32 *arg3) {
    f32 c = cosf(arg0);
    f32 s = sinf(arg0);

    *arg2 = arg1 * s;
    *arg3 = arg1 * c;
}
void func_15143794(s16 arg0, s16 arg1, f32 arg2, void *arg3) {
    f32 r1 = func_151423D8((u8) arg0);
    f32 r2 = func_151423D8((u8) (arg0 - 0x40));
    f32 r3 = func_151423D8((u8) arg1);
    f32 r4 = func_151423D8((u8) (arg1 - 0x40));
    f32 tmp = arg2 * r3;

    ((f32 *) arg3)[0] = tmp * r2;
    ((f32 *) arg3)[1] = -arg2 * r4;
    ((f32 *) arg3)[2] = tmp * r1;
}

void func_15143834(s16 arg0, s16 arg1, f32 arg2, void *arg3) {
    func_15143794(arg0, arg1, arg2, arg3);
}
void func_15143874(s16 arg0, f32 arg1, f32 *arg2, f32 *arg3) {
    f32 sp1C = func_151423D8((u8) arg0);
    f32 sp18 = func_151423D8((u8) (arg0 - 0x40));

    *arg2 = arg1 * sp18;
    *arg3 = arg1 * sp1C;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151438D8.s")
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Clamps *arg0/*arg1
// into range [arg2, arg3] (after ensuring arg2<=arg3 and *arg0<=*arg1
// via XOR swaps - confirmed genuine XOR swaps from the raw asm, not
// temp-based). Content matches exactly, but target keeps arg0/arg1 in
// callee-saved $s0/$s1 across the whole function (with the matching
// push/pop), while this reconstruction keeps them in $a0/$a1/$v0/$v1
// instead - same unresolved "why does target promote this pointer to a
// saved register" category as elsewhere in this file.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143D18.s")
// void func_15143D18(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
//     s32 v1;
//     s32 tmp;
//
//     if (arg3 < arg2) {
//         v1 = arg2 ^ arg3;
//         tmp = arg3 ^ v1;
//         arg3 = tmp;
//         arg2 = v1 ^ tmp;
//     }
//     if (*arg1 < *arg0) {
//         *arg0 ^= *arg1;
//         *arg1 ^= *arg0;
//         *arg0 ^= *arg1;
//     }
//     if (*arg0 < arg2) {
//         *arg0 = arg2;
//     }
//     if (arg3 < *arg1) {
//         *arg1 = arg3;
//     }
// }
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Clamps *arg0 into
// [min(arg1,arg2), max(arg1,arg2)], swapping arg1/arg2 first if needed
// (target genuinely uses an XOR swap, confirmed from the raw asm - tried
// matching it exactly, still didn't converge). Register allocation and
// a missing dead prologue spill differ from target throughout.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143DA8.s")
// s32 func_15143DA8(s32 *arg0, s32 arg1, s32 arg2) {
//     s32 v0;
//     s32 tmp;
//
//     if (arg2 < arg1) {
//         tmp = arg1;
//         arg1 = arg2;
//         arg2 = tmp;
//     }
//     v0 = *arg0;
//     if (v0 < arg1) {
//         *arg0 = arg1;
//         return 1;
//     }
//     if (arg2 < v0) {
//         *arg0 = arg2;
//         return 2;
//     }
//     return 0;
// }

s32 func_15143E08(struct127 *arg0) {
    return (((s32) arg0->unk7A >> 8) + 64) & 0xFF;
}

// NON-MATCHING: mips_to_c reconstruction, hand-typed. Sibling of
// func_15143E08 above - subtracts arg0->unk31C->unk12 from arg0->unk7A
// when unk31C is non-null, else just uses unk7A, then returns the result
// >>8. Target uses a branch-likely with the "else" value computed in the
// (nullified-when-taken) delay slot, funneling both paths through a
// shared >>8 epilogue; this reconstruction's if/else produced different
// register allocation and instruction count throughout.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143E24.s")
// s16 func_15143E24(struct127 *arg0) {
//     s32 v0;
//
//     if (arg0->unk31C != 0) {
//         v0 = arg0->unk7A - arg0->unk31C->unk12;
//     } else {
//         v0 = arg0->unk7A;
//     }
//     return v0 >> 8;
// }
f32 func_15143E64(vertex *arg0) {
    return sqrtf(arg0->x * arg0->x + arg0->y * arg0->y + arg0->z * arg0->z);
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143E94.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514401C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151441A4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151442FC.s")
// NON-MATCHING: mips_to_c reconstruction, hand-typed. A wraparound-range
// clamp: subtracts (arg1-arg2+1) from arg0 while arg0>arg1, then adds it
// back while arg0<arg2. Matches target's control-flow shape (subtract-
// or-add once unconditionally, then loop) but compiles to noticeably
// more instructions than target throughout both loops - didn't find the
// exact source form this round.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151444DC.s")
// s32 func_151444DC(s32 arg0, s32 arg1, s32 arg2) {
//     s32 v0;
//
//     if (arg1 < arg0) {
//         v0 = arg1 - arg2 + 1;
//         arg0 -= v0;
//         while (arg1 < arg0) {
//             arg0 -= v0;
//         }
//     }
//     if (arg0 < arg2) {
//         v0 = arg1 - arg2 + 1;
//         arg0 += v0;
//         while (arg0 < arg2) {
//             arg0 += v0;
//         }
//     }
//     return arg0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144528.s")
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Struct unidentified
// here - raw offset casts. Selects a computation based on arg0's unk15 &
// 3: cases 0 and 1 share the same tail (unk6^2 * D_800A5694), case 2
// returns 1.0f, case 3 returns unk6*unkA*4.0f. Target tests each case
// with its own independent branch (case 0 via beql, case 1 via a
// separate beq that falls into the same tail, case 2 via its own beq);
// both an if-elseif chain and a switch here get compiled into a
// different decision tree (testing sel!=0 first, then disambiguating)
// since IDO recognizes cases 0 and 1 produce the same result and merges
// the tests - didn't find a source form that keeps them separate.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144598.s")
// f32 func_15144598(void *arg0) {
//     s32 sel = *((u8 *) arg0 + 0x15) & 3;
//     s16 v0;
//
//     switch (sel) {
//         case 0:
//             v0 = *(s16 *) ((char *) arg0 + 0x6);
//             break;
//         case 1:
//             v0 = *(s16 *) ((char *) arg0 + 0x6);
//             break;
//         case 2:
//             return 1.0f;
//         default:
//             return (f32) (*(s16 *) ((char *) arg0 + 0x6) * *(s16 *) ((char *) arg0 + 0xA)) * 4.0f;
//     }
//     return (f32) (v0 * v0) * D_800A5694;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514462C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514470C.s")
f32 func_15144A74(vertex *arg0, vertex *arg1) {
    return arg0->x * arg1->x + arg0->y * arg1->y + arg0->z * arg1->z;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144AA8.s")
// D_800DBFF0 is struct108[]; arg0 selects an element and this returns a
// pointer to its field at offset 0x2F8 (per func_151454BC below, that
// field is a struct17 - a vec3-like x/y/z position).
struct17 *func_15144B34(s32 arg0) {
    return (struct17 *) (arg0 * 2464 + (char *) D_800DBFF0 + 0x2F8);
}
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Angle-wrap into
// [0, D_800A56A4): subtract while >D_800A56A4 (strict - confirmed from
// target's c.lt.s, an off-by-one from my first >= attempt), add while
// <0. Even with the condition direction fixed, register allocation
// (which value lives in $f2 vs $f12) and instruction scheduling differ
// from target throughout the branch-likely loop structure. Widely
// referenced (real prototype already in functions.h from an earlier
// session's "real prototype" fix) - many other functions depend on its
// correct *behavior*, which this reconstruction has, just not matching
// bytes.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144B68.s")
// f32 func_15144B68(f32 arg0) {
//     while (arg0 > D_800A56A4) {
//         arg0 -= D_800A56A4;
//     }
//     while (arg0 < 0.0f) {
//         arg0 += D_800A56A4;
//     }
//     return arg0;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144BC8.s")

s32 func_15144C2C( s32 arg0) {
    s16 tmp1 = arg0;

    while (tmp1 >= 256)
    {
        tmp1 -= 255;
    }
    while (tmp1 < 0)
    {
        tmp1 += 255;
    }

    return tmp1;
}

f32 func_15144C8C(f32 arg0, f32 arg1) {
    f32 tmp;

    arg0 = func_15144B68(arg0);
    tmp = fabsf(arg0 - func_15144B68(arg1));
    if (D_800A56A8 < tmp) {
        tmp = D_800A56AC - tmp;
    }
    return tmp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144CEC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144E80.s")

void func_151450B4(struct17 *arg0, struct17 *arg1, struct17 *arg2) {
    arg2->unk0 = arg0->unk4 * arg1->unk8 - arg0->unk8 * arg1->unk4;
    arg2->unk4 = arg0->unk8 * arg1->unk0 - arg0->unk0 * arg1->unk8;
    arg2->unk8 = arg0->unk0 * arg1->unk4 - arg0->unk4 * arg1->unk0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145128.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151451F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151452C4.s")

s32 func_151454BC(u8 arg0, f32 arg1, struct17 *arg2) {
    f32 tmp1;
    f32 tmp2;
    f32 tmp3;
    struct17 *temp_v0;

    temp_v0 = func_15144B34(arg0);
    tmp1 = arg2->unk0 - temp_v0->unk0;
    tmp2 = arg2->unk4 - temp_v0->unk4;
    tmp3 = arg2->unk8 - temp_v0->unk8;

    if ((arg1 * arg1) < ((tmp1 * tmp1) + (tmp2 * tmp2) + (tmp3 * tmp3))) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145548.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514563C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145740.s")
// NON-MATCHING: 90% there
// void func_15145740(struct127 *arg0, struct17 *arg1, struct17 *arg2, struct17 *arg3, f32 arg4) {
//     struct194 tmp;
//     f32 temp_f6;
//     s16 phi_v1;
//     s16 phi_t0;
//
//     if ((arg0->unk4 == 0x96) && ((arg0->unk31C->unk7D != 0))) {
//         phi_t0 = arg0->unk7A + arg0->unk31C->unk80;
//     } else {
//         if (arg0->unk31C != 0) {
//             phi_t0 = arg0->unk7A - arg0->unk31C->unk12;
//         } else {
//             phi_t0 = arg0->unk7A;
//         }
//     }
//     if ((arg0->unk4 == 0x96) && (arg0->unk31C->unk7D != 0)) {
//         phi_v1 = arg0->unk31C->unk82 + 1024;
//     } else {
//         phi_v1 = arg0->unk1D1 * 200;
//     }
//     tmp.unk14 = phi_t0;
//     tmp.unk10 = phi_v1 * 0.005493164f;
//     tmp.unk0 = tmp.unk10 * D_800A56B4;
//     func_1505A184(phi_t0, 2000.0f, tmp.unk10, &arg1->unk0, &arg1->unk8, &arg1->unk4);
//     if (arg2 != 0) {
//         arg2->unk4 = cosf(tmp.unk0) * 1000.0f;
//         temp_f6 = sinf(tmp.unk0) * 1000.0f;
//         tmp.unk8 = temp_f6;
//         tmp.unk4 = phi_t0 * D_800A56B8;
//         arg2->unk0 = cosf(tmp.unk4) * tmp.unk8;
//         arg2->unk8 = sinf(tmp.unk4) * -temp_f6;
//         if (arg3 != 0) {
//             tmp.unkC = tmp.unk0 + arg4;
//             arg3->unk4 = cosf(tmp.unkC) * 1000.0f;
//             tmp.unk8 = sinf(tmp.unkC) * 1000.0f;
//             arg3->unk0 = cosf(tmp.unk4) * tmp.unk8;
//             arg3->unk8 = sinf(tmp.unk4) * -tmp.unk8;
//         }
//     }
// }

void func_15145974(struct17 *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = func_150484A0(arg0->unk0, arg0->unk8) * D_800A56BC;
    if (arg2 != NULL) {
        *arg2 = (func_150484A0(sqrtf(arg0->unk0 * arg0->unk0 + arg0->unk8 * arg0->unk8), arg0->unk4) * D_800A56C0) - 90.0f;
    }
}

f32 func_15145A0C(f32 arg0, f32 arg1, f32 arg2) {
    return D_800A548C[(s32)(arg0 * arg2 * 100.0f)] * arg1;
}


void func_15145A50(struct127 *arg0) {
    arg0->unk5 = 3;
    if (D_800BE9F0 != 51) {
        if ((D_800BE616 != 0) || (arg0->interaction_state == 5) || (arg0->interaction_state == 1) || (arg0->interaction_state == 21)) {
            arg0->interaction_state = 5;
            if (arg0->unk31C != NULL) {
                arg0->unk31C->unk78 = 0;
            }
        } else {
            func_15053694(arg0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145AD8.s")

u8 func_15145C90(s32 arg0) {
    if (arg0 < 0) {
        return 1;
    } else {
        return (D_800DBEF4[arg0].unk6F & 0x80) == 0x80;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145CD0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145DB4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15145EA4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15146078.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151462C8.s")
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Builds a bitmask
// of the low (D_80082FA0+1) bits (0 if D_80082FA0<0), then returns
// whether that mask has no bits in common with *(arg0+2) (s16). Tried
// referencing arg0 directly and through a local copy (matching target's
// early `or a2,a0,zero`) - the copy fixed the missing initial instruction
// but the final field-access register allocation still differs.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151464B8.s")
// s32 func_151464B8(void *arg0) {
//     s32 v0 = 0;
//     s32 v1 = 0;
//
//     if (D_80082FA0 >= 0) {
//         do {
//             v1 |= 1 << v0;
//             v0 += 1;
//             v1 = (s16) v1;
//         } while (v0 <= D_80082FA0);
//     }
//     return (*(s16 *) ((char *) arg0 + 2) & v1) < 1;
// }

void func_15146508(struct127 *arg0, struct127 *arg1) {
    struct193 tmp;

    tmp.unk0 = arg0;
    tmp.unk4 = arg1;
    tmp.unk8 = arg0->unique_id;
    tmp.unk9 = arg1->unique_id;
    func_15169040(&tmp, 45, arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514654C.s")

// NON-MATCHING: mips_to_c reconstruction, hand-typed. Bounding-volume
// check: fails if |x| or |z| exceed D_800A56C4, or if y is outside
// [D_800A56C8, D_800A56C4]. Target compiles fabsf() straight to a single
// abs.s with no argument-promotion round-trip, but calling fabsf() the
// normal way here always produces IDO's usual cvt.d.s/cvt.s.d dance
// around it (confirmed present even in already-matched fabsf() call
// sites elsewhere in this file, e.g. func_15144C8C) - so target's
// abs must come from a different source idiom than a plain fabsf()
// call; an explicit `if (x<0) x=-x;` branch was tried and made things
// worse (extra unwanted branches), reverted.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514672C.s")
// s32 func_1514672C(struct17 *arg0) {
//     if (D_800A56C4 < fabsf(arg0->unk0) || D_800A56C4 < fabsf(arg0->unk8) || D_800A56C4 < arg0->unk4 || arg0->unk4 < D_800A56C8) {
//         return 0;
//     }
//     return 1;
// }

void func_151467A4(f32 *arg0, f32 arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7) {
    *arg0 = *arg0 - D_800BE9A4;
    if (*arg0 < 0.0f) {
        *arg0 = random_float() * arg1;
        if ((random_u32() & 3) != 0) {
            *arg2 = (random_float() * (arg4 - arg3)) + arg3;
        } else {
            *arg2 = (random_float() * (arg5 - arg4)) + arg4;
        }
    }
    *arg7 = ((*arg2 - *arg7) * arg6) + *arg7;
}
