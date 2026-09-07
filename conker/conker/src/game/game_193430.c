/**
 * Auto-decompiled from asm/193430.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 func_150489B0();                              /* extern */
s32 func_15094F70(); /* extern */
void * func_15142FBC();               /* extern */
void *func_15167A68();        /* extern */
void * func_1517E05C();             /* extern */
extern s32 D_800903F4;
extern s32 D_800A4AC8;
extern f32 D_800A6C94;
extern s32 D_800D2C9C;
extern s16 D_800DCE40;
extern s32 D_800DD220;
extern s32 D_800DD224;
extern void *D_800DD228;
extern s32 D_800DD230;

void func_15165F80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    void *sp30;
    f32 sp2C;
    f32 temp_f12;
    f32 temp_f8;
    s32 var_a0;
    s32 var_a1;
    void *temp_v0;
    void *var_v0;
    void *var_v1;

    temp_v0 = func_15167A68(4, arg8, 0xA8, 1, (s32) arg7, 1);
    if (temp_v0 != NULL) {
        var_a0 = 0;
        if (arg0 == -1) {
            var_v1 = temp_v0;
            do {
                var_a0 += 0x40;
                var_v1 = (char *)(var_v1) + 0x40;
                (*(s32 *)((char *)(var_v1) - 0x2E)) = arg2;
                (*(s32 *)((char *)(var_v1) - 0x1E)) = arg2;
                (*(s32 *)((char *)(var_v1) - 0xE)) = arg2;
                (*(s32 *)((char *)(var_v1) + 0x2)) = arg2;
                (*(s32 *)((char *)(var_v1) - 0x2A)) = 0;
                (*(s32 *)((char *)(var_v1) - 0x1A)) = 0;
                (*(s32 *)((char *)(var_v1) - 0xA)) = 0;
                (*(s32 *)((char *)(var_v1) + 0x6)) = 0;
            } while (var_a0 != 0x80);
            (*(s32 *)((char *)(temp_v0) + 0x95)) = 0;
        } else {
            sp30 = temp_v0;
            temp_f12 = (f32) arg0 * D_800A6C94;
            sp2C = temp_f12;
            (*(s8 *)((char *)(temp_v0) + 0x91)) = (s8) (s32) (sinf(temp_f12) * 127.0f);
            temp_f8 = -cosf(temp_f12) * 127.0f;
            (*(s32 *)((char *)(temp_v0) + 0x95)) = 1;
            (*(s8 *)((char *)(temp_v0) + 0x90)) = (s8) (s32) temp_f8;
        }
        var_a1 = 0;
        var_v0 = temp_v0;
        do {
            var_a1 += 1;
            var_v0 = (char *)(var_v0) + 0x40;
            (*(s32 *)((char *)(var_v0) - 0x28)) = 0x2000;
            (*(s32 *)((char *)(var_v0) - 0x26)) = 0x2000;
            (*(s32 *)((char *)(var_v0) - 0x18)) = 0x2800;
            (*(s32 *)((char *)(var_v0) - 0x16)) = 0x2000;
            (*(s32 *)((char *)(var_v0) - 0x8)) = 0x2800;
            (*(s32 *)((char *)(var_v0) - 0x6)) = 0x2800;
            (*(s32 *)((char *)(var_v0) + 0x8)) = 0x2000;
            (*(s32 *)((char *)(var_v0) + 0xA)) = 0x2800;
        } while (var_a1 != 2);
        (*(s32 *)((char *)(temp_v0) + 0x9A)) = arg2;
        (*(s32 *)((char *)(temp_v0) + 0x9E)) = 1;
        (*(s8 *)((char *)(temp_v0) + 0x92)) = (s8) arg5;
        (*(s8 *)((char *)(temp_v0) + 0x93)) = (s8) arg5;
        (*(s16 *)((char *)(temp_v0) + 0x98)) = (s16) arg1;
        (*(s16 *)((char *)(temp_v0) + 0x9C)) = (s16) arg3;
        (*(s16 *)((char *)(temp_v0) + 0x96)) = (s16) arg4;
        (*(s8 *)((char *)(temp_v0) + 0x94)) = (s8) arg6;
        func_1517E05C(arg1, arg2, arg3, temp_v0);
    }
}

