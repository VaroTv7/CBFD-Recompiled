/**
 * Auto-decompiled from asm/1199D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1502EA98(); /* extern */
void * func_150495B0();      /* extern */
s32 func_1509BE40();                    /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
s32 func_15130280();        /* extern */
void * func_151432BC();          /* extern */
s32 func_151464B8();                             /* extern */
void * func_151C9AC0();                   /* extern */
void * memcpy();                             /* extern */
extern f32 D_80088AD0;
extern f32 D_80088AD4;
extern f32 D_80088AD8;
extern s32 D_80088ADC;
extern s32 D_80088AE0;
extern s32 D_80088AE4;
extern s32 D_80088AE8;
extern s32 D_80088AEC;
extern s32 D_80088AF0;
extern f32 D_800A1570;
extern f32 D_800A1574;
extern f32 D_800A1578;
extern f32 D_800A157C;
extern f32 D_800A1580;
extern f32 D_800A1584;
extern f32 D_800A1588;
extern f32 D_800A158C;

void func_150EC520(void *arg0) {
    f32 sp78;
    void * sp74;
    void * sp70;
    s8 sp6C;
    void * sp68;
    s32 temp_v0;
    void *temp_s0;

    if (func_151464B8((*(s32 *)((char *)(arg0) + 0x30))) == 0) {
        temp_s0 = (char *)(arg0) + 0x28;
        (*(f32 *)((char *)(temp_s0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0xC)) + ((D_800A1570 + (random_float() * D_800A1574)) * (*(f32 *)((char *)(temp_s0) + 0x4)) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s0) + 0xC)) > 1.0f) {
            sp78 = 0.0f;
            do {
                func_151432BC((*(s32 *)((char *)(arg0) + 0x28)), &sp6C, &sp74, &sp68, &sp70);
                temp_v0 = func_15149130((s16) ((random_u32() % 131U) + 0x50), -1, 0x5A, -1, 1, 0, 0x10, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0x28, &sp6C, 0x10);
                }
                (*(f32 *)((char *)(temp_s0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0xC)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s0) + 0xC)) > 1.0f);
        }
    }
}

void func_150EC6B0(void *arg0) {
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
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    f32 temp_f10;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f6;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;

    temp_s1 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) + ((1352.0f + (random_float() * D_800A1578)) * D_800A157C * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f) {
        spB9 = 0x6C;
        spA4 = 0x5103;
        sp9C = 0x200005;
        spBA = 0x46;
        spBC = 3;
        spF4 = 0x80DE07;
        spFC = 8;
        spFD = 6;
        sp8C = 0;
        sp8D = 0;
        spA0 = 0;
        spA8 = 0;
        spAC = 0;
        spFE = 0x16;
        spFF = -1;
        sp100 = -1;
        sp101 = 0;
        spBE = 0x46;
        spB0 = 0x47;
        spB1 = 0xC2;
        spB2 = 0;
        spB3 = 0xFF;
        spB4 = 0xC0;
        spB5 = 0x49;
        spB6 = 0;
        spB8 = 0xFF;
        sp98 = D_800A1580;
        spC0 = D_800A1584;
        (*(s32 *)((char *)&(spCC) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x28));
        (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x4));
        (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s1) + 0x8));
        temp_f26 = D_800A1588;
        temp_f24 = D_800A158C;
        spD8 = 0.0f;
        spDC = 0.0f;
        spE0 = 0.0f;
        spE4 = 0.0f;
        spE8 = 0.0f;
        spEC = 0.0f;
        do {
            sp8E = (random_u32() % 5U) + 4;
            sp8F = (random_u32() % 5U) + 4;
            sp90 = random_float() * 11.0f;
            sp94 = random_float() * 11.0f;
            temp_f10 = random_float() * temp_f24;
            spF4 &= ~0xC0;
            spF0 = temp_f10 + temp_f26;
            var_s0 = 0;
            if (random_u32() & 1) {
                var_s0 = 0x80;
            }
            if (random_u32() & 1) {
                var_v0 = 0x40;
            } else {
                var_v0 = 0;
            }
            spF4 |= var_v0 | var_s0;
            spB7 = (random_u32() % 101U) + 0x64;
            spA6 = (random_u32() % 51U) + 0x50;
            temp_f6 = (random_float() * 80.0f) + 92.0f;
            spC8 = temp_f6;
            spC4 = temp_f6;
            temp_v0 = func_15130280(&sp9C, 0, 0, 0x10, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, &sp8C, 0x10);
            }
            (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f);
    }
}

void func_150ECA68(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    u8 sp45;
    u8 sp44;
    s8 sp43;
    s8 sp42;
    s8 sp41;
    u8 sp40;
    void *sp3C;
    s16 var_v1;
    s32 temp_v0;
    s32 var_v0;

    sp3C = arg0;
    sp41 = arg1 & 0xFF;
    sp42 = arg2 & 0xFF;
    sp43 = arg3 & 0xFF;
    sp40 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp44 = arg4;
    sp45 = arg5;
    if (arg6 == -1) {
        var_v1 = 0x12C;
    } else {
        var_v1 = arg6;
    }
    if (arg6 == -1) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    temp_v0 = func_15149130(var_v1, -1, 0x5D, -1, var_v0, 0x45, 0xC, (s32) arg7, arg8);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, (s8 *) &sp3C, 0xC);
    }
}

