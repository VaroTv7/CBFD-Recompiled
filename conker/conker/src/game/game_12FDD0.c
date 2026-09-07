/**
 * Auto-decompiled from asm/12FDD0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 random_u32();                      /* extern */
s32 func_1510F8CC();                             /* extern */
void * func_15130374();              /* extern */
void *func_15144B34();                           /* extern */
void * func_15145548(); /* extern */
void * func_15145EA4();          /* extern */
s32 func_1514654C(); /* extern */
void * func_151D5D60();     /* extern */
void * memcpy();                          /* extern */
void func_15103254();
extern s32 D_80088BD0;
extern f32 D_800A2340;

s32 func_15102920(f32 arg0, u8 arg1, s32 arg2, void *arg3, s16 arg4, u8 arg5, u8 arg6, s32 arg7, u8 arg8, s32 arg9) {
    s16 sp88;
    s16 sp86;
    s32 sp7C;
    s8 sp7B;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    s8 sp77;
    s8 sp76;
    s8 sp75;
    u8 sp74;
    s32 sp70;
    s32 sp6C;
    s8 sp6B;
    s8 sp6A;
    s16 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp50;
    s32 sp4C;
    s32 temp_v0;
    s32 var_v1;
    s32 var_v1_2;

    sp86 = 0xA;
    sp88 = 0x19;
    temp_v0 = func_1510F8CC(arg7);
    sp6A = 0x5C;
    if (D_800BE9F0 != 0x26) {
        if (D_800BE9F0 == 0x36) {
            if (temp_v0 == 9) {
                return 0;
            }
            sp6A = 0x85;
            arg0 *= D_800A2340;
            goto block_7;
        }
        goto block_7;
    }
    if (temp_v0 == 2) {
        return 0;
    }
block_7:
    sp6B = 0;
    if (arg4 == -1) {
        var_v1 = 0;
    } else {
        var_v1 = 1;
    }
    sp64 = var_v1 | 0x9700 | 0x20000;
    if (arg4 == -1) {
        sp68 = 0x12C;
    } else {
        sp68 = arg4;
    }
    sp6C = 0;
    sp70 = 0;
    if (D_800BE9F0 == 0x36) {
        sp74 = (u8) ((s32) arg1 >> 1);
    } else {
        sp74 = arg1;
    }
    sp75 = 0xFF;
    sp78 = 0;
    sp77 = 0;
    sp76 = 0;
    sp79 = 0xFF;
    if (arg6 != 0) {
        var_v1_2 = 2;
    } else {
        var_v1_2 = 1;
    }
    sp7C = var_v1_2 + 0x3B0000;
    sp7A = 0;
    sp7B = 7;
    if (arg5 != 0) {
        sp60 = 3;
        sp5C = 0xFF;
    } else {
        sp60 = 0;
        sp5C = 0;
    }
    sp4C = random_u32(D_800BE9F0, -1, arg1);
    sp50 = random_u32();
    return func_1513C650(&sp64, 0, 0, arg2, (*(s32 *)((char *)(arg3) + 0x0)), (*(s32 *)((char *)(arg3) + 0x4)), (*(s32 *)((char *)(arg3) + 0x8)), arg0, arg0, sp4C & 0xFF, ((random_u32() & 1) * 2) + (sp50 & 1), sp60, sp5C, 0, (s32) arg8, arg9);
}

