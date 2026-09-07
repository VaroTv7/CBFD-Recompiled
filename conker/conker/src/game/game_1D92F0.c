/**
 * Auto-decompiled from asm/1D92F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 allocate_memory();               /* extern */
u16 func_10010E78(); /* extern */
void * func_10010FFC();           /* extern */
s32 func_15045800();           /* extern */
s32 func_15046C80();            /* extern */
void * func_1504715C();                     /* extern */
f32 func_150489B0();                         /* extern */
void *func_15094FE8(); /* extern */
u32 random_u32();                        /* extern */
f32 random_float();                        /* extern */
s32 func_1513418C();               /* extern */
void * func_15135DD0();            /* extern */
void * func_15136698(); /* extern */
void * func_15143134();                    /* extern */
void * func_15143794();              /* extern */
void * func_15143874();            /* extern */
void * func_15147DA0(); /* extern */
void * func_1514C678(); /* extern */
void * func_15153F18();       /* extern */
void *func_15167A68();        /* extern */
void * func_1516962C();              /* extern */
void * func_151D5D60();        /* extern */
u8 func_151D8E20();                                 /* extern */
void * func_151D9014(); /* extern */
void * func_151DA6F8(); /* extern */
void * func_151DAB58(); /* extern */
void * func_151DBE80(); /* extern */
void * memcpy();                           /* extern */
s32 func_151ACB38();
void func_151AE0E4();
void func_151AE264();                 /* static */
void func_151AE2BC(f32 *arg0, void *arg1, f32 arg2, f32 arg3);
void func_151AE3A8();                     /* static */
void *func_151AE590();
void func_151AE984(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, u8 arg5);
void func_151AEAB4();
void func_151AF388(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4);
extern s32 D_80090B60;
extern s32 D_800A9020;
extern s32 D_800A9021;
extern s32 D_800A9023;
extern s32 D_800A9040;
extern s32 D_800A9068;
extern s32 D_800A9158;
extern s32 D_800A9180;
extern s32 D_800A925C;
extern s32 D_800A9270;
extern f32 D_800A9278;
extern f32 D_800A927C;
extern f32 D_800A9280;
extern f32 D_800A9284;
extern f64 D_800A9288;
extern f32 D_800A9290;
extern f32 D_800A9294;
extern f32 D_800A9D70;
extern f32 D_800A9D80;
extern f32 D_800A9D84;
extern f32 D_800A9D88;
extern f32 D_800A9D8C;
extern f32 D_800A9D90;
extern f32 D_800A9D94;
extern f32 D_800A9D98;
extern f32 D_800A9D9C;
extern f32 D_800A9DA0;
extern f32 D_800A9DA4;
extern f32 D_800A9DA8;
extern f32 D_800A9DAC;
extern f32 D_800A9DB0;
extern f32 D_800A9DB4;
extern f32 D_800A9DB8;
extern f32 D_800A9DBC;
extern f32 D_800A9DC0;
extern f32 D_800A9DC4;
extern f32 D_800A9DC8;
extern f32 D_800A9DCC;
extern f32 D_800A9DD0;
extern f32 D_800A9DD4;
extern s32 D_800A9DD8;
extern f32 D_800A9DDC;
extern f32 D_800A9DE0;
extern s32 D_800A9DF0;
extern f32 D_800AA0E4;
extern s32 D_800AB3F4;
extern s32 D_800AB404;
extern s32 D_800D2C9C;
extern s32 D_800DCE50;

void func_151ABE40(f32 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 sp7B;
    u8 sp74;
    s32 sp70;
    void *sp6C;
    void *sp68;
    u8 sp64;
    s32 sp60;
    void *sp5C;
    void *sp58;
    s8 temp_v1_3;
    u8 temp_v0;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = func_151D8E20();
    sp7B = temp_v0;
    if (arg1 != NULL) {
        temp_s0 = (arg2 * 5) + &D_800A9020;
        if ((*(s32 *)((char *)(temp_s0) + 0x0)) != -1) {
            sp6C = arg1;
            sp74 = temp_v0;
            sp70 = arg4;
            temp_v1 = ((*(s32 *)((char *)(temp_s0) + 0x0)) * 8) + &D_800A9040;
            sp68 = temp_v1;
            func_1514C678((*(u32 *)((char *)(arg0) + 0x0)), (*(u32 *)((char *)(arg0) + 0x4)), (*(u32 *)((char *)(arg0) + 0x8)), (*(u32 *)((char *)(temp_v1) + 0x0)), 0, 0xFF, (random_u32() % (u32) ((*(u32 *)((char *)(temp_v1) + 0x6)) + 1)) + (*(u32 *)((char *)(temp_v1) + 0x4)), 0xB, arg2, 0.0f, &sp6C, (s32) arg3);
        }
        if ((*(s32 *)((char *)(temp_s0) + 0x2)) != -1) {
            sp5C = arg1;
            sp60 = arg4;
            sp64 = sp7B;
            temp_v1_2 = ((*(s32 *)((char *)(temp_s0) + 0x2)) * 8) + &D_800A9158;
            sp58 = temp_v1_2;
            func_1514C678((*(u32 *)((char *)(arg0) + 0x0)), (*(u32 *)((char *)(arg0) + 0x4)), (*(u32 *)((char *)(arg0) + 0x8)), (*(u32 *)((char *)(temp_v1_2) + 0x0)), 0, 0xFF, (random_u32() % (u32) ((*(u32 *)((char *)(temp_v1_2) + 0x6)) + 1)) + (*(u32 *)((char *)(temp_v1_2) + 0x4)), 0xC, arg2, 0.0f, &sp5C, (s32) arg3);
        }
        temp_v1_3 = (*(s32 *)((char *)(temp_s0) + 0x4));
        if ((temp_v1_3 != -1) && ((*(s32 *)((char *)(arg1) + 0x1C)) & 1)) {
            temp_v0_2 = (temp_v1_3 * 0xC) + &D_800A925C;
            func_151DBE80(sp7B, (*(s32 *)((char *)(temp_v0_2) + 0x0)), (*(s32 *)((char *)(temp_v0_2) + 0x8)), (*(s32 *)((char *)(temp_v0_2) + 0x4)), arg0, (char *)(arg1) + 4, 0x96, 0, (s32) arg3, arg4);
        }
    }
}

s32 func_151AC078(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg8, s32 arg11, void *arg13, u8 arg14) {
    s8 spE1;
    s32 spDC;
    s16 spDA;
    s16 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s8 spC7;
    s8 spC6;
    u8 spC5;
    u8 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    s8 spA5;
    s8 spA4;
    s32 spA0;
    s32 sp9C;
    s32 sp98;
    s32 sp94;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp72;
    f32 sp6C;
    f32 sp68;
    s32 sp60;
    s32 sp5C;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_t3;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = (*(&D_800A9021 + (arg11 * 5)) * 0x30) + &D_800A9068;
    sp84 = func_151423D8(arg8);
    sp80 = func_151423D8(((s32) arg8 - 0x40) & 0xFF);
    sp88 = 0;
    sp8C = 1;
    sp90 = 0x160600;
    sp94 = 1;
    sp98 = 0x10;
    sp9C = 0x80;
    spA0 = 0x20;
    spA4 = 0;
    spA5 = 9;
    spDC = 1;
    spDA = 1;
    spD0 = arg3;
    spC0 = arg3;
    spCC = arg2;
    spD4 = arg4;
    spC6 = 0xFF;
    spC5 = *(&D_800AB3F4 + (*(s32 *)((char *)(arg13) + 0x8)));
    if (*(&D_800AB404 + (*(s32 *)((char *)(arg13) + 0x8))) != 0) {
        var_v0 = 0x20;
    } else {
        var_v0 = 0;
    }
    spC4 = var_v0 | 8;
    if (random_float() < (*(s32 *)((char *)(temp_s0) + 0x2C))) {
        spC4 |= 3;
        sp60 = 6;
        sp5C = 2;
    } else {
        sp60 = 0;
        sp5C = 0;
        spC4 &= 0xFFFC;
    }
    spC7 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x0));
    temp_t3 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x4)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x2));
    sp72 = temp_t3;
    sp6C = func_151423D8(temp_t3 & 0xFF);
    sp68 = func_151423D8((sp72 - 0x40) & 0xFF);
    temp_f2 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0xC))) + (*(s32 *)((char *)(temp_s0) + 0x8));
    temp_f12 = temp_f2 * sp6C;
    spB0 = temp_f12 * sp80;
    spB4 = -temp_f2 * sp68;
    spB8 = temp_f12 * sp84;
    spE1 = (random_u32(temp_f12) % (u32) ((*(u32 *)((char *)(temp_s0) + 0x14)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x10));
    spD8 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1A)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x18));
    spAC = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x20))) + (*(s32 *)((char *)(temp_s0) + 0x1C));
    spBC = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x28))) + (*(s32 *)((char *)(temp_s0) + 0x24));
    func_15147DA0(&spCC, &spAC, 0, 1, 8, 0, sp60, sp5C, 0, 0, 0, &sp88, (*(s32 *)((char *)(arg13) + 0x0)), (s32) arg14, (*(s32 *)((char *)(arg13) + 0x4)));
    return 1;
}

