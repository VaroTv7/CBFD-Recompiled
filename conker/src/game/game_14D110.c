/**
 * Auto-decompiled from asm/14D110.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150495B0(); /* extern */
void * func_1510E7A4(); /* extern */
void * func_15123A54();                            /* extern */
void * func_1512E140();                            /* extern */
void * func_151C9BA0();                /* extern */
void * func_151C9ED4();                       /* extern */
void func_151216F8();     /* static */
void func_151218C4();               /* static */
extern f32 D_800A3380;
extern f32 D_800A3384;
extern f32 D_800A3388;
extern f32 D_800A338C;
extern f32 D_800A3390;
extern f32 D_800A3394;
extern f32 D_800A3398;
extern f32 D_800A339C;
extern f32 D_800A33A0;
extern f32 D_800A33A4;
extern f32 D_800A33A8;
extern f32 D_800A33AC;
extern f32 D_800A33B0;
extern f32 D_800A33B4;
extern f32 D_800A33B8;
extern f32 D_800A33BC;
extern f32 D_800A33C0;
extern f32 D_800A33C4;
extern void *D_800A33C8;
extern void *D_800A33CC;
extern f32 D_800A33D0;
extern f32 D_800A33D4;
extern f32 D_800A33D8;
extern f32 D_800A33DC;
extern f32 D_800A33E0;
extern f32 D_800A33E4;
extern f32 D_800A33E8;
extern f32 D_800A33EC;
extern f32 D_800A33F0;
extern f32 D_800A33F4;
extern f32 D_800A33F8;
extern f32 D_800A33FC;
extern f32 D_800A3400;
extern f32 D_800A3404;
extern f32 D_800A3408;
extern f32 D_800A340C;
extern f32 D_800A3410;
extern f32 D_800A3414;
extern f32 D_800A3418;