s32 func_15102B38(void *arg0, s32 arg1, void *arg2, void *arg3, void *arg4, s32 arg5, s32 arg6, s32 arg7, void *arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13) {
    s32 spCC;
    u8 spC0;
    s8 spBB;
    s8 spBA;
    s8 spB9;
    u8 spB8;
    s32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    void * sp9C;
    void * sp90;
    void * sp88;
    s8 sp87;
    s8 sp86;
    s8 sp85;
    s8 sp84;
    s32 sp80;
    s32 sp7C;
    s16 sp78;
    s16 sp76;
    s8 sp75;
    s8 sp74;
    void * sp68;
    void * sp5C;
    s8 sp58;
    s32 sp54;
    s16 sp50;
    s32 sp4C;
    u8 sp48;
    void *sp44;
    s32 temp_t6;
    s32 temp_v0;
    s32 var_v0;

    temp_t6 = arg1 & 0xFF;
    if (arg0 == NULL) {
        return 0;
    }
    sp58 = 0;
    (*(s32 *)((char *)&(sp5C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp5C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp5C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    (*(s32 *)((char *)&(sp68) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp68) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp68) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp54 = temp_t6;
    sp44 = arg0;
    sp50 = arg11;
    sp4C = temp_t6 << 6;
    sp74 = 0x5F;
    sp75 = 5;
    sp76 = 0x2203;
    sp7C = 0;
    sp80 = 0;
    sp84 = 0xFF;
    sp85 = 0xFF;
    sp86 = 0xFF;
    sp87 = 0xFF;
    sp48 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp78 = arg5;
    (*(s32 *)((char *)&(sp88) + 0x0)) = (s32) (*(s32 *)((char *)(arg4) + 0x0));
    (*(s32 *)((char *)&(sp88) + 0x4)) = (s32) (*(s32 *)((char *)(arg4) + 0x4));
    (*(s32 *)((char *)&(sp90) + 0x0)) = (s32) (*(s32 *)((char *)(arg2) + 0x0));
    (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)(arg2) + 0x4));
    (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)(arg2) + 0x8));
    (*(s32 *)((char *)&(sp9C) + 0x0)) = (s32) (*(s32 *)((char *)(arg3) + 0x0));
    (*(s32 *)((char *)&(sp9C) + 0x4)) = (s32) (*(s32 *)((char *)(arg3) + 0x4));
    (*(s32 *)((char *)&(sp9C) + 0x8)) = (s32) (*(s32 *)((char *)(arg3) + 0x8));
    spB4 = 0x40CC0009;
    spB9 = 0xFF;
    spBA = 0;
    spBB = 7;
    spA8 = 0.0f;
    spAC = 0.0f;
    spB0 = 0.0f;
    spB8 = arg6;
    spC0 = arg9;
    if (random_u32(temp_t6) & 1) {
        var_v0 = 2;
    } else {
        var_v0 = 0;
    }
    temp_v0 = func_1513D2F0(&sp74, &D_800A4AA0, 0x29, 0, 0, 0x16, var_v0 + 1, 0, 0, arg10 + 0x30, (s32) arg12, arg13);
    spCC = temp_v0;
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x110, &sp44, 0x30);
    }
    func_15103254(arg5, arg6, arg7, arg8, (s32) arg9, (s32) arg12, arg13);
    return spCC;
}

void func_15102D50(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x110, arg0 + 0x114, arg0);
}

s32 func_15102D90(void *arg0) {
    void *sp44;
    void *sp40;
    void *sp3C;
    void *sp38;
    s16 temp_a1;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = (*(s32 *)((char *)(arg0) + 0x110));
    (*(u8 *)((char *)(arg0) + 0x124)) = (u8) ((*(u8 *)((char *)(arg0) + 0x124)) & 0xFFFE);
    if (((*(s32 *)((char *)(arg0) + 0x114)) != (*(s32 *)((char *)(temp_s1) + 0x3B))) || ((*(s32 *)((char *)(temp_s1) + 0x0)) == 0)) {
        return 0;
    }
    if (((*(s32 *)((char *)(temp_s1) + 0x1D4)) == 0) || (((*(s32 *)((char *)(temp_s1) + 0x74)) & 0xF) == 0xF)) {
        return 1;
    }
    temp_s0 = (char *)(arg0) + 0x110;
    sp40 = (char *)(arg0) + 0x34;
    sp44 = (char *)(arg0) + 0x40;
    sp38 = (char *)(temp_s0) + 0x18;
    sp3C = (char *)(temp_s0) + 0x24;
    temp_a1 = (*(s32 *)((char *)(temp_s0) + 0xC));
    if (temp_a1 != -1) {
        temp_v0 = func_1503195C(temp_s1, temp_a1, 0);
        if (temp_v0 == 0) {
            return 0;
        }
        if (func_1514654C(temp_s1, temp_v0, (*(s32 *)((char *)(temp_s0) + 0x10)), &sp40, &sp38, 2) == 0) {
            return 0;
        }
        goto block_12;
    }
    func_15145EA4(&sp40, &sp38, (*(s32 *)((char *)(temp_s1) + 0x1D4)) + (*(s32 *)((char *)(temp_s0) + 0x8)), 2);
block_12:
    (*(u8 *)((char *)(temp_s0) + 0x14)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0x14)) | 1);
    return 1;
}