s32 func_151AC3CC(void *arg0) {
    s32 temp_t6;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_t6 = (*(s32 *)((char *)(arg0) + 0x1C)) * 8;
    var_v1 = temp_t6;
    if (temp_t6 >= 0x100) {
        var_v1 = 0xFF;
    }
    if (var_v1 < (s32) (*(s32 *)((char *)(temp_v0) + 0x1B))) {
        (*(u8 *)((char *)(temp_v0) + 0x1B)) = (u8) var_v1;
    }
    return 1;
}

s32 func_151AC408(void *arg0, void * arg1, void * arg2, void * arg3, f32 arg4, void * *arg5) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    u8 sp4B;
    s32 temp_v0;
    void *temp_s1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_s1 = (*(s32 *)((char *)(arg0) + 0x98));
    sp50 = arg4;
    sp4C = (*(s32 *)((char *)(temp_v0) + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14)));
    sp54 = (*(s32 *)((char *)((temp_v0 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14))) + 0x8));
    sp4B = func_151D8E20();
    if (random_u32() & 1) {
        func_151D9B8C(sp4B, (*(s32 *)((char *)(temp_s1) + 0x0)) * 6.0f, (*(s32 *)((char *)(temp_s1) + 0x1B)), arg5, &sp4C, (random_u32() % 41U) + 0x50, 1, 1, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    } else {
        func_151DAB58(sp4B, (*(s32 *)((char *)(temp_s1) + 0x0)) * 1.5f, (*(s32 *)((char *)(temp_s1) + 0x1B)), &sp4C, 1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    }
    (*(s32 *)((char *)(temp_s1) + 0x20)) = 4;
    return 1;
}

s32 func_151AC550(void *arg0, void * arg1, void * arg2, void * arg3, f32 arg4, s32 arg5) {
    void *sp44;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s32 temp_v0;

    sp44 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x94));
    sp38 = arg4;
    sp34 = (*(s32 *)((char *)(temp_v0) + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14)));
    sp3C = (*(s32 *)((char *)((temp_v0 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x14))) + 0x8));
    func_151DBCBC(func_151D8E20() & 0xFF, (*(s32 *)((char *)(sp44) + 0x0)) * 7.0f, (*(s32 *)((char *)(sp44) + 0x1B)), arg5, &sp34, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    (*(s32 *)((char *)(sp44) + 0x20)) = 4;
    return 1;
}

s32 func_151AC61C(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg8, s32 arg11, void *arg13, u8 arg14) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp6C;
    u32 sp60;
    f32 sp5C;
    u32 sp58;
    f32 sp54;
    s32 var_t0;
    void *temp_s0;

    temp_s0 = (*(&D_800A9023 + (arg11 * 5)) * 0x2C) + &D_800A9180;
    sp78 = arg2;
    sp7C = arg3;
    sp80 = arg4;
    sp60 = random_u32(arg2, arg3);
    func_15143794(arg8, (s16) ((sp60 % (u32) ((*(s16 *)((char *)(temp_s0) + 0x6)) + 1)) + (*(s16 *)((char *)(temp_s0) + 0x4))), (random_float() * (*(s16 *)((char *)(temp_s0) + 0xC))) + (*(s16 *)((char *)(temp_s0) + 0x8)), &sp6C);
    sp54 = random_float();
    sp58 = random_u32();
    sp60 = random_u32();
    sp5C = random_float();
    var_t0 = 0;
    if (random_float() < (*(s32 *)((char *)(temp_s0) + 0x28))) {
        var_t0 = 1;
    }
    func_151D9014(&sp78, &sp6C, (*(s32 *)((char *)(arg13) + 0x8)), (sp54 * (*(s32 *)((char *)(temp_s0) + 0x24))) + (*(s32 *)((char *)(temp_s0) + 0x20)), var_t0, 0x3F800000, 1.0f, 1, (*(s32 *)((char *)(arg13) + 0x0)), 1, 0, (s32) arg14, (*(s32 *)((char *)(arg13) + 0x4)));
    return 1;
}

void *func_151AC810(void *arg0, s32 arg1) {
    void *sp4C;
    void *sp48;
    u8 sp37;
    void *sp30;
    s32 sp2C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_a1;
    s32 temp_f16;
    s32 temp_f16_2;
    s32 temp_f16_3;
    s32 temp_f6;
    s32 temp_f6_2;
    s32 temp_f8;
    s32 temp_t0;
    void *temp_v0;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp4C, &sp37);
    sp48 = sp4C;
    if (sp4C != NULL) {
        if (sp37 != 0) {
            temp_v0 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp2C = temp_a1;
            sp30 = temp_v0;
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_t0 = arg1 * 4;
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C)) * (*(s32 *)((char *)(arg0) + 0x4C));
        (*(s32 *)((char *)(sp4C) + 0x6)) = 0;
        (*(s32 *)((char *)(sp4C) + 0x16)) = 0;
        temp_f2 = (*(s32 *)((char *)(D_800DD1D8) + temp_t0)) * temp_f0;
        (*(s32 *)((char *)(sp4C) + 0x26)) = 0;
        temp_f12 = (*(s32 *)((char *)(D_800DD1E8) + temp_t0)) * temp_f0;
        (*(s32 *)((char *)(sp4C) + 0x36)) = 0;
        temp_f8 = (s32) ((*(s32 *)((char *)(arg0) + 0x34)) + temp_f12);
        (*(s16 *)((char *)(sp4C) + 0x30)) = (s16) temp_f8;
        (*(s16 *)((char *)(sp4C) + 0x0)) = (s16) temp_f8;
        temp_f16 = (s32) (*(s32 *)((char *)(arg0) + 0x38));
        (*(s16 *)((char *)(sp4C) + 0x12)) = (s16) temp_f16;
        (*(s16 *)((char *)(sp4C) + 0x2)) = (s16) temp_f16;
        temp_f6 = (s32) ((*(s32 *)((char *)(arg0) + 0x3C)) - temp_f2);
        (*(s16 *)((char *)(sp4C) + 0x34)) = (s16) temp_f6;
        (*(s16 *)((char *)(sp4C) + 0x4)) = (s16) temp_f6;
        temp_f16_2 = (s32) ((*(s32 *)((char *)(arg0) + 0x34)) - temp_f12);
        (*(s16 *)((char *)(sp4C) + 0x20)) = (s16) temp_f16_2;
        (*(s16 *)((char *)(sp4C) + 0x10)) = (s16) temp_f16_2;
        temp_f6_2 = (s32) ((*(s32 *)((char *)(arg0) + 0x38)) + ((*(s32 *)((char *)(arg0) + 0x30)) * (*(s32 *)((char *)(arg0) + 0x50))));
        (*(s16 *)((char *)(sp4C) + 0x32)) = (s16) temp_f6_2;
        (*(s16 *)((char *)(sp4C) + 0x22)) = (s16) temp_f6_2;
        temp_f16_3 = (s32) ((*(s32 *)((char *)(arg0) + 0x3C)) + temp_f2);
        (*(s16 *)((char *)(sp4C) + 0x24)) = (s16) temp_f16_3;
        (*(s16 *)((char *)(sp4C) + 0x14)) = (s16) temp_f16_3;
        return sp48;
    }
    return NULL;
}

s32 func_151AC9EC(void *arg0) {
    f32 temp_f0;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4;
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + temp_f0);
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) + temp_f0);
    return 1;
}

s32 func_151ACA20(void *arg0) {
    s16 temp_v1;
    s16 var_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x1C));
    var_v0 = 0xFF;
    if (temp_v1 < 0x10) {
        var_v0 = temp_v1 * 0x10;
    }
    if (var_v0 < (s32) (*(s32 *)((char *)(arg0) + 0x5C))) {
        (*(u8 *)((char *)(arg0) + 0x5C)) = (u8) var_v0;
    }
    return 1;
}

