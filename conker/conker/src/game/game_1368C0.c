/**
 * Auto-decompiled from asm/1368C0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960(); /* extern */
u32 random_u32();                             /* extern */
f32 random_float();                               /* extern */
void * func_1511490C();                          /* extern */
s32 func_15130374();            /* extern */
void * func_15132A4C();          /* extern */
void * func_15143134();       /* extern */
void * func_15145128();      /* extern */
void * func_15152B38();                     /* extern */
void * memcpy();                          /* extern */
extern s32 D_80088C60;
extern s32 D_80088C64;
extern s32 D_800A24B0;
extern s32 D_800A2504;
extern f32 D_800A251C;
extern s32 D_800A2520;
extern s32 D_800A2568;
extern s32 D_800A25BC;
extern s32 D_800A2604;
extern s32 D_800A2610;
extern s32 D_800A261C;
extern s32 D_800A2628;
extern f32 D_800A2634;
extern f32 D_800A2638;
extern f32 D_800A263C;
extern f32 D_800A2640;
extern f32 D_800A2644;
extern f32 D_800A2648;
extern f32 D_800A264C;
extern f32 D_800A2650;
extern f32 D_800A2654;
extern f32 D_800A2658;
extern f32 D_800A265C;
extern f32 D_800A2660;
extern f32 D_800A2664;
extern f32 D_800A2668;
extern f32 D_800A266C;
extern f32 D_800A2670;
extern f32 D_800A2674;
extern f32 D_800A2678;
extern f32 D_800A267C;
extern f32 D_800A2680;
extern f32 D_800A2684;
extern f32 D_800A2688;
extern void *D_800A268C;
extern f32 D_800A2690;
extern f32 D_800A2694;

s32 func_15109410(void *arg0, s16 arg1, s8 arg2, s8 arg3, f32 arg4, s32 arg5, u8 arg6, s32 arg7) {
    s32 sp4C;
    s8 sp49;
    s8 sp48;
    f32 sp44;
    f32 sp40;
    u8 sp3C;
    void *sp38;
    s16 var_a0;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    if (arg0 == NULL) {
        return 0;
    }
    var_v0 = 0;
    if (arg1 < 0) {
        var_a0 = 0x12C;
    } else {
        var_v0 = 1;
        var_a0 = arg1;
    }
    sp40 = 0.0f;
    sp44 = arg4;
    sp48 = arg2;
    sp49 = arg3;
    sp38 = arg0;
    sp3C = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_15149130(var_a0, -1, 0x1A, -1, var_v0, 0x1A, arg5 + 0x14, (s32) arg6, arg7);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp4C = temp_v0;
        memcpy(temp_v0 + 0x28, &sp38, 0x14);
        var_v1 = sp4C;
    }
    return var_v1;
}

