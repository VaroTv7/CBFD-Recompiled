/**
 * Auto-decompiled from asm/1A11B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1501A680();        /* extern */
void * func_1501A764(); /* extern */
extern s16 D_80082FA6;
extern s32 D_80089630;
extern s32 D_8008A080;
extern s32 D_800DD300;
extern s32 D_800DD310;
extern s32 D_800DD328;
extern s32 D_800DD340;
extern s32 D_800DD348;
extern s32 D_800DD3FC;

void *func_15173D00(void *arg0, s32 arg1, s32 arg2, void * arg3, s16 *arg4, void *arg5, s32 arg6) {
    s32 temp_f6;
    s32 temp_f8;
    s32 temp_t2;
    s32 temp_t4;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t1;
    s32 var_t1_2;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_15;
    void *temp_a0_16;
    void *temp_a0_17;
    void *temp_a0_18;
    void *temp_a0_19;
    void *temp_a0_20;
    void *temp_a0_21;
    void *temp_a0_22;
    void *temp_a0_23;
    void *temp_a0_24;
    void *temp_a0_25;
    void *temp_a0_26;
    void *temp_a0_27;
    void *temp_a0_28;
    void *temp_a0_29;
    void *temp_a0_2;
    void *temp_a0_30;
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
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xE200001C;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = 0;
    temp_a0_2 = (char *)(temp_a0) + 8;
    (*(s32 *)((char *)(temp_a0) + 0x8)) = 0xE3000C00;
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = 0;
    temp_a0_3 = (char *)(temp_a0_2) + 8;
    (*(s32 *)((char *)(temp_a0_3) + 0x4)) = 0x200000;
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xE3000A01;
    temp_a0_4 = (char *)(temp_a0_3) + 8;
    (*(s32 *)((char *)(temp_a0_3) + 0x8)) = 0xE2001E01;
    (*(s32 *)((char *)(temp_a0_4) + 0x4)) = 0;
    temp_a0_5 = (char *)(temp_a0_4) + 8;
    (*(s32 *)((char *)(temp_a0_4) + 0x8)) = 0xE3001001;
    (*(s32 *)((char *)(temp_a0_5) + 0x4)) = 0;
    temp_a0_6 = (char *)(temp_a0_5) + 8;
    (*(s32 *)((char *)(temp_a0_6) + 0x4)) = 0xC0;
    (*(s32 *)((char *)(temp_a0_5) + 0x8)) = 0xE3001801;
    temp_a0_7 = (char *)(temp_a0_6) + 8;
    (*(s32 *)((char *)(temp_a0_7) + 0x4)) = 0x30;
    (*(s32 *)((char *)(temp_a0_6) + 0x8)) = 0xE3001A01;
    temp_a0_8 = (char *)(temp_a0_7) + 8;
    (*(s32 *)((char *)(temp_a0_7) + 0x8)) = 0xFD100000;
    temp_a0_9 = (char *)(temp_a0_8) + 8;
    temp_a0_10 = (char *)(temp_a0_9) + 8;
    temp_a0_11 = (char *)(temp_a0_10) + 8;
    (*(s32 *)((char *)(temp_a0_8) + 0x4)) = (s32) ((arg2 * D_800BE620 * 2) + D_800BE9C4);
    (*(s32 *)((char *)(temp_a0_8) + 0x8)) = 0xF5100000;
    (*(s32 *)((char *)(temp_a0_9) + 0x4)) = 0x07000000;
    (*(s32 *)((char *)(temp_a0_9) + 0x8)) = 0xE6000000;
    (*(s32 *)((char *)(temp_a0_10) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_10) + 0x8)) = 0xF3000000;
    temp_a0_12 = (char *)(temp_a0_11) + 8;
    temp_t2 = arg6 * 0x180;
    temp_f6 = (s32) (*(s32 *)((char *)((D_800BE628 + temp_t2)) + 0x4));
    temp_v1 = temp_f6 - 1;
    if (temp_v1 < 0x7FF) {
        var_t1 = temp_v1;
    } else {
        var_t1 = 0x7FF;
    }
    temp_t7 = (s32) (temp_f6 * 2) / 8;
    if (temp_t7 <= 0) {
        var_a3 = 1;
    } else {
        var_a3 = temp_t7;
    }
    if (temp_t7 <= 0) {
        var_a2 = 1;
    } else {
        var_a2 = temp_t7;
    }
    (*(s32 *)((char *)(temp_a0_11) + 0x4)) = (s32) ((((s32) (var_a3 + 0x7FF) / var_a2) & 0xFFF) | 0x07000000 | ((var_t1 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(temp_a0_11) + 0x8)) = 0xE7000000;
    (*(s32 *)((char *)(temp_a0_12) + 0x4)) = 0;
    temp_a0_13 = (char *)(temp_a0_12) + 8;
    temp_a0_14 = (char *)(temp_a0_13) + 8;
    (*(s32 *)((char *)(temp_a0_13) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_12) + 0x8)) = (s32) (((((s32) (((s32) (*(s32 *)((char *)((D_800BE628 + temp_t2)) + 0x4)) * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
    (*(s32 *)((char *)(temp_a0_13) + 0x8)) = 0xF2000000;
    temp_a0_15 = (char *)(temp_a0_14) + 8;
    (*(s32 *)((char *)(temp_a0_14) + 0x4)) = (s32) (((((s32) (*(s32 *)((char *)((D_800BE628 + temp_t2)) + 0x4)) - 1) * 4) & 0xFFF) << 0xC);
    (*(s32 *)((char *)(temp_a0_14) + 0x8)) = 0xFF100003;
    temp_a0_16 = (char *)(temp_a0_15) + 8;
    (*(s32 *)((char *)(temp_a0_15) + 0x4)) = arg4;
    (*(s32 *)((char *)(temp_a0_15) + 0x8)) = 0xED000000;
    temp_a0_17 = (char *)(temp_a0_16) + 8;
    temp_a0_18 = (char *)(temp_a0_17) + 8;
    (*(s32 *)((char *)(temp_a0_16) + 0x4)) = (s32) ((((s32) ((f32) (s32) (*(s32 *)((char *)((D_800BE628 + temp_t2)) + 0x4)) * 4.0f) & 0xFFF) << 0xC) | 4);
    (*(s32 *)((char *)(temp_a0_16) + 0x8)) = 0xE400C004;
    (*(s32 *)((char *)(temp_a0_17) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_17) + 0x8)) = 0xE1000000;
    temp_a0_19 = (char *)(temp_a0_18) + 8;
    temp_t4 = arg1 << 0x15;
    (*(s32 *)((char *)(temp_a0_18) + 0x4)) = temp_t4;
    (*(s32 *)((char *)(temp_a0_18) + 0x8)) = 0xF1000000;
    (*(s32 *)((char *)(temp_a0_19) + 0x4)) = 0x10000400;
    temp_a0_20 = (char *)(temp_a0_19) + 8;
    (*(s32 *)((char *)(temp_a0_19) + 0x8)) = 0xFD100000;
    temp_a0_21 = (char *)(temp_a0_20) + 8;
    temp_a0_22 = (char *)(temp_a0_21) + 8;
    temp_a0_23 = (char *)(temp_a0_22) + 8;
    (*(s32 *)((char *)(temp_a0_20) + 0x4)) = (s32) ((*(s32 *)((char *)(D_8002AAE8) + (D_800BE9C0 * 4))) + (arg2 * D_800BE620 * 2));
    (*(s32 *)((char *)(temp_a0_20) + 0x8)) = 0xF5100000;
    (*(s32 *)((char *)(temp_a0_21) + 0x4)) = 0x07000000;
    (*(s32 *)((char *)(temp_a0_21) + 0x8)) = 0xE6000000;
    (*(s32 *)((char *)(temp_a0_22) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_22) + 0x8)) = 0xF3000000;
    temp_a0_24 = (char *)(temp_a0_23) + 8;
    temp_f8 = (s32) (*(s32 *)((char *)((D_800BE628 + temp_t2)) + 0x4));
    temp_v1_2 = temp_f8 - 1;
    if (temp_v1_2 < 0x7FF) {
        var_t1_2 = temp_v1_2;
    } else {
        var_t1_2 = 0x7FF;
    }
    temp_t6 = (s32) (temp_f8 * 2) / 8;
    if (temp_t6 <= 0) {
        var_a3_2 = 1;
    } else {
        var_a3_2 = temp_t6;
    }
    if (temp_t6 <= 0) {
        var_a2_2 = 1;
    } else {
        var_a2_2 = temp_t6;
    }
    (*(s32 *)((char *)(temp_a0_23) + 0x4)) = (s32) ((((s32) (var_a3_2 + 0x7FF) / var_a2_2) & 0xFFF) | 0x07000000 | ((var_t1_2 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(temp_a0_23) + 0x8)) = 0xE7000000;
    (*(s32 *)((char *)(temp_a0_24) + 0x4)) = 0;
    temp_a0_25 = (char *)(temp_a0_24) + 8;
    temp_a0_26 = (char *)(temp_a0_25) + 8;
    (*(s32 *)((char *)(temp_a0_25) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_24) + 0x8)) = (s32) (((((s32) (((s32) (*(s32 *)((char *)((D_800BE628 + temp_t2)) + 0x4)) * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
    (*(s32 *)((char *)(temp_a0_25) + 0x8)) = 0xF2000000;
    temp_a0_27 = (char *)(temp_a0_26) + 8;
    (*(s32 *)((char *)(temp_a0_26) + 0x4)) = (s32) (((((s32) (*(s32 *)((char *)((D_800BE628 + temp_t2)) + 0x4)) - 1) * 4) & 0xFFF) << 0xC);
    (*(s32 *)((char *)(temp_a0_26) + 0x8)) = 0xFF100003;
    temp_a0_28 = (char *)(temp_a0_27) + 8;
    (*(s32 *)((char *)(temp_a0_27) + 0x4)) = arg5;
    (*(s32 *)((char *)(temp_a0_27) + 0x8)) = 0xE400C004;
    temp_a0_29 = (char *)(temp_a0_28) + 8;
    (*(s32 *)((char *)(temp_a0_28) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_28) + 0x8)) = 0xE1000000;
    (*(s32 *)((char *)(temp_a0_29) + 0x4)) = temp_t4;
    temp_a0_30 = (char *)(temp_a0_29) + 8;
    (*(s32 *)((char *)(temp_a0_29) + 0x8)) = 0xF1000000;
    (*(s32 *)((char *)(temp_a0_30) + 0x4)) = 0x10000400;
    temp_v0 = func_1501A490(func_1501A680((char *)(temp_a0_30) + 8, temp_a0_30, var_a2_2, var_a3_2), D_80082FA6, 0, 0, 0, 0);
    (*(s32 *)((char *)(temp_v0) + 0x4)) = 0x80000;
    (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xE3000C00;
    return (char *)(temp_v0) + 8;
}

void *func_151742EC(void *arg0, s32 arg1) {
    f32 spB4;
    f32 spB0;
    f32 spAC;
    void * *var_s0;
    void * *var_s0_2;
    s16 *temp_s3;
    s32 temp_a2;
    s32 temp_f10;
    s32 temp_f6;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    s8 temp_v1_2;
    u16 temp_a0;
    u16 temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    var_s0 = &D_800DD348;
    var_s2 = 0;
    if (arg1 != 0) {

    } else {
        do {
            temp_s1 = var_s2 * 8;
            if ((D_800BE9C0 + 1) == (*(s32 *)((char *)(var_s0) + 0xC))) {
                temp_a0 = *(&D_800DD310 + temp_s1);
                temp_v1 = &D_80089630 + (((s32) temp_a0 >> 0xD) * 8);
                temp_a2 = ((u32) ((*(u32 *)((char *)(temp_v1) + 0x4)) + ((((s32) temp_a0 >> 2) & 0x7FF) << (*(u32 *)((char *)(temp_v1) + 0x0)))) >> 3) - *(&D_800DD300 + (var_s2 * 4));
                var_v0 = temp_a2;
                if (temp_a2 < 0) {
                    var_v0 = -temp_a2;
                }
                if (var_v0 < 0x12C) {
                    temp_v0 = *(&D_800DD328 + temp_s1);
                    temp_v1_2 = (*(s32 *)((char *)(var_s0) + 0x34));
                    D_800DD340 = (s32) temp_v0;
                    if (temp_v1_2 != -1) {
                        ((s32 (*)())((char *)(&D_8008A080 + (temp_v1_2 * 4))))(var_s0, ((s32) temp_v0 >> 8) & 0xF8, ((s32) temp_v0 >> 3) & 0xF8, (temp_v0 * 4) & 0xF8);
                    }
                }
                (*(s32 *)((char *)(var_s0) + 0xC)) = 0U;
            }
            var_s2 += 1;
            var_s0 = (char *)(var_s0) + 0x3C;
        } while (var_s2 < 3);
        var_s0_2 = &D_800DD348;
        var_s2_2 = 0;
        do {
            temp_s1_2 = var_s2_2 * 8;
            if ((*(s32 *)((char *)(var_s0_2) + 0xC)) == 3) {
                temp_s3 = temp_s1_2 + &D_800DD310;
                *temp_s3 = 0xFFFF;
                (*(u8 *)((char *)(var_s0_2) + 0xC)) = (u8) (D_800BE9C0 + 1);
                func_1501A764((s16) arg1, (*(s16 *)((char *)(var_s0_2) + 0x0)), (*(s16 *)((char *)(var_s0_2) + 0x4)), (*(s16 *)((char *)(var_s0_2) + 0x8)), &spB4, &spB0, &spAC);
                temp_f6 = (s32) spB4;
                temp_f10 = (s32) spB0;
                (*(s32 *)((var_s2_2 * 4) + (char *)(D_800DD300))) = (s32) spAC;
                temp_v0_2 = D_800BE628 + (arg1 * 0x180);
                if ((temp_f6 >= (s32) (*(s32 *)((char *)(temp_v0_2) + 0x2C))) && (temp_f6 < (s32) (*(s32 *)((char *)(temp_v0_2) + 0x30))) && (temp_f10 >= (s32) (*(s32 *)((char *)(temp_v0_2) + 0x24))) && (temp_f10 < (s32) (*(s32 *)((char *)(temp_v0_2) + 0x28)))) {
                    arg0 = func_15173D00(arg0, temp_f6, temp_f10, 1, temp_s3, temp_s1_2 + &D_800DD328, (s16) (s32) (s16) arg1);
                }
            }
            var_s2_2 += 1;
            var_s0_2 = (char *)(var_s0_2) + 0x3C;
        } while (var_s2_2 != 3);
    }
    return arg0;
}

s32 func_151745F0(f32 arg0, f32 arg1, f32 arg2, s32 arg3, s8 arg4, s32 arg5) {
    void * *var_v1;

    var_v1 = &D_800DD348;
loop_1:
    if ((*(s32 *)((char *)(var_v1) + 0xC)) == 0) {
        (*(s32 *)((char *)(var_v1) + 0x0)) = arg0;
        (*(s32 *)((char *)(var_v1) + 0x4)) = arg1;
        (*(s32 *)((char *)(var_v1) + 0xC)) = 3U;
        (*(s32 *)((char *)(var_v1) + 0x8)) = arg2;
        (*(s32 *)((char *)(var_v1) + 0x34)) = arg4;
        (*(s32 *)((char *)(var_v1) + 0x38)) = arg5;
        if (arg3 != 0) {
            M2C_MEMCPY_ALIGNED((char *)(var_v1) + 0x10, arg3, 0x24);
        }
        return 0;
    }
    var_v1 = (char *)(var_v1) + 0x3C;
    if ((char *)(var_v1) == (char *)(&D_800DD3FC)) {
        return 1;
    }
    goto loop_1;
}