void func_1511FC60(void *arg0) {
    void *sp20;
    void *sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f2;
    u8 temp_v0;
    u8 temp_v0_2;
    void *var_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x23E));
    (*(s32 *)((char *)(arg0) + 0x84A)) = 0x3C;
    if (((*(s32 *)((char *)(arg0) + 0x5F0)) & 2) || (temp_v0 == 9) || (temp_v0 == 0x38) || (temp_v0 == 0x39) || (temp_v0 == 0x37) || (var_v1 = (char *)(arg0) + 0x740, (temp_v0 == 0x3B))) {
        var_v1 = (char *)(arg0) + 0x740;
        (*(s32 *)((char *)(var_v1) + 0x4D)) = 0;
        (*(s32 *)((char *)(var_v1) + 0x4D)) = 1;
    } else {
        (*(s32 *)((char *)(var_v1) + 0x4D)) = 1;
    }
    (*(s32 *)((char *)(arg0) + 0x84C)) = 0;
    if ((*(s32 *)((char *)(arg0) + 0x34)) == 0x40) {
        (*(f32 *)((char *)(var_v1) + 0x34)) = (f32) (*(f32 *)((char *)(arg0) + 0x37C));
    } else if ((*(s32 *)((char *)(var_v1) + 0x4D)) != 0) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x23E));
        if ((temp_v0_2 == 9) || (temp_v0_2 == 0x38) || (temp_v0_2 == 0x39) || (temp_v0_2 == 0x37) || (temp_v0_2 == 0x3B) || (temp_v0_2 == 0x15) || (temp_v0_2 == 0x26) || (temp_v0_2 == 0x3A)) {
            (*(f32 *)((char *)(var_v1) + 0x34)) = (f32) ((f32) (((*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x7A)) - (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x12))) + 0xC000) * 0.005493164f);
        } else if ((D_800D1940 == 0x42) && (temp_v0 == 0x1A)) {
            (*(f32 *)((char *)(var_v1) + 0x34)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40));
        } else {
            (*(f32 *)((char *)(var_v1) + 0x34)) = (f32) ((*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40)) - 180.0f);
        }
    } else {
        (*(f32 *)((char *)(var_v1) + 0x34)) = (f32) (*(f32 *)((char *)(arg0) + 0x37C));
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & ~0x280);
    }
    if ((temp_v0 == 9) || (temp_v0 == 0x38) || (temp_v0 == 0x39) || (temp_v0 == 0x37) || (temp_v0 == 0x3B) || (temp_v0 == 0x15) || (temp_v0 == 0x26) || (temp_v0 == 0x3A)) {
        (*(s32 *)((char *)(var_v1) + 0x38)) = 0.0f;
        (*(s32 *)((char *)(var_v1) + 0x3C)) = 0.0f;
        sp20 = (void *) temp_v0;
        sp1C = var_v1;
        func_151C9BA0(arg0, temp_v0, arg0);
        (*(s32 *)((char *)(arg0) + 0x84C)) = 1;
    } else {
        if ((temp_v0 == 2) || (temp_v0 == 0x13)) {
            (*(s32 *)((char *)(var_v1) + 0x38)) = 0.0f;
            goto block_43;
        }
        if (temp_v0 != 0x1C) {
            if (temp_v0 == 0x34) {
                (*(s32 *)((char *)(var_v1) + 0x38)) = 0.0f;
                goto block_43;
            }
            if (temp_v0 == 0xF) {
                (*(s32 *)((char *)(var_v1) + 0x38)) = 27.0f;
                (*(s32 *)((char *)(var_v1) + 0x3C)) = 27.0f;
                (*(f32 *)((char *)(var_v1) + 0x34)) = (f32) ((*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40)) + 225.0f);
            } else {
                (*(s32 *)((char *)(var_v1) + 0x38)) = 0.0f;
block_43:
                (*(s32 *)((char *)(var_v1) + 0x3C)) = 0.0f;
            }
        }
    }
    sp1C = var_v1;
    sp20 = (void *) temp_v0;
    func_151216F8(arg0, (void *) temp_v0, arg0);
    func_15048758((char *)(var_v1) + 0x34);
    if ((*(s32 *)((char *)(var_v1) + 0x4C)) != 0) {
        temp_f0 = (*(s32 *)((char *)(var_v1) + 0x50));
        (*(s32 *)((char *)(var_v1) + 0x38)) = temp_f0;
        (*(s32 *)((char *)(var_v1) + 0x3C)) = temp_f0;
        (*(f32 *)((char *)(var_v1) + 0x44)) = (f32) (*(f32 *)((char *)(var_v1) + 0x58));
        (*(f32 *)((char *)(var_v1) + 0x34)) = (f32) ((*(f32 *)((char *)(var_v1) + 0x34)) + (*(f32 *)((char *)(var_v1) + 0x54)));
    }
    (*(f32 *)((char *)(var_v1) + 0x20)) = (f32) (*(f32 *)((char *)(arg0) + 0x37C));
    (*(f32 *)((char *)(var_v1) + 0x2C)) = (f32) (*(f32 *)((char *)(arg0) + 0x134));
    if ((*(s32 *)((char *)(arg0) + 0x92C)) != 0) {
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x2BC)) - (*(s32 *)((char *)(arg0) + 0x2F8));
        temp_f12 = (*(s32 *)((char *)(arg0) + 0x2C4)) - (*(s32 *)((char *)(arg0) + 0x300));
        (*(s32 *)((char *)(var_v1) + 0x24)) = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
        (*(f32 *)((char *)(var_v1) + 0x28)) = (f32) (*(f32 *)((char *)(arg0) + 0x344));
        (*(f32 *)((char *)(var_v1) + 0x30)) = (f32) (*(f32 *)((char *)(arg0) + 0x354));
    } else {
        (*(f32 *)((char *)(var_v1) + 0x24)) = (f32) (*(f32 *)((char *)(arg0) + 0x374));
        (*(f32 *)((char *)(var_v1) + 0x28)) = (f32) (*(f32 *)((char *)(arg0) + 0x348));
        (*(f32 *)((char *)(var_v1) + 0x30)) = (f32) (*(f32 *)((char *)(arg0) + 0x354));
    }
    temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x2C0));
    (*(s32 *)((char *)(arg0) + 0x35C)) = temp_f0_2;
    (*(s32 *)((char *)(arg0) + 0x354)) = temp_f0_2;
    (*(s32 *)((char *)(var_v1) + 0x44)) = 110.0f;
    (*(s32 *)((char *)(arg0) + 0x348)) = 30.0f;
    (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x16C)) = (f32) (*(f32 *)((char *)(var_v1) + 0x34));
    if ((temp_v0 == 0) || (temp_v0 == 0xC) || (temp_v0 == 9) || (temp_v0 == 0x38) || (temp_v0 == 0x39) || (temp_v0 == 0x37) || (temp_v0 == 0x3B) || (temp_v0 == 0x15) || (temp_v0 == 0x26) || (temp_v0 == 0x3A)) {
        (*(f32 *)((char *)(arg0) + 0x348)) = (f32) ((*(f32 *)((char *)(arg0) + 0x348)) + 30.0f);
    }
    (*(s32 *)((char *)(var_v1) + 0x64)) = 0;
    (*(s32 *)((char *)(arg0) + 0x73C)) = 1;
    if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
        (*(f32 *)((char *)(var_v1) + 0x34)) = (f32) ((*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40)) - 180.0f);
        (*(f32 *)((char *)(arg0) + 0x37C)) = (f32) (*(f32 *)((char *)(var_v1) + 0x34));
        (*(f32 *)((char *)(arg0) + 0x194)) = (f32) (*(f32 *)((char *)(arg0) + 0x198));
        (*(f32 *)((char *)(arg0) + 0x18C)) = (f32) (*(f32 *)((char *)(arg0) + 0x190));
        (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A3380);
    }
    temp_f0_3 = (*(s32 *)((char *)(var_v1) + 0x44));
    if (temp_f0_3 < (*(s32 *)((char *)(arg0) + 0x370))) {
        (*(s32 *)((char *)(var_v1) + 0x4E)) = -1;
        (*(f32 *)((char *)(var_v1) + 0x48)) = (f32) (temp_f0_3 * D_800A3384);
    } else {
        (*(s32 *)((char *)(var_v1) + 0x4E)) = 1;
        (*(f32 *)((char *)(var_v1) + 0x48)) = (f32) (temp_f0_3 * D_800A3388);
    }
    if ((temp_v0 == 0xA) || (temp_v0 == 2) || (temp_v0 == 0x12) || (temp_v0 == 3) || (temp_v0 == 0x34)) {
        (*(s32 *)((char *)(var_v1) + 0x4E)) = -1;
        (*(f32 *)((char *)(var_v1) + 0x48)) = (f32) (*(f32 *)((char *)(arg0) + 0x374));
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & ~0x280);
    (*(f32 *)((char *)(arg0) + 0x374)) = (f32) (*(f32 *)((char *)(var_v1) + 0x44));
}

