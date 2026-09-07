/**
 * Auto-decompiled from asm/2270A0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern f32 D_800B0D5C;
extern f32 D_800B0D60;
extern f32 D_800B0D64;
extern f32 D_800B0D68;
extern f32 D_800B0D6C;
extern f32 D_800B0D70;
extern f32 D_800B0D74;
extern f32 D_800B0D78;
extern f32 D_800B0D7C;
extern f32 D_800B0D80;
extern f32 D_800B0D84;
extern f32 D_800B0D88;
extern f32 D_800B0D8C;
extern f32 D_800B0D90;
extern f32 D_800B0D94;
extern f32 D_800B0D98;
extern f32 D_800B0D9C;
extern f32 D_800B0DA0;
extern f32 D_800B0DA4;
extern f32 D_800B0DA8;
extern f32 D_800B0DAC;
extern f32 D_800B0DB0;
extern f32 D_800B0DB4;

void func_151F9BF0(void *arg0, s32 arg1, f32 *arg2, f32 *arg3) {
    void *sp;
    f32 *temp_t6;
    f32 *var_t0_2;
    f32 *var_t1;
    f32 *var_t1_2;
    f32 *var_t4;
    f32 *var_t4_2;
    f32 *var_t4_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f6_5;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 var_t5;
    s32 var_t5_2;
    s32 var_t5_3;
    s32 var_t5_4;
    void *var_t0;
    void *var_t2;

    var_t0 = sp;
    do {
        (*(s32 *)((char *)(var_t0) + 0x0)) = 0;
        (*(s32 *)((char *)(var_t0) + 0x4)) = 0;
        (*(s32 *)((char *)(var_t0) + 0x8)) = 0;
        (*(s32 *)((char *)(var_t0) + 0xC)) = 0;
        var_t0 = (char *)(var_t0) + 0x10;
    } while (var_t0 != ((char *)(sp) + 0xD0));
    var_t2 = arg0;
    var_t4 = (char *)(sp) + 0x40;
    temp_t6 = var_t4;
    var_t5 = 3;
    do {
        (*(f32 *)((char *)(var_t2) + 0x14)) = (f32) ((*(f32 *)((char *)(var_t2) + 0x14)) + (*(f32 *)((char *)(var_t2) + 0x10)));
        (*(f32 *)((char *)(var_t2) + 0x10)) = (f32) ((*(f32 *)((char *)(var_t2) + 0x10)) + (*(f32 *)((char *)(var_t2) + 0xC)));
        (*(f32 *)((char *)(var_t2) + 0xC)) = (f32) ((*(f32 *)((char *)(var_t2) + 0xC)) + (*(f32 *)((char *)(var_t2) + 0x8)));
        (*(f32 *)((char *)(var_t2) + 0x8)) = (f32) ((*(f32 *)((char *)(var_t2) + 0x8)) + (*(f32 *)((char *)(var_t2) + 0x4)));
        (*(f32 *)((char *)(var_t2) + 0x4)) = (f32) ((*(f32 *)((char *)(var_t2) + 0x4)) + (*(f32 *)((char *)(var_t2) + 0x0)));
        (*(f32 *)((char *)(var_t2) + 0x14)) = (f32) ((*(f32 *)((char *)(var_t2) + 0x14)) + (*(f32 *)((char *)(var_t2) + 0xC)));
        (*(f32 *)((char *)(var_t2) + 0xC)) = (f32) ((*(f32 *)((char *)(var_t2) + 0xC)) + (*(f32 *)((char *)(var_t2) + 0x4)));
        temp_f6 = (*(s32 *)((char *)(var_t2) + 0x8)) * D_800B0D5C;
        temp_f8 = (*(s32 *)((char *)(var_t2) + 0x10));
        temp_f16 = (*(s32 *)((char *)(var_t2) + 0x0));
        temp_f18 = temp_f16 + (temp_f8 * 0.5f);
        (*(f32 *)((char *)(sp) + 0x4)) = (f32) (temp_f16 - temp_f8);
        (*(f32 *)((char *)(sp) + 0x0)) = (f32) (temp_f18 + temp_f6);
        (*(f32 *)((char *)(sp) + 0x8)) = (f32) (temp_f18 - temp_f6);
        temp_f6_2 = (*(s32 *)((char *)(var_t2) + 0xC)) * D_800B0D60;
        temp_f8_2 = (*(s32 *)((char *)(var_t2) + 0x14));
        temp_f16_2 = (*(s32 *)((char *)(var_t2) + 0x4));
        temp_f18_2 = temp_f16_2 + (temp_f8_2 * 0.5f);
        (*(f32 *)((char *)(sp) + 0x10)) = (f32) (temp_f16_2 - temp_f8_2);
        (*(f32 *)((char *)(sp) + 0x14)) = (f32) (temp_f18_2 + temp_f6_2);
        (*(f32 *)((char *)(sp) + 0xC)) = (f32) (temp_f18_2 - temp_f6_2);
        (*(f32 *)((char *)(sp) + 0xC)) = (f32) ((*(f32 *)((char *)(sp) + 0xC)) * D_800B0D64);
        (*(f32 *)((char *)(sp) + 0x10)) = (f32) ((*(f32 *)((char *)(sp) + 0x10)) * D_800B0D68);
        (*(f32 *)((char *)(sp) + 0x14)) = (f32) ((*(f32 *)((char *)(sp) + 0x14)) * D_800B0D6C);
        temp_f4 = (*(s32 *)((char *)(sp) + 0x0));
        temp_f6_3 = (*(s32 *)((char *)(sp) + 0x14));
        (*(f32 *)((char *)(sp) + 0x0)) = (f32) (temp_f4 + temp_f6_3);
        (*(f32 *)((char *)(sp) + 0x14)) = (f32) (temp_f4 - temp_f6_3);
        temp_f4_2 = (*(s32 *)((char *)(sp) + 0x4));
        temp_f6_4 = (*(s32 *)((char *)(sp) + 0x10));
        (*(f32 *)((char *)(sp) + 0x4)) = (f32) (temp_f4_2 + temp_f6_4);
        (*(f32 *)((char *)(sp) + 0x10)) = (f32) (temp_f4_2 - temp_f6_4);
        temp_f4_3 = (*(s32 *)((char *)(sp) + 0x8));
        temp_f6_5 = (*(s32 *)((char *)(sp) + 0xC));
        (*(f32 *)((char *)(sp) + 0x8)) = (f32) (temp_f4_3 + temp_f6_5);
        (*(f32 *)((char *)(sp) + 0xC)) = (f32) (temp_f4_3 - temp_f6_5);
        (*(f32 *)((char *)(sp) + 0x0)) = (f32) ((*(f32 *)((char *)(sp) + 0x0)) * D_800B0D70);
        (*(f32 *)((char *)(sp) + 0x4)) = (f32) ((*(f32 *)((char *)(sp) + 0x4)) * D_800B0D74);
        (*(f32 *)((char *)(sp) + 0x8)) = (f32) ((*(f32 *)((char *)(sp) + 0x8)) * D_800B0D78);
        (*(f32 *)((char *)(sp) + 0xC)) = (f32) ((*(f32 *)((char *)(sp) + 0xC)) * D_800B0D7C);
        (*(f32 *)((char *)(sp) + 0x10)) = (f32) ((*(f32 *)((char *)(sp) + 0x10)) * D_800B0D80);
        (*(f32 *)((char *)(sp) + 0x14)) = (f32) ((*(f32 *)((char *)(sp) + 0x14)) * D_800B0D84);
        (*(f32 *)((char *)(sp) + 0x20)) = (f32) ((*(f32 *)((char *)(sp) + 0x0)) * D_800B0D88);
        (*(f32 *)((char *)(sp) + 0x24)) = (f32) ((*(f32 *)((char *)(sp) + 0x0)) * D_800B0D8C);
        (*(f32 *)((char *)(sp) + 0x1C)) = (f32) ((*(f32 *)((char *)(sp) + 0x4)) * D_800B0D90);
        (*(f32 *)((char *)(sp) + 0x28)) = (f32) ((*(f32 *)((char *)(sp) + 0x4)) * D_800B0D94);
        (*(f32 *)((char *)(sp) + 0x18)) = (f32) ((*(f32 *)((char *)(sp) + 0x8)) * D_800B0D98);
        (*(f32 *)((char *)(sp) + 0x2C)) = (f32) ((*(f32 *)((char *)(sp) + 0x8)) * D_800B0D9C);
        (*(f32 *)((char *)(sp) + 0x0)) = (f32) ((*(f32 *)((char *)(sp) + 0xC)) * 1.0f);
        (*(f32 *)((char *)(sp) + 0x4)) = (f32) ((*(f32 *)((char *)(sp) + 0x10)) * D_800B0DA0);
        (*(f32 *)((char *)(sp) + 0x8)) = (f32) ((*(f32 *)((char *)(sp) + 0x14)) * D_800B0DA4);
        (*(f32 *)((char *)(sp) + 0xC)) = (f32) ((*(f32 *)((char *)(sp) + 0x14)) * D_800B0DA8);
        (*(f32 *)((char *)(sp) + 0x10)) = (f32) ((*(f32 *)((char *)(sp) + 0x10)) * D_800B0DAC);
        (*(f32 *)((char *)(sp) + 0x14)) = (f32) ((*(f32 *)((char *)(sp) + 0x0)) * D_800B0DB0);
        (*(f32 *)((char *)(sp) + 0x0)) = (f32) ((*(f32 *)((char *)(sp) + 0x0)) * D_800B0DB4);
        (*(f32 *)((char *)(var_t4) + 0x18)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x18)) + (*(f32 *)((char *)(sp) + 0x0)));
        (*(f32 *)((char *)(var_t4) + 0x1C)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x1C)) + (*(f32 *)((char *)(sp) + 0x4)));
        (*(f32 *)((char *)(var_t4) + 0x20)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x20)) + (*(f32 *)((char *)(sp) + 0x8)));
        (*(f32 *)((char *)(var_t4) + 0x24)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x24)) + (*(f32 *)((char *)(sp) + 0xC)));
        (*(f32 *)((char *)(var_t4) + 0x28)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x28)) + (*(f32 *)((char *)(sp) + 0x10)));
        (*(f32 *)((char *)(var_t4) + 0x2C)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x2C)) + (*(f32 *)((char *)(sp) + 0x14)));
        (*(f32 *)((char *)(var_t4) + 0x30)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x30)) + (*(f32 *)((char *)(sp) + 0x18)));
        (*(f32 *)((char *)(var_t4) + 0x34)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x34)) + (*(f32 *)((char *)(sp) + 0x1C)));
        (*(f32 *)((char *)(var_t4) + 0x38)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x38)) + (*(f32 *)((char *)(sp) + 0x20)));
        (*(f32 *)((char *)(var_t4) + 0x3C)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x3C)) + (*(f32 *)((char *)(sp) + 0x24)));
        (*(f32 *)((char *)(var_t4) + 0x40)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x40)) + (*(f32 *)((char *)(sp) + 0x28)));
        (*(f32 *)((char *)(var_t4) + 0x44)) = (f32) ((*(f32 *)((char *)(var_t4) + 0x44)) + (*(f32 *)((char *)(sp) + 0x2C)));
        var_t2 = (char *)(var_t2) + 0x18;
        var_t4 += 0x18;
        var_t5 -= 1;
    } while (var_t5 != 0);
    var_t0_2 = arg2;
    var_t1 = arg3;
    var_t4_2 = temp_t6;
    if (arg1 & 1) {
        var_t5_2 = 9;
        do {
            (*(s32 *)((char *)(var_t0_2) + 0x0)) = (*(s32 *)((char *)(var_t4_2) + 0x0)) + (*(s32 *)((char *)(var_t1) + 0x0));
            (*(f32 *)((char *)(var_t0_2) + 0x4)) = (f32) (-(*(f32 *)((char *)(var_t4_2) + 0x4)) - (*(f32 *)((char *)(var_t1) + 0x4)));
            var_t0_2 += 8;
            var_t1 += 8;
            var_t4_2 += 8;
            var_t5_2 -= 1;
        } while (var_t5_2 != 0);
    } else {
        var_t5_3 = 0x12;
        do {
            *var_t0_2 = *var_t4_2 + *var_t1;
            var_t0_2 += 4;
            var_t1 += 4;
            var_t4_2 += 4;
            var_t5_3 -= 1;
        } while (var_t5_3 != 0);
    }
    var_t1_2 = arg3;
    var_t4_3 = temp_t6 + 0x48;
    var_t5_4 = 0x12;
    do {
        *var_t1_2 = *var_t4_3;
        var_t1_2 += 4;
        var_t4_3 += 4;
        var_t5_4 -= 1;
    } while (var_t5_4 != 0);
}
