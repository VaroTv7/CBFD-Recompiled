/**
 * Auto-decompiled from asm/1570E0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1510E7A4(); /* extern */
void * func_151E6C1C();                        /* extern */
extern s32 D_80089560;
extern s32 D_80089570;
extern s32 D_80089580;
extern f32 D_800A3620;
extern f32 D_800A3624;
extern f32 D_800A3628;
extern f32 D_800A362C;
extern f32 D_800A3630;
extern f32 D_800A3634;
extern f32 D_800A3638;
extern f32 D_800A363C;
extern f32 D_800A3640;
extern f32 D_800A3644;
extern f32 D_800A3648;
extern f32 D_800A364C;

void func_15129C30(void *arg0) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    void * sp68;
    f32 sp60;
    f32 *var_a0;
    f32 *var_a2;
    f32 *var_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f0;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f14;
    f32 var_f16;
    f32 var_f16_2;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f8;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 var_v1;
    s8 temp_v0_2;
    s8 temp_v0_3;
    u16 temp_a2;
    u8 temp_a3;
    void *temp_v1;

    var_f14 = 0.0f;
    sp7C = 0.0f;
    temp_a3 = (*(s32 *)((char *)(arg0) + 0x23D));
    temp_a2 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x36C))) + 0x0));
    if ((*(s32 *)((char *)(arg0) + 0x36A)) & 0x400) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x5F0));
        if (temp_v0 & 0x80000000) {
            (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) (temp_v0 & 0x7FFFFFFF);
        } else {
            (*(s32 *)((char *)(arg0) + 0x5F0)) = (s32) (temp_v0 | 0x80000000);
        }
    }
    if (!((*(s32 *)((char *)(arg0) + 0x5F0)) & 0x80000000)) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x36C));
        temp_v0_2 = (*(s32 *)((char *)(temp_v1) + 0x2));
        if ((temp_v0_2 < -4) || (temp_v0_2 >= 5)) {
            var_f2 = (f32) temp_v0_2;
        } else {
            var_f2 = 0.0f;
        }
        temp_v0_3 = (*(s32 *)((char *)(temp_v1) + 0x3));
        var_v1 = temp_a3 * 4;
        if ((temp_v0_3 < -4) || (temp_v0_3 >= 5)) {
            var_f12 = (f32) temp_v0_3;
        } else {
            var_f12 = 0.0f;
        }
        temp_f0 = var_f2 / 80.0f;
        if (temp_f0 > 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x37C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) - (temp_f0 * temp_f0 * (f32) D_800BEA08));
        } else {
            (*(f32 *)((char *)(arg0) + 0x37C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) + (temp_f0 * temp_f0 * (f32) D_800BEA08));
        }
        (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A3620);
        temp_f0_2 = (var_f12 / 80.0f) * 7.0f;
        if (temp_f0_2 > 0.0f) {
            var_f2_2 = (f32) D_800BEA08;
            var_f8 = temp_f0_2 * temp_f0_2 * var_f2_2;
        } else {
            var_f2_2 = (f32) D_800BEA08;
            var_f8 = -temp_f0_2 * temp_f0_2 * var_f2_2;
        }
        sp80 = var_f8;
        if (temp_a2 & 4) {
            var_a2 = var_v1 + &D_80089560;
            var_f12_2 = D_800A3624;
            *var_a2 += var_f12_2;
            (*(f32 *)((char *)(arg0) + 0x2FC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2FC)) - (*var_a2 * var_f2_2));
        } else if (temp_a2 & 8) {
            var_v1 = temp_a3 * 4;
            var_a2 = var_v1 + &D_80089560;
            var_f12_2 = D_800A3628;
            *var_a2 += var_f12_2;
            (*(f32 *)((char *)(arg0) + 0x2FC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2FC)) + (*var_a2 * var_f2_2));
        } else {
            var_v1 = temp_a3 * 4;
            var_a2 = var_v1 + &D_80089560;
            *var_a2 = 0.0f;
            var_f12_2 = D_800A362C;
        }
        if (temp_a2 & 0x8000) {
            var_a0 = var_v1 + &D_80089580;
            *var_a0 += D_800A3630;
            (*(f32 *)((char *)(arg0) + 0x388)) = (f32) ((*(f32 *)((char *)(arg0) + 0x388)) - (*var_a0 * (f32) D_800BEA08));
        } else if (temp_a2 & 0x4000) {
            var_a0 = var_v1 + &D_80089580;
            *var_a0 += D_800A3634;
            (*(f32 *)((char *)(arg0) + 0x388)) = (f32) ((*(f32 *)((char *)(arg0) + 0x388)) + (*var_a0 * (f32) D_800BEA08));
        } else {
            var_a0 = var_v1 + &D_80089580;
            *var_a0 = 0.0f;
        }
        temp_f0_3 = (*(s32 *)((char *)(arg0) + 0x388));
        if (temp_f0_3 < -89.5f) {
            (*(s32 *)((char *)(arg0) + 0x388)) = -89.5f;
        } else {
            if (temp_f0_3 > 89.5f) {
                var_f16 = 89.5f;
            } else {
                var_f16 = temp_f0_3;
            }
            (*(s32 *)((char *)(arg0) + 0x388)) = var_f16;
        }
        temp_v0_4 = temp_a2 & 0x2000;
        (*(f32 *)((char *)(arg0) + 0x398)) = (f32) ((*(f32 *)((char *)(arg0) + 0x388)) * D_800A3620);
        if (temp_v0_4 != 0) {
            if ((temp_a2 & 2) && (temp_v0_4 != 0)) {
                var_v0 = var_v1 + &D_80089570;
                *var_v0 += var_f12_2;
                (*(f32 *)((char *)(arg0) + 0x5EC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x5EC)) - (*var_v0 * D_800A3638));
            } else if ((temp_a2 & 1) && (temp_v0_4 != 0)) {
                var_v0 = var_v1 + &D_80089570;
                *var_v0 += var_f12_2;
                (*(f32 *)((char *)(arg0) + 0x5EC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x5EC)) + (*var_v0 * D_800A363C));
            } else {
                var_v0 = var_v1 + &D_80089570;
                *var_v0 = 0.0f;
            }
            goto block_49;
        }
        if (temp_a2 & 2) {
            var_v0 = var_v1 + &D_80089570;
            *var_v0 += D_800A3640;
            var_f0 = *var_v0;
            sp7C = 0.0f - var_f0;
        } else if (temp_a2 & 1) {
            var_v0 = var_v1 + &D_80089570;
            *var_v0 += D_800A3644;
            var_f0 = *var_v0;
            sp7C = 0.0f + var_f0;
        } else {
            var_v0 = var_v1 + &D_80089570;
            *var_v0 = 0.0f;
block_49:
            var_f0 = *var_v0;
        }
        if (var_f0 > 100.0f) {
            *var_v0 = 100.0f;
        } else {
            *var_v0 = var_f0;
        }
        temp_f0_4 = *var_a0;
        if (temp_f0_4 > 8.0f) {
            *var_a0 = 8.0f;
        } else {
            *var_a0 = temp_f0_4;
        }
        temp_f0_5 = *var_a2;
        if (temp_f0_5 > 40.0f) {
            *var_a2 = 40.0f;
        } else {
            *var_a2 = temp_f0_5;
        }
        temp_f0_6 = (*(s32 *)((char *)(arg0) + 0x5EC));
        if (temp_f0_6 < -45.0f) {
            (*(s32 *)((char *)(arg0) + 0x5EC)) = -45.0f;
        } else {
            if (temp_f0_6 > 45.0f) {
                var_f16_2 = 45.0f;
            } else {
                var_f16_2 = temp_f0_6;
            }
            (*(s32 *)((char *)(arg0) + 0x5EC)) = var_f16_2;
        }
        temp_f14 = -sinf((*(s32 *)((char *)(arg0) + 0x39C)));
        sp8C = temp_f14;
        temp_f2 = -cosf((*(s32 *)((char *)(arg0) + 0x39C)));
        (*(f32 *)((char *)(arg0) + 0x2F8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2F8)) + (temp_f14 * sp80));
        (*(f32 *)((char *)(arg0) + 0x300)) = (f32) ((*(f32 *)((char *)(arg0) + 0x300)) + (temp_f2 * sp80));
        (*(f32 *)((char *)(arg0) + 0x2F8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2F8)) + (-temp_f2 * sp7C));
        (*(s32 *)((char *)(arg0) + 0x344)) = 0.0f;
        temp_f14_2 = temp_f14 * 600.0f;
        (*(f32 *)((char *)(arg0) + 0x300)) = (f32) ((*(f32 *)((char *)(arg0) + 0x300)) + (temp_f14 * sp7C));
        temp_f12 = temp_f2 * 600.0f;
        sp84 = temp_f12;
        sp8C = temp_f14_2;
        temp_f16 = sqrtf((temp_f14_2 * temp_f14_2) + (temp_f12 * temp_f12));
        sp60 = temp_f16;
        sp88 = sinf((*(s32 *)((char *)(arg0) + 0x398))) * temp_f16;
        temp_f14_3 = cosf((*(s32 *)((char *)(arg0) + 0x398))) * temp_f14_2;
        sp8C = temp_f14_3;
        var_f14 = temp_f14_3;
        temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x2F8)) + var_f14;
        temp_f18 = cosf((*(s32 *)((char *)(arg0) + 0x398))) * temp_f12;
        (*(s32 *)((char *)(arg0) + 0x2A4)) = temp_f2_2;
        (*(s32 *)((char *)(arg0) + 0x2BC)) = temp_f2_2;
        temp_f16_2 = (*(s32 *)((char *)(arg0) + 0x300)) + temp_f18;
        (*(s32 *)((char *)(arg0) + 0x390)) = 0.0f;
        (*(f32 *)((char *)(arg0) + 0x2A4)) = (f32) (*(f32 *)((char *)(arg0) + 0x2BC));
        temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x2FC)) + sp88;
        (*(s32 *)((char *)(arg0) + 0x2C4)) = temp_f16_2;
        (*(s32 *)((char *)(arg0) + 0x2AC)) = temp_f16_2;
        (*(s32 *)((char *)(arg0) + 0x2C0)) = temp_f12_2;
        (*(s32 *)((char *)(arg0) + 0x2A8)) = temp_f12_2;
        (*(f32 *)((char *)(arg0) + 0x2AC)) = (f32) (*(f32 *)((char *)(arg0) + 0x2C4));
        (*(f32 *)((char *)(arg0) + 0x2A8)) = (f32) (*(f32 *)((char *)(arg0) + 0x2C0));
    } else {
        (*(f32 *)((char *)(arg0) + 0x394)) = (f32) (*(f32 *)((char *)(arg0) + 0x37C));
    }
    (*(s32 *)((char *)(arg0) + 0x380)) = (*(s32 *)((char *)(arg0) + 0x37C));
    temp_f2_3 = (*(s32 *)((char *)(arg0) + 0x37C)) * D_800A3648;
    (*(s32 *)((char *)(arg0) + 0x39C)) = temp_f2_3;
    (*(s32 *)((char *)(arg0) + 0x3A0)) = temp_f2_3;
    temp_f0_7 = (*(s32 *)((char *)(arg0) + 0x2FC));
    func_1510E7A4((*(s32 *)((char *)(arg0) + 0x37C)), var_f14, (char *)(arg0) + 0x644, (char *)(arg0) + 0x648, &sp68, (char *)(arg0) + 0x360, (char *)(arg0) + 0x640, 0, (*(s32 *)((char *)(arg0) + 0x2F8)), temp_f0_7, (*(s32 *)((char *)(arg0) + 0x300)), temp_f0_7, 0, 0, D_800A364C, temp_f0_7);
}

void func_1512A360(void *arg0) {
    func_151E6C1C((*(s32 *)((char *)(arg0) + 0x23D)), arg0);
}
