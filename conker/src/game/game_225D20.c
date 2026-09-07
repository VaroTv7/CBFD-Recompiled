/**
 * Auto-decompiled from asm/225D20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern f32 D_800B0C50;
extern f32 D_800B0C54;
extern f32 D_800B0C58;
extern f32 D_800B0C5C;
extern f32 D_800B0C60;
extern f32 D_800B0C64;
extern f32 D_800B0C68;
extern f32 D_800B0C6C;
extern f32 D_800B0C70;
extern f32 D_800B0C74;
extern f32 D_800B0C78;
extern f32 D_800B0C7C;
extern f32 D_800B0C80;
extern f32 D_800B0C84;
extern f32 D_800B0C88;
extern f32 D_800B0C8C;
extern f32 D_800B0C90;
extern f32 D_800B0C94;
extern f32 D_800B0C98;
extern f32 D_800B0C9C;
extern f32 D_800B0CA0;
extern f32 D_800B0CA4;
extern f32 D_800B0CA8;
extern f32 D_800B0CAC;
extern f32 D_800B0CB0;
extern f32 D_800B0CB4;
extern f32 D_800B0CB8;
extern f32 D_800B0CBC;
extern f32 D_800B0CC0;
extern f32 D_800B0CC4;
extern f32 D_800B0CC8;
extern f32 D_800B0CCC;
extern f32 D_800B0CD0;
extern f32 D_800B0CD4;
extern f32 D_800B0CD8;
extern f32 D_800B0CDC;
extern f32 D_800B0CE0;
extern f32 D_800B0CE4;
extern f32 D_800B0CE8;
extern f32 D_800B0CEC;
extern f32 D_800B0CF0;
extern f32 D_800B0CF4;
extern f32 D_800B0CF8;
extern f32 D_800B0CFC;
extern f32 D_800B0D00;
extern f32 D_800B0D04;
extern f32 D_800B0D08;
extern f32 D_800B0D0C;
extern f32 D_800B0D10;
extern f32 D_800B0D14;
extern f32 D_800B0D18;
extern f32 D_800B0D1C;
extern f32 D_800B0D20;
extern f32 D_800B0D24;
extern f32 D_800B0D28;
extern f32 D_800B0D2C;
extern f32 D_800B0D30;
extern f32 D_800B0D34;
extern f32 D_800B0D38;
extern f32 D_800B0D3C;
extern f32 D_800B0D40;
extern f32 D_800B0D44;
extern f32 D_800B0D48;
extern f32 D_800B0D4C;
extern f32 D_800B0D50;
extern f32 D_800B0D54;
extern f32 D_800B0D58;
s8 func_151F8870();
u32 func_151F892C();
s32 M2C_ERROR();

s8 func_151F8870(u8 *arg0, s32 arg2) {
    void *saved_reg_s0;
    s32 saved_reg_s5;
    s32 temp_t3;
    s8 temp_t1;
    u32 var_t2;
    u8 *var_a0;
    u8 var_t4;
    u8 var_t5;
    void *var_t7;

    var_a0 = arg0;
    var_t5 = (*(s32 *)((char *)(var_a0) + 0x0));
    temp_t3 = (arg2 << 8) + (((u32) ((var_t5 << 8) | (*(u32 *)((char *)(var_a0) + 0x1))) >> (8 - (M2C_ERROR(/* Read from unset register $t0 */) & 7))) & 0xFF);
    if ((*(s32 *)((char *)(temp_t3) + (saved_reg_s5 + 0x2200))) != 0) {
        return (*(s32 *)((char *)(temp_t3) + saved_reg_s5)) & 0xF;
    }
    var_t7 = saved_reg_s0;
    var_t2 = 0x80U >> (M2C_ERROR(/* Read from unset register $t0 */) & 7);
    do {
        if (!(var_t5 & var_t2)) {
            var_t4 = (*(s32 *)((char *)(var_t7) + 0x0));
        } else {
            var_t4 = (*(s32 *)((char *)(var_t7) + 0x1));
        }
        var_t2 = var_t2 >> 1;
        var_t7 = (char *)(var_t7) + var_t4 * 4;
        if (var_t2 == 0) {
            var_t2 = 0x80;
            var_a0 += 1;
            var_t5 = *var_a0;
        }
        temp_t1 = (*(s32 *)((char *)(var_t7) + 0x2));
    } while (temp_t1 == -1);
    return temp_t1;
}

