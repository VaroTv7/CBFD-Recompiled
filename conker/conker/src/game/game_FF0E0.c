/**
 * Auto-decompiled from asm/FF0E0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960(); /* extern */
s32 func_150AC9C0(); /* extern */
extern s32 D_800A08F0;

void func_150D1C30(void *arg0) {
    void * spA8;
    f32 spA0;
    f32 sp9C;
    s32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s32 var_s3;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *var_s1;

    temp_s2 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(arg0) + 0x6C)) & 1) {
        temp_s2_2 = (char *)(arg0) + 0x28;
        (*(f32 *)((char *)(temp_s2_2) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s2_2) + 0xC)) + ((*(f32 *)((char *)(temp_s2_2) + 0x18)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_s2_2) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s2_2) + 0x10)) + ((*(f32 *)((char *)(temp_s2_2) + 0x1C)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_s2_2) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s2_2) + 0x14)) + ((*(f32 *)((char *)(temp_s2_2) + 0x20)) * D_800BE9A4));
        func_150A8050(&spA8, (*(f32 *)((char *)(temp_s2_2) + 0xC)), (*(f32 *)((char *)(temp_s2_2) + 0x10)), (*(f32 *)((char *)(temp_s2_2) + 0x14)));
        var_s3 = 0;
        var_s1 = temp_s2_2;
        do {
            temp_s0 = (*(s32 *)((char *)(var_s1) + 0x24));
            if (temp_s0 != NULL) {
                temp_v0 = &D_800A08F0 + (var_s3 * 0xC);
                func_150A7960(&spA8, (*(s32 *)((char *)(temp_v0) + 0x0)), (*(s32 *)((char *)(temp_v0) + 0x4)), (*(s32 *)((char *)(temp_v0) + 0x8)), &sp98, &sp9C, &spA0);
                if (func_150AC9C0((*(s32 *)((char *)(arg0) + 0x28)), (*(s32 *)((char *)(temp_s2_2) + 0x4)), (*(s32 *)((char *)(temp_s2_2) + 0x8)), sp98, sp9C, spA0, 0, 0, &sp8C, &sp90, &sp94, &sp88, 0, 0, 0.0f) != 0) {
                    (*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x14))) + 0x9)) = 0;
                    (*(s16 *)((char *)((*(s16 *)((char *)(temp_s0) + 0x14))) + 0xE)) = (s16) (s32) sp8C;
                    (*(s16 *)((char *)((*(s16 *)((char *)(temp_s0) + 0x14))) + 0x10)) = (s16) (s32) sp90;
                    (*(s16 *)((char *)((*(s16 *)((char *)(temp_s0) + 0x14))) + 0x12)) = (s16) (s32) sp94;
                    (*(s8 *)((char *)((*(s8 *)((char *)(temp_s0) + 0x14))) + 0x2F)) = (s8) (u32) ((*(s8 *)((char *)(temp_s2_2) + 0x3C)) * sp88);
                } else {
                    (*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x14))) + 0x9)) = 1;
                }
            }
            var_s3 += 1;
            var_s1 = (char *)(var_s1) + 4;
        } while (var_s3 != 6);
        return;
    }
    temp_v0_2 = (*(s32 *)((char *)(temp_s2) + 0x24));
    temp_s1 = (char *)(temp_s2) + (2 * 4);
    if (temp_v0_2 != NULL) {
        (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_2) + 0x14))) + 0x9)) = 1;
    }
    temp_v0_3 = (*(s32 *)((char *)(temp_s2) + 0x28));
    if (temp_v0_3 != NULL) {
        (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_3) + 0x14))) + 0x9)) = 1;
    }
    temp_v0_4 = (*(s32 *)((char *)(temp_s1) + 0x24));
    if (temp_v0_4 != NULL) {
        (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_4) + 0x14))) + 0x9)) = 1;
    }
    temp_v0_5 = (*(s32 *)((char *)(temp_s1) + 0x28));
    if (temp_v0_5 != NULL) {
        (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_5) + 0x14))) + 0x9)) = 1;
    }
    temp_v0_6 = (*(s32 *)((char *)(temp_s1) + 0x2C));
    if (temp_v0_6 != NULL) {
        (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_6) + 0x14))) + 0x9)) = 1;
    }
    temp_v0_7 = (*(s32 *)((char *)(temp_s1) + 0x30));
    if (temp_v0_7 != NULL) {
        (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_7) + 0x14))) + 0x9)) = 1;
    }
}

void *func_150D1F6C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    void *temp_v0;
    void *var_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x32) {
        temp_v0 = (char *)(arg0) + 0x28;
        (*(s32 *)((char *)(temp_v0) + 0x18)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
        (*(s32 *)((char *)(temp_v0) + 0x1C)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
        (*(s32 *)((char *)(temp_v0) + 0x20)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
        (*(f32 *)((char *)(temp_v0) + 0x3C)) = (f32) (*(f32 *)((char *)(arg1) + 0xC));
        return temp_v0;
    }
    if ((temp_t6 == 0x30) || (var_v0 = (char *)(arg0) + 0x28, (temp_t6 == 0x31))) {
        var_v0 = (char *)(arg0) + 0x28;
        if ((char *)(arg1) == (char *)(*(s32 *)((char *)(var_v0) + 0x40))) {
            if (temp_t6 == 0x30) {
                (*(u8 *)((char *)(var_v0) + 0x44)) = (u8) ((*(u8 *)((char *)(var_v0) + 0x44)) | 1);
                return var_v0;
            }
            (*(u8 *)((char *)(var_v0) + 0x44)) = (u8) ((*(u8 *)((char *)(var_v0) + 0x44)) & 0xFFFE);
            return var_v0;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_v0;
    }
    if (temp_t6 == 0x4E) {
        (*(s32 *)((char *)(arg0) + 0x40)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x44)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x48)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        return var_v0;
    }
    if (temp_t6 == 0x4F) {
        var_v0 = func_1516972C(0x30);
    }
    return var_v0;
}

void func_150D2054(s32 arg0) {
    s32 temp_a0;
    s32 temp_t8;
    s32 var_s0;

    var_s0 = 0;
    do {
        temp_a0 = (*(s32 *)((char *)((arg0 + 0x28 + (var_s0 * 4))) + 0x24));
        if (temp_a0 != 0) {
            func_1516972C(temp_a0);
        }
        temp_t8 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t8;
    } while (temp_t8 < 6);
}

void func_150D20B0(s32 arg0) {
    func_150D2054(arg0);
    func_15149368(arg0);
}

void func_150D20DC(s32 arg0) {
    func_150D2054(arg0);
    func_1514933C(arg0);
}
