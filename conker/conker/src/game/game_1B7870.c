/**
 * Auto-decompiled from asm/1B7870.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                             /* extern */
s32 func_151580B0();    /* extern */
void * func_15158AFC();                    /* extern */
void * memcpy();                            /* extern */
extern s32 D_8008D5B0;
extern s32 D_8008D5B8;

s32 func_1518A3C0(void *arg0, void *arg1, f32 arg2, void *arg3, void *arg4, f32 arg5, f32 arg6, u8 arg7, s16 arg8, u8 arg9, s32 arg10, u8 arg11, s32 arg12) {
    s32 spAC;
    void * spA0;
    s8 sp9D;
    s8 sp9C;
    s32 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s8 sp93;
    s8 sp92;
    s8 sp91;
    s8 sp90;
    s8 sp8D;
    s8 sp8C;
    s32 sp88;
    s32 sp84;
    s32 sp80;
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s8 sp6E;
    s16 sp6C;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    u8 sp68;
    f32 sp64;
    f32 sp60;
    void * sp54;
    void * sp48;
    f32 sp44;
    s16 sp38;
    s32 sp34;
    s16 sp30;
    s32 temp_v0;

    (*(s32 *)((char *)&(sp38) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp38) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    (*(s32 *)((char *)&(sp48) + 0x0)) = (s32) (*(s32 *)((char *)(arg3) + 0x0));
    (*(s32 *)((char *)&(sp48) + 0x4)) = (s32) (*(s32 *)((char *)(arg3) + 0x4));
    (*(s32 *)((char *)&(sp48) + 0x8)) = (s32) (*(s32 *)((char *)(arg3) + 0x8));
    (*(s32 *)((char *)&(sp54) + 0x0)) = (s32) (*(s32 *)((char *)(arg4) + 0x0));
    (*(s32 *)((char *)&(sp54) + 0x4)) = (s32) (*(s32 *)((char *)(arg4) + 0x4));
    (*(s32 *)((char *)&(sp54) + 0x8)) = (s32) (*(s32 *)((char *)(arg4) + 0x8));
    sp44 = arg2;
    sp6A = 1;
    sp6B = 1;
    sp60 = arg5;
    sp64 = arg6;
    sp68 = arg7;
    sp6C = arg8;
    if (arg9 != 0) {
        sp6E = (s8) *(&D_8008D5B8 + ((random_u32(arg2) & 1) * 4));
    } else {
        sp6E = (s8) *(&D_8008D5B0 + ((random_u32(arg2) & 1) * 4));
    }
    sp90 = 0xFF;
    sp74 = 0x220205;
    sp78 = 0x40600;
    sp8D = 7;
    sp7C = 1;
    sp80 = 0x4A;
    sp84 = 0x80;
    sp88 = 0x20;
    sp70 = 0;
    sp8C = 0;
    sp69 = 1;
    sp91 = 0xFF;
    sp92 = 0xFF;
    sp93 = 0xFF;
    sp94 = 0xFF;
    sp95 = 0xFF;
    sp96 = 0xFF;
    sp97 = 0xFF;
    sp98 = 0;
    sp9C = 0;
    sp9D = 2;
    (*(s32 *)((char *)&(spA0) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(spA0) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spA0) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp30 = 0xC;
    sp34 = 0x15;
    temp_v0 = func_151580B0(&sp68, 3, 0xFF, 1, arg10 + 0x38, (s32) arg11, arg12);
    if (temp_v0 == 0) {
        return 0;
    }
    spAC = temp_v0;
    memcpy(temp_v0 + 0xF8, &sp30, 8);
    memcpy(spAC + 0x100, &sp38, 0x30);
    return spAC;
}

s32 func_1518A5F4(void *arg0) {
    f32 sp38;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f16;
    f32 var_f18;
    s32 temp_a0;
    s32 temp_a2;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v1;

    f32 sp3C;
    f32 sp40;
    func_15158AFC(arg0, arg0);
    temp_v1 = (char *)(arg0) + 0x100;
    (*(s32 *)((char *)&(sp38) + 0x0)) = (*(s32 *)((char *)(temp_v1) + 0x10));
    (*(f32 *)((char *)&(sp38) + 0x4)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x14));
    (*(f32 *)((char *)&(sp38) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x18));
    (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) + ((*(f32 *)((char *)(temp_v1) + 0x28)) * D_800BE9A4));
    var_v0 = D_800BE9E4;
    if (var_v0 != 0) {
        temp_a2 = -(var_v0 & 3);
        temp_a0 = temp_a2 + var_v0;
        if (temp_a2 != 0) {
            temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x2C));
            var_v0 -= 1;
            var_f16 = (*(s32 *)((char *)(temp_v1) + 0x10)) * temp_f0;
            if (temp_a0 != var_v0) {
                do {
                    (*(s32 *)((char *)(temp_v1) + 0x10)) = var_f16;
                    var_v0 -= 1;
                    var_f16 = (*(s32 *)((char *)(temp_v1) + 0x10)) * temp_f0;
                    (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) * temp_f0);
                    (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * temp_f0);
                } while (temp_a0 != var_v0);
            }
            (*(s32 *)((char *)(temp_v1) + 0x10)) = var_f16;
            (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) * temp_f0);
            (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * temp_f0);
            if (var_v0 != 0) {
                goto block_5;
            }
        } else {
block_5:
            temp_f0_2 = (*(s32 *)((char *)(temp_v1) + 0x2C));
            var_v0_2 = var_v0 - 4;
            var_f18 = (*(s32 *)((char *)(temp_v1) + 0x10)) * temp_f0_2;
            if (var_v0_2 != 0) {
                do {
                    (*(s32 *)((char *)(temp_v1) + 0x10)) = var_f18;
                    var_v0_2 -= 4;
                    (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x10)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x10)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x10)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) * temp_f0_2);
                    var_f18 = (*(s32 *)((char *)(temp_v1) + 0x10)) * temp_f0_2;
                    (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * temp_f0_2);
                } while (var_v0_2 != 0);
            }
            (*(s32 *)((char *)(temp_v1) + 0x10)) = var_f18;
            (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x10)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x10)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x10)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x14)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * temp_f0_2);
        }
    }
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) + ((sp38 + (0.5f * (((*(f32 *)((char *)(temp_v1) + 0x10)) - sp38) * D_800BE9A8) * D_800BE9A4)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) + ((sp3C + (0.5f * (((*(f32 *)((char *)(temp_v1) + 0x14)) - sp3C) * D_800BE9A8) * D_800BE9A4)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) + ((sp40 + (0.5f * (((*(f32 *)((char *)(temp_v1) + 0x18)) - sp40) * D_800BE9A8) * D_800BE9A4)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x100)) = (f32) ((*(f32 *)((char *)(arg0) + 0x100)) + ((*(f32 *)((char *)(temp_v1) + 0x1C)) * D_800BE9A4));
    (*(f32 *)((char *)(temp_v1) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x4)) + ((*(f32 *)((char *)(temp_v1) + 0x20)) * D_800BE9A4));
    (*(f32 *)((char *)(temp_v1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x8)) + ((*(f32 *)((char *)(temp_v1) + 0x24)) * D_800BE9A4));
    return 1;
}

s32 func_1518A914(s32 arg0, void *arg1) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    void *temp_v0;

    func_150A8050(&sp24, (*(f32 *)((char *)(arg1) + 0x100)), (*(f32 *)((char *)(arg1) + 0x104)), (*(f32 *)((char *)(arg1) + 0x108)));
    temp_v0 = (char *)(arg1) + 0x100;
    sp54 = (*(s32 *)((char *)(arg1) + 0x48));
    sp58 = (*(s32 *)((char *)(arg1) + 0x4C));
    sp5C = (*(s32 *)((char *)(arg1) + 0x50));
    sp24 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp28 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp2C *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp34 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp38 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp3C *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp44 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp48 *= (*(s32 *)((char *)(temp_v0) + 0xC));
    sp4C *= (*(s32 *)((char *)(temp_v0) + 0xC));
    guMtxF2L(&sp24, arg0);
    return 1;
}
