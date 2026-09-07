/**
 * Auto-decompiled from asm/128970.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern s32 D_20000000;
extern void *D_800DBE80;

s32 func_150FB4C0(s32 arg0, void *arg1) {
    f32 temp_f16;
    f32 temp_f17;
    f32 temp_f24;
    f32 temp_f24_3;
    f32 temp_f24_4;
    f32 temp_f25_2;
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f30_2;
    s16 var_s4;
    s16 var_s5;
    s32 temp_f23;
    s32 temp_f24_2;
    s32 temp_f25;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_t1;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_t8;
    s64 temp_t0_2;
    s64 temp_t2;
    s64 temp_t2_2;
    s64 temp_t2_3;
    u8 temp_t0_3;
    void *temp_s1;
    void *temp_t0;
    void *var_s0;

    var_a0_2 = arg0;
    var_s0 = D_800DBE80;
    temp_s1 = (8 * 0x1F40) + (char *)(var_s0);
    temp_t0 = D_800BE628 + (D_80082FA4 * 0x180);
    temp_f16 = (*(s32 *)((char *)(temp_t0) + 0xC));
    temp_f17 = (*(s32 *)((char *)(temp_t0) + 0x10));
    temp_t1 = 1 * 0xFFFFFFFF;
    temp_t0_2 = 0xFA000000 << 0x20;
    temp_v0 = (0x4000 << 0x20) | 0x4000;
    if (var_a0_2 & 8) {
        (*(s32 *)((var_a0_2))) = 0;
        var_a0_2 += 8;
    }
    var_a0 = var_a0_2 | (s32) &D_20000000;
    var_s4 = (*(s32 *)((char *)(var_s0) + 0x0));
    var_s5 = (*(s32 *)((char *)(var_s0) + 0x2));
    do {
        temp_s5 = var_s5 << 0x10;
        temp_s6 = (*(s32 *)((char *)(var_s0) + 0x4)) << 0x10;
        temp_f25 = var_s4 << 0x10;
        temp_f30 = ((*(f32 *)((char *)(arg1) + 0xC)) * (f32) temp_f25) + ((*(f32 *)((char *)(arg1) + 0x1C)) * (f32) temp_s5);
        var_s4 = (*(s32 *)((char *)(var_s0) + 0x8));
        temp_f30_2 = temp_f30 + ((*(f32 *)((char *)(arg1) + 0x2C)) * (f32) temp_s6);
        var_s5 = (*(s32 *)((char *)(var_s0) + 0xA));
        if (!(temp_f30_2 <= 203.0f)) {
            temp_f24 = 1.0f / temp_f30_2;
            temp_f28 = ((((*(f32 *)((char *)(arg1) + 0x0)) * (f32) temp_f25) + ((*(f32 *)((char *)(arg1) + 0x10)) * (f32) temp_s5) + ((*(f32 *)((char *)(arg1) + 0x20)) * (f32) temp_s6)) * temp_f16 * temp_f24) + ((*(f32 *)((char *)(temp_t0) + 0x2C)) + temp_f16);
            if (!(temp_f28 < 0.0f) && !(temp_f28 >= (*(s32 *)((char *)(temp_t0) + 0x4)))) {
                temp_f29 = ((*(f32 *)((char *)(temp_t0) + 0x24)) + temp_f17) - ((((*(f32 *)((char *)(arg1) + 0x4)) * (f32) temp_f25) + ((*(f32 *)((char *)(arg1) + 0x14)) * (f32) temp_s5) + ((*(f32 *)((char *)(arg1) + 0x24)) * (f32) temp_s6)) * temp_f17 * temp_f24);
                if (!(temp_f29 < 0.0f) && !(temp_f29 >= (*(s32 *)((char *)(temp_t0) + 0x8)))) {
                    temp_f23 = (s32) temp_f28;
                    temp_f24_2 = (s32) temp_f29;
                    temp_f25_2 = temp_f28 - (f32) temp_f23;
                    temp_f26 = temp_f29 - (f32) temp_f24_2;
                    temp_f28_2 = 1.0f - temp_f25_2;
                    temp_t0_3 = (*(s32 *)((char *)(var_s0) + 0x6));
                    temp_f27 = (f32) (*(f32 *)((char *)(var_s0) + 0x7));
                    if (temp_t0_3 == 0) {
                        var_t8 = (0xFFCDCD00 & temp_t1) | temp_t0_2;
                    } else if (temp_t0_3 == 1) {
                        var_t8 = (0xCDD3FF00 & temp_t1) | temp_t0_2;
                    } else if (temp_t0_3 == 2) {
                        var_t8 = (0xDAFBDC00 & temp_t1) | temp_t0_2;
                    } else {
                        var_t8 = (0xFFFFFF00 & temp_t1) | temp_t0_2;
                    }
                    temp_f24_3 = temp_f27 * (1.0f - temp_f26);
                    (*(s32 *)((var_a0))) = (s64) (var_t8 | (s32) (temp_f24_3 * temp_f28_2));
                    temp_t2 = ((((temp_f23 + 1) << 0xE) + 0xF6000000 + ((temp_f24_2 + 1) * 4)) << 0x20) | ((temp_f23 << 0xE) + (temp_f24_2 * 4));
                    (*(s32 *)((var_a0))) = temp_t2;
                    (*(s32 *)((var_a0))) = (s64) (var_t8 | (s32) (temp_f24_3 * temp_f25_2));
                    temp_t2_2 = temp_t2 + temp_v0;
                    (*(s32 *)((var_a0))) = temp_t2_2;
                    temp_f24_4 = temp_f27 * temp_f26;
                    (*(s32 *)((var_a0))) = (s64) (var_t8 | (s32) (temp_f24_4 * temp_f25_2));
                    temp_t2_3 = temp_t2_2 + ((4 << 0x20) | 4);
                    (*(s32 *)((var_a0))) = temp_t2_3;
                    (*(s32 *)((var_a0))) = (s64) (var_t8 | (s32) (temp_f24_4 * temp_f28_2));
                    (*(s32 *)((var_a0))) = (s64) (temp_t2_3 - temp_v0);
                }
            }
        }
        var_s0 = (char *)(var_s0) + 8;
    } while (var_s0 != temp_s1);
    if (var_a0 & 8) {
        (*(s32 *)((var_a0))) = 0;
    }
    return var_a0 ^ 0x20000000;
}