void func_151094FC(void *arg0) {
    void *spC0;
    void * spB4;
    f32 spA8;
    f32 sp9C;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    void * *var_v0;
    f32 *temp_s2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f2;
    s32 temp_s3;
    s32 var_s0;
    s8 temp_v0_2;
    void *temp_s1;
    void *temp_s4;
    void *temp_v0;

    f32 sp94;
    f32 sp98;
    f32 spA0;
    f32 spA4;
    f32 spAC;
    f32 spB0;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_s4 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s4) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    (*(f32 *)((char *)(temp_s4) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x8)) + ((*(f32 *)((char *)(temp_s4) + 0xC)) * D_800A251C * D_800BE9A4));
    if (((*(s32 *)((char *)(temp_s4) + 0x11)) != -1) && ((*(s32 *)((char *)(temp_v0) + 0x1D4)) != 0)) {
        if ((*(s32 *)((char *)(temp_s4) + 0x8)) > 1.0f) {
            spC0 = temp_v0;
            do {
                var_s0 = 0;
                var_f2 = (*(s32 *)((char *)&(D_800A2504) + 0x18)) * random_float();
                var_v0 = &D_800A2504;
                if ((*(s32 *)((char *)&(D_800A2504) + 0x0)) < var_f2) {
                    var_f0 = (*(s32 *)((char *)&(D_800A2504) + 0x0));
                    do {
                        var_f2 -= var_f0;
                        var_f0 = (*(s32 *)((char *)(var_v0) + 0x4));
                        var_s0 += 1;
                        var_v0 = (char *)(var_v0) + 4;
                    } while (var_f0 < var_f2);
                }
                temp_f0 = random_float();
                temp_s3 = var_s0 * 0xC;
                temp_s1 = temp_s3 + &D_800A24B0;
                temp_f2 = (*(s32 *)((char *)(temp_s1) + 0x0));
                temp_f12 = (*(s32 *)((char *)(temp_s1) + 0x4));
                temp_f14 = (*(s32 *)((char *)(temp_s1) + 0x8));
                sp78 = (((*(s32 *)((char *)(temp_s1) + 0xC)) - temp_f2) * temp_f0) + temp_f2;
                sp7C = (((*(s32 *)((char *)(temp_s1) + 0x10)) - temp_f12) * temp_f0) + temp_f12;
                sp80 = (((*(s32 *)((char *)(temp_s1) + 0x14)) - temp_f14) * temp_f0) + temp_f14;
                temp_s2 = (*(s32 *)((char *)(spC0) + 0x1D4)) + 0x240;
                func_15143134(temp_f12, temp_f14, &sp78, &spB4, temp_s2);
                func_15143134((f32)(s32)(temp_s1), (f32)(s32)&spA8, temp_s2);
                func_15143134((f32)(s32)((char *)(temp_s1) + 0xC), (f32)(s32)&sp9C, temp_s2);
                func_15143134((f32)(s32)(temp_s3 + &D_800A2520), (f32)(s32)&sp90, temp_s2);
                temp_f0_2 = random_float();
                sp84 = (((sp90 - sp9C) * temp_f0_2) + sp9C) - spA8;
                sp88 = (((sp94 - spA0) * temp_f0_2) + spA0) - spAC;
                sp8C = (((sp98 - spA4) * temp_f0_2) + spA4) - spB0;
                func_15145128(spA0, spA4, &sp84, &sp84, 0, 0);
                ((s32 (*)())((char *)(&D_80088C64 + ((*(s32 *)((char *)(temp_s4) + 0x11)) * 4))))(arg0, &spB4, &spA8, &sp9C, &sp90, &sp84);
                (*(f32 *)((char *)(temp_s4) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s4) + 0x8)) > 1.0f);
        }
    } else if ((*(s32 *)((char *)(temp_s4) + 0x8)) > 1.0f) {
        do {
            (*(f32 *)((char *)(temp_s4) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x8)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s4) + 0x8)) > 1.0f);
    }
    temp_v0_2 = (*(s32 *)((char *)(temp_s4) + 0x10));
    if (temp_v0_2 != -1) {
        ((s32 (*)())((char *)(&D_80088C60 + (temp_v0_2 * 4))))(arg0);
    }
}

