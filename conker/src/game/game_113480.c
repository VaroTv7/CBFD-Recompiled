/**
 * Auto-decompiled from asm/113480.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_150AC9C0(); /* extern */
s32 random_u32();                                /* extern */
f32 func_15144A74();         /* extern */
s32 func_15145C90();                             /* extern */
void * func_151D5D60();        /* extern */
void * memcpy();                             /* extern */
extern s32 D_80088A10;

s32 func_150E5FD0(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, s32 arg6, u8 arg7, u8 arg8, s16 arg9, s8 arg10) {
    s32 spEC;
    s8 spD9;
    u8 spD8;
    s32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    void * spBC;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s32 spA0;
    s32 sp9C;
    s16 sp98;
    s16 sp96;
    s8 sp94;
    s8 sp90;
    f32 sp8C;
    void * sp78;
    void * sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    u8 sp64;
    s32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s32 sp4C;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    f32 spB4;
    f32 spB8;
    sp94 = 0x41;
    sp96 = 0x2301;
    sp9C = 0;
    spA0 = 0;
    spA4 = 0;
    spA5 = 0;
    spA6 = 0;
    spA7 = 0xFF;
    spD9 = 0xFF;
    spA8 = arg3;
    sp98 = arg9;
    spD8 = arg8;
    spAC = arg4;
    (*(s32 *)((char *)&(spB0) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(spB0) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(spB0) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    (*(s32 *)((char *)&(spBC) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(spBC) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(spBC) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    spC8 = 0.0f;
    spCC = arg2;
    spD0 = 0.0f;
    spD4 = 1;
    sp64 = 0;
    sp90 = arg10;
    if ((arg7 != 0) && (func_150AC9C0((*(s32 *)((char *)(arg0) + 0x0)), (*(s32 *)((char *)(arg0) + 0x4)), (*(s32 *)((char *)(arg0) + 0x8)), (*(s32 *)((char *)(arg1) + 0x0)), (*(s32 *)((char *)(arg1) + 0x4)), (*(s32 *)((char *)(arg1) + 0x8)), &sp74, &sp78, &sp68, &sp6C, &sp70, 0, &sp60, 0, 0.0f) != 0) && (func_15145C90(sp60) != 0)) {
        sp54 = sp68 - spB0;
        sp64 |= 1;
        sp58 = sp6C - spB4;
        sp5C = sp70 - spB8;
        if (func_15144A74(&sp54, &sp68) < 0.0f) {
            sp8C = -1.0f;
        } else {
            sp8C = 1.0f;
        }
    }
    var_v1_2 = 0;
    if (random_u32() & 1) {
        var_v1_2 = 2;
    }
    sp4C = var_v1_2;
    if (random_u32() & 1) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    temp_v0 = func_1513D524(&sp94, 0xF, 0x15, 0, 0xF, var_v0 | var_v1_2, 0x30, (s32) arg5, arg6);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        spEC = temp_v0;
        memcpy(temp_v0 + 0x110, &sp64, 0x30);
        var_v1 = spEC;
    }
    return var_v1;
}

s8 func_150E6230(void *arg0) {
    s8 sp47;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp20;
    f32 temp_f0;
    f32 var_f0;
    s8 temp_v1;
    s8 var_a3;
    void *temp_v0;

    var_a3 = 1;
    temp_v0 = (char *)(arg0) + 0x110;
    if ((*(s32 *)((char *)(arg0) + 0x110)) & 1) {
        sp30 = (*(s32 *)((char *)(temp_v0) + 0x4)) - (*(s32 *)((char *)(arg0) + 0x34));
        sp34 = (*(s32 *)((char *)(temp_v0) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x38));
        sp47 = 1;
        sp20 = temp_v0;
        sp38 = (*(s32 *)((char *)(temp_v0) + 0xC)) - (*(s32 *)((char *)(arg0) + 0x3C));
        var_a3 = sp47;
        if (func_15144A74(&sp30, (char *)(temp_v0) + 4, arg0, 1) < 0.0f) {
            var_f0 = -1.0f;
        } else {
            var_f0 = 1.0f;
        }
        if (var_f0 != (*(s32 *)((char *)(sp20) + 0x28))) {
            temp_v1 = (*(s32 *)((char *)(sp20) + 0x2C));
            var_a3 = 0;
            if (temp_v1 != -1) {
                var_a3 = ((s32 (*)())((char *)(&D_80088A10 + (temp_v1 * 4))))(arg0);
            }
        }
    }
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x50));
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + ((*(f32 *)((char *)(arg0) + 0x40)) * temp_f0 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x44)) * temp_f0 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x48)) * temp_f0 * D_800BE9A4));
    return var_a3;
}

