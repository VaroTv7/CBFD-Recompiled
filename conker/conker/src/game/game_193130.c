/**
 * Auto-decompiled from asm/193130.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern f32 D_800A6C70;

void func_15165C80(f32 *arg0, s32 arg1, f32 arg2, f32 *arg3, f32 arg4, f32 arg5, u8 *arg6, u8 arg7) {
    f32 sp3C;
    f32 sp30;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 var_f2;
    s16 temp_t0;
    s32 temp_f10;
    s32 temp_f16;
    s32 temp_f4;
    s32 temp_f6;
    s32 temp_t8;
    s32 temp_v1;
    s32 var_t1;
    u8 *temp_v1_2;
    u8 *var_a2;
    u8 *var_v0;
    u8 *var_v0_2;
    u8 temp_t6;
    u8 temp_t8_2;
    void *temp_v1_3;
    void *var_a2_2;

    temp_f12 = *arg0 * D_800A6C70;
    temp_f14 = *arg3;
    sp30 = temp_f14;
    sp24 = temp_f12;
    temp_f2 = func_150AD78C(temp_f12) * arg2;
    sp3C = temp_f2;
    temp_f0 = func_150AD780(temp_f12);
    temp_t8 = ((s32) arg7 >> 1) & 0xFF;
    var_t1 = 0;
    if (temp_t8 > 0) {
        temp_v1 = temp_t8 & 3;
        if (temp_v1 != 0) {
            var_a2 = arg6;
            var_v0 = var_a2;
            temp_f16 = (s32) temp_f2;
            temp_f10 = (s32) (temp_f0 * arg2);
            do {
                temp_v1_2 = var_a2 + temp_t8;
                var_t1 += 1;
                (*(s16 *)((char *)(arg1) + (*var_v0 * 0x10))) = -(s16) temp_f10;
                temp_t8_2 = *var_v0;
                var_a2 += 1;
                var_v0 += 1;
                (*(s16 *)((char *)((arg1 + (temp_t8_2 * 0x10))) + 0x2)) = (s16) temp_f16;
                (*(s16 *)((char *)(arg1) + (*temp_v1_2 * 0x10))) = (s16) temp_f10;
                (*(s16 *)((char *)((arg1 + (*temp_v1_2 * 0x10))) + 0x2)) = (s16) temp_f16;
            } while (temp_v1 != var_t1);
            if (var_t1 != temp_t8) {
                goto block_5;
            }
        } else {
block_5:
            var_v0_2 = arg6 + var_t1;
            var_a2_2 = arg6 + var_t1;
            temp_f6 = (s32) temp_f2;
            temp_f4 = (s32) (temp_f0 * arg2);
            temp_t0 = -(s16) temp_f4;
            do {
                temp_v1_3 = (char *)(var_a2_2) + temp_t8;
                var_t1 += 4;
                (*(s32 *)((char *)(arg1) + (*var_v0_2 * 0x10))) = temp_t0;
                temp_t6 = *var_v0_2;
                var_a2_2 = (char *)(var_a2_2) + 4;
                var_v0_2 += 4;
                (*(s16 *)((char *)((arg1 + (temp_t6 * 0x10))) + 0x2)) = (s16) temp_f6;
                (*(s16 *)((char *)(arg1) + ((*(s16 *)((char *)(temp_v1_3) + 0x0)) * 0x10))) = (s16) temp_f4;
                (*(s16 *)((char *)((arg1 + ((*(s16 *)((char *)(temp_v1_3) + 0x0)) * 0x10))) + 0x2)) = (s16) temp_f6;
                (*(s32 *)((char *)(arg1) + ((*(s32 *)((char *)(var_v0_2) - 0x3)) * 0x10))) = temp_t0;
                (*(s16 *)((char *)((arg1 + ((*(s16 *)((char *)(var_v0_2) - 0x3)) * 0x10))) + 0x2)) = (s16) temp_f6;
                (*(s16 *)((char *)(arg1) + ((*(s16 *)((char *)(temp_v1_3) + 0x1)) * 0x10))) = (s16) temp_f4;
                (*(s16 *)((char *)((arg1 + ((*(s16 *)((char *)(temp_v1_3) + 0x1)) * 0x10))) + 0x2)) = (s16) temp_f6;
                (*(s32 *)((char *)(arg1) + ((*(s32 *)((char *)(var_v0_2) - 0x2)) * 0x10))) = temp_t0;
                (*(s16 *)((char *)((arg1 + ((*(s16 *)((char *)(var_v0_2) - 0x2)) * 0x10))) + 0x2)) = (s16) temp_f6;
                (*(s16 *)((char *)(arg1) + ((*(s16 *)((char *)(temp_v1_3) + 0x2)) * 0x10))) = (s16) temp_f4;
                (*(s16 *)((char *)((arg1 + ((*(s16 *)((char *)(temp_v1_3) + 0x2)) * 0x10))) + 0x2)) = (s16) temp_f6;
                (*(s32 *)((char *)(arg1) + ((*(s32 *)((char *)(var_v0_2) - 0x1)) * 0x10))) = temp_t0;
                (*(s16 *)((char *)((arg1 + ((*(s16 *)((char *)(var_v0_2) - 0x1)) * 0x10))) + 0x2)) = (s16) temp_f6;
                (*(s16 *)((char *)(arg1) + ((*(s16 *)((char *)(temp_v1_3) + 0x3)) * 0x10))) = (s16) temp_f4;
                (*(s16 *)((char *)((arg1 + ((*(s16 *)((char *)(temp_v1_3) + 0x3)) * 0x10))) + 0x2)) = (s16) temp_f6;
            } while (var_t1 != temp_t8);
        }
    }
    var_f2 = arg4;
    *arg0 += temp_f14 * (f32) D_800BE9E4;
    temp_f0_2 = *arg0;
    if (var_f2 <= temp_f0_2) {
        *arg3 = -temp_f14;
        goto block_11;
    }
    var_f2 = arg5;
    if (temp_f0_2 <= var_f2) {
        *arg3 = -temp_f14;
block_11:
        *arg0 = var_f2;
    }
}
