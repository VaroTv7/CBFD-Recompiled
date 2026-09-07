/**
 * Auto-decompiled from asm/14F8F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150495B0(); /* extern */
void * func_15123070();                       /* extern */
void * func_15123A54();                            /* extern */
void * func_1512A390();                            /* extern */
void * func_1512E140();                            /* extern */
extern f32 D_800894C0;
extern s32 D_800894C8;
extern f32 D_800A3480;
extern f32 D_800A3484;
extern f32 D_800A3488;
extern f32 D_800A348C;
extern f32 D_800A3490;
extern f32 D_800A3494;
extern f32 D_800A3498;
extern f32 D_800A34A0;

void func_15122440(void *arg0) {
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp54;
    f32 sp50;
    f32 sp48;
    void *sp44;
    f32 sp38;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f2_4;
    u8 temp_v1;
    void *temp_v0;

    f32 sp3C;
    f32 sp40;
    (*(s32 *)((char *)&(sp6C) + 0x0)) = (*(s32 *)((char *)&(D_800894C8) + 0x0));
    (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800894C8) + 0x4));
    (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800894C8) + 0x8));
    sp64 = ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x40)) + 90.0f) * D_800A3480;
    func_1512A390(arg0);
    if (!((*(s32 *)((char *)(arg0) + 0x5F0)) & 1) && ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x102)) == 0)) {
        sp64 = (*(s32 *)((char *)(arg0) + 0x39C)) - D_800A3484;
    }
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x86C));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x3D0));
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x102));
    if (D_800A3488 != temp_f0) {
        var_f12 = temp_f0;
    } else if ((*(s32 *)((char *)(temp_v0) + 0x1CA)) == 0) {
        var_f12 = 0.0f;
    } else {
        if (temp_v1 != 0) {
            var_f2 = 10.0f;
        } else {
            var_f2 = 0.0f;
        }
        var_f12 = var_f2 + (*(s32 *)((char *)(temp_v0) + 0xB8));
    }
    if (temp_v1 != 0) {
        var_f12 *= 0.5f;
    }
    if (var_f12 < -88.0f) {
        var_f12_2 = -88.0f;
    } else {
        if (var_f12 > 88.0f) {
            var_f2_2 = 88.0f;
        } else {
            var_f2_2 = var_f12;
        }
        var_f12_2 = var_f2_2;
    }
    if (fabsf(D_800894C0 - var_f12_2) < 10.0f) {
        var_f12_2 = D_800894C0;
    } else {
        D_800894C0 = var_f12_2;
    }
    temp_f12 = var_f12_2 * D_800A348C;
    sp60 = temp_f12;
    func_15123070(temp_f12, arg0);
    if ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x36C)))) & 0x10) {
        sp6C = 150.0f;
    } else {
        sp6C = (*(s32 *)((char *)(arg0) + 0x374));
    }
    if (((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x102)) != 0) && ((*(s32 *)((char *)(arg0) + 0x3E8)) == 0)) {
        temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x370));
        if (temp_f0_2 < (*(s32 *)((char *)(arg0) + 0x374))) {
            sp6C = temp_f0_2;
        }
    }
    sp60 = temp_f12;
    sp68 = cosf(temp_f12) * sp6C;
    temp_f12_2 = sinf(temp_f12) * sp6C;
    sp6C = sp68;
    sp70 = temp_f12_2;
    sp5C = sinf(sp64);
    temp_f0_3 = cosf(sp64);
    var_f2_3 = -200.0f;
    (*(s32 *)((char *)(arg0) + 0x3DC)) = sp64;
    sp74 = -sp68 * sp5C;
    sp6C = sp68 * temp_f0_3;
    if (temp_f12_2 < -200.0f) {

    } else if (temp_f12_2 > 200.0f) {
        var_f2_3 = 200.0f;
    } else {
        var_f2_3 = temp_f12_2;
    }
    sp70 = var_f2_3;
    temp_f4 = sp6C + (*(s32 *)((char *)(arg0) + 0x2BC));
    sp6C = temp_f4;
    temp_f10 = sp70 + (*(s32 *)((char *)(arg0) + 0x2C0));
    sp70 = temp_f10;
    temp_f6 = sp74 + (*(s32 *)((char *)(arg0) + 0x2C4));
    sp74 = temp_f6;
    if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x2F8)) = temp_f4;
        (*(s32 *)((char *)(arg0) + 0x2FC)) = temp_f10;
        (*(s32 *)((char *)(arg0) + 0x300)) = temp_f6;
        (*(s32 *)((char *)(arg0) + 0x3C0)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x3C4)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x3C8)) = 0.0f;
    } else {
        var_f0 = 2.0f * 1.0f;
        var_f2_4 = D_800A3490 + D_800A3494;
        if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x102)) != 0) {
            var_f0 *= 2.0f;
            var_f2_4 *= 2.0f;
        }
        sp54 = temp_f6;
        sp50 = temp_f10;
        sp44 = (*(void **)&var_f2_4);
        sp48 = var_f0;
        func_150495B0(temp_f4, temp_f10, (char *)(arg0) + 0x2F8, temp_f4, (char *)(arg0) + 0x3C0, var_f0, (*(void **)&var_f2_4), (*(s32 *)((char *)(arg0) + 0x7B4)));
        func_150495B0((f32)(s32)((char *)(arg0) + 0x2FC), temp_f10, (char *)(arg0) + 0x3C4, var_f0, (*(void **)&var_f2_4), (*(f32 *)((char *)(arg0) + 0x7B4)));
        func_150495B0((f32)(s32)((char *)(arg0) + 0x300), temp_f6, (char *)(arg0) + 0x3C8, var_f0, (*(void **)&var_f2_4), (*(f32 *)((char *)(arg0) + 0x7B4)));
    }
    if (((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x102)) == 0) && !((*(s32 *)((char *)(arg0) + 0x36A)) & 0x10)) {
        temp_f12_3 = (*(s32 *)((char *)(arg0) + 0x2F8)) - (*(s32 *)((char *)(arg0) + 0x2BC));
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x2FC)) - (*(s32 *)((char *)(arg0) + 0x2C0));
        temp_f14 = (*(s32 *)((char *)(arg0) + 0x300)) - (*(s32 *)((char *)(arg0) + 0x2C4));
        if (sqrtf((temp_f12_3 * temp_f12_3) + (temp_f2 * temp_f2) + (temp_f14 * temp_f14)) < 120.0f) {
            func_150491EC(temp_f12_3, temp_f14, (char *)(arg0) + 0x2BC, (char *)(arg0) + 0x2F8, &sp38);
            (*(f32 *)((char *)(arg0) + 0x2F8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2BC)) + (120.0f * sp38));
            (*(f32 *)((char *)(arg0) + 0x2FC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C0)) + (120.0f * sp3C));
            (*(f32 *)((char *)(arg0) + 0x300)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C4)) + (120.0f * sp40));
        }
    }
    temp_f0_4 = (*(s32 *)((char *)(arg0) + 0x35C)) + 30.0f;
    if ((*(s32 *)((char *)(arg0) + 0x2FC)) < temp_f0_4) {
        (*(s32 *)((char *)(arg0) + 0x2FC)) = temp_f0_4;
    }
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x5E8));
    temp_f12_4 = (*(s32 *)((char *)(arg0) + 0x2F8)) - (*(s32 *)((char *)(arg0) + 0x2BC));
    (*(f32 *)((char *)(arg0) + 0x5E8)) = (f32) (temp_f16 + (((*(f32 *)((char *)(arg0) + 0x5EC)) - temp_f16) * D_800A3498));
    temp_f14_2 = (*(s32 *)((char *)(arg0) + 0x300)) - (*(s32 *)((char *)(arg0) + 0x2C4));
    temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x2FC)) - (*(s32 *)((char *)(arg0) + 0x354));
    (*(s32 *)((char *)(arg0) + 0x344)) = temp_f2_2;
    (*(s32 *)((char *)(arg0) + 0x348)) = temp_f2_2;
    (*(s32 *)((char *)(arg0) + 0x370)) = sqrtf((temp_f12_4 * temp_f12_4) + (temp_f14_2 * temp_f14_2));
}

