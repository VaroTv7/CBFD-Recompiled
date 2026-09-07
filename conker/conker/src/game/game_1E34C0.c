/**
 * Auto-decompiled from asm/1E34C0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15132A4C();   /* extern */
void * func_15133894();                       /* extern */
void * memcpy();                            /* extern */
extern f32 D_800AA450;
extern f32 D_800AA454;
extern f32 D_800AA458;
extern f32 D_800AA45C;

s32 func_151B6010(void *arg0, void *arg1, f32 arg2, void *arg3, void *arg4, f32 arg5, s16 arg6, u8 arg7, f32 arg9, u8 arg10, u8 arg11, u8 arg12, s32 arg13) {
    s32 spAC;
    s16 spA4;
    s16 spA2;
    s8 spA0;
    s32 sp9C;
    s8 sp9A;
    s8 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s8 sp93;
    s8 sp92;
    s8 sp91;
    u8 sp90;
    s32 sp8C;
    s8 sp88;
    s16 sp86;
    s16 sp84;
    s32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    s32 sp70;
    f32 sp6C;
    f32 sp68;
    s32 sp64;
    void * sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    void * sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    sp2C = arg2;
    sp28 = 0.0f;
    sp3C = arg2;
    sp38 = arg2;
    sp34 = arg9;
    sp30 = D_800AA450 * arg2;
    (*(s32 *)((char *)&(sp40) + 0x0)) = (s32) (*(s32 *)((char *)(arg3) + 0x0));
    (*(s32 *)((char *)&(sp40) + 0x4)) = (s32) (*(s32 *)((char *)(arg3) + 0x4));
    (*(s32 *)((char *)&(sp40) + 0x8)) = (s32) (*(s32 *)((char *)(arg3) + 0x8));
    sp4C = 1.0f;
    sp50 = 1.0f;
    sp54 = 1.0f;
    (*(s32 *)((char *)&(sp58) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp58) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp58) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp80 = 0x3900;
    sp7C = arg5;
    if (arg6 == -1) {
        sp84 = 0x12C;
        var_v0 = 0x100 >> arg10;
    } else {
        sp80 = 0x3980;
        var_v0 = 0x100 >> arg10;
        sp84 = arg6 + var_v0;
    }
    if (arg1 != NULL) {
        (*(s32 *)((char *)&(sp64) + 0x0)) = (*(s32 *)((char *)(arg1) + 0x0));
        (*(s32 *)((char *)&(sp64) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
        (*(s32 *)((char *)&(sp64) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
        sp80 |= 0x20;
    } else {
        sp64 = 0;
        sp68 = 0.0f;
        sp6C = 0.0f;
    }
    if (arg4 != NULL) {
        (*(s32 *)((char *)&(sp70) + 0x0)) = (*(s32 *)((char *)(arg4) + 0x0));
        (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)(arg4) + 0x4));
        (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)(arg4) + 0x8));
        sp80 |= 0x40;
    } else {
        sp70 = 0;
        sp74 = 0.0f;
        sp78 = 0.0f;
    }
    if (arg11 != 0) {
        sp80 |= 1;
    }
    sp86 = 3;
    sp88 = 0;
    sp8C = 0;
    sp91 = 6;
    sp92 = 0;
    sp93 = 6;
    sp94 = 0;
    sp95 = 0;
    sp96 = 0;
    sp97 = 0;
    sp98 = 2;
    sp9A = 0;
    sp9C = 0;
    spA0 = 0;
    spA2 = (s16) var_v0;
    spA4 = (s16) (0xFF / var_v0);
    sp90 = arg7;
    temp_v0 = func_15132A4C(arg2, &sp30, 3, 0xFF, 8, (s32) arg12, arg13);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        spAC = temp_v0;
        memcpy(temp_v0 + 0x170, &sp28, 8);
        var_v1 = spAC;
    }
    return var_v1;
}

void func_151B6254(void *arg0) {
    void *sp18;
    f32 temp_f12;
    f32 temp_f2;
    void *temp_v0;

    (*(f32 *)((char *)(arg0) + 0x170)) = (f32) ((*(f32 *)((char *)(arg0) + 0x170)) + (D_800AA458 * D_800BE9A4));
    if (D_800AA454 < (*(s32 *)((char *)(arg0) + 0x170))) {
        do {
            (*(f32 *)((char *)(arg0) + 0x170)) = (f32) ((*(f32 *)((char *)(arg0) + 0x170)) - D_800AA454);
        } while (D_800AA454 < (*(s32 *)((char *)(arg0) + 0x170)));
    }
    temp_v0 = (char *)(arg0) + 0x170;
    sp18 = temp_v0;
    temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x4));
    temp_f2 = temp_f12 + (sinf((*(s32 *)((char *)(arg0) + 0x170))) * (D_800AA45C * temp_f12));
    (*(s32 *)((char *)(arg0) + 0x1C)) = temp_f2;
    (*(s32 *)((char *)(arg0) + 0x18)) = temp_f2;
    func_15133894(temp_f12, arg0);
}
