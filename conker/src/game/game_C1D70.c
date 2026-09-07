/**
 * Auto-decompiled from asm/C1D70.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960(); /* extern */
void * func_150A7A00(); /* extern */
void * func_150A7A48();                  /* extern */
u32 func_1510D0EC();                  /* extern */
void func_1509499C();          /* static */
void func_15095060(); /* static */
s32 *func_150950D4(); /* static */
void *func_15095A90(void *arg0, f32 arg1, void *arg2, f32 arg3, s32 *arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8);
void func_15095B08(void *arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, s32 *arg5);
void *func_15095D34(); /* static */
extern s32 D_800873D0;
extern s32 D_80087408;
extern f32 D_8009DEA0;
extern s32 D_8009DEB0;
extern s32 D_8009DEB4;
extern u8 D_8009DEB8;
extern s32 D_8009DEBC;
extern f32 D_8009DEC0;
extern s32 D_800D2C20;
extern f32 D_800D2C70;
extern f32 D_800D2C74;
extern f32 D_800D2C78;
extern f32 D_800D2C7C;
extern f32 D_800D2C80;
extern f32 D_800D2C84;
extern f32 D_800D2C88;
extern s32 D_800D2C90;
extern s32 D_800D2C9C;
extern u32 D_800D2CA0;
extern s32 D_800D2CA8;
extern u8 D_800D2DA8;
extern u8 D_800D2DA9;
extern u8 D_800D2DAA;
extern u8 D_800D2DAB;

void func_150948C0(s32 arg1) {
    void *sp50;
    s32 temp_v0;
    s32 var_s0;
    void **var_s1;
    void *temp_v1;

    func_1509499C(&sp50);
    var_s0 = 0;
    var_s1 = &sp50;
    do {
        temp_v1 = *var_s1;
        if (temp_v1 != NULL) {
            temp_v0 = (var_s0 * 0xC) + arg1;
            func_150A7960(D_800D2C20, (f32) (*(f32 *)((char *)(temp_v1) + 0x0)), (f32) (*(f32 *)((char *)(temp_v1) + 0x2)), (f32) (*(f32 *)((char *)(temp_v1) + 0x4)), temp_v0, temp_v0 + 4, temp_v0 + 8);
        }
        var_s0 += 1;
        var_s1 = (char *)(var_s1) + 4;
    } while (var_s0 != 0x10);
}

void func_1509499C(void **arg0, s32 arg1) {
    s16 temp_a2;
    s16 temp_v1_2;
    s16 var_a3_2;
    s32 *var_a0;
    s32 *var_a0_3;
    s32 temp_t1;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a3;
    s32 var_v0;
    u8 temp_v1;
    void *var_a0_2;
    void *var_a0_4;
    void *var_a0_5;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x1));
    var_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    var_a3 = 0;
    temp_a2 = temp_v1 & 0xF;
    temp_v1_2 = ((s32) temp_v1 >> 4) + 1;
    if (temp_a2 > 0) {
        temp_t1 = temp_a2 & 3;
        if (temp_t1 != 0) {
            var_a0 = arg1 + (0 * 4);
            do {
                var_a3 += 1;
                *var_a0 = 0;
                var_a0 += 4;
            } while (temp_t1 != var_a3);
            if (var_a3 != temp_a2) {
                goto block_5;
            }
        } else {
block_5:
            var_a0_2 = arg1 + (var_a3 * 4);
            do {
                var_a0_2 = (char *)(var_a0_2) + 0x10;
                (*(s32 *)((char *)(var_a0_2) - 0xC)) = 0;
                (*(s32 *)((char *)(var_a0_2) - 0x8)) = 0;
                (*(s32 *)((char *)(var_a0_2) - 0x4)) = 0;
                (*(s32 *)((char *)(var_a0_2) - 0x10)) = 0;
            } while ((char *)(var_a0_2) != (char *)((temp_a2 * 4) + arg1));
        }
    }
    var_a3_2 = temp_a2;
    if (temp_a2 < temp_v1_2) {
        temp_t6 = (temp_v1_2 - temp_a2) & 3;
        if (temp_t6 != 0) {
            var_a0_3 = arg1 + (temp_a2 * 4);
            do {
                *var_a0_3 = var_v0;
                var_a3_2 += 1;
                var_v0 += 0x10;
                var_a0_3 += 4;
            } while ((temp_t6 + temp_a2) != var_a3_2);
            if (var_a3_2 != temp_v1_2) {
                goto block_12;
            }
        } else {
block_12:
            var_a0_4 = arg1 + (var_a3_2 * 4);
            do {
                (*(s32 *)((char *)(var_a0_4) + 0x0)) = var_v0;
                temp_v0 = var_v0 + 0x10;
                (*(s32 *)((char *)(var_a0_4) + 0x4)) = temp_v0;
                temp_v0_2 = temp_v0 + 0x10;
                (*(s32 *)((char *)(var_a0_4) + 0x8)) = temp_v0_2;
                temp_v0_3 = temp_v0_2 + 0x10;
                (*(s32 *)((char *)(var_a0_4) + 0xC)) = temp_v0_3;
                var_a3_2 += 4;
                var_v0 = temp_v0_3 + 0x10;
                var_a0_4 = (char *)(var_a0_4) + 0x10;
            } while (var_a3_2 != temp_v1_2);
        }
    }
    if (var_a3_2 < 0x10) {
        var_a0_5 = arg1 + (var_a3_2 * 4);
        do {
            var_a3_2 += 1;
            var_a0_5 = (char *)(var_a0_5) + 4;
            (*(s32 *)((char *)(var_a0_5) - 0x4)) = 0;
        } while (var_a3_2 < 0x10);
    }
}