void func_15166118(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s32 var_a2;
    void *temp_v0;
    void *var_v1;

    temp_v0 = func_15167A68(4, arg9, 0xA8, 1, (s32) arg8, 1);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x95)) = 2;
        var_a2 = 0;
        var_v1 = temp_v0;
        do {
            var_a2 += 1;
            var_v1 = (char *)(var_v1) + 0x40;
            (*(s32 *)((char *)(var_v1) - 0x28)) = 0x2000;
            (*(s32 *)((char *)(var_v1) - 0x26)) = 0x2000;
            (*(s32 *)((char *)(var_v1) - 0x18)) = 0x2800;
            (*(s32 *)((char *)(var_v1) - 0x16)) = 0x2000;
            (*(s32 *)((char *)(var_v1) - 0x8)) = 0x2800;
            (*(s32 *)((char *)(var_v1) - 0x6)) = 0x2800;
            (*(s32 *)((char *)(var_v1) + 0x8)) = 0x2000;
            (*(s32 *)((char *)(var_v1) + 0xA)) = 0x2800;
        } while (var_a2 != 2);
        (*(s32 *)((char *)(temp_v0) + 0x9E)) = 1;
        (*(s8 *)((char *)(temp_v0) + 0x92)) = (s8) arg6;
        (*(s8 *)((char *)(temp_v0) + 0x93)) = (s8) arg6;
        (*(s16 *)((char *)(temp_v0) + 0x98)) = (s16) arg2;
        (*(s16 *)((char *)(temp_v0) + 0x9A)) = (s16) arg3;
        (*(s16 *)((char *)(temp_v0) + 0x9C)) = (s16) arg4;
        (*(s16 *)((char *)(temp_v0) + 0x96)) = (s16) arg5;
        (*(s8 *)((char *)(temp_v0) + 0x94)) = (s8) arg7;
        (*(s8 *)((char *)(temp_v0) + 0xA0)) = (s8) arg0;
        (*(s8 *)((char *)(temp_v0) + 0xA1)) = (s8) arg1;
        func_1517E05C(arg2, (s16) arg3, arg4, 2);
    }
}

void func_15166204(void *arg0) {
    s32 temp_v0;

    (*(s16 *)((char *)(arg0) + 0x9E)) = (s16) ((*(s16 *)((char *)(arg0) + 0x9E)) + ((*(s16 *)((char *)(arg0) + 0x96)) * D_800BE9E4));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x92)) - D_800BE9E4;
    if (temp_v0 <= 0) {
        func_1516972C();
        return;
    }
    (*(u8 *)((char *)(arg0) + 0x92)) = (u8) temp_v0;
}

