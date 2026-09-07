/**
 * Auto-decompiled from asm/13AE20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 func_150489B0();                              /* extern */
s32 func_1506196C();              /* extern */
s32 func_150A3FC4();    /* extern */
void * func_150A7D00();             /* extern */
s32 func_1510D0EC();                    /* extern */
void * func_1510E7A4(); /* extern */
void *func_15167A68();        /* extern */
s32 func_1510E388();
extern s32 D_80089470;
extern s32 D_80091770;
extern f32 D_800A2D20;
extern f32 D_800A2D24;
extern f32 D_800A2D28;
extern f32 D_800A2D2C;
extern f32 D_800A2D30;
extern f32 D_800A2D34;
extern f32 D_800A2D38;
extern f32 D_800A2D3C;
extern f32 D_800A2D40;
extern f32 D_800A2D44;
extern s32 D_800DD1B4;
extern s16 D_800DD1C6;

void *func_1510D970(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp28;
    s32 sp20;
    s32 temp_t0;
    s32 var_a0;
    s32 var_a0_2;
    void *temp_v0;
    void *var_v1;
    void *var_v1_2;

    temp_t0 = arg3 & 1;
    sp28 = 0x128;
    if (temp_t0 != 0) {
        sp28 = 0x13A;
    }
    sp20 = temp_t0;
    temp_v0 = func_15167A68(0x4B, 0, sp28, 1, 0xFF, 1);
    if (temp_v0 != NULL) {
        var_a0 = 0;
        var_v1 = temp_v0;
        do {
            var_a0 += 1;
            var_v1 = (char *)(var_v1) + 0x40;
            (*(s32 *)((char *)(var_v1) + 0x56)) = 0;
            (*(s32 *)((char *)(var_v1) + 0x58)) = 0x800;
            (*(s32 *)((char *)(var_v1) + 0x5A)) = 0;
            (*(s32 *)((char *)(var_v1) + 0x66)) = 0;
            (*(s32 *)((char *)(var_v1) + 0x68)) = 0;
            (*(s32 *)((char *)(var_v1) + 0x6A)) = 0;
            (*(s32 *)((char *)(var_v1) + 0x76)) = 0;
            (*(s32 *)((char *)(var_v1) + 0x78)) = 0;
            (*(s32 *)((char *)(var_v1) + 0x7A)) = 0x800;
            (*(s32 *)((char *)(var_v1) + 0x86)) = 0;
            (*(s32 *)((char *)(var_v1) + 0x88)) = 0x800;
            (*(s32 *)((char *)(var_v1) + 0x8A)) = 0x800;
        } while (var_a0 < 2);
        var_a0_2 = 1;
        (*(s8 *)((char *)(temp_v0) + 0x120)) = (s8) arg0;
        var_v1_2 = (char *)(temp_v0) + 2;
        (*(s32 *)((char *)(temp_v0) + 0x110)) = arg1;
        (*(s8 *)((char *)(temp_v0) + 0x121)) = (s8) arg2;
        (*(s8 *)((char *)(temp_v0) + 0x124)) = (s8) arg4;
        if (temp_t0 != 0) {
            (*(s32 *)((char *)(temp_v0) + 0x128)) = 0x7FFF;
            do {
                var_a0_2 += 4;
                (*(s32 *)((char *)(var_v1_2) + 0x12A)) = 0x7FFF;
                (*(s32 *)((char *)(var_v1_2) + 0x12C)) = 0x7FFF;
                (*(s32 *)((char *)(var_v1_2) + 0x12E)) = 0x7FFF;
                var_v1_2 = (char *)(var_v1_2) + 8;
                (*(s32 *)((char *)(var_v1_2) + 0x120)) = 0x7FFF;
            } while (var_a0_2 != 9);
        }
    }
    return temp_v0;
}

