/**
 * Auto-decompiled from asm/108320.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15143134();           /* extern */
void * func_151D5D60();        /* extern */
void * memcpy();                              /* extern */
extern s32 D_80088910;
extern s32 D_8008891C;
extern s32 D_80088928;
extern s32 D_8008892C;
extern s32 D_80088930;
extern s32 D_80088934;
extern s32 D_80088938;
extern s32 D_8008893C;
extern s32 D_80088940;
extern s32 D_80088944;
extern s32 D_80088948;
extern f32 D_800A0BE0;
extern f32 D_800A0BE4;
extern f32 D_800A0BE8;
extern f32 D_800A0BEC;
extern f32 D_800A0BF0;

void func_150DAE70(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 spC4;
    f32 spB8;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    s8 sp8D;
    s8 sp8C;
    s32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    void * sp64;
    s8 sp5B;
    s8 sp5A;
    s8 sp59;
    s8 sp58;
    s32 sp54;
    s32 sp50;
    s16 sp4C;
    s16 sp4A;
    s8 sp48;
    s32 sp34;
    s32 sp30;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_v0_2;

    f32 spB4;
    f32 spB0;
    f32 spC0;
    f32 spBC;
    if (arg0 != NULL) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x1D4));
        temp_v1 = arg1 * 4;
        if (temp_v0 != 0) {
            temp_a2 = (*(&D_80088928 + temp_v1) << 6) + temp_v0;
            temp_a3 = arg1 * 0xC;
            sp30 = temp_a3;
            spC4 = temp_a2;
            sp34 = temp_v1;
            func_15143134(temp_a3 + &D_80088910, &spB8, temp_a2, temp_a3);
            func_15143134(sp30 + &D_8008891C, &spAC, spC4, sp30);
            temp_f2 = *(&D_8008892C + sp34);
            temp_f14 = temp_f2 * (spAC - spB8);
            temp_f16 = temp_f2 * (spB4 - spC0);
            spA4 = temp_f2 * (spB0 - spBC);
            temp_f18 = (temp_f14 * temp_f14) + (temp_f16 * temp_f16);
            if (!(fabsf(temp_f18) < D_800A0BE0)) {
                temp_f0 = sqrtf(temp_f18);
                sp48 = 0x17;
                sp54 = 0x243A;
                sp50 = 0;
                sp88 = 0x401;
                sp8C = 0xFF;
                sp8D = 0xFF;
                sp59 = 0xC8;
                sp5A = 0xC8;
                sp58 = 0xC8;
                sp5B = 0xC8;
                sp4A = 0x401;
                sp4C = *(&D_80088930 + (arg1 * 2));
                (*(f32 *)((char *)&(sp64) + 0x0)) = (f32) (*(f32 *)((char *)&(spB8) + 0x0));
                (*(s32 *)((char *)&(sp64) + 0x4)) = (s32) (*(s32 *)((char *)&(spB8) + 0x4));
                (*(s32 *)((char *)&(sp64) + 0x8)) = (s32) (*(s32 *)((char *)&(spB8) + 0x8));
                spA8 = temp_f16;
                spA0 = temp_f14;
                sp7C = 1.0f;
                sp80 = 1.0f;
                temp_f2_2 = 1.0f / temp_f0;
                sp84 = 1.0f;
                sp74 = 0.0f;
                sp70 = temp_f16 * temp_f2_2;
                sp78 = temp_f14 * temp_f2_2;
                temp_v0_2 = func_1513D524((s8 *)0x3F800000, temp_f14, &sp48, 9, 0, 0, 7, 0, 0x2C, (s32) arg2, arg3);
                if (temp_v0_2 != NULL) {
                    (*(f32 *)((char *)(temp_v0_2) + 0x110)) = (f32) (*(f32 *)((char *)&(spA0) + 0x0));
                    (*(s32 *)((char *)(temp_v0_2) + 0x114)) = (s32) (*(s32 *)((char *)&(spA0) + 0x4));
                    (*(s32 *)((char *)(temp_v0_2) + 0x118)) = (s32) (*(s32 *)((char *)&(spA0) + 0x8));
                    (*(f32 *)((char *)(temp_v0_2) + 0x11C)) = (f32)(s32)*(&D_80088934 + sp34);
                    (*(f32 *)((char *)(temp_v0_2) + 0x120)) = (f32)(s32)*(&D_80088938 + sp34);
                    (*(f32 *)((char *)(temp_v0_2) + 0x12C)) = (f32)(s32)*(&D_80088944 + sp34);
                    (*(s32 *)((char *)(temp_v0_2) + 0x124)) = 1.0f;
                    (*(s32 *)((char *)(temp_v0_2) + 0x128)) = 1.0f;
                    (*(f32 *)((char *)(temp_v0_2) + 0x130)) = (f32)(s32)*(&D_80088948 + sp34);
                    (*(f32 *)((char *)(temp_v0_2) + 0x134)) = (f32)(s32)*(&D_8008893C + sp34);
                    (*(u8 *)((char *)(temp_v0_2) + 0x138)) = (u8) *(&D_80088940 + arg1);
                }
            }
        }
    }
}

