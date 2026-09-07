/**
 * Auto-decompiled from asm/CD5A0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern s32 D_80088510;
extern s32 D_8008851C;
extern u8 D_800D3010;
extern s32 D_800D3014;
extern s32 D_800D3018;
extern u8 D_800D301C;
extern s32 D_800D3020;
extern s32 D_800D3028;
extern s32 D_800D3088;

void func_150A00F0(void) {
    void * *var_v1;
    u8 temp_t0;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_t6;

    D_800D3014 = 0;
    D_800D3014 = (s8) (D_800D3010 & 0xFF7F);
    D_800D3018 = 0;
    D_800D3018 = (s8) (D_800D301C & 0xFF7F);
    D_800D3020 = 0;
    D_800D3020 = 0;
    var_v1 = &D_800D3028;
    do {
        temp_t2 = (*(s32 *)((char *)(var_v1) + 0xC));
        temp_t4 = (*(s32 *)((char *)(var_v1) + 0x18));
        temp_t6 = (*(s32 *)((char *)(var_v1) + 0x24));
        temp_t0 = (*(s32 *)((char *)(var_v1) + 0x0));
        var_v1 = (char *)(var_v1) + 0x30;
        (*(s8 *)((char *)(var_v1) - 0xC)) = (s8) (temp_t6 & 0xFF7F);
        (*(s8 *)((char *)(var_v1) - 0x18)) = (s8) (temp_t4 & 0xFF7F);
        (*(s8 *)((char *)(var_v1) - 0x24)) = (s8) (temp_t2 & 0xFF7F);
        (*(s32 *)((char *)(var_v1) - 0x20)) = 0;
        (*(s32 *)((char *)(var_v1) - 0x1C)) = 0;
        (*(s32 *)((char *)(var_v1) - 0x14)) = 0;
        (*(s32 *)((char *)(var_v1) - 0x10)) = 0;
        (*(s32 *)((char *)(var_v1) - 0x8)) = 0;
        (*(s32 *)((char *)(var_v1) - 0x4)) = 0;
        (*(s8 *)((char *)(var_v1) - 0x30)) = (s8) (temp_t0 & 0xFF7F);
        (*(s32 *)((char *)(var_v1) - 0x2C)) = 0;
        (*(s32 *)((char *)(var_v1) - 0x28)) = 0;
    } while ((char *)(var_v1) != (char *)(&D_800D3088));
}

void func_150A019C(void) {
    s32 temp_t7;
    u16 temp_a2;
    u16 temp_v0_2;
    u32 temp_t5;
    u32 temp_t5_2;
    u32 temp_v0;
    u8 *var_v1;

    var_v1 = &D_800D3010;
    do {
        temp_v0 = (*(s32 *)((char *)(var_v1) + 0x0));
        if (((temp_v0 >> 0x1F) != 0) && (((u32) (temp_v0 * 2) >> 0x1F) == 1)) {
            temp_t7 = ((u32) (temp_v0 * 4) >> 0x1C) * 2;
            temp_a2 = *(&D_80088510 + temp_t7);
            temp_t5 = (*(s32 *)((char *)(var_v1) + 0x8)) + D_800BE9E4;
            (*(s32 *)((char *)(var_v1) + 0x8)) = temp_t5;
            if (temp_t5 >= temp_a2) {
                temp_v0_2 = *(&D_8008851C + temp_t7);
                temp_t5_2 = (*(s32 *)((char *)(var_v1) + 0x4)) + 1;
                (*(u32 *)((char *)(var_v1) + 0x8)) = (u32) (temp_t5 - temp_a2);
                (*(s32 *)((char *)(var_v1) + 0x4)) = temp_t5_2;
                if (temp_v0_2 != 0) {
                    (*(u32 *)((char *)(var_v1) + 0x4)) = (u32) (temp_t5_2 % temp_v0_2);
                }
            }
        }
        var_v1 += 0xC;
    } while ((char *)(var_v1) != (char *)(&D_800D3088));
}

s32 func_150A0264(s32 arg0, void *arg1) {
    s8 temp_t3;
    s8 temp_t9;
    void *temp_v1;

    temp_v1 = (arg0 * 0xC) + &D_800D3010;
    if (((u32) (*(u32 *)((char *)(temp_v1) + 0x0)) >> 0x1F) != 0) {
        return 0;
    }
    temp_t3 = (u8) (*(u8 *)((char *)(temp_v1) + 0x0)) | 0x80;
    (*(s32 *)((char *)(temp_v1) + 0x0)) = temp_t3;
    temp_t9 = temp_t3 & 0xBF;
    (*(s32 *)((char *)(temp_v1) + 0x0)) = temp_t9;
    (*(s32 *)((char *)(temp_v1) + 0x4)) = 0;
    (*(s8 *)((char *)(temp_v1) + 0x0)) = (s8) ((((*(s8 *)((char *)(arg1) + 0x4)) * 4) & 0x3C) | (temp_t9 & 0xC3));
    return 1;
}

s32 func_150A02D0(s32 arg0, s32 arg1, void *arg2) {
    u8 *temp_v1;
    u8 *temp_v1_2;

    switch (arg1) {                                 /* irregular */
    case 0:
        temp_v1 = (arg0 * 0xC) + &D_800D3010;
        *temp_v1 |= 0x40;
        return 1;
    case 1:
        temp_v1_2 = (arg0 * 0xC) + &D_800D3010;
        *temp_v1_2 &= 0xFFBF;
        return 1;
    case 2:
        *(&D_800D3014 + (arg0 * 0xC)) = (*(s32 *)((char *)(arg2) + 0x8));
        return 1;
    default:
        return 0;
    }
}

s32 func_150A0374(s32 arg0, s32 arg1, void * arg2) {
    if (arg1 == 3) {
        return *(&D_800D3014 + (arg0 * 0xC));
    }
    return 0;
}