void *func_150E63A0(void *arg0, s32 arg1) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp54;
    void *sp48;
    void *sp44;
    u8 sp43;
    void *sp38;                                     /* compiler-managed */
    u8 *sp34;                                       /* compiler-managed */
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    u8 *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    f32 sp98;
    f32 sp9C;
    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp48, &sp43);
    sp44 = sp48;
    if (sp48 != NULL) {
        if (sp43 != 0) {
            temp_v0 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp34 = temp_a1;
            sp38 = temp_v0;
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x30));
        (*(s32 *)((char *)&(sp94) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x34));
        (*(f32 *)((char *)&(sp94) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x38));
        (*(f32 *)((char *)&(sp94) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
        temp_v0_2 = (arg1 * 0x9A0) + D_800DBFF0;
        temp_v0_3 = (char *)(temp_v0_2) + 0x2F8;
        sp88 = (*(s32 *)((char *)(arg0) + 0x34)) - ((*(s32 *)((char *)(arg0) + 0x40)) * temp_f0);
        temp_f10 = (*(s32 *)((char *)(arg0) + 0x38)) - ((*(s32 *)((char *)(arg0) + 0x44)) * temp_f0);
        sp8C = temp_f10;
        temp_f0_2 = sp88 - sp94;
        sp90 = (*(s32 *)((char *)(arg0) + 0x3C)) - ((*(s32 *)((char *)(arg0) + 0x48)) * temp_f0);
        temp_f14 = ((temp_f0_2 * 0.5f) + sp94) - (*(s32 *)((char *)(temp_v0_2) + 0x2F8));
        temp_f2 = temp_f10 - sp98;
        temp_f16 = ((temp_f2 * 0.5f) + sp98) - (*(s32 *)((char *)(temp_v0_3) + 0x4));
        temp_f12 = sp90 - sp9C;
        temp_f18 = ((temp_f12 * 0.5f) + sp9C) - (*(s32 *)((char *)(temp_v0_3) + 0x8));
        temp_f8 = (temp_f2 * temp_f18) - (temp_f16 * temp_f12);
        (*(void **)&(sp38)) = (*(void **)&(temp_f8));
        temp_f4 = (temp_f12 * temp_f14) - (temp_f18 * temp_f0_2);
        (*(void **)&(sp34)) = (*(void **)&(temp_f4));
        temp_f10_2 = (temp_f0_2 * temp_f16) - (temp_f14 * temp_f2);
        sp30 = temp_f10_2;
        temp_f8_2 = (temp_f8 * temp_f8) + (temp_f4 * temp_f4) + (temp_f10_2 * temp_f10_2);
        sp54 = temp_f8_2;
        sp2C = temp_f8_2;
        if (temp_f8_2 == 0.0f) {
            var_f16 = 0.0f;
            var_f12 = 0.0f;
            var_f14 = 0.0f;
        } else {
            temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x2C)) / sqrtf(sp54);
            var_f12 = (*(f32 *)&(sp38)) * temp_f2_2;
            var_f14 = (*(f32 *)&(sp34)) * temp_f2_2;
            var_f16 = sp30 * temp_f2_2;
        }
        (*(s16 *)((char *)(sp48) + 0x0)) = (s16) (s32) (sp94 - var_f12);
        (*(s16 *)((char *)(sp48) + 0x2)) = (s16) (s32) (sp98 - var_f14);
        (*(s16 *)((char *)(sp48) + 0x4)) = (s16) (s32) (sp9C - var_f16);
        (*(u8 *)((char *)(sp48) + 0xF)) = (u8) (*(u8 *)((char *)(arg0) + 0x5C));
        (*(s32 *)((char *)(sp48) + 0x6)) = 0;
        sp48 = (char *)(sp48) + 0x10;
        (*(s16 *)((char *)(sp48) + 0x10)) = (s16) (s32) (sp88 - var_f12);
        (*(s16 *)((char *)(sp48) + 0x2)) = (s16) (s32) (sp8C - var_f14);
        (*(s16 *)((char *)(sp48) + 0x4)) = (s16) (s32) (sp90 - var_f16);
        (*(s32 *)((char *)(sp48) + 0xF)) = 0U;
        (*(s32 *)((char *)(sp48) + 0x6)) = 0;
        sp48 = (char *)(sp48) + 0x10;
        (*(s16 *)((char *)(sp48) + 0x10)) = (s16) (s32) (sp88 + var_f12);
        (*(s16 *)((char *)(sp48) + 0x2)) = (s16) (s32) (sp8C + var_f14);
        (*(s16 *)((char *)(sp48) + 0x4)) = (s16) (s32) (sp90 + var_f16);
        (*(s32 *)((char *)(sp48) + 0xF)) = 0U;
        (*(s32 *)((char *)(sp48) + 0x6)) = 0;
        sp48 = (char *)(sp48) + 0x10;
        (*(s16 *)((char *)(sp48) + 0x10)) = (s16) (s32) (sp94 + var_f12);
        (*(s16 *)((char *)(sp48) + 0x2)) = (s16) (s32) (sp98 + var_f14);
        (*(s16 *)((char *)(sp48) + 0x4)) = (s16) (s32) (sp9C + var_f16);
        (*(u8 *)((char *)(sp48) + 0xF)) = (u8) (*(u8 *)((char *)(arg0) + 0x5C));
        (*(s32 *)((char *)(sp48) + 0x6)) = 0;
        return sp44;
    }
    return NULL;
}

