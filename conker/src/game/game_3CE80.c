/**
 * Auto-decompiled from asm/3CE80.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                                /* extern */
void * func_151ACBD4();                           /* extern */
extern s32 D_80096320;
extern s32 D_80096338;
extern s32 D_80096350;
extern s32 D_80096368;
extern s32 D_80096380;
extern f32 D_800DCDA4;
extern f32 D_800DCDA8;
extern f32 D_800DCDAC;
extern f32 D_800DCDB0;
extern f32 D_800DCDB4;
extern f32 D_800DCDB8;
extern f32 D_800DCDBC;
extern f32 D_800DCDC0;

void func_1500F9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v0;

    temp_v0 = func_151491F4((s16) ((random_u32() & 0x7F) + 0xA), 1, -1, 1, 0, 0xA, 0xFF, 0);
    if (temp_v0 != NULL) {
        (*(s16 *)((char *)(temp_v0) + 0x28)) = (s16) arg0;
        (*(s16 *)((char *)(temp_v0) + 0x2A)) = (s16) arg1;
        (*(s16 *)((char *)(temp_v0) + 0x2C)) = (s16) arg2;
        (*(s16 *)((char *)(temp_v0) + 0x2E)) = (s16) arg3;
        (*(s8 *)((char *)(temp_v0) + 0x30)) = (s8) arg4;
    }
}

