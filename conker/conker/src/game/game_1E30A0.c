/**
 * Auto-decompiled from asm/1E30A0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15132A4C();   /* extern */
void * func_15133894();                       /* extern */
void * memcpy();                            /* extern */
extern s32 D_1500310C;
extern f32 D_800AA430;
extern f32 D_800AA434;
extern f32 D_800AA438;
extern f32 D_800AA43C;
extern f32 D_800AA440;

s32 func_151B5BF0(void *arg0, void *arg1, f32 arg2, void *arg3, void *arg4, f32 arg5, s16 arg6, u8 arg7, f32 arg9, u8 arg10, u8 arg11, u8 arg12, s32 arg13) {
    s32 spC4;
    s16 spBC;
    s16 spBA;
    s8 spB8;
    s32 spB4;
    s8 spB2;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    u8 spA8;
    s32 spA4;
    s8 spA0;
    s16 sp9E;
    s16 sp9C;
    s32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    s32 sp88;
    f32 sp84;
    f32 sp80;
    s32 sp7C;
    void * sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    void * sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s32 *var_v1_2;
    s32 temp_t4;
    s32 temp_v0;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1;

    sp44 = arg2;
    sp40 = 0.0f;
    sp54 = arg2;
    sp50 = arg2;
    sp4C = arg9;
    sp48 = D_800AA430 * arg2;
    (*(s32 *)((char *)&(sp58) + 0x0)) = (s32) (*(s32 *)((char *)(arg3) + 0x0));
    var_v0 = 0;
    (*(s32 *)((char *)&(sp58) + 0x4)) = (s32) (*(s32 *)((char *)(arg3) + 0x4));
    (*(s32 *)((char *)&(sp58) + 0x8)) = (s32) (*(s32 *)((char *)(arg3) + 0x8));
    sp64 = 1.0f;
    sp68 = 1.0f;
    sp6C = 1.0f;
    (*(s32 *)((char *)&(sp70) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp98 = 0xB908;
    sp94 = arg5;
    if (arg6 == -1) {
        sp9C = 0x12C;
        var_t0 = 0x100 >> arg10;
    } else {
        sp98 = 0xB988;
        var_t0 = 0x100 >> arg10;
        sp9C = arg6 + var_t0;
    }
    if (arg1 != NULL) {
        (*(s32 *)((char *)&(sp7C) + 0x0)) = (*(s32 *)((char *)(arg1) + 0x0));
        (*(s32 *)((char *)&(sp7C) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
        (*(s32 *)((char *)&(sp7C) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
        sp98 |= 0x20;
    } else {
        sp7C = 0;
        sp80 = 0.0f;
        sp84 = 0.0f;
    }
    var_v1_2 = &func_15002FB4;
    if ((u32) &func_15002FB4 < (u32) &D_1500310C) {
        do {
            temp_t4 = *var_v1_2;
            var_v1_2 += 4;
            var_v0 = (var_v0 + temp_t4) * 2;
        } while ((u32) var_v1_2 < (u32) &D_1500310C);
    }
    if (var_v0 != 0x80D2D760) {
        D_8008FDA8 = -1;
    }
    if (arg4 != NULL) {
        (*(s32 *)((char *)&(sp88) + 0x0)) = (*(s32 *)((char *)(arg4) + 0x0));
        (*(s32 *)((char *)&(sp88) + 0x4)) = (s32) (*(s32 *)((char *)(arg4) + 0x4));
        (*(s32 *)((char *)&(sp88) + 0x8)) = (s32) (*(s32 *)((char *)(arg4) + 0x8));
        sp98 |= 0x40;
    } else {
        sp88 = 0;
        sp8C = 0.0f;
        sp90 = 0.0f;
    }
    if (arg11 != 0) {
        sp98 |= 1;
    }
    sp9E = 2;
    spA8 = arg7;
    spA0 = 0;
    spA4 = 0;
    spA9 = 5;
    spAA = 0;
    spAB = 6;
    spAC = 0;
    spAD = 0;
    spAE = 2;
    spAF = 0;
    spB0 = 2;
    spB2 = 0;
    spB4 = 0;
    spB8 = 0;
    spBA = (s16) var_t0;
    spBC = (s16) (0xFF / var_t0);
    temp_v0 = func_15132A4C(arg2, &sp48, 3, 0xFF, 8, (s32) arg12, arg13);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        spC4 = temp_v0;
        memcpy(temp_v0 + 0x170, &sp40, 8);
        var_v1 = spC4;
    }
    return var_v1;
}

void func_151B5E94(void *arg0) {
    void *sp38;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f12;
    void *temp_v0;

    (*(f32 *)((char *)(arg0) + 0x170)) = (f32) ((*(f32 *)((char *)(arg0) + 0x170)) + (D_800AA434 * D_800BE9A4));
    if (D_800AA438 < (*(s32 *)((char *)(arg0) + 0x170))) {
        (*(s32 *)((char *)(arg0) + 0x170)) = 0.0f;
        func_10010F88(0x502, 0x5DC0, 0, 0, -1, (s32) (*(s32 *)((char *)(arg0) + 0x38)), (s32) (*(s32 *)((char *)(arg0) + 0x3C)), (s32) (*(s32 *)((char *)(arg0) + 0x40)), 0x64, 0x1F4);
    }
    temp_v0 = (char *)(arg0) + 0x170;
    var_f12 = (*(s32 *)((char *)(arg0) + 0x170));
    if (var_f12 < D_800AA43C) {
        sp38 = temp_v0;
        temp_f0 = sinf(var_f12);
        var_f12 = (*(s32 *)((char *)(temp_v0) + 0x4));
        temp_f2 = var_f12 + (temp_f0 * (D_800AA440 * var_f12));
        (*(s32 *)((char *)(arg0) + 0x1C)) = temp_f2;
        (*(s32 *)((char *)(arg0) + 0x18)) = temp_f2;
    } else {
        temp_f2_2 = (*(s32 *)((char *)(temp_v0) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x1C)) = temp_f2_2;
        (*(s32 *)((char *)(arg0) + 0x18)) = temp_f2_2;
    }
    func_15133894(var_f12, arg0);
}

void func_151B5FCC(void *arg0) {
    s32 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x88));
    if (temp_v0 != 0) {
        func_100111C8(temp_v0 & 0xFFFF);
        (*(s32 *)((char *)(arg0) + 0x88)) = 0;
    }
}
