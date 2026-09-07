/**
 * Auto-decompiled from asm/1A7260.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *func_15094F70(); /* extern */
u32 random_u32();                         /* extern */
s32 func_1510AEE0(); /* extern */
void * func_1510B7B4();                          /* extern */
void * func_1510E82C(); /* extern */
void *func_15142FBC();          /* extern */
void *func_15167A68();        /* extern */
void *func_1517A9A8();           /* static */
extern s32 D_8008CDF0;
extern s32 D_8008D0B0;
extern s32 D_80090614;
extern s32 D_800A7210;
extern u8 D_800A7211;
extern u8 D_800A7212;
extern f32 D_800A7218;
extern f32 D_800A7220;
extern f32 D_800A7224;
extern f32 D_800A7228;
extern s32 D_800D2C9C;
extern s32 D_800D35E0;
extern s32 D_800D9C10;
extern s32 D_800DD1B0;
extern s16 D_800DD450;
s32 func_1517A394();

void func_15179DB0(s32 arg0) {
    s32 sp70;
    void *sp6C;
    void *sp68;
    f32 *sp64;
    void *sp60;
    void *sp5C;
    f32 **var_s2;
    f32 *temp_v0_3;
    f32 *temp_v0_4;
    f32 temp_f0;
    f32 temp_f22;
    f32 temp_f8;
    s32 temp_f10;
    s32 temp_v1;
    s32 var_a0;
    void **var_s0;
    void **var_s3;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_2;

    var_a0 = arg0 & 0xFF;
    temp_v0 = (var_a0 * 0x14) + D_800DDE80;
    temp_s4 = (var_a0 * 0x38) + &D_8008D0B0;
    temp_f22 = D_800A7218;
    sp64 = (char *)(temp_s4) + 0x20;
    sp68 = (char *)(temp_s4) + 0x24;
    sp5C = (char *)(temp_s4) + 0x18;
    sp60 = (char *)(temp_s4) + 0x1C;
    var_s2 = &sp64;
    var_s0 = &sp6C;
    var_s3 = &sp5C;
    sp70 = (*(s32 *)((char *)(temp_v0) + 0x4));
    sp6C = (*(s32 *)((char *)(temp_v0) + 0x8));
    do {
        temp_f8 = sinf(**var_s2 * temp_f22) * (*(s32 *)((char *)(temp_s4) + 0x28));
        var_a0 = 3;
        temp_v0_2 = &D_800A7210 + 3;
        var_s2 += 4;
        var_s3 = (char *)(var_s3) + 4;
        temp_f10 = (s32) temp_f8;
        (*(s16 *)((char *)((*var_s0)) + 0x20)) = (s16) temp_f10;
        temp_v1 = -((s16) temp_f10 >> 1);
        (*(s16 *)((char *)((*var_s0)) + 0x30)) = (s16) temp_f10;
        (*(s16 *)((char *)(*var_s0) + ((*(s16 *)((char *)&(D_800A7210) + 0x0)) * 0x10))) = (s16) temp_v1;
        (*(s16 *)((char *)(*var_s0) + (D_800A7211 * 0x10))) = (s16) temp_v1;
        (*(s16 *)((char *)(*var_s0) + (D_800A7212 * 0x10))) = (s16) temp_v1;
        (*(s16 *)((char *)(*var_s0) + ((*(s16 *)((char *)&(D_800A7210) + 0x3)) * 0x10))) = (s16) temp_v1;
        (*(s16 *)((char *)(*var_s0) + ((*(s16 *)((char *)(temp_v0_2) + 0x1)) * 0x10))) = (s16) temp_v1;
        (*(s16 *)((char *)(*var_s0) + ((*(s16 *)((char *)(temp_v0_2) + 0x2)) * 0x10))) = (s16) temp_v1;
        (*(s16 *)((char *)(*var_s0) + ((*(s16 *)((char *)(temp_v0_2) + 0x3)) * 0x10))) = (s16) temp_v1;
        (*(s16 *)((char *)((*var_s0)) + 0x60)) = (s16) (temp_v1 + 0x12);
        (*(s16 *)((char *)((*var_s0)) + 0x80)) = (s16) (temp_v1 - 0x12);
        temp_v0_3 = (*(s32 *)((char *)(var_s2) - 0x4));
        *temp_v0_3 += (*(s32 *)((*(s32 *)((char *)(var_s3) - 0x4))));
        temp_v0_4 = (*(s32 *)((char *)(var_s2) - 0x4));
        temp_f0 = *temp_v0_4;
        if (temp_f0 >= 360.0f) {
            *temp_v0_4 = temp_f0 - 360.0f;
        }
        var_s0 = (char *)(var_s0) + 4;
    } while ((char *)(var_s3) != (char *)(&sp64));
}