void func_15094AB8(void *arg0, void *arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5) {
    f32 sp34;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f16;
    f32 var_f18;
    s32 var_a1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *var_v0;
    void *var_v1;

    temp_f12 = arg3 * D_8009DEA0;
    sp24 = temp_f12;
    sp34 = sinf(temp_f12);
    temp_f0 = cosf(temp_f12);
    var_a1 = 0;
    if ((arg2 > 0) && (!(arg2 & 1) || (temp_f2 = (f32) ((arg4 / 2) << 5), var_a1 = 1, temp_f12_2 = (f32) ((arg5 / 2) << 5), (*(f32 *)((char *)(arg0) + 0x8)) = (s16) (s32) (((((f32) (*(f32 *)((char *)(arg1) + 0x0)) - temp_f2) * temp_f0) - (((f32) (*(f32 *)((char *)(arg1) + 0x2)) - temp_f12_2) * sp34)) + temp_f2), (*(f32 *)((char *)(arg0) + 0xA)) = (s16) (s32) ((((f32) (*(f32 *)((char *)(arg1) + 0x2)) - temp_f12_2) * temp_f0) + (((f32) (*(f32 *)((char *)(arg1) + 0x0)) - temp_f2) * sp34) + temp_f12_2), (arg2 != 1)))) {
        temp_f2_2 = (f32) ((arg4 / 2) << 5);
        var_v1 = (char *)(arg0) + (var_a1 * 0x10);
        temp_v0 = (char *)(arg1) + (var_a1 * 4);
        temp_f12_3 = (f32) ((arg5 / 2) << 5);
        temp_a0 = (arg2 * 4) + (char *)(arg1);
        var_v0 = (char *)(temp_v0) + 8;
        var_f18 = ((f32) (*(f32 *)((char *)(temp_v0) + 0x0)) - temp_f2_2) * temp_f0;
        var_f16 = ((f32) (*(f32 *)((char *)(temp_v0) + 0x2)) - temp_f12_3) * sp34;
        if (var_v0 != temp_a0) {
            do {
                var_v0 = (char *)(var_v0) + 8;
                var_v1 = (char *)(var_v1) + 0x20;
                (*(s16 *)((char *)(var_v1) - 0x18)) = (s16) (s32) ((var_f18 - var_f16) + temp_f2_2);
                (*(s16 *)((char *)(var_v1) - 0x16)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(var_v0) - 0xE)) - temp_f12_3) * temp_f0) + (((f32) (*(s16 *)((char *)(var_v0) - 0x10)) - temp_f2_2) * sp34) + temp_f12_3);
                (*(s16 *)((char *)(var_v1) - 0x8)) = (s16) (s32) (((((f32) (*(s16 *)((char *)(var_v0) - 0xC)) - temp_f2_2) * temp_f0) - (((f32) (*(s16 *)((char *)(var_v0) - 0xA)) - temp_f12_3) * sp34)) + temp_f2_2);
                (*(s16 *)((char *)(var_v1) - 0x6)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(var_v0) - 0xA)) - temp_f12_3) * temp_f0) + (((f32) (*(s16 *)((char *)(var_v0) - 0xC)) - temp_f2_2) * sp34) + temp_f12_3);
                var_f18 = ((f32) (*(f32 *)((char *)(var_v0) - 0x8)) - temp_f2_2) * temp_f0;
                var_f16 = ((f32) (*(f32 *)((char *)(var_v0) - 0x6)) - temp_f12_3) * sp34;
            } while (var_v0 != temp_a0);
        }
        temp_v1 = (char *)(var_v1) + 0x20;
        (*(s16 *)((char *)(temp_v1) - 0x18)) = (s16) (s32) ((var_f18 - var_f16) + temp_f2_2);
        (*(s16 *)((char *)(temp_v1) - 0x16)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(var_v0) - 0x6)) - temp_f12_3) * temp_f0) + (((f32) (*(s16 *)((char *)(var_v0) - 0x8)) - temp_f2_2) * sp34) + temp_f12_3);
        (*(s16 *)((char *)(temp_v1) - 0x8)) = (s16) (s32) (((((f32) (*(s16 *)((char *)(var_v0) - 0x4)) - temp_f2_2) * temp_f0) - (((f32) (*(s16 *)((char *)(var_v0) - 0x2)) - temp_f12_3) * sp34)) + temp_f2_2);
        (*(s16 *)((char *)(temp_v1) - 0x6)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(var_v0) - 0x2)) - temp_f12_3) * temp_f0) + (((f32) (*(s16 *)((char *)(var_v0) - 0x4)) - temp_f2_2) * sp34) + temp_f12_3);
    }
}

void func_15094EA0(s32 arg0) {
    void * sp58;
    void * sp18;

    guMtxL2F(&sp58, *(&D_800DC2A0 + (D_800BE9C0 * 4)) + (arg0 << 6));
    guMtxL2F(&sp18, D_800BE628 + (arg0 * 0x180) + (D_800BE9C0 << 6) + 0x100);
    func_150A7A48(&sp58, &sp18, (arg0 << 6) + &D_800D2CA8);
}

void *func_15094F40(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDE000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = &D_800873D0;
    D_800D2CA0 = 0;
    return (char *)(arg0) + 8;
}

void *func_15094F70(void *arg0, u32 *arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    func_15095060(arg1, arg2, arg3);
    return func_150950D4(arg0, &D_800D2C90, arg4, arg5, 0, arg6, arg7, 0x100, 0x100, arg8);
}

void func_15094FE8(void *arg0, u32 *arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    func_15095060(arg1, arg2, arg3);
    func_150950D4(arg0, &D_800D2C90, arg4, arg5, 0, arg6, arg7, arg8, arg9, arg10);
}

