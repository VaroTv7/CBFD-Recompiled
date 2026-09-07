/**
 * Auto-decompiled from asm/12B250.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                          /* extern */
f32 random_float();                                /* extern */
void * func_15102B38(); /* extern */
void * func_15145740();                  /* extern */
void * func_15145EA4();              /* extern */
s32 func_151C229C(); /* extern */
void * func_151D3E04();                 /* extern */
void * func_151D3E6C();             /* extern */
void * func_151D3F14();                    /* extern */
void * func_151D8868();                     /* extern */
void func_150FDF38();
void func_150FE0B8();
void func_150FE288();                     /* static */
extern u8 D_80088B80;
extern s32 D_800A1F70;
extern s32 D_800A1F7C;
extern s32 D_800A1F88;
extern f32 D_800A1F94;
extern f32 D_800A1F98;
extern f32 D_800A1F9C;
extern f32 D_800A1FA0;
extern f32 D_800A1FA4;

s32 func_150FDDA0(void *arg0, s32 arg1, s32 arg2) {
    void * spB0;
    void * spA4;
    void * sp98;
    void * sp8C;
    f32 sp80;
    f32 sp7C;
    s32 var_v0;
    u32 temp_v1;

    if (arg0 == NULL) {
        return 0;
    }
    func_15145740(&sp98, &spB0, 0, 0.0f);
    func_150FDF38(arg0, arg1, arg2, &spA4, &sp8C);
    sp7C = random_float();
    sp80 = random_float();
    temp_v1 = random_u32();
    if (D_800BE9F0 == 0x2B) {
        var_v0 = 0x27;
    } else {
        var_v0 = 0x1A;
    }
    return func_151C229C(&sp8C, 0, &sp8C, &sp98, 0, 0, 300.0f, D_800A1F94, (sp7C * 10.0f) + 25.0f, (sp80 * 201.0f) + D_800A1F98, 50.0f, (temp_v1 % 56U) + 0xC8, arg0, 1, 1, 0, 0xFF, 1, 1, 0, var_v0, 0.0f, 0xFF, -1, 0, (s32) arg1, arg2);
}

void func_150FDF38(void *arg0, s32 arg1, s32 arg2, void * *arg3, void * *arg4) {
    f32 sp4C;
    f32 sp48;
    s32 sp44;
    void * sp38;
    void * *sp34;
    void * *sp30;
    void * *sp2C;
    s32 *sp28;
    void * var_a3;

    if (arg0 != NULL) {
        if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
            sp30 = &D_800A1F70;
            sp34 = &D_800A1F88;
            sp28 = &sp44;
            sp2C = &sp38;
            func_15145EA4(&sp30, &sp28, (*(s32 *)((char *)(arg0) + 0x1D4)) + (D_80088B80 << 6), 2);
        } else {
            sp44 = (*(s32 *)((char *)(arg0) + 0x14));
            sp48 = (*(s32 *)((char *)(arg0) + 0x18)) + 56.0f;
            sp4C = (*(s32 *)((char *)(arg0) + 0x1C));
            (*(s32 *)((char *)&(sp38) + 0x0)) = (s32) (*(s32 *)((char *)&(sp44) + 0x0));
            (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)&(sp44) + 0x4));
            (*(s32 *)((char *)&(sp38) + 0x8)) = (s32) (*(s32 *)((char *)&(sp44) + 0x8));
        }
        if (D_800BE9F0 == 0x2B) {
            var_a3 = 0x28;
        } else {
            var_a3 = 0x1E;
        }
        func_151D3E6C(arg0, &sp44, &sp38, var_a3);
        func_151D3F14(&sp44, arg1, arg2);
        func_150FE0B8(arg0, &sp44, arg1, arg2);
        func_150FE288(arg0);
        if (arg3 != NULL) {
            (*(s32 *)((char *)(arg3) + 0x0)) = (s32) (*(s32 *)((char *)&(sp44) + 0x0));
            (*(s32 *)((char *)(arg3) + 0x4)) = (s32) (*(s32 *)((char *)&(sp44) + 0x4));
            (*(s32 *)((char *)(arg3) + 0x8)) = (s32) (*(s32 *)((char *)&(sp44) + 0x8));
        }
        if (arg4 != NULL) {
            (*(s32 *)((char *)(arg4) + 0x0)) = (s32) (*(s32 *)((char *)&(sp38) + 0x0));
            (*(s32 *)((char *)(arg4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp38) + 0x4));
            (*(s32 *)((char *)(arg4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp38) + 0x8));
        }
    }
}

void func_150FE0B8(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    f32 sp64;
    f32 sp60;
    u8 sp5F;
    u32 sp54;
    u32 sp50;
    void *temp_v0;
    void *temp_v0_2;

    if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
        sp64 = (random_float() * 1.5f) + 2.0f;
        sp60 = (random_float() * D_800A1F9C) + D_800A1FA0;
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
        if ((temp_v0 != NULL) && ((*(s32 *)((char *)(temp_v0) + 0x197)) != 0) && (temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x318)), (temp_v0_2 != NULL))) {
            sp5F = ~(1 << (*(s32 *)((char *)(temp_v0_2) + 0x23D)));
        } else {
            sp5F = 0xFF;
        }
        sp50 = random_u32();
        sp54 = random_u32();
        func_15102B38(arg0, D_80088B80, &D_800A1F70, &D_800A1F7C, &sp60, (sp50 % 5U) + 6, (sp54 % 101U) + 0x9B, (random_float() * 199.0f) + D_800A1FA4, arg1, (s32) sp5F, 0, -1, (s32) arg2, arg3);
    }
}

void func_150FE248(void * arg1, s32 arg2) {
    func_151D3E04(arg2, &D_800A1F70, D_80088B80, 0.0f);
}

void func_150FE288(void *arg0) {
    s8 sp1E;
    s8 sp1D;
    s8 sp1C;
    s16 sp1A;
    s8 sp18;

    if ((*(s32 *)((char *)(arg0) + 0x318)) != NULL) {
        sp18 = 1;
        sp1A = (random_u32() % 9U) + 0xF;
        sp1D = 1 << (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x318))) + 0x23D));
        sp1C = (random_u32(arg0) & 3) + 3;
        sp1E = -1;
        func_151D8868(&sp18, 0, 0xFF, 1);
    }
}