void *func_151ACA60(void * *arg0, f32 arg1, s32 arg2) {
    void *sp2C;
    void *temp_v0;

    if (arg0 == NULL) {
        return NULL;
    }
    temp_v0 = func_15167A68(0x30, 0, arg2 + 0x30, 1, 0xFF, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    sp2C = temp_v0;
    if (func_151ACB38(arg0, (char *)(temp_v0) + 0x18, temp_v0) == 0) {
        func_1516979C(temp_v0);
        return NULL;
    }
    (*(s32 *)((char *)(temp_v0) + 0x1C)) = arg0;
    (*(s32 *)((char *)(temp_v0) + 0x24)) = (s32) ((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812);
    (*(u8 *)((char *)(temp_v0) + 0x20)) = (u8) (*(u8 *)((char *)(arg0) + 0x3B));
    (*(s32 *)((char *)(temp_v0) + 0x10)) = 1;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x28)) = arg1;
    return temp_v0;
}

s32 func_151ACB38(void * *arg0, s8 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x3B)) == 1) {
        *arg1 = 1;
        var_v1 = 1;
    }
    return var_v1;
}

void func_151ACB60(void *arg0) {
    if ((*(s32 *)((char *)((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x1C))) + 0x31C))) + 0x9C)) != 0) {
        func_151AE3A8();
    }
}

void func_151ACB94(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x1C, arg0 + 0x20, arg0);
}

void *func_151ACBD4(s32 arg0, s32 arg1) {
    void *sp3C;
    void * var_a0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_a0;
    s32 temp_a2;
    s32 temp_f16;
    s32 temp_f8;
    s32 temp_lo;
    s32 temp_t6;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_s1;
    s32 var_s3;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_v0;
    s32 var_v0_2;
    s8 var_a3;
    s8 var_t0;
    s8 var_t1;
    void *temp_t7;
    void *temp_v0;
    void *temp_v0_2;

    if (D_800BE9F0 == 0x2C) {
        var_a0 = 0x4E;
    } else {
        var_a0 = 0x2F;
    }
    temp_v0 = func_15167A68(var_a0, 0, arg1 + 0x58, 1, 0xFF, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    sp3C = temp_v0;
    memcpy((char *)(temp_v0) + 0x10, arg0, 0x24);
    (*(s32 *)((char *)(temp_v0) + 0x44)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x52)) = 0;
    (*(f32 *)((char *)(temp_v0) + 0x34)) = (f32) (1.0f / (*(f32 *)((char *)(temp_v0) + 0x2C)));
    var_t2 = 0;
    (*(s32 *)((char *)(temp_v0) + 0x38)) = allocate_memory(6.73e-43f, 1, 0, 0);
    temp_f8 = (s32) (*(s32 *)((char *)(temp_v0) + 0x18));
    temp_f16 = (s32) (*(s32 *)((char *)(temp_v0) + 0x24));
    (*(s32 *)((char *)(temp_v0) + 0x42)) = 0x14;
    temp_a2 = temp_f8 - temp_f16;
    var_v0 = 0 * 0x18;
    temp_f2 = (f32) (s32) (*(f32 *)((char *)(temp_v0) + 0x14));
    var_a0_2 = temp_a2 * 0;
    temp_f12 = (f32) (s32) (*(f32 *)((char *)(temp_v0) + 0x1C));
    do {
        (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x38))) + var_v0)) = temp_f2;
        (*(f32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0x4)) = (f32) ((var_a0_2 / 19) + temp_f16);
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0x8)) = temp_f12;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0xC)) = 0.0f;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0x10)) = 0.0f;
        temp_lo = temp_a2 * (var_t2 + 1);
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0x14)) = 0.0f;
        var_t2 += 2;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0x18)) = temp_f2;
        (*(f32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0x1C)) = (f32) ((temp_lo / 19) + temp_f16);
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0x20)) = temp_f12;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0x24)) = 0.0f;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0x28)) = 0.0f;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + var_v0)) + 0x2C)) = 0.0f;
        var_v0 += 0x30;
        var_a0_2 += (temp_f8 - temp_f16) * 2;
    } while (var_t2 != 0x14);
    (*(f32 *)((char *)(temp_v0) + 0x3C)) = (f32) ((f32) (temp_f8 - temp_f16) / (f32) 0x13);
    sp3C = temp_v0;
    (*(s32 *)((char *)(temp_v0) + 0x48)) = allocate_memory(temp_f12, 0xA00, 1, 2, 0);
    if (D_800BE9F0 == 0xB) {
        (*(s32 *)((char *)(temp_v0) + 0x40)) = 0x37U;
        var_s1 = 4;
    } else {
        (*(s32 *)((char *)(temp_v0) + 0x40)) = 0x36U;
        var_s1 = 5;
    }
    var_a3 = 0xFF;
    var_t0 = 0xFF;
    if (D_800BE9F0 == 0x39) {
        var_a3 = 0x58;
        var_t0 = 0x4B;
        var_t1 = 0x2C;
    } else {
        var_t1 = 0xFF;
    }
    temp_v0_2 = ((*(s32 *)((char *)(temp_v0) + 0x40)) * 0xC) + &D_80090B60;
    var_s3 = 0;
    temp_t6 = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x6)) >> 2;
    do {
        var_v0_2 = var_s3 * 0x500;
        var_t2_2 = 0;
        var_a1 = 0x100;
loop_17:
        temp_a0 = var_a1 << var_s1;
        var_t2_2 += 1;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x6)) = 0;
        var_a1 += (*(s32 *)((char *)(temp_v0_2) + 0x8)) - 1;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x8)) = 0x2000;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0xA)) = temp_a0;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0xC)) = var_a3;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0xD)) = var_t0;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0xE)) = var_t1;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0xF)) = 0xFF;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x16)) = 0;
        (*(s16 *)((char *)(((*(s16 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x18)) = (s16) ((temp_t6 + 0x100) << 5);
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x1A)) = temp_a0;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x1C)) = var_a3;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x1D)) = var_t0;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x1E)) = var_t1;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x1F)) = 0xFF;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x26)) = 0;
        (*(s16 *)((char *)(((*(s16 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x28)) = (s16) (((temp_t6 * 2) + 0x100) << 5);
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x2A)) = temp_a0;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x2C)) = var_a3;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x2D)) = var_t0;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x2E)) = var_t1;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x2F)) = 0xFF;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x36)) = 0;
        (*(s16 *)((char *)(((*(s16 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x38)) = (s16) (((temp_t6 * 3) + 0x100) << 5);
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x3A)) = temp_a0;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x3C)) = var_a3;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x3D)) = var_t0;
        (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2)) + 0x3E)) = var_t1;
        temp_t7 = (*(s32 *)((char *)(temp_v0) + 0x48)) + var_v0_2;
        var_v0_2 += 0x40;
        (*(s32 *)((char *)(temp_t7) + 0x3F)) = 0xFF;
        if (var_t2_2 != 0x14) {
            goto loop_17;
        }
        var_s3 += 1;
    } while (var_s3 != 2);
    (*(s32 *)((char *)(temp_v0) + 0x4C)) = 0.0f;
    return temp_v0;
}

