/**
 * Auto-decompiled from asm/1AFC80.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960(); /* extern */
s32 random_u32();                          /* extern */
f32 func_15182F58();
s8 func_15182FDC();      /* static */
extern s32 D_8008D050;
extern s32 D_8008D058;
extern s32 D_8008D060;
extern s32 D_8008D062;
extern s32 D_8008D066;
extern s32 D_8008D067;
extern u8 D_800DDE54;
extern s32 D_800DDE60;

void func_151827D0(void) {
    s32 spA4;
    u8 *sp90;
    void * *var_s0;
    f32 *temp_v0_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f22;
    s32 *var_s2;
    s32 *var_s2_2;
    s32 *var_s3;
    s32 temp_f18;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 temp_v0;
    s8 var_v1;
    u8 temp_v0_8;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v1;
    void *temp_v1_3;

    var_s7 = 0;
    if ((s32) D_800DDE50 > 0) {
        var_s3 = &D_800DDE60;
        sp90 = &D_800DDE54;
        do {
            var_s5 = 0;
            var_s6 = 0;
            temp_v1 = (*sp90 * 0x18) + &D_8008D050;
            temp_f20 = (*(s32 *)((char *)(temp_v1) + 0x0));
            temp_f22 = (*(s32 *)((char *)(temp_v1) + 0x4));
            var_s4 = 1;
            var_s2 = &spA4;
loop_3:
            *var_s2 = 0;
            var_s0 = &gObjects;
            var_s1 = 0;
loop_4:
            if ((*(s32 *)((char *)(var_s0) + 0x0)) != 0) {
                temp_v0 = func_15182FDC(var_s0, var_s4, var_s7);
                var_v1 = temp_v0;
                if ((*(s32 *)((char *)(var_s0) + 0x84)) == 0x4B) {
                    var_v1 = temp_v0 * 2;
                }
                *var_s2 += var_v1;
                if (var_v1 != 0) {
                    var_s5 = var_s1 + 1;
                }
            }
            var_s1 += 1;
            var_s0 = (char *)(var_s0) + 0x32C;
            if (var_s1 != 4) {
                goto loop_4;
            }
            var_s4 += 1;
            var_s2 += 4;
            if (var_s4 != 0x27) {
                goto loop_3;
            }
            var_s1_2 = 0;
loop_12:
            var_s2_2 = &spA4;
            var_v1_2 = 0xC;
loop_13:
            temp_v0_2 = *var_s3 + var_v1_2;
            temp_f0 = (*(s32 *)((char *)(temp_v0_2) + 0x8));
            temp_f18 = (s32) ((*(s32 *)((char *)(temp_v0_2) + 0x14)) - temp_f0);
            (*(f32 *)((char *)(temp_v0_2) + 0x0)) = (f32) ((f32) ((s32) ((*(f32 *)((char *)(temp_v0_2) - 0x4)) - temp_f0) + temp_f18) + temp_f20);
            temp_v0_3 = *var_s3 + var_v1_2;
            *temp_v0_3 += (f32) *var_s2_2;
            temp_v0_4 = *var_s3 + var_v1_2;
            (*(f32 *)((char *)(temp_v0_4) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0_4) + 0x4)) + (*(f32 *)((char *)(temp_v0_4) + 0x0)));
            temp_v0_5 = *var_s3 + var_v1_2;
            (*(f32 *)((char *)(temp_v0_5) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0_5) + 0x4)) * temp_f22);
            temp_v0_6 = *var_s3 + var_v1_2;
            temp_f0_2 = (*(s32 *)((char *)(temp_v0_6) + 0x4));
            var_v1_2 += 0xC;
            if (fabsf(temp_f0_2) < 1.0f) {
                (*(s32 *)((char *)(temp_v0_6) + 0x4)) = 0.0f;
            }
            var_s2_2 += 4;
            if (var_v1_2 < 0x1D4) {
                goto loop_13;
            }
            var_v1_3 = 0xC;
