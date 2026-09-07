/**
 * Auto-decompiled from asm/137ED0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15114D24();       /* extern */
void * func_15179008();                                 /* extern */
extern f32 D_800A26B0;
extern f32 D_800A26B4;
extern f32 D_800A26B8;
extern s32 D_800BE3E4;

void func_1510AA20(s32 arg0) {
    func_15179008(0);
}

void func_1510AA44(void *arg0) {
    s32 sp38;
    f32 sp24;
    f32 temp_f2;
    s32 temp_f4;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t2;
    s32 temp_t9;
    s32 temp_v0;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_hi;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x3C));
    var_v1 = (s32) (var_v0 / 3600) % 60;
    if (((*(s32 *)((char *)(arg0) + 0x84)) == 0) && (D_800BE3E4 != 0)) {
        (*(s32 *)((char *)(arg0) + 0x84)) = 1;
        temp_hi = (u32) (D_800BE3E4 * 0xB4) % 43200U;
        (*(s32 *)((char *)(arg0) + 0x3C)) = (s32) temp_hi;
        temp_lo = temp_hi * 0x3C;
        var_v0 = temp_lo;
        (*(s32 *)((char *)(arg0) + 0x3C)) = temp_lo;
        var_v1 = (s32) (temp_lo / 3600) % 60;
    }
    if (var_v1 < 0) {
        var_v1 += 0x3C;
    }
    temp_t9 = var_v0 + D_800BE9E4;
    (*(s32 *)((char *)(arg0) + 0x3C)) = temp_t9;
    var_v0_2 = temp_t9;
    if (temp_t9 >= 0x278D00) {
        temp_t2 = var_v0_2 + 0xFFD87300;
        (*(s32 *)((char *)(arg0) + 0x3C)) = temp_t2;
        var_v0_2 = temp_t2;
    }
    temp_lo_2 = var_v0_2 / 60;
    temp_f2 = (f32) (temp_lo_2 / 300) * 2.5f;
    if (temp_f2 > 360.0f) {
        (*(s32 *)((char *)(arg0) + 0x3C)) = (s32) (var_v0_2 + 0xFFD87300);
    }
    var_t0 = (s32) (temp_lo_2 / 60) % 60;
    if (var_t0 < 0) {
        var_t0 += 0x3C;
    }
    if (var_v1 != var_t0) {
        temp_lo_3 = var_t0 / 15;
        if (temp_lo_3 != (var_v1 / 15)) {
            if (!(temp_lo_3 & 3)) {
                temp_f4 = (s32) (temp_f2 / 30.0f);
                (*(s32 *)((char *)(arg0) + 0x7C)) = temp_f4;
                if (temp_f4 == 0) {
                    (*(s32 *)((char *)(arg0) + 0x7C)) = 0xC;
                }
            } else {
                (*(s32 *)((char *)(arg0) + 0x7C)) = 1;
            }
            (*(s32 *)((char *)(arg0) + 0x80)) = -1;
        }
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x7C));
    if ((temp_v0 != 0) && (temp_lo_2 != (*(s32 *)((char *)(arg0) + 0x80)))) {
        (*(s32 *)((char *)(arg0) + 0x80)) = temp_lo_2;
        (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) (temp_v0 - 1);
        sp24 = temp_f2;
        sp38 = var_t0;
        func_15114D24(0x4CC, 0x7FFF, 0xC8, 0x3E8, 0xC);
    }
    (*(s32 *)((char *)(arg0) + 0x68)) = 5.0f;
    (*(s32 *)((char *)(arg0) + 0x108)) = 5.0f;
    (*(f32 *)((char *)(arg0) + 0xA8)) = (f32) -temp_f2;
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) -((f32) var_t0 * 6.0f);
}

void func_1510ADD8(void *arg0) {
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f2;

    (*(f32 *)((char *)(arg0) + 0x80)) = (f32) ((*(f32 *)((char *)(arg0) + 0x80)) + ((D_800A26B0 * (f32) D_800BE9E4) / 60.0f));
    temp_f2 = cosf((*(s32 *)((char *)(arg0) + 0x80))) * 10.0f;
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x0)) - temp_f2;
    (*(s32 *)((char *)(arg0) + 0x0)) = temp_f2;
    (*(s32 *)((char *)(arg0) + 0x60)) = temp_f16;
    if ((*(s32 *)((char *)(arg0) + 0x7C)) == 0) {
        if (D_800A26B4 <= (*(s32 *)((char *)(arg0) + 0x80))) {
            (*(s32 *)((char *)(arg0) + 0x7C)) = 1;
            func_15114D24(arg0, 0x4CA, 0x2EE0, 0xC8, 0x3E8, 4);
        }
    } else {
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x80));
        if (D_800A26B8 <= temp_f0) {
            (*(s32 *)((char *)(arg0) + 0x7C)) = 0;
            (*(f32 *)((char *)(arg0) + 0x80)) = (f32) (temp_f0 - D_800A26B8);
            func_15114D24(arg0, 0x4CB, 0x2EE0, 0xC8, 0x3E8, 4);
        }
    }
}

s32 func_1510AEE0(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 *arg8, f32 *arg9) {
    f32 sp0;
    f32 temp_f16;
    f32 temp_f2;

    temp_f2 = -((*(s32 *)((char *)(arg0) + 0x38)) + (((*(s32 *)((char *)(arg0) + 0x8)) * arg1) + ((*(s32 *)((char *)(arg0) + 0x18)) * arg2) + ((*(s32 *)((char *)(arg0) + 0x28)) * arg3)));
    if (temp_f2 < arg4) {
        return 1;
    }
    if (arg5 < temp_f2) {
        return 1;
    }
    temp_f16 = fabsf((*(s32 *)((char *)(arg0) + 0x30)) + (((*(s32 *)((char *)(arg0) + 0x0)) * arg1) + ((*(s32 *)((char *)(arg0) + 0x10)) * arg2) + ((*(s32 *)((char *)(arg0) + 0x20)) * arg3))) * arg6;
    if (temp_f2 < temp_f16) {
        return 1;
    }
    sp0 = fabsf((*(s32 *)((char *)(arg0) + 0x34)) + (((*(s32 *)((char *)(arg0) + 0x4)) * arg1) + ((*(s32 *)((char *)(arg0) + 0x14)) * arg2) + ((*(s32 *)((char *)(arg0) + 0x24)) * arg3))) * arg7;
    if (temp_f2 < sp0) {
        return 1;
    }
    if (arg8 != NULL) {
        *arg8 = 1.0f - (temp_f16 / temp_f2);
    }
    if (arg9 != NULL) {
        *arg9 = 1.0f - (sp0 / temp_f2);
    }
    return 0;
}