void func_151AD174(void *arg0) {
    s32 sp2F8;
    s32 sp2F4;
    f32 sp2E8;
    f32 sp2DC;
    f32 sp1EC;
    void * spFC;
    void * spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spB0;
    f32 spAC;
    f32 sp84;
    f32 sp7C;
    void * *var_a2;
    void * *var_v0_2;
    f32 *temp_v0_6;
    f32 *var_a1;
    f32 *var_a1_2;
    f32 *var_a1_3;
    f32 *var_a2_2;
    f32 *var_a2_3;
    f32 *var_t2;
    f32 *var_v0_3;
    f32 *var_v0_4;
    f32 *var_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f24_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 temp_f8;
    f32 var_f14;
    f32 var_f20;
    f32 var_f2;
    s16 temp_v0;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_t0;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s3;
    s32 var_t6;
    s8 var_v1;
    u16 temp_a0;
    u16 temp_a1;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s1_5;
    void *temp_s1_6;
    void *temp_s1_7;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_s2;
    void *var_t2_2;
    void *var_v0;
    void *var_v1_3;
    void *var_v1_4;

    f32 sp2EC;
    f32 sp2F0;
    f32 sp2E4;
    spD8 = 0.0f;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x52));
    if (temp_v0 != 0) {
        (*(s16 *)((char *)(arg0) + 0x52)) = (s16) (temp_v0 - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x52)) < 0) {
            (*(s32 *)((char *)(arg0) + 0x52)) = 0;
        }
    }
    sp2F8 = (*(s32 *)((char *)(arg0) + 0x42)) - 1;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x44));
    if (temp_v1 != NULL) {
        temp_v0_2 = (*(s32 *)((char *)(temp_v1) + 0x31C));
        sp2F4 = (s32) (*(s32 *)((char *)(temp_v0_2) + 0xAE));
        temp_s2 = ((*(s32 *)((char *)(temp_v0_2) + 0xAC)) + ((s32) (*(s32 *)((char *)(temp_v1) + 0x76)) >> 8)) & 0xFF;
        temp_f20 = (*(s32 *)((char *)(temp_v0_2) + 0xA8)) * D_800A9278;
        temp_s3 = sp2F4 * 0x18;
        temp_s1 = (*(s32 *)((char *)(arg0) + 0x38)) + temp_s3;
        (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) + (temp_f20 * func_150489B0(temp_s2 & 0xFF)));
        temp_s1_2 = (*(s32 *)((char *)(arg0) + 0x38)) + temp_s3;
        (*(f32 *)((char *)(temp_s1_2) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s1_2) + 0x14)) - (temp_f20 * func_15048A40(temp_s2 & 0xFF)));
        temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x44));
        temp_a1 = (*(s32 *)((char *)(temp_v1_2) + 0x76));
        temp_s2_2 = ((s32) temp_a1 >> 8) & 0xFF;
        temp_f20_2 = (*(s32 *)((char *)(temp_v1_2) + 0x3C)) * 19.0f;
        temp_s1_3 = (*(s32 *)((char *)(arg0) + 0x38)) + temp_s3;
        (*(f32 *)((char *)(temp_s1_3) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1_3) + 0xC)) + (temp_f20_2 * func_150489B0(temp_s2_2 & 0xFF, temp_a1)));
        temp_s1_4 = (*(s32 *)((char *)(arg0) + 0x38)) + temp_s3;
        (*(f32 *)((char *)(temp_s1_4) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s1_4) + 0x14)) - (temp_f20_2 * func_15048A40(temp_s2_2 & 0xFF)));
        temp_s1_5 = (*(s32 *)((char *)(arg0) + 0x38)) + temp_s3;
        (*(f32 *)((char *)(temp_s1_5) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s1_5) + 0x10)) - 1000.0f);
        var_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x44))) + 0x31C));
        var_v1 = (*(s32 *)((char *)(var_v0) + 0xAD)) - 1;
        if (var_v1 <= 0) {
            (*(s32 *)((char *)(var_v0) + 0xA8)) = 0.0f;
            var_v1 = 0;
            var_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x44))) + 0x31C));
        }
        (*(s32 *)((char *)(var_v0) + 0xAD)) = var_v1;
    }
    if ((*(s32 *)((char *)(arg0) + 0x4C)) != 0.0f) {
        temp_s1_6 = (*(s32 *)((char *)(arg0) + 0x38)) + ((*(s32 *)((char *)(arg0) + 0x51)) * 0x18);
        (*(f32 *)((char *)(temp_s1_6) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1_6) + 0xC)) - ((*(f32 *)((char *)(arg0) + 0x4C)) * func_150489B0((*(f32 *)((char *)(arg0) + 0x50)))));
        temp_s1_7 = (*(s32 *)((char *)(arg0) + 0x38)) + ((*(s32 *)((char *)(arg0) + 0x51)) * 0x18);
        (*(f32 *)((char *)(temp_s1_7) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s1_7) + 0x14)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * func_15048A40((*(f32 *)((char *)(arg0) + 0x50)))));
        (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800A927C);
    }
    var_a3 = 0;
    var_t2 = &sp1EC;
    temp_t0 = sp2F8 + 1;
    var_a2 = &spFC;
    if (temp_t0 > 0) {
        do {
            var_a0 = 0;
            var_v1_2 = var_t2;
            var_v0_2 = var_a2;
loop_12:
            *var_v1_2 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x38))) + (var_a3 * 0x18) + var_a0));
            var_v1_2 += 4;
            temp_f4 = (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x38)) + (var_a3 * 0x18) + var_a0)) + 0xC));
            var_a0 += 4;
            var_v0_2 = (char *)(var_v0_2) + 4;
            (*(s32 *)((char *)(var_v0_2) - 0x4)) = temp_f4;
            if (var_a0 != 0xC) {
                goto loop_12;
            }
            var_a3 += 1;
            var_t2 += 0xC;
            var_a2 = (char *)(var_a2) + 0xC;
        } while (var_a3 != temp_t0);
    }
    temp_v0_3 = sp2F8 - 1;
    var_a3_2 = temp_v0_3;
    if (temp_v0_3 >= 0) {
        var_s2 = (temp_v0_3 * 0xC) + &sp1EC;
        var_t2_2 = (temp_v0_3 * 0xC) + &sp1EC;
        var_s3 = temp_v0_3 * 0x18;
        sp7C = -9.0f;
        sp84 = 9.0f * 9.0f;
        do {
            var_a0_2 = 0;
            var_v1_3 = var_t2_2;
            var_a1 = &sp2E8;
            var_v0_3 = &sp2DC;
            var_a2_2 = &spDC;
loop_17:
            temp_f0 = (*(s32 *)((char *)(var_v1_3) + 0x0));
            *var_a1 = temp_f0;
            temp_f4_2 = temp_f0 - (*(s32 *)((char *)(var_v1_3) + 0xC));
            temp_f8 = (*(s32 *)((char *)(((*(s32 *)((char *)(arg0) + 0x38)) + (var_a3_2 * 0x18) + var_a0_2)) + 0xC));
            var_a2_2 += 4;
            var_a0_2 += 4;
            var_v1_3 = (char *)(var_v1_3) + 4;
            var_a1 += 4;
            var_v0_3 += 4;
            (*(s32 *)((char *)(var_a2_2) - 0x4)) = temp_f4_2;
            (*(s32 *)((char *)(var_v0_3) - 0x4)) = temp_f8;
            if ((u32) var_a2_2 < (u32) &spE8) {
                goto loop_17;
            }
            temp_f30 = sp2E8 - (*(s32 *)((char *)(var_s2) + 0xC));
            temp_f2 = sp2EC - (*(s32 *)((char *)(var_s2) + 0x10));
            temp_f22 = temp_f30 * temp_f30;
            temp_f12 = sp2F0 - (*(s32 *)((char *)(var_s2) + 0x14));
            spB0 = temp_f2;
            var_a0_3 = 0;
            temp_f24 = temp_f12 * temp_f12;
            spAC = temp_f12;
            var_a1_2 = &sp2E8;
            var_v0_4 = &sp2DC;
            var_a2_3 = &spDC;
            var_f14 = sqrtf(temp_f22 + (temp_f2 * temp_f2) + temp_f24);
            temp_f0_2 = sqrtf(temp_f22 + temp_f24);
            if (var_f14 == 0.0f) {
                var_f14 = 1.0f;
            }
            temp_f2_2 = 9.0f * (temp_f0_2 / var_f14);
            temp_f12_2 = temp_f2_2 * temp_f2_2;
            if (temp_f12_2 <= sp84) {
                var_f20 = sqrtf(sp84 - temp_f12_2);
            } else {
                var_f20 = 0.0f;
            }
            temp_f14 = var_f20 / var_f14;
            spDC = 0.0f - (temp_f30 * temp_f14);
            spE0 = sp7C - (spB0 * temp_f14);
            spE4 = 0.0f - (spAC * temp_f14);
loop_24:
            temp_f6 = *var_a2_3;
            var_a2_3 += 4;
            temp_v1_3 = (char *)(var_t2_2) + var_a0_3;
            *var_v0_4 += temp_f6;
            *var_v0_4 *= D_800A9280;
            if (var_a3_2 != 0) {
                temp_f0_3 = (((*(s32 *)((char *)(temp_v1_3) - 0xC)) + (*(s32 *)((char *)(temp_v1_3) + 0xC))) * 0.5f) - *var_a1_2;
                (*(void **)(&spE8 + var_a0_3)) = (*(void **)&(temp_f0_3));
                *var_v0_4 = (f32) ((f64) *var_v0_4 + ((f64) temp_f0_3 * D_800A9288));
            }
            temp_f10 = *var_a1_2;
            var_a0_3 += 4;
            var_a1_2 += 4;
            (*(f32 *)((char *)(var_a1_2) - 0x4)) = (f32) (temp_f10 + *var_v0_4);
            if ((D_800BE9F0 == 0x39) && (D_800A9284 < sp2E8)) {
                sp2E8 = D_800A9284;
            }
            var_v0_4 += 4;
            if ((u32) var_a2_3 < (u32) &spE8) {
                goto loop_24;
            }
            temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x38)) + var_s3;
            temp_f2_3 = sp2F0 - (*(s32 *)((char *)(temp_v0_4) + 0x20));
            temp_f12_3 = sp2E8 - (*(s32 *)((char *)(temp_v0_4) + 0x18));
            temp_f14_2 = sp2EC - (*(s32 *)((char *)(temp_v0_4) + 0x1C));
            var_a0_4 = 0;
            var_v1_4 = var_t2_2;
            spD8 = spD8 + fabsf(sp2DC) + fabsf(sp2E4);
            temp_f0_4 = sqrtf((temp_f2_3 * temp_f2_3) + ((temp_f12_3 * temp_f12_3) + (temp_f14_2 * temp_f14_2)));
            if (temp_f0_4 != 0.0f) {
                var_f2 = (*(s32 *)((char *)(arg0) + 0x3C)) / temp_f0_4;
            } else {
                var_f2 = 1.0f;
            }
            var_a1_3 = &sp2E8 + 4;
            var_t6 = var_a3_2 * 0x18;
            if ((char *)(var_a1_3) != (char *)(&sp2F4)) {
                do {
                    temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x38)) + var_t6 + var_a0_4;
                    temp_f24_2 = (*(s32 *)((char *)(temp_v0_5) + 0x18));
                    temp_f30_2 = (*(s32 *)((char *)(var_a1_3) - 0x4)) - temp_f24_2;
                    var_a1_3 += 4;
                    var_v1_4 = (char *)(var_v1_4) + 4;
                    (*(f32 *)((char *)(temp_v0_5) + 0x0)) = (f32) ((temp_f30_2 * var_f2) + temp_f24_2);
                    temp_v0_6 = (*(s32 *)((char *)(arg0) + 0x38)) + (var_a3_2 * 0x18) + var_a0_4;
                    temp_f24_3 = (*(s32 *)((char *)(temp_v0_6) + 0x0)) - (*(s32 *)((char *)(var_v1_4) - 0x4));
                    var_a0_4 += 4;
                    var_t6 = var_a3_2 * 0x18;
                    (*(s32 *)((char *)(temp_v0_6) + 0xC)) = temp_f24_3;
                } while ((char *)(var_a1_3) != (char *)(&sp2F4));
            }
            temp_v0_7 = (*(s32 *)((char *)(arg0) + 0x38)) + var_t6 + var_a0_4;
            temp_f24_4 = (*(s32 *)((char *)(temp_v0_7) + 0x18));
            (*(f32 *)((char *)(temp_v0_7) + 0x0)) = (f32) ((((*(f32 *)((char *)(var_a1_3) - 0x4)) - temp_f24_4) * var_f2) + temp_f24_4);
            temp_v0_8 = (*(s32 *)((char *)(arg0) + 0x38)) + (var_a3_2 * 0x18) + var_a0_4;
            (*(f32 *)((char *)(temp_v0_8) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_v0_8) + 0x0)) - (*(f32 *)((char *)(((char *)(var_v1_4) + 4)) - 0x4)));
            var_a3_2 -= 1;
            var_t2_2 = (char *)(var_t2_2) - 0xC;
            var_s2 = (char *)(var_s2) - 0xC;
            var_s3 -= 0x18;
        } while (var_a3_2 >= 0);
    }
    if ((spD8 > 250.0f) && ((temp_a0 = (*(s32 *)((char *)(arg0) + 0x54)), (temp_a0 == 0)) || (func_1000F3D0(temp_a0) == 0))) {
        (*(s32 *)((char *)(arg0) + 0x54)) = func_10010E78(0, (random_u32() % 9U) + 0x507, 0x7530, 0, 0, 0, (s32) sp2E8, (s32) sp2EC, (s32) sp2F0, 0xFA, -0x7E0C);
    }
}

