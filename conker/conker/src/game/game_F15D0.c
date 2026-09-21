/**
 * Auto-decompiled from asm/F15D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void func_1504715C();                       /* extern */
u8 random_u32();                                 /* extern */
f32 random_float();                                /* extern */
s32 func_15130280();        /* extern */
void * func_15143134();              /* extern */
void * func_15143794();              /* extern */
s32 func_1514654C(); /* extern */
s32 func_1515C0F8();                    /* extern */
void * func_151C36D8();                     /* extern */
void * func_151D9014(); /* extern */
void * memcpy();                       /* extern */
extern s32 D_800A0340;
extern s32 D_800A0350;
extern s32 D_800A0374;
extern s32 D_800A0378;
extern s32 D_800A03A8;
extern f32 D_800A03AC;
extern f32 D_800A03B0;
extern f32 D_800A03B4;
extern f32 D_800A03B8;
extern f32 D_800A03BC;
extern f32 D_800A03C0;
extern f32 D_800A03C4;
extern f32 D_800A03C8;
extern f32 D_800A03CC;
extern f32 D_800A03D0;
extern f32 D_800A03D4;
extern f32 D_800A03D8;
extern f32 D_800A03DC;
extern f32 D_800A03E0;

void func_150C4120(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp;
    s32 spEC;
    s8 spEA;
    s16 spE8;
    f32 spE4;
    s32 spE0;
    f32 spDC;
    u8 spD8;
    void *spD4;
    f32 spC8;
    s16 spC4;
    s8 spC2;
    s8 spC1;
    s8 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s32 spB8;
    s32 spB4;
    f32 spB0;
    void * spA4;
    void * sp98;
    void * sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s8 sp79;
    s8 sp78;
    s8 sp77;
    s8 sp76;
    s8 sp75;
    s8 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s32 sp6C;
    s32 sp68;
    s16 sp66;
    s16 sp64;
    s32 sp60;
    s32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    s8 sp4F;
    s8 sp4E;
    u8 sp4D;
    u8 sp4C;
    void * sp3C;
    s32 sp34;
    void *sp30;
    s16 var_v1;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_2;
    void *temp_a0;

    spD4 = arg0;
    spDC = 0.0f;
    spE0 = 0;
    spE4 = 0.0f;
    spE8 = -1;
    spEA = 0;
    spEC = 0;
    spD8 = (*(s32 *)((char *)(arg0) + 0x3B));
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x34) {
        spE8 = 0x54;
        spEA = 1;
    }
    if (arg1 == -1) {
        var_v1 = 0x12C;
    } else {
        var_v1 = arg1;
    }
    if (arg1 == -1) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    temp_v0 = func_15149130(var_v1, -1, 0x53, -1, var_v0, 0x40, 0x1C, (s32) arg2, arg3);
    temp_a0 = temp_v0 + 0x28;
    if (temp_v0 != 0) {
        sp30 = temp_a0;
        memcpy(temp_a0, &spD4, 0x1C);
        (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A0340) + 0x0));
        (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A0340) + 0x4));
        (*(s32 *)((char *)&(sp3C) + 0xC)) = (s32) (*(s32 *)((char *)&(D_800A0340) + 0xC));
        (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A0340) + 0x8));
        sp4C = random_u32();
        sp4D = random_u32();
        sp88 = 700.0f;
        sp84 = 700.0f;
        sp50 = 700.0f;
        sp4E = (random_u32() % 6U) + 5;
        sp4F = (random_u32() % 6U) + 5;
        sp54 = ((random_float() * 0.25f) + D_800A03AC) * sp50;
        sp58 = ((random_float() * 0.25f) + D_800A03B0) * sp50;
        temp_t9 = (*(s32 *)((char *)(((char *)(sp) + ((random_u32() & 3) * 4))) + 0x3C));
        sp64 = 0x2203;
        sp5C = 0x200005;
        sp60 = 0;
        sp68 = 0;
        sp6C = 0;
        sp70 = 0;
        sp71 = 0;
        sp72 = 0;
        sp73 = 0xFF;
        sp74 = 0;
        sp75 = 0;
        sp76 = 0;
        sp77 = 0xFF;
        sp78 = 0xFF;
        sp79 = (s8) temp_t9;
        (*(s32 *)((char *)&(sp8C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp8C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp8C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        (*(s32 *)((char *)&(sp98) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp98) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp98) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        (*(s32 *)((char *)&(spA4) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(spA4) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(spA4) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        sp7E = 1;
        spB0 = 0.0f;
        sp80 = 1.0f;
        var_v1_2 = 0;
        if (random_u32() & 1) {
            var_v1_2 = 0x40;
        }
        sp34 = var_v1_2;
        if (random_u32() & 1) {
            var_v0_2 = 0x80;
        } else {
            var_v0_2 = 0;
        }
        spB4 = var_v0_2 | var_v1_2 | 0xC000;
        sp66 = 0x12C;
        sp7A = 1;
        sp7C = 0xFF;
        spBC = 6;
        spBD = 8;
        spC0 = -1;
        spBE = 0x26;
        spBF = -1;
        spC1 = 0;
        spB8 = 0;
        spC2 = 0xFF;
        spC4 = 0;
        spC8 = D_800A03B4;
        temp_v0_2 = func_15130280(&sp5C, 1, 0, 0x10, (s32) arg2, arg3);
        (*(s32 *)((char *)(sp30) + 0xC)) = temp_v0_2;
        if (temp_v0_2 != 0) {
            memcpy(temp_v0_2 + 0xA8, (void **) &sp4C, 0x10);
        }
    }
}

void func_150C44A4(void *arg0) {
    f32 sp104;
    f32 sp100;
    s32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    void * spC0;
    f32 *spBC;
    s32 *spB8;
    void * *spAC;
    f32 spA8;
    f32 spA0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f26;
    f32 var_f2;
    f32 var_f2_2;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_s1;
    s32 var_t9;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_s0_2;
    u8 temp_s0_3;
    u8 temp_s1;
    u8 temp_s1_2;
    void *temp_s0;
    void *temp_s3;
    void *temp_t3;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_6;

    temp_s0 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_s3 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_s0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s3) + 0x4)) != (*(s32 *)((char *)(temp_s0) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    if (((*(s32 *)((char *)(temp_s0) + 0x1D4)) == 0) || ((*(s32 *)((char *)(temp_s3) + 0x16)) & 2)) {
        temp_v0 = (*(s32 *)((char *)(temp_s3) + 0xC));
        if (temp_v0 != NULL) {
            (*(s32 *)((char *)(temp_v0) + 0x74)) = 3;
        }
    } else {
        func_1504715C(&spC0, temp_s0);
        if ((*(s32 *)((char *)(temp_s3) + 0x18)) == 0) {
            (*(s32 *)((char *)(temp_s3) + 0x18)) = func_10010154(0x96, temp_s0, 0x36B0, 0x190, 0x4268);
        }
        if ((*(s32 *)((char *)(temp_s3) + 0x16)) & 1) {
            temp_v0_2 = func_1503195C(temp_s0, (*(s32 *)((char *)(temp_s3) + 0x14)), 0);
            if (temp_v0_2 != 0) {
                if ((*(s32 *)((char *)(temp_s0) + 0x2EC)) != 0) {
                    var_f2 = (*(s32 *)((char *)(temp_s0) + 0x2DC)) * (*(s32 *)((char *)(temp_s0) + 0x2D8));
                } else {
                    var_f2 = 0.0f;
                }
                var_v1 = (s32) (var_f2 * 4.0f);
                if (var_v1 >= 4) {
                    var_v1 = 3;
                }
                temp_v0_3 = (var_v1 * 0xC) + &D_800A0378;
                temp_f0 = (var_f2 - ((f32) var_v1 * 0.25f)) * 4.0f;
                spBC = &spF0;
                spB8 = &spFC;
                spF0 = (*(s32 *)((char *)(temp_v0_3) + 0x0)) * temp_f0;
                spF4 = (*(s32 *)((char *)(temp_v0_3) + 0x4)) * temp_f0;
                spF8 = (*(s32 *)((char *)(temp_v0_3) + 0x8)) * temp_f0;
                if (func_1514654C(0x40800000, temp_s0, temp_v0_2, *(&D_800A03A8 + var_v1), &spBC, &spB8, 1) == 0) {
                    spFC = (*(s32 *)((char *)(temp_s0) + 0x14));
                    sp100 = (*(s32 *)((char *)(temp_s0) + 0x18)) + 800.0f;
                    sp104 = (*(s32 *)((char *)(temp_s0) + 0x1C));
                }
                goto block_25;
            }
        } else {
            temp_v0_4 = (*(s32 *)((char *)(temp_s0) + 0x2E8));
            if (temp_v0_4 != 0) {
                var_f2_2 = (f32) (*(f32 *)((char *)(temp_s0) + 0x2E4)) / (f32) temp_v0_4;
            } else {
                var_f2_2 = 1.0f;
            }
            var_v1_2 = (s32) (var_f2_2 * 3.0f);
            if (var_v1_2 >= 3) {
                var_v1_2 = 2;
            }
            temp_v0_5 = (var_v1_2 * 0xC) + &D_800A0350;
            temp_f0_2 = (var_f2_2 - ((f32) var_v1_2 * D_800A03B8)) * 3.0f;
            spF0 = (*(s32 *)((char *)(temp_v0_5) + 0x0)) * temp_f0_2;
            spF4 = (*(s32 *)((char *)(temp_v0_5) + 0x4)) * temp_f0_2;
            spF8 = (*(s32 *)((char *)(temp_v0_5) + 0x8)) * temp_f0_2;
            func_15143134(0x40400000, &spF0, &spFC, (*(&D_800A0374 + var_v1_2) << 6) + (*(s32 *)((char *)(temp_s0) + 0x1D4)));
block_25:
            temp_v0_6 = (*(s32 *)((char *)(temp_s3) + 0xC));
            if (temp_v0_6 != NULL) {
                (*(s32 *)((char *)(temp_v0_6) + 0x74)) = -1;
                temp_t3 = (*(s32 *)((char *)(temp_s3) + 0xC));
                (*(s32 *)((char *)(temp_t3) + 0x40)) = (s32) spFC;
                (*(s32 *)((char *)(temp_t3) + 0x44)) = (s32) (*(s32 *)((char *)&(spFC) + 0x4));
                (*(s32 *)((char *)(temp_t3) + 0x48)) = (s32) (*(s32 *)((char *)&(spFC) + 0x8));
            }
            var_s1 = 1;
            if ((D_800BE9F0 == 2) && (func_150A29C8((s32) ((char *)(temp_s0) - (char *)(&gObjects)) / 812, 0x4065) == 0)) {
                var_s1 = 0;
            }
            if (var_s1 != 0) {
                (*(f32 *)((char *)(temp_s3) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x8)) + ((D_800A03BC + (random_float() * D_800A03C0)) * D_800BE9A4));
                if ((*(s32 *)((char *)(temp_s3) + 0x8)) > 1.0f) {
                    do {
                        func_151C36D8(&spFC, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
                        (*(f32 *)((char *)(temp_s3) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x8)) - 1.0f);
                    } while ((*(s32 *)((char *)(temp_s3) + 0x8)) > 1.0f);
                }
            }
            (*(f32 *)((char *)(temp_s3) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x10)) + ((D_800A03C4 + (random_float() * D_800A03C8)) * D_800BE9A4));
            if ((*(s32 *)((char *)(temp_s3) + 0x10)) > 1.0f) {
                if (func_1515C0F8(temp_s0, &spAC) == 0) {
                    spAC = &D_800A5480;
                }
                temp_f26 = D_800A03CC;
                do {
                    temp_s1 = random_u32();
                    temp_s0_2 = random_u32();
                    func_15143794((s16) (temp_s1 & 0xFF), (s16) ((temp_s0_2 % 25U) - 0x40), (random_float() * D_800A03D0) + D_800A03D4, &spA0);
                    spA0 -= (*(s32 *)((char *)(spAC) + 0x0)) * temp_f26;
                    spA8 -= (*(s32 *)((char *)(spAC) + 0x8)) * temp_f26;
                    temp_f20 = random_float();
                    temp_s1_2 = random_u32();
                    temp_s0_3 = random_u32();
                    temp_f22 = random_float();
                    var_t9 = 0;
                    if (random_float() < D_800A03E0) {
                        var_t9 = 1;
                    }
                    func_151D9014(&spFC, &spA0, 0xC, (temp_f20 * D_800A03D8) + D_800A03DC, var_t9, 1.0f, 1.0f, 0, &spC0, 1, 1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                    (*(f32 *)((char *)(temp_s3) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x10)) - 1.0f);
                } while ((*(s32 *)((char *)(temp_s3) + 0x10)) > 1.0f);
            }
        }
    }
}

void func_150C4AD8(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x34)) != 0) {
        func_1516972C((*(s32 *)((char *)(arg0) + 0x34)), arg0);
    }
}

void func_150C4B08(void *arg0) {
    func_150C4AD8(arg0);
    func_1514933C(arg0);
}

void func_150C4B34(void *arg0) {
    func_150C4AD8(arg0);
    func_15149368(arg0);
}

void func_150C4B60(void *arg0, s32 arg1, s32 arg2) {
    void *temp_a2;

    if (arg2 == 0x55) {
        (*(s8 *)((char *)(((char *)(arg0) + 0x28)) + 0x16)) = (s8) ((*(s8 *)((char *)(arg0) + 0x3E)) & 0xFFFD);
        return;
    }
    if (arg2 == 0x56) {
        (*(s8 *)((char *)(((char *)(arg0) + 0x28)) + 0x16)) = (s8) ((*(s8 *)((char *)(arg0) + 0x3E)) | 2);
        return;
    }
    temp_a2 = (char *)(arg0) + 0x28;
    func_15149514(arg1, arg2, temp_a2, (char *)(temp_a2) + 4, arg0);
}