u32 func_151F892C(void * *arg0) {
    s32 saved_reg_s1;
    return (u32) ((s32) *arg0 << (M2C_ERROR(/* Read from unset register $t0 */) & 7)) >> (0x20 - saved_reg_s1);
}

u32 func_151F8960(s32 arg0, u32 *arg1, s32 arg2) {
    u32 temp_t0;

    temp_t0 = *arg1;
    *arg1 = temp_t0 + arg2;
    return (u32) ((s32) (*(u32 *)((char *)(arg0) + (temp_t0 >> 3))) << (temp_t0 & 7)) >> (0x20 - arg2);
}

s32 func_151F8994(s32 arg0, u32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void **arg6, void **arg7) {
    s16 var_s6;
    s32 var_a3;
    s8 var_v0;
    void *var_s3;
    void *var_s4;

    var_a3 = arg3;
    var_s3 = *arg6;
    var_s4 = *arg7;
    if ((arg5 - var_a3) > 0) {
        do {
            var_v0 = func_151F8870(0, 0);
            var_s6 = M2C_ERROR(/* Read from unset register $t1 */);
            if ((arg4 != 0) && (var_v0 == 0xF)) {
                var_v0 = func_151F892C(0) + 0xF;
            }
            if (var_v0 == 0) {
                (*(s32 *)((char *)(var_s4) + 0x0)) = 0;
            } else if (!(((u32) (*(s32 *)(M2C_ERROR(/* Read from unset register $a0 */))) >> (7 - (M2C_ERROR(/* Read from unset register $t0 */) & 7))) & 1)) {
                (*(s32 *)((char *)(var_s4) + 0x0)) = 0;
            } else {
                (*(s32 *)((char *)(var_s4) + 0x0)) = 1;
            }
            if ((arg4 != 0) && (var_s6 == 0xF)) {
                var_s6 = func_151F892C(0) + 0xF;
            }
            (*(s16 *)((char *)(var_s3) + 0x0)) = (s16) var_v0;
            (*(s32 *)((char *)(var_s3) + 0x2)) = var_s6;
            var_s3 = (char *)(var_s3) + 4;
            if (var_s6 == 0) {
                (*(s32 *)((char *)(var_s4) + 0x1)) = 0;
            } else if (!(((u32) (*(s32 *)(M2C_ERROR(/* Read from unset register $a0 */))) >> (7 - (M2C_ERROR(/* Read from unset register $t0 */) & 7))) & 1)) {
                (*(s32 *)((char *)(var_s4) + 0x1)) = 0;
            } else {
                (*(s32 *)((char *)(var_s4) + 0x1)) = 1;
            }
            var_a3 = M2C_ERROR(/* Read from unset register $a3 */) + 2;
            var_s4 = (char *)(var_s4) + 2;
        } while ((arg5 - var_a3) > 0);
    }
    (*(s32 *)(M2C_ERROR(/* Read from unset register $a1 */))) = M2C_ERROR(/* Read from unset register $t0 */);
    *arg6 = var_s3;
    *arg7 = var_s4;
    return var_a3;
}