loop_17:
            temp_v0_7 = *var_s3 + var_v1_3;
            (*(f32 *)((char *)(temp_v0_7) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v0_7) + 0x8)) + (*(f32 *)((char *)(temp_v0_7) + 0x4)));
            if ((var_s5 != 0) && ((*(s32 *)((char *)((*var_s3 + var_v1_3)) + 0x4)) < -30.0f)) {
                var_s6 = 1;
            }
            var_v1_3 += 0xC;
            if (var_v1_3 != 0x1D4) {
                goto loop_17;
            }
            if (var_s5 == 0) {
                *(&D_8008D067 + (*sp90 * 0x18)) = 0;
            }
            if ((var_s6 != 0) && (*(&D_8008D067 + (*sp90 * 0x18)) == 0)) {
                temp_s0 = (var_s5 * 0x32C) + &gObjects;
                temp_v1_2 = *sp90;
                *(&D_8008D067 + (temp_v1_2 * 0x18)) = (random_u32(0x1D4, temp_f18) & 0x3F) + 0xB4;
                if ((temp_v1_2 == 2) || (temp_v1_2 == 3)) {
                    func_10010F88((random_u32() & 8) + 0x507, 0x5DC0, 0, 0, 0, (s32) (*(s32 *)((char *)(temp_s0) - 0x318)), (s32) (*(s32 *)((char *)(temp_s0) - 0x314)), (s32) (*(s32 *)((char *)(temp_s0) - 0x310)), 0x12C, 0x320);
                } else {
                    func_10010F88(0xF, 0x5DC0, 0, 0, 0, (s32) (*(s32 *)((char *)(temp_s0) - 0x318)), (s32) (*(s32 *)((char *)(temp_s0) - 0x314)), (s32) (*(s32 *)((char *)(temp_s0) - 0x310)), 0x12C, 0x320);
                }
            } else if (var_s6 == 0) {
                temp_v1_3 = (*sp90 * 0x18) + &D_8008D050;
                temp_v0_8 = (*(s32 *)((char *)(temp_v1_3) + 0x17));
                if ((temp_v0_8 != 0) && (temp_v0_8 != 0)) {
                    (*(u8 *)((char *)(temp_v1_3) + 0x17)) = (u8) (temp_v0_8 - D_800BE9E4);
                }
            }
            var_s1_2 += 1;
            if (var_s1_2 != 3) {
                goto loop_12;
            }
            var_s7 += 1;
            sp90 += 1;
            var_s3 += 4;
        } while (var_s7 < (s32) D_800DDE50);
    }
}

void func_15182C5C(void *arg0) {
    f32 spD4;
    f32 spD0;
    void * sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    u8 *sp70;
    s32 *sp68;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_f6;
    s32 temp_fp;
    s32 temp_t0;
    s32 var_s2;
    s32 var_s3;
    s32 var_t2;
    u8 *temp_v0;
    void *temp_s4;
    void *temp_v0_2;
    void *var_s1;

    temp_fp = (*(s32 *)((char *)(arg0) + 0x3C));
    temp_v0 = &(&D_800DDE54)[temp_fp];
    temp_s4 = (*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x20));
    sp70 = temp_v0;
    func_150A8050(&sp88, 0.0f, (f32) -*(&D_8008D060 + (*temp_v0 * 0x18)), 0.0f);
    var_s3 = 0;
    var_s2 = 0;
    if ((s32) (*(s32 *)((char *)((D_800DBEF4 + (*(&D_8008D062 + (*sp70 * 0x18)) * 0xA0))) + 0x16)) > 0) {
        var_s1 = temp_s4;
        sp68 = &(&D_800DDE60)[temp_fp];
        do {
            temp_f0 = func_15182F58((*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x28)) + var_s2)) + 0x4)), temp_fp);
            temp_f6 = (s32) temp_f0;
            var_t2 = temp_f6 + 1;
            if (var_t2 >= 0x28) {
                var_t2 = 0x27;
            }
            temp_t0 = *sp68;
            temp_f0_2 = temp_f0 - (f32) temp_f6;
            spD0 = (*(s32 *)((char *)((temp_t0 + (temp_f6 * 0xC))) + 0x8)) * (1.0f - temp_f0_2);
            spD4 = (*(s32 *)((char *)((temp_t0 + (var_t2 * 0xC))) + 0x8)) * temp_f0_2;
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x28)) + var_s2;
            func_150A7960(&sp88, (f32) (*(f32 *)((char *)(temp_v0_2) + 0x0)), (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x2)) + ((s32) (spD4 + spD0) >> 4)), (f32) (*(f32 *)((char *)(temp_v0_2) + 0x4)), &sp84, &sp80, &sp7C);
            var_s3 += 1;
            var_s2 += 0x10;
            var_s1 = (char *)(var_s1) + 0x10;
            (*(s16 *)((char *)(var_s1) - 0x10)) = (s16) (s32) ((f32) (*(s16 *)((char *)(arg0) + 0x10)) + sp84);
            (*(s16 *)((char *)(var_s1) - 0xE)) = (s16) (s32) ((f32) (*(s16 *)((char *)(arg0) + 0x12)) + sp80);
            (*(s16 *)((char *)(var_s1) - 0xC)) = (s16) (s32) ((f32) (*(s16 *)((char *)(arg0) + 0x14)) + sp7C);
        } while (var_s3 < (s32) (*(s32 *)((char *)((D_800DBEF4 + (*(&D_8008D062 + (*sp70 * 0x18)) * 0xA0))) + 0x16)));
    }
}

