/**
 * Auto-decompiled from asm/E2880.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1502EA98();    /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_15107700(); /* extern */
void * func_15107B78();         /* extern */
void * func_151D2AB0();                                 /* extern */
void * func_151D2B4C();                                 /* extern */
void * memcpy();                          /* extern */
extern f32 D_8009FC20;
extern f32 D_8009FC24;
extern f32 D_8009FC28;
extern f32 D_8009FC2C;

s32 func_150B53D0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp4C;
    f32 sp48;
    f32 sp44;
    u8 sp40;
    void *sp3C;
    s16 var_v1;
    s32 temp_v0;
    s32 var_v0;

    if (arg0 == NULL) {
        return 0;
    }
    sp3C = arg0;
    sp44 = 0.0f;
    sp48 = 0.0f;
    sp40 = (*(s32 *)((char *)(arg0) + 0x3B));
    if (arg1 == -1) {
        var_v1 = 0x12C;
    } else {
        var_v1 = arg1;
    }
    if (arg1 == -1) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    temp_v0 = func_15149130(var_v1, -1, 0x24, -1, var_v0, 0x23, 0x10, (s32) arg2, arg3);
    sp4C = temp_v0;
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp3C, 0x10);
        func_151D2AB0(6);
    }
    return sp4C;
}

void func_150B54A8(void *arg0) {
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_s2;
    u32 temp_s3;
    void *temp_s1;
    void *temp_s6;

    temp_s6 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_s1 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_s6) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s1) + 0x4)) != (*(s32 *)((char *)(temp_s6) + 0x3B))) || ((*(s32 *)((char *)(temp_s6) + 0x4)) == 0xFF)) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    func_1502EA98(temp_s6, 0xFF, 0xFF, 0xFF, 0x1E, 0, 0xA);
    (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) + ((D_8009FC20 + (random_float() * D_8009FC24)) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f) {
        do {
            sp94 = 0xBA;
            sp95 = 0xD2;
            sp96 = 0xFF;
            sp97 = (random_u32() % 126U) + 0x82;
            temp_s2 = random_u32();
            temp_s0 = random_u32();
            temp_s3 = random_u32();
            func_15107700(temp_s6, (s16) (temp_s2 & 0xFF), (s16) ((temp_s0 % 101U) - 0x3F), (s16) ((temp_s3 & 0xF) + 0xF), 4, 129.0f, (random_float() * 75.0f) + 35.0f, 0, 1, &sp94, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
            (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f);
    }
    (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) + ((D_8009FC28 + (random_float() * D_8009FC2C)) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f) {
        do {
            temp_s0_2 = random_u32();
            func_15107B78(temp_s6, (s16) (temp_s0_2 & 0xFF), (s16) ((random_u32() % 101U) - 0x3F), (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
            (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0xC)) > 1.0f);
    }
}

void func_150B57C4(s32 arg0) {
    func_151D2B4C(6);
}

void func_150B57E8(s32 arg0) {
    func_150B57C4(arg0);
    func_1514933C(arg0);
}

void func_150B5814(s32 arg0) {
    func_150B57C4(arg0);
    func_15149368(arg0);
}

void func_150B5840(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(arg0) + 0x28))) || ((*(s32 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_t6, arg0);
        }
    } else {
        temp_v0 = (char *)(arg0) + 0x28;
        if (temp_t6 == 0x2D) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
            if (temp_v1 == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                return;
            }
            if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            }
        }
    }
}
