/**
 * Auto-decompiled from asm/1E6260.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960(); /* extern */
f32 random_float();                                /* extern */
void func_1510F800();                            /* extern */
s32 func_15132A4C();        /* extern */
s32 func_151407D0(); /* extern */
s32 func_1516037C();           /* extern */
void * memcpy();                         /* extern */
extern s32 D_800AA4E0;
extern s32 D_800AA528;
extern f32 D_800AA540;
extern f32 D_800AA544;
extern f32 D_800AA548;
extern f32 D_800AA54C;
extern f32 D_800AA550;
extern f32 D_800AA554;
extern f32 D_800AA558;
extern f32 D_800AA55C;
extern f32 D_800AA560;
extern f32 D_800AA564;
extern f32 D_800AA568;
extern f32 D_800AA56C;
extern f32 D_800AA570;

void func_151B8DB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp1BC;
    s16 sp1B4;
    s16 sp1B2;
    s8 sp1B0;
    s32 sp1AC;
    s8 sp1AA;
    s8 sp1A8;
    s8 sp1A7;
    s8 sp1A6;
    s8 sp1A5;
    s8 sp1A4;
    s8 sp1A3;
    s8 sp1A2;
    s8 sp1A1;
    s8 sp1A0;
    s32 sp19C;
    s8 sp198;
    s16 sp196;
    s16 sp194;
    s32 sp190;
    f32 sp18C;
    f32 sp188;
    f32 sp184;
    f32 sp180;
    f32 sp17C;
    f32 sp178;
    f32 sp174;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp158;
    f32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    s32 sp11C;
    s8 sp118;
    s16 sp116;
    s8 sp115;
    s8 sp114;
    f32 sp110;
    s32 sp10C;
    s32 sp108;
    s8 spFD;
    s8 spFC;
    s8 spFB;
    s8 spFA;
    s8 spF9;
    s8 spF8;
    s16 spF6;
    s16 spF4;
    s16 spF2;
    s16 spF0;
    f32 spEC;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    s8 sp98;
    s32 sp94;
    s8 sp93;
    s8 sp92;
    s8 sp91;
    s8 sp90;
    s32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    void * sp68;
    f32 sp64;
    f32 sp60;
    s8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s32 sp58;
    s32 sp54;
    s16 sp50;
    s16 sp4E;
    s8 sp4D;
    s8 sp4C;
    f32 *sp44;
    void *sp40;
    f32 *temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v0;
    void *temp_a0;
    void *temp_t1;

    f32 sp170;
    f32 sp16C;
    sp11C = 0;
    sp120 = D_800AA540;
    sp12C = D_800AA540;
    temp_v0 = (arg1 * 4) + &D_800AA528;
    temp_f6 = random_float() * D_800AA548;
    sp14C = *temp_v0;
    sp124 = temp_f6;
    temp_t1 = (arg1 * 0xC) + &D_800AA4E0;
    sp128 = D_800AA544;
    sp130 = D_800AA544;
    sp140 = 1.0f;
    sp144 = 1.0f;
    sp15C = 1.0f;
    sp160 = 1.0f;
    sp164 = 1.0f;
    sp134 = 0.0f;
    sp138 = 0.0f;
    sp13C = 0.0f;
    sp150 = 0.0f;
    sp154 = 0.0f;
    sp158 = 0.0f;
    sp148 = sp14C;
    (*(s32 *)((char *)&(sp168) + 0x0)) = (*(s32 *)((char *)(temp_t1) + 0x0));
    (*(s32 *)((char *)&(sp168) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t1) + 0x4));
    (*(s32 *)((char *)&(sp168) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t1) + 0x8));
    sp194 = 0x12C;
    sp196 = 0x22;
    sp44 = temp_v0;
    sp174 = 0.0f;
    sp178 = 0.0f;
    sp17C = 0.0f;
    sp180 = 0.0f;
    sp184 = 0.0f;
    sp188 = 0.0f;
    sp18C = 0.0f;
    func_1510F800(D_800AA544, 0);
    temp_v0_2 = func_1510FD20((s32) sp168, (s32) sp170);
    sp19C = temp_v0_2;
    if (temp_v0_2 != 0) {
        var_v0 = 0x400;
    } else {
        var_v0 = 0;
    }
    sp190 = var_v0 | 0x900;
    sp198 = 0;
    sp1A0 = 0xFF;
    sp1A1 = 9;
    sp1A2 = 0;
    sp1A3 = 0;
    sp1A4 = 0;
    sp1A5 = 0;
    sp1A6 = 0;
    sp1A7 = 0;
    sp1A8 = 4;
    sp1AA = 2;
    sp1AC = 0;
    sp1B0 = 0;
    sp1B2 = 1;
    sp1B4 = 0xFF;
    temp_v0_3 = func_15132A4C(&sp140, 3, 0xFF, 0x24, (s32) arg2, arg3);
    if (temp_v0_3 != 0) {
        sp1BC = temp_v0_3;
        memcpy(temp_v0_3 + 0x170, &sp11C, 0x24);
        sp108 = sp1BC;
        sp10C = 0;
        sp114 = 0;
        sp115 = 7;
        sp116 = 0x12C;
        sp118 = 0x12;
        sp110 = 1.0f / *sp44;
        temp_v0_4 = func_1516037C(&sp114, arg0, 0xC, arg2, arg3);
        temp_a0 = temp_v0_4 + 0x18;
        if (temp_v0_4 != 0) {
            sp40 = temp_a0;
            memcpy(temp_a0, &sp108, 0xC);
            temp_f0 = *sp44;
            temp_f2 = temp_f0 * D_800AA54C;
            temp_f12 = temp_f0 * D_800AA550;
            spC8 = -1;
            spD8 = -1;
            spCC = -1;
            spDC = -1;
            spD0 = -1;
            spE0 = -1;
            spD4 = -1;
            spFD = -1;
            spA4 = temp_f2;
            spAC = temp_f12;
            spE4 = -1;
            spE8 = 0;
            spEC = 1.0f;
            spF0 = 0;
            spF2 = 0;
            spF4 = 0;
            spF6 = 0;
            spF8 = 0;
            spF9 = 0;
            spFA = 0;
            spFB = 0;
            spFC = 0;
            sp4C = 0x69;
            sp4D = 3;
            sp4E = 0x3403;
            sp50 = 0x12C;
            sp54 = 0;
            sp58 = 0;
            sp5C = 0xFF;
            sp5D = 0xFF;
            sp5E = 0xFF;
            sp5F = 0xFF;
            sp60 = 100.0f;
            sp64 = 100.0f;
            spB4 = D_800AA554;
            spB8 = 0.25f;
            spBC = D_800AA558;
            spC0 = D_800AA55C;
            spC4 = D_800AA560;
            (*(f32 *)((char *)&(sp68) + 0x0)) = (f32) (*(f32 *)((char *)&(sp168) + 0x0));
            (*(s32 *)((char *)&(sp68) + 0x4)) = (s32) (*(s32 *)((char *)&(sp168) + 0x4));
            (*(s32 *)((char *)&(sp68) + 0x8)) = (s32) (*(s32 *)((char *)&(sp168) + 0x8));
            sp78 = sp16C - 500.0f;
            sp80 = 1.0f;
            sp84 = 1.0f;
            sp88 = 1.0f;
            sp8C = 0x01CD2006;
            sp90 = 0xFF;
            sp91 = 0xFF;
            sp92 = 0;
            sp93 = 6;
            sp98 = 0xFF;
            spB0 = temp_f12;
            spA8 = temp_f2;
            sp74 = sp168;
            sp7C = sp170;
            sp94 = sp19C;
            (*(s32 *)((char *)(sp40) + 0x4)) = func_151407D0(temp_f12, 0x42C80000, &spA4, 0x60, &sp4C, 0, 0, 0, 0, -1, (s32) arg2, arg3);
        }
    }
}

