/**
 * Auto-decompiled from asm/18D250.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15167A68();        /* extern */
s32 func_1517EF00();                               /* extern */
s32 func_15181CC8();                               /* extern */
void * memcpy();                              /* extern */
extern s32 D_8008B0D0;
extern s32 D_8008B0D8;
extern s32 D_8008B0E4;
extern s32 D_800A6540;
extern s32 D_800A6548;
extern s32 D_800A657C;
extern s32 D_800A6584;
extern s32 D_800A65B8;
extern s32 D_800A65C0;
extern s32 D_800A65F4;
extern s32 D_800A65FC;
extern s32 D_800A6630;
extern s32 D_800A663C;
extern s32 D_800A6670;
extern f32 D_800A6674;
extern f32 D_800A6678;
extern f32 D_800A667C;
extern f32 D_800A6680;
extern s32 D_800DCF20;

void func_1515FDA0(s32 arg0) {
    s32 temp_t2;
    s32 var_fp;
    s32 var_s1;
    s32 var_t7;
    s8 temp_t8;
    u8 temp_v0;
    void **var_v1;
    void *var_s0;

    var_fp = 0;
    do {
        var_s0 = *(&D_800DCF20 + (var_fp * 0x1A0));
        temp_t8 = D_800DD190 + 1;
        D_800DD190 = temp_t8;
        if (var_s0 != NULL) {
            var_v1 = (temp_t8 * 4) + D_800DD198;
            do {
                *var_v1 = (*(s32 *)((char *)(var_s0) + 0x8));
                temp_v0 = (*(s32 *)((char *)(var_s0) + 0xE));
                if (temp_v0 & 4) {
                    (*(u8 *)((char *)(var_s0) + 0xE)) = (u8) (temp_v0 & ~4);
                    var_t7 = D_800DD190 * 4;
                    goto block_16;
                }
                if ((*(s32 *)((char *)(var_s0) + 0x10)) != -1) {
                    var_s1 = 1;
                    if ((temp_v0 & 2) && (D_800C35EA == 1)) {
                        var_s1 = 0;
                    }
                    if ((temp_v0 & 8) && ((func_15181CC8(0) == 0) || (func_1517EF00(0) != 0))) {
                        var_s1 = 0;
                    }
                    if (var_s1 != 0) {
                        ((s32 (*)())((char *)(&D_8008B0D8 + ((*(s32 *)((char *)(var_s0) + 0x10)) * 4))))(var_s0, arg0);
                    }
                    var_t7 = D_800DD190 * 4;
block_16:
                    var_v1 = var_t7 + D_800DD198;
                }
                var_s0 = *var_v1;
            } while (var_s0 != NULL);
        }
        D_800DD190 -= 1;
        temp_t2 = (var_fp + 1) & 0xFF;
        var_fp = temp_t2;
    } while (temp_t2 < 2);
}

s32 func_1515FF74(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp24;
    s32 temp_v0;

    temp_v0 = func_15167A68(0x34, arg3, arg1 + 0x18, 1, (s32) arg2, 1);
    if (temp_v0 == 0) {
        return 0;
    }
    sp24 = temp_v0;
    memcpy(temp_v0 + 0xE, arg0, 8);
    return sp24;
}

void func_1515FFEC(void *arg0) {
    u8 sp1B;
    s8 temp_v0;
    u8 var_v1;

    var_v1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0xE)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x12)) < 0) {
            var_v1 = 1;
        }
    }
    if (var_v1 == 0) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0xF));
        if (temp_v0 != -1) {
            sp1B = var_v1;
            if (((s32 (*)())((char *)(&D_8008B0D0 + (temp_v0 * 4))))() == 0) {
                var_v1 = 1;
            }
        }
    }
    if (var_v1 != 0) {
        func_1516972C(arg0);
    }
}

void func_15160090(void *arg0, s32 arg2) {
    void * (*temp_v0)(s32);

    temp_v0 = *(&D_8008B0E4 + ((*(s32 *)((char *)(arg0) + 0x14)) * 4));
    if (temp_v0 != NULL) {
        temp_v0(arg2 & 0xFF);
    }
}

s32 func_151600D8(void *arg0) {
    void *temp_s1;

    temp_s1 = (char *)(arg0) + 0x18;
    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) ((f32) func_151422DC(0, &D_800A6540, -0x7D0, 0x7D0, 0, &D_800A6548, 0x1C4) * D_800A6674);
    (*(f32 *)((char *)(temp_s1) + 0x4)) = (f32) ((f32) func_151422DC(1, &D_800A657C, -0x7D0, 0x7D0, 0, &D_800A6584, 0x1C9) * D_800A6678);
    (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((f32) func_151422DC(2, &D_800A65B8, 0, 0x7D0, 0x1F4, &D_800A65C0, 0x1CE) * D_800A667C);
    (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((f32) func_151422DC(3, &D_800A65F4, 0, 0x7D0, 0x1F4, &D_800A65FC, 0x1D3) * D_800A6680);
    (*(s32 *)((char *)(temp_s1) + 0x10)) = func_151422DC(4, &D_800A6630, 0, 0x10000, 0x10000, &D_800A663C, 0x1D9);
    return 1;
}

void func_15160274(s32 arg0, s32 arg1) {
    s32 sp1C;

    sp1C = D_800A6670;
    func_15169260(&sp1C, 1, arg0, arg1 & 0xFF);
}