void func_15095060(u32 *arg0, s32 arg1, void *arg2) {
    u32 temp_v0;

    if (arg2 != NULL) {
        (*(s32 *)((char *)(arg2) + 0x10)) = &D_800D2C90;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x0));
    if (temp_v0 < 0x10000000U) {
        (*(s32 *)((char *)&(D_800D2C90) + 0x0)) = temp_v0;
    } else {
        (*(u32 *)((char *)&(D_800D2C90) + 0x0)) = (u32) (*(u32 *)((char *)(temp_v0) + ((arg1 >> 8) * 4)));
    }
    (*(u16 *)((char *)&(D_800D2C90) + 0x4)) = (u16) (*(u16 *)((char *)(arg0) + 0x6));
    (*(u16 *)((char *)&(D_800D2C90) + 0x6)) = (u16) (*(u16 *)((char *)(arg0) + 0x8));
    (*(u8 *)((char *)&(D_800D2C90) + 0x8)) = (u8) (*(u8 *)((char *)(arg0) + 0xA));
    (*(u8 *)((char *)&(D_800D2C90) + 0x9)) = (u8) (*(u8 *)((char *)(arg0) + 0xB));
    (*(u8 *)((char *)&(D_800D2C90) + 0xA)) = (u8) (*(u8 *)((char *)(arg0) + 0x4));
}