void func_15109848(void *arg0, void *arg1, void * arg2, void * arg3, void *arg5) {
    s8 sp105;
    s8 sp104;
    s8 sp103;
    s8 sp102;
    s8 sp101;
    s8 sp100;
    s32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    void * spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    s16 spC2;
    s16 spC0;
    s16 spBE;
    s8 spBD;
    s8 spBC;
    s8 spBB;
    s8 spBA;
    s8 spB9;
    s8 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s32 spB0;
    s32 spAC;
    s16 spAA;
    s16 spA8;
    s32 spA4;
    s32 spA0;
    f32 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    f32 sp94;
    s8 sp92;
    s16 sp90;
    s16 sp8E;
    s16 sp8C;
    s32 sp88;
    s32 sp84;
    s8 sp80;
    s8 sp7F;
    s8 sp7E;
    s8 sp7D;
    s8 sp7C;
    s8 sp7B;
    s8 sp7A;
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
    s8 sp6F;
    s8 sp6E;
    s8 sp6D;
    s8 sp6C;
    s8 sp6B;
    s8 sp6A;
    s16 sp68;
    s16 sp66;
    s16 sp64;
    s32 sp60;
    s32 sp5C;
    s16 sp5A;
    s16 sp58;
    s16 sp56;
    s16 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    void * sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp20;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f8;
    s32 var_v0;
    s32 var_v1;

    temp_f10 = (random_float() * D_800A2634) + D_800A2638;
    spBD = 0x2B;
    spA8 = 0x4401;
    temp_f12 = temp_f10 * D_800A263C;
    spA0 = 0x200005;
    spA4 = 0x20000;
    sp9C = temp_f12;
    spAA = (random_u32(temp_f12) & 0xF) + 0xA;
    spAC = 0;
    spB0 = 0;
    spB4 = 0xFF;
    spB5 = 0xFF;
    spB6 = 0xFF;
    spB7 = 0xFF;
    spB8 = 0xFF;
    spB9 = 0xFF;
    spBA = 0xFF;
    spBB = 0xFF;
    spBC = 0xFF;
    temp_f8 = (random_float() * 25.0f) + 35.0f;
    spCC = temp_f8;
    spC8 = temp_f8;
    (*(s32 *)((char *)&(spD0) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(spD0) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(spD0) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    spDC = 0.0f;
    spE0 = 0.0f;
    spE4 = 0.0f;
    spE8 = (*(s32 *)((char *)(arg5) + 0x0)) * temp_f12;
    spEC = (*(s32 *)((char *)(arg5) + 0x4)) * temp_f12;
    spBE = 5;
    spC0 = 0x33;
    spC2 = 1;
    spF4 = 0.0f;
    spC4 = 1.0f;
    spF0 = (*(s32 *)((char *)(arg5) + 0x8)) * temp_f12;
    var_v1 = 0;
    if (random_u32(temp_f12) & 1) {
        var_v1 = 0x40;
    }
    sp20 = var_v1;
    if (random_u32() & 1) {
        var_v0 = 0x80;
    } else {
        var_v0 = 0;
    }
    spF8 = var_v0 | 5 | var_v1 | 0xC200;
    sp100 = 6;
    sp101 = 6;
    sp102 = -1;
    sp103 = -1;
    sp104 = -1;
    sp105 = 4;
    func_15130374(&spA0, 1, 0, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    sp28 = 1;
    sp2C = 4;
    (*(s32 *)((char *)&(sp30) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp30) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp30) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    sp5C = 4;
    sp56 = 0xFF;
    sp58 = -0x40;
    sp5A = 0x2E;
    sp60 = 3;
    sp64 = 0x14;
    sp6E = 0xFF;
    sp66 = 0xF;
    sp68 = 1;
    sp6A = 0xC;
    sp6B = 2;
    sp6C = 3;
    sp6D = 0xFF;
    sp3C = D_800A2640;
    sp6F = 0xFF;
    sp70 = 0xFF;
    sp80 = 0x24;
    sp75 = 0xFF;
    sp76 = 0xFF;
    sp77 = 0xFF;
    sp78 = 0xFF;
    sp7D = 0xFF;
    sp7F = 3;
    sp54 = 0;
    sp71 = 0;
    sp72 = 0;
    sp73 = 0;
    sp74 = 0;
    sp79 = 0;
    sp7A = 0;
    sp7B = 0;
    sp7C = 0;
    sp7E = 0;
    sp84 = 0x200005;
    sp88 = 0x60600;
    sp8C = 0xA;
    sp8E = 0x19;
    sp90 = 1;
    sp92 = 0;
    sp98 = -1;
    sp99 = 0;
    sp9A = -1;
    sp9B = -1;
    sp40 = D_800A2644;
    sp44 = D_800A2648;
    sp48 = D_800A264C;
    sp4C = 2.0f;
    sp50 = 6.0f;
    sp94 = 1.0f;
    func_15152B38(&sp28, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
}

void func_15109C20(void *arg0, void *arg1, void * arg2, void * arg3, void *arg5) {
    void *spA0;
    f32 sp9C;
    s16 sp94;
    s16 sp92;
    u8 sp90;
    void *sp8C;
    s8 sp8A;
    s8 sp88;
    s8 sp87;
    s8 sp86;
    s8 sp85;
    s8 sp84;
    s8 sp83;
    s8 sp82;
    s8 sp81;
    s8 sp80;
    s32 sp7C;
    s8 sp78;
    s16 sp76;
    s16 sp74;
    s32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    void * sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f6_2;

    spA0 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_f6 = random_float() * D_800A2650;
    sp20 = 1.0f;
    sp24 = 1.0f;
    sp9C = (temp_f6 + D_800A2654) * D_800A2658;
    temp_f2 = ((random_float() * D_800A265C) + D_800A2660) * D_800A2664;
    sp28 = temp_f2;
    sp2C = temp_f2;
    sp30 = random_float() * 360.0f;
    sp34 = random_float() * 360.0f;
    temp_f0 = random_float();
    sp3C = 1.0f;
    sp40 = 1.0f;
    sp44 = 1.0f;
    sp38 = temp_f0 * 360.0f;
    (*(s32 *)((char *)&(sp48) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp48) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp48) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    sp54 = (*(s32 *)((char *)(arg5) + 0x0)) * sp9C;
    sp58 = (*(s32 *)((char *)(arg5) + 0x4)) * sp9C;
    sp5C = (*(s32 *)((char *)(arg5) + 0x8)) * sp9C;
    temp_f4 = random_float(0x3F800000) * D_800A2668;
    sp64 = 0.0f;
    sp60 = (temp_f4 + D_800A266C) * D_800A2670;
    sp68 = ((random_float() * D_800A2674) + D_800A2678) * D_800A267C;
    temp_f6_2 = random_float() * 124.0f;
    sp70 = 0x29E8;
    sp6C = (temp_f6_2 + -231.0f) * D_800A2680;
    sp74 = (random_u32() % 15U) + 0x14;
    if (random_u32() & 1) {
        sp76 = 0x23;
    } else {
        sp76 = 0x24;
    }
    sp78 = 0;
    sp7C = 0;
    sp80 = 0xFF;
    sp81 = 8;
    sp82 = 0;
    sp83 = 0;
    sp84 = 0;
    sp85 = 0;
    sp86 = 0;
    sp87 = 0;
    sp88 = 2;
    if ((*(s32 *)((char *)(arg0) + 0x13)) == 0x1A) {
        sp8A = 1;
    } else {
        sp8A = 2;
    }
    sp8C = spA0;
    sp92 = 0xA;
    sp94 = 0x19;
    sp90 = (*(s32 *)((char *)(spA0) + 0x3B));
    func_15132A4C(&sp20, 3, 0xFF, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
}

s32 func_15109ED4(void *arg0, s16 arg1, s8 arg2, s8 arg3, f32 arg4, s32 arg5, u8 arg6, s32 arg7) {
    s32 sp44;
    s8 sp41;
    s8 sp40;
    f32 sp3C;
    f32 sp38;
    void *sp34;
    s16 var_a0;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    if (arg0 == NULL) {
        return 0;
    }
    var_v0 = 0;
    if (arg1 < 0) {
        var_a0 = 0x12C;
    } else {
        var_v0 = 1;
        var_a0 = arg1;
    }
    sp38 = 0.0f;
    sp3C = arg4;
    sp40 = arg2;
    sp41 = arg3;
    sp34 = arg0;
    temp_v0 = func_15149130(var_a0, -1, 0x1B, -1, var_v0, 0x1B, arg5 + 0x10, (s32) arg6, arg7);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp44 = temp_v0;
        memcpy(temp_v0 + 0x28, &sp34, 0x10);
        var_v1 = sp44;
    }
    return var_v1;
}

void func_15109FB8(void *arg0) {
    void * spCC;
    void * spC8;
    void * spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    void * *var_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f2;
    s32 temp_s2;
    s32 var_s0;
    s8 temp_v0_2;
    void *temp_s1;
    void *temp_v0;
    void *var_s3;

    var_s3 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + ((*(f32 *)((char *)(arg0) + 0x30)) * D_800A251C * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x35)) != -1) {
        var_s3 = (char *)(arg0) + 0x28;
        if ((*(s32 *)((char *)(var_s3) + 0x4)) > 1.0f) {
            do {
                var_s0 = 0;
                func_1511490C(&spCC, (*(s32 *)((char *)(arg0) + 0x28)));
                var_f2 = (*(s32 *)((char *)&(D_800A2504) + 0x18)) * random_float();
                var_v0 = &D_800A2504;
                if ((*(s32 *)((char *)&(D_800A2504) + 0x0)) < var_f2) {
                    var_f0 = (*(s32 *)((char *)&(D_800A2504) + 0x0));
                    do {
                        var_f2 -= var_f0;
                        var_f0 = (*(s32 *)((char *)(var_v0) + 0x4));
                        var_s0 += 1;
                        var_v0 = (char *)(var_v0) + 4;
                    } while (var_f0 < var_f2);
                }
                temp_f0 = random_float();
                temp_s2 = var_s0 * 0xC;
                temp_s1 = temp_s2 + &D_800A2568;
                temp_f2 = (*(s32 *)((char *)(temp_s1) + 0x0));
                temp_f12 = (*(s32 *)((char *)(temp_s1) + 0x4));
                temp_f14 = (*(s32 *)((char *)(temp_s1) + 0x8));
                func_150A7960(temp_f12, temp_f14, &spCC, (((*(s32 *)((char *)(temp_s1) + 0xC)) - temp_f2) * temp_f0) + temp_f2, (((*(s32 *)((char *)(temp_s1) + 0x10)) - temp_f12) * temp_f0) + temp_f12, (((*(s32 *)((char *)(temp_s1) + 0x14)) - temp_f14) * temp_f0) + temp_f14, &spC0, &spC4, &spC8);
                func_150A7960((f32)(s32)&spCC, (*(f32 *)((char *)(temp_s1) + 0x0)), (*(f32 *)((char *)(temp_s1) + 0x4)), (*(f32 *)((char *)(temp_s1) + 0x8)), (f32)(s32)&spB4, (f32)(s32)&spB8, &spBC);
                func_150A7960((f32)(s32)&spCC, (*(f32 *)((char *)(temp_s1) + 0xC)), (*(f32 *)((char *)(temp_s1) + 0x10)), (*(f32 *)((char *)(temp_s1) + 0x14)), (f32)(s32)&spA8, (f32)(s32)&spAC, &spB0);
                temp_v0 = temp_s2 + &D_800A25BC;
                func_150A7960((f32)(s32)&spCC, (*(f32 *)((char *)(temp_v0) + 0x0)), (*(f32 *)((char *)(temp_v0) + 0x4)), (*(f32 *)((char *)(temp_v0) + 0x8)), (f32)(s32)&sp9C, (f32)(s32)&spA0, &spA4);
                temp_f0_2 = random_float();
                sp90 = (((sp9C - spA8) * temp_f0_2) + spA8) - spB4;
                sp94 = (((spA0 - spAC) * temp_f0_2) + spAC) - spB8;
                sp98 = (((spA4 - spB0) * temp_f0_2) + spB0) - spBC;
                func_15145128(spAC, spB0, &sp90, &sp90, 0, 0);
                ((s32 (*)())((char *)(&D_80088C64 + ((*(s32 *)((char *)(var_s3) + 0xD)) * 4))))(arg0, &spC0, &spB4, &spA8, &sp9C, &sp90);
                (*(f32 *)((char *)(var_s3) + 0x4)) = (f32) ((*(f32 *)((char *)(var_s3) + 0x4)) - 1.0f);
            } while ((*(s32 *)((char *)(var_s3) + 0x4)) > 1.0f);
        }
    } else if ((*(s32 *)((char *)(var_s3) + 0x4)) > 1.0f) {
        do {
            (*(f32 *)((char *)(var_s3) + 0x4)) = (f32) ((*(f32 *)((char *)(var_s3) + 0x4)) - 1.0f);
        } while ((*(s32 *)((char *)(var_s3) + 0x4)) > 1.0f);
    }
    temp_v0_2 = (*(s32 *)((char *)(var_s3) + 0xC));
    if (temp_v0_2 != -1) {
        ((s32 (*)())((char *)(&D_80088C60 + (temp_v0_2 * 4))))(arg0);
    }
}

s32 func_1510A344(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    u8 sp34;
    void *sp30;
    s32 temp_v0;
    s32 var_v1;

    if (arg0 == NULL) {
        return 0;
    }
    sp30 = arg0;
    sp34 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp3C = D_800A2684;
    sp38 = 0.0f;
    sp40 = D_800A2688;
    temp_v0 = func_15149130(arg1, -1, 0x1C, -1, 1, 0x1C, 0x14, (s32) arg2, arg3);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp44 = temp_v0;
        memcpy(temp_v0 + 0x28, &sp30, 0x14);
        var_v1 = sp44;
    }
    return var_v1;
}

void func_1510A40C(void *arg0) {
    f32 sp134;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    s8 sp101;
    s8 sp100;
    s8 spFF;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    void * spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s8 spB9;
    s8 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s32 spAC;
    s32 spA8;
    s16 spA6;
    s16 spA4;
    s32 spA0;
    s32 sp9C;
    void *sp98;
    f32 *temp_s0_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f4;
    s32 temp_lo;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 temp_v0_3;
    void *temp_s0;
    void *temp_s1;
    void *temp_t5;
    void *temp_v0_2;

    f32 sp130;
    f32 sp12C;
    f32 sp138;
    f32 sp13C;
    temp_s0 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_s1 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_s0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s1) + 0x4)) != (*(s32 *)((char *)(temp_s0) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) + (((*(f32 *)((char *)(temp_s1) + 0xC)) + (random_float() * (*(f32 *)((char *)(temp_s1) + 0x10)))) * D_800BE9A4));
    temp_f2 = (*(s32 *)((char *)(temp_s1) + 0x8));
    if (temp_f2 > 1.0f) {
        temp_v0 = (*(s32 *)((char *)(temp_s0) + 0x1D4));
        temp_s0_2 = temp_v0 + 0x240;
        if (temp_v0 != 0) {
            func_15143134((f32)(s32)&D_800A2604, (f32)(s32)&sp128, temp_s0_2);
            func_15143134((f32)(s32)&D_800A2610, (f32)(s32)&sp134, temp_s0_2);
            func_15143134((f32)(s32)&D_800A261C, (f32)(s32)&sp110, temp_s0_2);
            func_15143134((f32)(s32)&D_800A2628, (f32)(s32)&sp11C, temp_s0_2);
            sp110 -= sp128;
            sp118 -= sp130;
            sp114 -= sp12C;
            temp_f30 = D_800A2694;
            sp11C -= sp134;
            spB9 = 0x29;
            spA4 = 0xE03;
            sp9C = 0x200005;
            spBA = 0x19;
            spBC = 0xA;
            spF4 = 0xCE05;
            spFC = 3;
            spFD = 3;
            spFE = 0x10;
            spFF = -1;
            sp100 = -1;
            sp120 -= sp138;
            sp124 -= sp13C;
            spA0 = 0;
            spA8 = 0;
            spAC = 0;
            sp101 = 0;
            spBE = 0x19;
            spB0 = 0xDD;
            spB1 = 0xD3;
            spB2 = 0xCD;
            spB3 = 0xFF;
            spB4 = 0x57;
            spB5 = 0x55;
            spB6 = 0x5A;
            spB7 = 0xFF;
            spB8 = 0xFF;
            sp98 = D_800A268C;
            spC0 = D_800A2690;
            spD8 = 0.0f;
            spDC = 0.0f;
            spE0 = 0.0f;
            spF0 = 0.0f;
            do {
                if (random_u32() & 1) {
                    spF4 |= 0x40;
                } else {
                    spF4 &= ~0x40;
                }
                if (random_u32() & 1) {
                    spF4 |= 0x80;
                } else {
                    spF4 &= ~0x80;
                }
                temp_s0_3 = random_u32() & 1;
                temp_f20 = ((random_float() * 203.0f) + 96.0f) * temp_f30;
                spA6 = (random_u32() & 0xF) + 0x14;
                temp_lo = temp_s0_3 * 0xC;
                temp_f4 = (random_float() * 60.0f) + 60.0f;
                spC8 = temp_f4;
                spC4 = temp_f4;
                temp_t5 = temp_lo + &sp128;
                temp_v0_2 = temp_lo + &sp110;
                (*(s32 *)((char *)&(spCC) + 0x0)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x0));
                (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x4));
                (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x8));
                spE4 = (*(s32 *)((char *)(temp_v0_2) + 0x0)) * temp_f20;
                spE8 = (*(s32 *)((char *)(temp_v0_2) + 0x4)) * temp_f20;
                spEC = (*(s32 *)((char *)(temp_v0_2) + 0x8)) * temp_f20;
                temp_v0_3 = func_15130374(&sp9C, 1, 4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                if (temp_v0_3 != 0) {
                    memcpy(temp_v0_3 + 0xA8, &sp98, 4);
                }
                (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f);
            return;
        }
    }
    if (temp_f2 > 1.0f) {
        do {
            (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f);
    }
}

void func_1510A870(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x28;
    if ((arg2 & 0xFF) == 0x2D) {
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_a2 = (*(s32 *)((char *)(arg0) + 0x28));
        if (temp_v1 == temp_a2) {
            (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2) {
            (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

void func_1510A8CC(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x28;
    if ((arg2 & 0xFF) == 0x2D) {
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_a2 = (*(s32 *)((char *)(arg0) + 0x28));
        if (temp_v1 == temp_a2) {
            (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2) {
            (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}