void func_150ECB4C(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

void func_150ECB8C(void *arg0) {
    void *sp28;
    void *temp_t6;
    void *temp_v0;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_v0 = (char *)(arg0) + 0x28;
    sp28 = temp_t6;
    if (((*(s32 *)((char *)(temp_t6) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_t6) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    func_1502EA98(sp28, (*(s32 *)((char *)(temp_v0) + 0x5)), (*(s32 *)((char *)(temp_v0) + 0x6)), (*(s32 *)((char *)(temp_v0) + 0x7)), (s32) (*(s32 *)((char *)(temp_v0) + 0x8)), 0, (s32) (*(s32 *)((char *)(temp_v0) + 0x9)));
}

void func_150ECC00(void *arg0, s32 arg1, s32 arg2) {
    func_151C9AC0(arg0, arg1, arg2);
    func_150ECA68(arg0, 0, 0xFF, 0, 0xFFU, 4U, -1, (u8) (s32) arg1, arg2);
}

void func_150ECC70(void *arg0) {
    s32 sp28;
    s32 temp_a0;
    s32 temp_t1;
    s32 temp_v0;
    s32 var_a3;
    s32 var_v1;

    if (func_1509BE40(1, 0x403B, 6, 0x2000) != 0) {
        func_1509BFB0(0, 0x4031, 1);
        func_1509BFB0(0, 0x4032, 1);
        func_1509BFB0(0, 0x4033, 1);
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80021200);
        if (func_1509BE40(1, 0x4038, 6, 0x2000) != 0) {
            D_80088ADC = 0x43000000;
            D_80088AE0 = 0x437F0000;
            goto block_8;
        }
        if (func_1509BE40(1, 0x4039, 6, 0x2000) != 0) {
            D_80088ADC = 0x437F0000;
            D_80088AE0 = 0x43000000;
            goto block_8;
        }
        if (func_1509BE40(1, 0x403A, 6, 0x2000) != 0) {
            D_80088ADC = 0x437F0000;
            D_80088AE0 = 0x437F0000;
            D_80088AE4 = 0x43000000;
        } else {
            D_80088ADC = 0x437F0000;
            D_80088AE0 = 0x437F0000;
block_8:
            D_80088AE4 = 0x437F0000;
        }
        sp28 = func_1509BE40(0, 0x2007, 0xB7) | 0x2000;
        if (func_1509BE40(1, 0x4010, 6, 0x2000) == 0) {
            (*(s32 *)((char *)(arg0) + 0x134)) = 0;
            (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
            return;
        }
        if (sp28 != 0) {
            (*(s32 *)((char *)(arg0) + 0x134)) = 1;
            func_1509BFB0(1, 0x9000, 0x17, func_1509BE40(1, sp28, 0x9C, 0x2000));
            temp_v0 = func_1509BE40(1, sp28, 0x9A, 0x2000);
            temp_a0 = temp_v0 >> 1;
            var_a3 = temp_v0;
            var_v1 = temp_a0;
            if (temp_v0 < 0x384) {
                var_a3 = 0x384;
            } else if (temp_v0 >= 0x4A7) {
                var_a3 = 0x4A6;
            }
            if (temp_a0 < 0xB4) {
                var_v1 = 0xB4;
            } else if (temp_a0 >= 0xE8) {
                var_v1 = 0xE7;
            }
            func_1509BFB0(2, 0x9000, 8, var_a3, var_v1);
            (*(s32 *)((char *)(arg0) + 0x190)) = 220.0f;
            goto block_22;
        }
    } else {
        D_80088ADC = 0x437F0000;
        D_80088AE0 = 0x437F0000;
        D_80088AE4 = 0x437F0000;
        func_1509BFB0(0, 0x4031, 0);
        func_1509BFB0(0, 0x4032, 0);
        func_1509BFB0(0, 0x4033, 0);
        temp_t1 = (*(s32 *)((char *)(arg0) + 0x84)) & 0x7FFDEDFF;
        (*(s32 *)((char *)(arg0) + 0x84)) = temp_t1;
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t1 | 8);
block_22:
        func_150495B0(&D_80088AD0, D_80088ADC, &D_80088AE8, 0x40800000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
        func_150495B0(&D_80088AD4, D_80088AE0, &D_80088AEC, 0x40800000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
        func_150495B0(&D_80088AD8, D_80088AE4, &D_80088AF0, 0x40800000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
        func_1509BFB0(1, 0x30F3, 0x12, (u32) D_80088AD0 & 0xFF);
        func_1509BFB0(1, 0x30F4, 0x12, (u32) D_80088AD4 & 0xFF);
        func_1509BFB0(1, 0x30F5, 0x12, (u32) D_80088AD8 & 0xFF);
    }
}