s32 func_150E679C(void *arg0) {
    s16 temp_v0;
    s32 temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (temp_v0 < 8) {
        temp_v1 = temp_v0 << 5;
        if (temp_v1 < (s32) (*(s32 *)((char *)(arg0) + 0x5C))) {
            (*(u8 *)((char *)(arg0) + 0x5C)) = (u8) temp_v1;
        }
    }
    return 1;
}

s32 func_150E67D0(void *arg0) {
    s32 sp60;
    s8 sp5D;
    s8 sp5C;
    s8 sp5B;
    s8 sp5A;
    s8 sp59;
    s8 sp58;
    s32 sp54;
    s32 sp50;
    s8 sp4E;
    s16 sp4C;
    s32 sp48;
    void *temp_v1;

    sp4E = 0x3A;
    sp48 = 1;
    sp4C = 0x64;
    sp50 = 0;
    sp54 = 0;
    sp58 = 0xFF;
    sp59 = 0xFF;
    sp5A = 0;
    sp5B = 0;
    sp5C = 0;
    sp5D = 0xFF;
    sp60 = 0x130001;
    temp_v1 = (char *)(arg0) + 0x110;
    func_1513C73C(&sp48, 0, 0, (char *)(temp_v1) + 0x14, (*(s32 *)((char *)(temp_v1) + 0x4)), (*(s32 *)((char *)(temp_v1) + 0x8)), (*(s32 *)((char *)(temp_v1) + 0xC)), 50.0f, 50.0f, random_u32() & 0xFF, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    return 0;
}