s32 func_151F8B4C(s32 arg0, u32 *arg1, s32 arg2, s32 arg3, s32 arg4, void **arg5, void **arg6) {
    s32 temp_s1;
    s32 var_a3;
    s32 var_s1;
    u32 temp_v0;
    u32 var_t0;
    void *var_s3;
    void *var_s4;

    var_a3 = arg3;
    var_t0 = *arg1;
    var_s3 = *arg5;
    var_s4 = *arg6;
    if (((arg4 - var_t0) > 0) && ((var_a3 - 0x240) < 0)) {
loop_2:
        temp_v0 = func_151F8870(0, 0);
        (*(s16 *)((char *)(var_s3) + 0x0)) = (s16) ((temp_v0 >> 3) & 1);
        (*(s16 *)((char *)(var_s3) + 0x2)) = (s16) ((temp_v0 >> 2) & 1);
        (*(s16 *)((char *)(var_s3) + 0x4)) = (s16) ((temp_v0 >> 1) & 1);
        (*(s16 *)((char *)(var_s3) + 0x6)) = (s16) (temp_v0 & 1);
        var_s1 = 3;
        (*(s32 *)((char *)(var_s4) + 0x0)) = func_151F892C(0);
        if (M2C_ERROR(/* Read from unset register $t3 */) != 0) {
            var_s1 = 2;
        }
        (*(u8 *)((char *)(var_s4) + 0x0)) = (u8) M2C_ERROR(/* Read from unset register $t3 */);
        if (M2C_ERROR(/* Read from unset register $t4 */) != 0) {
            var_s1 -= 1;
        }
        (*(s8 *)((char *)(var_s4) + 0x1)) = (s8) M2C_ERROR(/* Read from unset register $t4 */);
        if (M2C_ERROR(/* Read from unset register $t5 */) != 0) {
            var_s1 -= 1;
        }
        (*(s8 *)((char *)(var_s4) + 0x2)) = (s8) M2C_ERROR(/* Read from unset register $t5 */);
        if (M2C_ERROR(/* Read from unset register $t6 */) != 0) {
            var_s1 -= 1;
        }
        (*(s8 *)((char *)(var_s4) + 0x3)) = (s8) M2C_ERROR(/* Read from unset register $t6 */);
        temp_s1 = var_s1 + 1;
        var_t0 = M2C_ERROR(/* Read from unset register $t0 */) - temp_s1;
        if (((M2C_ERROR(/* Read from unset register $t0 */) & 7) - temp_s1) < 0) {

        }
        var_s3 = (char *)(var_s3) + 8;
        var_s4 = (char *)(var_s4) + 4;
        var_a3 = M2C_ERROR(/* Read from unset register $a3 */) + 4;
        if (((var_a3 - 0x240) < 0) && ((arg4 - var_t0) > 0)) {
            goto loop_2;
        }
    }
    (*(s32 *)(M2C_ERROR(/* Read from unset register $a1 */))) = var_t0;
    *arg5 = var_s3;
    *arg6 = var_s4;
    return var_a3;
}