void func_15120158(void *arg0) {
    f32 spA8;
    f32 spA4;
    s32 spA0;
    s32 sp9C;
    s32 sp94;
    f32 sp88;
    f32 sp80;
    f32 sp70;
    f32 sp68;
    f32 sp64;
    s32 sp60;
    void *sp54;
    s32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f6;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_v0_4;
    s8 var_v0_3;
    u16 temp_t7;
    u8 temp_v0;
    u8 temp_v0_6;
    void *temp_t0;
    void *temp_t2;
    void *temp_t5;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_t0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x23E));
    var_t1 = D_800D1940 == 0x42;
    if (var_t1 != 0) {
        var_t1 = temp_v0 == 0x1A;
    }
    sp9C = var_t1;
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x2FC));
    sp60 = var_t1;
    spA0 = (s32) temp_v0;
    func_1510E7A4(0, 0, &spA8, (char *)(arg0) + 0x360, 0, 0, (*(s32 *)((char *)(arg0) + 0x2F8)), temp_f0, (*(s32 *)((char *)(arg0) + 0x300)), temp_f0, 0, 0, D_800A338C, temp_f0);
    (*(s8 *)((char *)((*(s8 *)((char *)(arg0) + 0x3D4))) + 0x198)) = (s8) (*(s8 *)((char *)(arg0) + 0x73C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x2F8)) - (*(s32 *)((char *)(arg0) + 0x2BC));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x300)) - (*(s32 *)((char *)(arg0) + 0x2C4));
    (*(s32 *)((char *)(arg0) + 0x370)) = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x770)) = spA8;
    }
    temp_t0 = (char *)(arg0) + 0x740;
    if ((spA0 != 0x2A) && ((*(s32 *)((char *)(arg0) + 0x73C)) != 3)) {
        if (spA0 == 0xD) {
            (*(s32 *)((char *)(arg0) + 0x190)) = 100.0f;
        } else if (spA0 == 3) {
            (*(s32 *)((char *)(temp_t0) + 0x38)) = 15.0f;
            (*(s32 *)((char *)(arg0) + 0x198)) = 0.0f;
            (*(s32 *)((char *)(temp_t0) + 0x44)) = 350.0f;
            if ((*(s32 *)((char *)(arg0) + 0x600)) != 0) {
                (*(f32 *)((char *)(temp_t0) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_t0) + 0x3C)) * ((*(f32 *)((char *)(arg0) + 0x604)) * D_800A3390));
                temp_f12_2 = (*(s32 *)((char *)(temp_t0) + 0x3C));
                if (temp_f12_2 < 0.0f) {
                    (*(s32 *)((char *)(temp_t0) + 0x3C)) = 0.0f;
                } else {
                    (*(s32 *)((char *)(temp_t0) + 0x3C)) = temp_f12_2;
                }
            }
        } else if (sp60 != 0) {
            (*(s32 *)((char *)(arg0) + 0x190)) = 18.0f;
            (*(s32 *)((char *)(arg0) + 0x198)) = 60.0f;
            (*(s32 *)((char *)(temp_t0) + 0x44)) = 250.0f;
            (*(f32 *)((char *)(temp_t0) + 0x34)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40));
        } else if (spA0 == 0x1A) {
            (*(s32 *)((char *)(arg0) + 0x190)) = 35.0f;
            (*(s32 *)((char *)(arg0) + 0x198)) = 100.0f;
            (*(s32 *)((char *)(temp_t0) + 0x44)) = 250.0f;
        } else {
            (*(s32 *)((char *)(arg0) + 0x190)) = 20.0f;
            (*(s32 *)((char *)(arg0) + 0x198)) = 0.0f;
            sp54 = temp_t0;
            func_151216F8((*(void **)&temp_f12), arg0);
        }
    }
    temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x2C0));
    (*(s32 *)((char *)(arg0) + 0x354)) = temp_f2_2;
    (*(s32 *)((char *)(arg0) + 0x35C)) = temp_f2_2;
    sp54 = temp_t0;
    func_1506160C((*(s32 *)((char *)(arg0) + 0x3D0)), 2, 0xFF, 0x20, (s32) (*(s32 *)((char *)(arg0) + 0x23D)));
    var_t0 = temp_t0;
    spA4 = (*(s32 *)((char *)(var_t0) + 0x44));
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x73C));
    if (temp_v0_2 == 1) {
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x84A));
        if (temp_v0_3 != 0) {
            (*(s16 *)((char *)(arg0) + 0x84A)) = (s16) (temp_v0_3 - D_800BE9E4);
            if ((*(s32 *)((char *)(arg0) + 0x84A)) <= 0) {
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x198)) = 1;
                (*(s32 *)((char *)(arg0) + 0x73C)) = 2;
                (*(f32 *)((char *)(var_t0) + 0x34)) = (f32) (*(f32 *)((char *)(arg0) + 0x37C));
                return;
            }
        }
        (*(s32 *)((char *)(arg0) + 0x134)) = 1;
        sp54 = var_t0;
        sp94 = (s32) (cosf((*(s32 *)((char *)(var_t0) + 0x3C)) * D_800A3394) * spA4);
        temp_f0_2 = sinf((*(s32 *)((char *)(var_t0) + 0x3C)) * D_800A3398);
        (*(f32 *)((char *)(arg0) + 0x374)) = (f32) sp94;
        (*(f32 *)((char *)(arg0) + 0x348)) = (f32) (s32) (temp_f0_2 * spA4);
        if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
            if (sp60 != 0) {
                (*(f32 *)((char *)(var_t0) + 0x34)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40));
            } else {
                (*(f32 *)((char *)(var_t0) + 0x34)) = (f32) ((*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40)) - 180.0f);
            }
            (*(f32 *)((char *)(arg0) + 0x37C)) = (f32) (*(f32 *)((char *)(var_t0) + 0x34));
            (*(f32 *)((char *)(arg0) + 0x194)) = (f32) (*(f32 *)((char *)(arg0) + 0x198));
            (*(f32 *)((char *)(arg0) + 0x18C)) = (f32) (*(f32 *)((char *)(arg0) + 0x190));
            (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A339C);
        }
        if ((*(s32 *)((char *)(var_t0) + 0x4D)) != 0) {
            sp54 = var_t0;
            temp_f0_3 = fabsf(func_15048A70((*(s32 *)((char *)(arg0) + 0x37C)), (*(s32 *)((char *)(var_t0) + 0x34))));
            if (temp_f0_3 < D_800A33A0) {

            }
            if ((*(s32 *)((char *)(var_t0) + 0x4E)) == -1) {
                var_v0 = 0;
                if ((*(s32 *)((char *)(arg0) + 0x370)) < (*(s32 *)((char *)(var_t0) + 0x48))) {
                    var_v0 = 1;
                }
            } else {
                var_v0 = 0;
                if ((*(s32 *)((char *)(var_t0) + 0x48)) < (*(s32 *)((char *)(arg0) + 0x370))) {
                    var_v0 = 1;
                }
            }
            if ((var_v0 != 0) || ((*(s32 *)((char *)(var_t0) + 0x4C)) != 0)) {
                if ((*(s32 *)((char *)(arg0) + 0x600)) != 0) {
                    sp54 = var_t0;
                    func_15049688((char *)(arg0) + 0x37C, (*(s32 *)((char *)(var_t0) + 0x34)), (char *)(var_t0) + 0x18, 0x41200000, 18.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
                } else {
                    sp54 = var_t0;
                    func_15049688((char *)(arg0) + 0x37C, (*(s32 *)((char *)(var_t0) + 0x34)), (char *)(var_t0) + 0x18, 0x40A00000, 9.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
                }
                func_150495B0((char *)(arg0) + 0x194, (*(s32 *)((char *)(arg0) + 0x198)), (char *)(arg0) + 0x7D0, 5.0f, 0x41100000, (*(s32 *)((char *)(arg0) + 0x7B4)));
                func_150495B0((char *)(arg0) + 0x18C, (*(s32 *)((char *)(arg0) + 0x190)), (char *)(arg0) + 0x7D4, 5.0f, 0x41100000, (*(s32 *)((char *)(arg0) + 0x7B4)));
                var_t0 = sp54;
                (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A33A4);
            }
        } else {
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x198)) = 1;
            (*(s32 *)((char *)(arg0) + 0x73C)) = 2;
        }
        goto block_194;
    }
    if (temp_v0_2 == 2) {
        if (spA0 != 0) {
            var_f0 = D_800A33A8;
        } else {
            var_f0 = D_800A33AC;
        }
        if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
            if (sp60 != 0) {
                (*(f32 *)((char *)(var_t0) + 0x34)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40));
            } else {
                (*(f32 *)((char *)(var_t0) + 0x34)) = (f32) ((*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40)) - 180.0f);
            }
            (*(f32 *)((char *)(arg0) + 0x37C)) = (f32) (*(f32 *)((char *)(var_t0) + 0x34));
            (*(f32 *)((char *)(arg0) + 0x194)) = (f32) (*(f32 *)((char *)(arg0) + 0x198));
            (*(f32 *)((char *)(arg0) + 0x18C)) = (f32) (*(f32 *)((char *)(arg0) + 0x190));
            (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A33B0);
        }
        if ((spA0 == 9) || (spA0 == 0x38) || (spA0 == 0x39) || (spA0 == 0x37) || (spA0 == 0x3B) || (spA0 == 0x15) || (spA0 == 0x26) || (spA0 == 0x3A)) {
            if ((*(s32 *)((char *)(arg0) + 0x84C)) == 0) {
                sp54 = var_t0;
                sp80 = var_f0;
                func_151C9BA0(arg0, (u8) spA0);
                (*(s32 *)((char *)(arg0) + 0x84C)) = 1U;
            }
        } else if ((*(s32 *)((char *)(arg0) + 0x84C)) != 0) {
            sp54 = var_t0;
            sp80 = var_f0;
            func_151C9ED4(arg0, spA0);
            (*(s32 *)((char *)(arg0) + 0x84C)) = 0U;
        }
        if (spA0 != 0xD) {
            if ((*(s32 *)((char *)(var_t0) + 0x4D)) == 0) {
                if ((*(s32 *)((char *)(arg0) + 0x3E8)) != 0) {
                    (*(s32 *)((char *)(var_t0) + 0x64)) = 0;
                } else {
                    temp_v1 = (*(s32 *)((char *)(var_t0) + 0x64));
                    if (temp_v1 == 0) {
                        temp_v0_4 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x36C))) + 0x2));
                        if (temp_v0_4 > 0) {
                            var_t1_2 = 1;
                        } else {
                            if (temp_v0_4 < 0) {
                                var_v0_2 = 2;
                            } else {
                                var_v0_2 = 0;
                            }
                            var_t1_2 = var_v0_2;
                        }
                        (*(s32 *)((char *)(var_t0) + 0x64)) = (s32) (temp_v1 | var_t1_2);
                    }
                    (*(f32 *)((char *)(arg0) + 0x2F8)) = (f32) (*(f32 *)((char *)(arg0) + 0x304));
                    (*(s32 *)((char *)(arg0) + 0x2FC)) = (s32) (*(s32 *)((char *)(arg0) + 0x308));
                    (*(f32 *)((char *)(arg0) + 0x300)) = (f32) (*(f32 *)((char *)(arg0) + 0x30C));
                    temp_v1_2 = (*(s32 *)((char *)(var_t0) + 0x64));
                    if (temp_v1_2 & 1) {
                        temp_v1_3 = (*(s32 *)((char *)(arg0) + 0x36C));
                        var_v0_3 = (*(s32 *)((char *)(temp_v1_3) + 0x2));
                        if (var_v0_3 > 0) {
                            (*(s32 *)((char *)(temp_v1_3) + 0x2)) = 0;
                        } else {
                            goto block_83;
                        }
                    } else if (temp_v1_2 & 2) {
                        temp_v1_4 = (*(s32 *)((char *)(arg0) + 0x36C));
                        var_v0_3 = (*(s32 *)((char *)(temp_v1_4) + 0x2));
                        if (var_v0_3 < 0) {
                            (*(s32 *)((char *)(temp_v1_4) + 0x2)) = 0;
                        } else {
block_83:
                            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x36C))) + 0x2)) = var_v0_3;
                        }
                    }
                }
            }
            if ((spA0 == 9) || (spA0 == 0x38) || (spA0 == 0x39) || (spA0 == 0x37) || (spA0 == 0x3B) || (spA0 == 0x15) || (spA0 == 0x26) || (spA0 == 0x3A)) {
                (*(f32 *)((char *)(var_t0) + 0x34)) = (f32) ((f32) (((*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x7A)) - (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x12))) + 0xC000) * 0.005493164f);
            } else if (sp9C != 0) {
                (*(f32 *)((char *)(var_t0) + 0x34)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40));
            } else if (spA0 != 0xF) {
                if ((*(s32 *)((char *)(arg0) + 0x5F0)) & 2) {
                    temp_t7 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x7A));
                    var_f6 = (f32) temp_t7;
                    if ((s32) temp_t7 < 0) {
                        var_f6 += 4294967296.0f;
                    }
                    (*(f32 *)((char *)(var_t0) + 0x34)) = (f32) (((var_f6 - ((f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x12)) * D_800A33B4)) + 49152.0f) * 0.005493164f);
                } else {
                    if (spA0 == 0x34) {
                        (*(f32 *)((char *)(var_t0) + 0x34)) = (f32) ((*(f32 *)((char *)(var_t0) + 0x34)) - ((f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x36C))) + 0x2)) * var_f0 * (f32) D_800BE9E4));
                    }
                    (*(f32 *)((char *)(var_t0) + 0x34)) = (f32) ((*(f32 *)((char *)(var_t0) + 0x34)) - ((f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x36C))) + 0x2)) * var_f0 * (f32) D_800BE9E4));
                }
            }
            if ((spA0 != 3) && (spA0 != 0x1A) && (sp9C == 0) && (spA0 != 0xF)) {
                (*(f32 *)((char *)(var_t0) + 0x38)) = (f32) ((*(f32 *)((char *)(var_t0) + 0x38)) + ((f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x36C))) + 0x3)) * var_f0 * (f32) D_800BE9E4));
            }
            if (spA0 == 0x38) {
                if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x36C))) + 0x0)) & 0x2000) {
                    var_f0_2 = (*(f32 *)((char *)(arg0) + 0x8B4)) - ((f32) ((s32) (*(f32 *)((char *)((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x31C))) + 0x1A2)) >> 8) * D_800A33B8);
                } else {
                    var_f0_2 = 0.0f;
                }
                (*(f32 *)((char *)(var_t0) + 0x38)) = (f32) ((*(f32 *)((char *)(var_t0) + 0x38)) + var_f0_2);
                (*(f32 *)((char *)(arg0) + 0x8B4)) = (f32) ((f32) ((s32) (*(f32 *)((char *)((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x31C))) + 0x1A2)) >> 8) * D_800A33BC);
            }
            sp54 = var_t0;
            func_15048758((char *)(var_t0) + 0x34, spA0);
            if (spA0 == 0x34) {
                var_f2 = -5.0f;
                temp_f0_4 = (*(s32 *)((char *)(var_t0) + 0x38));
                if (temp_f0_4 < -5.0f) {

                } else if (temp_f0_4 > 15.0f) {
                    var_f2 = 15.0f;
                } else {
                    var_f2 = temp_f0_4;
                }
            } else if (spA0 == 0x12) {
                var_f2 = -40.0f;
                temp_f0_5 = (*(s32 *)((char *)(var_t0) + 0x38));
                if (temp_f0_5 < -40.0f) {

                } else if (temp_f0_5 > 15.0f) {
                    var_f2 = 15.0f;
                } else {
                    var_f2 = temp_f0_5;
                }
            } else if ((spA0 == 2) || (spA0 == 0xA) || (spA0 == 0x13)) {
                var_f2 = -37.0f;
                temp_f0_6 = (*(s32 *)((char *)(var_t0) + 0x38));
                if (temp_f0_6 < -37.0f) {

                } else if (temp_f0_6 > 30.0f) {
                    var_f2 = 30.0f;
                } else {
                    var_f2 = temp_f0_6;
                }
            } else {
                var_f2 = -45.0f;
                temp_f0_7 = (*(s32 *)((char *)(var_t0) + 0x38));
                if (temp_f0_7 < -45.0f) {

                } else if (temp_f0_7 > 80.0f) {
                    var_f2 = 80.0f;
                } else {
                    var_f2 = temp_f0_7;
                }
            }
            (*(s32 *)((char *)(var_t0) + 0x38)) = var_f2;
            if ((D_800BE616 == 0) && ((spA0 == 9) || (spA0 == 0x38) || (spA0 == 0x39) || (spA0 == 0x37) || (spA0 == 0x3B) || (spA0 == 0x15) || (spA0 == 0x26) || (spA0 == 0x3A))) {
                temp_f0_8 = (*(s32 *)((char *)(var_t0) + 0x38));
                if (temp_f0_8 < -20.0f) {
                    (*(s32 *)((char *)(var_t0) + 0x38)) = -20.0f;
                } else {
                    (*(s32 *)((char *)(var_t0) + 0x38)) = temp_f0_8;
                }
            }
            if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
                (*(f32 *)((char *)(arg0) + 0x37C)) = (f32) (*(f32 *)((char *)(var_t0) + 0x34));
                (*(f32 *)((char *)(var_t0) + 0x3C)) = (f32) (*(f32 *)((char *)(var_t0) + 0x38));
                (*(f32 *)((char *)(arg0) + 0x194)) = (f32) (*(f32 *)((char *)(arg0) + 0x198));
                (*(f32 *)((char *)(arg0) + 0x18C)) = (f32) (*(f32 *)((char *)(arg0) + 0x190));
            } else {
                if ((spA0 != 0) || (sp9C != 0)) {
                    sp54 = var_t0;
                    func_15049688((char *)(arg0) + 0x37C, (*(s32 *)((char *)(var_t0) + 0x34)), (char *)(var_t0) + 0x18, 0x407A3D71, D_800A33C0, (*(s32 *)((char *)(arg0) + 0x7B4)));
                    func_15049688((char *)(var_t0) + 0x3C, (*(s32 *)((char *)(var_t0) + 0x38)), (char *)(var_t0) + 0x1C, 0x407A3D71, D_800A33C4, (*(s32 *)((char *)(arg0) + 0x7B4)));
                    func_150495B0((char *)(arg0) + 0x194, (*(s32 *)((char *)(arg0) + 0x198)), (char *)(arg0) + 0x7D0, 3.91f, D_800A33C8, (*(s32 *)((char *)(arg0) + 0x7B4)));
                    func_150495B0((char *)(arg0) + 0x18C, (*(s32 *)((char *)(arg0) + 0x190)), (char *)(arg0) + 0x7D4, 3.91f, D_800A33CC, (*(s32 *)((char *)(arg0) + 0x7B4)));
                } else {
                    sp54 = var_t0;
                    func_15049688((char *)(arg0) + 0x37C, (*(s32 *)((char *)(var_t0) + 0x34)), (char *)(var_t0) + 0x18, 0x4089999A, D_800A33D0, (*(s32 *)((char *)(arg0) + 0x7B4)));
                    func_15049688((char *)(var_t0) + 0x3C, (*(s32 *)((char *)(var_t0) + 0x38)), (char *)(var_t0) + 0x1C, 0x4089999A, D_800A33D4, (*(s32 *)((char *)(arg0) + 0x7B4)));
                }
                var_t0 = sp54;
            }
        }
        (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x16C)) = (f32) (*(f32 *)((char *)(arg0) + 0x37C));
        (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x170)) = (f32) (*(f32 *)((char *)(var_t0) + 0x3C));
        temp_t2 = (*(s32 *)((char *)(arg0) + 0x3D4));
        (*(f32 *)((char *)(temp_t2) + 0x148)) = (f32) (*(f32 *)((char *)(arg0) + 0x2BC));
        (*(f32 *)((char *)(temp_t2) + 0x14C)) = (f32) (*(f32 *)((char *)(arg0) + 0x2C0));
        (*(f32 *)((char *)(temp_t2) + 0x150)) = (f32) (*(f32 *)((char *)(arg0) + 0x2C4));
        temp_t5 = (*(s32 *)((char *)(arg0) + 0x3D4));
        (*(f32 *)((char *)(temp_t5) + 0x13C)) = (f32) (*(f32 *)((char *)(arg0) + 0x2F8));
        (*(s32 *)((char *)(temp_t5) + 0x140)) = (s32) (*(s32 *)((char *)(arg0) + 0x2FC));
        (*(f32 *)((char *)(temp_t5) + 0x144)) = (f32) (*(f32 *)((char *)(arg0) + 0x300));
        var_f0_3 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x170));
        if (var_f0_3 > 180.0f) {
            do {
                (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x170)) = (f32) (var_f0_3 - 360.0f);
                var_f0_3 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x170));
            } while (var_f0_3 > 180.0f);
        }
        if (var_f0_3 < -180.0f) {
            do {
                (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x170)) = (f32) (var_f0_3 + 360.0f);
                var_f0_3 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x170));
            } while (var_f0_3 < -180.0f);
        }
        sp54 = var_t0;
        sp88 = cosf((*(s32 *)((char *)(var_t0) + 0x3C)) * D_800A33D8) * spA4;
        temp_f0_9 = sinf((*(s32 *)((char *)(var_t0) + 0x3C)) * D_800A33DC);
        (*(s32 *)((char *)(arg0) + 0x374)) = sp88;
        (*(f32 *)((char *)(arg0) + 0x348)) = (f32) (temp_f0_9 * spA4);
        (*(f32 *)((char *)(var_t0) + 0x0)) = (f32) ((sinf(((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A33E0) + D_800A33E4) * spA4) + (*(f32 *)((char *)(arg0) + 0x2BC)));
        (*(f32 *)((char *)(var_t0) + 0x4)) = (f32) ((sinf(((*(f32 *)((char *)(var_t0) + 0x3C)) * D_800A33E8) + D_800A33EC) * spA4) + (*(f32 *)((char *)(arg0) + 0x2C0)));
        temp_f12_3 = (*(s32 *)((char *)(var_t0) + 0x3C));
        (*(f32 *)((char *)(var_t0) + 0x8)) = (f32) ((cosf(((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A33F0) + D_800A33F4) * spA4) + (*(f32 *)((char *)(arg0) + 0x2C4)));
        if (temp_f12_3 >= 180.0f) {
            (*(f32 *)((char *)(var_t0) + 0x40)) = (f32) (temp_f12_3 - 360.0f);
        } else {
            (*(s32 *)((char *)(var_t0) + 0x40)) = temp_f12_3;
        }
        sp54 = var_t0;
        func_151218C4(temp_f12_3, arg0);
        goto block_194;
    }
    if (temp_v0_2 == 3) {
        sp54 = var_t0;
        temp_f0_10 = func_15048A70((*(s32 *)((char *)(arg0) + 0x37C)), (*(s32 *)((char *)(var_t0) + 0x20)));
        temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x84A));
        temp_f0_11 = fabsf(temp_f0_10);
        (*(s32 *)((char *)(arg0) + 0x134)) = (s32) (*(s32 *)((char *)(arg0) + 0x13C));
        if (temp_v0_5 != 0) {
            (*(s16 *)((char *)(arg0) + 0x84A)) = (s16) (temp_v0_5 - D_800BE9E4);
            if ((*(s32 *)((char *)(arg0) + 0x84A)) <= 0) {
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x198)) = 0;
                (*(s32 *)((char *)(arg0) + 0x73C)) = 0;
                return;
            }
        }
        if (((*(s32 *)((char *)(arg0) + 0x84)) & 0x200000) || (temp_v0_6 = (*(s32 *)((char *)(arg0) + 0x23E)), (temp_v0_6 == 9)) || (temp_v0_6 == 0x38) || (temp_v0_6 == 0x39) || (temp_v0_6 == 0x37) || (temp_v0_6 == 0x3B) || (temp_v0_6 == 0x15) || (temp_v0_6 == 0x26) || (temp_v0_6 == 0x3A)) {
            (*(s32 *)((char *)(var_t0) + 0x4D)) = 0U;
        }
        if (((*(s32 *)((char *)(var_t0) + 0x4D)) == 0) || (temp_f0_11 < 45.0f)) {
            (*(f32 *)((char *)(arg0) + 0x374)) = (f32) (*(f32 *)((char *)(var_t0) + 0x24));
            (*(f32 *)((char *)(arg0) + 0x348)) = (f32) (*(f32 *)((char *)(var_t0) + 0x28));
            if (((*(s32 *)((char *)(arg0) + 0x5F0)) & 0x40) || ((*(s32 *)((char *)(arg0) + 0x360)) != 0.0f)) {
                (*(f32 *)((char *)(arg0) + 0x35C)) = (f32) (*(f32 *)((char *)(var_t0) + 0x30));
                (*(f32 *)((char *)(arg0) + 0x354)) = (f32) (*(f32 *)((char *)(var_t0) + 0x30));
            } else {
                temp_v0_7 = (*(s32 *)((char *)(arg0) + 0x3D0));
                (*(f32 *)((char *)(arg0) + 0x35C)) = (f32) (*(f32 *)((char *)(temp_v0_7) + 0x180));
                (*(f32 *)((char *)(arg0) + 0x354)) = (f32) (*(f32 *)((char *)(temp_v0_7) + 0x180));
            }
        }
        if (((*(s32 *)((char *)(var_t0) + 0x4D)) == 0) || (temp_f0_11 < D_800A33F8)) {
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x198)) = 0;
            (*(s32 *)((char *)(arg0) + 0x73C)) = 0;
        } else {
            sp54 = var_t0;
            func_15049688((char *)(arg0) + 0x37C, (*(s32 *)((char *)(var_t0) + 0x20)), (char *)(var_t0) + 0x18, 0x40A00000, 9.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
        }
        goto block_194;
    }
