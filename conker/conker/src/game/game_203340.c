/**
 * Auto-decompiled from asm/203340.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 allocate_memory();                  /* extern */
void *func_1501A680();                        /* extern */

void *func_151D5E90(void *arg0, s32 arg1, void * arg2, void * arg3) {
    u32 sp8C;
    s32 sp84;
    u32 sp34;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t7;
    s32 var_a1;
    s32 var_s0;
    u32 var_a2;
    u32 var_a3;
    u32 var_a3_2;
    u32 var_v0;
    u32 var_v1;
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
    void *var_a0;

    var_v1 = D_800BE624;
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFCFFFFFF;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = 0xFFFCF279;
    temp_a0_2 = (char *)(temp_a0) + 8;
    (*(s32 *)((char *)(temp_a0) + 0x8)) = 0xEF000CFF;
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = 0x0F0A4000;
    temp_a0_3 = (char *)(temp_a0_2) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xD9000000;
    (*(s32 *)((char *)(temp_a0_3) + 0x4)) = 0;
    temp_a0_4 = (char *)(temp_a0_3) + 8;
    (*(s32 *)((char *)(temp_a0_4) + 0x4)) = -1;
    (*(s32 *)((char *)(temp_a0_3) + 0x8)) = 0xD7000002;
    var_a0 = (char *)(temp_a0_4) + 8;
    var_a1 = 0x10;
    var_v0 = 0;
    if (var_v1 != 0) {
        do {
            var_a3 = var_v0 + var_a1;
            var_a2 = 0;
            var_s0 = 0x80;
            if (var_v1 < var_a3) {
                var_a1 = var_v1 - var_v0;
                var_a3 = var_v0 + var_a1;
            }
            if (D_800BE620 != 0) {
                temp_t7 = (var_v0 * 4) & 0xFFF;
                temp_s1 = ((var_a3 - 1) * 4) & 0xFFF;
                sp84 = var_a1;
                sp8C = var_v1;
                sp34 = var_a3;
                do {
                    var_a3_2 = var_a2 + var_s0;
                    if ((u32) D_800BE620 < var_a3_2) {
                        var_s0 = D_800BE620 - var_a2;
                        var_a3_2 = var_a2 + var_s0;
                    }
                    (*(s32 *)((char *)(var_a0) + 0x0)) = (s32) (((D_800BE620 - 1) & 0xFFF) | 0xFD100000);
                    temp_a0_5 = (char *)(var_a0) + 8;
                    (*(s32 *)((char *)(var_a0) + 0x4)) = arg1;
                    temp_t1 = var_a3_2 - 1;
                    temp_t2 = ((((u32) (((temp_t1 - var_a2) * 2) + 9) >> 3) & 0x1FF) << 9) | 0xF5100000;
                    (*(s32 *)((char *)(var_a0) + 0x8)) = temp_t2;
                    temp_a0_6 = (char *)(temp_a0_5) + 8;
                    (*(s32 *)((char *)(temp_a0_5) + 0x4)) = 0x07000000;
                    (*(s32 *)((char *)(temp_a0_5) + 0x8)) = 0xE6000000;
                    (*(s32 *)((char *)(temp_a0_6) + 0x4)) = 0;
                    temp_a0_7 = (char *)(temp_a0_6) + 8;
                    temp_t0 = ((var_a2 * 4) & 0xFFF) << 0xC;
                    temp_a1 = ((temp_t1 * 4) & 0xFFF) << 0xC;
                    (*(s32 *)((char *)(temp_a0_6) + 0x8)) = (s32) (temp_t0 | 0xF4000000 | temp_t7);
                    (*(s32 *)((char *)(temp_a0_7) + 0x4)) = (s32) (temp_a1 | 0x07000000 | temp_s1);
                    temp_a0_8 = (char *)(temp_a0_7) + 8;
                    (*(s32 *)((char *)(temp_a0_7) + 0x8)) = 0xE7000000;
                    (*(s32 *)((char *)(temp_a0_8) + 0x4)) = 0;
                    temp_a0_9 = (char *)(temp_a0_8) + 8;
                    (*(s32 *)((char *)(temp_a0_8) + 0x8)) = temp_t2;
                    (*(s32 *)((char *)(temp_a0_9) + 0x4)) = 0;
                    temp_a0_10 = (char *)(temp_a0_9) + 8;
                    (*(s32 *)((char *)(temp_a0_10) + 0x4)) = (s32) (temp_a1 | temp_s1);
                    (*(s32 *)((char *)(temp_a0_9) + 0x8)) = (s32) (temp_t0 | 0xF2000000 | temp_t7);
                    temp_a0_11 = (char *)(temp_a0_10) + 8;
                    (*(s32 *)((char *)(temp_a0_11) + 0x4)) = (s32) (temp_t0 | temp_t7);
                    (*(s32 *)((char *)(temp_a0_10) + 0x8)) = (s32) ((((var_a3_2 * 4) & 0xFFF) << 0xC) | 0xE4000000 | ((var_a3 * 4) & 0xFFF));
                    temp_a0_12 = (char *)(temp_a0_11) + 8;
                    (*(s32 *)((char *)(temp_a0_11) + 0x8)) = 0xE1000000;
                    (*(s32 *)((char *)(temp_a0_12) + 0x4)) = (s32) ((var_a2 << 0x15) | ((var_v0 << 5) & 0xFFFF));
                    temp_a0_13 = (char *)(temp_a0_12) + 8;
                    (*(s32 *)((char *)(temp_a0_12) + 0x8)) = 0xF1000000;
                    (*(s32 *)((char *)(temp_a0_13) + 0x4)) = 0x04000400;
                    temp_a0_14 = (char *)(temp_a0_13) + 8;
                    (*(s32 *)((char *)(temp_a0_13) + 0x8)) = 0xE7000000;
                    (*(s32 *)((char *)(temp_a0_14) + 0x4)) = 0;
                    var_a0 = (char *)(temp_a0_14) + 8;
                    var_a2 = var_a3_2;
                } while (var_a3_2 < (u32) D_800BE620);
                var_a3 = sp34;
                var_a1 = sp84;
                var_v1 = sp8C;
            }
            var_v0 = var_a3;
        } while (var_a3 < var_v1);
    }
    (*(s32 *)((char *)(var_a0) + 0x0)) = 0xEF080C3F;
    (*(s32 *)((char *)(var_a0) + 0x4)) = 0x0F0A4000;
    return (char *)(var_a0) + 8;
}