void func_151F8CF0(void *arg0, s32 arg1, void *arg2, void *arg3, void *arg4) {
    f32 sp[32];
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f4_10;
    f32 temp_f4_11;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f4_5;
    f32 temp_f4_6;
    f32 temp_f4_7;
    f32 temp_f4_8;
    f32 temp_f4_9;
    f32 temp_f6;
    f32 temp_f6_10;
    f32 temp_f6_11;
    f32 temp_f6_12;
    f32 temp_f6_13;
    f32 temp_f6_14;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f6_5;
    f32 temp_f6_6;
    f32 temp_f6_7;
    f32 temp_f6_8;
    f32 temp_f6_9;
    f32 temp_f8;
    f32 temp_f8_10;
    f32 temp_f8_11;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f8_4;
    f32 temp_f8_5;
    f32 temp_f8_6;
    f32 temp_f8_7;
    f32 temp_f8_8;
    f32 temp_f8_9;
    void *temp_t1;

    temp_t1 = (char *)(sp) + 0x48;
    temp_f6 = (*(s32 *)((char *)(arg0) + 0x40));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + temp_f6);
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (temp_f6 + (*(f32 *)((char *)(arg0) + 0x44)));
    temp_f6_2 = (*(s32 *)((char *)(arg0) + 0x38));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + temp_f6_2);
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (temp_f6_2 + (*(f32 *)((char *)(arg0) + 0x3C)));
    temp_f6_3 = (*(s32 *)((char *)(arg0) + 0x30));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + temp_f6_3);
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) (temp_f6_3 + (*(f32 *)((char *)(arg0) + 0x34)));
    temp_f6_4 = (*(s32 *)((char *)(arg0) + 0x28));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + temp_f6_4);
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f6_4 + (*(f32 *)((char *)(arg0) + 0x2C)));
    temp_f6_5 = (*(s32 *)((char *)(arg0) + 0x20));
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x1C)) + temp_f6_5);
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (temp_f6_5 + (*(f32 *)((char *)(arg0) + 0x24)));
    temp_f6_6 = (*(s32 *)((char *)(arg0) + 0x18));
    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) + temp_f6_6);
    (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) (temp_f6_6 + (*(f32 *)((char *)(arg0) + 0x1C)));
    temp_f6_7 = (*(s32 *)((char *)(arg0) + 0x10));
    (*(f32 *)((char *)(arg0) + 0x10)) = (f32) ((*(f32 *)((char *)(arg0) + 0xC)) + temp_f6_7);
    (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (temp_f6_7 + (*(f32 *)((char *)(arg0) + 0x14)));
    temp_f6_8 = (*(s32 *)((char *)(arg0) + 0x8));
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + temp_f6_8);
    (*(f32 *)((char *)(arg0) + 0xC)) = (f32) (temp_f6_8 + (*(f32 *)((char *)(arg0) + 0xC)));
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x0)) + (*(f32 *)((char *)(arg0) + 0x4)));
    temp_f6_9 = (*(s32 *)((char *)(arg0) + 0x3C));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + temp_f6_9);
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (temp_f6_9 + (*(f32 *)((char *)(arg0) + 0x44)));
    temp_f6_10 = (*(s32 *)((char *)(arg0) + 0x2C));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + temp_f6_10);
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) (temp_f6_10 + (*(f32 *)((char *)(arg0) + 0x34)));
    temp_f6_11 = (*(s32 *)((char *)(arg0) + 0x1C));
    (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) + temp_f6_11);
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (temp_f6_11 + (*(f32 *)((char *)(arg0) + 0x24)));
    temp_f6_12 = (*(s32 *)((char *)(arg0) + 0xC));
    (*(f32 *)((char *)(arg0) + 0xC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + temp_f6_12);
    (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (temp_f6_12 + (*(f32 *)((char *)(arg0) + 0x14)));
    temp_f2 = 2.0f * (*(s32 *)((char *)(arg0) + 0x0));
    temp_f0 = temp_f2 + (*(s32 *)((char *)(arg0) + 0x30));
    sp[0] = (f32) (((*(f32 *)((char *)(arg0) + 0x10)) * D_800B0C50) + ((*(f32 *)((char *)(arg0) + 0x20)) * D_800B0C54) + ((*(f32 *)((char *)(arg0) + 0x40)) * D_800B0C58) + temp_f0);
    sp[2] = (f32) (((*(f32 *)((char *)(arg0) + 0x10)) * D_800B0C5C) + ((*(f32 *)((char *)(arg0) + 0x20)) * D_800B0C60) + ((*(f32 *)((char *)(arg0) + 0x40)) * D_800B0C64) + temp_f0);
    sp[3] = (f32) (((*(f32 *)((char *)(arg0) + 0x10)) * D_800B0C68) + ((*(f32 *)((char *)(arg0) + 0x20)) * D_800B0C6C) + ((*(f32 *)((char *)(arg0) + 0x40)) * D_800B0C70) + temp_f0);
    temp_f4 = (*(s32 *)((char *)(arg0) + 0x10));
    temp_f6_13 = (*(s32 *)((char *)(arg0) + 0x20));
    temp_f8 = (*(s32 *)((char *)(arg0) + 0x30));
    temp_f10 = (*(s32 *)((char *)(arg0) + 0x40));
    sp[1] = (f32) (((((temp_f2 + temp_f4) - temp_f6_13) - temp_f8) - temp_f8) - temp_f10);
    sp[4] = (f32) (((((*(f32 *)((char *)(arg0) + 0x0)) - temp_f4) + temp_f6_13) - temp_f8) + temp_f10);
    temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x18)) * D_800B0C74;
    sp[5] = (f32) (((*(f32 *)((char *)(arg0) + 0x8)) * D_800B0C78) + ((*(f32 *)((char *)(arg0) + 0x28)) * D_800B0C7C) + ((*(f32 *)((char *)(arg0) + 0x38)) * D_800B0C80) + temp_f0_2);
    temp_f0_3 = -temp_f0_2;
    sp[6] = (f32) (((*(f32 *)((char *)(arg0) + 0x8)) * D_800B0C84) + ((*(f32 *)((char *)(arg0) + 0x28)) * D_800B0C88) + ((*(f32 *)((char *)(arg0) + 0x38)) * D_800B0C8C) + temp_f0_3);
    sp[7] = (f32) (((*(f32 *)((char *)(arg0) + 0x8)) * D_800B0C90) + ((*(f32 *)((char *)(arg0) + 0x28)) * D_800B0C94) + ((*(f32 *)((char *)(arg0) + 0x38)) * D_800B0C98) + temp_f0_3);
    sp[8] = (f32) ((((*(f32 *)((char *)(arg0) + 0x8)) - (*(f32 *)((char *)(arg0) + 0x28))) - (*(f32 *)((char *)(arg0) + 0x38))) * D_800B0C9C);
    temp_f2_2 = 2.0f * (*(s32 *)((char *)(arg0) + 0x4));
    temp_f0_4 = temp_f2_2 + (*(s32 *)((char *)(arg0) + 0x34));
    sp[9] = (f32) (((*(f32 *)((char *)(arg0) + 0x14)) * D_800B0CA0) + ((*(f32 *)((char *)(arg0) + 0x24)) * D_800B0CA4) + ((*(f32 *)((char *)(arg0) + 0x44)) * D_800B0CA8) + temp_f0_4);
    sp[11] = (f32) (((*(f32 *)((char *)(arg0) + 0x14)) * D_800B0CAC) + ((*(f32 *)((char *)(arg0) + 0x24)) * D_800B0CB0) + ((*(f32 *)((char *)(arg0) + 0x44)) * D_800B0CB4) + temp_f0_4);
    sp[12] = (f32) (((*(f32 *)((char *)(arg0) + 0x14)) * D_800B0CB8) + ((*(f32 *)((char *)(arg0) + 0x24)) * D_800B0CBC) + ((*(f32 *)((char *)(arg0) + 0x44)) * D_800B0CC0) + temp_f0_4);
    temp_f4_2 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_f6_14 = (*(s32 *)((char *)(arg0) + 0x24));
    temp_f8_2 = (*(s32 *)((char *)(arg0) + 0x34));
    temp_f10_2 = (*(s32 *)((char *)(arg0) + 0x44));
    sp[10] = (f32) (((((temp_f2_2 + temp_f4_2) - temp_f6_14) - temp_f8_2) - temp_f8_2) - temp_f10_2);
    sp[13] = (f32) (((((*(f32 *)((char *)(arg0) + 0x4)) - temp_f4_2) + temp_f6_14) - temp_f8_2) + temp_f10_2);
    temp_f0_5 = (*(s32 *)((char *)(arg0) + 0x1C)) * D_800B0CC4;
    sp[14] = (f32) (((*(f32 *)((char *)(arg0) + 0xC)) * D_800B0CC8) + ((*(f32 *)((char *)(arg0) + 0x2C)) * D_800B0CCC) + ((*(f32 *)((char *)(arg0) + 0x3C)) * D_800B0CD0) + temp_f0_5);
    temp_f0_6 = -temp_f0_5;
    sp[15] = (f32) (((*(f32 *)((char *)(arg0) + 0xC)) * D_800B0CD4) + ((*(f32 *)((char *)(arg0) + 0x2C)) * D_800B0CD8) + ((*(f32 *)((char *)(arg0) + 0x3C)) * D_800B0CDC) + temp_f0_6);
    sp[16] = (f32) (((*(f32 *)((char *)(arg0) + 0xC)) * D_800B0CE0) + ((*(f32 *)((char *)(arg0) + 0x2C)) * D_800B0CE4) + ((*(f32 *)((char *)(arg0) + 0x3C)) * D_800B0CE8) + temp_f0_6);
    sp[17] = (f32) ((((*(f32 *)((char *)(arg0) + 0xC)) - (*(f32 *)((char *)(arg0) + 0x2C))) - (*(f32 *)((char *)(arg0) + 0x3C))) * D_800B0CEC);
    temp_f4_3 = sp[0] + sp[5];
    temp_f8_3 = (sp[9] + sp[14]) * D_800B0CF0;
    sp[18] = (f32) ((temp_f4_3 + temp_f8_3) * D_800B0CF4);
    (*(f32 *)((char *)(temp_t1) + 0x44)) = (f32) ((temp_f4_3 - temp_f8_3) * D_800B0CF8);
    temp_f4_4 = sp[1] + sp[8];
    temp_f8_4 = (sp[10] + sp[17]) * D_800B0CFC;
    (*(f32 *)((char *)(temp_t1) + 0x4)) = (f32) ((temp_f4_4 + temp_f8_4) * D_800B0D00);
    (*(f32 *)((char *)(temp_t1) + 0x40)) = (f32) ((temp_f4_4 - temp_f8_4) * D_800B0D04);
    temp_f4_5 = sp[2] + sp[6];
    temp_f8_5 = (sp[11] + sp[15]) * D_800B0D08;
    (*(f32 *)((char *)(temp_t1) + 0x8)) = (f32) ((temp_f4_5 + temp_f8_5) * D_800B0D0C);
    (*(f32 *)((char *)(temp_t1) + 0x3C)) = (f32) ((temp_f4_5 - temp_f8_5) * D_800B0D10);
    temp_f4_6 = sp[3] + sp[7];
    temp_f8_6 = (sp[12] + sp[16]) * D_800B0D14;
    (*(f32 *)((char *)(temp_t1) + 0xC)) = (f32) ((temp_f4_6 + temp_f8_6) * D_800B0D18);
    (*(f32 *)((char *)(temp_t1) + 0x38)) = (f32) ((temp_f4_6 - temp_f8_6) * D_800B0D1C);
    temp_f4_7 = sp[3] - sp[7];
    temp_f8_7 = (sp[12] - sp[16]) * D_800B0D20;
    (*(f32 *)((char *)(temp_t1) + 0x14)) = (f32) ((temp_f4_7 + temp_f8_7) * D_800B0D24);
    (*(f32 *)((char *)(temp_t1) + 0x30)) = (f32) ((temp_f4_7 - temp_f8_7) * D_800B0D28);
    temp_f4_8 = sp[2] - sp[6];
    temp_f8_8 = (sp[11] - sp[15]) * D_800B0D2C;
    (*(f32 *)((char *)(temp_t1) + 0x18)) = (f32) ((temp_f4_8 + temp_f8_8) * D_800B0D30);
    (*(f32 *)((char *)(temp_t1) + 0x2C)) = (f32) ((temp_f4_8 - temp_f8_8) * D_800B0D34);
    temp_f4_9 = sp[1] - sp[8];
    temp_f8_9 = (sp[10] - sp[17]) * D_800B0D38;
    (*(f32 *)((char *)(temp_t1) + 0x1C)) = (f32) ((temp_f4_9 + temp_f8_9) * D_800B0D3C);
    (*(f32 *)((char *)(temp_t1) + 0x28)) = (f32) ((temp_f4_9 - temp_f8_9) * D_800B0D40);
    temp_f4_10 = sp[0] - sp[5];
    temp_f8_10 = (sp[9] - sp[14]) * D_800B0D44;
    (*(f32 *)((char *)(temp_t1) + 0x20)) = (f32) ((temp_f4_10 + temp_f8_10) * D_800B0D48);
    (*(f32 *)((char *)(temp_t1) + 0x24)) = (f32) ((temp_f4_10 - temp_f8_10) * D_800B0D4C);
    temp_f4_11 = sp[13] * D_800B0D50;
    temp_f8_11 = sp[4];
    (*(f32 *)((char *)(temp_t1) + 0x10)) = (f32) ((temp_f8_11 + temp_f4_11) * D_800B0D54);
    (*(f32 *)((char *)(temp_t1) + 0x34)) = (f32) ((temp_f8_11 - temp_f4_11) * D_800B0D58);
    if (arg1 & 1) {
        (*(f32 *)((char *)(arg2) + 0x0)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x24)) * (*(f32 *)((char *)(arg4) + 0x0))) + (*(f32 *)((char *)(arg3) + 0x0)));
        (*(f32 *)((char *)(arg2) + 0x4)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x28)) * (*(f32 *)((char *)(arg4) + 0x4))) - (*(f32 *)((char *)(arg3) + 0x4)));
        (*(f32 *)((char *)(arg2) + 0x8)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x2C)) * (*(f32 *)((char *)(arg4) + 0x8))) + (*(f32 *)((char *)(arg3) + 0x8)));
        (*(f32 *)((char *)(arg2) + 0xC)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x30)) * (*(f32 *)((char *)(arg4) + 0xC))) - (*(f32 *)((char *)(arg3) + 0xC)));
        (*(f32 *)((char *)(arg2) + 0x10)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x34)) * (*(f32 *)((char *)(arg4) + 0x10))) + (*(f32 *)((char *)(arg3) + 0x10)));
        (*(f32 *)((char *)(arg2) + 0x14)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x38)) * (*(f32 *)((char *)(arg4) + 0x14))) - (*(f32 *)((char *)(arg3) + 0x14)));
        (*(f32 *)((char *)(arg2) + 0x18)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x3C)) * (*(f32 *)((char *)(arg4) + 0x18))) + (*(f32 *)((char *)(arg3) + 0x18)));
        (*(f32 *)((char *)(arg2) + 0x1C)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x40)) * (*(f32 *)((char *)(arg4) + 0x1C))) - (*(f32 *)((char *)(arg3) + 0x1C)));
        (*(f32 *)((char *)(arg2) + 0x20)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x44)) * (*(f32 *)((char *)(arg4) + 0x20))) + (*(f32 *)((char *)(arg3) + 0x20)));
        (*(f32 *)((char *)(arg2) + 0x24)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x44)) * (*(f32 *)((char *)(arg4) + 0x24))) - (*(f32 *)((char *)(arg3) + 0x24)));
        (*(f32 *)((char *)(arg2) + 0x28)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x40)) * (*(f32 *)((char *)(arg4) + 0x28))) + (*(f32 *)((char *)(arg3) + 0x28)));
        (*(f32 *)((char *)(arg2) + 0x2C)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x3C)) * (*(f32 *)((char *)(arg4) + 0x2C))) - (*(f32 *)((char *)(arg3) + 0x2C)));
        (*(f32 *)((char *)(arg2) + 0x30)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x38)) * (*(f32 *)((char *)(arg4) + 0x30))) + (*(f32 *)((char *)(arg3) + 0x30)));
        (*(f32 *)((char *)(arg2) + 0x34)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x34)) * (*(f32 *)((char *)(arg4) + 0x34))) - (*(f32 *)((char *)(arg3) + 0x34)));
        (*(f32 *)((char *)(arg2) + 0x38)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x30)) * (*(f32 *)((char *)(arg4) + 0x38))) + (*(f32 *)((char *)(arg3) + 0x38)));
        (*(f32 *)((char *)(arg2) + 0x3C)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x2C)) * (*(f32 *)((char *)(arg4) + 0x3C))) - (*(f32 *)((char *)(arg3) + 0x3C)));
        (*(f32 *)((char *)(arg2) + 0x40)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x28)) * (*(f32 *)((char *)(arg4) + 0x40))) + (*(f32 *)((char *)(arg3) + 0x40)));
        (*(f32 *)((char *)(arg2) + 0x44)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x24)) * (*(f32 *)((char *)(arg4) + 0x44))) - (*(f32 *)((char *)(arg3) + 0x44)));
    } else {
        (*(f32 *)((char *)(arg2) + 0x0)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x24)) * (*(f32 *)((char *)(arg4) + 0x0))) + (*(f32 *)((char *)(arg3) + 0x0)));
        (*(f32 *)((char *)(arg2) + 0x4)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x28)) * (*(f32 *)((char *)(arg4) + 0x4))) + (*(f32 *)((char *)(arg3) + 0x4)));
        (*(f32 *)((char *)(arg2) + 0x8)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x2C)) * (*(f32 *)((char *)(arg4) + 0x8))) + (*(f32 *)((char *)(arg3) + 0x8)));
        (*(f32 *)((char *)(arg2) + 0xC)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x30)) * (*(f32 *)((char *)(arg4) + 0xC))) + (*(f32 *)((char *)(arg3) + 0xC)));
        (*(f32 *)((char *)(arg2) + 0x10)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x34)) * (*(f32 *)((char *)(arg4) + 0x10))) + (*(f32 *)((char *)(arg3) + 0x10)));
        (*(f32 *)((char *)(arg2) + 0x14)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x38)) * (*(f32 *)((char *)(arg4) + 0x14))) + (*(f32 *)((char *)(arg3) + 0x14)));
        (*(f32 *)((char *)(arg2) + 0x18)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x3C)) * (*(f32 *)((char *)(arg4) + 0x18))) + (*(f32 *)((char *)(arg3) + 0x18)));
        (*(f32 *)((char *)(arg2) + 0x1C)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x40)) * (*(f32 *)((char *)(arg4) + 0x1C))) + (*(f32 *)((char *)(arg3) + 0x1C)));
        (*(f32 *)((char *)(arg2) + 0x20)) = (f32) ((-(*(f32 *)((char *)(temp_t1) + 0x44)) * (*(f32 *)((char *)(arg4) + 0x20))) + (*(f32 *)((char *)(arg3) + 0x20)));
        (*(f32 *)((char *)(arg2) + 0x24)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x44)) * (*(f32 *)((char *)(arg4) + 0x24))) + (*(f32 *)((char *)(arg3) + 0x24)));
        (*(f32 *)((char *)(arg2) + 0x28)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x40)) * (*(f32 *)((char *)(arg4) + 0x28))) + (*(f32 *)((char *)(arg3) + 0x28)));
        (*(f32 *)((char *)(arg2) + 0x2C)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x3C)) * (*(f32 *)((char *)(arg4) + 0x2C))) + (*(f32 *)((char *)(arg3) + 0x2C)));
        (*(f32 *)((char *)(arg2) + 0x30)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x38)) * (*(f32 *)((char *)(arg4) + 0x30))) + (*(f32 *)((char *)(arg3) + 0x30)));
        (*(f32 *)((char *)(arg2) + 0x34)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x34)) * (*(f32 *)((char *)(arg4) + 0x34))) + (*(f32 *)((char *)(arg3) + 0x34)));
        (*(f32 *)((char *)(arg2) + 0x38)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x30)) * (*(f32 *)((char *)(arg4) + 0x38))) + (*(f32 *)((char *)(arg3) + 0x38)));
        (*(f32 *)((char *)(arg2) + 0x3C)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x2C)) * (*(f32 *)((char *)(arg4) + 0x3C))) + (*(f32 *)((char *)(arg3) + 0x3C)));
        (*(f32 *)((char *)(arg2) + 0x40)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x28)) * (*(f32 *)((char *)(arg4) + 0x40))) + (*(f32 *)((char *)(arg3) + 0x40)));
        (*(f32 *)((char *)(arg2) + 0x44)) = (f32) (((*(f32 *)((char *)(temp_t1) + 0x24)) * (*(f32 *)((char *)(arg4) + 0x44))) + (*(f32 *)((char *)(arg3) + 0x44)));
    }
    (*(f32 *)((char *)(arg3) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x20)) * (*(f32 *)((char *)(arg4) + 0x48)));
    (*(f32 *)((char *)(arg3) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x1C)) * (*(f32 *)((char *)(arg4) + 0x4C)));
    (*(f32 *)((char *)(arg3) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x18)) * (*(f32 *)((char *)(arg4) + 0x50)));
    (*(f32 *)((char *)(arg3) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x14)) * (*(f32 *)((char *)(arg4) + 0x54)));
    (*(f32 *)((char *)(arg3) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x10)) * (*(f32 *)((char *)(arg4) + 0x58)));
    (*(f32 *)((char *)(arg3) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0xC)) * (*(f32 *)((char *)(arg4) + 0x5C)));
    (*(f32 *)((char *)(arg3) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x8)) * (*(f32 *)((char *)(arg4) + 0x60)));
    (*(f32 *)((char *)(arg3) + 0x1C)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x4)) * (*(f32 *)((char *)(arg4) + 0x64)));
    (*(f32 *)((char *)(arg3) + 0x20)) = (f32) (sp[18] * (*(f32 *)((char *)(arg4) + 0x68)));
    (*(f32 *)((char *)(arg3) + 0x24)) = (f32) (sp[18] * (*(f32 *)((char *)(arg4) + 0x6C)));
    (*(f32 *)((char *)(arg3) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x4)) * (*(f32 *)((char *)(arg4) + 0x70)));
    (*(f32 *)((char *)(arg3) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x8)) * (*(f32 *)((char *)(arg4) + 0x74)));
    (*(f32 *)((char *)(arg3) + 0x30)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0xC)) * (*(f32 *)((char *)(arg4) + 0x78)));
    (*(f32 *)((char *)(arg3) + 0x34)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x10)) * (*(f32 *)((char *)(arg4) + 0x7C)));
    (*(f32 *)((char *)(arg3) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x14)) * (*(f32 *)((char *)(arg4) + 0x80)));
    (*(f32 *)((char *)(arg3) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x18)) * (*(f32 *)((char *)(arg4) + 0x84)));
    (*(f32 *)((char *)(arg3) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x1C)) * (*(f32 *)((char *)(arg4) + 0x88)));
    (*(f32 *)((char *)(arg3) + 0x44)) = (f32) ((*(f32 *)((char *)(temp_t1) + 0x20)) * (*(f32 *)((char *)(arg4) + 0x8C)));
}