block_194:
    (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A33FC);
    if (((spA0 == 2) || (spA0 == 0x13) || (spA0 == 0x12) || (spA0 == 0xA) || (spA0 == 0x34)) && (spA0 != 0xD)) {
        if ((*(s32 *)((char *)(arg0) + 0x5F0)) & 2) {
            var_f2_2 = (*(s32 *)((char *)(var_t0) + 0x34)) * -3.0f;
        } else {
            var_f2_2 = -35.0f;
        }
        sp64 = var_f2_2;
        sp54 = var_t0;
        temp_f14 = sinf((*(s32 *)((char *)(arg0) + 0x39C)) - D_800A3400) * var_f2_2;
        sp68 = temp_f14;
        temp_f12_4 = cosf((*(s32 *)((char *)(arg0) + 0x39C)) - D_800A3404) * var_f2_2;
        if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
            (*(s32 *)((char *)(var_t0) + 0xC)) = temp_f14;
            (*(s32 *)((char *)(var_t0) + 0x14)) = temp_f12_4;
            (*(s32 *)((char *)(var_t0) + 0x5C)) = 0.0f;
        } else {
            sp70 = temp_f12_4;
            sp54 = var_t0;
            func_150495B0((*(void **)&temp_f12_4), temp_f14, (char *)(var_t0) + 0xC, temp_f14, (char *)(var_t0) + 0x5C, 4.0f, 9.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
            func_150495B0((char *)(var_t0) + 0x14, temp_f12_4, (char *)(var_t0) + 0x60, 4.0f, 0x41100000, (*(s32 *)((char *)(arg0) + 0x7B4)));
        }
    } else {
        sp54 = var_t0;
        func_150495B0((char *)(var_t0) + 0xC, 0.0f, (char *)(var_t0) + 0x5C, 4.0f, 0x41100000, (*(s32 *)((char *)(arg0) + 0x7B4)));
        func_150495B0((char *)(var_t0) + 0x14, 0.0f, (char *)(var_t0) + 0x60, 4.0f, 0x41100000, (*(s32 *)((char *)(arg0) + 0x7B4)));
    }
    temp_v0_8 = (*(s32 *)((char *)(arg0) + 0x3D4));
    (*(f32 *)((char *)(temp_v0_8) + 0x148)) = (f32) ((*(f32 *)((char *)(temp_v0_8) + 0x148)) + (*(f32 *)((char *)(var_t0) + 0xC)));
    temp_v0_9 = (*(s32 *)((char *)(arg0) + 0x3D4));
    (*(f32 *)((char *)(temp_v0_9) + 0x150)) = (f32) ((*(f32 *)((char *)(temp_v0_9) + 0x150)) + (*(f32 *)((char *)(var_t0) + 0x14)));
    temp_v0_10 = (*(s32 *)((char *)(arg0) + 0x3D4));
    (*(f32 *)((char *)(temp_v0_10) + 0x13C)) = (f32) ((*(f32 *)((char *)(temp_v0_10) + 0x13C)) + (*(f32 *)((char *)(var_t0) + 0xC)));
    temp_v0_11 = (*(s32 *)((char *)(arg0) + 0x3D4));
    (*(f32 *)((char *)(temp_v0_11) + 0x144)) = (f32) ((*(f32 *)((char *)(temp_v0_11) + 0x144)) + (*(f32 *)((char *)(var_t0) + 0x14)));
    temp_v0_12 = (*(s32 *)((char *)(arg0) + 0x3D4));
    func_150491EC((char *)(temp_v0_12) + 0x13C, (char *)(temp_v0_12) + 0x148, (char *)(temp_v0_12) + 0x130);
    func_15123A54(arg0);
    func_1512E140(arg0);
    func_15125594(arg0);
}

