/**
 * Auto-decompiled from asm/63A20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *func_15094F70(); /* extern */
void * func_150A7960(); /* extern */
void *func_1515E544();      /* extern */
extern s32 D_80084350;
extern s32 D_80089470;
extern s32 D_800903BC;
extern f32 D_80097D80;
void func_15036570();

void func_15036570(s32 arg0, s32 arg1, s32 arg2) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    void *sp44;
    f32 sp30;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;
    f32 var_f16;
    u16 temp_v1;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = (arg0 * 0x32C) + &gObjects;
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x84));
    temp_t0 = *(&D_800C3FC0 + (arg0 * 4));
    temp_f0 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x2D0))) + 0x8));
    if ((temp_v1 == 0x3E) || (temp_v1 == 0x41) || ((temp_v1 == 0x138) && (temp_f0 >= 36.0f)) || (((temp_v1 == 0x3D) || (temp_v1 == 0xD9)) && (temp_f0 > 21.0f))) {
        sp44 = temp_t0;
        func_150A7960(arg1, -7.0f, -17.0f, -7.0f, &sp5C, &sp58, &sp54);
        temp_v0_2 = (arg0 * 6) + &D_800C3FC4;
        (*(s16 *)((char *)(temp_v0_2) + 0x0)) = (s16) (s32) sp5C;
        (*(s16 *)((char *)(temp_v0_2) + 0x2)) = (s16) (s32) sp58;
        (*(s16 *)((char *)(temp_v0_2) + 0x4)) = (s16) (s32) sp54;
    } else {
        if ((((temp_v1 == 0x3D) || (temp_v1 == 0xD9)) && (temp_f0 > 7.0f)) || (temp_v1 == 0x138) || (temp_v1 == 0x139)) {
            var_f16 = 1.0f;
        } else {
            var_f16 = D_80097D80;
        }
        temp_f6 = (f32) ((*(f32 *)((char *)(temp_t0) + 0x30)) + (*(f32 *)((char *)(temp_t0) + 0x20))) * 0.5f;
        sp5C = temp_f6;
        temp_f18 = (f32) ((*(f32 *)((char *)(temp_t0) + 0x32)) + (*(f32 *)((char *)(temp_t0) + 0x22))) * 0.5f;
        sp58 = temp_f18;
        sp30 = var_f16;
        sp44 = temp_t0;
        temp_f10 = (f32) ((*(f32 *)((char *)(temp_t0) + 0x34)) + (*(f32 *)((char *)(temp_t0) + 0x24))) * 0.5f;
        sp54 = temp_f10;
        func_150A7960(arg2, temp_f6, temp_f18, temp_f10, &sp50, &sp4C, &sp48);
        temp_v0_3 = (arg0 * 6) + &D_800C3FC4;
        temp_f12 = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x0));
        temp_f14 = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x2));
        temp_f2 = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x4));
        (*(s16 *)((char *)(temp_v0_3) + 0x0)) = (s16) (s32) (temp_f12 + ((sp50 - temp_f12) * sp30));
        (*(s16 *)((char *)(temp_v0_3) + 0x2)) = (s16) (s32) (temp_f14 + ((sp4C - temp_f14) * sp30));
        (*(s16 *)((char *)(temp_v0_3) + 0x4)) = (s16) (s32) (temp_f2 + ((sp48 - temp_f2) * sp30));
        sp5C = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x0));
        sp58 = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x2));
        sp54 = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x4));
    }
    (*(s16 *)(sp44)) = (s16) (s32) sp5C;
    (*(s16 *)((char *)(sp44) + 0x2)) = (s16) (s32) sp58;
    (*(s16 *)((char *)(sp44) + 0x4)) = (s16) (s32) sp54;
}