void *func_151AD92C(void *arg0, void *arg1, void * arg2) {
    s32 sp128;
    s32 sp124;
    s32 sp11C;
    s32 sp118;
    f32 sp104;
    f32 sp100;
    s32 sp94;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f12_3;
    f32 var_f14;
    f32 var_f14_2;
    f32 var_f14_3;
    f32 var_f18;
    f32 var_f22;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    s32 temp_ra;
    s32 temp_v1_2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t3;
    s32 var_t3_2;
    s32 var_t4;
    s32 var_t5;
    s32 var_v1;
    u16 temp_s1;
    u16 temp_v0;
    u8 temp_t2;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *var_a0;

    var_f12 = (*(f32 *)&arg0);
    var_f14 = (*(f32 *)&arg1);
    temp_v0 = (*(s32 *)((char *)(*(void **)&(arg1)) + 0x40));
    temp_t2 = (*(s32 *)((char *)(*(void **)&(arg1)) + 0x42));
    temp_v1 = &D_80090B60 + (temp_v0 * 0xC);
    temp_s1 = (*(s32 *)((char *)(temp_v1) + 0x6));
    sp11C = (*(s32 *)((char *)(temp_v1) + 0x8)) - 1;
    if (temp_v0 == 0x36) {
        sp118 = 5;
    } else {
        sp118 = 4;
    }
    var_t0 = 0;
    if ((s32) temp_t2 > 0) {
        var_v1 = 0;
        var_t3 = 1;
        do {
            temp_v0_2 = (*(s32 *)((char *)(*(void **)&(arg1)) + 0x38)) + var_v1;
            temp_f12 = (*(s32 *)((char *)(temp_v0_2) + 0x4));
            temp_f0 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
            var_v1 += 0x18;
            sp104 = temp_f12;
            temp_f14 = (*(s32 *)((char *)(temp_v0_2) + 0x8));
            sp100 = temp_f14;
            if (temp_t2 != var_t3) {
                var_f22 = (*(s32 *)((char *)(temp_v0_2) + 0x18)) - temp_f0;
                var_f2 = (*(s32 *)((char *)(temp_v0_2) + 0x1C)) - temp_f12;
                var_f18 = (*(s32 *)((char *)(temp_v0_2) + 0x20)) - temp_f14;
            } else {
                var_f2 = 1.0f;
                var_f22 = 0.0f;
                var_f18 = 0.0f;
            }
            temp_f24 = -var_f2;
            temp_f26 = temp_f24 * temp_f24;
            temp_f0_2 = sqrtf((var_f18 * var_f18) + temp_f26);
            if (temp_f0_2 != 0.0f) {
                var_f2_2 = 0.0f;
                temp_f16 = 1.0f / temp_f0_2;
                var_f12_2 = var_f18 * temp_f16;
                var_f14_2 = temp_f24 * temp_f16;
            } else {
                var_f2_2 = 100.0f;
                var_f12_2 = 0.0f;
                var_f14_2 = 0.0f;
            }
            temp_f2 = var_f2_2 * 4.0f;
            temp_f12_2 = var_f12_2 * 4.0f;
            temp_f14_2 = var_f14_2 * 4.0f;
            (*(s16 *)((char *)((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48))) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) = (s16) (s32) (temp_f0 + temp_f2);
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x2)) = (s16) (s32) (sp104 + temp_f12_2);
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x4)) = (s16) (s32) (sp100 + temp_f14_2);
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x20)) = (s16) (s32) (temp_f0 - temp_f2);
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x22)) = (s16) (s32) (sp104 - temp_f12_2);
            temp_f0_3 = sqrtf(temp_f26 + (var_f22 * var_f22));
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x24)) = (s16) (s32) (sp100 - temp_f14_2);
            if (temp_f0_3 != 0.0f) {
                var_f14_3 = 0.0f;
                temp_f16_2 = 1.0f / temp_f0_3;
                var_f2_3 = temp_f24 * temp_f16_2;
                var_f12_3 = var_f22 * temp_f16_2;
            } else {
                var_f2_3 = 1.0f;
                var_f14_3 = 1.0f;
                var_f12_3 = 0.0f;
            }
            temp_f2_2 = var_f2_3 * 4.0f;
            var_f12 = var_f12_3 * 4.0f;
            var_f14 = var_f14_3 * 4.0f;
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x10)) = (s16) (s32) (temp_f0 + temp_f2_2);
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x12)) = (s16) (s32) (sp104 + var_f12);
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x14)) = (s16) (s32) (sp100 + var_f14);
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x30)) = (s16) (s32) (temp_f0 - temp_f2_2);
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x32)) = (s16) (s32) (sp104 - var_f12);
            (*(s16 *)((char *)(((*(s16 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0) << 6))) + 0x34)) = (s16) (s32) (sp100 - var_f14);
            var_t0 = var_t3;
            var_t3 += 1;
        } while (var_t3 != temp_t2);
    }
    (*(s32 *)((char *)(*(void **)&(arg0)) + 0x4)) = 0x400;
    (*(s32 *)((char *)(*(void **)&(arg0)) + 0x0)) = 0xD9FFFFFF;
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(*(void **)&(arg0)) + 0x8)) = 0xD9FFFDFF;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = 0;
    temp_a0_2 = (char *)(temp_a0) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = -1;
    (*(s32 *)((char *)(temp_a0) + 0x8)) = 0xD7000002;
    temp_a0_3 = (char *)(temp_a0_2) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xE7000000;
    (*(s32 *)((char *)(temp_a0_3) + 0x4)) = 0;
    sp124 = (s32) temp_t2;
    sp128 = 0;
    temp_v0_3 = func_15094FE8(var_f12, var_f14, (char *)(temp_a0_3) + 8, &D_80090B60 + ((*(s32 *)((char *)(*(void **)&(arg1)) + 0x40)) * 0xC), 0, 0, 0, 0, 0, 0, 0x100, 0x100, 0x3E);
    var_t0_2 = 0;
    (*(s32 *)((char *)(temp_v0_3) + 0x0)) = 0xFC121824;
    (*(s32 *)((char *)(temp_v0_3) + 0x4)) = 0xFF33FFFF;
    var_a0 = (char *)(temp_v0_3) + 0x10;
    (*(s32 *)((char *)(temp_v0_3) + 0x8)) = (s32) (((D_800D2C9C | 0x80000 | 0x2C0F) & 0xFFFFFF) | 0xEF000000);
    (*(s32 *)((char *)(temp_v0_3) + 0xC)) = 0x552078;
    temp_v1_2 = temp_t2 - 1;
    if (temp_v1_2 > 0) {
        temp_ra = (temp_s1 + 0x100) << 0x15;
        var_t3_2 = 1;
        var_t4 = 0x100;
        var_t5 = sp11C + 0x100;
        sp94 = temp_v1_2;
        do {
            (*(s32 *)((char *)(var_a0) + 0x0)) = 0x01008010;
            temp_a0_4 = (char *)(var_a0) + 8;
            temp_a0_5 = (char *)(temp_a0_4) + 8;
            temp_a0_6 = (char *)(temp_a0_5) + 8;
            temp_a0_7 = (char *)(temp_a0_6) + 8;
            temp_a0_8 = (char *)(temp_a0_7) + 8;
            (*(s32 *)((char *)(var_a0) + 0x4)) = (s32) ((*(s32 *)((char *)(*(void **)&(arg1)) + 0x48)) + (((D_800BE9C0 * temp_t2) + var_t0_2) << 6));
            (*(s32 *)((char *)(var_a0) + 0x8)) = 0x05000208;
            (*(s32 *)((char *)(temp_a0_4) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_a0_4) + 0x8)) = 0x05020A08;
            (*(s32 *)((char *)(temp_a0_5) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_a0_5) + 0x8)) = 0x0502040A;
            (*(s32 *)((char *)(temp_a0_6) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_a0_6) + 0x8)) = 0x05040C0A;
            (*(s32 *)((char *)(temp_a0_7) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_a0_7) + 0x8)) = 0x0504060E;
            (*(s32 *)((char *)(temp_a0_8) + 0x4)) = 0;
            temp_a0_9 = (char *)(temp_a0_8) + 8;
            (*(s32 *)((char *)(temp_a0_8) + 0x8)) = 0x05040E0C;
            (*(s32 *)((char *)(temp_a0_9) + 0x4)) = 0;
            temp_a0_10 = (char *)(temp_a0_9) + 8;
            (*(s32 *)((char *)(temp_a0_9) + 0x8)) = 0x02140000;
            temp_a0_11 = (char *)(temp_a0_10) + 8;
            (*(s32 *)((char *)(temp_a0_10) + 0x4)) = (s32) (temp_ra | (var_t4 << sp118));
            (*(s32 *)((char *)(temp_a0_10) + 0x8)) = 0x02140008;
            temp_a0_12 = (char *)(temp_a0_11) + 8;
            (*(s32 *)((char *)(temp_a0_11) + 0x4)) = (s32) (temp_ra | (var_t5 << sp118));
            (*(s32 *)((char *)(temp_a0_11) + 0x8)) = 0x0506000E;
            temp_a0_13 = (char *)(temp_a0_12) + 8;
            (*(s32 *)((char *)(temp_a0_12) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_a0_12) + 0x8)) = 0x0500080E;
            (*(s32 *)((char *)(temp_a0_13) + 0x4)) = 0;
            var_a0 = (char *)(temp_a0_13) + 8;
            if (var_t0_2 == 0) {
                (*(s32 *)((char *)(temp_a0_13) + 0x8)) = 0x05040200;
                temp_a0_14 = (char *)(var_a0) + 8;
                (*(s32 *)((char *)(var_a0) + 0x4)) = 0;
                (*(s32 *)((char *)(var_a0) + 0x8)) = 0x05060400;
                (*(s32 *)((char *)(temp_a0_14) + 0x4)) = 0;
                var_a0 = (char *)(temp_a0_14) + 8;
            }
            var_t0_2 = var_t3_2;
            var_t4 += sp11C;
            var_t5 += sp11C;
            var_t3_2 += 1;
        } while (var_t3_2 != sp94);
    }
    return var_a0;
}

