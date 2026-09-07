/**
 * Auto-decompiled from asm/1E2180.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                        /* extern */
f32 random_float();                        /* extern */
s32 func_15134070();                  /* extern */
s32 func_1513418C();               /* extern */
void * func_1516962C();              /* extern */
void * func_151D9014(); /* extern */
void * memcpy();                             /* extern */
void func_151B4EA4(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, u8 arg5);
void func_151B50F4(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4);
extern s32 D_800A3FE6;
extern f32 D_800AA3D0;
extern f32 D_800AA3D4;
extern f32 D_800AA3D8;
extern f32 D_800AA3DC;
extern f32 D_800AA3E0;
extern f32 D_800AA3E4;
extern f32 D_800AA3E8;
extern f32 D_800AA3EC;
extern f32 D_800AA3F0;
extern f32 D_800AA3F4;

s32 func_151B4CD0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp54;
    s8 sp51;
    s8 sp50;
    s8 sp4F;
    s8 sp4E;
    s16 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s8 sp34;
    void *sp30;
    u8 sp2C;
    s32 sp28;
    s32 sp24;
    s8 sp20;
    s32 sp1C;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    if (arg0 == NULL) {
        return 0;
    }
    temp_v0 = func_15134070(arg0, arg0);
    sp1C = temp_v0;
    if (temp_v0 == 0x63) {
        return 0;
    }
    if (*(&D_800A3FE6 + (temp_v0 * 0x10)) == 2) {
        return 0;
    }
    func_1516962C(0x28, arg0, 0x16, arg0);
    sp24 = 0;
    sp28 = 0;
    sp34 = 2;
    sp4E = 6;
    sp30 = arg0;
    sp2C = (*(s32 *)((char *)(arg0) + 0x3B));
    sp3C = -27.0f;
    sp40 = 16.0f;
    sp44 = 15.0f;
    sp38 = 0.0f;
    sp48 = D_800AA3D0;
    sp4C = (random_u32() % 21U) + 0x28;
    sp4F = 8;
    sp50 = -1;
    sp51 = 7;
    if (*(&D_800A3FE6 + (sp1C * 0x10)) == 1) {
        sp20 = 1;
    } else {
        sp20 = 0;
    }
    temp_v0_2 = func_1513418C(&sp24, 1, arg1, arg2);
    var_v1 = temp_v0_2;
    if (temp_v0_2 != 0) {
        sp54 = temp_v0_2;
        memcpy(temp_v0_2 + 0x58, &sp20, 1);
        var_v1 = sp54;
    }
    return var_v1;
}

void func_151B4E4C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;

    sp24 = arg0;
    sp28 = arg1;
    sp2C = arg2;
    func_151B4EA4(&sp24, arg3, arg4, arg5, (s32) (*(s32 *)((char *)(arg6) + 0x58)), (s32) (*(s32 *)((char *)(arg6) + 0xC)));
}

void func_151B4EA4(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, u8 arg5) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp58;
    u32 sp54;
    u32 sp50;
    f32 sp4C;

    sp60 = -arg1 * D_800AA3D4;
    sp64 = -arg2 * D_800AA3D4;
    sp68 = -arg3 * D_800AA3D4;
    sp4C = random_float(arg1, arg2);
    sp50 = random_u32();
    sp54 = random_u32();
    sp58 = random_float();
    func_151D9014(arg0, &sp60, arg4, (sp4C * D_800AA3DC) + -1.0f, (sp50 % 31U) + 0x14, (sp54 % 101U) + 0x9B, (sp58 * 152.0f) + 109.0f, random_u32() & 1, D_800AA3D8, D_800AA3D8, 0, 0, 1, 0, (s32) arg5, 1);
}

s32 func_151B4FE0(void *arg0, s32 arg1, s32 arg2) {
    s8 sp49;
    s8 sp48;
    s8 sp47;
    s8 sp46;
    s16 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s8 sp2C;
    void *sp28;
    u8 sp24;
    s32 sp20;
    s32 sp1C;

    if (arg0 == NULL) {
        return 0;
    }
    sp1C = 0;
    sp20 = 0;
    sp2C = 2;
    sp46 = 2;
    sp44 = 0x12C;
    sp47 = 9;
    sp48 = -1;
    sp49 = 8;
    sp28 = arg0;
    sp24 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp34 = -27.0f;
    sp38 = 16.0f;
    sp3C = D_800AA3E0;
    sp30 = 0.0f;
    sp40 = D_800AA3E4;
    return func_1513418C(&sp1C, 0, arg1, arg2);
}

void func_151B50A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;

    sp24 = arg0;
    sp28 = arg1;
    sp2C = arg2;
    func_151B50F4(&sp24, arg3, arg4, arg5, (s32) (*(s32 *)((char *)(arg6) + 0xC)));
}

void func_151B50F4(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    u8 sp5F;
    u32 sp54;
    u32 sp50;
    f32 sp4C;

    sp60 = -arg1 * D_800AA3E8;
    sp64 = -arg2 * D_800AA3E8;
    sp68 = -arg3 * D_800AA3E8;
    if (random_u32(arg1, arg2) & 1) {
        sp5F = 1;
    } else {
        sp5F = 0;
    }
    sp4C = random_float();
    sp50 = random_u32();
    sp54 = random_u32();
    func_151D9014(arg0, &sp60, 0U, (sp4C * D_800AA3F0) + D_800AA3F4, (sp50 & 0xF) + 0xA, (sp54 % 45U) + 0x89, (random_float() * 202.0f) + 142.0f, (s32) sp5F, D_800AA3EC, D_800AA3EC, 0, 0, 1, 0, (s32) arg4, 1);
}
