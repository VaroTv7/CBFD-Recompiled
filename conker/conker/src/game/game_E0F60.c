/**
 * Auto-decompiled from asm/E0F60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void * func_151429E0();                  /* extern */
void * func_15143134();           /* extern */
void * func_1514C858(); /* extern */
void * func_15156190();              /* extern */
void * func_15156388();                       /* extern */
void * func_151D3FF4();                      /* extern */
void * func_151D8868();                    /* extern */
extern s32 D_8009FBC0;
extern f32 D_8009FBCC;
extern f32 D_8009FBD0;
extern f32 D_8009FBD4;
extern f32 D_8009FBD8;
extern f32 D_8009FBDC;
extern f32 D_8009FBE0;

void func_150B3AB0(void *arg0, s32 arg1) {
    s16 sp5E;
    f32 sp50;
    s8 sp4E;
    s8 sp4D;
    s8 sp4C;
    s16 sp4A;
    s8 sp48;

    f32 sp54;
    f32 sp58;
    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0)) {
        func_1512D748((D_800BE9E8 * 0x9A0) + D_800DBFF0, 6, 1, arg0);
        sp5E = ((s32) (*(s32 *)((char *)(arg0) + 0x7A)) >> 8) + 0x40;
        func_15143134(&D_8009FBC0, &sp50, (*(s32 *)((char *)(arg0) + 0x1D4)) + 0x640, arg0);
        func_1514C858(sp50, sp54, sp58, 0x41200000, (s32) sp5E, 0, 0xFF, (random_u32() % 31U) + 0x28, 8, 0, 0.0f, 0, (s32) arg1);
        sp48 = 1;
        sp4A = (random_u32() & 0xF) + 0xC;
        sp4C = (random_u32() & 3) + 5;
        sp4E = -1;
        sp4D = 1;
        func_151D8868(&sp48, 0, arg1, 0);
        func_151D3FF4(&sp50, arg1, 0);
    }
}

s32 func_150B3C0C(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg8, s32 arg9, u8 arg14) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s16 sp5C;
    s16 sp5A;
    s8 sp58;
    f32 sp54;
    s16 sp50;
    s16 sp4E;
    s8 sp4C;
    s8 sp4B;
    void * sp4A;
    void * sp49;
    void * sp48;
    s8 sp47;
    void * sp46;
    void * sp45;
    void * sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f2;
    f32 temp_f8;

    sp6C = func_151423D8((arg9 - 0x40) & 0xFF);
    sp68 = func_151423D8((u8) arg9);
    sp64 = func_151423D8((arg8 - 0x40) & 0xFF);
    temp_f2 = 10.0f * func_151423D8((u8) arg8);
    sp24 = arg2;
    sp28 = arg3;
    sp2C = arg4;
    sp30 = temp_f2 * sp6C;
    sp34 = -10.0f * sp64;
    sp38 = temp_f2 * sp68;
    sp3C = (random_float() * D_8009FBCC) + D_8009FBD0;
    sp40 = (random_float() * D_8009FBD4) + D_8009FBD8;
    func_151429E0(8, &sp44, &sp45, &sp46);
    func_151429E0(8, &sp48, &sp49, &sp4A);
    sp47 = 0xFF;
    sp4B = 0xFF;
    sp4C = 9;
    sp4E = (random_u32() & 0xF) + 0xF;
    temp_f8 = random_float() * D_8009FBDC;
    sp50 = 0x1601;
    sp58 = 0xFF;
    sp5A = 0xA;
    sp5C = 0x19;
    sp54 = temp_f8 + D_8009FBE0;
    func_15156190(&sp24, 1, 0, arg14, 1);
    func_15156388(&sp24, 1, 0);
    return 1;
}
