/**
 * Auto-decompiled from asm/3D2E0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *allocate_memory();                  /* extern */
u32 random_u32();                                /* extern */
void * func_150C851C();                                 /* extern */
void * func_1510C4AC();                      /* extern */
void * memcpy();                            /* extern */
extern s32 D_80088870;
extern s32 D_800902DC;
extern s32 D_800917B8;

void func_1500FE30(void) {
    s16 temp_t3_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    void *temp_t3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    temp_v0 = allocate_memory(0x64, 1, 0, 0);
    D_800BE4E0 = temp_v0;
    bzero(temp_v0, 0x64);
    var_s2 = 0;
    var_s0 = 0;
    do {
        (*(s8 *)((char *)(D_800BE4E0) + var_s0)) = (s8) (var_s2 / 5);
        (*(s32 *)((char *)((D_800BE4E0 + var_s0)) + 0x2)) = -1;
        var_s2 += 1;
        temp_t3 = D_800BE4E0 + var_s0;
        var_s0 += 0xA;
        (*(s16 *)((char *)(temp_t3) + 0x4)) = (s16) (random_u32() % 5U);
    } while (var_s2 < 0xA);
    func_150C851C(0x64);
    var_s0_2 = 0x14;
    (*(s16 *)((char *)(D_800BE4E0) + 0x6)) = (s16) (*(s16 *)((char *)(D_800BE4E0) + 0x8));
    (*(s16 *)((char *)(D_800BE4E0) + 0x10)) = (s16) (*(s16 *)((char *)(D_800BE4E0) + 0x12));
    do {
        temp_v0_2 = D_800BE4E0 + var_s0_2;
        (*(s16 *)((char *)(temp_v0_2) + 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_2) + 0x8));
        temp_v0_3 = D_800BE4E0 + var_s0_2;
        (*(s16 *)((char *)(temp_v0_3) + 0x10)) = (s16) (*(s16 *)((char *)(temp_v0_3) + 0x12));
        temp_v0_4 = D_800BE4E0 + var_s0_2;
        (*(s16 *)((char *)(temp_v0_4) + 0x1A)) = (s16) (*(s16 *)((char *)(temp_v0_4) + 0x1C));
        temp_v0_5 = D_800BE4E0 + var_s0_2;
        temp_t3_2 = (*(s32 *)((char *)(temp_v0_5) + 0x26));
        var_s0_2 += 0x28;
        (*(s32 *)((char *)(temp_v0_5) + 0x24)) = temp_t3_2;
    } while (var_s0_2 != 0x64);
}

void func_1500FF9C(void) {
    func_1510C4AC(D_800917B8, 0, 0xAD, 0x75);
}

void func_1500FFCC(void) {
    f32 sp44;
    f32 sp3C;
    f32 sp38;
    s32 temp_v0;
    s32 temp_v0_2;

    func_15195AA8(D_800B0E00, D_800902DC, 1, -1, 0, 0, 0, -4);
    func_15195AA8(D_800B0E04, D_800902DC, 1, -1, 0, 1, 0, -4);
    func_1500FE30();
    func_1500FF9C();
    sp44 = 0.0f;
    temp_v0 = func_151491F4(0x12C, -1, 0x12, 0, 0xE, 4, 0xFF, 0);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp44, 4);
    }
    sp38 = 0.0f;
    sp3C = 0.0f;
    temp_v0_2 = func_15149130(0x12C, -1, 0x17, -1, 0, 0x14, 8, 0xFF, 1);
    D_80088870 = temp_v0_2;
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2 + 0x28, &sp38, 8);
    }
}