void func_15121490(void *arg0, u16 *arg1) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f6;
    f32 temp_f6_2;
    u8 temp_v0;
    void *temp_v1;

    f32 sp40;
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x198)) = 0;
    if ((*arg1 & 0x10) && ((temp_v1 = (*(s32 *)((char *)(arg0) + 0x31C)), temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x78)), (temp_v0 == 9)) || (temp_v0 == 0x38) || (temp_v0 == 0x39) || (temp_v0 == 0x37) || (temp_v0 == 0x3B) || (temp_v0 == 0x15) || (temp_v0 == 0x26) || (temp_v0 == 0x3A))) {
        sp44 = (*(s32 *)((char *)(arg0) + 0x14));
        temp_f12 = ((*(s32 *)((char *)(arg0) + 0x40)) - 90.0f) * D_800A3408;
        sp48 = (*(f32 *)((char *)(arg0) + 0x18)) + ((f32) (*(f32 *)((char *)(temp_v1) + 0x114)) * 0.75f);
        sp4C = (*(s32 *)((char *)(arg0) + 0x1C));
        (*(s32 *)((char *)&(sp38) + 0x0)) = (*(s32 *)((char *)&(sp44) + 0x0));
        (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)&(sp44) + 0x4));
        (*(s32 *)((char *)&(sp38) + 0x8)) = (s32) (*(s32 *)((char *)&(sp44) + 0x8));
        sp34 = temp_f12;
        temp_f6 = sinf(temp_f12) * 100.0f;
        sp48 = sp3C;
        sp44 = temp_f6 + sp38;
        sp4C = (cosf(temp_f12) * 100.0f) + sp40;
        sp3C += (*(s32 *)((char *)(arg0) + 0x18)) - (*(s32 *)((char *)(arg0) + 0x30));
        (*(f32 *)((char *)(temp_v1) + 0x13C)) = (f32) (*(f32 *)((char *)&(sp38) + 0x0));
        (*(s32 *)((char *)(temp_v1) + 0x140)) = (s32) (*(s32 *)((char *)&(sp38) + 0x4));
        (*(s32 *)((char *)(temp_v1) + 0x144)) = (s32) (*(s32 *)((char *)&(sp38) + 0x8));
        (*(f32 *)((char *)(temp_v1) + 0x148)) = (f32) (*(f32 *)((char *)&(sp44) + 0x0));
        (*(s32 *)((char *)(temp_v1) + 0x14C)) = (s32) (*(s32 *)((char *)&(sp44) + 0x4));
        (*(s32 *)((char *)(temp_v1) + 0x198)) = 1;
        (*(s32 *)((char *)(temp_v1) + 0x150)) = (s32) (*(s32 *)((char *)&(sp44) + 0x8));
        sp28 = 1.0f;
        sp24 = cosf((*(f32 *)((char *)(temp_v1) + 0x170)) * D_800A340C) * sp28;
        temp_f16 = sinf((*(s32 *)((char *)(temp_v1) + 0x170)) * D_800A3410) * sp28;
        sp28 = sp24;
        sp2C = temp_f16;
        sp24 = cosf((*(s32 *)((char *)(temp_v1) + 0x16C)) * D_800A3414) * sp28;
        temp_f6_2 = sinf((*(s32 *)((char *)(temp_v1) + 0x16C)) * D_800A3418) * sp28;
        sp28 = sp24;
        sp30 = temp_f6_2;
        (*(f32 *)((char *)(temp_v1) + 0x130)) = (f32) (*(f32 *)((char *)&(sp28) + 0x0));
        (*(s32 *)((char *)(temp_v1) + 0x134)) = (s32) (*(s32 *)((char *)&(sp28) + 0x4));
        (*(s32 *)((char *)(temp_v1) + 0x138)) = (s32) (*(s32 *)((char *)&(sp28) + 0x8));
    }
}

