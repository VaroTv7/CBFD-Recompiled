/**
 * Auto-decompiled from asm/77760.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern f32 D_800990A0;
extern f32 D_800990A4;
extern f32 D_800990A8;

f32 func_1504A2B0(f32 arg0) {
    f32 temp_f0;
    f32 temp_f16;
    f32 var_f14;
    f32 var_f2;
    s32 temp_a1;
    s32 temp_f10;
    s32 temp_f4;
    s32 var_v0;
    s32 var_v1;

    temp_f0 = fabsf(arg0);
    if (temp_f0 < 1.1920929e-7f) {
        return 1.0f;
    }
    temp_f10 = (s32) (temp_f0 / D_800990A0);
    var_v0 = temp_f10;
    if (temp_f10 >= 0x401) {
        if (arg0 >= 0.0f) {
            return D_800990A4;
        }
        return 0.0f;
    }
    var_f2 = 1.0f;
    var_f14 = 1.0f;
    var_v1 = 1;
    temp_a1 = -(temp_f10 & 3);
    do {
        temp_f4 = var_v1;
        temp_f16 = var_f2;
        var_v1 += 1;
        var_f14 *= (temp_f0 - ((f32) temp_f10 * D_800990A8)) / (f32) temp_f4;
        var_f2 += var_f14;
    } while (var_f2 != temp_f16);
    if (temp_f10 != 0) {
        if (temp_a1 != 0) {
            do {
                var_v0 -= 1;
                var_f2 *= 2.0f;
            } while ((temp_a1 + temp_f10) != var_v0);
            if (var_v0 != 0) {
                goto loop_12;
            }
        } else {
            do {
loop_12:
                var_v0 -= 4;
                var_f2 = 2.0f * (2.0f * (2.0f * (2.0f * var_f2)));
            } while (var_v0 != 0);
        }
    }
    if (arg0 >= 0.0f) {
        return var_f2;
    }
    return 1.0f / var_f2;
}
