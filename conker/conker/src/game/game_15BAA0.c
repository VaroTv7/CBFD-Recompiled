/**
 * Auto-decompiled from asm/15BAA0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1501A680();  /* extern */
extern s16 D_80082FA6;

void *func_1512E5F0(void *arg0, void *arg1) {
    s32 temp_t9;
    s32 temp_v0_2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t2;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_v0;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xEF202CFF;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = 0;
    temp_a0_2 = (char *)(temp_a0) + 8;
    (*(s32 *)((char *)(temp_a0) + 0x8)) = 0xFD100000;
    temp_a0_3 = (char *)(temp_a0_2) + 8;
    temp_a0_4 = (char *)(temp_a0_3) + 8;
    temp_a0_5 = (char *)(temp_a0_4) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = (s32) (((*(s32 *)((char *)(arg1) + 0x8BA)) * D_800BE620 * 2) + D_800BE9C4);
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xF5100000;
    (*(s32 *)((char *)(temp_a0_3) + 0x4)) = 0x07000000;
    (*(s32 *)((char *)(temp_a0_3) + 0x8)) = 0xE6000000;
    (*(s32 *)((char *)(temp_a0_4) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_4) + 0x8)) = 0xF3000000;
    temp_a0_6 = (char *)(temp_a0_5) + 8;
    temp_v0_2 = D_800BE620 - 1;
    if (temp_v0_2 < 0x7FF) {
        var_t0 = temp_v0_2;
    } else {
        var_t0 = 0x7FF;
    }
    temp_t9 = (s32) (D_800BE620 * 2) / 8;
    if (temp_t9 <= 0) {
        var_t2 = 1;
    } else {
        var_t2 = temp_t9;
    }
    if (temp_t9 <= 0) {
        var_a3 = 1;
    } else {
        var_a3 = temp_t9;
    }
    (*(s32 *)((char *)(temp_a0_5) + 0x4)) = (s32) ((((s32) (var_t2 + 0x7FF) / var_a3) & 0xFFF) | 0x07000000 | ((var_t0 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(temp_a0_5) + 0x8)) = 0xE7000000;
    (*(s32 *)((char *)(temp_a0_6) + 0x4)) = 0;
    temp_a0_7 = (char *)(temp_a0_6) + 8;
    (*(s32 *)((char *)(temp_a0_7) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_6) + 0x8)) = (s32) (((((s32) ((D_800BE620 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
    temp_a0_8 = (char *)(temp_a0_7) + 8;
    (*(s32 *)((char *)(temp_a0_7) + 0x8)) = 0xF2000000;
    temp_a0_9 = (char *)(temp_a0_8) + 8;
    (*(s32 *)((char *)(temp_a0_8) + 0x4)) = (s32) ((((D_800BE620 - 1) * 4) & 0xFFF) << 0xC);
    (*(s32 *)((char *)(temp_a0_8) + 0x8)) = (s32) (((D_800BE620 - 1) & 0xFFF) | 0xFF100000);
    temp_a0_10 = (char *)(temp_a0_9) + 8;
    (*(s32 *)((char *)(temp_a0_9) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x8BC));
    (*(s32 *)((char *)(temp_a0_9) + 0x8)) = 0xED000000;
    temp_a0_11 = (char *)(temp_a0_10) + 8;
    temp_a0_12 = (char *)(temp_a0_11) + 8;
    temp_a0_13 = (char *)(temp_a0_12) + 8;
    temp_a0_14 = (char *)(temp_a0_13) + 8;
    (*(s32 *)((char *)(temp_a0_10) + 0x4)) = (s32) ((((s32) ((f32) D_800BE620 * 4.0f) & 0xFFF) << 0xC) | 4);
    (*(s32 *)((char *)(temp_a0_11) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_10) + 0x8)) = (s32) ((((D_800BE620 * 4) & 0xFFF) << 0xC) | 0xE4000000 | 4);
    (*(s32 *)((char *)(temp_a0_11) + 0x8)) = 0xE1000000;
    (*(s32 *)((char *)(temp_a0_12) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_12) + 0x8)) = 0xF1000000;
    (*(s32 *)((char *)(temp_a0_13) + 0x4)) = 0x10000400;
    (*(s32 *)((char *)(temp_a0_13) + 0x8)) = 0xE7000000;
    (*(s32 *)((char *)(temp_a0_14) + 0x4)) = 0;
    temp_v0 = func_1501A490(func_1501A680((char *)(temp_a0_14) + 8, temp_a0_12, temp_a0_13, temp_a0_14), D_80082FA6, 0, 0, 0, 0);
    (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xEF082C3F;
    (*(s32 *)((char *)(temp_v0) + 0x4)) = 0x552230;
    return (char *)(temp_v0) + 8;
}
