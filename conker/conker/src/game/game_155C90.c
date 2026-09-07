/**
 * Auto-decompiled from asm/155C90.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150495B0(); /* extern */
extern s32 D_800894F0;
extern f32 D_800A35B0;
extern f32 D_800A35B4;
extern f32 D_800A35C0;
extern f32 D_800A35C4;
extern f32 D_800A35C8;
extern f32 D_800A35CC;

void func_151287E0(void *arg0, f32 *arg1, f32 *arg2) {
    s32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp28;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f16;
    f32 var_f16_2;
    f32 var_f18;
    f32 var_f2;
    f32 var_f2_2;
    s16 temp_v0;
    s32 temp_v0_3;
    u8 temp_v1;
    void *temp_v0_2;

    sp48 = (*(s32 *)((char *)(arg0) + 0x134));
    if ((*(s32 *)((char *)(arg0) + 0x2C)) & 0x40) {
        (*(s32 *)((char *)(arg0) + 0x134)) = 0;
    }
    if ((D_800D2DB4 != 0) || ((temp_v0 = (*(s32 *)((char *)(arg0) + 0x73C)), (temp_v0 != 0)) && (temp_v0 != 3)) || ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D4))) + 0x120)) != 0)) {
        func_150495B0((f32)(s32)((char *)(arg0) + 0x5E8), 0.0f, (char *)(arg0) + 0x660, 6.0f, 0x41100000, (*(f32 *)((char *)(arg0) + 0x7B4)));
        func_150495B0((f32)(s32)((char *)(arg0) + 0x3A8), 0.0f, (char *)(arg0) + 0x65C, 1.5f, 0x40200000, (*(f32 *)((char *)(arg0) + 0x7B4)));
        return;
    }
    temp_v0_2 = ((*(s32 *)((char *)(arg0) + 0x134)) * 0x14) + &D_800894F0;
    sp40 = (*(s32 *)((char *)(temp_v0_2) + 0x4));
    sp3C = (*(s32 *)((char *)(temp_v0_2) + 0x8));
    sp38 = (*(s32 *)((char *)(temp_v0_2) + 0xC));
    sp34 = (*(s32 *)((char *)(temp_v0_2) + 0x10));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x23C));
    temp_f16 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
    if ((temp_v1 != 0) || (temp_f16 == sp3C)) {
        var_f18 = 0.0f;
    } else {
        var_f18 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x3D0))) + 0x3C));
    }
    if (var_f18 > 30.0f) {
        var_f18 = 30.0f;
    }
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x390));
    var_f2 = temp_f12;
    if (((*(s32 *)((char *)(arg0) + 0x6C8)) != 0) && ((temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x6FC)), (temp_v0_3 == 0xA)) || (temp_v0_3 == 0xE))) {
        var_f2 = fabsf(temp_f12);
    }
    if (var_f2 > 180.0f) {
        do {
            var_f2 = 360.0f - var_f2;
        } while (var_f2 > 180.0f);
    }
    if (var_f2 < 90.0f) {
        var_f2 += -180.0f;
    }
    sp44 = temp_f16;
    if (var_f2 < 0.0f) {
        var_f16 = -1.0f;
    } else {
        var_f16 = 1.0f;
    }
    temp_f2 = var_f2 - (90.0f * var_f16);
    var_f0 = ((temp_f2 * D_800A35B0 * sp44) - (temp_f2 * var_f18 * D_800A35B4 * sp3C)) + sp34;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) & 0x100) {
        var_f0 = 0.0f;
    }
    var_f2_2 = D_800A35C0;
    var_f16_2 = D_800A35C4;
    if (arg2 != NULL) {
        *arg2 = var_f0;
    } else if (temp_v1 != 0) {
        (*(s32 *)((char *)(arg0) + 0x3A8)) = var_f0;
        (*(s32 *)((char *)(arg0) + 0x65C)) = 0.0f;
    } else {
        sp28 = var_f18;
        func_150495B0(360.0f, 180.0f, (char *)(arg0) + 0x3A8, var_f0, (char *)(arg0) + 0x65C, 1.5f, 2.5f, (*(s32 *)((char *)(arg0) + 0x7B4)));
        var_f2_2 = D_800A35C8;
        var_f16_2 = D_800A35CC;
    }
    var_f0_2 = (*(s32 *)((char *)(arg0) + 0x390));
    if (var_f0_2 > 180.0f) {
        do {
            var_f0_2 -= 360.0f;
        } while (var_f0_2 > 180.0f);
    }
    if (var_f0_2 > 90.0f) {
        var_f0_2 = 180.0f - var_f0_2;
    } else if (var_f0_2 < -90.0f) {
        var_f0_2 = -180.0f - var_f0_2;
    }
    if (arg1 != NULL) {
        *arg1 = -(var_f0_2 * var_f2_2 * sp40) - (var_f0_2 * var_f18 * var_f16_2 * sp38);
    } else if ((*(s32 *)((char *)(arg0) + 0x23C)) != 0) {
        (*(s32 *)((char *)(arg0) + 0x660)) = 0.0f;
        (*(f32 *)((char *)(arg0) + 0x5E8)) = (f32) (-(var_f0_2 * var_f2_2 * sp40) - (var_f0_2 * var_f18 * var_f16_2 * sp38));
    } else if ((*(s32 *)((char *)(arg0) + 0x2C)) & 0x100) {
        func_150495B0(360.0f, 180.0f, (char *)(arg0) + 0x5E8, -(var_f0_2 * var_f2_2 * sp40) - (var_f0_2 * var_f18 * var_f16_2 * sp38), (char *)(arg0) + 0x660, 6.0f, 9.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
    } else {
        func_150495B0(360.0f, 180.0f, (char *)(arg0) + 0x5E8, -(var_f0_2 * var_f2_2 * sp40) - (var_f0_2 * var_f18 * var_f16_2 * sp38), (char *)(arg0) + 0x660, 1.5f, 2.5f, (*(s32 *)((char *)(arg0) + 0x7B4)));
    }
    (*(s32 *)((char *)(arg0) + 0x134)) = sp48;
}