void func_15179FE0( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    u32 sp2C;
    s32 sp28;
    s32 temp_a1;
    s32 temp_a1_2;
    void *temp_v0;

    temp_v0 = func_15167A68(arg10, 0, 0xB8, 1, 0xFF, 1);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x90)) = arg1;
        (*(s32 *)((char *)(temp_v0) + 0x92)) = arg2;
        (*(s32 *)((char *)(temp_v0) + 0x94)) = arg3;
        (*(s16 *)((char *)(temp_v0) + 0xA2)) = (s16) arg4;
        temp_a1 = (s32) arg7 >> 1;
        (*(s16 *)((char *)(temp_v0) + 0xA0)) = (s16) ((random_u32() % arg7) - temp_a1);
        sp28 = temp_a1;
        sp2C = (u32) arg7;
        (*(s16 *)((char *)(temp_v0) + 0xA4)) = (s16) ((random_u32(arg7, temp_a1) % arg7) - temp_a1);
        if (arg6 == 5) {
            (*(s16 *)((char *)(temp_v0) + 0x90)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x90)) + ((*(s16 *)((char *)(temp_v0) + 0xA0)) * 4));
            (*(s16 *)((char *)(temp_v0) + 0x92)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x92)) - ((*(s16 *)((char *)(temp_v0) + 0xA2)) * 4));
            (*(s16 *)((char *)(temp_v0) + 0x94)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x94)) + ((*(s16 *)((char *)(temp_v0) + 0xA4)) * 4));
        }
        (*(s32 *)((char *)(temp_v0) + 0x96)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x98)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x9A)) = 0;
        temp_a1_2 = (s32) arg8 >> 1;
        (*(s8 *)((char *)(temp_v0) + 0x9C)) = (s8) ((random_u32(arg7, temp_a1) % arg8) - temp_a1_2);
        sp28 = temp_a1_2;
        sp2C = (u32) arg8;
        (*(s8 *)((char *)(temp_v0) + 0x9D)) = (s8) ((random_u32(arg8, temp_a1_2) % sp2C) - sp28);
        (*(s8 *)((char *)(temp_v0) + 0x9E)) = (s8) ((random_u32() % sp2C) - sp28);
        (*(f32 *)((char *)(temp_v0) + 0xA8)) = (f32) ((f32) ((random_u32() & 0x7F) + 0x8C) * D_800A7220);
        (*(s32 *)((char *)(temp_v0) + 0xA6)) = arg5;
        (*(s32 *)((char *)(temp_v0) + 0x9F)) = arg0;
        (*(s32 *)((char *)(temp_v0) + 0xAC)) = arg6;
        (*(s32 *)((char *)(temp_v0) + 0xB2)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0xB3)) = 0xFF;
        (*(s16 *)((char *)(temp_v0) + 0xAE)) = (s16) arg9;
    }
}