void func_151AE06C(void *arg0, void *arg1) {
    void * sp1F;
    u8 sp1E;
    u8 temp_a1;
    u8 temp_v0;

    if (func_151ACB38(&sp1F, 0) != 0) {
        temp_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x98));
        temp_a1 = (*(s32 *)((char *)(arg1) + 0x1B));
        if (temp_v0 == 0) {
            func_151AE0E4(arg0, temp_a1);
            return;
        }
        if (temp_a1 != temp_v0) {
            sp1E = temp_a1;
            func_151AE264(arg0, temp_a1);
            func_151AE0E4(arg0, temp_a1);
        }
    }
}

void func_151AE0E4(void *arg0, s32 arg1) {
    void *sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f2;
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_151AE590(arg1);
    if (temp_v0 == NULL) {
loop_1:
        goto loop_1;
    }
    if (((*(s32 *)((char *)(temp_v0) + 0x52)) == 0) && ((*(s32 *)((char *)(arg0) + 0x1CA)) != 0) && ((*(s32 *)((char *)(arg0) + 0x104)) == 0)) {
        sp34 = temp_v0;
        func_151AE2BC((*(s32 *)((char *)(arg0) + 0x31C)) + 0xA0, temp_v0, (*(s32 *)((char *)(arg0) + 0x14)), (*(s32 *)((char *)(arg0) + 0x18)));
        temp_v0_2 = (s32) ((f32) (((*(s32 *)((char *)(temp_v0) + 0x42)) - (s32) (140.0f / (*(s32 *)((char *)(temp_v0) + 0x3C)))) - 1) * (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0xA0))) * 0x18;
        sp28 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x38))) + temp_v0_2));
        temp_f18 = (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + temp_v0_2)) + 0x4));
        sp2C = temp_f18;
        sp30 = (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x38)) + temp_v0_2)) + 0x8));
        temp_f2 = sp28 - (*(s32 *)((char *)(arg0) + 0x14));
        temp_f12 = temp_f18 - (*(s32 *)((char *)(arg0) + 0x18));
        temp_f0 = sp30 - (*(s32 *)((char *)(arg0) + 0x1C));
        if (!(D_800A9290 < ((temp_f0 * temp_f0) + ((temp_f2 * temp_f2) + (temp_f12 * temp_f12))))) {
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x98)) = arg1;
            (*(s32 *)((char *)(arg0) + 0x8A)) = 0x12;
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x9C)) = temp_v0;
            (*(s32 *)((char *)(temp_v0) + 0x44)) = arg0;
        }
    }
}

void func_151AE264(void *arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x9C));
    (*(f32 *)((char *)(temp_v0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) * D_800A9294);
    (*(s8 *)((char *)(temp_v0) + 0x50)) = (s8) ((s32) (*(s8 *)((char *)(arg0) + 0x76)) >> 8);
    (*(s32 *)((char *)(temp_v0) + 0x52)) = 0x14;
    (*(s32 *)((char *)(temp_v0) + 0x44)) = 0;
    (*(u8 *)((char *)(temp_v0) + 0x51)) = (u8) (*(u8 *)((char *)((*(u8 *)((char *)(arg0) + 0x31C))) + 0xAE));
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x98)) = 0;
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x9C)) = NULL;
}