void *func_15166268(void *arg0, void *arg1, void * arg2) {
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spC8;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp7C;
    f32 sp78;
    f32 *temp_v0_6;
    f32 *var_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 var_f10;
    f32 var_f12;
    f32 var_f14;
    f32 var_f8;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a2;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t1;
    s16 temp_t2;
    s16 temp_t3;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v1_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_t7;
    s32 var_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_a3_3;
    void *temp_a3_4;
    void *temp_t8;
    void *var_a3;

    var_a3 = arg0;
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x92));
    if (temp_v0 != 0) {
        temp_t4 = (*(s32 *)((char *)(arg1) + 0x98));
        spD4 = (s32) (*(s32 *)((char *)(arg1) + 0x9A));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x93));
        temp_t5 = (*(s32 *)((char *)(arg1) + 0x9C));
        temp_a2 = (*(s32 *)((char *)(arg1) + 0x9E));
        temp_t7 = (s32) (temp_v1 * 3) / 4;
        if ((s32) temp_v0 < ((s32) temp_v1 >> 1)) {
            (*(s16 *)((char *)(arg1) + 0x96)) = (s16) ((s32) ((*(s16 *)((char *)(arg1) + 0x96)) * 0xE) / 15);
            if ((*(s32 *)((char *)(arg1) + 0x96)) <= 0) {
                (*(s32 *)((char *)(arg1) + 0x96)) = 1;
            }
        }
        temp_v0_2 = (*(s32 *)((char *)(arg1) + 0x92));
        if ((s32) temp_v0_2 < temp_t7) {
            spC8 = (s32) (temp_v0_2 * 0xFF) / temp_t7;
        } else {
            spC8 = 0xFF;
        }
        temp_v0_3 = (*(s32 *)((char *)(arg1) + 0x95));
        if (temp_v0_3 == 0) {
            temp_v0_4 = temp_t4 - temp_a2;
            temp_v1_2 = temp_t5 - temp_a2;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x10)) = temp_v0_4;
            temp_a1 = temp_t4 + temp_a2;
            temp_t0 = temp_t5 + temp_a2;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x14)) = temp_v1_2;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x20)) = temp_a1;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x24)) = temp_v1_2;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x30)) = temp_a1;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x34)) = temp_t0;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x40)) = temp_v0_4;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x44)) = temp_t0;
        } else if (temp_v0_3 == 1) {
            temp_lo = (s32) ((*(s32 *)((char *)(arg1) + 0x90)) * temp_a2) / 127;
            temp_t0_2 = temp_t4 - temp_lo;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x10)) = temp_t0_2;
            temp_t2 = temp_t4 + temp_lo;
            temp_lo_2 = (s32) ((*(s32 *)((char *)(arg1) + 0x91)) * temp_a2) / 127;
            temp_t1 = temp_t5 - temp_lo_2;
            temp_a1_2 = spD4 + temp_a2;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x12)) = temp_a1_2;
            temp_t3 = temp_t5 + temp_lo_2;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x14)) = temp_t1;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x20)) = temp_t2;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x22)) = temp_a1_2;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x24)) = temp_t3;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x30)) = temp_t2;
            temp_v0_5 = spD4 - temp_a2;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x32)) = temp_v0_5;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x34)) = temp_t3;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x40)) = temp_t0_2;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x42)) = temp_v0_5;
            (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6))) + 0x44)) = temp_t1;
        } else {
            sp8C = 0.0f;
            temp_f0 = (f32) -temp_a2;
            sp98 = 0.0f;
            spA4 = 0.0f;
            spB0 = 0.0f;
            temp_f2 = (f32) temp_a2;
            sp84 = temp_f0;
            spA0 = temp_f0;
            spA8 = temp_f0;
            spAC = temp_f0;
            sp88 = temp_f2;
            sp90 = temp_f2;
            sp94 = temp_f2;
            sp9C = temp_f2;
            spD0 = (s32) temp_t5;
            spD8 = (s32) temp_t4;
            temp_f20 = func_15048A40(0U, (*(s32 *)((char *)(arg1) + 0xA0)), temp_t7, temp_a2, var_a3);
            sp78 = func_15048A40((*(s32 *)((char *)(arg1) + 0xA1)));
            sp7C = func_150489B0((*(s32 *)((char *)(arg1) + 0xA0)));
            temp_f0_2 = func_150489B0((*(s32 *)((char *)(arg1) + 0xA1)));
            temp_f22 = (f32) temp_t4;
            temp_f24 = (f32) spD4;
            var_v0 = &sp84;
            var_v1 = 0;
            temp_f26 = (f32) temp_t5;
            temp_f4 = (*(s32 *)((char *)(var_v0) + 0x4));
            var_f14 = (*(s32 *)((char *)(var_v0) + 0x8));
            var_f10 = sp7C * temp_f4;
            var_f8 = temp_f20 * temp_f4;
            var_f12 = sp7C * var_f14;
            if (0 != 0x30) {
                do {
                    temp_f4_2 = var_f12 + var_f8;
                    temp_f2_2 = *var_v0;
                    var_v0 += 0xC;
                    (*(f32 *)((char *)(var_v0) - 0x8)) = (f32) (var_f10 - (temp_f20 * var_f14));
                    (*(f32 *)((char *)(var_v0) - 0xC)) = (f32) ((temp_f0_2 * temp_f2_2) - (sp78 * temp_f4_2));
                    (*(f32 *)((char *)(var_v0) - 0x4)) = (f32) ((temp_f0_2 * temp_f4_2) + (sp78 * temp_f2_2));
                    (*(s16 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6) + var_v1)) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(var_v0) - 0xC)) + temp_f22);
                    (*(s16 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6) + var_v1)) + 0x12)) = (s16) (s32) ((*(s16 *)((char *)(var_v0) - 0x8)) + temp_f24);
                    temp_t8 = (char *)(arg1) + (D_800BE9C0 << 6) + var_v1;
                    var_v1 += 0x10;
                    (*(s16 *)((char *)(temp_t8) + 0x14)) = (s16) (s32) ((*(s16 *)((char *)(var_v0) - 0x4)) + temp_f26);
                    temp_f4_3 = (*(s32 *)((char *)(var_v0) + 0x4));
                    var_f14 = (*(s32 *)((char *)(var_v0) + 0x8));
                    var_f10 = sp7C * temp_f4_3;
                    var_f8 = temp_f20 * temp_f4_3;
                    var_f12 = sp7C * var_f14;
                } while (var_v1 != 0x30);
            }
            temp_f2_3 = *var_v0;
            temp_f4_4 = var_f12 + var_f8;
            temp_v0_6 = var_v0 + 0xC;
            (*(f32 *)((char *)(temp_v0_6) - 0x8)) = (f32) (var_f10 - (temp_f20 * var_f14));
            (*(f32 *)((char *)(temp_v0_6) - 0xC)) = (f32) ((temp_f0_2 * temp_f2_3) - (sp78 * temp_f4_4));
            (*(f32 *)((char *)(temp_v0_6) - 0x4)) = (f32) ((temp_f0_2 * temp_f4_4) + (sp78 * temp_f2_3));
            (*(s16 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6) + var_v1)) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(temp_v0_6) - 0xC)) + temp_f22);
            (*(s16 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6) + var_v1)) + 0x12)) = (s16) (s32) ((*(s16 *)((char *)(temp_v0_6) - 0x8)) + temp_f24);
            (*(s16 *)((char *)(((char *)(arg1) + (D_800BE9C0 << 6) + var_v1)) + 0x14)) = (s16) (s32) ((*(s16 *)((char *)(temp_v0_6) - 0x4)) + temp_f26);
        }
        (*(s32 *)((char *)(var_a3) + 0x0)) = 0xE7000000;
        (*(s32 *)((char *)(var_a3) + 0x4)) = 0;
        temp_a3 = (char *)(var_a3) + 8;
        (*(s32 *)((char *)(var_a3) + 0x8)) = 0xFA000000;
        temp_a3_2 = (char *)(temp_a3) + 8;
        (*(s32 *)((char *)(temp_a3) + 0x4)) = (s32) ((spC8 & 0xFF) | ~0xFF);
        (*(s32 *)((char *)(temp_a3) + 0x8)) = 0x01004008;
        temp_a3_3 = (char *)(temp_a3_2) + 8;
        (*(s32 *)((char *)(temp_a3_2) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x10);
        (*(s32 *)((char *)(temp_a3_2) + 0x8)) = 0x05000204;
        temp_a3_4 = (char *)(temp_a3_3) + 8;
        (*(s32 *)((char *)(temp_a3_3) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_a3_3) + 0x8)) = 0x05000406;
        (*(s32 *)((char *)(temp_a3_4) + 0x4)) = 0;
        var_a3 = (char *)(temp_a3_4) + 8;
    }
    return var_a3;
}

void func_151668B8(void * arg1, void * arg2, void * arg3) {
    s8 sp37;
    s16 temp_v0;

    temp_v0 = D_800DCE40;
    D_800DCE40 = temp_v0 + 0x80;
    D_800DD228 = &D_800903F4;
    sp37 = 1;
    D_800DD220 = (s32) temp_v0;
    if (D_800DCE40 >= 0x500) {
        D_800DCE40 = 0;
    }
    D_800DD224 = 1;
    func_15142FBC(func_15094F70(D_800DD228, D_800DD220, &D_800DD230, 0, 0, 0, 1, 3), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x1C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x18)), &sp37);
}
