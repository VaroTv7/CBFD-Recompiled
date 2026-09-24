/**
 * Auto-decompiled from asm/FA360.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960(); /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                          /* extern */
void * func_151436B4();             /* extern */
void * func_1514373C();                /* extern */
void * func_15152874();                     /* extern */
void * func_151D5D60();        /* extern */
void * memcpy();                              /* extern */
extern s32 D_80088870;
extern s32 D_80088874;
extern f32 D_800A0710;
extern f32 D_800A0714;
extern f32 D_800A0718;
extern f32 D_800A071C;
extern f32 D_800A0720;
extern f32 D_800A0724;
extern f32 D_800A0728;
extern f32 D_800A072C;
extern f32 D_800A0730;
extern f32 D_800A0734;
extern f32 D_800A0738;
extern f32 D_800A073C;
extern f32 D_800A0740;
extern f32 D_800A0744;
extern f32 D_800A0748;
extern f32 D_800A074C;
extern f32 D_800A0750;
extern f32 D_800A0754;
extern f32 D_800A0758;
extern f32 D_800A075C;
extern f64 D_800A0760;
extern f64 D_800A0768;
extern f32 D_800A0770;
extern f32 D_800A0774;
extern f32 D_800A0778;
extern f32 D_800A077C;
extern f32 D_800A0780;
extern f32 D_800A0784;
extern f32 D_800A0788;
extern f32 D_800A078C;
extern f32 D_800A0790;
extern f32 D_800A0794;
extern f32 D_800A0798;
extern f32 D_800A079C;
extern f32 D_800A07A0;
extern f32 D_800A07A4;