s32 func_151B9214(void *arg0) {
    void *sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    void *temp_v0;

    (*(f32 *)((char *)(arg0) + 0x178)) = (f32) ((*(f32 *)((char *)(arg0) + 0x178)) + ((*(f32 *)((char *)(arg0) + 0x17C)) * D_800BE9A4));
    temp_f0 = func_15144B68((*(s32 *)((char *)(arg0) + 0x178)));
    temp_v0 = (char *)(arg0) + 0x170;
    (*(s32 *)((char *)(temp_v0) + 0x8)) = temp_f0;
    sp18 = temp_v0;
    temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x4));
    temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x18));
    (*(f32 *)((char *)(arg0) + 0x170)) = (f32) (sinf(temp_f0) * temp_f2);
    if (temp_f12 > 0.0f) {
        (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) (temp_f12 - D_800BE9A4);
        (*(f32 *)((char *)(temp_v0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0xC)) + ((*(f32 *)((char *)(temp_v0) + 0x20)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) (temp_f2 + ((*(f32 *)((char *)(temp_v0) + 0x1C)) * D_800BE9A4));
    } else {
        temp_f0_2 = (*(s32 *)((char *)(temp_v0) + 0xC));
        (*(f32 *)((char *)(temp_v0) + 0xC)) = (f32) (temp_f0_2 + (((*(f32 *)((char *)(temp_v0) + 0x14)) - temp_f0_2) * D_800AA564));
        (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) (temp_f2 + (((*(f32 *)((char *)(temp_v0) + 0x10)) - temp_f2) * D_800AA564));
    }
    return 1;
}

s32 func_151B9310(s32 arg0, void *arg1) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;

    func_150A8050(&sp28, 0, 0, (*(s32 *)((char *)(arg1) + 0x170)));
    sp58 = (*(s32 *)((char *)(arg1) + 0x38));
    sp5C = (*(s32 *)((char *)(arg1) + 0x3C));
    sp60 = (*(s32 *)((char *)(arg1) + 0x40));
    sp28 *= (*(s32 *)((char *)(arg1) + 0x18));
    sp2C *= (*(s32 *)((char *)(arg1) + 0x18));
    sp30 *= (*(s32 *)((char *)(arg1) + 0x18));
    sp38 *= (*(s32 *)((char *)(arg1) + 0x1C));
    sp3C *= (*(s32 *)((char *)(arg1) + 0x1C));
    sp40 *= (*(s32 *)((char *)(arg1) + 0x1C));
    sp48 *= (*(s32 *)((char *)(arg1) + 0x18));
    sp4C *= (*(s32 *)((char *)(arg1) + 0x18));
    sp50 *= (*(s32 *)((char *)(arg1) + 0x18));
    guMtxF2L(&sp28, arg0);
    return 1;
}

