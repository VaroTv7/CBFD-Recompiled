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

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151420F8.s")
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
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151423D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142444.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151424F4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142600.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142838.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142914.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151429E0.s")
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Returns 1 if
// arg0->unk2D0->unk3C > 0, else 0 (unk2D0 is struct197*, but struct197
// isn't currently mapped out to offset 0x3C, so used a raw pointer cast
// instead of extending it speculatively). Register allocation differs
// from target with both a ternary and an if/else source form - target
// also sets v0=0 unconditionally before the branch rather than only in
// the false path, suggesting a slightly different original structure
// this round didn't find.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142A5C.s")
// s32 func_15142A5C(struct127 *arg0) {
//     return (*(s16 *) ((char *) arg0->unk2D0 + 0x3C) > 0) ? 1 : 0;
// }
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
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142B7C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142C10.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142CF0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142E24.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15142FBC.s")
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


#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151436B4.s")
void func_1514373C(f32 arg0, f32 arg1, f32 *arg2, f32 *arg3) {
    f32 c = cosf(arg0);
    f32 s = sinf(arg0);

    *arg2 = arg1 * s;
    *arg3 = arg1 * c;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143794.s")
// NON-MATCHING: mips_to_c reconstruction, hand-typed. Sign-extends arg0
// and arg1 to s16 and forwards them with arg2 to the still-raw
// func_15143794. Target round-trips arg2 through the FPU (mtc1 then
// mfc1, same register) before the call - a single conversion - while
// every source form tried here produced extra float instructions
// instead of reproducing that exact one-step round-trip.
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143834.s")
// void func_15143834(s16 arg0, s16 arg1, f32 arg2) {
//     func_15143794(arg0, arg1, arg2);
// }
void func_15143874(s16 arg0, f32 arg1, f32 *arg2, f32 *arg3) {
    f32 sp1C = func_151423D8((u8) arg0);
    f32 sp18 = func_151423D8((u8) (arg0 - 0x40));

    *arg2 = arg1 * sp18;
    *arg3 = arg1 * sp1C;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_151438D8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143D18.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15143DA8.s")

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
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144598.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514462C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514470C.s")
f32 func_15144A74(vertex *arg0, vertex *arg1) {
    return arg0->x * arg1->x + arg0->y * arg1->y + arg0->z * arg1->z;
}
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144AA8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144B34.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_15144B68.s")
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

#pragma GLOBAL_ASM("asm/nonmatchings/game_16EE20/func_1514672C.s")
// NON-MATCHING: JUSTREG: first 3 statements are out of order
// s32 func_1514672C(struct17 *arg0) {
//     if ((D_800A56C4 < fabsf(arg0->unk0)) || (D_800A56C4 < fabsf(arg0->unk8)) || (D_800A56C4 < arg0->unk4) || (arg0->unk4 < D_800A56C8)) {
//         return 0;
//     } else {
//         return 1;
//     }
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