s32 func_150CCEB0(void *arg0, s32 arg1, s32 arg2) {
    s32 spCC;
    s8 spBB;
    s8 spBA;
    s8 spB9;
    u8 spB8;
    s32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    void * sp90;
    void * sp88;
    s8 sp87;
    u8 sp86;
    u8 sp85;
    u8 sp84;
    s32 sp80;
    s32 sp7C;
    s16 sp78;
    s16 sp76;
    s8 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    void * sp34;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_v0;
    s32 var_v1;

    sp74 = 0x57;
    sp76 = 0x2D03;
    sp7C = 0;
    sp80 = 0;
    sp78 = (s16) (*(s16 *)((char *)(arg0) + 0x24));
    sp84 = (*(s32 *)((char *)(arg0) + 0x20));
    sp85 = (*(s32 *)((char *)(arg0) + 0x21));
    sp87 = 0xFF;
    sp86 = (*(s32 *)((char *)(arg0) + 0x22));
    (*(s32 *)((char *)&(sp88) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x28));
    (*(s32 *)((char *)&(sp88) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x2C));
    (*(s32 *)((char *)&(sp90) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp9C = random_float() * 360.0f;
    spA0 = random_float() * 360.0f;
    temp_f18 = random_float() * 360.0f;
    spB4 = 0xC03E1;
    spA8 = 0.0f;
    spAC = 0.0f;
    spB0 = 0.0f;
    spA4 = temp_f18;
    spB9 = 0xFF;
    spBA = 0;
    spBB = 6;
    spB8 = (*(s32 *)((char *)(arg0) + 0x23));
    (*(s32 *)((char *)&(sp34) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0xC));
    (*(s32 *)((char *)&(sp34) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x10));
    (*(s32 *)((char *)&(sp34) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
    sp70 = (*(s32 *)((char *)(arg0) + 0x30));
    sp44 = (*(s32 *)((char *)(arg0) + 0x18));
    sp40 = (*(s32 *)((char *)(arg0) + 0x1C));
    sp48 = ((random_float(arg0) * D_800A0710) + D_800A0714) * D_800A0718;
    sp4C = ((random_float() * D_800A071C) + D_800A0720) * D_800A0724;
    temp_f16 = random_float() * D_800A0728;
    sp58 = 0.0f;
    sp50 = (temp_f16 + D_800A072C) * D_800A0730;
    sp5C = ((random_float() * 206.0f) + 58.0f) * D_800A0734;
    temp_f18_2 = random_float() * 360.0f;
    sp64 = 0.0f;
    sp60 = temp_f18_2;
    sp68 = random_float() * D_800A0738 * D_800A073C;
    sp6C = ((random_float() * D_800A0740) + D_800A0744) * D_800A0748;
    temp_v0 = func_1513D524(&sp74, 0x13, 0x1E, 0, 0x11, 0, 0x40, (s32) arg1, (s32) arg2);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        spCC = temp_v0;
        memcpy(temp_v0 + 0x110, &sp34, 0x40);
        var_v1 = spCC;
    }
    return var_v1;
}

s32 func_150CD17C(f32 arg1, void *arg0) {
    void *sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f14;
    f32 var_f16;
    f32 var_f16_2;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f18_3;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    void *temp_s0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    s32 var_a0;

    var_f14 = arg1;
    var_a0 = arg0;
    temp_s0 = var_a0;
    temp_f2 = (*(s32 *)((char *)(temp_s0) + 0x114));
    temp_f12 = (*(s32 *)((char *)(temp_s0) + 0x11C));
    (*(f32 *)((char *)(temp_s0) + 0x34)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x34)) + ((*(f32 *)((char *)(temp_s0) + 0x110)) * D_800BE9A4));
    (*(f32 *)((char *)(temp_s0) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x38)) + ((temp_f2 * D_800BE9A4) + (0.5f * temp_f12 * D_800BE9A4 * D_800BE9A4)));
    (*(f32 *)((char *)(temp_s0) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x3C)) + ((*(f32 *)((char *)(temp_s0) + 0x118)) * D_800BE9A4));
    (*(f32 *)((char *)(temp_s0) + 0x114)) = (f32) (temp_f2 + (temp_f12 * D_800BE9A4));
    var_v0 = D_800BE9E4;
    var_a1 = var_v0 & 3;
    if (var_v0 != 0) {
        var_a1 = -var_a1;
        var_a0 = var_a1 + var_v0;
        if (var_a1 != 0) {
            temp_v1 = (char *)(temp_s0) + 0x110;
            temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x10));
            var_f14 = (*(s32 *)((char *)(temp_s0) + 0x110));
            var_v0 -= 1;
            var_f18 = var_f14 * temp_f0;
            var_f16 = (*(s32 *)((char *)(temp_v1) + 0x8)) * temp_f0;
            if (var_a0 != var_v0) {
                do {
                    (*(s32 *)((char *)(temp_s0) + 0x110)) = var_f18;
                    var_f14 = (*(s32 *)((char *)(temp_s0) + 0x110));
                    (*(s32 *)((char *)(temp_v1) + 0x8)) = var_f16;
                    var_f18 = var_f14 * temp_f0;
                    var_v0 -= 1;
                    var_f16 = (*(s32 *)((char *)(temp_v1) + 0x8)) * temp_f0;
                } while (var_a0 != var_v0);
            }
            (*(s32 *)((char *)(temp_s0) + 0x110)) = var_f18;
            (*(s32 *)((char *)(temp_v1) + 0x8)) = var_f16;
            if (var_v0 != 0) {
                goto block_5;
            }
        } else {
block_5:
            temp_v1_2 = (char *)(temp_s0) + 0x110;
            temp_f0_2 = (*(s32 *)((char *)(temp_v1_2) + 0x10));
            var_v0_2 = var_v0 - 4;
            var_f16_2 = (*(s32 *)((char *)(temp_s0) + 0x110)) * temp_f0_2;
            if (var_v0_2 != 0) {
                do {
                    (*(s32 *)((char *)(temp_s0) + 0x110)) = var_f16_2;
                    var_v0_2 -= 4;
                    (*(f32 *)((char *)(temp_v1_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x8)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_s0) + 0x110)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x110)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x8)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_s0) + 0x110)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x110)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_v1_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x8)) * temp_f0_2);
                    (*(f32 *)((char *)(temp_s0) + 0x110)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x110)) * temp_f0_2);
                    var_f16_2 = (*(s32 *)((char *)(temp_s0) + 0x110)) * temp_f0_2;
                    (*(f32 *)((char *)(temp_v1_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x8)) * temp_f0_2);
                } while (var_v0_2 != 0);
            }
            (*(s32 *)((char *)(temp_s0) + 0x110)) = var_f16_2;
            (*(f32 *)((char *)(temp_v1_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x8)) * temp_f0_2);
            (*(f32 *)((char *)(temp_s0) + 0x110)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x110)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x8)) * temp_f0_2);
            (*(f32 *)((char *)(temp_s0) + 0x110)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x110)) * temp_f0_2);
            (*(f32 *)((char *)(temp_v1_2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x8)) * temp_f0_2);
            var_f14 = (*(s32 *)((char *)(temp_v1_2) + 0x8)) * temp_f0_2;
            (*(f32 *)((char *)(temp_s0) + 0x110)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x110)) * temp_f0_2);
            (*(s32 *)((char *)(temp_v1_2) + 0x8)) = var_f14;
        }
    }
    temp_v1_3 = (char *)(temp_s0) + 0x110;
    if ((*(s32 *)((char *)(temp_v1_3) + 0x4)) > 0.0f) {
        var_v0_3 = D_800BE9E4;
        var_a1 = var_v0_3 & 3;
        if (var_v0_3 != 0) {
            var_a1 = -var_a1;
            temp_f0_3 = (*(s32 *)((char *)(temp_v1_3) + 0x10));
            if (var_a1 != 0) {
                var_a0 = var_a1 + var_v0_3;
                var_f14 = (*(s32 *)((char *)(temp_v1_3) + 0x4));
                var_v0_3 -= 1;
                var_f18_2 = var_f14 * temp_f0_3;
                if (var_a0 != var_v0_3) {
                    do {
                        (*(s32 *)((char *)(temp_v1_3) + 0x4)) = var_f18_2;
                        var_f14 = (*(s32 *)((char *)(temp_v1_3) + 0x4));
                        var_v0_3 -= 1;
                        var_f18_2 = var_f14 * temp_f0_3;
                    } while (var_a0 != var_v0_3);
                }
                (*(s32 *)((char *)(temp_v1_3) + 0x4)) = var_f18_2;
                if (var_v0_3 != 0) {
                    goto block_14;
                }
            } else {
block_14:
                var_v0_4 = var_v0_3 - 4;
                var_f18_3 = (*(s32 *)((char *)(temp_v1_3) + 0x4)) * temp_f0_3;
                if (var_v0_4 != 0) {
                    do {
                        (*(s32 *)((char *)(temp_v1_3) + 0x4)) = var_f18_3;
                        var_v0_4 -= 4;
                        (*(f32 *)((char *)(temp_v1_3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x4)) * temp_f0_3);
                        (*(f32 *)((char *)(temp_v1_3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x4)) * temp_f0_3);
                        (*(f32 *)((char *)(temp_v1_3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x4)) * temp_f0_3);
                        var_f18_3 = (*(s32 *)((char *)(temp_v1_3) + 0x4)) * temp_f0_3;
                    } while (var_v0_4 != 0);
                }
                (*(s32 *)((char *)(temp_v1_3) + 0x4)) = var_f18_3;
                (*(f32 *)((char *)(temp_v1_3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x4)) * temp_f0_3);
                (*(f32 *)((char *)(temp_v1_3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x4)) * temp_f0_3);
                var_f14 = (*(s32 *)((char *)(temp_v1_3) + 0x4)) * temp_f0_3;
                (*(s32 *)((char *)(temp_v1_3) + 0x4)) = var_f14;
            }
        }
    }
    temp_f2_2 = (*(s32 *)((char *)(temp_v1_3) + 0x3C));
    if ((*(s32 *)((char *)(temp_v1_3) + 0x4)) < temp_f2_2) {
        (*(s32 *)((char *)(temp_v1_3) + 0x4)) = temp_f2_2;
    }
    if ((*(s32 *)((char *)(temp_v1_3) + 0x4)) < 0.0f) {
        sp20 = temp_v1_3;
        func_151436B4((*(s32 *)((char *)(temp_v1_3) + 0x2C)), ((*(s32 *)((char *)(temp_v1_3) + 0x38)) * sinf((*(s32 *)((char *)(temp_v1_3) + 0x30)))) + D_800A074C, (*(s32 *)((char *)(temp_v1_3) + 0x24)), (char *)(temp_s0) + 0x4C);
        (*(f32 *)((char *)(temp_v1_3) + 0x24)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x24)) + ((*(f32 *)((char *)(temp_v1_3) + 0x28)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_v1_3) + 0x30)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x30)) + ((*(f32 *)((char *)(temp_v1_3) + 0x34)) * D_800BE9A4));
        if (D_800A0750 < (*(s32 *)((char *)(temp_v1_3) + 0x30))) {
            do {
                (*(f32 *)((char *)(temp_v1_3) + 0x30)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x30)) - D_800A0750);
            } while (D_800A0750 < (*(s32 *)((char *)(temp_v1_3) + 0x30)));
        }
        if ((*(s32 *)((char *)(temp_v1_3) + 0x30)) < 0.0f) {
            do {
                (*(f32 *)((char *)(temp_v1_3) + 0x30)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x30)) + D_800A0750);
            } while ((*(s32 *)((char *)(temp_v1_3) + 0x30)) < 0.0f);
        }
    }
    (*(f32 *)((char *)(temp_s0) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x40)) + (*(f32 *)((char *)(temp_v1_3) + 0x14)));
    (*(f32 *)((char *)(temp_s0) + 0x44)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x44)) + (*(f32 *)((char *)(temp_v1_3) + 0x18)));
    (*(f32 *)((char *)(temp_s0) + 0x48)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x48)) + (*(f32 *)((char *)(temp_v1_3) + 0x1C)));
    return 1;
}