s32 func_150DB114(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 var_f14;
    s16 temp_v1;
    void *var_v0;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x134));
    var_v0 = (char *)(arg0) + 0x110;
    (*(f32 *)((char *)(arg0) + 0x110)) = (f32) ((*(f32 *)((char *)(arg0) + 0x110)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x114)) = (f32) ((*(f32 *)((char *)(arg0) + 0x114)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x118)) = (f32) ((*(f32 *)((char *)(arg0) + 0x118)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + ((*(f32 *)((char *)(arg0) + 0x110)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x114)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x118)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x124)) = (f32) ((*(f32 *)((char *)(arg0) + 0x124)) + ((*(f32 *)((char *)(arg0) + 0x12C)) * D_800BE9A4));
    if (D_800A0BE4 < (*(s32 *)((char *)(arg0) + 0x124))) {
        var_v0 = (char *)(arg0) + 0x110;
        (*(f32 *)((char *)(var_v0) + 0x14)) = (f32) D_800A0BE4;
        (*(f32 *)((char *)(var_v0) + 0x1C)) = (f32) -(*(f32 *)((char *)(var_v0) + 0x1C));
        var_f14 = D_800A0BE8;
    } else {
        var_f14 = D_800A0BEC;
        if ((*(s32 *)((char *)(var_v0) + 0x14)) < var_f14) {
            (*(s32 *)((char *)(var_v0) + 0x14)) = var_f14;
            (*(f32 *)((char *)(var_v0) + 0x1C)) = (f32) -(*(f32 *)((char *)(var_v0) + 0x1C));
        }
    }
    temp_f0_2 = (*(s32 *)((char *)(var_v0) + 0x20));
    (*(f32 *)((char *)(var_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(var_v0) + 0x18)) + (temp_f0_2 * D_800BE9A4));
    temp_f2 = (*(s32 *)((char *)(var_v0) + 0x18));
    if (D_800A0BE4 < temp_f2) {
        (*(f32 *)((char *)(var_v0) + 0x18)) = (f32) D_800A0BE4;
        (*(f32 *)((char *)(var_v0) + 0x20)) = (f32) -temp_f0_2;
    } else if (temp_f2 < var_f14) {
        (*(s32 *)((char *)(var_v0) + 0x18)) = var_f14;
        (*(f32 *)((char *)(var_v0) + 0x20)) = (f32) -temp_f0_2;
    }
    (*(f32 *)((char *)(var_v0) + 0xC)) = (f32) ((*(f32 *)((char *)(var_v0) + 0xC)) + ((*(f32 *)((char *)(var_v0) + 0x10)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(var_v0) + 0xC)) * (*(f32 *)((char *)(var_v0) + 0x14)));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(var_v0) + 0xC)) * (*(f32 *)((char *)(var_v0) + 0x18)));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x5C)) - (*(s32 *)((char *)(var_v0) + 0x28));
    if (temp_v1 < 0) {
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0U;
        return 0;
    }
    (*(u8 *)((char *)(arg0) + 0x5C)) = (u8) temp_v1;
    return 1;
}

void *func_150DB2D8(void *arg0, s32 arg1) {
    void *sp44;
    void *sp40;
    u8 sp37;
    void *sp30;
    s32 sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_a1;
    void *temp_v0;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp44, &sp37);
    sp40 = sp44;
    if (sp44 != NULL) {
        if (sp37 != 0) {
            temp_v0 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp2C = temp_a1;
            sp30 = temp_v0;
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
        temp_f2 = temp_f0 * (*(s32 *)((char *)(arg0) + 0x40));
        temp_f12 = -temp_f0 * (*(s32 *)((char *)(arg0) + 0x48));
        (*(s16 *)((char *)(sp44) + 0x0)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) + temp_f2);
        (*(s16 *)((char *)(sp44) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) + (*(s16 *)((char *)(arg0) + 0x30)));
        (*(s16 *)((char *)(sp44) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) + temp_f12);
        (*(s32 *)((char *)(sp44) + 0x6)) = 0;
        (*(s16 *)((char *)(sp44) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) + temp_f2);
        (*(s16 *)((char *)(sp44) + 0x12)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) - (*(s16 *)((char *)(arg0) + 0x30)));
        (*(s16 *)((char *)(sp44) + 0x14)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) + temp_f12);
        (*(s32 *)((char *)(sp44) + 0x16)) = 0;
        (*(s16 *)((char *)(sp44) + 0x20)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) - temp_f2);
        (*(s16 *)((char *)(sp44) + 0x22)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) - (*(s16 *)((char *)(arg0) + 0x30)));
        (*(s16 *)((char *)(sp44) + 0x24)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - temp_f12);
        (*(s32 *)((char *)(sp44) + 0x26)) = 0;
        (*(s16 *)((char *)(sp44) + 0x30)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) - temp_f2);
        (*(s16 *)((char *)(sp44) + 0x32)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) + (*(s16 *)((char *)(arg0) + 0x30)));
        (*(s16 *)((char *)(sp44) + 0x34)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - temp_f12);
        (*(s32 *)((char *)(sp44) + 0x36)) = 0;
        return sp40;
    }
    return NULL;
}

