/**
 * Auto-decompiled from asm/FDD70.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150495B0();      /* extern */
void * func_1507CD64();                            /* extern */
s32 func_1509BE40();                      /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                        /* extern */
s32 func_151149AC();                             /* extern */
void * func_15134DAC();                           /* extern */
void * func_15136C3C();  /* extern */
void * func_151951E0();                               /* extern */
void * func_151DB5D0(); /* extern */
extern s32 D_80088890;
extern s32 D_80088894;
extern s32 D_80088898;
extern s32 D_8008889C;
extern f32 D_800888C0;
extern f32 D_800888C4;
extern f32 D_800888C8;
extern s32 D_800888CC;
extern s32 D_800888D0;
extern s32 D_800888D4;
extern s32 D_800888D8;
extern s32 D_800888DC;
extern s32 D_800888E0;
extern f32 D_800A0890;
extern f32 D_800A0894;
extern f32 D_800A0898;
extern f32 D_800A089C;
extern f32 D_800A08A0;
extern f32 D_800A08A4;
extern s32 D_800DBF94;

void func_150D08C0(void *arg0) {
    s32 temp_t9;

    if (func_1509BE40(1, 0x403D, 6, 0x9000) != 0) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80021000);
        if (func_1509BE40(1, 0x4043, 6, 0x9000) != 0) {
            D_800888CC = 0x42800000;
            D_800888D0 = 0x437F0000;
            D_800888D4 = 0x437F0000;
        } else if (func_1509BE40(1, 0x4044, 6, 0x9000) != 0) {
            D_800888CC = 0x437F0000;
            D_800888D0 = 0x42800000;
            D_800888D4 = 0x437F0000;
        } else if (func_1509BE40(1, 0x4045, 6, 0x9000) != 0) {
            D_800888CC = 0x437F0000;
            D_800888D0 = 0x437F0000;
            D_800888D4 = 0x42800000;
        } else {
            D_800888CC = 0x437F0000;
            D_800888D0 = 0x437F0000;
            D_800888D4 = 0x437F0000;
        }
    } else {
        D_800888CC = 0x437F0000;
        D_800888D0 = 0x437F0000;
        D_800888D4 = 0x437F0000;
        temp_t9 = (*(s32 *)((char *)(arg0) + 0x84)) & 0x7FFDEFFF;
        (*(s32 *)((char *)(arg0) + 0x84)) = temp_t9;
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t9 | 8);
    }
    func_150495B0(&D_800888C0, D_800888CC, &D_800888D8, 0x40800000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
    func_150495B0(&D_800888C4, D_800888D0, &D_800888DC, 0x40800000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
    func_150495B0(&D_800888C8, D_800888D4, &D_800888E0, 0x40800000, 6.0f, (*(s32 *)((char *)(arg0) + 0x7B4)));
    func_1509BFB0(1, 0x30F5, 0x12, (u32) D_800888C0 & 0xFF);
    func_1509BFB0(1, 0x30F4, 0x12, (u32) D_800888C4 & 0xFF);
    func_1509BFB0(1, 0x30F3, 0x12, (u32) D_800888C8 & 0xFF);
    func_1509BFB0(1, 0x30FA, 0x12, (u32) D_800888C0 & 0xFF);
    func_1509BFB0(1, 0x30F9, 0x12, (u32) D_800888C4 & 0xFF);
    func_1509BFB0(1, 0x30F8, 0x12, (u32) D_800888C8 & 0xFF);
}

void func_150D0E90(s32 arg0) {
    s32 var_s0;

    D_80088890 += D_800BE9E4 * 0x28;
    D_80088894 += D_800BE9E4 * -0x42;
    D_80088898 += D_800BE9E4 * -8;
    D_8008889C += D_800BE9E4 * 0x5C;
    var_s0 = 0;
    if (gObjects[0].unk31C->unk120 == 0) {
        do {
            if ((*(s32 *)((char *)(D_800DBF94) + (((s32) ((char *)(func_151149AC((0xFA - var_s0) & 0xFF)) - (char *)(D_800DBEF4)) / 160) * 4))) & 1) {
                func_151951E0(&gObjects);
                func_10010154(0x627, &gObjects, 0x7FFF, 0xC8, 0x2BC);
            }
            var_s0 += 1;
        } while (var_s0 != 3);
        if ((*(s32 *)((char *)(D_800DBF94) + (((s32) ((char *)(func_151149AC(0xFB)) - (char *)(D_800DBEF4)) / 160) * 4))) & 1) {
            func_10010154(0x627, &gObjects, 0x7FFF, 0xC8, 0x2BC);
            func_15136C3C(&gObjects, 1, 1, 1, 1, 0, 0xFF, 1);
            func_15145A50(&gObjects);
            func_1507CD64(&gObjects, 6);
        }
    }
}

void func_150D10E4(void *arg0, s32 arg1) {
    s8 sp55;
    s8 sp54;
    f32 sp50;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    s16 sp48;
    s16 sp46;
    s16 sp44;
    s16 sp42;
    s8 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s8 sp24;
    void *sp20;
    u8 sp1C;

    sp20 = arg0;
    sp24 = 0;
    sp28 = 0.0f;
    sp2C = 0.0f;
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
    if (arg1 & 0xFF) {
        sp38 = -30.0f;
    } else {
        sp38 = 30.0f;
    }
    sp3C = 0.0f;
    sp40 = 2;
    sp42 = 0x32;
    sp44 = 0x16;
    sp46 = 0x7D0;
    sp48 = 0;
    sp4A = 6;
    sp4B = 7;
    sp4C = -1;
    sp54 = 0;
    sp55 = -1;
    sp50 = D_800A0890;
    func_15134DAC(&sp1C, 0);
}

s32 func_150D11B4(void *arg0) {
    (*(f32 *)((char *)(arg0) + 0x74)) = (f32) (((random_float() * 150.0f) + 350.0f) * D_800A0894);
    return 1;
}

void func_150D1204(void *arg0, void *arg1, void *arg2, void *arg3, f32 arg4, void *arg5) {
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    u32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f4;

    sp6C = (*(s32 *)((char *)(arg0) + 0x0)) + ((*(s32 *)((char *)(arg2) + 0x0)) * arg4);
    temp_f4 = (*(s32 *)((char *)(arg0) + 0x4)) + ((*(s32 *)((char *)(arg2) + 0x4)) * arg4);
    sp70 = temp_f4;
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x8)) + ((*(s32 *)((char *)(arg2) + 0x8)) * arg4);
    sp74 = temp_f16;
    temp_f14 = (*(s32 *)((char *)(arg1) + 0x8)) + ((*(s32 *)((char *)(arg3) + 0x8)) * arg4);
    sp54 = (((*(s32 *)((char *)(arg1) + 0x0)) + ((*(s32 *)((char *)(arg3) + 0x0)) * arg4)) - sp6C) * (*(s32 *)((char *)(arg5) + 0x74));
    sp58 = (((*(s32 *)((char *)(arg1) + 0x4)) + ((*(s32 *)((char *)(arg3) + 0x4)) * arg4)) - temp_f4) * (*(s32 *)((char *)(arg5) + 0x74));
    sp5C = (temp_f14 - temp_f16) * (*(s32 *)((char *)(arg5) + 0x74));
    sp44 = random_float(arg4, temp_f14);
    sp48 = random_float();
    sp4C = random_u32();
    func_151DB5D0(0, &sp6C, &sp54, (sp44 * 61.0f) + 60.0f, D_800A0898, D_800A089C, (sp48 * D_800A08A0) + D_800A08A4, (sp4C & 0xF) + 0x23, (random_u32() % 156U) + 0x64, 0x1E, 8, 0, (s32) (*(s32 *)((char *)(arg5) + 0xC)), (s32) (*(s32 *)((char *)(arg5) + 0x1)));
}