void *func_150CD59C(void *arg0, s32 arg1) {
    void *spD0;
    void *spCC;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    void * sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    u8 sp5A;
    void * *temp_s2;
    s32 temp_t6;
    s32 var_s0;
    void *temp_s1;
    void *temp_s1_2;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &spD0, &sp5A);
    spCC = spD0;
    if (spD0 != NULL) {
        if (sp5A != 0) {
            temp_s1 = (char *)(arg0) + (arg1 * 4);
            temp_s2 = (char *)(arg0) + 0xC0;
            memcpy((*(s32 *)((char *)(temp_s1) + 0x100)), temp_s2, 0x40);
            memcpy((*(s32 *)((char *)(temp_s1) + 0x100)) + 0x40, temp_s2, 0x40);
        }
        sp5C = (*(s32 *)((char *)(arg0) + 0x2C));
        sp64 = 0.0f;
        sp60 = (*(s32 *)((char *)(arg0) + 0x30));
        sp68 = -(*(s32 *)((char *)(arg0) + 0x2C));
        sp70 = 0.0f;
        sp6C = (*(s32 *)((char *)(arg0) + 0x30));
        sp74 = -(*(s32 *)((char *)(arg0) + 0x2C));
        sp7C = 0.0f;
        sp78 = -(*(s32 *)((char *)(arg0) + 0x30));
        sp80 = (*(s32 *)((char *)(arg0) + 0x2C));
        sp88 = 0.0f;
        sp84 = -(*(s32 *)((char *)(arg0) + 0x30));
        func_150A8050(&sp8C, (*(f32 *)((char *)(arg0) + 0x40)), (*(f32 *)((char *)(arg0) + 0x44)), (*(f32 *)((char *)(arg0) + 0x48)));
        spBC = (*(s32 *)((char *)(arg0) + 0x34));
        spC0 = (*(s32 *)((char *)(arg0) + 0x38));
        spC4 = (*(s32 *)((char *)(arg0) + 0x3C));
        if ((*(s32 *)((char *)(arg0) + 0x114)) < 0.0f) {
            spBC += (*(s32 *)((char *)(arg0) + 0x4C));
            spC0 += (*(s32 *)((char *)(arg0) + 0x50));
            spC4 += (*(s32 *)((char *)(arg0) + 0x54));
        }
        var_s0 = 0;
        do {
            temp_s1_2 = &sp5C + (var_s0 * 0xC);
            func_150A7960(&sp8C, (*(s32 *)((char *)(temp_s1_2) + 0x0)), (*(s32 *)((char *)(temp_s1_2) + 0x4)), 0, temp_s1_2, (char *)(temp_s1_2) + 4, (char *)(temp_s1_2) + 8);
            (*(s16 *)((char *)(spD0) + 0x0)) = (s16) (s32) (*(s16 *)((char *)(temp_s1_2) + 0x0));
            temp_t6 = (var_s0 + 1) & 0xFF;
            (*(s16 *)((char *)(spD0) + 0x2)) = (s16) (s32) (*(s16 *)((char *)(temp_s1_2) + 0x4));
            (*(s16 *)((char *)(spD0) + 0x4)) = (s16) (s32) (*(s16 *)((char *)(temp_s1_2) + 0x8));
            (*(s32 *)((char *)(spD0) + 0x6)) = 0;
            spD0 = (char *)(spD0) + 0x10;
            var_s0 = temp_t6;
        } while (temp_t6 < 4);
        return spCC;
    }
    return NULL;
}