void func_151216F8(void *arg0) {
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x23E));
    if (temp_v0 != 0) {
        if (temp_v0 == 0x34) {
            (*(s32 *)((char *)(arg0) + 0x190)) = 80.0f;
            (*(s32 *)((char *)(arg0) + 0x784)) = 350.0f;
            return;
        }
        if ((temp_v0 == 0x3B) && ((D_800BE9F0 == 0x41) || (D_800BE9F0 == 0x3C))) {
            (*(s32 *)((char *)(arg0) + 0x190)) = -12.0f;
            (*(s32 *)((char *)(arg0) + 0x99C)) = -28.0f;
            (*(s32 *)((char *)(arg0) + 0x784)) = 106.0f;
            return;
        }
        if ((temp_v0 == 2) || (temp_v0 == 0xA) || (temp_v0 == 0x13)) {
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80);
            (*(s32 *)((char *)(arg0) + 0x190)) = 10.0f;
            (*(s32 *)((char *)(arg0) + 0x784)) = 135.0f;
            (*(s32 *)((char *)(arg0) + 0x99C)) = 0.0f;
            return;
        }
        if ((temp_v0 == 0x12) && (D_800BE9F0 == 0x3C)) {
            (*(s32 *)((char *)(arg0) + 0x190)) = 10.0f;
            (*(s32 *)((char *)(arg0) + 0x784)) = 180.0f;
            (*(s32 *)((char *)(arg0) + 0x99C)) = 0.0f;
            return;
        }
        if (temp_v0 == 0xF) {
            (*(s32 *)((char *)(arg0) + 0x190)) = 10.0f;
            (*(s32 *)((char *)(arg0) + 0x784)) = 480.0f;
            (*(s32 *)((char *)(arg0) + 0x99C)) = 0.0f;
            return;
        }
        if (temp_v0 == 0x38) {
            (*(s32 *)((char *)(arg0) + 0x784)) = 110.0f;
            (*(s32 *)((char *)(arg0) + 0x190)) = 5.0f;
            (*(s32 *)((char *)(arg0) + 0x99C)) = 0.0f;
            return;
        }
        if (temp_v0 == 0x15) {
            (*(s32 *)((char *)(arg0) + 0x784)) = 110.0f;
            (*(s32 *)((char *)(arg0) + 0x190)) = 25.0f;
            (*(s32 *)((char *)(arg0) + 0x99C)) = 0.0f;
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x190)) = 5.0f;
        (*(s32 *)((char *)(arg0) + 0x784)) = 75.0f;
        (*(s32 *)((char *)(arg0) + 0x99C)) = 0.0f;
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x784)) = 90.0f;
    (*(s32 *)((char *)(arg0) + 0x190)) = 25.0f;
    (*(s32 *)((char *)(arg0) + 0x99C)) = 0.0f;
}