s32 *func_150950D4(void *arg0, void * *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s32 sp8C;
    s32 sp88;
    void *sp60;
    s32 sp24;
    s32 sp20;
    s32 *temp_v0_5;
    s32 *var_s0;
    s32 temp_at;
    s32 temp_at_2;
    s32 temp_lo;
    s32 temp_ra;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t4;
    s32 temp_t7;
    s32 temp_t7_2;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t8_3;
    s32 temp_t8_4;
    s32 temp_t9_2;
    s32 temp_t9_3;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_t0_2;
    s32 var_t3;
    s32 var_v0;
    u16 temp_v1;
    u32 temp_t9;
    u32 var_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 var_t0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_v1_3;

    if ((*(s32 *)((char *)(arg1) + 0xA)) == 0) {
        arg4 = 0;
    }
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x9));
    temp_lo = (*(s32 *)((char *)(arg1) + 0x4)) * (*(s32 *)((char *)(arg1) + 0x6));
    var_t3 = *(&D_8009DEB0 + temp_v0) + temp_lo;
    if ((*(s32 *)((char *)(arg1) + 0x8)) == 5) {
        var_t3 += temp_lo / 4;
    }
    temp_t9 = (*(s32 *)((char *)(arg1) + 0x0));
    D_800D2CA0 = temp_t9;
    var_v1 = temp_t9;
    temp_t3 = var_t3 >> *(&D_8009DEB4 + temp_v0);
    if (temp_t9 < 0x10000000U) {
        sp88 = temp_t3;
        D_800D2CA0 = func_1510D0EC(temp_t9, 0, arg9, 0);
        var_v1 = D_800D2CA0;
    }
    var_a1 = 1;
    if (var_v1 != 0x80000000) {
        D_800D2CA0 = var_v1 + (temp_t3 * 2 * arg4);
    }
    if ((*(s32 *)((char *)(arg1) + 0x9)) == 0) {
        sp8C = (s32) (*(s32 *)((char *)(arg1) + 0x4)) >> 1;
    } else {
        sp8C = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    }
    var_v0 = 2;
    if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) >= 3) {
        do {
            temp_t8 = var_v0 * 2;
            temp_at = temp_t8 < (s32) (*(s32 *)((char *)(arg1) + 0x4));
            var_v0 = temp_t8;
            var_a1 += 1;
        } while (temp_at != 0);
        var_v0 = 2;
    }
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x6));
    var_a0 = 1;
    if ((s32) temp_v1 >= 3) {
        do {
            temp_t9_2 = var_v0 * 2;
            temp_at_2 = temp_t9_2 < (s32) temp_v1;
            var_v0 = temp_t9_2;
            var_a0 += 1;
        } while (temp_at_2 != 0);
    }
    temp_v0_2 = (*(s32 *)((char *)(arg1) + 0x8));
    if (temp_v0_2 != 5) {
        var_t0 = temp_v0_2;
    } else {
        var_t0 = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_s0 = (char *)(arg0) + 8;
    temp_t7 = (var_t0 & 7) << 0x15;
    (*(s32 *)((char *)(arg0) + 0x8)) = (s32) (((*(&D_8009DEBC + (*(s32 *)((char *)(arg1) + 0x9))) & 3) << 0x13) | 0xFD000000 | temp_t7);
    temp_s0_2 = (char *)(temp_s0) + 8;
    (*(u32 *)((char *)(temp_s0) + 0x4)) = (u32) D_800D2CA0;
    temp_t8_2 = arg2 & 0x1FF;
    (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0x07000000;
    (*(s32 *)((char *)(temp_s0) + 0x8)) = (s32) (((*(&D_8009DEBC + (*(s32 *)((char *)(arg1) + 0x9))) & 3) << 0x13) | 0xF5000000 | temp_t7 | temp_t8_2);
    temp_s0_3 = (char *)(temp_s0_2) + 8;
    temp_v0_3 = temp_t3 - 1;
    (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xF3000000;
    temp_s0_4 = (char *)(temp_s0_3) + 8;
    if (temp_v0_3 < 0x7FF) {
        var_t0_2 = temp_v0_3;
    } else {
        var_t0_2 = 0x7FF;
    }
    (*(s32 *)((char *)(temp_s0_3) + 0x4)) = (s32) (((var_t0_2 & 0xFFF) << 0xC) | 0x07000000);
    temp_v0_4 = (*(s32 *)((char *)(arg1) + 0x9));
    temp_s0_5 = (char *)(temp_s0_4) + 8;
    (*(s32 *)((char *)(temp_s0_3) + 0x8)) = (s32) (((((s32) (((&D_8009DEB8)[temp_v0_4] * sp8C) + 7) >> 3) & 0x1FF) << 9) | 0xF5000000 | temp_t7 | ((temp_v0_4 & 3) << 0x13) | temp_t8_2);
    temp_t7_2 = (var_a0 & 0xF) << 0xE;
    temp_t9_3 = arg6 & 3;
    temp_t3_2 = (arg3 & 7) << 0x18;
    temp_t4 = temp_t9_3 << 0x12;
    temp_ra = temp_t9_3 << 8;
    temp_t8_3 = (var_a1 & 0xF) * 0x10;
    sp24 = temp_t8_3;
    (*(s32 *)((char *)(temp_s0_4) + 0x4)) = (s32) (temp_t3_2 | temp_t4 | temp_t7_2 | temp_ra | temp_t8_3);
    temp_t8_4 = ((((arg7 * 4) + arg5) & 0xFFF) << 0xC) | 0xF2000000;
    sp60 = temp_s0_5;
    sp20 = temp_t8_4;
    (*(s32 *)((char *)(sp60) + 0x0)) = (s32) (temp_t8_4 | ((arg8 * 4) & 0xFFF));
    var_s0 = (char *)(temp_s0_5) + 8;
    (*(s32 *)((char *)(sp60) + 0x4)) = (s32) (temp_t3_2 | (((((((*(s32 *)((char *)(arg1) + 0x4)) + arg7) - 1) * 4) + arg5) & 0xFFF) << 0xC) | (((((*(s32 *)((char *)(arg1) + 0x6)) + arg8) - 1) * 4) & 0xFFF));
    if ((*(s32 *)((char *)(arg1) + 0x8)) == 5) {
        temp_s0_6 = var_s0 + 8;
        (*(s32 *)((char *)(temp_s0_5) + 0x8)) = (s32) (((((s32) ((D_8009DEB8 * (sp8C >> 1)) + 7) >> 3) & 0x1FF) << 9) | 0xF5800000 | ((arg2 + ((s32) (sp8C * (*(s32 *)((char *)(arg1) + 0x6))) / 4)) & 0x1FF));
        temp_v1_2 = ((arg3 + 1) & 7) << 0x18;
        (*(s32 *)((char *)(var_s0) + 0x4)) = (s32) (temp_v1_2 | temp_t4 | temp_t7_2 | temp_ra | sp24);
        temp_a0 = temp_s0_6;
        (*(s32 *)((char *)(var_s0) + 0x8)) = (s32) (sp20 | (arg8 & 0xFFF));
        var_s0 = (char *)(temp_s0_6) + 8;
        (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) (temp_v1_2 | (((((((*(s32 *)((char *)(arg1) + 0x4)) + arg7) - 1) * 4) + arg5) & 0xFFF) << 0xC) | (((((*(s32 *)((char *)(arg1) + 0x6)) + arg8) - 1) * 4) & 0xFFF));
    }
    if ((*(s32 *)((char *)(arg1) + 0x8)) == 2) {
        var_a1_2 = 8;
        var_a2 = 0xFF;
        temp_v0_5 = var_s0;
        if ((*(s32 *)((char *)(arg1) + 0x9)) == 0) {
            var_a1_2 = 4;
            var_a2 = 0xF;
        }
        (*(s32 *)((char *)(temp_v0_5) + 0x0)) = 0xFD100000;
        temp_s0_7 = var_s0 + 8;
        temp_v1_3 = temp_s0_7;
        temp_s0_8 = (char *)(temp_s0_7) + 8;
        temp_a0_2 = temp_s0_8;
        var_s0 = (char *)(temp_s0_8) + 8;
        (*(s32 *)((char *)(temp_v0_5) + 0x4)) = (s32) (((s32) ((*(s32 *)((char *)(arg1) + 0x4)) * (*(s32 *)((char *)(arg1) + 0x6)) * var_a1_2) / 8) + D_800D2CA0);
        (*(s32 *)((char *)(temp_v1_3) + 0x0)) = 0xE6000000;
        (*(s32 *)((char *)(temp_v1_3) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_a0_2) + 0x0)) = 0xF0000000;
        (*(s32 *)((char *)(temp_a0_2) + 0x4)) = (s32) (((var_a2 & 0x3FF) << 0xE) | 0x06000000);
        D_800D2C9C = 0x8000;
    } else {
        D_800D2C9C = 0;
    }
    return var_s0;
}

s32 func_1509563C(f32 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6, f32 arg7) {
    f32 temp_f12;
    f32 temp_f14;
    void *temp_v1;

    func_150A7A00((D_80082FA4 << 6) + &D_800D2CA8, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    temp_f14 = *arg6;
    if ((arg7 <= temp_f14) || (temp_f14 <= D_800D9B20)) {
        return 0;
    }
    temp_f12 = 1.0f / temp_f14;
    temp_v1 = D_800BE628 + (D_80082FA4 * 0x180);
    *arg3 = (((*(s32 *)((char *)(temp_v1) + 0xC)) + 5.0f) * *arg3 * temp_f12) + (*(s32 *)((char *)(temp_v1) + 0x34));
    *arg4 = (*(s32 *)((char *)(temp_v1) + 0x38)) - (((*(s32 *)((char *)(temp_v1) + 0x10)) + 5.0f) * *arg4 * temp_f12);
    return 1;
}

void *func_15095760(void *arg0, void *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    void *temp_a0;
    void *temp_t0;
    void *arg2;
    f32 arg3;
    s32 *arg4;
    s32 arg5;
    s32 arg6;
    s32 arg7;
    s32 arg8;

    if (func_1509563C((f32) (*(f32 *)((char *)(arg1) + 0x0)), (f32) (*(f32 *)((char *)(arg1) + 0x2)), (f32) (*(f32 *)((char *)(arg1) + 0x4)), &sp44, &sp40, &sp3C, &sp38, 4000.0f) == 0) {
        return arg0;
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xEE000000;
    temp_t0 = D_800BE628 + (D_80082FA4 * 0x180) + (D_800BE9C0 * 0x10);
    (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) ((s32) (((f32) (*(s32 *)((char *)(temp_t0) + 0x4C)) + ((sp3C / sp38) * (f32) (*(s32 *)((char *)(temp_t0) + 0x44)))) * 32.0f) << 0x10);
    return func_15095A90(arg0, (f32)(s32)(arg1), arg2, (f32)(s32)(arg3), arg4, arg5, arg6, arg7, arg8);
}

void *func_150958B0(void *arg0, void *arg1, s32 *arg2) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    void *temp_s0;
    void *temp_v1;
    void *var_s0;

    var_s0 = arg0;
    if (func_1509563C((f32) (*(f32 *)((char *)(arg1) + 0x0)), (f32) (*(f32 *)((char *)(arg1) + 0x2)), (f32) (*(f32 *)((char *)(arg1) + 0x4)), &sp44, &sp40, &sp3C, &sp38, 4000.0f) == 0) {
        *arg2 = 0;
        return var_s0;
    }
    func_15095B08(arg1, sp44, sp40, sp38, 1e-45f, arg2);
    if (*arg2 != 0) {
        temp_s0 = (char *)(var_s0) + 8;
        (*(s32 *)((char *)(var_s0) + 0x0)) = 0xE7000000;
        (*(s32 *)((char *)(var_s0) + 0x4)) = 0;
        temp_v1 = temp_s0;
        (*(s32 *)((char *)(var_s0) + 0x8)) = 0xEE000000;
        var_s0 = (char *)(temp_s0) + 8;
        (*(s32 *)((char *)(temp_v1) + 0x4)) = (s32) ((u32) (((sp3C / sp38) * D_8009DEC0) + D_8009DEC0) << 0x10);
    }
    return var_s0;
}

void func_15095A48(void *arg2, void *arg3) {
    func_15095A90(arg2, (f32)(s32)(arg3), arg2, (f32)(s32)(arg3), 4096, 0, 0, 0, 0);
}

void *func_15095A90(void *arg0, f32 arg1, void *arg2, f32 arg3, s32 *arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 sp24;

    func_15095B08(arg2, arg3, arg1, (f32)(s32)(arg2), arg4, &sp24);
    if (sp24 != 0) {
        arg0 = func_15095D34(arg0, arg1, arg6, arg7, arg8);
    }
    return arg0;
}

void func_15095B08(void *arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, s32 *arg5) {
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f10;
    f32 var_f2;
    f32 var_f8;
    s16 temp_v0;
    s16 temp_v1;
    u16 temp_t3;
    u16 temp_t4;
    void *temp_v1_2;
    void *var_v0;

    *arg5 = 0;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x6));
    if (temp_v0 != 0) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x8));
        if (temp_v1 != 0) {
            temp_f0 = (f32) temp_v0 * D_800380A0;
            temp_f2 = (f32) temp_v1 * D_800380A4;
            if (arg4 != 0) {
                var_v0 = D_800BE628 + (D_80082FA4 * 0x180);
                var_f0 = temp_f0 * (*(s32 *)((char *)(var_v0) + 0x1C));
                var_f2 = temp_f2 * (*(s32 *)((char *)(var_v0) + 0x20));
            } else {
                var_v0 = D_800BE628 + (D_80082FA4 * 0x180);
                var_f0 = temp_f0 * (*(s32 *)((char *)(var_v0) + 0x14));
                var_f2 = temp_f2 * (*(s32 *)((char *)(var_v0) + 0x18));
            }
            temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x10));
            temp_t3 = (*(s32 *)((char *)(temp_v1_2) + 0x4));
            temp_f14 = 1.0f / arg3;
            var_f8 = (f32) temp_t3;
            if ((s32) temp_t3 < 0) {
                var_f8 += 4294967296.0f;
            }
            temp_t4 = (*(s32 *)((char *)(temp_v1_2) + 0x6));
            temp_f16 = var_f8 * var_f0 * temp_f14;
            var_f10 = (f32) temp_t4;
            if ((s32) temp_t4 < 0) {
                var_f10 += 4294967296.0f;
            }
            temp_f18 = var_f10 * var_f2 * temp_f14;
            temp_f20 = arg1 - (temp_f16 * 0.5f);
            temp_f22 = arg2 - (temp_f18 * 0.5f);
            if (((*(s32 *)((char *)(var_v0) + 0x2C)) <= (temp_f20 + temp_f16)) && (temp_f20 < (*(s32 *)((char *)(var_v0) + 0x30))) && ((*(s32 *)((char *)(var_v0) + 0x24)) <= (temp_f22 + temp_f18)) && (temp_f22 < (*(s32 *)((char *)(var_v0) + 0x28)))) {
                *arg5 = 1;
            }
            D_800D2C70 = var_f0;
            D_800D2C74 = var_f2;
            D_800D2C78 = temp_f20;
            D_800D2C7C = temp_f22;
            D_800D2C80 = arg3;
            D_800D2C84 = temp_f16;
            D_800D2C88 = temp_f18;
        }
    }
}