s32 func_151B9408(void *arg0) {
    void *spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    spA0 = temp_v0;
    func_150A8050(&sp54, 0, 0, (*(s32 *)((char *)(temp_v0) + 0x170)));
    sp84 = (*(s32 *)((char *)(spA0) + 0x38));
    sp88 = (*(s32 *)((char *)(spA0) + 0x3C));
    sp8C = (*(s32 *)((char *)(spA0) + 0x40));
    sp54 *= (*(s32 *)((char *)(spA0) + 0x18));
    sp58 *= (*(s32 *)((char *)(spA0) + 0x18));
    sp5C *= (*(s32 *)((char *)(spA0) + 0x18));
    sp64 *= (*(s32 *)((char *)(spA0) + 0x1C));
    sp68 *= (*(s32 *)((char *)(spA0) + 0x1C));
    sp6C *= (*(s32 *)((char *)(spA0) + 0x1C));
    sp74 *= (*(s32 *)((char *)(spA0) + 0x18));
    sp78 *= (*(s32 *)((char *)(spA0) + 0x18));
    sp7C *= (*(s32 *)((char *)(spA0) + 0x18));
    func_150A7960(&sp54, 0, 0xC3160000, 0, &sp94, &sp98, &sp9C);
    temp_a0 = (char *)(arg0) + 0x18;
    (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0xE)) = (s16) (s32) sp94;
    (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x10)) = (s16) (s32) sp98;
    (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x12)) = (s16) (s32) sp9C;
    temp_v1 = (*(s32 *)((char *)(temp_a0) + 0x4));
    if (temp_v1 != NULL) {
        temp_f12 = (*(s32 *)((char *)(spA0) + 0x38));
        temp_f0 = (*(s32 *)((char *)(spA0) + 0x1C)) * 65.0f;
        temp_f2 = (*(s32 *)((char *)(temp_a0) + 0x8)) * D_800AA568;
        temp_f14 = -(sp94 - temp_f12) * temp_f2;
        temp_f16 = -(sp98 - (*(s32 *)((char *)(spA0) + 0x3C))) * temp_f2;
        temp_f18 = -(sp9C - (*(s32 *)((char *)(spA0) + 0x40))) * temp_f2;
        (*(f32 *)((char *)(temp_v1) + 0x34)) = (f32) (temp_f12 + (temp_f14 * temp_f0));
        (*(f32 *)((char *)((*(s32 *)((char *)(temp_a0) + 0x4))) + 0x38)) = (f32) ((*(f32 *)((char *)(spA0) + 0x3C)) + (temp_f16 * temp_f0));
        (*(f32 *)((char *)((*(s32 *)((char *)(temp_a0) + 0x4))) + 0x3C)) = (f32) ((*(f32 *)((char *)(spA0) + 0x40)) + (temp_f18 * temp_f0));
        temp_v1_2 = (*(s32 *)((char *)(temp_a0) + 0x4));
        (*(f32 *)((char *)(temp_v1_2) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x34)) + (temp_f14 * 500.0f));
        temp_v1_3 = (*(s32 *)((char *)(temp_a0) + 0x4));
        (*(f32 *)((char *)(temp_v1_3) + 0x44)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x38)) + (temp_f16 * 500.0f));
        temp_v1_4 = (*(s32 *)((char *)(temp_a0) + 0x4));
        (*(f32 *)((char *)(temp_v1_4) + 0x48)) = (f32) ((*(f32 *)((char *)(temp_v1_4) + 0x3C)) + (temp_f18 * 500.0f));
    }
    return 1;
}

void func_151B9660(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x188)) = 5.0f;
    (*(f32 *)((char *)(arg0) + 0x18C)) = (f32) D_800AA56C;
    (*(f32 *)((char *)(arg0) + 0x190)) = (f32) D_800AA570;
}
