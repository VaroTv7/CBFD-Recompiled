/**
 * Auto-decompiled from asm/778B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 func_1504A2B0();                        /* extern */
f32 func_1504A620();                             /* extern */

f32 func_1504A400(f32 arg0, f32 arg1) {
    f32 temp_f0;
    f32 temp_f14;
    f32 var_f0;
    f32 var_f14;
    f32 var_f14_2;
    f32 var_f20;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;

    var_f20 = arg0;
    if ((var_f20 != 0.0f) && (arg1 == 0.0f)) {
        return 1.0f;
    }
    if (var_f20 == 0.0f) {
        return 0.0f;
    }
    if (((var_f20 == 0.0f) && (arg1 == 0.0f)) || ((var_f20 < 0.0f) && (arg1 != (f32) (s32) arg1))) {
        return 0.0f;
    }
    if (arg1 != (f32) (s32) arg1) {
        var_f0 = func_1504A2B0(func_1504A620(var_f20) * arg1, arg1);
        goto block_26;
    }
    if (arg1 > 0.0f) {
        temp_f0 = var_f20;
        temp_f14 = arg1 - 1.0f;
        var_v0 = 0;
        if (temp_f14 != 0.0f) {
            var_v0 = 1;
        }
        var_f14 = temp_f14 - 1.0f;
        if (var_v0 != 0) {
            do {
                var_f20 *= temp_f0;
                var_v0_2 = 0;
                if (var_f14 != 0.0f) {
                    var_v0_2 = 1;
                }
                var_f14 -= 1.0f;
            } while (var_v0_2 != 0);
        }
    } else {
        var_f0 = 1.0f;
        var_v0_3 = 0;
        if (arg1 != 0.0f) {
            var_v0_3 = 1;
        }
        var_f14_2 = arg1 + 1.0f;
        if (var_v0_3 != 0) {
            do {
                var_v0_4 = 0;
                var_f0 /= var_f20;
                if (var_f14_2 != 0.0f) {
                    var_v0_4 = 1;
                }
                var_f14_2 += 1.0f;
            } while (var_v0_4 != 0);
        }
block_26:
        var_f20 = var_f0;
    }
    return var_f20;
}