void func_1510DA84(void *arg0) {
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    s32 sp70;
    f32 *sp6C;
    u8 sp6B;
    f32 sp64;
    f32 sp60;
    void *sp58;
    s32 sp50;
    f32 *temp_a3;
    f32 *temp_v0_3;
    f32 *var_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f10;
    f32 temp_f14;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f16;
    f32 var_f16_2;
    f32 var_f16_3;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f4;
    s32 var_v1_2;
    u16 temp_t9;
    u8 temp_v0;
    u8 var_v0;
    u8 var_v1;
    void *temp_t3;
    void *temp_v0_2;
    void *temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x120));
    (*(s32 *)((char *)(arg0) + 0x123)) = 0;
    if (temp_v0 != 0) {
        var_f16 = sp74;
        if (temp_v0 != 1) {
            var_f12 = sp80;
            goto block_12;
        }
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x110));
        if ((*(s32 *)((char *)(temp_v1) + 0x6E)) != 1) {
            temp_a3 = (*(s32 *)((char *)(temp_v1) + 0x94)) + 0x128;
            sp58 = temp_v1;
            sp6C = temp_a3;
            if (func_150A3FC4((f32) (*(f32 *)((char *)(temp_v1) + 0x10)), (f32) (*(f32 *)((char *)(temp_v1) + 0x14)), 1, 0, temp_a3, &sp78) == 0) {
                temp_f0 = (f32) (*(f32 *)((char *)(sp58) + 0x12));
                func_1510E7A4(0, sp6C, &sp78, 0, 0, 0, (f32) (*(f32 *)((char *)(sp58) + 0x10)), temp_f0, (f32) (*(f32 *)((char *)(sp58) + 0x14)), temp_f0, (*(f32 *)((char *)(sp58) + 0x71)) + 1, 0, D_800A2D20, temp_f0);
            }
            sp70 = 0;
            sp84 = (f32) (*(f32 *)((char *)(sp58) + 0x10));
            var_f12 = (f32) (*(f32 *)((char *)(sp58) + 0x12));
            sp7C = (f32) (*(f32 *)((char *)(sp58) + 0x14));
            sp6B = 0;
            var_f16 = (f32) ((*(f32 *)((char *)(sp58) + 0x4D)) * 4) * (*(f32 *)((char *)(sp58) + 0x2C));
            goto block_12;
        }
    } else {
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x110));
        sp84 = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x14));
        var_f12 = (*(s32 *)((char *)(temp_v0_2) + 0x18));
        sp7C = (*(s32 *)((char *)(temp_v0_2) + 0x1C));
        sp78 = (*(s32 *)((char *)(temp_v0_2) + 0x180));
        if ((*(s32 *)((char *)(temp_v0_2) + 0x4)) == 0x25) {
            var_f12 = sp78;
        }
        sp6C = (char *)(temp_v0_2) + 0x18C;
        sp70 = (*(s32 *)((char *)(temp_v0_2) + 0x188));
        temp_t9 = (*(s32 *)((char *)(temp_v0_2) + 0x160));
        var_f4 = (f32) temp_t9;
        if ((s32) temp_t9 < 0) {
            var_f4 += 4294967296.0f;
        }
        var_f16 = var_f4 * (*(s32 *)((char *)(temp_v0_2) + 0x14C));
        sp6B = ((s32) (*(s32 *)((char *)(temp_v0_2) + 0x7A)) >> 8) + 0x20;