void func_151AE2BC(f32 *arg0, void *arg1, f32 arg2, f32 arg3) {
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_a2;
    s32 var_v1;
    u8 temp_v0;
    void *temp_a0;
    void *var_a0;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x42));
    var_v1 = 0;
    temp_a2 = temp_v0 - 1;
    if (temp_a2 > 0) {
        var_a0 = (*(s32 *)((char *)(arg1) + 0x38));
loop_2:
        if (!(arg3 <= (*(s32 *)((char *)(var_a0) + 0x4)))) {
            var_v1 += 1;
            var_a0 = (char *)(var_a0) + 0x18;
            if (var_v1 != temp_a2) {
                goto loop_2;
            }
        }
    }
    if (var_v1 >= (temp_v0 - 2)) {
        *arg0 = 1.0f;
        return;
    }
    if (var_v1 == 0) {
        *arg0 = 0.0f;
        return;
    }
    temp_a0 = (*(s32 *)((char *)(arg1) + 0x38)) + (var_v1 * 0x18);
    temp_f2 = (*(s32 *)((char *)(temp_a0) - 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_a0) + 0x4)) - temp_f2;
    if (temp_f0 != 0.0f) {
        var_f0 = (arg3 - temp_f2) / temp_f0;
    } else {
        var_f0 = 0.0f;
    }
    *arg0 = ((f32) (var_v1 - 1) / (f32) (temp_v0 - 3)) + (var_f0 / (f32) temp_a2);
}

void func_151AE3A8(void *arg0) {
    f32 sp74;
    f32 sp70;
    f32 sp64;
    void *sp50;
    void *sp4C;
    u8 sp4B;
    f32 sp44;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6_3;
    s32 temp_a0_3;
    s32 temp_f6;
    s32 temp_f6_2;
    u8 temp_a0_2;
    void *temp_a0;
    void *temp_a2;
    void *temp_v1;

    temp_a0 = (*(s32 *)((char *)(arg0) + 0x1C));
    temp_v1 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_a0) + 0x31C))) + 0x9C));
    sp50 = temp_a0;
    sp4C = temp_v1;
    temp_a0_2 = func_15143E08(temp_a0) - 0x80;
    sp4B = temp_a0_2;
    sp44 = func_151423D8((temp_a0_2 - 0x40) & 0xFF);
    temp_f0 = func_151423D8(temp_a0_2);
    temp_a2 = (*(s32 *)((char *)(sp50) + 0x31C));
    temp_f4 = (*(s32 *)((char *)(sp50) + 0x18));
    temp_f18 = (*(s32 *)((char *)(sp50) + 0x14));
    temp_f16 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_f2 = (*(s32 *)((char *)(temp_a2) + 0xA0));
    sp70 = temp_f4;
    sp74 = (*(s32 *)((char *)(sp50) + 0x1C));
    temp_f6 = (s32) (140.0f / (*(s32 *)((char *)(temp_v1) + 0x3C)));
    temp_f6_2 = (s32) ((f32) (((*(s32 *)((char *)(temp_v1) + 0x42)) - temp_f6) - 1) * temp_f2);
    (*(s8 *)((char *)(temp_a2) + 0xAE)) = (s8) temp_f6_2;
    temp_a0_3 = temp_f6_2 * 0x18;
    sp24 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v1) + 0x38))) + temp_a0_3));
    temp_f12 = ((f32) (((*(f32 *)((char *)(temp_v1) + 0x42)) - temp_f6) - 1) * temp_f2) - (f32) temp_f6_2;
    sp28 = (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v1) + 0x38)) + temp_a0_3)) + 0x4));
    sp2C = (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v1) + 0x38)) + temp_a0_3)) + 0x8));
    sp18 = (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v1) + 0x38)) + temp_a0_3)) + 0x18));
    sp1C = (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v1) + 0x38)) + temp_a0_3)) + 0x1C));
    temp_f6_3 = (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v1) + 0x38)) + temp_a0_3)) + 0x20));
    sp20 = temp_f6_3;
    sp64 = ((sp1C - sp28) * temp_f12) + sp28;
    (*(f32 *)((char *)(sp50) + 0x14)) = (f32) (((((sp18 - sp24) * temp_f12) + sp24 + (temp_f16 * sp44)) - temp_f18) + temp_f18);
    (*(f32 *)((char *)(sp50) + 0x18)) = (f32) ((sp64 - temp_f4) + temp_f4);
    (*(f32 *)((char *)(sp50) + 0x1C)) = (f32) (((((temp_f6_3 - sp2C) * temp_f12) + sp2C + (temp_f16 * temp_f0)) - sp74) + sp74);
}

void *func_151AE590( s32 arg0) {
    s32 temp_t4;
    s32 temp_t5;
    s32 var_v0;
    s32 var_v1;
    void *temp_a2;
    void *var_a0;

    var_v0 = 0;
loop_1:
    var_v1 = 0;
loop_2:
    var_a0 = *(&D_800DCE50 + (var_v1 * 0x1A0) + (*(&D_800A9270 + (var_v0 * 4)) * 4));
    temp_t4 = (var_v1 + 1) & 0xFF;
    if (var_a0 != NULL) {
loop_3:
        temp_a2 = (*(s32 *)((char *)(var_a0) + 0x8));
        if ((arg0 & 0xFF) == (*(s32 *)((char *)(var_a0) + 0x10))) {
            return var_a0;
        }
        var_a0 = temp_a2;
        if (temp_a2 == NULL) {
            goto block_6;
        }
        goto loop_3;
    }
block_6:
    var_v1 = temp_t4;
    if (temp_t4 >= 2) {
        temp_t5 = (var_v0 + 1) & 0xFF;
        var_v0 = temp_t5;
        if (temp_t5 >= 2) {
            return NULL;
        }
        goto loop_1;
    }
    goto loop_2;
}

void func_151AE640(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v1;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        if ((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(arg0) + 0x44))) {
            (*(s32 *)((char *)(arg0) + 0x44)) = 0;
        }
    } else if (temp_t6 == 0x2D) {
        temp_v0 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x44));
        if (temp_v0 == temp_v1) {
            (*(s32 *)((char *)(arg0) + 0x44)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_v1) {
            (*(s32 *)((char *)(arg0) + 0x44)) = temp_v0;
        }
    }
}

void func_151AE6B0(void *arg0) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp28;
    f32 temp_f0;
    void *temp_a3;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x18));
    sp30 = (*(s32 *)((char *)(temp_v1) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x118));
    if (D_800A9D70 < temp_f0) {
        sp34 = temp_f0 + 100.0f;
    } else {
        sp34 = (*(s32 *)((char *)(temp_v1) + 0x18)) + 150.0f;
    }
    temp_a3 = (char *)(arg0) + 0x34;
    sp28 = temp_a3;
    sp3C = temp_v1;
    sp38 = (*(s32 *)((char *)(temp_v1) + 0x1C));
    if (func_15045800(&sp30, 0, sp34 - 300.0f, temp_a3) != 0) {
        sp34 = (*(s32 *)((char *)(arg0) + 0x34));
        func_151ABE40(&sp30, sp28, 5, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        func_10010FFC(0, 0x11, 0x5208, 0, 0, sp3C);
    }
}

s32 func_151AE7B0(void *arg0, f32 arg1, s16 arg2, u8 arg3, s32 arg4) {
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
    func_1516962C(0x28, arg0, 0x11);
    sp1C = 0;
    sp20 = 0;
    sp2C = 1;
    sp46 = 2;
    sp28 = arg0;
    sp24 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp38 = 0.0f;
    sp3C = D_800A9D80;
    sp40 = arg1;
    if (arg2 != 0) {
        sp44 = arg2;
        sp46 = 6;
    } else {
        sp44 = 0x12C;
    }
    sp47 = 6;
    sp48 = -1;
    sp49 = 5;
    return func_1513418C(&sp1C, 0, arg3, arg4);
}

void func_151AE890(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    s32 var_v0;
    u8 var_a1;

    sp2C = arg0;
    sp30 = arg1;
    sp34 = arg2;
    temp_f0 = random_float();
    if (!(temp_f0 < D_800A9D84)) {
        if (temp_f0 < 0.25f) {
            var_a1 = 0;
            if (random_float() > 0.0f) {
                var_a1 = 1;
            }
            func_151AEAB4(&sp2C, var_a1, (*(s32 *)((char *)(arg6) + 0xC)));
            return;
        }
        var_v0 = 0;
        if (D_800A9D88 < random_float()) {
            var_v0 = 1;
        }
        func_151AE984(&sp2C, arg3, arg4, arg5, var_v0, (s32) (*(s32 *)((char *)(arg6) + 0xC)));
    }
}

void func_151AE984(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4, u8 arg5) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    u32 sp50;
    u32 sp4C;
    f32 sp48;

    sp58 = -arg1 * D_800A9D8C;
    sp5C = -arg2 * D_800A9D8C;
    sp60 = -arg3 * D_800A9D8C;
    sp48 = random_float(arg1, arg2);
    sp4C = random_u32();
    sp50 = random_u32();
    func_151D9014(arg0, &sp58, 0U, (sp48 * D_800A9D90) + D_800A9D94, (sp4C % 31U) + 0x3C, (sp50 % 101U) + 0x9B, (random_float() * 219.0f) + 77.0f, (s32) arg4, 0x3F800000, 0x3F800000, 0, 0, 1, 0, (s32) arg5, 1);
}