void func_150CD7F8(void *arg0) {
    s32 sp8C[64];
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    s16 spD4;
    s16 spD2;
    s8 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    void * spB0;
    f32 spAC;
    void * spA8;
    s32 spA4;
    s32 spA0;
    f32 temp_f0;
    f32 temp_f24;
    f32 var_f2;
    f64 temp_f26;
    f64 temp_f28;
    s32 temp_s0;

    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + (D_800A0754 * D_800BE9A4 * (*(f32 *)((char *)(arg0) + 0x2C))));
    if ((*(s32 *)((char *)(arg0) + 0x28)) > 1.0f) {
        temp_f28 = D_800A0760;
        temp_f26 = D_800A0768;
        spB8 = -0x17;
        spBA = 6;
        spD0 = 0;
        spC4 = D_800A0758;
        spE8 = D_800A075C;
        do {
            sp8C[0] = (*(s32 *)((char *)&(D_80088874) + 0x0));
            sp8C[1] = (s32) (*(s32 *)((char *)&(D_80088874) + 0x4));
            sp8C[2] = (s32) (*(s32 *)((char *)&(D_80088874) + 0x8));
            sp8C[3] = (s32) (*(s32 *)((char *)&(D_80088874) + 0xC));
            sp8C[4] = (s32) (*(s32 *)((char *)&(D_80088874) + 0x10));
            temp_s0 = (random_u32() % 5U) & 0xFF;
            temp_f24 = (random_float() * D_800A0770) + (&sp8C[0])[temp_s0];
            var_f2 = (*(s32 *)((char *)((D_800DBFF0 + (D_80082FA4 * 0x9A0))) + 0x380)) - 180.0f;
            if (var_f2 > 360.0f) {
                do {
                    var_f2 -= 360.0f;
                } while (var_f2 > 360.0f);
            }
            if (var_f2 < 0.0f) {
                do {
                    var_f2 += 360.0f;
                } while (var_f2 < 0.0f);
            }
            if (fabsf(temp_f24 - (var_f2 * D_800A0774)) < D_800A0778) {
                temp_f0 = random_float();
                spAC = (D_800A077C * temp_f0) + D_800A0780 + 500.0f;
                func_1514373C(temp_f24, (f32) (((f64) temp_f0 * temp_f26) + temp_f28), &spA8, &spB0);
                spA0 = 0xF;
                spA4 = 0x14;
                spB6 = 0xC;
                spD2 = 0x226;
                spD4 = 0;
                spDC = 15.0f;
                spD8 = 15.0f;
                spE4 = D_800A0784;
                spE0 = D_800A0784;
                spBC = D_800A0794;
                spC0 = D_800A0798;
                spC8 = D_800A079C;
                spCC = D_800A07A0;
                spB4 = (s16) (s32) (((temp_f24 + D_800A0788) - D_800A078C) * D_800A0790);
                func_15152874(&spA0, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
            }
            (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) - 1.0f);
        } while ((*(s32 *)((char *)(arg0) + 0x28)) > 1.0f);
    }
}

void func_150CDB6C(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 0x100) && (D_80088870 != 0)) {
        (*(f32 *)((char *)((D_80088870 + 0x28)) + 0x4)) = (f32) ((f32) arg0 * D_800A07A4);
    }
}