block_12:
        (*(s32 *)((char *)(arg0) + 0x114)) = sp84;
        (*(s32 *)((char *)(arg0) + 0x118)) = sp7C;
        (*(s32 *)((char *)(arg0) + 0x11C)) = sp78;
        if (!(var_f12 < sp78)) {
            sp80 = var_f12;
            sp74 = var_f16;
            var_f16_2 = sp74;
            if (func_1510E388(var_f12, sp70, sp6C, &sp98, &sp9C) != 0) {
                var_v1 = sp6B;
                if (var_f16_2 == 0.0f) {
                    var_f16_2 = 1.0f;
                }
                var_f2 = 200.0f + (sp80 - sp78);
                if (var_f2 == 0.0f) {
                    var_f2 = D_800A2D24;
                }
                if (var_f2 > 800.0f) {
                    var_f2 = 800.0f;
                }
                temp_f14 = var_f16_2 / var_f2;
                if ((*(s32 *)((char *)(arg0) + 0x124)) & 1) {
                    var_v0 = (*(s32 *)((char *)(arg0) + 0x122));
                    if (var_v0 != 0xFF) {
                        var_v0 += D_800BE9E4 * 5;
                        if ((s32) var_v0 >= 0x100) {
                            var_v0 = 0xFF;
                        }
                    }
                } else {
                    var_v0 = (u8) (s32) (32000.0f / var_f2);
                    if ((s32) var_v0 >= 0xA1) {
                        var_v0 = 0xA0;
                    }
                }
                (*(s32 *)((char *)(arg0) + 0x122)) = var_v0;
                spAC = 0.0f;
                spB4 = -100.0f;
                if (sp6B != 0) {
                    sp50 = (s32) sp6B;
                    sp94 = 0.0f;
                    spA0 = temp_f14;
                    sp64 = func_15048A40(0, temp_f14, sp6B);
                    temp_f0_2 = func_150489B0(sp6B);
                    var_v1 = (u8) sp50;
                    sp60 = temp_f0_2;
                    spAC = (spAC * temp_f0_2) + (spB4 * sp64);
                    spB4 = (spB4 * temp_f0_2) - (sp94 * sp64);
                }
                var_f16_3 = -100.0f;
                var_f18 = 0.0f;
                var_v0_2 = &spAC;
                temp_f0_3 = (spB4 * sp9C) + (sp98 * spAC);
                if (var_v1 != 0) {
                    var_f16_3 = (-100.0f * sp60) + 0.0f;
                    var_f18 = 0.0f - (-100.0f * sp64);
                }
                spB0 = temp_f0_3;
                spBC = (var_f18 * sp9C) + (sp98 * var_f16_3);
                var_f12_2 = (spB4 * spB4) + ((spAC * spAC) + (temp_f0_3 * temp_f0_3));
                if (D_800A2D28 < var_f12_2) {
                    var_f12_2 = D_800A2D2C;
                }
                if (var_f12_2 < D_800A2D30) {
                    var_f12_2 = D_800A2D34;
                }
                temp_f0_4 = sqrtf(var_f12_2);
                spB8 = var_f16_3;
                spC0 = var_f18;
                var_f2_2 = (var_f18 * var_f18) + ((var_f16_3 * var_f16_3) + (spBC * spBC));
                if (D_800A2D38 < var_f2_2) {
                    var_f2_2 = D_800A2D3C;
                }
                if (var_f2_2 < D_800A2D40) {
                    var_f2_2 = D_800A2D44;
                }
                temp_f0_5 = sqrtf(var_f2_2);
                var_v1_2 = 0;
                var_f18_2 = *var_v0_2 * 100.0f;
                if (0 != 4) {
                    do {
                        temp_f10 = (*(s32 *)((char *)(var_v0_2) + 0xC));
                        var_v0_2 += 4;
                        (*(f32 *)((char *)(var_v0_2) - 0x4)) = (f32) ((var_f18_2 * temp_f14) / temp_f0_4);
                        (*(f32 *)((char *)(var_v0_2) + 0x8)) = (f32) ((temp_f10 * 100.0f * temp_f14) / temp_f0_5);
                        (*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6) + var_v1_2)) + 0x90)) = (s16) (s32) (*(s16 *)((char *)(var_v0_2) - 0x4));
                        (*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6) + var_v1_2)) + 0xA0)) = (s16) (s32) (*(s16 *)((char *)(var_v0_2) + 0x8));
                        (*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6) + var_v1_2)) + 0xB0)) = (s16) (s32) -(*(s16 *)((char *)(var_v0_2) - 0x4));
                        temp_t3 = (char *)(arg0) + (D_800BE9C0 << 6) + var_v1_2;
                        var_v1_2 += 2;
                        (*(s16 *)((char *)(temp_t3) + 0xC0)) = (s16) (s32) -(*(s16 *)((char *)(var_v0_2) + 0x8));
                        var_f18_2 = (*(s32 *)((char *)(var_v0_2) + 0x0)) * 100.0f;
                    } while (var_v1_2 != 4);
                }
                temp_v0_3 = var_v0_2 + 4;
                (*(f32 *)((char *)(temp_v0_3) - 0x4)) = (f32) ((var_f18_2 * temp_f14) / temp_f0_4);
                (*(f32 *)((char *)(temp_v0_3) + 0x8)) = (f32) (((*(f32 *)((char *)(var_v0_2) + 0xC)) * 100.0f * temp_f14) / temp_f0_5);
                (*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6) + var_v1_2)) + 0x90)) = (s16) (s32) (*(s16 *)((char *)(temp_v0_3) - 0x4));
                (*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6) + var_v1_2)) + 0xA0)) = (s16) (s32) (*(s16 *)((char *)(temp_v0_3) + 0x8));
                (*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6) + var_v1_2)) + 0xB0)) = (s16) (s32) -(*(s16 *)((char *)(temp_v0_3) - 0x4));
                (*(s16 *)((char *)(((char *)(arg0) + (D_800BE9C0 << 6) + var_v1_2)) + 0xC0)) = (s16) (s32) -(*(s16 *)((char *)(temp_v0_3) + 0x8));
                (*(s32 *)((char *)(arg0) + 0x123)) = 1;
            }
        }
    }
}

