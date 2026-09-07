/**
 * Auto-decompiled from asm/EEB10.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_15147DA0(); /* extern */
void * func_1514C2F0(); /* extern */
extern f32 D_800A01F0;
extern f32 D_800A01F4;
extern f32 D_800A01F8;
extern f32 D_800A01FC;
extern f32 D_800A0200;

void func_150C1660(s32 arg2, s32 arg3) {
    s32 temp_a0;

    temp_a0 = arg3 & 0xFF;
    func_1514C2F0(temp_a0, arg2, 0x42A00000, 0, 3, 0x19, 2, 0, 0.0f, 0, temp_a0);
}

s32 func_150C16C0(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg8, u8 arg14) {
    s8 sp11D;
    s32 sp118;
    s16 sp116;
    s16 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    s8 sp103;
    s8 sp102;
    s8 sp101;
    s8 sp100;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    s8 spE5;
    s8 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    s16 temp_t1;
    s32 var_s1;

    spCC = 1;
    spD0 = 0x160600;
    spD4 = 3;
    spD8 = 0x10;
    var_s1 = 1;
    spC8 = 0;
    spDC = 0x80;
    spE0 = 0x20;
    spE4 = 0;
    spE5 = 9;
    sp118 = 1;
    sp116 = 1;
    sp101 = 0xA;
    sp102 = 0xFF;
    sp100 = 0x28;
    sp103 = 0xFF;
    sp108 = arg2;
    sp10C = arg3;
    temp_f30 = D_800A01F0;
    sp110 = arg4;
    do {
        temp_t1 = (random_u32() % 13U) - 0x3F;
        temp_f22 = func_151423D8(temp_t1 & 0xFF);
        temp_f24 = func_151423D8((temp_t1 - 0x40) & 0xFF);
        temp_f26 = func_151423D8(arg8 & 0xFF & 0xFF);
        temp_f28 = func_151423D8((arg8 - 0x40) & 0xFF & 0xFF);
        temp_f20 = (random_float() * temp_f30) + 25.5f;
        sp11D = (random_u32() % 9U) + 5;
        sp114 = (random_u32() & 0x3F) + 0x5A;
        spE8 = (random_float() * D_800A01F4) + D_800A01F8;
        temp_f2 = temp_f20 * temp_f22;
        spF8 = (random_float() * D_800A01FC) + D_800A0200;
        spEC = temp_f2 * temp_f28;
        spF0 = -temp_f20 * temp_f24;
        spF4 = temp_f2 * temp_f26;
        func_15147DA0(&sp108, &spE8, 0, 1, 5, 0, 0, 0, 0, 0, 0, &spC8, 0, (s32) arg14, 0);
        var_s1 -= 1;
    } while (var_s1 != 0);
    return 1;
}

s32 func_150C1978(void *arg0) {
    s8 temp_t6;
    s8 var_v1;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x1C)) * 8;
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
