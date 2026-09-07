/**
 * Auto-decompiled from asm/DC360.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
s32 func_15147DA0(); /* extern */

void func_150AEEB0(void *arg0, s32 arg1) {
    s8 sp119;
    s32 sp114;
    s16 sp112;
    s16 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    s8 spFF;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    s8 spD9;
    s8 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s4;

    var_s3 = 0x1E;
    var_s4 = 1;
    if (arg0 != NULL) {
        spBC = 0;
        spC0 = 1;
        spC4 = 0x160600;
        spC8 = 3;
        spCC = 0x10;
        spD0 = 0x80;
        spD4 = 0x20;
        spD8 = 0;
        spD9 = 9;
        sp114 = 1;
        sp112 = 1;
        spFD = 8;
        spFE = 0xFF - (((u32) (*(u32 *)((char *)(arg0) + 0x184)) >> 5) << 6);
        spFC = 0x28;
        spFF = 0xFF;
loop_2:
        temp_s0 = random_u32() & 0xFF;
        temp_v1 = -0x28 - (random_u32() % 21U);
        temp_f28 = func_151423D8(temp_v1 & 0xFF);
        temp_f26 = func_151423D8(((temp_v1 & 0xFF) - 0x40) & 0xFF);
        temp_f20 = func_151423D8(temp_s0 & 0xFF);
        temp_f22 = func_151423D8((temp_s0 - 0x40) & 0xFF);
        temp_f24 = (random_float() * 5.0f) + 10.0f;
        sp104 = (*(s32 *)((char *)(arg0) + 0x14)) + (100.0f * temp_f22);
        sp108 = (random_float() * 15.0f) + (*(s32 *)((char *)(arg0) + 0x18));
        sp10C = (*(s32 *)((char *)(arg0) + 0x1C)) + (100.0f * temp_f20);
        sp119 = (random_u32() % 7U) + 3;
        sp110 = (random_u32() % 26U) + 0x23;
        spE4 = (random_float() * 6.0f) + 2.0f;
        temp_f2 = temp_f24 * temp_f28;
        spF4 = random_float() + 1.0f;
        spE8 = temp_f2 * temp_f22;
        spEC = -temp_f24 * temp_f26;
        spF0 = temp_f2 * temp_f20;
        var_s3 -= 1;
        if (func_15147DA0(&sp104, &spE4, 0, 1, 3, 0, 0, 0, 0, 0, 0, &spBC, 0, (s32) arg1, 0) == 0) {
            var_s4 = 0;
        }
        if ((var_s4 != 0) && (var_s3 != 0)) {
            goto loop_2;
        }
    }
}

s32 func_150AF1C0(void *arg0) {
    s8 temp_t6;
    s8 var_v1;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x1C)) << 5;
    var_v1 = temp_t6;
    if (temp_t6 >= 0x100) {
        var_v1 = -1;
    }
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x1B)) = var_v1;
    if ((var_v1 & 0xFF) < 0) {
        return 0;
    }
    return 1;
}
