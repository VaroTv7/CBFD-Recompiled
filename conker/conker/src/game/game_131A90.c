/**
 * Auto-decompiled from asm/131A90.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_150A3A70();                        /* extern */
void func_1510F800();                                 /* extern */
extern f32 D_800A2370;

void func_151045E0(s32 arg0, void * arg1, void * arg2) {

}

s32 func_151045F4(s32 arg0, void * arg1) {
    return 1;
}

void func_15104608(f32 arg0, f32 arg1, void * arg2, void * arg3) {

}

s32 func_15104620(s32 arg0, void * arg1) {
    return 1;
}

s32 func_15104634(f32 arg0, f32 arg1, f32 arg2, f32 *arg3) {
    s32 sp78[64];
    f32 sp6C;
    f32 sp60;
    void * *var_t1;
    f32 *var_a1;
    f32 *var_v1;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f12;
    s32 *var_a0;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 temp_a2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t0_3;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_a0_2;
    s32 var_a1_2;
    s32 var_t0;
    s32 var_t3;
    s32 var_t8;
    void *temp_v0_2;
    void *temp_v0_3;

    f32 sp70;
    f32 sp64;
    f32 sp68;
    f32 sp74;
    func_1510F800(0);
    temp_v0 = func_150A3A70((s32) arg0, (s32) arg1);
    if (temp_v0 == 0) {
        return 0;
    }
    var_t3 = 0;
    var_t0 = 0;
    if (temp_v0 > 0) {
        var_t1 = &D_800D3300;
        do {
            var_a0 = (*(s32 *)((char *)(var_t1) + 0x4));
            temp_a2 = (*(s32 *)((char *)(var_t1) + 0x8));
            var_a1 = &sp6C;
            var_v1 = &sp60 + 4;
            var_t8 = *var_a0;
            if ((char *)(var_v1) != (char *)(&sp6C)) {
                do {
                    temp_v0_2 = var_t8 + temp_a2;
                    var_v1 += 4;
                    var_a0 += 4;
                    var_a1 += 4;
                    (*(f32 *)((char *)(var_a1) - 0x4)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x0));
                    (*(f32 *)((char *)(var_v1) - 0x8)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0x4));
                    var_t8 = *var_a0;
                } while ((char *)(var_v1) != (char *)(&sp6C));
            }
            temp_v0_3 = var_t8 + temp_a2;
            (*(f32 *)((char *)((var_a1 + 4)) - 0x4)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x0));
            (*(f32 *)((char *)(var_v1) - 0x4)) = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x4));
            temp_f2 = sp6C - sp70;
            temp_f0 = sp64 - sp60;
            if (((sp68 * temp_f2) + (temp_f0 * sp74) + -((sp60 * temp_f2) + (temp_f0 * sp6C))) > 0.0f) {
                (&sp78[0])[var_t3] = var_t0;
                var_t3 += 1;
            }
            var_t0 += 1;
            var_t1 = (char *)(var_t1) + 0x10;
        } while (var_t0 != temp_v0);
    }
    var_a0_2 = -1;
    if (var_t3 == 0) {
        return 0;
    }
    var_f12 = D_800A2370;
    var_a1_2 = 0;
    if (var_t3 > 0) {
        temp_v0_4 = var_t3 & 3;
        if (temp_v0_4 != 0) {
            var_v1_2 = &(&sp78[0])[0];
            do {
                temp_v0_5 = *var_v1_2;
                var_a1_2 += 1;
                var_f0 = ((f32)(s32)*(&D_800D3300 + (temp_v0_5 * 0x10)) * 0.00390625f) - arg2;
                if (var_f0 < 0.0f) {
                    var_f0 = -(((f32)(s32)*(&D_800D3300 + (temp_v0_5 * 0x10)) * 0.00390625f) - arg2);
                }
                if ((var_f0 < var_f12) || (var_a0_2 == -1)) {
                    var_f12 = var_f0;
                    var_a0_2 = temp_v0_5;
                }
                var_v1_2 += 4;
            } while (temp_v0_4 != var_a1_2);
            if (var_a1_2 != var_t3) {
                goto block_21;
            }
        } else {
block_21:
            var_v1_3 = &(&sp78[0])[var_a1_2];
            do {
                temp_v0_6 = (*(s32 *)((char *)(var_v1_3) + 0x0));
                var_f0_2 = ((f32)(s32)*(&D_800D3300 + (temp_v0_6 * 0x10)) * 0.00390625f) - arg2;
                if (var_f0_2 < 0.0f) {
                    var_f0_2 = -(((f32)(s32)*(&D_800D3300 + (temp_v0_6 * 0x10)) * 0.00390625f) - arg2);
                }
                if ((var_f0_2 < var_f12) || (var_a0_2 == -1)) {
                    var_f12 = var_f0_2;
                    var_a0_2 = temp_v0_6;
                }
                temp_t0 = (*(s32 *)((char *)(var_v1_3) + 0x4));
                temp_f2_2 = ((f32)(s32)*(&D_800D3300 + (temp_t0 * 0x10)) * 0.00390625f) - arg2;
                var_f0_3 = temp_f2_2;
                if (temp_f2_2 < 0.0f) {
                    var_f0_3 = -temp_f2_2;
                }
                if ((var_f0_3 < var_f12) || (var_a0_2 == -1)) {
                    var_f12 = var_f0_3;
                    var_a0_2 = temp_t0;
                }
                temp_t0_2 = (*(s32 *)((char *)(var_v1_3) + 0x8));
                temp_f2_3 = ((f32)(s32)*(&D_800D3300 + (temp_t0_2 * 0x10)) * 0.00390625f) - arg2;
                var_f0_4 = temp_f2_3;
                if (temp_f2_3 < 0.0f) {
                    var_f0_4 = -temp_f2_3;
                }
                if ((var_f0_4 < var_f12) || (var_a0_2 == -1)) {
                    var_f12 = var_f0_4;
                    var_a0_2 = temp_t0_2;
                }
                temp_t0_3 = (*(s32 *)((char *)(var_v1_3) + 0xC));
                var_v1_3 += 0x10;
                temp_f2_4 = ((f32)(s32)*(&D_800D3300 + (temp_t0_3 * 0x10)) * 0.00390625f) - arg2;
                var_f0_5 = temp_f2_4;
                if (temp_f2_4 < 0.0f) {
                    var_f0_5 = -temp_f2_4;
                }
                if ((var_f0_5 < var_f12) || (var_a0_2 == -1)) {
                    var_f12 = var_f0_5;
                    var_a0_2 = temp_t0_3;
                }
            } while (var_v1_3 != &(&sp78[0])[var_t3]);
        }
    }
    *arg3 = (f32)(s32)*(&D_800D3300 + (var_a0_2 * 0x10)) * 0.00390625f;
    return 1;
}