void func_15095D0C(void) {
    func_15095D34(NULL, 0.0f, 0);
}

void *func_15095D34(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 unkspA;
    s32 spC;
    s32 sp8;
    s32 sp0;
    f32 var_f0;
    f32 var_f12;
    f32 var_f14;
    s16 temp_t7;
    s16 temp_t7_2;
    s16 temp_t9;
    s16 var_t5;
    s16 var_t5_2;
    s16 var_v0;
    s16 var_v0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_f4;
    s32 temp_f4_2;
    s32 temp_f4_3;
    s32 temp_f6;
    s32 temp_f6_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_5;
    s32 temp_t7_3;
    s32 temp_t7_4;
    s32 temp_t8_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t4;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    u8 temp_a0_2;
    u8 temp_t5;
    u8 temp_t6_3;
    u8 temp_t6_4;
    u8 temp_t7_5;
    u8 temp_t8;
    u8 var_t9;
    void *temp_a0;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v1;

    var_f12 = D_800D2C78;
    temp_f4 = (s32) D_800D2C70;
    var_f14 = D_800D2C7C;
    temp_f6 = (s32) D_800D2C74;
    if (arg3 != 0) {
        D_800D2C84 -= (2.0f * D_800D2C70) / D_800D2C80;
        D_800D2C88 -= (2.0f * D_800D2C74) / D_800D2C80;
        var_f12 += D_800D2C70 / D_800D2C80;
        var_f14 += D_800D2C74 / D_800D2C80;
    }
    var_f0 = D_800D2C84;
    temp_t6 = (s32) D_800D2C80 << 0xA;
    if (var_f0 < 2.0f) {
        var_f0 = 2.0f;
    }
    temp_lo = temp_t6 / temp_f4;
    temp_lo_2 = temp_t6 / temp_f6;
    var_t1 = temp_lo;
    var_t2 = temp_lo_2;
    temp_f6_2 = (s32) var_f12;
    if (D_800D2DAB == 0) {
        temp_a0 = arg0;
        arg0 = (char *)(temp_a0) + 8;
        (*(s32 *)((char *)(temp_a0) + 0x0)) = 0xFA000100;
        (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) ((D_800D2DA8 << 0x18) | (D_800D2DA9 << 0x10) | (D_800D2DAA << 8) | (*(s32 *)((char *)(arg1) + 0xA)));
    }
    temp_f4_2 = (s32) var_f14;
    temp_t8 = (*(s32 *)((char *)(arg1) + 0xD));
    var_t3 = (s32) (((32.0f - ((var_f12 - (f32) temp_f6_2) * 32.0f)) * D_800D2C80) / (f32) temp_f4) + arg2 + 0x2000;
    sp0 = (s32) temp_t8;
    temp_f4_3 = (s32) (((32.0f - ((var_f14 - (f32) temp_f4_2) * 32.0f)) * D_800D2C80) / (f32) temp_f6);
    var_t4 = temp_f4_3 + arg3 + 0x2000;
    if (temp_t8 != 0) {
        if (temp_t8 & 1) {
            var_t1 = -temp_lo & 0xFFFF;
            var_t3 = ((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x10))) + 0x4)) + 0xFF) << 5;
        }
        if (temp_t8 & 2) {
            var_t2 = -temp_lo_2 & 0xFFFF;
            var_t4 = (((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x10))) + 0x6)) + 0xFF) << 5) - temp_f4_3;
        }
    }
    temp_a2_2 = (char *)(arg0) + 8;
    temp_t9 = ((s32) (((f32) arg4 + var_f0) - 1.0f) + temp_f6_2) * 4;
    if (temp_t9 > 0) {
        var_t5 = temp_t9;
    } else {
        var_t5 = 0;
    }
    temp_t7 = ((s32) (D_800D2C88 - 1.0f) + temp_f4_2) * 4;
    if (temp_t7 > 0) {
        var_v0 = temp_t7;
    } else {
        var_v0 = 0;
    }
    temp_t7_2 = temp_f6_2 * 4;
    (*(s32 *)((char *)(arg0) + 0x0)) = (s32) ((var_v0 & 0xFFF) | 0xE4000000 | ((var_t5 & 0xFFF) << 0xC));
    spC = (s32) temp_t7_2;
    if (temp_t7_2 > 0) {
        var_t5_2 = temp_t7_2;
    } else {
        var_t5_2 = 0;
    }
    sp8 = temp_f4_2 * 4;
    if (unkspA > 0) {
        var_v0_2 = unkspA;
    } else {
        var_v0_2 = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) ((var_v0_2 & 0xFFF) | ((var_t5_2 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xE1000000;
    temp_a2 = (char *)(temp_a2_2) + 8;
    var_t0 = 0;
    if (spC < 0) {
        if ((s16) var_t1 < 0) {
            temp_t6_2 = (s32) (spC * (s16) var_t1) >> 7;
            if (temp_t6_2 > 0) {
                var_t0 = temp_t6_2;
            } else {
                var_t0 = 0;
            }
        } else {
            var_v0_3 = 0;
            temp_t7_3 = (s32) (spC * (s16) var_t1) >> 7;
            if (temp_t7_3 < 0) {
                var_v0_3 = temp_t7_3;
            }
            var_t0 = var_v0_3;
        }
    }
    var_v0_4 = 0;
    if (sp8 < 0) {
        if ((s16) var_t2 < 0) {
            var_v0_4 = 0;
            temp_t8_2 = (s32) (unkspA * (s16) var_t2) >> 7;
            if (temp_t8_2 > 0) {
                var_v0_4 = temp_t8_2;
            }
        } else {
            var_v0_5 = 0;
            temp_t7_4 = (s32) (unkspA * (s16) var_t2) >> 7;
            if (temp_t7_4 < 0) {
                var_v0_5 = temp_t7_4;
            }
            var_v0_4 = var_v0_5;
        }
    }
    (*(s32 *)((char *)(temp_a2_2) + 0x4)) = (s32) (((var_t4 - var_v0_4) & 0xFFFF) | ((var_t3 - var_t0) << 0x10));
    (*(s32 *)((char *)(temp_a2_2) + 0x8)) = 0xF1000000;
    (*(s32 *)((char *)(temp_a2) + 0x4)) = (s32) ((var_t1 << 0x10) | (var_t2 & 0xFFFF));
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x10));
    temp_t5 = (*(s32 *)((char *)(temp_v1) + 0xA));
    if (temp_t5 != 0) {
        temp_lo_3 = (*(s32 *)((char *)(arg1) + 0xB)) * D_800BE9A0;
        if (temp_t5 & 0x80) {
            temp_a0_2 = (*(s32 *)((char *)(arg1) + 0xC));
            temp_t6_3 = temp_a0_2 + temp_lo_3;
            if (temp_a0_2 & 0x80) {
                temp_t6_4 = temp_a0_2 - temp_lo_3;
                temp_a0_3 = temp_t6_4 & 0xFF;
                (*(s32 *)((char *)(arg1) + 0xC)) = temp_t6_4;
                if (!(temp_a0_3 & 0x80)) {
                    (*(u8 *)((char *)(arg1) + 0xC)) = (u8) ((temp_a0_3 + temp_lo_3) & 0x7F);
                }
            } else {
                (*(s32 *)((char *)(arg1) + 0xC)) = temp_t6_3;
                temp_a0_4 = temp_t6_3 & 0xFF;
                var_t9 = (temp_a0_4 - temp_lo_3) | 0x80;
                if (temp_a0_4 >= (((*(s32 *)((char *)(temp_v1) + 0xA)) & 0x7F) * 8)) {
                    goto block_47;
                }
            }
        } else {
            temp_t7_5 = (*(s32 *)((char *)(arg1) + 0xC)) + temp_lo_3;
            (*(s32 *)((char *)(arg1) + 0xC)) = temp_t7_5;
            temp_a0_5 = temp_t7_5 & 0xFF;
            temp_t6_5 = (*(s32 *)((char *)(temp_v1) + 0xA)) * 8;
            var_t9 = temp_a0_5 - temp_t6_5;
            if (temp_a0_5 >= temp_t6_5) {
block_47:
                (*(s32 *)((char *)(arg1) + 0xC)) = var_t9;
            }
        }
    }
    return (char *)(temp_a2) + 8;
}