void *func_1510E120(void *arg0, void *arg1, s32 arg2) {
    s32 sp24;
    s32 sp20;
    s32 temp_t9;
    s32 temp_v0;
    u8 temp_a0;
    u8 temp_a2;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_v0_2;
    void *var_s0;
    void *var_s0_2;
    void *var_s0_3;

    var_s0 = arg0;
    if ((*(s32 *)((char *)(arg1) + 0x123)) != 0) {
        func_150A7D00((char *)(arg1) + (D_800BE9C0 << 6) + 0x10, (*(s32 *)((char *)(arg1) + 0x114)), (*(s32 *)((char *)(arg1) + 0x11C)), (*(s32 *)((char *)(arg1) + 0x118)));
        (*(s32 *)((char *)(var_s0) + 0x0)) = 0xDA380003;
        var_s0_2 = (char *)(var_s0) + 8;
        (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x10);
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x121));
        if (D_800DD1B4 != temp_v1) {
            D_800DD1B4 = (s32) temp_v1;
            temp_v0 = func_1510D0EC(*(&D_80091770 + ((*(s32 *)((char *)(arg1) + 0x121)) * 4)), 0, 0x3E, 0);
            (*(s32 *)((char *)(var_s0) + 0x8)) = 0xE7000000;
            (*(s32 *)((char *)(var_s0_2) + 0x4)) = 0;
            temp_s0 = (char *)(var_s0_2) + 8;
            (*(s32 *)((char *)(var_s0_2) + 0x8)) = 0xFD900000;
            (*(s32 *)((char *)(temp_s0) + 0x4)) = temp_v0;
            temp_s0_2 = (char *)(temp_s0) + 8;
            (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xF3000000;
            (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0x077FF000;
            var_s0_2 = (char *)(temp_s0_2) + 8;
        }
        (*(s32 *)((char *)(var_s0_2) + 0x0)) = 0xE7000000;
        (*(s32 *)((char *)(var_s0_2) + 0x4)) = 0;
        temp_s0_3 = (char *)(var_s0_2) + 8;
        (*(s32 *)((char *)(var_s0_2) + 0x8)) = 0xD9FFF9FF;
        (*(s32 *)((char *)(temp_s0_3) + 0x4)) = 0;
        var_s0_3 = (char *)(temp_s0_3) + 8;
        temp_a0 = (*(s32 *)((char *)(arg1) + 0x120));
        temp_a2 = (*(s32 *)((char *)(arg1) + 0x122));
        switch (temp_a0) {                          /* irregular */
        case 0:
            sp24 = (s32) temp_a2;
            sp20 = func_1506196C((*(s32 *)((char *)(arg1) + 0x110)), arg2, temp_a2, 0xE7000000);
            break;
        case 1:
            temp_v0_2 = (*(s32 *)((char *)(arg1) + 0x110));
            sp20 = (s32) (((*(s32 *)((char *)(((char *)(temp_v0_2) + arg2)) + 0x8B)) * (*(s32 *)((char *)(temp_v0_2) + 0x8A))) + 0xFF) >> 8;
            break;
        }
        temp_t9 = (s32) ((temp_a2 * sp20) + 0xFF) >> 8;
        if (temp_t9 != D_800DD1C6) {
            D_800DD1C6 = (s16) temp_t9;
            temp_s0_4 = (char *)(var_s0_3) + 8;
            (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xE7000000;
            (*(s32 *)((char *)(var_s0_3) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_s0_4) + 0x4)) = (s32) (temp_t9 & 0xFF);
            (*(s32 *)((char *)(var_s0_3) + 0x8)) = 0xFA000100;
            var_s0_3 = (char *)(temp_s0_4) + 8;
        }
        (*(s32 *)((char *)(var_s0_3) + 0x0)) = 0x01004008;
        temp_s0_5 = (char *)(var_s0_3) + 8;
        (*(s32 *)((char *)(var_s0_3) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x90);
        temp_s0_6 = (char *)(temp_s0_5) + 8;
        (*(s32 *)((char *)(var_s0_3) + 0x8)) = 0x05000204;
        (*(s32 *)((char *)(temp_s0_5) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0x05000406;
        (*(s32 *)((char *)(temp_s0_6) + 0x4)) = 0;
        temp_s0_7 = (char *)(temp_s0_6) + 8;
        (*(s32 *)((char *)(temp_s0_6) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_s0_7) + 0x4)) = 0;
        var_s0 = (char *)(temp_s0_7) + 8;
    }
    return var_s0;
}

s32 func_1510E388(s32 arg0, s32 arg1, f32 *arg2, f32 *arg3) {
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f22;
    f32 var_f0;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    f32 var_f2;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t4;
    s16 temp_t4_2;
    s16 temp_t5;
    s16 temp_t5_2;
    s32 temp_at;
    s32 var_a0;
    s32 var_a1;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t2;
    void *temp_t2_2;

    var_t0 = 0;
    if ((arg0 == 0) && (arg1 == 0)) {
        *arg3 = 0.0f;
        *arg2 = 0.0f;
        return 0;
    }
    do {
        var_a1 = 1;
        if (var_t0 >= 3) {
            var_a0 = var_t0 - 3;
        } else {
            var_a0 = var_t0;
        }
        temp_at = var_t0 < 3;
        if (var_a0 != 2) {
            var_v0 = var_a0 + 1;
        } else {
            var_v0 = 0;
        }
        var_t0 += 1;
        if (var_v0 != 2) {
            var_v1 = var_v0 + 1;
        } else {
            var_v1 = 0;
        }
        if (arg1 != 0) {
            temp_t1 = arg1 + (var_v0 * 6);
            temp_t2 = arg1 + (var_a0 * 6);
            temp_t3 = (*(s32 *)((char *)(temp_t2) + 0x0));
            temp_t4 = (*(s32 *)((char *)(temp_t2) + 0x2));
            temp_t5 = (*(s32 *)((char *)(temp_t2) + 0x4));
            temp_s2 = arg1 + (var_v1 * 6);
            var_f2 = (f32) ((*(f32 *)((char *)(temp_t1) + 0x2)) - temp_t4);
            var_f0 = (f32) ((*(f32 *)((char *)(temp_t1) + 0x0)) - temp_t3);
            var_f12 = (f32) ((*(f32 *)((char *)(temp_t1) + 0x4)) - temp_t5);
            var_f14 = (f32) ((*(f32 *)((char *)(temp_s2) + 0x0)) - temp_t3);
            var_f16 = (f32) ((*(f32 *)((char *)(temp_s2) + 0x2)) - temp_t4);
            var_f18 = (f32) ((*(f32 *)((char *)(temp_s2) + 0x4)) - temp_t5);
        } else {
            temp_t1_2 = (*(s32 *)((char *)(arg0) + (var_v0 * 4)));
            temp_t2_2 = (*(s32 *)((char *)(arg0) + (var_a0 * 4)));
            temp_t4_2 = (*(s32 *)((char *)(temp_t2_2) + 0x2));
            temp_t3_2 = (*(s32 *)((char *)(temp_t2_2) + 0x0));
            temp_t5_2 = (*(s32 *)((char *)(temp_t2_2) + 0x4));
            temp_s2_2 = (*(s32 *)((char *)(arg0) + (var_v1 * 4)));
            var_f2 = (f32) ((*(f32 *)((char *)(temp_t1_2) + 0x2)) - temp_t4_2);
            var_f0 = (f32) ((*(f32 *)((char *)(temp_t1_2) + 0x0)) - temp_t3_2);
            var_f12 = (f32) ((*(f32 *)((char *)(temp_t1_2) + 0x4)) - temp_t5_2);
            var_f14 = (f32) ((*(f32 *)((char *)(temp_s2_2) + 0x0)) - temp_t3_2);
            var_f18 = (f32) ((*(f32 *)((char *)(temp_s2_2) + 0x4)) - temp_t5_2);
            var_f16 = (f32) ((*(f32 *)((char *)(temp_s2_2) + 0x2)) - temp_t4_2);
        }
        if (temp_at == 0) {
            temp_f20 = var_f0;
            var_f0 = var_f14;
            var_f14 = temp_f20;
            temp_f20_2 = var_f2;
            var_f2 = var_f16;
            var_f16 = temp_f20_2;
            temp_f20_3 = var_f12;
            var_f12 = var_f18;
            var_f18 = temp_f20_3;
        }
        temp_f22 = var_f0 * var_f18;
        temp_f20_4 = var_f14 * var_f12;
        if (temp_f22 == temp_f20_4) {
            var_a1 = 0;
        }
        if (var_f14 == 0.0f) {
            var_a1 = 0;
        }
        if (var_t0 == 6) {
            var_a1 = 2;
        }
    } while (var_a1 == 0);
    if (var_a1 == 2) {
        *arg2 = 0.0f;
        *arg3 = 0.0f;
        return 0;
    }
    temp_f12 = ((var_f14 * var_f2) - (var_f0 * var_f16)) / (temp_f20_4 - temp_f22);
    *arg3 = temp_f12;
    *arg2 = (var_f16 - (temp_f12 * var_f18)) / var_f14;
    return 1;
}

void *func_1510E634(void *arg0, void * arg1, void * arg2) {
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDA380003;
    (*(s32 *)((char *)(arg0) + 0x4)) = &D_80089470;
    return (char *)(arg0) + 8;
}