void *func_15102EB8(void *arg0, s32 arg1) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp6C;
    void *sp50;
    void *sp4C;
    void * sp48;
    f32 sp44;
    u8 sp43;
    void *sp38;
    void **sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    void **temp_a1;
    void *temp_s1;
    void *temp_v0;
    void *temp_v1;

    f32 sp70;
    f32 sp74;
    temp_s1 = func_15144B34(arg1);
    if (!((*(s32 *)((char *)(arg0) + 0x124)) & 1)) {
        return NULL;
    }
    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp50, &sp43);
    sp4C = sp50;
    if (sp50 != NULL) {
        if (sp43 != 0) {
            temp_v1 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp34 = temp_a1;
            sp38 = temp_v1;
            memcpy((*(s32 *)((char *)(temp_v1) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v1) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_v0 = (char *)(arg0) + 0x110;
        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x18));
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x30));
        temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x1C));
        temp_f14 = (*(s32 *)((char *)(temp_v0) + 0x20));
        temp_f16 = temp_f2 + (((*(s32 *)((char *)(temp_v0) + 0x24)) - temp_f2) * temp_f0);
        temp_f18 = temp_f12 + (((*(s32 *)((char *)(temp_v0) + 0x28)) - temp_f12) * temp_f0);
        sp7C = temp_f16 - temp_f2;
        temp_f6 = temp_f14 + (((*(s32 *)((char *)(temp_v0) + 0x2C)) - temp_f14) * temp_f0);
        sp90 = temp_f6;
        sp80 = temp_f18 - (*(s32 *)((char *)(temp_v0) + 0x1C));
        sp8C = temp_f18;
        sp88 = temp_f16;
        sp38 = temp_v0;
        sp84 = temp_f6 - (*(s32 *)((char *)(temp_v0) + 0x20));
        func_15145548(temp_f12, temp_f14, (char *)(temp_v0) + 0x18, &sp7C, temp_s1, &sp6C, &sp48);
        temp_f0_2 = sp6C - (*(s32 *)((char *)(temp_s1) + 0x0));
        temp_f2_2 = sp70 - (*(s32 *)((char *)(temp_s1) + 0x4));
        temp_f12_2 = sp74 - (*(s32 *)((char *)(temp_s1) + 0x8));
        temp_f18_2 = (sp80 * temp_f12_2) - (temp_f2_2 * sp84);
        temp_f16_2 = (sp84 * temp_f0_2) - (temp_f12_2 * sp7C);
        sp30 = temp_f16_2;
        temp_f6_2 = (sp7C * temp_f2_2) - (temp_f0_2 * sp80);
        sp2C = temp_f6_2;
        temp_f14_2 = (temp_f18_2 * temp_f18_2) + (temp_f16_2 * temp_f16_2) + (temp_f6_2 * temp_f6_2);
        sp44 = temp_f14_2;
        if (temp_f14_2 == 0.0f) {
            var_f16 = 0.0f;
            var_f12 = 0.0f;
            var_f14 = 0.0f;
        } else {
            temp_f2_3 = (*(s32 *)((char *)(arg0) + 0x2C)) / sqrtf(sp44);
            var_f12 = temp_f18_2 * temp_f2_3;
            var_f14 = sp30 * temp_f2_3;
            var_f16 = sp2C * temp_f2_3;
        }
        (*(s16 *)((char *)(sp50) + 0x0)) = (s16) (s32) ((*(s16 *)((char *)(sp38) + 0x18)) + var_f12);
        (*(s16 *)((char *)(sp50) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(sp38) + 0x1C)) + var_f14);
        (*(s16 *)((char *)(sp50) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(sp38) + 0x20)) + var_f16);
        (*(s32 *)((char *)(sp50) + 0x6)) = 0;
        sp50 = (char *)(sp50) + 0x10;
        (*(s16 *)((char *)(sp50) + 0x10)) = (s16) (s32) (sp88 + var_f12);
        (*(s16 *)((char *)(sp50) + 0x2)) = (s16) (s32) (sp8C + var_f14);
        (*(s16 *)((char *)(sp50) + 0x4)) = (s16) (s32) (sp90 + var_f16);
        (*(s32 *)((char *)(sp50) + 0x6)) = 0;
        sp50 = (char *)(sp50) + 0x10;
        (*(s16 *)((char *)(sp50) + 0x10)) = (s16) (s32) (sp88 - var_f12);
        (*(s16 *)((char *)(sp50) + 0x2)) = (s16) (s32) (sp8C - var_f14);
        (*(s16 *)((char *)(sp50) + 0x4)) = (s16) (s32) (sp90 - var_f16);
        (*(s32 *)((char *)(sp50) + 0x6)) = 0;
        sp50 = (char *)(sp50) + 0x10;
        (*(s16 *)((char *)(sp50) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(sp38) + 0x18)) - var_f12);
        (*(s16 *)((char *)(sp50) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(sp38) + 0x1C)) - var_f14);
        (*(s16 *)((char *)(sp50) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(sp38) + 0x20)) - var_f16);
        (*(s32 *)((char *)(sp50) + 0x6)) = 0;
        return sp4C;
    }
    return NULL;
}