void *func_1509629C(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11) {
    s32 sp154;
    s32 sp14C;
    s32 sp148;
    s32 sp144;
    s32 sp120;
    s32 sp11C;
    s32 sp118;
    s32 sp114;
    s32 sp108;
    f32 spF8;
    u8 spEB;
    u8 spEA;
    u16 spE8;
    u16 spE6;
    s8 spE4;
    u32 spE0;
    s32 spB0;
    f32 spAC;
    s32 spA8;
    f32 temp_f12;
    f32 temp_f20;
    f32 var_f0;
    f32 var_f24;
    f32 var_f2;
    s16 temp_s1;
    s16 temp_s5;
    s16 temp_t0;
    s16 temp_t7_2;
    s16 var_a0_2;
    s16 var_a0_3;
    s16 var_a1_2;
    s16 var_a1_3;
    s32 temp_f16;
    s32 temp_fp;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_t7_3;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_4;
    s32 var_a1;
    s32 var_a3_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_s7;
    s32 var_t2;
    s32 var_t3;
    s32 var_t4;
    s32 var_t5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_2;
    u16 temp_a2;
    u16 temp_v0;
    u16 temp_v1;
    u16 var_a3;
    u16 var_ra;
    u16 var_t0;
    u16 var_v1;
    u32 temp_t7;
    void *temp_s2;
    void *temp_t1;
    void *temp_v0_3;
    void *var_s2;

    var_s2 = arg0;
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x6));
    temp_a2 = (*(s32 *)((char *)(arg1) + 0x8));
    var_t2 = arg8 & 1;
    var_a3 = temp_v0;
    var_v1 = temp_a2;
    if (var_t2 != 0) {
        var_a3 -= 2;
        var_v1 -= 2;
    }
    sp14C = (s32) var_a3;
    var_ra = var_v1;
    if (arg8 & 2) {
        sp108 = (temp_v0 + 0xFF) << 5;
        var_t5 = (s32) (-4194304.0f / arg2) & 0xFFFF;
    } else {
        sp108 = 0x2000;
        var_t5 = (s32) (4194304.0f / arg2);
    }
    if (arg8 & 4) {
        var_s6 = (temp_a2 + 0xFF) << 5;
        var_t4 = (s32) (-4194304.0f / arg3) & 0xFFFF;
    } else {
        var_s6 = 0x2000;
        var_t4 = (s32) (4194304.0f / arg3);
    }
    temp_lo = (s32) ((arg6 + var_a3) - 1) / (s32) var_a3;
    temp_lo_2 = (s32) ((arg7 + var_v1) - 1) / (s32) var_v1;
    temp_t7 = (*(s32 *)((char *)(arg1) + 0x0));
    var_t3 = temp_lo_2;
    var_a0 = temp_lo;
    spE0 = temp_t7;
    var_f2 = arg4 - (((f32) arg6 * arg2) / 8192.0f);
    spE0 = temp_t7 + (arg11 * temp_lo * temp_lo_2);
    arg5 -= ((f32) arg7 * arg3) / 8192.0f;
    spE6 = (*(s32 *)((char *)(arg1) + 0x6));
    var_v0 = 0;
    spEA = (*(s32 *)((char *)(arg1) + 0xA));
    spE4 = 1;
    spEB = (*(s32 *)((char *)(arg1) + 0xB));
    var_t0 = arg7 - ((temp_lo_2 - 1) * var_v1);
    if (temp_lo > 0) {
        sp154 = (s32) var_a3;
        spAC = ((f32) var_t0 * arg3) / 4096.0f;
        do {
            var_a1 = var_v0 + 1;
            var_f24 = spAC;
            spE8 = var_t0;
            var_f0 = arg5;
            var_s3 = 0;
            if (var_a0 == var_a1) {
                temp_v0_2 = arg6 - ((var_a0 - 1) * sp14C);
                temp_v1 = temp_v0_2 & 0xFFFF;
                sp154 = temp_v0_2;
                spE6 = temp_v1;
                if (var_t2 != 0) {
                    spE6 = temp_v1 + 2;
                }
            }
            var_s7 = sp108;
            temp_f12 = var_f2 + (((f32) sp154 * arg2) / 4096.0f);
            spF8 = temp_f12;
            if (var_t2 != 0) {
                var_s7 = sp108 + (s32) (32.0f - ((var_f2 - (f32) (s32) var_f2) * 32.0f * (4096.0f / arg2)));
            }
            if (var_t2 != 0) {
                spE8 = var_t0 + 2;
            }
            if (var_t3 > 0) {
                temp_fp = (var_t5 << 0x10) | (var_t4 & 0xFFFF);
                sp148 = (s32) var_t0;
                temp_s1 = (s32) var_f2 * 4;
                spB0 = var_a1;
                sp118 = var_a0;
                temp_s5 = ((s32) var_f2 + ((s32) temp_f12 - (s32) var_f2) + arg10) * 4;
                do {
                    temp_f20 = var_f0 + var_f24;
                    var_s4 = var_s6;
                    if (var_t2 != 0) {
                        var_s4 = var_s6 + (s32) (32.0f - ((var_f0 - (f32) (s32) var_f0) * 32.0f * (4096.0f / arg3)));
                    }
                    temp_f16 = (s32) var_f0;
                    sp144 = (s32) var_ra;
                    spA8 = var_t2;
                    sp114 = var_t3;
                    sp11C = var_t4;
                    sp120 = var_t5;
                    temp_v0_3 = func_15094F70(var_s2, &spE0, 0, NULL, 0, 0, 0, 2, 3);
                    var_t2 = spA8;
                    var_t3 = sp114;
                    var_t4 = sp11C;
                    var_t5 = sp120;
                    var_ra = (u16) sp144;
                    spE0 += 1;
                    if (temp_s5 > 0) {
                        var_a1_2 = temp_s5;
                    } else {
                        var_a1_2 = 0;
                    }
                    temp_t0 = temp_f16 * 4;
                    temp_t7_2 = (temp_f16 + ((s32) temp_f20 - temp_f16)) * 4;
                    if (temp_t7_2 > 0) {
                        var_a0_2 = temp_t7_2;
                    } else {
                        var_a0_2 = 0;
                    }
                    (*(s32 *)((char *)(temp_v0_3) + 0x0)) = (s32) ((var_a0_2 & 0xFFF) | 0xE4000000 | ((var_a1_2 & 0xFFF) << 0xC));
                    if (temp_s1 > 0) {
                        var_a1_3 = temp_s1;
                    } else {
                        var_a1_3 = 0;
                    }
                    if (temp_t0 > 0) {
                        var_a0_3 = temp_t0;
                    } else {
                        var_a0_3 = 0;
                    }
                    (*(s32 *)((char *)(temp_v0_3) + 0x4)) = (s32) ((var_a0_3 & 0xFFF) | ((var_a1_3 & 0xFFF) << 0xC));
                    temp_t1 = (char *)(temp_v0_3) + 8;
                    (*(s32 *)((char *)(temp_v0_3) + 0x8)) = 0xE1000000;
                    temp_s2 = (char *)(temp_t1) + 8;
                    if (temp_s1 < 0) {
                        temp_t9 = (s32) (temp_s1 * (s16) var_t5) >> 7;
                        if ((s16) var_t5 < 0) {
                            if (temp_t9 > 0) {
                                var_a3_2 = temp_t9;
                            } else {
                                var_a3_2 = 0;
                            }
                        } else {
                            var_v0_2 = 0;
                            if (temp_t9 < 0) {
                                var_v0_2 = temp_t9;
                            }
                            var_a3_2 = var_v0_2;
                        }
                    } else {
                        var_a3_2 = 0;
                    }
                    var_a0_4 = 0;
                    if (temp_f16 & 0x20000000) {
                        if ((s16) var_t4 < 0) {
                            temp_t7_3 = (s32) (temp_t0 * (s16) var_t4) >> 7;
                            if (temp_t7_3 > 0) {
                                var_a0_4 = temp_t7_3;
                            } else {
                                var_a0_4 = 0;
                            }
                        } else {
                            var_v1_2 = 0;
                            temp_t8 = (s32) (temp_t0 * (s16) var_t4) >> 7;
                            if (temp_t8 < 0) {
                                var_v1_2 = temp_t8;
                            }
                            var_a0_4 = var_v1_2;
                        }
                    }
                    (*(s32 *)((char *)(temp_t1) + 0x4)) = (s32) (((var_s4 - var_a0_4) & 0xFFFF) | (((var_s7 + arg9) - var_a3_2) << 0x10));
                    (*(s32 *)((char *)(temp_t1) + 0x8)) = 0xF1000000;
                    (*(s32 *)((char *)(temp_s2) + 0x4)) = temp_fp;
                    var_s2 = (char *)(temp_s2) + 8;
                    if (var_s3 == 0) {
                        spE8 = (*(s32 *)((char *)(arg1) + 0x8));
                        var_f24 = ((f32) var_ra * arg3) / 4096.0f;
                    }
                    var_s3 += 1;
                    var_f0 = temp_f20;
                } while (var_s3 != var_t3);
                var_t0 = (u16) sp148;
                var_a1 = spB0;
                var_a0 = sp118;
            }
            var_v0 = var_a1;
            var_f2 = spF8;
        } while (var_a1 != var_a0);
    }
    return var_s2;
}

void *func_15096934(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDE000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = &D_80087408;
    D_800D2DAB = 0;
    return (char *)(arg0) + 8;
}