void func_151D61B0(void *arg0) {
    s16 temp_t7;
    s32 temp_t3;
    s32 var_a2;
    s32 var_t2;
    u16 temp_t1;
    u16 temp_t4;
    u16 temp_t4_2;
    u16 var_t0;
    u16 var_t1;
    void *temp_a3;
    void *var_a0;
    void *var_a1;

    var_a1 = arg0;
    var_a2 = 0;
    if ((s32) D_800BE624 > 0) {
        temp_t3 = D_800BE620 - 1;
        do {
            temp_a3 = (char *)(var_a1) + 2;
            var_a0 = temp_a3;
            var_t0 = (*(s32 *)((char *)(var_a1) + 0x2));
            var_t1 = (*(s32 *)((char *)(var_a1) + 0x4));
            var_t2 = 1;
            if ((temp_t3 >= 2) && ((temp_t4 = var_t0, (((D_800BE620 - 2) & 1) == 0)) || (var_t0 = var_t1 & 0xFFFF, var_t1 = (*(s16 *)((char *)(temp_a3) + 0x4)), var_t2 = 2, (*(s16 *)((char *)(temp_a3) + 0x2)) = (s16) (((((((s32) var_t0 >> 0xB) & 0x1F) + (((s32) temp_t4 >> 0xC) & 0xF) + (((s32) var_t1 >> 0xC) & 0xF)) & 0x3E) << 0xA) | ((((((s32) var_t0 >> 6) & 0x1F) + (((s32) temp_t4 >> 7) & 0xF) + (((s32) var_t1 >> 7) & 0xF)) & 0x3E) << 5) | (((((s32) var_t0 >> 1) & 0x1F) + (((s32) temp_t4 >> 2) & 0xF) + (((s32) var_t1 >> 2) & 0xF)) & 0x3E) | 1), var_a0 = (char *)(temp_a3) + 2, (temp_t3 != 2)))) {
                do {
                    temp_t1 = (*(s32 *)((char *)(var_a0) + 0x4));
                    temp_t7 = ((((((s32) var_t1 >> 0xB) & 0x1F) + (((s32) var_t0 >> 0xC) & 0xF) + (((s32) temp_t1 >> 0xC) & 0xF)) & 0x3E) << 0xA) | ((((((s32) var_t1 >> 6) & 0x1F) + (((s32) var_t0 >> 7) & 0xF) + (((s32) temp_t1 >> 7) & 0xF)) & 0x3E) << 5) | (((((s32) var_t1 >> 1) & 0x1F) + (((s32) var_t0 >> 2) & 0xF) + (((s32) temp_t1 >> 2) & 0xF)) & 0x3E) | 1;
                    temp_t4_2 = var_t1;
                    var_t0 = temp_t1 & 0xFFFF;
                    (*(s32 *)((char *)(var_a0) + 0x2)) = temp_t7;
                    var_t1 = (*(s32 *)((char *)(var_a0) + 0x6));
                    var_t2 += 2;
                    (*(u16 *)((char *)(var_a0) + 0x4)) = (u16) (((((((s32) var_t0 >> 0xB) & 0x1F) + (((s32) temp_t4_2 >> 0xC) & 0xF) + (((s32) var_t1 >> 0xC) & 0xF)) & 0x3E) << 0xA) | ((((((s32) var_t0 >> 6) & 0x1F) + (((s32) temp_t4_2 >> 7) & 0xF) + (((s32) var_t1 >> 7) & 0xF)) & 0x3E) << 5) | (((((s32) var_t0 >> 1) & 0x1F) + (((s32) temp_t4_2 >> 2) & 0xF) + (((s32) var_t1 >> 2) & 0xF)) & 0x3E) | 1);
                    var_a0 = (char *)(var_a0) + 4;
                } while (var_t2 != temp_t3);
            }
            var_a2 += 1;
            var_a1 = (char *)(var_a1) + D_800BE620 * 2;
        } while (var_a2 != D_800BE624);
    }
}