void func_15103254( s32 arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6) {
    u8 sp92;
    s8 sp91;
    s8 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    void * sp5C;
    s32 sp58;
    s32 sp54;
    f32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s8 sp49;
    s8 sp48;
    u8 sp47;
    s8 sp46;
    s8 sp45;
    s8 sp44;
    s8 sp43;
    s8 sp42;
    s8 sp41;
    s8 sp40;
    s32 sp3C;
    s32 sp38;
    s16 sp36;
    s16 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp24;
    s32 temp_t8;
    s32 var_v0;
    s32 var_v1;

    temp_t8 = *(&D_80088BD0 + ((random_u32() & 3) * 4));
    sp30 = 0x20000;
    sp40 = 0xFF;
    sp34 = 0x2203;
    sp2C = 0x200005;
    sp49 = (s8) temp_t8;
    sp36 = arg0 + 1;
    sp38 = 0;
    sp3C = 0;
    sp41 = 0xFF;
    sp42 = 0xFF;
    sp43 = 0xFF;
    sp44 = 0xFF;
    sp45 = 0xFF;
    sp46 = 0xFF;
    sp48 = 0xFF;
    sp58 = arg2;
    sp54 = arg2;
    sp47 = arg1;
    (*(s32 *)((char *)&(sp5C) + 0x0)) = (s32) (*(s32 *)((char *)(arg3) + 0x0));
    (*(s32 *)((char *)&(sp5C) + 0x4)) = (s32) (*(s32 *)((char *)(arg3) + 0x4));
    (*(s32 *)((char *)&(sp5C) + 0x8)) = (s32) (*(s32 *)((char *)(arg3) + 0x8));
    sp4A = 3;
    sp4C = 0x55;
    sp4E = 1;
    sp68 = 0.0f;
    sp6C = 0.0f;
    sp70 = 0.0f;
    sp74 = 0.0f;
    sp78 = 0.0f;
    sp7C = 0.0f;
    sp80 = 0.0f;
    sp50 = 1.0f;
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
    sp84 = var_v0 | 1 | var_v1 | 0xC200 | 0x40000 | 0x800000;
    sp8C = 6;
    sp8D = 8;
    sp8E = -1;
    sp8F = -1;
    sp90 = -1;
    sp91 = 0;
    sp92 = arg4;
    func_15130374(&sp2C, 1, 0, arg5, arg6);
}