void func_1517A1EC(void *arg0, u32 arg2) {
    s16 temp_a1;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1_2;
    u16 var_v1;
    u32 temp_a2;
    u32 var_a2;
    u8 temp_v1_3;

    var_a2 = arg2;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0xA2));
    (*(s16 *)((char *)(arg0) + 0x90)) = (s16) ((*(s16 *)((char *)(arg0) + 0x90)) + (*(s16 *)((char *)(arg0) + 0xA0)));
    (*(s16 *)((char *)(arg0) + 0x92)) = (s16) ((*(s16 *)((char *)(arg0) + 0x92)) - temp_v1);
    (*(s16 *)((char *)(arg0) + 0x94)) = (s16) ((*(s16 *)((char *)(arg0) + 0x94)) + (*(s16 *)((char *)(arg0) + 0xA4)));
    (*(s16 *)((char *)(arg0) + 0x96)) = (s16) ((*(s16 *)((char *)(arg0) + 0x96)) + (*(s16 *)((char *)(arg0) + 0x9C)));
    (*(s16 *)((char *)(arg0) + 0x98)) = (s16) ((*(s16 *)((char *)(arg0) + 0x98)) + (*(s16 *)((char *)(arg0) + 0x9D)));
    (*(s16 *)((char *)(arg0) + 0x9A)) = (s16) ((*(s16 *)((char *)(arg0) + 0x9A)) + (*(s16 *)((char *)(arg0) + 0x9E)));
    if ((*(s32 *)((char *)(arg0) + 0xAC)) == 5) {
        (*(s16 *)((char *)(arg0) + 0xA2)) = (s16) (temp_v1 + 1);
    }
    var_v1 = (*(s32 *)((char *)(arg0) + 0xA6));
    if ((s32) var_v1 < (s32) (*(s32 *)((char *)(arg0) + 0xAC))) {
        temp_v1_2 = (*(s32 *)((char *)(arg0) + 0xA0));
        temp_a2 = random_u32() % (u16) (*(u16 *)((char *)(arg0) + 0xAE));
        var_v0 = 1;
        if (temp_v1_2 < 0) {
            var_v0 = -1;
        }
        (*(s16 *)((char *)(arg0) + 0xA0)) = (s16) (temp_v1_2 + (-var_v0 * temp_a2));
        temp_a1 = (*(s32 *)((char *)(arg0) + 0xA4));
        var_a2 = random_u32((u8) arg0) % (u16) (*(u8 *)((char *)(arg0) + 0xAE));
        var_v0_2 = 1;
        if (temp_a1 < 0) {
            var_v0_2 = -1;
        }
        (*(s16 *)((char *)(arg0) + 0xA4)) = (s16) (temp_a1 + (-var_v0_2 * var_a2));
        var_v1 = (*(s32 *)((char *)(arg0) + 0xA6));
    }
    var_v0_3 = var_v1 - D_800BE9E4;
    if (var_v0_3 < 0) {
        var_v0_3 = 0;
        var_v1_2 = (*(s32 *)((char *)(arg0) + 0xB3)) - (D_800BE9E4 * 4);
        if (var_v1_2 < 0) {
            var_v1_2 = 0;
        }
        (*(u8 *)((char *)(arg0) + 0xB3)) = (u8) var_v1_2;
    }
    (*(u16 *)((char *)(arg0) + 0xA6)) = (u16) var_v0_3;
    if (((*(s32 *)((char *)(arg0) + 0xB3)) == 0) || ((temp_v1_3 = (*(s32 *)((char *)(arg0) + 0xB2)), (temp_v1_3 != 0)) && ((temp_v1_3 & 0xF) == ((s32) temp_v1_3 >> 4)))) {
        func_1516972C(arg0, D_800BE9E4, var_a2);
    }
}

s32 func_1517A394(s32 arg0) {
    return arg0;
}