void func_151218C4(void *arg0) {
    void *temp_v0;

    if (!((*(s32 *)((*(s32 *)((char *)(arg0) + 0x36C)))) & 0x10)) {
        if ((*(s32 *)((char *)(arg0) + 0x34)) == 0x40) {
            if ((*(s32 *)((char *)(arg0) + 0x6FC)) == 0xF) {
                (*(s32 *)((char *)(arg0) + 0x898)) = 0.0f;
                (*(s32 *)((char *)(arg0) + 0x89C)) = 0.0f;
            }
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x198)) = 0;
            (*(s32 *)((char *)(arg0) + 0x73C)) = 0;
            (*(s32 *)((char *)(arg0) + 0x84A)) = 0x3C;
        } else {
            (*(s32 *)((char *)(arg0) + 0x84A)) = 0x3C;
            (*(s32 *)((char *)(arg0) + 0x73C)) = 3;
        }
        temp_v0 = (char *)(arg0) + 0x740;
        (*(s32 *)((char *)(arg0) + 0x374)) = 200.0f;
        (*(s32 *)((char *)(arg0) + 0x348)) = 100.0f;
        (*(s32 *)((char *)(arg0) + 0x134)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x2C));
        (*(s32 *)((char *)(temp_v0) + 0x4C)) = 0;
        (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x99C)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x198)) = 0.0f;
        func_1506160C((*(s32 *)((char *)(arg0) + 0x3D0)), 2, 0xFF, 0x20, (s32) (*(s32 *)((char *)(arg0) + 0x23D)));
        if ((*(s32 *)((char *)(arg0) + 0x84C)) != 0) {
            func_151C9ED4(arg0);
            (*(s32 *)((char *)(arg0) + 0x84C)) = 0U;
        }
    }
}
