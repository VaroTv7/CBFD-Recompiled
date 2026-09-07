/**
 * Auto-decompiled from asm/F4890.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                                /* extern */
void * func_151616D0();                           /* extern */
extern f32 D_800A04B0;

s32 func_150C73E0(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 var_f0;
    f32 var_f16;
    s32 temp_t1;
    s32 temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x38));
    temp_f0 = (f32) (*(f32 *)((char *)(arg0) + 0x3C)) / 255.0f;
    if (temp_v1 == 0) {
        (*(s32 *)((char *)(arg0) + 0x13)) = 0xCU;
        if ((*(s32 *)((char *)(arg1) + 0x2E4)) != 0) {
            func_151616D0(0x11, 0x41, 0);
            (*(s32 *)((char *)(arg1) + 0x2E4)) = 0;
        }
    } else {
        if (temp_v1 < 0x3C) {
            temp_t1 = random_u32() & 1;
            var_f16 = (f32) temp_t1;
            if (temp_t1 < 0) {
                var_f16 += 4294967296.0f;
            }
            var_f0 = var_f16 * (((f32) (*(f32 *)((char *)(arg0) + 0x38)) / 60.0f) * 0.25f);
        } else if (temp_v1 < 0x12C) {
            var_f0 = (((f32) (temp_v1 - 0x3C) / 240.0f) * 0.75f) + 0.25f;
        } else if ((f32) temp_v1 < 330.0f) {
            if ((1.0f - 0.25f) < temp_f0) {
                var_f0 = 0.25f;
            } else {
                var_f0 = temp_f0 + 0.25f;
            }
        } else {
            var_f0 = temp_f0 + ((1.0f - temp_f0) * D_800A04B0);
        }
        if (D_800BE9E4 >= (*(s32 *)((char *)(arg0) + 0x38))) {
            (*(s32 *)((char *)(arg0) + 0x38)) = 0;
        } else {
            (*(s32 *)((char *)(arg0) + 0x38)) = (s32) ((*(s32 *)((char *)(arg0) + 0x38)) - D_800BE9E4);
        }
        (*(s32 *)((char *)(arg0) + 0x3C)) = (s32) (var_f0 * 255.0f);
        if (var_f0 != 0.0f) {
            if ((*(s32 *)((char *)(arg0) + 0x13)) != 2) {
                func_10010F30((random_u32() & 7) + 0x44B, 0x7D00, 0x40, 0, 0);
            }
            (*(s32 *)((char *)(arg0) + 0x13)) = 2U;
            if ((*(s32 *)((char *)(arg1) + 0x2E4)) != 1) {
                func_151616D0(0x11, 0x40, 0);
                (*(s32 *)((char *)(arg1) + 0x2E4)) = 1;
            }
        } else {
            (*(s32 *)((char *)(arg0) + 0x13)) = 0xCU;
            if ((*(s32 *)((char *)(arg1) + 0x2E4)) != 0) {
                func_151616D0(0x11, 0x41, 0);
                (*(s32 *)((char *)(arg1) + 0x2E4)) = 0;
            }
        }
    }
    return 0;
}
