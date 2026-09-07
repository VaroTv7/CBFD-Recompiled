/**
 * Auto-decompiled from asm/15ABA0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                                /* extern */
extern s32 D_800895D0;
extern f32 D_800A36F0;
extern f32 D_800A36F4;
extern f32 D_800A36F8;
extern f32 D_800A36FC;
extern f32 D_800A3700;
extern f32 D_800A3704;
extern f32 D_800A3708;
extern f32 D_800A370C;
extern s32 D_800DC2C0;
void func_1512D6F0();

void func_1512D6F0(void *arg0) {
    void *temp_v0;

    temp_v0 = ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x68) + &D_800DC2C0;
    (*(s32 *)((char *)(temp_v0) + 0x50)) = 5;
    (*(s32 *)((char *)(temp_v0) + 0x54)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x58)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x5C)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x60)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x2C)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x28)) = -1.0f;
}

void func_1512D748(void *arg0, s32 arg1, s32 arg2) {
    f32 sp4;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 var_f10;
    f32 var_f10_2;
    f32 var_f10_3;
    f32 var_f4;
    f32 var_f4_2;
    f32 var_f4_3;
    f32 var_f6;
    f32 var_f6_2;
    f32 var_f6_3;
    u8 temp_t0;
    u8 temp_t1;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t5;
    u8 temp_t6;
    u8 temp_t7;
    u8 temp_t8;
    u8 temp_t9;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x68) + &D_800DC2C0;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x120)) == 0) {
        temp_v1 = (arg1 * 0xA) + &D_800895D0;
        (*(f32 *)((char *)(temp_v0) + 0x0)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x0));
        temp_t4 = (*(s32 *)((char *)(temp_v1) + 0x1));
        var_f4 = (f32) temp_t4;
        if ((s32) temp_t4 < 0) {
            var_f4 += 4294967296.0f;
        }
        (*(s32 *)((char *)(temp_v0) + 0x4)) = var_f4;
        temp_t5 = (*(s32 *)((char *)(temp_v1) + 0x2));
        var_f10 = (f32) temp_t5;
        if ((s32) temp_t5 < 0) {
            var_f10 += 4294967296.0f;
        }
        (*(s32 *)((char *)(temp_v0) + 0x8)) = var_f10;
        temp_t6 = (*(s32 *)((char *)(temp_v1) + 0x3));
        var_f6 = (f32) temp_t6;
        if ((s32) temp_t6 < 0) {
            var_f6 += 4294967296.0f;
        }
        (*(s32 *)((char *)(temp_v0) + 0xC)) = var_f6;
        temp_t7 = (*(s32 *)((char *)(temp_v1) + 0x4));
        var_f4_2 = (f32) temp_t7;
        if ((s32) temp_t7 < 0) {
            var_f4_2 += 4294967296.0f;
        }
        (*(s32 *)((char *)(temp_v0) + 0x10)) = var_f4_2;
        temp_t8 = (*(s32 *)((char *)(temp_v1) + 0x5));
        var_f10_2 = (f32) temp_t8;
        if ((s32) temp_t8 < 0) {
            var_f10_2 += 4294967296.0f;
        }
        (*(s32 *)((char *)(temp_v0) + 0x14)) = var_f10_2;
        temp_t9 = (*(s32 *)((char *)(temp_v1) + 0x6));
        var_f6_2 = (f32) temp_t9;
        if ((s32) temp_t9 < 0) {
            var_f6_2 += 4294967296.0f;
        }
        (*(s32 *)((char *)(temp_v0) + 0x18)) = var_f6_2;
        temp_t0 = (*(s32 *)((char *)(temp_v1) + 0x7));
        var_f4_3 = (f32) temp_t0;
        if ((s32) temp_t0 < 0) {
            var_f4_3 += 4294967296.0f;
        }
        (*(s32 *)((char *)(temp_v0) + 0x1C)) = var_f4_3;
        temp_t1 = (*(s32 *)((char *)(temp_v1) + 0x8));
        var_f10_3 = (f32) temp_t1;
        if ((s32) temp_t1 < 0) {
            var_f10_3 += 4294967296.0f;
        }
        (*(s32 *)((char *)(temp_v0) + 0x20)) = var_f10_3;
        temp_t2 = (*(s32 *)((char *)(temp_v1) + 0x9));
        var_f6_3 = (f32) temp_t2;
        if ((s32) temp_t2 < 0) {
            var_f6_3 += 4294967296.0f;
        }
        temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x10));
        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x14));
        temp_f18 = (*(s32 *)((char *)(temp_v0) + 0x20));
        temp_f12 = temp_f2 + temp_f0;
        temp_f16 = (*(s32 *)((char *)(temp_v0) + 0x1C));
        (*(s32 *)((char *)(temp_v0) + 0x24)) = var_f6_3;
        temp_f14 = (*(s32 *)((char *)(temp_v0) + 0x18)) + temp_f12;
        (*(s32 *)((char *)(temp_v0) + 0x34)) = temp_f12;
        (*(s32 *)((char *)(temp_v0) + 0x38)) = temp_f14;
        (*(s32 *)((char *)(temp_v0) + 0x30)) = temp_f0;
        (*(s32 *)((char *)(temp_v0) + 0x28)) = 0.0f;
        (*(s32 *)((char *)(temp_v0) + 0x2C)) = 0.0f;
        (*(f32 *)((char *)(temp_v0) + 0x3C)) = (f32) (temp_f16 + temp_f14);
        (*(f32 *)((char *)(temp_v0) + 0x40)) = (f32) (temp_f18 / temp_f0);
        sp4 = (*(s32 *)((char *)(temp_v0) + 0x24));
        (*(s32 *)((char *)(temp_v0) + 0x48)) = 0.0f;
        (*(f32 *)((char *)(temp_v0) + 0x44)) = (f32) ((temp_f18 - sp4) / temp_f2);
        (*(s32 *)((char *)(temp_v0) + 0x50)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x64)) = arg2;
        (*(f32 *)((char *)(temp_v0) + 0x4C)) = (f32) (sp4 / temp_f16);
    }
}