void *func_1517A3A0(void *arg0, void *arg1, s32 arg2) {
    s8 sp43;
    void * var_a2;
    f32 temp_f0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;
    void *temp_v1;
    void *var_s1;

    temp_v0_2 = (*(s32 *)((char *)(arg1) + 0x0));
    if ((temp_v0_2 != 0xC) && (temp_v0_2 != 0x59) && (func_1510AEE0((arg2 << 6) + &D_800D9C10, (f32) (*(f32 *)((char *)(arg1) + 0x90)), (f32) (*(f32 *)((char *)(arg1) + 0x92)), (f32) (*(f32 *)((char *)(arg1) + 0x94)), D_800D9B20, D_800D9B1C, (*(f32 *)((char *)&(D_800D35E0) + 0x0)), (*(f32 *)((char *)&(D_800D35E0) + 0x4)), 0, 0) != 0)) {
        if ((*(s32 *)((char *)(arg1) + 0x0)) == 8) {
            temp_v0_3 = (*(s32 *)((char *)(arg1) + 0xB2));
            if (temp_v0_3 & (1 << arg2)) {
                (*(u8 *)((char *)(arg1) + 0xB2)) = (u8) (temp_v0_3 | (0x10 << arg2));
            }
        }
        return arg0;
    }
    if ((*(s32 *)((char *)(arg1) + 0x0)) != 9) {
        (*(u8 *)((char *)(arg1) + 0xB2)) = (u8) ((*(u8 *)((char *)(arg1) + 0xB2)) | (1 << arg2));
    }
    temp_f0 = (*(s32 *)((char *)(arg1) + 0xA8));
    temp_s1 = func_1517A9A8(arg0, (*(s32 *)((char *)(arg1) + 0x9F)));
    func_15043D90((char *)(arg1) + (D_800BE9C0 << 6) + 0x10, (f32) (*(f32 *)((char *)(arg1) + 0x96)), (f32) (*(f32 *)((char *)(arg1) + 0x98)), (f32) (*(f32 *)((char *)(arg1) + 0x9A)), temp_f0, temp_f0, temp_f0, (f32) (*(f32 *)((char *)(arg1) + 0x90)), (f32) (*(f32 *)((char *)(arg1) + 0x92)), (f32) (*(f32 *)((char *)(arg1) + 0x94)));
    (*(s32 *)((char *)(temp_s1) + 0x0)) = 0xDA380003;
    var_s1 = (char *)(temp_s1) + 8;
    (*(s32 *)((char *)(temp_s1) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x10);
    if ((*(s32 *)((char *)(arg1) + 0xB3)) != D_800DD450) {
        (*(s32 *)((char *)(temp_s1) + 0x8)) = 0xE7000000;
        temp_s1_2 = (char *)(var_s1) + 8;
        (*(s32 *)((char *)(var_s1) + 0x4)) = 0;
        temp_v1 = temp_s1_2;
        (*(s32 *)((char *)(var_s1) + 0x8)) = 0xFA000000;
        var_s1 = (char *)(temp_s1_2) + 8;
        (*(s32 *)((char *)(temp_v1) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0xB3));
        D_800DD450 = (s16) (*(s16 *)((char *)(arg1) + 0xB3));
    }
    sp43 = 0;
    temp_v0_4 = (*(s32 *)((char *)(arg1) + 0x0));
    if ((temp_v0_4 == 8) || (temp_v0_4 == 9)) {
        var_a2 = 0x5049D8;
    } else {
        var_a2 = 0x504240;
    }
    temp_v0 = func_15142FBC(var_s1, D_800D2C9C | 0x80000 | 0x2CA0, var_a2, &sp43);
    (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xDE000000;
    (*(s32 *)((char *)(temp_v0) + 0x4)) = &D_8008CDF0;
    return (char *)(temp_v0) + 8;
}

void func_1517A644(f32 arg0, u8 arg1, s16 arg2, s16 arg3, s16 arg4) {
    f32 sp54;
    s32 sp40;
    f32 temp_f0;
    s32 temp_f16;
    s32 temp_f16_2;
    s32 temp_f6;
    void *temp_v0;

    temp_f6 = (s32) arg0;
    if (temp_f6 != 0) {
        temp_v0 = func_15167A68(9, 0, 0xB8, 1, 0xFF, 1);
        if (temp_v0 != NULL) {
            temp_f0 = (f32) arg3;
            func_1510E82C(0, 0, &sp54, 0, 0, 0, (f32) arg2, temp_f0, (f32) arg4, temp_f0, 0, 0);
            temp_f16 = (s32) (sp54 + 3.0f);
            (*(s16 *)((char *)(temp_v0) + 0xB0)) = (s16) temp_f16;
            (*(s16 *)((char *)(temp_v0) + 0x92)) = (s16) temp_f16;
            (*(s32 *)((char *)(temp_v0) + 0x90)) = arg2;
            (*(s32 *)((char *)(temp_v0) + 0x96)) = 0x5A;
            (*(s32 *)((char *)(temp_v0) + 0x94)) = arg4;
            (*(s16 *)((char *)(temp_v0) + 0x98)) = (s16) (random_u32() % 360U);
            (*(s32 *)((char *)(temp_v0) + 0x9A)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0xA0)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0xA4)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0x9F)) = arg1;
            (*(f32 *)((char *)(temp_v0) + 0xA8)) = (f32) ((f32) ((random_u32() % 80U) + 0x64) * D_800A7224);
            (*(s16 *)((char *)(temp_v0) + 0xA2)) = (s16) (s32) (arg0 * D_800A7228);
            temp_f16_2 = (s32) (arg0 * 0.5f);
            (*(s8 *)((char *)(temp_v0) + 0x9C)) = (s8) ((random_u32() % (u32) temp_f6) - temp_f16_2);
            sp40 = temp_f16_2;
            (*(s8 *)((char *)(temp_v0) + 0x9D)) = (s8) ((random_u32() % (u32) temp_f6) - sp40);
            (*(s8 *)((char *)(temp_v0) + 0x9E)) = (s8) ((random_u32() % (u32) temp_f6) - sp40);
            (*(s32 *)((char *)(temp_v0) + 0xA6)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0xB3)) = 0xFF;
        }
    }
}