f32 func_15182F58( s32 arg0, s32 arg1) {
    f32 var_f0;
    f32 var_f2;

    var_f0 = 0.0f;
    var_f2 = *(&D_8008D058 + ((&D_800DDE54)[arg1] * 0x18)) * (f32) (arg0 * 0x28);
    if (var_f2 < 0.0f) {
        goto block_3;
    }
    var_f0 = 39.0f;
    if (var_f2 > 39.0f) {
block_3:
        var_f2 = var_f0;
    }
    return var_f2;
}

s8 func_15182FDC(void * *arg0, s32 arg1, s32 arg2) {
    f32 spAC;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    void * sp4C;
    u8 *sp3C;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_f4;
    s8 temp_v1;
    u8 *temp_t1;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_v0;

    temp_t1 = &(&D_800DDE54)[arg2];
    if ((*(s32 *)((char *)(arg0) + 0x28)) > 3.0f) {
        goto block_15;
    }
    temp_t0 = (*temp_t1 * 0x18) + &D_8008D050;
    temp_v0 = D_800DBEF4 + ((*(s32 *)((char *)(temp_t0) + 0x12)) * 0xA0);
    temp_f14 = (f32) (*(f32 *)((char *)(temp_v0) + 0x10));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x18));
    temp_f12 = ((*(f32 *)((char *)(((&D_800DDE60)[arg2] + (arg1 * 0xC))) + 0x8)) * 0.0625f) + (f32) (*(f32 *)((char *)(temp_v0) + 0x12));
    if ((temp_f2 < (temp_f12 - 300.0f)) || ((temp_f12 + 300.0f) < temp_f2)) {
        goto block_15;
    }
    spAC = (*(s32 *)((char *)(arg0) + 0x14)) - temp_f14;
    sp3C = temp_t1;
    spA4 = (*(f32 *)((char *)(arg0) + 0x1C)) - (f32) (*(f32 *)((char *)(temp_v0) + 0x14));
    func_150A8050(&sp4C, 0.0f, (f32) (*(s16 *)((char *)(temp_t0) + 0x10)), 0.0f);
    func_150A7960(&sp4C, spAC, 0.0f, spA4, &spA0, &sp9C, &sp98);
    if ((sp98 > 0.0f) || (temp_t0_2 = (*sp3C * 0x18) + &D_8008D050, (sp98 < (f32) (*(f32 *)((char *)(temp_t0_2) + 0xC)))) || (spA0 < 0.0f) || ((f32) (*(f32 *)((char *)(temp_t0_2) + 0xE)) < spA0)) {
        goto block_15;
    }
    temp_f4 = (s32) func_15182F58(0, (s32) sp98);
    temp_v1 = *(&D_8008D066 + (*sp3C * 0x18));
    if (arg1 == temp_f4) {
        return temp_v1;
    }
    if ((arg1 == (temp_f4 + 1)) || ((arg1 + 1) == temp_f4)) {
        return (s8) ((s32) (temp_v1 * 4) / 7);
    }
block_15:
    return 0;
}
