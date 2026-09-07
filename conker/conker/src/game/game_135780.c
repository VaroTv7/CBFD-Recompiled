/**
 * Auto-decompiled from asm/135780.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                                /* extern */
f32 random_float();                             /* extern */
s32 func_15130280();        /* extern */
void * func_1514373C();            /* extern */
void * memcpy();                            /* extern */
extern f32 D_800A2450;
extern f32 D_800A2454;
extern f32 D_800A2458;
extern f32 D_800A245C;
extern f32 D_800A2460;
extern f32 D_800A2464;

void func_151082D0(void *arg0) {
    s8 spF9;
    s8 spF8;
    s8 spF7;
    s8 spF6;
    s8 spF5;
    s8 spF4;
    s32 spF0;
    s32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA4;
    s32 spA0;
    s16 sp9E;
    s16 sp9C;
    s32 sp98;
    s32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 temp_f12;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_v0_2;
    s32 var_v0;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((D_800A2450 + (random_float() * D_800A2454)) * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x28)) > 1.0f) {
        if ((*(s32 *)((char *)(temp_s0) + 0x8)) & 1) {
            temp_f28 = D_800A2458;
            spB1 = 0x74;
            sp9C = 0x5310;
            sp94 = 0x200005;
            sp98 = 0x9F0600;
            spA8 = 0xFF;
            spA9 = 0xFF;
            spAA = 0xFF;
            spAB = 0xFF;
            spB2 = 1;
            spA0 = 0;
            spA4 = 0;
            spB0 = 0xFF;
            spD0 = 0.0f;
            spD4 = 0.0f;
            spD8 = 0.0f;
            spDC = 0.0f;
            spE0 = 0.0f;
            spE4 = 0.0f;
            spE8 = 0.0f;
            spB4 = 0xFF;
            spB6 = 1;
            spB8 = 1.0f;
            spF4 = 6;
            spF5 = 6;
            spF6 = 0x18;
            spF7 = -1;
            spF8 = -1;
            spF9 = 0;
            spF0 = 0;
            sp9E = 0x12C;
            spAC = 0xFF;
            spAD = 0xFF;
            spAE = 0xFF;
            sp90 = 0.0f;
            do {
                temp_f2 = (random_float() * 20.0f) + 30.0f;
                temp_f12 = temp_f2 * temp_f28;
                sp80 = temp_f2;
                sp84 = temp_f2;
                sp88 = temp_f12;
                sp8C = temp_f12 * 0.5f;
                temp_f2_2 = (random_float(temp_f12) * 500.0f) + 600.0f;
                spBC = temp_f2_2;
                spC0 = temp_f2_2 * 0.5f;
                func_1514373C(2.0f * (random_float() * D_800A245C), (f32) (*(f32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x4))) + 0x6)), &spC4, &spCC);
                spC4 += (f32) (*(f32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x4))) + 0x0));
                spCC += (f32) (*(f32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x4))) + 0x4));
                temp_v0 = (*(s32 *)((char *)(temp_s0) + 0x4));
                spC8 = (random_float() * (f32) (*(f32 *)((char *)(temp_v0) + 0x8))) + (f32) (*(f32 *)((char *)(temp_v0) + 0x2));
                var_v0 = 0;
                if (random_u32() & 1) {
                    var_v0 = 0x40;
                }
                spEC = var_v0 | 0xC000;
                spAF = (random_u32() & 0x7F) + 0x80;
                temp_v0_2 = func_15130280(&sp94, 2, 0, 0x14, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                if (temp_v0_2 != 0) {
                    memcpy(temp_v0_2 + 0xA8, &sp80, 0x14);
                }
                (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) - 1.0f);
            } while ((*(s32 *)((char *)(arg0) + 0x28)) > 1.0f);
            return;
        }
        do {
            (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) - 1.0f);
        } while ((*(s32 *)((char *)(arg0) + 0x28)) > 1.0f);
    }
}

s32 func_15108658(void *arg0, void * arg1) {
    void *sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    void *var_v0;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0xA8));
    var_v0 = (char *)(arg0) + 0xA8;
    temp_f2 = (*(s32 *)((char *)(arg0) + 0xAC)) - temp_f0;
    if ((temp_f0 < (*(s32 *)((char *)(arg0) + 0xB4))) || (temp_f2 < (*(s32 *)((char *)(var_v0) + 0xC)))) {
        (*(s32 *)((char *)(arg0) + 0x1C)) = 0;
        var_v0 = (char *)(arg0) + 0xA8;
    } else {
        temp_f0_2 = (*(s32 *)((char *)(var_v0) + 0x8));
        if (((*(s32 *)((char *)(arg0) + 0xA8)) < temp_f0_2) || (temp_f2 < temp_f0_2)) {
            (*(s32 *)((char *)(arg0) + 0x1C)) = 0x10000;
        } else {
            (*(s32 *)((char *)(arg0) + 0x1C)) = 0x20000;
        }
    }
    temp_f0_3 = (*(s32 *)((char *)(var_v0) + 0x10));
    if (temp_f0_3 != 0.0f) {
        if ((temp_f0_3 < D_800A2460) || ((11.0f - temp_f0_3) < D_800A2460)) {
            (*(s32 *)((char *)(arg0) + 0x1C)) = 0;
            (*(s32 *)((char *)(arg0) + 0x74)) = -1;
        } else {
            (*(s32 *)((char *)(arg0) + 0x74)) = 3;
        }
        (*(f32 *)((char *)(var_v0) + 0x10)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x10)) - D_800BE9A4);
        if ((*(s32 *)((char *)(var_v0) + 0x10)) < 0.0f) {
            (*(s32 *)((char *)(var_v0) + 0x10)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0x74)) = -1;
        }
        goto block_19;
    }
    (*(f32 *)((char *)(var_v0) + 0x0)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x0)) - D_800BE9A4);
    if ((*(s32 *)((char *)(var_v0) + 0x0)) < 0.0f) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x1C)) == 0x20000) {
        sp18 = var_v0;
        if (random_float() < D_800A2464) {
            (*(s32 *)((char *)(var_v0) + 0x10)) = 11.0f;
        }
    }
block_19:
    return 1;
}

void func_151087FC(s32 arg0, void * arg1, s32 arg2) {
    s32 temp_t6;
    void *temp_v0;
    void *temp_v0_2;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2B) {
        temp_v0 = arg0 + 0x28;
        (*(u8 *)((char *)(temp_v0) + 0x8)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x8)) | 1);
        return;
    }
    temp_v0_2 = arg0 + 0x28;
    if (temp_t6 == 0x2C) {
        (*(u8 *)((char *)(temp_v0_2) + 0x8)) = (u8) ((*(u8 *)((char *)(temp_v0_2) + 0x8)) & 0xFFFE);
    }
}