void func_1517A84C(void *arg0) {
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_v0_3;
    u16 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0xA6));
    if (temp_v0 == 0) {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0xA2));
        (*(s16 *)((char *)(arg0) + 0x90)) = (s16) ((*(s16 *)((char *)(arg0) + 0x90)) + (*(s16 *)((char *)(arg0) + 0xA0)));
        (*(s16 *)((char *)(arg0) + 0x92)) = (s16) ((*(s16 *)((char *)(arg0) + 0x92)) + temp_v0_2);
        (*(s16 *)((char *)(arg0) + 0x94)) = (s16) ((*(s16 *)((char *)(arg0) + 0x94)) + (*(s16 *)((char *)(arg0) + 0xA4)));
        if (temp_v0_2 > 0) {
            (*(s16 *)((char *)(arg0) + 0xA2)) = (s16) (temp_v0_2 - 1);
            if ((*(s32 *)((char *)(arg0) + 0xA2)) <= 0) {
                (*(s32 *)((char *)(arg0) + 0xA2)) = -3;
            }
        }
        temp_v1 = (*(s32 *)((char *)(arg0) + 0xB0));
        if (((*(s32 *)((char *)(arg0) + 0x92)) - temp_v1) <= 0) {
            (*(s32 *)((char *)(arg0) + 0x96)) = 0x5A;
            (*(s32 *)((char *)(arg0) + 0x9A)) = 0;
            (*(s32 *)((char *)(arg0) + 0xA6)) = 0x3CU;
            (*(s32 *)((char *)(arg0) + 0x92)) = temp_v1;
            return;
        }
        (*(s16 *)((char *)(arg0) + 0x96)) = (s16) ((*(s16 *)((char *)(arg0) + 0x96)) + (*(s16 *)((char *)(arg0) + 0x9C)));
        (*(s16 *)((char *)(arg0) + 0x98)) = (s16) ((*(s16 *)((char *)(arg0) + 0x98)) + (*(s16 *)((char *)(arg0) + 0x9D)));
        (*(s16 *)((char *)(arg0) + 0x9A)) = (s16) ((*(s16 *)((char *)(arg0) + 0x9A)) + (*(s16 *)((char *)(arg0) + 0x9E)));
        return;
    }
    temp_v0_3 = temp_v0 - D_800BE9E4;
    if (temp_v0_3 > 0) {
        (*(u16 *)((char *)(arg0) + 0xA6)) = (u16) temp_v0_3;
        (*(s8 *)((char *)(arg0) + 0xB3)) = (s8) ((s32) (temp_v0_3 << 8) / 60);
        return;
    }
    func_1516972C();
}

s32 func_1517A958(s32 arg0, s32 arg1, void * arg2, void * arg3) {
    s32 var_a0;

    var_a0 = arg0;
    D_800DD450 = -1;
    if ((arg1 == 0xC) || (arg1 == 0x59)) {
        var_a0 = func_1517A394(0);
    }
    return var_a0;
}

void *func_1517A9A8(void *arg0, s32 arg1) {
    void * sp34;
    void *var_a0;

    var_a0 = arg0;
    if (arg1 != D_800DD1B0) {
        var_a0 = func_15094F70(&D_80090614, arg1 << 8, &sp34, 0, 0, 0, 2, 3);
        D_800DD1B0 = arg1;
    }
    return var_a0;
}

void func_1517AA20(f32 arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4) {
    f32 var_f4;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s1;
    u32 temp_t9;

    if (!(arg0 < 12.0f)) {
        var_s1 = 0;
        if (arg4 > 0) {
            do {
                temp_s0 = random_u32() & 0x3F;
                temp_s2 = (random_u32() & 0x3F) - 0x20;
                temp_t9 = (u32) (random_u32() % (u32) (s32) (arg0 * 8.0f)) >> 4;
                var_f4 = (f32) temp_t9;
                if ((s32) temp_t9 < 0) {
                    var_f4 += 4294967296.0f;
                }
                func_1517A644(var_f4 + (arg0 * 0.5f), random_u32() & 1, (s16) (arg1 + (temp_s0 - 0x20)), arg2, (s16) (arg3 + temp_s2));
                var_s1 += 1;
            } while (var_s1 != arg4);
        }
    }
}

void func_1517AB7C(void * arg1, s32 arg2) {
    func_1510B7B4(arg2, arg2);
}
