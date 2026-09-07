/**
 * Auto-decompiled from asm/76A60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"



void func_150495B0(f32 *arg0, f32 arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 sp4;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f8;
    f32 var_f0;
    f32 var_f2;

    temp_f0 = arg1 - *arg0;
    if (temp_f0 < 0.0f) {
        var_f2 = -1.0f;
    } else {
        var_f2 = 1.0f;
    }
    temp_f18 = *arg2;
    *arg2 = temp_f18 + (((temp_f0 * arg3) - temp_f18) * arg4 * arg5);
    temp_f8 = (*arg2 * arg5) + *arg0;
    sp4 = temp_f8;
    if (arg1 < temp_f8) {
        var_f0 = -1.0f;
    } else {
        var_f0 = 1.0f;
    }
    if (var_f0 == var_f2) {
        *arg0 = sp4;
        return;
    }
    *arg0 = arg1;
    *arg2 = 0.0f;
}

void func_15049688(f32 *arg0, f32 arg1, f32 *arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 var_f0;
    f32 var_f16;
    s32 var_t6;

    temp_f0 = func_15048A70(*arg0, arg1);
    temp_f0_2 = fabsf(temp_f0);
    if (temp_f0 < 0.0f) {
        var_f16 = -1.0f;
    } else {
        var_f16 = 1.0f;
    }
    temp_f12 = *arg2;
    var_t6 = 0;
    *arg2 = temp_f12 + (((temp_f0 * arg3) - temp_f12) * arg4 * arg5);
    if (temp_f0_2 < 10.0f) {
        var_t6 = 1;
    }
    if (var_t6 != 0) {
        sp1C = var_f16;
        if (func_15048A70((*arg2 * arg5) + *arg0, arg1) < 0.0f) {
            var_f0 = -1.0f;
        } else {
            var_f0 = 1.0f;
        }
        if (var_f0 == var_f16) {
            goto block_10;
        }
        *arg0 = arg1;
        *arg2 = 0.0f;
    } else {
block_10:
        *arg0 += *arg2 * arg5;
    }
    func_15048758(arg0);
}
