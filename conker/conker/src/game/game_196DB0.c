/**
 * Auto-decompiled from asm/196DB0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *func_15094F70(); /* extern */
s32 func_1509629C(); /* extern */
void *func_1513F4E4();                      /* extern */
s32 func_15142FBC();          /* extern */
s32 func_15167A68();            /* extern */
extern s32 D_8008CA20;
extern s32 D_800A4AC8;
extern s32 D_800D2C9C;
s32 func_15169900();

s32 func_15169900(s32 arg0, s32 arg1) {
    s32 sp24;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_15167A68(0x5E, 0, 0x4C, 0, arg1, 1);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp24 = temp_v0;
        bcopy(arg0, temp_v0 + 0x10, 0x3C);
        var_v1 = sp24;
    }
    return var_v1;
}

void func_15169968(void) {
    func_15169900(0xFF, 0);
}

void func_15169988(void *arg0) {
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_v0;
    s32 temp_t1;
    s8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x40));
    if (temp_v0 != 0) {
        ((s32 (*)())((char *)(&D_8008CA20 + (temp_v0 * 4))))();
    }
    temp_t1 = (*(s32 *)((char *)(arg0) + 0x41)) << 8;
    var_v0 = (*(s32 *)((char *)(arg0) + 0x26)) + ((*(s32 *)((char *)(arg0) + 0x28)) * D_800BE9E4);
    if (var_v0 >= temp_t1) {
        var_v0 -= temp_t1;
    } else if (var_v0 < 0) {
        var_v0 += temp_t1;
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x24));
    (*(s32 *)((char *)(arg0) + 0x26)) = var_v0;
    if (temp_v1 != 0) {
        temp_v1_2 = temp_v1 - D_800BE9E4;
        if (temp_v1_2 <= 0) {
            func_1516972C(arg0, &D_800BE9E4);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x24)) = temp_v1_2;
    }
}

s32 func_15169A48(s32 arg0, void *arg1, void * arg2) {
    s32 sp60;
    s8 sp5F;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1;
    u8 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;

    if (((*(s32 *)((char *)(arg1) + 0x38)) == 0) || ((*(s32 *)((char *)(arg1) + 0x3A)) == 0)) {
        return arg0;
    }
    sp5F = 1;
    temp_v0_2 = func_1513F4E4((*(s32 *)((char *)(arg1) + 0x47)), &sp5F);
    (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0xFA000100;
    (*(s32 *)((char *)(temp_v0_2) + 0x4)) = (s32) (((*(s32 *)((char *)(arg1) + 0x42)) << 0x18) | ((*(s32 *)((char *)(arg1) + 0x43)) << 0x10) | ((*(s32 *)((char *)(arg1) + 0x44)) << 8) | (*(s32 *)((char *)(arg1) + 0x45)));
    var_a0 = (char *)(temp_v0_2) + 8;
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x49));
    if (temp_v1 & 1) {
        if (temp_v1 & 2) {
            var_v0 = (s32) ((*(s32 *)((char *)(arg1) + 0x34)) * 4) >> 5;
        } else {
            var_v0 = 0;
        }
        var_a0 = func_15094F70(var_a0, (*(s32 *)((char *)(arg1) + 0x14)), 0, 0, 0x100, 1, var_v0, 2, 3);
    }
    if ((*(s32 *)((char *)(arg1) + 0x49)) & 0x10) {
        var_t0 = 1;
    } else {
        var_t0 = 0;
    }
    if ((*(s32 *)((char *)(arg1) + 0x49)) & 4) {
        var_t0 |= 2;
    }
    if ((*(s32 *)((char *)(arg1) + 0x49)) & 8) {
        var_t0 |= 4;
    }
    if ((*(s32 *)((char *)(arg1) + 0x49)) & 0x20) {
        (*(s32 *)((char *)(var_a0) + 0x4)) = 0x795A0000;
        (*(s32 *)((char *)(var_a0) + 0x0)) = 0xEE000000;
        var_a0 = (char *)(var_a0) + 8;
    }
    if ((*(s32 *)((char *)(arg1) + 0x48)) == 2) {
        var_v1 = 0x100000;
    } else {
        var_v1 = 0;
    }
    sp60 = var_t0;
    temp_v0 = ((*(s32 *)((char *)(arg1) + 0x46)) * 8) + &D_800A4AC8;
    return func_1509629C(func_15142FBC(var_a0, var_v1 | D_800D2C9C | 0x2CA0, (*(s32 *)((char *)(temp_v0) + 0x4)) | (*(s32 *)((char *)(temp_v0) + 0x0)) | 4, &sp5F), (*(f32 *)((char *)(arg1) + 0x10)), (f32) (*(f32 *)((char *)(arg1) + 0x38)), (f32) (*(f32 *)((char *)(arg1) + 0x3A)), (*(f32 *)((char *)(arg1) + 0x2C)), (*(f32 *)((char *)(arg1) + 0x30)), (s32) (*(f32 *)((char *)(arg1) + 0x3C)), (s32) (*(f32 *)((char *)(arg1) + 0x3E)), sp60, (s32) (*(f32 *)((char *)(arg1) + 0x34)), (s32) (*(f32 *)((char *)(arg1) + 0x36)), (s16) (s32)((*(f32 *)((char *)(arg1) + 0x26))) >> 8);
}
