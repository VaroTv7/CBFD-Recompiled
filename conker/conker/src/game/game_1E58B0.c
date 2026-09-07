/**
 * Auto-decompiled from asm/1E58B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
f32 random_float();                          /* extern */
void * func_15130280();          /* extern */
void * func_15134908();                   /* extern */
void * func_1513FA70();                               /* extern */
void * func_15143794();              /* extern */
void * func_151A26EC(); /* extern */
void * memcpy();                          /* extern */
extern s32 D_800AA490;
extern s32 D_800AA4B8;
extern f32 D_800AA4C8;
extern f32 D_800AA4CC;
extern f32 D_800AA4D0;
extern f32 D_800AA4D4;
extern f32 D_800AA4D8;
extern f32 D_800DCA24;

s32 func_151B8400(void *arg0) {
    void *spA8;
    s16 spA6;
    s16 spA4;
    s32 spA0;
    s8 sp9C;
    s32 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    void * sp78;
    void * sp6C;
    f32 sp68;
    f32 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s32 sp5C;
    s32 sp58;
    s16 sp54;
    s16 sp52;
    s8 sp51;
    s8 sp50;
    void * sp44;
    s32 temp_v0;

    spA8 = arg0;
    sp50 = 0xFF;
    sp51 = 0;
    sp52 = 0x5901;
    sp54 = 0x32;
    sp58 = 0;
    sp5C = 0;
    sp60 = 0xFF;
    sp61 = 0xE6;
    sp62 = 0xB6;
    sp63 = 0xFF;
    sp64 = 9.0f;
    sp68 = 1.0f;
    (*(s32 *)((char *)&(sp44) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x38));
    (*(s32 *)((char *)&(sp44) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x3C));
    (*(s32 *)((char *)&(sp44) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x40));
    (*(s32 *)((char *)&(sp78) + 0x0)) = (s32) (*(s32 *)((char *)&(sp44) + 0x0));
    (*(s32 *)((char *)&(sp78) + 0x4)) = (s32) (*(s32 *)((char *)&(sp44) + 0x4));
    (*(s32 *)((char *)&(sp78) + 0x8)) = (s32) (*(s32 *)((char *)&(sp44) + 0x8));
    (*(s32 *)((char *)&(sp6C) + 0x0)) = (s32) (*(s32 *)((char *)&(sp44) + 0x0));
    (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp44) + 0x4));
    (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp44) + 0x8));
    sp84 = (*(s32 *)((char *)(arg0) + 0x44)) * 0.25f;
    sp88 = (*(s32 *)((char *)(arg0) + 0x48)) * 0.25f;
    sp90 = 0x0CCC0000;
    sp94 = 0xC8;
    sp95 = 0xFF;
    sp96 = 0;
    sp97 = 6;
    sp98 = 0;
    sp9C = 0xFF;
    spA0 = 0;
    sp8C = (*(s32 *)((char *)(arg0) + 0x4C)) * 0.25f;
    spA4 = 0x32;
    spA6 = 5;
    temp_v0 = func_1513D2F0(&sp50, &D_800AA490, 0x1B, 0, 0, 0x19, 0, 0, 0, 4, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x110, &spA8, 4);
    }
    return temp_v0;
}

s32 func_151B85AC(void *arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x110));
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(arg0) + 0x34)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x38));
        (*(s32 *)((char *)(arg0) + 0x38)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x3C));
        (*(s32 *)((char *)(arg0) + 0x3C)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x40));
        (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
    } else {
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 1);
    }
    return 1;
}

void func_151B863C( s32 arg1) {
    func_1513FA70(arg1);
}

void func_151B8668(s32 arg0, s32 arg1, void * arg2) {
    s8 sp30;
    s8 sp2F;
    s8 sp2E;
    s16 sp2C;
    f32 sp28;
    f32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;

    sp18 = arg0 + 0x38;
    sp1C = arg0 + 0x3C;
    sp20 = arg0 + 0x40;
    sp28 = D_800AA4C8 * D_800DCA24;
    sp2C = 0x12C;
    sp2E = 0;
    sp2F = 3;
    sp30 = 0;
    sp24 = 10.0f;
    func_15134908(&sp18, 0, arg1, arg2);
}

