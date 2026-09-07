/**
 * Auto-decompiled from asm/FF5C0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
s32 func_1517F08C();              /* extern */
void * memcpy();                             /* extern */
void func_150D22D4();                       /* static */
extern u8 D_800D9900;

void func_150D2110(s16 arg0, f32 arg1, f32 arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6) {
    u8 sp4D;
    u8 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s8 sp38;
    s32 temp_v0;

    D_800D9900 += 1;
    sp40 = arg1;
    sp44 = arg2;
    sp48 = arg1 + arg2;
    sp38 = 0;
    sp3C = 0.0f;
    sp4C = arg3;
    sp4D = arg4;
    temp_v0 = func_15149130(arg1, arg2, arg0, -1, 0x2F, 2, 1, 0x26, 0x18, (s32) arg5, arg6);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp38, 0x18);
    }
}

void func_150D21CC(void *arg0) {
    f32 temp_f2;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + D_800BE9A4);
    if ((*(s32 *)((char *)(arg0) + 0x38)) < (*(s32 *)((char *)(arg0) + 0x2C))) {
        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x10));
        do {
            (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x4)) - temp_f2);
        } while (temp_f2 < (*(s32 *)((char *)(temp_v0) + 0x4)));
    }
    temp_v0_2 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(temp_v0_2) + 0x4)) <= (*(s32 *)((char *)(temp_v0_2) + 0x8))) {
        (*(s32 *)((char *)(arg0) + 0x28)) = 1;
        func_1515D4D4(0xFF, 0xFF, 0xFF, 0xFF);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x28)) = 0;
}

void func_150D227C(s32 arg0) {
    func_150D22D4(arg0);
    func_1514933C(arg0);
}

void func_150D22A8(s32 arg0) {
    func_150D22D4(arg0);
    func_15149368(arg0);
}

void func_150D22D4(s32 arg0) {
    D_800D9900 -= 1;
}

s32 func_150D22F4(void *arg1, s32 arg2) {
    s32 var_v0;

    if ((*(s32 *)((char *)(arg1) + 0x28)) == 1) {
        var_v0 = func_1517F08C((*(s32 *)((char *)(arg1) + 0x3C)), 0xFF, 0xFF, 0xFF, (s32) arg2);
    } else {
        var_v0 = func_1517F08C((*(s32 *)((char *)(arg1) + 0x3D)), 0, 0, 0, (s32) arg2);
    }
    return var_v0;
}

void func_150D2374(void *arg0) {
    void *sp34;
    s16 temp_a0;
    s32 temp_t8;
    void *temp_v1;

    temp_t8 = (*(s32 *)((char *)(arg0) + 0x30)) - D_800BE9E4;
    (*(s32 *)((char *)(arg0) + 0x30)) = temp_t8;
    if (temp_t8 < 0) {
        temp_v1 = (char *)(arg0) + 0x28;
        temp_a0 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_v1) + 0xE)) + 1)) + (*(u32 *)((char *)(temp_v1) + 0xC));
        sp34 = temp_v1;
        func_150D2110(temp_a0, (*(u8 *)((char *)(temp_v1) + 0x10)), (*(u8 *)((char *)(temp_v1) + 0x14)), (*(u8 *)((char *)(temp_v1) + 0x18)), (u8) (s32) (*(u8 *)((char *)(temp_v1) + 0x19)), (u8) (s32) (*(u8 *)((char *)(arg0) + 0xC)), (s32) (*(u8 *)((char *)(arg0) + 0x1)));
        (*(s32 *)((char *)(temp_v1) + 0x8)) = (s32) ((random_u32() % (u32) ((*(s32 *)((char *)(temp_v1) + 0x4)) + 1)) + (*(s32 *)((char *)(arg0) + 0x28)));
    }
}
