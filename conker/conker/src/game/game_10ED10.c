/**
 * Auto-decompiled from asm/10ED10.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150495B0();      /* extern */
s32 func_1509BE40();                    /* extern */
extern f32 D_80088990;
extern s32 D_800889A0;
extern s32 D_800889B0;
extern s32 D_800889C0;
extern s32 D_800889D0;
extern s32 D_800889E0;

void func_150E1860(void *arg0) {
    void * *var_s4;
    s32 *var_s0;
    f32 *var_s1;
    s32 *var_s2;
    s32 *var_s3;
    s32 var_fp;

    var_fp = 0;
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x10);
    var_s2 = &D_800889D0;
    var_s4 = &D_800889B0;
    var_s1 = &D_80088990;
    var_s0 = &D_800889A0;
    var_s3 = &D_800889C0;
    do {
        if (func_1509BE40(1, *var_s3, 6, 0x9000) != 0) {
            *var_s0 = 0x43400000;
            var_fp = 1;
            (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80021010);
        } else {
            *var_s0 = 0x437F0000;
        }
        func_150495B0(var_s1, *var_s0, var_s4, 0x40800000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
        func_1509BFB0(1, *var_s2, 0x12, (u32) *var_s1 & 0xFF);
        var_s2 += 4;
        var_s3 += 4;
        var_s0 += 4;
        var_s1 += 4;
        var_s4 = (char *)(var_s4) + 4;
    } while ((char *)(var_s2) != (char *)(&D_800889E0));
    if (var_fp == 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0x7FFDEFFF);
    }
    if (func_1509BE40(1, 0x403D, 6, 0x2000) != 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0x7FFFFFFF);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80000000);
}