void func_15122980(void *arg0) {
    void * sp44;
    void * sp38;
    f32 sp34;
    f32 sp30;
    void *sp28;
    f32 temp_f0;
    f32 temp_f14;
    void *temp_a0;

    temp_a0 = (char *)(arg0) + 0x2F8;
    if ((*(s32 *)((char *)(arg0) + 0xDC)) != 4) {
        sp28 = temp_a0;
        func_15048F90(temp_a0, (char *)(arg0) + 0x2C8, &sp44);
        func_15048F90(sp28, (char *)(arg0) + 0x2BC, &sp38);
        sp34 = func_15048FC8(&sp44);
        temp_f14 = func_15048FC8(&sp38);
        if ((*(s32 *)((char *)(arg0) + 0x298)) == 0) {
            (*(s32 *)((char *)(arg0) + 0x8D4)) = 0.0f;
        } else if (((*(s32 *)((char *)(arg0) + 0x84)) & 0x100000) || ((temp_f0 = (*(s32 *)((char *)(arg0) + 0x390)), (temp_f0 > 180.0f)) && (temp_f0 < 270.0f))) {
            (*(s32 *)((char *)(arg0) + 0x8D4)) = 0.75f;
        } else {
            (*(s32 *)((char *)(arg0) + 0x8D4)) = 0.5f;
        }
        sp30 = temp_f14;
        func_150495B0((f32)(s32)((char *)(arg0) + 0x8DC), (*(f32 *)((char *)(arg0) + 0x8D4)), (char *)(arg0) + 0x8D8, 1.0f, 0x40000000, (*(f32 *)((char *)(arg0) + 0x7B4)));
        (*(f32 *)((char *)(arg0) + 0x37C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) + (func_15048A70(sp34, temp_f14) * (*(f32 *)((char *)(arg0) + 0x8DC))));
        (*(f32 *)((char *)(arg0) + 0x39C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x37C)) * D_800A34A0);
    }
    func_15123A54(arg0);
    func_1512E140(arg0);
    func_1512A390(arg0);
}
