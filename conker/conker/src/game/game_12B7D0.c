/**
 * Auto-decompiled from asm/12B7D0.s (non-matching)
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
void func_150FE49C();
void func_150FE604();
void func_150FE7D4();                     /* static */
extern u8 D_80088B94;
extern s32 D_800A1FC8;
extern s32 D_800A1FD4;
extern s32 D_800A1FE0;
extern f32 D_800A1FEC;
extern f32 D_800A1FF0;
extern f32 D_800A1FF4;

s32 func_150FE320(void *arg0, s32 arg1, s32 arg2) {
    void * spA8;
    void * sp9C;
    void * sp90;
    void * sp84;
    f32 sp7C;
    f32 sp78;

    if (arg0 == NULL) {
        return 0;
    }
    func_15145740(&sp84, &spA8, 0, 0.0f);
    func_150FE49C(arg0, arg1, arg2, &sp9C, &sp90);
    sp78 = random_float();
    sp7C = random_float();
    return func_151C229C(&sp90, &sp84, 0, 0, 0, 0, 300.0f, D_800A1FEC, (sp78 * 10.0f) + 25.0f, (sp7C * 200.0f) + 600.0f, 50.0f, (random_u32() % 56U) + 0xC8, arg0, 1, 1, 0, 0xFF, 1, 1, 0, 0x23, 0.0f, 0xFF, -1, 0, (s32) arg1, arg2);
}

void func_150FE49C(void *arg0, s32 arg1, s32 arg2, void * *arg3, void * *arg4) {
    f32 sp44;
    f32 sp40;
    s32 sp3C;
    void * sp30;
    void * *sp2C;
    void * *sp28;
    void * *sp24;
    s32 *sp20;

    if (arg0 != NULL) {
        if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
            sp28 = &D_800A1FC8;
            sp2C = &D_800A1FD4;
            sp20 = &sp3C;
            sp24 = &sp30;
            func_15145EA4(&sp28, &sp20, (*(s32 *)((char *)(arg0) + 0x1D4)) + (D_80088B94 << 6), 2);
        } else {
            sp3C = (*(s32 *)((char *)(arg0) + 0x14));
            sp40 = (*(s32 *)((char *)(arg0) + 0x18)) + 70.0f;
            sp44 = (*(s32 *)((char *)(arg0) + 0x1C));
            (*(s32 *)((char *)&(sp30) + 0x0)) = (s32) (*(s32 *)((char *)&(sp3C) + 0x0));
            (*(s32 *)((char *)&(sp30) + 0x4)) = (s32) (*(s32 *)((char *)&(sp3C) + 0x4));
            (*(s32 *)((char *)&(sp30) + 0x8)) = (s32) (*(s32 *)((char *)&(sp3C) + 0x8));
        }
        func_151D3E6C(arg0, &sp3C, &sp30, 0x23);
        func_151D3F14(&sp3C, arg1, arg2);
        func_150FE604(arg0, &sp3C, arg1, arg2);
        func_150FE7D4(arg0);
        if (arg3 != NULL) {
            (*(s32 *)((char *)(arg3) + 0x0)) = (s32) (*(s32 *)((char *)&(sp3C) + 0x0));
            (*(s32 *)((char *)(arg3) + 0x4)) = (s32) (*(s32 *)((char *)&(sp3C) + 0x4));
            (*(s32 *)((char *)(arg3) + 0x8)) = (s32) (*(s32 *)((char *)&(sp3C) + 0x8));
        }
        if (arg4 != NULL) {
            (*(s32 *)((char *)(arg4) + 0x0)) = (s32) (*(s32 *)((char *)&(sp30) + 0x0));
            (*(s32 *)((char *)(arg4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp30) + 0x4));
            (*(s32 *)((char *)(arg4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp30) + 0x8));
        }
    }
}

void func_150FE604(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    f32 sp64;
    f32 sp60;
    u8 sp5F;
    u32 sp54;
    u32 sp50;
    void *temp_v0;
    void *temp_v0_2;

    if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
        sp64 = (random_float() * 2.0f) + D_800A1FF0;
        sp60 = (random_float() * 15.0f) + 35.0f;
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
        if ((temp_v0 != NULL) && ((*(s32 *)((char *)(temp_v0) + 0x197)) != 0) && (temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x318)), (temp_v0_2 != NULL))) {
            sp5F = ~(1 << (*(s32 *)((char *)(temp_v0_2) + 0x23D)));
        } else {
            sp5F = 0xFF;
        }
        sp50 = random_u32();
        sp54 = random_u32();
        func_15102B38(arg0, D_80088B94, &D_800A1FC8, &D_800A1FE0, &sp60, (sp50 % 3U) + 4, (sp54 % 56U) + 0xC8, (random_float() * D_800A1FF4) + 500.0f, arg1, (s32) sp5F, 0, -1, (s32) arg2, arg3);
    }
}

void func_150FE794(void * arg1, s32 arg2) {
    func_151D3E04(arg2, &D_800A1FC8, D_80088B94, 0.0f);
}

void func_150FE7D4(void *arg0) {
    s8 sp1E;
    s8 sp1D;
    s8 sp1C;
    s16 sp1A;
    s8 sp18;

    if ((*(s32 *)((char *)(arg0) + 0x318)) != NULL) {
        sp18 = 1;
        sp1A = (random_u32() % 13U) + 0x14;
        sp1D = 1 << (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x318))) + 0x23D));
        random_u32(arg0);
        sp1C = 8;
        sp1E = -1;
        func_151D8868(&sp18, 0, 0xFF, 1);
    }
}