void func_1500FA64(void) {
    s8 sp44;
    f32 sp40;
    void * sp28;
    s8 sp24;
    f32 var_f10;
    f32 var_f10_2;
    f32 var_f18;
    f32 var_f4;
    f32 var_f4_2;
    f32 var_f8;
    f32 var_f8_2;

    f32 sp2C;
    f32 sp38;
    sp44 = 0;
    (*(s32 *)((char *)&(sp28) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80096320) + 0x0));
    (*(s32 *)((char *)&(sp28) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80096320) + 0x4));
    (*(s32 *)((char *)&(sp28) + 0xC)) = (s32) (*(s32 *)((char *)&(D_80096320) + 0xC));
    (*(s32 *)((char *)&(sp28) + 0x8)) = (s32) (*(s32 *)((char *)&(D_80096320) + 0x8));
    (*(s32 *)((char *)&(sp28) + 0x10)) = (s32) (*(s32 *)((char *)&(D_80096320) + 0x10));
    (*(s32 *)((char *)&(sp28) + 0x14)) = (s32) (*(s32 *)((char *)&(D_80096320) + 0x14));
    sp24 = 1;
    sp40 = fabsf(sp2C - sp38);
    func_151ACBD4(&sp24, 0);
    (*(s32 *)((char *)&(sp28) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80096338) + 0x0));
    (*(s32 *)((char *)&(sp28) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80096338) + 0x4));
    (*(s32 *)((char *)&(sp28) + 0xC)) = (s32) (*(s32 *)((char *)&(D_80096338) + 0xC));
    (*(s32 *)((char *)&(sp28) + 0x8)) = (s32) (*(s32 *)((char *)&(D_80096338) + 0x8));
    (*(s32 *)((char *)&(sp28) + 0x10)) = (s32) (*(s32 *)((char *)&(D_80096338) + 0x10));
    (*(s32 *)((char *)&(sp28) + 0x14)) = (s32) (*(s32 *)((char *)&(D_80096338) + 0x14));
    sp24 = 2;
    sp40 = fabsf(sp2C - sp38);
    func_151ACBD4(&sp24, 0);
    (*(s32 *)((char *)&(sp28) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80096350) + 0x0));
    (*(s32 *)((char *)&(sp28) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80096350) + 0x4));
    (*(s32 *)((char *)&(sp28) + 0xC)) = (s32) (*(s32 *)((char *)&(D_80096350) + 0xC));
    (*(s32 *)((char *)&(sp28) + 0x8)) = (s32) (*(s32 *)((char *)&(D_80096350) + 0x8));
    (*(s32 *)((char *)&(sp28) + 0x10)) = (s32) (*(s32 *)((char *)&(D_80096350) + 0x10));
    (*(s32 *)((char *)&(sp28) + 0x14)) = (s32) (*(s32 *)((char *)&(D_80096350) + 0x14));
    sp24 = 3;
    sp40 = fabsf(sp2C - sp38);
    func_151ACBD4(&sp24, 0);
    (*(s32 *)((char *)&(sp28) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80096368) + 0x0));
    (*(s32 *)((char *)&(sp28) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80096368) + 0x4));
    (*(s32 *)((char *)&(sp28) + 0x8)) = (s32) (*(s32 *)((char *)&(D_80096368) + 0x8));
    (*(s32 *)((char *)&(sp28) + 0xC)) = (s32) (*(s32 *)((char *)&(D_80096368) + 0xC));
    (*(s32 *)((char *)&(sp28) + 0x10)) = (s32) (*(s32 *)((char *)&(D_80096368) + 0x10));
    (*(s32 *)((char *)&(sp28) + 0x14)) = (s32) (*(s32 *)((char *)&(D_80096368) + 0x14));
    (*(s32 *)((char *)&(sp28) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80096380) + 0x0));
    (*(s32 *)((char *)&(sp28) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80096380) + 0x4));
    (*(s32 *)((char *)&(sp28) + 0x8)) = (s32) (*(s32 *)((char *)&(D_80096380) + 0x8));
    (*(s32 *)((char *)&(sp28) + 0xC)) = (s32) (*(s32 *)((char *)&(D_80096380) + 0xC));
    (*(s32 *)((char *)&(sp28) + 0x10)) = (s32) (*(s32 *)((char *)&(D_80096380) + 0x10));
    (*(s32 *)((char *)&(sp28) + 0x14)) = (s32) (*(s32 *)((char *)&(D_80096380) + 0x14));
    sp24 = 5;
    sp40 = fabsf(sp2C - sp38);
    func_151ACBD4(&sp24, 0);
    func_1500F9D0(-0x6E7, -0x46A, 0x421, -0x648, 1);
    func_1500F9D0(-0xA71, 0x71B, 0x82B, -0x602, 2);
    func_1500F9D0(-0x870, 0x36E, 0x4E1, -0x602, 2);
    func_1500F9D0(-0xBD5, 0x3F1, 0x659, -0x602, 2);
    func_1500F9D0(-0xE6B, -0x263, -0x427, -0x647, 1);
    D_800DCDA4 = (f32)(s32)D_800DCD20->unk0;
    var_f8 = (f32)(s32)D_800DCD20->unk1;
    if ((s32) D_800DCD20->unk1 < 0) {
        var_f8 += 4294967296.0f;
    }
    D_800DCDA8 = var_f8;
    var_f4 = (f32)(s32)D_800DCD20->unk2;
    if ((s32) D_800DCD20->unk2 < 0) {
        var_f4 += 4294967296.0f;
    }
    D_800DCDAC = var_f4;
    var_f10 = (f32) (*(f32 *)((char *)&(D_800DCD28) + 0x0));
    if ((s32) (*(s32 *)((char *)&(D_800DCD28) + 0x0)) < 0) {
        var_f10 += 4294967296.0f;
    }
    D_800DCDB0 = var_f10;
    var_f18 = (f32) (*(f32 *)((char *)&(D_800DCD28) + 0x1));
    if ((s32) (*(s32 *)((char *)&(D_800DCD28) + 0x1)) < 0) {
        var_f18 += 4294967296.0f;
    }
    D_800DCDB4 = var_f18;
    var_f8_2 = (f32) (*(f32 *)((char *)&(D_800DCD28) + 0x2));
    if ((s32) (*(s32 *)((char *)&(D_800DCD28) + 0x2)) < 0) {
        var_f8_2 += 4294967296.0f;
    }
    D_800DCDB8 = var_f8_2;
    var_f4_2 = (f32) D_800DCD3C;
    if ((s32) D_800DCD3C < 0) {
        var_f4_2 += 4294967296.0f;
    }
    D_800DCDBC = var_f4_2;
    var_f10_2 = (f32) D_800DCD3D;
    if ((s32) D_800DCD3D < 0) {
        var_f10_2 += 4294967296.0f;
    }
    D_800DCDC0 = var_f10_2;
}