void *func_150368C4(void *arg0, s32 arg1, s32 arg2) {
    void *sp78;
    void **sp3C;
    s32 sp38;
    s32 temp_a2;
    s32 temp_t2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    u8 temp_v0_2;
    void **temp_t0;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_6;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s1;

    temp_s0 = (arg1 * 0x32C) + &gObjects;
    temp_v0_2 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x31C))) + 0x75));
    if ((temp_v0_2 != 2) && (temp_v0_2 != 0x13)) {
        return arg0;
    }
    temp_v0_3 = func_1503195C(temp_s0, 8, 0, arg1);
    sp78 = temp_v0_3;
    if (temp_v0_3 == NULL) {
        return arg0;
    }
    if (arg1 > 0) {
        return arg0;
    }
    temp_v1 = (*(s32 *)((char *)(((char *)(temp_v0_3) + (D_800BE9C0 * 4))) + 0x28));
    temp_t0 = (arg1 * 4) + &D_800C3FC0;
    temp_v0_4 = 1 * 0x10;
    (*(u8 *)((char *)((*temp_t0)) + 0xC)) = (u8) (*(u8 *)((char *)(temp_v1) + 0x30C));
    temp_v1_2 = (char *)(temp_v1) + 0x300;
    (*(u8 *)((char *)((*temp_t0)) + 0xD)) = (u8) (*(u8 *)((char *)(temp_v1) + 0x30D));
    (*(u8 *)((char *)((*temp_t0)) + 0xE)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xE));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0xC)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xC));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0xD)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xD));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0xE)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xE));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0x1C)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xC));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0x1D)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xD));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0x1E)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xE));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0x2C)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xC));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0x2D)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xD));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0x2E)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xE));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0x3C)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xC));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0x3D)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xD));
    (*(u8 *)((char *)((*(char *)(temp_t0) + temp_v0_4)) + 0x3E)) = (u8) (*(u8 *)((char *)(temp_v1_2) + 0xE));
    temp_v0_5 = (*(s32 *)((char *)(temp_s0) + 0x1D4));
    if (temp_v0_5 == 0) {
        return arg0;
    }
    temp_a2 = temp_v0_5 + 0x100;
    sp38 = temp_a2;
    sp3C = temp_t0;
    func_15036570(arg1, temp_v0_5 + 0x240, temp_a2);
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDE000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = &D_80084350;
    temp_v0_6 = func_1515E544((char *)(arg0) + 8, (*(s32 *)((char *)(((char *)(temp_s0) + (arg2 * 4))) + 0x304)), (*(s32 *)((char *)(temp_s0) + 0x301)), (*(s32 *)((char *)(temp_s0) + 0x302)), (*(s32 *)((char *)(temp_s0) + 0x314)) + (D_800BE9C0 * 8));
    temp_t2 = (*(s32 *)((char *)(temp_s0) + 0x66)) & 0xC;
    if (temp_t2 == 0xC) {
        (*(s32 *)((char *)(temp_v0_6) + 0x0)) = 0xD9FDFFFF;
        var_s1 = (char *)(temp_v0_6) + 8;
        (*(s32 *)((char *)(temp_v0_6) + 0x4)) = 0;
    } else if ((temp_t2 != 8) && (var_s1 = (char *)(temp_v0_6) + 8, (((*(s32 *)((char *)(sp78) + 0x4)) & 1) == 0))) {
        (*(s32 *)((char *)(temp_v0_6) + 0x0)) = 0xD9FDFFFF;
        (*(s32 *)((char *)(temp_v0_6) + 0x4)) = 0;
    } else {
        var_s1 = (char *)(temp_v0_6) + 8;
        if (D_800DCD7C != 0) {
            (*(s32 *)((char *)(temp_v0_6) + 0x4)) = 0x20000;
            (*(s32 *)((char *)(temp_v0_6) + 0x0)) = 0xD9FFFFFF;
            var_s1 = (char *)(temp_v0_6) + 8;
        } else {
            (*(s32 *)((char *)(temp_v0_6) + 0x0)) = 0xD9FDFFFF;
            (*(s32 *)((char *)(temp_v0_6) + 0x4)) = 0;
        }
    }
    sp3C = temp_t0;
    temp_v0 = func_15094F70(var_s1, &D_800903BC, 0, 0, 0, 0, 0, 2, 3);
    (*(s32 *)((char *)(temp_v0) + 0x4)) = &D_80089470;
    (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xDA380003;
    (*(s32 *)((char *)(temp_v0) + 0x8)) = 0x01001002;
    (*(s32 *)((char *)(temp_v0) + 0xC)) = (void *) *temp_t0;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = 0xDA380003;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = sp38;
    (*(s32 *)((char *)(temp_v0) + 0x18)) = 0x0100400A;
    (*(s32 *)((char *)(temp_v0) + 0x1C)) = (void *) (*(char *)(temp_t0) + 0x10);
    (*(s32 *)((char *)(temp_v0) + 0x20)) = 0x05000204;
    (*(s32 *)((char *)(temp_v0) + 0x24)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x28)) = 0x05000608;
    (*(s32 *)((char *)(temp_v0) + 0x2C)) = 0;
    return (char *)(temp_v0) + 0x30;
}