void func_151B86F4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp64;
    u32 sp60;
    u32 sp5C;
    f32 sp58;
    f32 temp_f2;
    f32 temp_f8;

    sp84 = arg0;
    sp88 = arg1;
    sp8C = arg2;
    sp5C = random_u32();
    sp60 = random_u32();
    func_15143794((s16) (sp5C & 0xFF), (s16) ((sp60 % 65U) - 0x20), random_float() * D_800AA4CC * D_800AA4D0, &sp78);
    temp_f8 = (random_float() * 157.0f) + 604.0f;
    sp6C = 0.0f;
    sp70 = 0.0f;
    temp_f2 = temp_f8 * D_800AA4D4;
    sp74 = 0.0f;
    sp78 += -arg3 * D_800BE9A8 * temp_f2;
    sp7C += -arg4 * D_800BE9A8 * temp_f2;
    sp80 += -arg5 * D_800BE9A8 * temp_f2;
    sp58 = random_float(D_800BE9A8, 0);
    sp64 = random_float();
    sp5C = random_u32();
    func_151A26EC(&sp84, &sp6C, &sp78, 0x3F800000, ((sp58 * 157.0f) + -151.0f) * D_800AA4D8, (sp64 * 55.0f) + 75.0f, (sp5C % 26U) + 0x19, (random_u32() % 101U) + 0x64, 0xA, 0x19, 0, -1, 0, 0, 0, (s32) (*(s32 *)((char *)(arg6) + 0xC)), (s32) (*(s32 *)((char *)(arg6) + 0x1)));
}

void func_151B8908(void *arg0) {
    void *sp;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s8 sp9F;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s32 sp98;
    s32 sp94;
    f32 sp90;
    void * sp84;
    void * sp78;
    void * sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    s16 sp5E;
    s16 sp5C;
    s16 sp5A;
    s8 sp59;
    s8 sp58;
    s8 sp57;
    s8 sp56;
    s8 sp55;
    s8 sp54;
    s8 sp53;
    s8 sp52;
    s8 sp51;
    s8 sp50;
    s32 sp4C;
    s32 sp48;
    s16 sp46;
    s16 sp44;
    s32 sp40;
    s32 sp3C;
    void * sp2C;
    s32 sp24;
    f32 temp_f10;
    s32 temp_t3;
    s32 var_v0;
    s32 var_v1;

    (*(s32 *)((char *)&(sp2C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA4B8) + 0x0));
    (*(s32 *)((char *)&(sp2C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA4B8) + 0x4));
    (*(s32 *)((char *)&(sp2C) + 0xC)) = (s32) (*(s32 *)((char *)&(D_800AA4B8) + 0xC));
    (*(s32 *)((char *)&(sp2C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA4B8) + 0x8));
    temp_t3 = (*(s32 *)((char *)(((char *)(sp) + ((random_u32() & 3) * 4))) + 0x2C));
    sp44 = 0x1303;
    sp3C = 0x200005;
    sp59 = (s8) temp_t3;
    sp40 = 0;
    sp46 = 0x12C;
    sp48 = 0;
    sp4C = 0;
    sp50 = 0xFF;
    sp51 = 0xFF;
    sp52 = 0xFF;
    sp53 = 0xFF;
    sp54 = 0xFF;
    sp55 = 0xFF;
    sp56 = 0xFF;
    sp57 = 0xFF;
    sp58 = 0xFF;
    temp_f10 = (random_float() * 500.0f) + 900.0f;
    sp68 = temp_f10;
    sp64 = temp_f10;
    (*(s32 *)((char *)&(sp6C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x38));
    (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x3C));
    (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x40));
    (*(s32 *)((char *)&(sp78) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp78) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp78) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    (*(s32 *)((char *)&(sp84) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp5A = 1;
    sp5C = 0xFF;
    sp5E = 1;
    sp90 = 0.0f;
    sp60 = 1.0f;
    var_v1 = 0;
    if (random_u32() & 1) {
        var_v1 = 0x40;
    }
    sp24 = var_v1;
    if (random_u32() & 1) {
        var_v0 = 0x80;
    } else {
        var_v0 = 0;
    }
    sp94 = var_v0 | var_v1 | 0xC000 | 0x40000 | 0x800000;
    sp9C = 6;
    sp9D = 5;
    sp9E = -1;
    sp9F = -1;
    spA0 = -1;
    spA1 = 0;
    sp98 = 0;
    spA2 = 0xFF;
    func_15130280(&sp3C, 1, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
}
