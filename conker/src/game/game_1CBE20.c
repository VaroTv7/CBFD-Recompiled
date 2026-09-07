/**
 * Auto-decompiled from asm/1CBE20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1513264C();   /* extern */
void * func_15152190(); /* extern */
void *func_15167A68();        /* extern */
void * memcpy();                          /* extern */
extern f32 D_800A8CC0;
extern f32 D_800A8CC4;
extern f32 D_800A8CC8;
extern f32 D_800A8CCC;
extern f32 D_800A8CD0;
extern f32 D_800A8CD4;
extern f32 D_800A8CD8;

void *func_1519E970( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    void *temp_v0;

    temp_v0 = func_15167A68(0x26, arg6, 0x2C, 1, (s32) arg5, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x18)) = arg3;
    (*(s32 *)((char *)(temp_v0) + 0x1C)) = arg4;
    (*(s32 *)((char *)(temp_v0) + 0x20)) = arg0;
    (*(s32 *)((char *)(temp_v0) + 0x28)) = arg2;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = 1;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x24)) = arg1;
    return temp_v0;
}

void func_1519EA04(void *arg0) {
    s32 var_v0;

    if ((*(s32 *)((char *)(arg0) + 0x10)) & 1) {
        var_v0 = 0;
        (*(s16 *)((char *)(arg0) + 0x20)) = (s16) ((*(s16 *)((char *)(arg0) + 0x20)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x20)) < 0) {
            var_v0 = 1;
        }
        if (var_v0 != 0) {
            if ((*(s32 *)((char *)(arg0) + 0x28)) == 0) {
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x24))) + 0x30)) = 0;
            }
            func_1516972C();
        }
    }
}

void func_1519EA78(void *arg0, u16 arg1, f32 arg2, u8 arg3, s32 arg4) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s16 sp62;
    s16 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    void * sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    f32 sp2C;

    sp34 = 0xA;
    sp38 = 7;
    (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp50 = 10.0f;
    sp54 = 8.0f;
    sp48 = 0;
    sp4A = 0xFF;
    sp4C = -0x35;
    sp4E = 0x18;
    sp60 = 0x32;
    sp62 = 0x14;
    sp2C = arg2;
    sp58 = D_800A8CC0;
    sp5C = D_800A8CC4;
    sp64 = D_800A8CC8;
    sp68 = D_800A8CCC;
    sp6C = D_800A8CD0;
    sp30 = (s32) arg1;
    func_15152190(arg2, &sp34, &sp30, &sp2C, 1, 0.0f, 0, (s32) arg3, arg4);
}

void func_1519EB8C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 spB4;
    s16 spB0;
    s16 spAE;
    s8 spAC;
    s32 spA8;
    s8 spA6;
    s8 spA4;
    s8 spA3;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s8 sp9F;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s32 sp98;
    s8 sp94;
    u16 sp92;
    s16 sp90;
    s32 sp8C;
    f32 sp88;
    void * sp7C;
    void * sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    void *sp38;
    s32 temp_v0;

    sp38 = arg0;
    sp3C = 1.0f;
    sp40 = 1.0f;
    sp44 = (*(s32 *)((char *)(arg0) + 0x18)) * D_800A8CD4;
    sp48 = (*(s32 *)((char *)(arg0) + 0x1C)) * D_800A8CD4;
    sp4C = (*(s32 *)((char *)(arg0) + 0xC));
    sp50 = (*(s32 *)((char *)(arg0) + 0x10));
    sp58 = 1.0f;
    sp5C = 1.0f;
    sp60 = 1.0f;
    sp54 = (*(s32 *)((char *)(arg0) + 0x14));
    sp64 = (*(s32 *)((char *)(arg0) + 0x0));
    sp68 = (*(s32 *)((char *)(arg0) + 0x4));
    sp6C = (*(s32 *)((char *)(arg0) + 0x8));
    (*(s32 *)((char *)&(sp70) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    (*(s32 *)((char *)&(sp7C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp7C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp7C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp8C = 0x980;
    sp94 = 0;
    sp98 = 0;
    sp9C = 0xFF;
    sp9D = 0x15;
    sp9E = 0;
    sp9F = 0;
    spA0 = 0;
    spA1 = 0;
    spA2 = 0;
    spA3 = 0;
    spA4 = 2;
    spA6 = 0;
    spA8 = 0;
    spAC = 0;
    spAE = 1;
    spB0 = 0xFF;
    spB4 = 0;
    sp88 = 0.0f;
    sp90 = arg2;
    sp92 = arg1;
    temp_v0 = func_1513264C(&sp3C, 3, 0xFF, 0, 4, (s32) arg3, arg4);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x170, &sp38, 4);
    }
}

s32 func_1519ED24(void *arg0) {
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x170));
    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * D_800A8CD8);
    (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x1C)) * D_800A8CD8);
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) (*(f32 *)((char *)(temp_v1) + 0xC));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x10));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x0));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x4));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x8));
    return 1;
}

void func_1519ED84(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 sp9E;
    s16 sp9C;
    s32 sp98;
    s8 sp94;
    s32 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s8 sp5B;
    s8 sp5A;
    s8 sp59;
    s8 sp58;
    s32 sp54;
    s32 sp50;
    s16 sp4C;
    s16 sp4A;
    s8 sp49;
    s8 sp48;
    void *sp44;
    s32 temp_v0;

    sp44 = arg0;
    sp49 = 0;
    sp4A = 0x3B03;
    sp50 = 0;
    sp54 = 0;
    sp58 = 0xFF;
    sp59 = 0xFF;
    sp5A = 0xFF;
    sp5B = 0xFF;
    sp48 = (s8) arg1;
    sp4C = arg2;
    sp5C = (*(s32 *)((char *)(arg0) + 0x18)) * 10.0f;
    sp60 = (*(s32 *)((char *)(arg0) + 0x1C)) * 10.0f;
    sp64 = (*(s32 *)((char *)(arg0) + 0x0));
    sp68 = (*(s32 *)((char *)(arg0) + 0x4));
    sp6C = (*(s32 *)((char *)(arg0) + 0x8));
    sp70 = (*(s32 *)((char *)(arg0) + 0xC));
    sp74 = (*(s32 *)((char *)(arg0) + 0x10));
    sp8C = 0xFF;
    sp8D = 0xFF;
    sp88 = 0x045C0081;
    sp7C = 1.0f;
    sp80 = 1.0f;
    sp84 = 1.0f;
    sp8E = 0;
    sp8F = 7;
    sp90 = 0;
    sp94 = 0xFF;
    sp98 = 0;
    sp9C = 1;
    sp9E = 0xFF;
    sp78 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_v0 = func_1513D2F0(&sp48, &D_800A4AA0, 0x27, 0, 0, 0x17, 0, 3, 0xFF, 4, (s32) arg3, arg4);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x110, &sp44, 4);
    }
}

s32 func_1519EF04(void *arg0) {
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x110));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) * 10.0f);
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x1C)) * 10.0f);
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (*(f32 *)((char *)(temp_v1) + 0xC));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x10));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x0));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x8));
    return 1;
}