void func_150DB518(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s8 sp7D;
    s8 sp7C;
    s32 sp78;
    s8 sp4B;
    s8 sp4A;
    s8 sp49;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s16 sp3C;
    s16 sp3A;
    s8 sp38;
    void *temp_v0;

    if ((arg0 != 0) && (arg1 != 0) && (arg2 != 0) && (arg3 != 0) && (arg4 != 0) && (arg5 != 0)) {
        sp78 = 0x401;
        sp7C = 0xFF;
        sp38 = 0x17;
        sp44 = 0x243A;
        sp40 = 0;
        sp3C = arg5;
        sp7D = 0xFF;
        sp48 = 0xC8;
        sp49 = 0xC8;
        sp4A = 0xC8;
        sp4B = 0xC8;
        sp3A = 0x401;
        temp_v0 = func_1513D524(&sp38, 0.0f, (s8 *)0xA, 0, 8, 0, 0x14, (s32) arg6, arg7);
        if (temp_v0 != NULL) {
            (*(s32 *)((char *)(temp_v0) + 0x110)) = arg0;
            (*(s32 *)((char *)(temp_v0) + 0x114)) = arg1;
            (*(s32 *)((char *)(temp_v0) + 0x118)) = arg2;
            (*(s32 *)((char *)(temp_v0) + 0x11C)) = arg4;
            (*(s32 *)((char *)(temp_v0) + 0x120)) = arg3;
        }
    }
}

s32 func_150DB630(void *arg0) {
    f32 temp_f0;

    if ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x120)))) > 255.0f) {
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0xFF;
        return 1;
    }
    temp_f0 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x120))));
    if (temp_f0 < 0.0f) {
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
        return 1;
    }
    (*(s8 *)((char *)(arg0) + 0x5C)) = (s8) (u32) temp_f0;
    return 1;
}

void *func_150DB714(void *arg0, s32 arg1) {
    void *sp54;
    void *sp50;
    s32 sp48;
    f32 sp44;
    u8 sp37;
    void *sp30;
    s32 sp2C;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_a1;
    s32 temp_f10;
    void *temp_v0;
    void *temp_v1;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp54, &sp37);
    sp50 = sp54;
    if (sp54 != NULL) {
        if (sp37 != 0) {
            temp_v0 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp2C = temp_a1;
            sp30 = temp_v0;
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_f10 = (s32) ((*(s32 *)((*(s32 *)((char *)(arg0) + 0x114)))) * D_800A0BF0);
        sp48 = temp_f10;
        sp44 = func_151423D8(temp_f10 & 0xFF);
        temp_v1 = (char *)(arg0) + 0x110;
        temp_f2 = (*(s32 *)((*(s32 *)((char *)(temp_v1) + 0x8))));
        temp_f12 = temp_f2 * sp44;
        temp_f14 = -temp_f2 * func_151423D8((temp_f10 - 0x40) & 0xFF);
        (*(s16 *)((char *)(sp54) + 0x0)) = (s16) (s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x0)) + temp_f12);
        (*(s16 *)((char *)(sp54) + 0x2)) = (s16) (s32) ((*(s16 *)((*(s16 *)((char *)(temp_v1) + 0xC)))) + (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x4)));
        (*(s16 *)((char *)(sp54) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x8)) + temp_f14);
        (*(s32 *)((char *)(sp54) + 0x6)) = 0;
        (*(s16 *)((char *)(sp54) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x0)) + temp_f12);
        (*(s16 *)((char *)(sp54) + 0x12)) = (s16) (s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x4)) - (*(s16 *)((*(s16 *)((char *)(temp_v1) + 0xC)))));
        (*(s16 *)((char *)(sp54) + 0x14)) = (s16) (s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x8)) + temp_f14);
        (*(s32 *)((char *)(sp54) + 0x16)) = 0;
        (*(s16 *)((char *)(sp54) + 0x20)) = (s16) (s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x0)) - temp_f12);
        (*(s16 *)((char *)(sp54) + 0x22)) = (s16) (s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x4)) - (*(s16 *)((*(s16 *)((char *)(temp_v1) + 0xC)))));
        (*(s16 *)((char *)(sp54) + 0x24)) = (s16) (s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x8)) - temp_f14);
        (*(s32 *)((char *)(sp54) + 0x26)) = 0;
        (*(s16 *)((char *)(sp54) + 0x30)) = (s16) (s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x0)) - temp_f12);
        (*(s16 *)((char *)(sp54) + 0x32)) = (s16) (s32) ((*(s16 *)((*(s16 *)((char *)(temp_v1) + 0xC)))) + (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x4)));
        (*(s16 *)((char *)(sp54) + 0x34)) = (s16) (s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x110))) + 0x8)) - temp_f14);
        (*(s32 *)((char *)(sp54) + 0x36)) = 0;
        return sp50;
    }
    return NULL;
}