void func_1512D980(void *arg0) {
    f32 sp20;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f10;
    f32 var_f14;
    void *temp_s0;

    temp_s0 = ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x68) + &D_800DC2C0;
    if (random_u32() & 1) {
        var_f14 = 1.0f;
    } else {
        var_f14 = -1.0f;
    }
    temp_f2 = (*(s32 *)((char *)(temp_s0) + 0x28));
    if ((temp_f2 != -1.0f) && ((*(s32 *)((char *)(temp_s0) + 0x50)) != 5) && !((*(s32 *)((char *)(arg0) + 0x84)) & 0x80000)) {
        sp20 = var_f14;
        (*(f32 *)((char *)(temp_s0) + 0x54)) = (f32) (sinf(temp_f2 * D_800A36F0 * (*(f32 *)((char *)(temp_s0) + 0x0)) * 360.0f * D_800A36F4) * (var_f14 * (*(f32 *)((char *)(temp_s0) + 0x2C))));
        (*(f32 *)((char *)(temp_s0) + 0x58)) = (f32) (sinf((*(f32 *)((char *)(temp_s0) + 0x28)) * D_800A36F8 * (*(f32 *)((char *)(temp_s0) + 0x4)) * 360.0f * D_800A36FC) * (1.0f * (*(f32 *)((char *)(temp_s0) + 0x2C))));
        (*(f32 *)((char *)(temp_s0) + 0x5C)) = (f32) (sinf((*(f32 *)((char *)(temp_s0) + 0x28)) * D_800A3700 * (*(f32 *)((char *)(temp_s0) + 0x8)) * 360.0f * D_800A3704) * (-1.0f * (*(f32 *)((char *)(temp_s0) + 0x2C))));
        temp_f12 = (*(s32 *)((char *)(temp_s0) + 0x2C));
        temp_f14 = (*(s32 *)((char *)(temp_s0) + 0x3C));
        temp_f2_2 = (*(s32 *)((char *)(temp_s0) + 0x28));
        (*(f32 *)((char *)(temp_s0) + 0x60)) = (f32) (sinf((*(f32 *)((char *)(temp_s0) + 0x28)) * D_800A3708 * (*(f32 *)((char *)(temp_s0) + 0xC)) * 360.0f * D_800A370C) * (-1.0f * temp_f12));
        if ((temp_f2_2 <= temp_f14) && (temp_f12 >= 0.0f)) {
            if (temp_f2_2 <= (*(s32 *)((char *)(temp_s0) + 0x30))) {
                if (((*(s32 *)((char *)(temp_s0) + 0x50)) == 0) && ((*(s32 *)((char *)(temp_s0) + 0x64)) != 0)) {
                    (*(s32 *)((char *)(temp_s0) + 0x50)) = 1;
                }
                (*(f32 *)((char *)(temp_s0) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x2C)) + ((*(f32 *)((char *)(temp_s0) + 0x40)) * D_800BE9A4));
            } else if (temp_f2_2 <= (*(s32 *)((char *)(temp_s0) + 0x34))) {
                if (((*(s32 *)((char *)(temp_s0) + 0x50)) == 1) && ((*(s32 *)((char *)(temp_s0) + 0x64)) != 0)) {
                    (*(s32 *)((char *)(temp_s0) + 0x50)) = 2;
                }
                (*(f32 *)((char *)(temp_s0) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x2C)) - ((*(f32 *)((char *)(temp_s0) + 0x44)) * D_800BE9A4));
            } else if (temp_f2_2 <= (*(s32 *)((char *)(temp_s0) + 0x38))) {
                if (((*(s32 *)((char *)(temp_s0) + 0x50)) == 2) && ((*(s32 *)((char *)(temp_s0) + 0x64)) != 0)) {
                    (*(s32 *)((char *)(temp_s0) + 0x50)) = 3;
                }
            } else if (temp_f2_2 < temp_f14) {
                if (((*(s32 *)((char *)(temp_s0) + 0x50)) == 3) && ((*(s32 *)((char *)(temp_s0) + 0x64)) != 0)) {
                    (*(s32 *)((char *)(temp_s0) + 0x50)) = 4;
                }
                (*(f32 *)((char *)(temp_s0) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x2C)) - ((*(f32 *)((char *)(temp_s0) + 0x4C)) * D_800BE9A4));
            } else {
                func_1512D6F0((*(void **)&temp_f12));
            }
            var_f10 = (f32) D_800BE9A0;
            if ((s32) D_800BE9A0 < 0) {
                var_f10 += 4294967296.0f;
            }
            (*(f32 *)((char *)(temp_s0) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x28)) + var_f10);
            return;
        }
        (*(s32 *)((char *)(temp_s0) + 0x50)) = 5;
    }
}