void func_151AEAB4(f32 *arg0, s32 arg1, s32 arg2) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    u8 sp87;
    u8 sp86;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp68;
    u32 sp64;
    u32 sp60;
    f32 sp5C;
    f32 temp_f12;
    f32 temp_f2;

    sp87 = random_u32();
    sp86 = (random_u32() & 0x7F) - 0x3F;
    sp7C = func_151423D8(sp87);
    sp78 = func_151423D8((sp87 - 0x40) & 0xFF);
    sp74 = func_151423D8(sp86);
    sp70 = func_151423D8((sp86 - 0x40) & 0xFF);
    temp_f2 = ((random_float() * 80.0f) + 20.0f) * D_800A9D98;
    temp_f12 = temp_f2 * sp74;
    sp88 = temp_f12 * sp78;
    sp8C = -temp_f2 * sp70;
    sp90 = temp_f12 * sp7C;
    sp5C = random_float(temp_f12);
    sp60 = random_u32();
    sp64 = random_u32();
    sp68 = random_float();
    func_151DA6F8(arg0, &sp88, (sp5C * D_800A9D9C) + D_800A9DA0, (s16) ((sp60 % 41U) + 0x3C), (sp64 % 101U) + 0x9B, (sp68 * 4.0f) + D_800A9DA4, (random_u32() % 5U) + 3, (s32) arg1, 1.0f, 1.0f, 0, 0, 0, 0x10, 0xF, 0, (s32) arg2, 1);
}

void func_151AECA0(void *arg0, s32 arg1, s32 arg2) {
    void * sp140;
    f32 sp13C;
    s32 sp138;
    s16 sp136;
    s16 sp134;
    f32 sp130;
    s8 sp12C;
    s16 sp12A;
    s16 sp128;
    s16 sp126;
    s16 sp124;
    s16 sp122;
    s16 sp120;
    s16 sp11E;
    s16 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    s16 spF6;
    s16 spF4;
    s16 spF2;
    s16 spF0;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 sp70;
    u32 sp6C;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f6;
    s32 temp_s3;
    s32 var_s0;
    u32 temp_s0;
    u32 temp_s1;

    f32 sp159;
    temp_s3 = arg1 & 0xFF;
    if (arg0 != NULL) {
        func_1504715C(&sp13C, arg0);
        spF8 = (*(s32 *)((char *)(arg0) + 0x14));
        spFC = (*(s32 *)((char *)(arg0) + 0x18));
        sp100 = (*(s32 *)((char *)(arg0) + 0x1C));
        sp104 = D_800A9DA8;
        sp11C = 0xA;
        spF2 = 0xFF;
        spF4 = -0x3F;
        sp11E = 0;
        spF0 = 0;
        spF6 = 0x2D;
        sp120 = 3;
        sp122 = 2;
        sp124 = 0x28;
        sp126 = 0x14;
        sp128 = 0x9B;
        sp12A = 0x64;
        sp134 = 0x10;
        sp136 = 0xF;
        sp138 = 0;
        sp12C = 0;
        sp108 = D_800A9DAC;
        sp10C = D_800A9DB0;
        sp110 = D_800A9DB4;
        sp114 = 18.0f;
        sp118 = D_800A9DB8;
        sp130 = 0.5f;
        func_15153F18(&spF0, &spF8, &sp13C, 0xFF, 1);
        var_s0 = (random_u32() % 6U) + 7;
        spE4 = (*(s32 *)((char *)(arg0) + 0x18)) + 100.0f;
        if (var_s0 != 0) {
loop_2:
            sp6C = random_u32();
            func_15143874((s16) (sp6C & 0xFF), (random_float() * 59.0f) + 90.0f, &spD4, &spDC);
            temp_f6 = spD4 + (*(s32 *)((char *)(arg0) + 0x14));
            spD4 = temp_f6;
            spE0 = temp_f6;
            temp_f16 = spDC + (*(s32 *)((char *)(arg0) + 0x1C));
            spDC = temp_f16;
            spE8 = temp_f16;
            if ((func_15046C80(&spE0, 0, (*(s32 *)((char *)(arg0) + 0x18)) - 500.0f, &sp13C) != 0) && (sp159 != 3)) {
                spD8 = sp13C + 10.0f;
                if (random_u32() & 1) {
                    temp_f20 = random_float();
                    func_151D9B8C(0U, (temp_f20 * 4.5f) + 15.0f, (u32) ((random_float() * 100.0f) + 155.0f) & 0xFF, &sp140, &spD4, 0x64, 0, 1, 0, temp_s3, arg2);
                } else {
                    temp_f20_2 = random_float();
                    func_151DAB58(0U, (temp_f20_2 * D_800A9DBC) + D_800A9DC0, (u32) ((random_float() * 100.0f) + 155.0f) & 0xFF, &spD4, 1, temp_s3, arg2);
                }
                var_s0 -= 1;
                if (var_s0 == 0) {
                    goto block_8;
                }
                goto loop_2;
            }
        } else {
block_8:
            spC8 = (*(s32 *)((char *)(arg0) + 0x14));
            spCC = (*(s32 *)((char *)(arg0) + 0x18));
            spBC = spC8;
            spD0 = (*(s32 *)((char *)(arg0) + 0x1C));
            spC0 = spCC + 100.0f;
            spC4 = spD0;
            if ((func_15046C80(&spBC, 0, spCC - 500.0f, &sp13C) != 0) && (sp159 != 3)) {
                spCC = sp13C + 10.0f;
                temp_f20_3 = random_float();
                sp70 = random_float();
                temp_s0 = random_u32();
                temp_s1 = random_u32();
                func_15136698(((temp_f20_3 * 30.0f) + 90.0f) * D_800A9DC4, ((sp70 * 103.0f) + 103.0f) * D_800A9DC8, ((temp_s0 % 101U) + 0x9B) & 0xFF, ((temp_s1 % 101U) + 0x64) & 0xFF, (random_u32() % 56U) + 0x46, &sp140, &spC8, 0, 1, temp_s3, arg2);
            }
        }
    }
}

s32 func_151AF270(void *arg0, s32 arg1, s32 arg2) {
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
    func_1516962C(0x28, arg0, 0x16, arg0);
    sp1C = 0;
    sp20 = 0;
    sp2C = 1;
    sp46 = 6;
    sp44 = 0x140;
    sp47 = 0xA;
    sp48 = -1;
    sp49 = 9;
    sp28 = arg0;
    sp24 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp38 = 0.0f;
    sp3C = D_800A9DCC;
    sp40 = D_800A9DD0;
    return func_1513418C(&sp1C, 0, arg1, arg2);
}

void func_151AF338(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void *arg6) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;

    sp24 = arg0;
    sp28 = arg1;
    sp2C = arg2;
    func_151AF388(&sp24, arg3, arg4, arg5, (s32) (*(s32 *)((char *)(arg6) + 0xC)));
}

void func_151AF388(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    u8 sp5F;
    u32 sp54;
    u32 sp50;
    f32 sp4C;

    sp60 = -arg1 * D_800A9DD4;
    sp64 = -arg2 * D_800A9DD4;
    sp68 = -arg3 * D_800A9DD4;
    if (random_u32(arg1, arg2) & 1) {
        sp5F = 1;
    } else {
        sp5F = 0;
    }
    sp4C = random_float();
    sp50 = random_u32();
    sp54 = random_u32();
    func_151D9014(arg0, &sp60, 0U, (sp4C * D_800A9DDC) + D_800A9DE0, (sp50 & 0xF) + 0xA, (sp54 % 45U) + 0x89, (random_float() * 202.0f) + 142.0f, (s32) sp5F, D_800A9DD8, D_800A9DD8, 0, 0, 1, 0, (s32) arg4, 1);
}

void func_151AF4D0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void * sp44;
    void * sp38;
    s32 sp34;
    u8 *sp24;
    s32 temp_a2;
    s32 temp_v1;
    u8 *temp_v0;

    if (arg0 != NULL) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x1D4));
        if ((temp_v1 != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
            temp_v0 = (arg1 * 0x1C) + &D_800A9DF0;
            sp24 = temp_v0;
            temp_a2 = temp_v1 + (*temp_v0 << 6);
            sp34 = temp_a2;
            func_15143134(temp_v0 + 4, &sp44, temp_a2);
            func_15143134(sp24 + 0x10, &sp38, sp34);
            func_15135DD0(&sp44, &sp38, ((random_float() * 170.0f) + 71.0f) * D_800AA0E4, arg2, arg3);
        }
    }
}