void *func_151D6418(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 sp34;
    s32 var_t5;
    u32 temp_a2;
    u32 temp_s0;
    u32 temp_t0;
    u32 temp_v1;
    u32 var_a2;
    u32 var_t1;
    u32 var_t2;
    u32 var_t3;
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
    void *var_a0;

    var_t5 = arg1;
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xFA000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) ((arg3 & 0xFF) | ~0xFF);
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = -0x805;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFC11FE23;
    temp_a0_2 = (char *)(temp_a0) + 8;
    (*(s32 *)((char *)(temp_a0) + 0x8)) = 0xEF000CFF;
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = 0x504340;
    temp_a0_3 = (char *)(temp_a0_2) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xD9000000;
    (*(s32 *)((char *)(temp_a0_3) + 0x4)) = 0;
    temp_a0_4 = (char *)(temp_a0_3) + 8;
    (*(s32 *)((char *)(temp_a0_4) + 0x4)) = -1;
    (*(s32 *)((char *)(temp_a0_3) + 0x8)) = 0xD7000002;
    var_a0 = (char *)(temp_a0_4) + 8;
    var_t3 = 0;
    sp34 = D_800BE624;
    if (D_800BE624 != 0) {
        temp_v1 = D_800BE620 * 2;
        temp_s0 = (D_800BE620 * 4) - 1;
        temp_t0 = temp_v1 >> 3;
        do {
            (*(s32 *)((char *)(var_a0) + 0x4)) = (s32) (var_t5 + 0x80000000);
            (*(s32 *)((char *)(var_a0) + 0x0)) = 0xFD100000;
            temp_a0_5 = (char *)(var_a0) + 8;
            (*(s32 *)((char *)(var_a0) + 0x8)) = 0xF5100000;
            (*(s32 *)((char *)(temp_a0_5) + 0x4)) = 0x07000000;
            temp_a0_6 = (char *)(temp_a0_5) + 8;
            (*(s32 *)((char *)(temp_a0_5) + 0x8)) = 0xE6000000;
            (*(s32 *)((char *)(temp_a0_6) + 0x4)) = 0;
            temp_a0_7 = (char *)(temp_a0_6) + 8;
            (*(s32 *)((char *)(temp_a0_6) + 0x8)) = 0xF3000000;
            temp_a0_8 = (char *)(temp_a0_7) + 8;
            if (temp_s0 < 0x7FFU) {
                var_t1 = temp_s0;
            } else {
                var_t1 = 0x7FF;
            }
            if (temp_t0 == 0) {
                var_t2 = 1;
            } else {
                var_t2 = temp_t0;
            }
            if (temp_t0 == 0) {
                var_a2 = 1;
            } else {
                var_a2 = temp_t0;
            }
            (*(s32 *)((char *)(temp_a0_7) + 0x4)) = (s32) ((((u32) (var_t2 + 0x7FF) / var_a2) & 0xFFF) | 0x07000000 | ((var_t1 & 0xFFF) << 0xC));
            temp_a0_9 = (char *)(temp_a0_8) + 8;
            (*(s32 *)((char *)(temp_a0_7) + 0x8)) = 0xE7000000;
            (*(s32 *)((char *)(temp_a0_8) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_a0_8) + 0x8)) = (s32) (((((u32) (temp_v1 + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
            (*(s32 *)((char *)(temp_a0_9) + 0x4)) = 0;
            temp_a0_10 = (char *)(temp_a0_9) + 8;
            (*(s32 *)((char *)(temp_a0_9) + 0x8)) = 0xF2000000;
            (*(s32 *)((char *)(temp_a0_10) + 0x4)) = (s32) (((((D_800BE620 - 1) * 4) & 0xFFF) << 0xC) | 0xC);
            temp_a0_11 = (char *)(temp_a0_10) + 8;
            temp_a2 = var_t3 + 4;
            (*(s32 *)((char *)(temp_a0_10) + 0x8)) = (s32) (((((D_800BE620 - arg2) * 4) & 0xFFF) << 0xC) | 0xE4000000 | ((temp_a2 * 4) & 0xFFF));
            (*(s32 *)((char *)(temp_a0_11) + 0x4)) = (s32) ((var_t3 * 4) & 0xFFF);
            temp_a0_12 = (char *)(temp_a0_11) + 8;
            (*(s32 *)((char *)(temp_a0_11) + 0x8)) = 0xE1000000;
            (*(s32 *)((char *)(temp_a0_12) + 0x4)) = 0;
            temp_a0_13 = (char *)(temp_a0_12) + 8;
            (*(s32 *)((char *)(temp_a0_12) + 0x8)) = 0xF1000000;
            (*(s32 *)((char *)(temp_a0_13) + 0x4)) = 0x04000400;
            temp_a0_14 = (char *)(temp_a0_13) + 8;
            (*(s32 *)((char *)(temp_a0_13) + 0x8)) = 0xE7000000;
            (*(s32 *)((char *)(temp_a0_14) + 0x4)) = 0;
            var_a0 = (char *)(temp_a0_14) + 8;
            var_t3 = temp_a2;
            var_t5 += D_800BE620 * 8;
        } while (temp_a2 < sp34);
    }
    return var_a0;
}

void func_151D66F0( s32 arg0, s32 arg1) {
    u8 var_a0;

    var_a0 = arg0;
    if ((D_800BE9F0 != 6) || (D_80038080 != 0)) {
        if (arg1 == 0) {
            var_a0 = 0;
        }
        D_800BE574 = var_a0;
        if (var_a0 != 0) {
            D_800BE575 = arg1;
        } else {
            D_800BE575 = 0;
        }
        if ((var_a0 == 0) && (D_800BE570 != 0)) {
            func_100043B4(D_800BE570, 3);
            D_800BE570 = 0;
        }
    }
}

void *func_151D6778(void *arg0) {
    s32 temp_v0;
    void *temp_s0;
    void *temp_v0_2;
    void *var_s0;

    var_s0 = arg0;
    if (((D_800BE574 == 0) && (D_800BE9F0 != 0x32) && (D_800BE9F0 != 0x33)) || (D_800BEAC0 != 0)) {

    } else if (D_800BE574 != 0) {
        (*(s32 *)((char *)(var_s0) + 0x0)) = 0xE7000000;
        (*(s32 *)((char *)(var_s0) + 0x4)) = 0;
        var_s0 = (char *)(var_s0) + 8;
        if (D_800BE570 != 0) {
            var_s0 = func_151D6418(var_s0, D_800BE570, 0, D_800BE574);
            goto block_10;
        }
        temp_v0 = allocate_memory(D_800BE620 * D_800BE624 * 2, 1, 3, 1);
        D_800BE570 = temp_v0;
        if (temp_v0 == 0) {

        } else {
block_10:
            (*(s32 *)((char *)(var_s0) + 0x0)) = (s32) (((D_800BE620 - 1) & 0xFFF) | 0xFF100000);
            temp_s0 = (char *)(var_s0) + 8;
            (*(s32 *)((char *)(var_s0) + 0x4)) = (s32) D_800BE570;
            (*(s32 *)((char *)(var_s0) + 0x8)) = 0xED000000;
            (*(s32 *)((char *)(temp_s0) + 0x4)) = (s32) ((((s32) ((f32) D_800BE620 * 4.0f) & 0xFFF) << 0xC) | ((s32) ((f32) D_800BE624 * 4.0f) & 0xFFF));
            temp_v0_2 = func_151D5E90((char *)(temp_s0) + 8, (*(s32 *)((char *)(D_8002AAE8) + (D_800BE9C0 * 4))), 0, 4);
            (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0xEF082C3F;
            (*(s32 *)((char *)(temp_v0_2) + 0x4)) = 0x552230;
            (*(s32 *)((char *)(temp_v0_2) + 0x8)) = 0xD9FFFFFF;
            (*(s32 *)((char *)(temp_v0_2) + 0xC)) = 0x220405;
            var_s0 = func_1501A680((char *)(temp_v0_2) + 0x10);
        }
    }
    return var_s0;
}
