/**
 * Auto-decompiled from asm/1AC2F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A7960(); /* extern */
void * func_150A7A00(); /* extern */
s32 func_1510D0EC();                    /* extern */
void * memcpy();                             /* extern */
extern s32 D_8008D010;
extern s32 D_8008D018;
extern s32 D_80090298;
extern s32 D_800902C8;
extern s32 D_800902CC;
extern s32 D_800A7260;
extern s32 D_800A7270;
extern f32 D_800A7280;
extern f32 D_800A7284;
extern f32 D_800A7288;
extern f32 D_800A728C;
extern f32 D_800A7290;
extern f32 D_800A7294;
extern f32 D_800A7298;
extern f32 D_800A729C;
extern f32 D_800A72A0;
extern f32 D_800A72A4;
extern f32 D_800A72A8;
extern f32 D_800A72AC;
extern f32 D_800A72B0;
extern f32 D_800A72B4;
extern f32 D_800A72B8;
extern f32 D_800A72BC;
extern f32 D_800A72C0;
extern s32 D_800DDD70;
extern s32 D_800DDD74;
extern s32 D_800DDD78;
extern s32 D_800DDD80;
extern u8 D_800DDD88;
extern u8 D_800DDD89;
extern u8 D_800DDD8A;
extern u8 D_800DDD8B;
extern u8 D_800DDD8C;
extern s32 D_800DDD90;
extern s32 D_800DDD9C;
extern s32 D_800DDDA0;
extern s32 D_800DDDC0;
extern s32 D_800DDDE8;
extern u16 D_800DDE10;
extern f32 *D_800DDE44;
extern f32 *D_800DDE48;
extern f32 *D_800DDE4C;
s32 func_1517EF00();
void * func_1517F9F4();

void func_1517EE40(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_v1;
    s32 temp_v1_2;
    s8 *temp_v0;
    void *temp_a0;

    temp_v0 = arg5 + &D_800DDDAC;
    temp_v1 = arg5 * 4;
    if ((arg4 != *temp_v0) || (*(&D_800DDDB0 + temp_v1) < *(&D_800DDE28 + temp_v1)) || (*(&D_800DDDC0 + arg5) != 0)) {
        temp_a0 = (arg5 * 3) + &D_800DDDA0;
        temp_v1_2 = arg5 * 4;
        (*(s32 *)((char *)(temp_a0) + 0x1)) = arg1;
        (*(s32 *)((char *)(temp_a0) + 0x2)) = arg2;
        (*(s8 *)((char *)(temp_a0) + 0x0)) = (s8) arg0;
        *(&D_800DDE28 + temp_v1_2) = arg3;
        *(&D_800DDDB0 + temp_v1_2) = 0;
        *temp_v0 = arg4;
        *(&D_800DDDC0 + arg5) = 0;
    }
}

s32 func_1517EF00(s32 arg0) {
    s32 temp_a1;
    s32 temp_v0_2;
    u8 temp_v0;
    u8 var_v1;

    temp_v0 = *(&D_800DDDC0 + arg0);
    if (temp_v0 != 0) {
        var_v1 = temp_v0;
    } else {
        temp_v0_2 = arg0 * 4;
        temp_a1 = *(&D_800DDE28 + temp_v0_2);
        if (temp_a1 != 0) {
            var_v1 = (u8) ((s32) (*(&D_800DDDB0 + temp_v0_2) * 0xFF) / temp_a1);
            if ((s32) var_v1 >= 0x100) {
                goto block_5;
            }
        } else {
block_5:
            var_v1 = 0xFF;
        }
        if (*(&D_800DDDAC + arg0) == 0) {
            var_v1 = 0xFF - var_v1;
        }
    }
    return (s32) var_v1;
}

s32 func_1517EFAC(void) {
    if (func_1517EF00(0) == 0xFF) {
        return 1;
    }
    return 0;
}

s32 func_1517EFDC(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    temp_v0 = D_80082FA0;
    var_s1 = -1;
    var_s0 = 0;
    if (temp_v0 >= 0) {
        do {
            if ((func_1517EF00(var_s0) > 0) || (*(&D_800DDDC8 + (var_s0 * 4)) > 0.0f)) {
                var_s1 += 1;
            }
            var_s0 += 1;
        } while (D_80082FA0 >= var_s0);
    }
    if (var_s1 == temp_v0) {
        return 1;
    }
    return 0;
}

void *func_1517F08C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a2;
    void *temp_a2_2;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_a0_2 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFCFFFFFF;
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = 0xFFFDF6FB;
    temp_a0_3 = (char *)(temp_a0_2) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xFA000000;
    (*(s32 *)((char *)(temp_a0_3) + 0x4)) = (s32) ((arg2 << 0x18) | ((arg3 & 0xFF) << 0x10) | ((arg4 & 0xFF) << 8) | (arg1 & 0xFF));
    temp_a0_4 = (char *)(temp_a0_3) + 8;
    (*(s32 *)((char *)(temp_a0_3) + 0x8)) = 0xEF002CFF;
    (*(s32 *)((char *)(temp_a0_4) + 0x4)) = 0x504344;
    temp_a0 = (char *)(temp_a0_4) + 8;
    temp_a1 = arg5 * 0x180;
    temp_a2 = D_800BE628 + temp_a1;
    (*(s32 *)((char *)(temp_a0_4) + 0x8)) = (s32) ((((u32) (*(s32 *)((char *)(temp_a2) + 0x28)) & 0x3FF) * 4) | 0xF6000000 | (((u32) (*(s32 *)((char *)(temp_a2) + 0x30)) & 0x3FF) << 0xE));
    temp_a2_2 = D_800BE628 + temp_a1;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) ((((u32) (*(s32 *)((char *)(temp_a2_2) + 0x24)) & 0x3FF) * 4) | (((u32) (*(s32 *)((char *)(temp_a2_2) + 0x2C)) & 0x3FF) << 0xE));
    return (char *)(temp_a0) + 8;
}

void *func_1517F3A0(void *arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_1517EF00(arg1);
    if (temp_v0 == 0) {
        return arg0;
    }
    temp_v0_2 = (arg1 * 3) + &D_800DDDA0;
    return func_1517F08C(arg0, temp_v0, (*(s32 *)((char *)(temp_v0_2) + 0x0)), (*(s32 *)((char *)(temp_v0_2) + 0x1)), (s32) (*(s32 *)((char *)(temp_v0_2) + 0x2)), arg1);
}

s32 func_1517F40C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 * 4;
    if (*(&D_800DDDB0 + temp_v0) >= *(&D_800DDE28 + temp_v0)) {
        return 1;
    }
    return 0;
}

void func_1517F448(s32 arg0) {
    s32 *temp_v1;
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = arg0 * 4;
    temp_v1 = temp_v0 + &D_800DDDB0;
    temp_a1 = *temp_v1;
    if (temp_a1 != *(&D_800DDE28 + temp_v0)) {
        *temp_v1 = temp_a1 + D_800BE9E4;
    }
}

void func_1517F488( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_v0;

    temp_v0 = (arg5 * 3) + &D_800DDD90;
    (*(s32 *)((char *)(temp_v0) + 0x0)) = arg0;
    (*(s32 *)((char *)(temp_v0) + 0x1)) = arg1;
    (*(s32 *)((char *)(temp_v0) + 0x2)) = arg2;
    *(&D_800DDD9C + arg5) = arg3;
    (&D_800DDE10)[arg5] = (u16) arg4;
}

void *func_1517F4D8(void *arg0, s32 arg1) {
    u8 temp_a1;
    void *temp_v0;

    if ((&D_800DDE10)[arg1] == 0) {
        return arg0;
    }
    temp_a1 = *(&D_800DDD9C + arg1);
    if (temp_a1 == 0) {
        return arg0;
    }
    temp_v0 = (arg1 * 3) + &D_800DDD90;
    return func_1517F08C((void *) temp_a1, (s32) (*(s32 *)((char *)(temp_v0) + 0x0)), (*(s32 *)((char *)(temp_v0) + 0x1)), (u8) (s32) (*(s32 *)((char *)(temp_v0) + 0x2)), arg1, 0);
}

void *func_1517F564(void *arg0) {
    f32 temp_f10;
    f32 var_f10;
    f32 var_f16;
    f32 var_f18;
    f32 var_f2;
    f32 var_f6;
    u8 temp_t0;
    u8 temp_t1;
    u8 temp_v1;
    u8 var_a1;
    void *temp_v0;

    f32 sp20;
    if (D_800DDE08 == 0) {
        return arg0;
    }
    if (D_800DDD8B == 0) {
        return arg0;
    }
    var_a1 = D_800DDD8B;
    var_f2 = sp20;
    if (D_800DDD8C != 0) {
        temp_f10 = (func_15048A40(D_800DDD89, var_a1) + 1.0f) * 0.5f;
        var_f18 = (f32) D_800DDD8B;
        if ((s32) D_800DDD8B < 0) {
            var_f18 += 4294967296.0f;
        }
        var_f2 = 0.0f;
        var_a1 = (u8) (s32) (var_f18 * temp_f10);
    }
    temp_v0 = (D_800DDD8A * 6) + &D_8008D010;
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x0));
    var_f6 = (f32) temp_v1;
    if ((s32) temp_v1 < 0) {
        var_f6 += 4294967296.0f;
    }
    temp_t0 = (*(s32 *)((char *)(temp_v0) + 0x1));
    var_f16 = (f32) temp_t0;
    if ((s32) temp_t0 < 0) {
        var_f16 += 4294967296.0f;
    }
    temp_t1 = (*(s32 *)((char *)(temp_v0) + 0x2));
    var_f10 = (f32) temp_t1;
    if ((s32) temp_t1 < 0) {
        var_f10 += 4294967296.0f;
    }
    return func_1517F08C(arg0, (s32) var_a1, (u8) (s32) (((f32) ((*(s32 *)((char *)(temp_v0) + 0x3)) - temp_v1) * var_f2) + var_f6), (u8) (s32) (((f32) ((*(s32 *)((char *)(temp_v0) + 0x4)) - temp_t0) * var_f2) + var_f16), (s32) (((f32) ((*(s32 *)((char *)(temp_v0) + 0x5)) - temp_t1) * var_f2) + var_f10), 0);
}

void func_1517F720( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_800DDE08 = arg1;
    D_800DDD88 = arg2;
    D_800DDD89 = 0;
    D_800DDD8A = arg0;
    D_800DDD8B = arg3;
    D_800DDD8C = (u8) arg4;
}

void func_1517F75C(void) {
    u16 *var_a0;
    u16 temp_v1;

    var_a0 = &D_800DDE10;
    if (D_80082FA0 >= 0) {
        do {
            temp_v1 = *var_a0;
            if (D_800BE9E4 < (s32) temp_v1) {
                *var_a0 = temp_v1 - D_800BE9E4;
            } else {
                *var_a0 = 0;
            }
            var_a0 += 2;
        } while ((u32) &(&D_800DDE10)[D_80082FA0] >= (u32) var_a0);
    }
}

void func_1517F7B4(void) {
    if (D_800DDE08 != 0) {
        if (D_800BE9E4 < (s32) D_800DDE08) {
            D_800DDE08 -= D_800BE9E4;
        } else {
            D_800DDE08 = 0;
        }
        D_800DDD89 += D_800DDD88 * D_800BE9E4;
    }
}

void func_1517F814(s32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4) {
    f32 sp3C;
    f32 sp38;
    void * sp34;
    f32 sp30;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f6;
    f32 var_f2;
    void *temp_v0;
    void *var_v1;

    if (arg0 == 0) {
        func_150A7A00(arg1, arg2, (arg4 << 6) + D_800D9D10, arg1, arg2, arg3, &sp3C, &sp38, &sp34, &sp30);
        if (sp30 == 0.0f) {
            sp30 = 1.0f;
        }
        var_v1 = D_800BE628 + (arg4 * 0x180);
        temp_f6 = ((*(s32 *)((char *)(var_v1) + 0xC)) * sp3C) / sp30;
        sp3C = temp_f6;
        temp_f18 = ((*(s32 *)((char *)(var_v1) + 0x10)) * sp38) / sp30;
        sp38 = temp_f18;
        temp_f10 = temp_f6 + (*(s32 *)((char *)(var_v1) + 0xC));
        sp3C = temp_f10;
        sp38 = (*(s32 *)((char *)(var_v1) + 0x10)) - temp_f18;
        sp3C = temp_f10 + (*(s32 *)((char *)(var_v1) + 0x2C));
        sp38 += (*(s32 *)((char *)(var_v1) + 0x24));
    } else {
        sp3C = arg1;
        sp38 = arg2;
        var_v1 = D_800BE628 + (arg4 * 0x180);
    }
    if (D_800A7280 < sp3C) {
        var_f2 = D_800A7284;
        sp3C = D_800A7280;
    } else {
        var_f2 = D_800A7288;
        if (sp3C < var_f2) {
            sp3C = var_f2;
        }
    }
    if (D_800A7280 < sp38) {
        sp38 = D_800A7280;
    } else if (sp38 < var_f2) {
        sp38 = var_f2;
    }
    temp_v0 = (arg4 * 8) + &D_800DDDE8;
    (*(f32 *)((char *)(temp_v0) + 0x0)) = (f32) (sp3C - (*(f32 *)((char *)(var_v1) + 0xC)));
    (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) (sp38 - (*(f32 *)((char *)(var_v1) + 0x10)));
}

void *func_1517F9F4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_f10;
    s32 temp_f18;
    s32 temp_f6;
    s32 temp_f6_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_t3;
    s32 var_t3_2;
    s32 var_t3_3;
    s32 var_t3_4;
    s32 var_v1;
    void *temp_a0;
    void *temp_v1;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_v1 = arg4;
    if (var_a3 < var_a1) {
        temp_v0 = var_a1;
        var_a1 = var_a3;
        var_a3 = temp_v0;
    }
    if (var_v1 < var_a2) {
        temp_v0_2 = var_a2;
        var_a2 = var_v1;
        var_v1 = temp_v0_2;
    }
    temp_a0 = D_800BE628 + (arg5 * 0x180);
    temp_f6 = (s32) (*(s32 *)((char *)(temp_a0) + 0x2C));
    temp_f10 = (s32) (*(s32 *)((char *)(temp_a0) + 0x24));
    temp_f6_2 = (s32) (*(s32 *)((char *)(temp_a0) + 0x28));
    temp_f18 = (s32) (*(s32 *)((char *)(temp_a0) + 0x30));
    if ((var_a2 >= temp_f6_2) || (temp_f10 >= var_v1) || (var_a1 >= temp_f18) || (temp_f6 >= var_a3)) {
        return arg0;
    }
    if (var_a1 < temp_f6) {
        var_a0 = temp_f6;
    } else {
        var_t3 = var_a1;
        if (temp_f18 < var_a1) {
            var_t3 = temp_f18;
        }
        var_a0 = var_t3;
    }
    if (var_a2 < temp_f10) {
        var_a0_2 = temp_f10;
    } else {
        var_t3_2 = var_a2;
        if (temp_f6_2 < var_a2) {
            var_t3_2 = temp_f6_2;
        }
        var_a0_2 = var_t3_2;
    }
    if (var_a3 < temp_f6) {
        var_a0_3 = temp_f6;
    } else {
        var_t3_3 = var_a3;
        if (temp_f18 < var_a3) {
            var_t3_3 = temp_f18;
        }
        var_a0_3 = var_t3_3;
    }
    if (var_v1 < temp_f10) {
        var_a0_4 = temp_f10;
    } else {
        var_t3_4 = var_v1;
        if (temp_f6_2 < var_v1) {
            var_t3_4 = temp_f6_2;
        }
        var_a0_4 = var_t3_4;
    }
    temp_v1 = arg0;
    arg0 = (char *)(temp_v1) + 8;
    (*(s32 *)((char *)(temp_v1) + 0x4)) = (s32) (((var_a0 & 0x3FF) << 0xE) | ((var_a0_2 & 0x3FF) * 4));
    (*(s32 *)((char *)(temp_v1) + 0x0)) = (s32) (((var_a0_3 & 0x3FF) << 0xE) | 0xF6000000 | ((var_a0_4 & 0x3FF) * 4));
    return arg0;
}

void *func_1517FB9C(void *arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    s32 unksp32;
    s32 unksp36;
    s32 spB4;
    s32 spB0;
    f32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    f32 sp44;
    s32 sp40;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    f32 sp24;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 sp4;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    s16 temp_t7;
    s16 temp_t7_4;
    s16 temp_t8;
    s16 temp_t8_2;
    s16 temp_t8_7;
    s16 temp_t8_8;
    s16 temp_t9;
    s16 temp_t9_7;
    s16 var_a0;
    s16 var_a0_2;
    s16 var_a0_4;
    s16 var_a0_5;
    s16 var_a0_7;
    s16 var_a0_9;
    s16 var_v1;
    s16 var_v1_2;
    s16 var_v1_4;
    s16 var_v1_5;
    s16 var_v1_7;
    s16 var_v1_8;
    s32 temp_a0;
    s32 temp_f4;
    s32 temp_f6;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t7_2;
    s32 temp_t7_3;
    s32 temp_t7_5;
    s32 temp_t7_6;
    s32 temp_t7_7;
    s32 temp_t8_10;
    s32 temp_t8_3;
    s32 temp_t8_4;
    s32 temp_t8_5;
    s32 temp_t8_6;
    s32 temp_t8_9;
    s32 temp_t9_2;
    s32 temp_t9_3;
    s32 temp_t9_4;
    s32 temp_t9_5;
    s32 temp_t9_6;
    s32 temp_t9_8;
    s32 temp_t9_9;
    s32 var_a0_3;
    s32 var_a0_6;
    s32 var_a0_8;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_t4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_12;
    s32 var_v1_3;
    s32 var_v1_6;
    s32 var_v1_9;
    void *temp_a3;
    void *temp_a3_10;
    void *temp_a3_11;
    void *temp_a3_2;
    void *temp_a3_3;
    void *temp_a3_4;
    void *temp_a3_5;
    void *temp_a3_6;
    void *temp_a3_7;
    void *temp_a3_8;
    void *temp_a3_9;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = D_800BE628 + (arg5 * 0x180);
    temp_v1 = (arg5 * 8) + &D_800DDDE8;
    temp_f2 = (*(s32 *)((char *)(temp_v0) + 0xC)) + (*(s32 *)((char *)(temp_v1) + 0x0));
    temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x10)) + (*(s32 *)((char *)(temp_v1) + 0x4));
    temp_f0 = (f32) arg1;
    sp54 = temp_f2 + arg3;
    temp_a3_2 = (char *)(arg0) + 8;
    temp_f18 = temp_f12 + arg4;
    temp_a3_3 = (char *)(temp_a3_2) + 8;
    temp_f6 = (s32) temp_f18;
    temp_t8 = (s32) (sp54 + temp_f0) * 4;
    sp4C = (s32) temp_t8;
    if (temp_t8 > 0) {
        var_a0 = temp_t8;
    } else {
        var_a0 = 0;
    }
    temp_t8_2 = (s32) (temp_f18 + temp_f0) * 4;
    if (temp_t8_2 > 0) {
        var_v1 = temp_t8_2;
    } else {
        var_v1 = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = (s32) ((var_v1 & 0xFFF) | 0xE4000000 | ((var_a0 & 0xFFF) << 0xC));
    temp_t7 = (s32) sp54 * 4;
    if (temp_t7 > 0) {
        var_a0_2 = temp_t7;
    } else {
        var_a0_2 = 0;
    }
    temp_t9 = temp_f6 * 4;
    if (temp_t9 > 0) {
        var_v1_2 = temp_t9;
    } else {
        var_v1_2 = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) ((var_v1_2 & 0xFFF) | ((var_a0_2 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xE1000000;
    if (temp_t7 < 0) {
        temp_t8_3 = (u32) (((f32) arg2 / temp_f0) * 1024.0f) & 0xFFFF;
        sp30 = -temp_t8_3;
        var_t4 = temp_t8_3;
        sp34 = temp_t8_3;
        if (unksp32 < 0) {
            temp_t9_2 = (s32) (temp_t7 * unksp32) >> 7;
            if (temp_t9_2 > 0) {
                var_a1 = temp_t9_2;
            } else {
                var_a1 = 0;
            }
        } else {
            var_v0 = 0;
            temp_t8_4 = (s32) (temp_t7 * unksp32) >> 7;
            if (temp_t8_4 < 0) {
                var_v0 = temp_t8_4;
            }
            var_a1 = var_v0;
        }
    } else {
        var_a1 = 0;
        temp_t9_3 = (u32) (((f32) arg2 / temp_f0) * 1024.0f) & 0xFFFF;
        sp30 = -temp_t9_3;
        var_t4 = temp_t9_3;
        sp34 = temp_t9_3;
    }
    if (temp_f6 & 0x20000000) {
        if (unksp32 < 0) {
            var_v0_2 = 0;
            temp_t7_2 = (s32) (temp_t9 * unksp32) >> 7;
            if (temp_t7_2 > 0) {
                var_a0_3 = temp_t7_2;
            } else {
                goto block_28;
            }
        } else {
            var_v0_2 = 0;
            temp_t9_4 = (s32) (temp_t9 * unksp32) >> 7;
            if (temp_t9_4 < 0) {
                var_v0_2 = temp_t9_4;
            }
block_28:
            var_a0_3 = var_v0_2;
        }
        var_v1_3 = var_a0_3;
        sp2C = (s32) temp_t9;
    } else {
        var_v1_3 = 0;
        sp2C = (s32) temp_t9;
    }
    spC = (s32) temp_t8_2;
    temp_t8_5 = arg2 << 5;
    temp_t8_6 = ((s32) (temp_f18 * 32.0f) & 0x1F) + temp_t8_5;
    sp1C = temp_t8_6;
    temp_t9_5 = (s32) (sp54 * 32.0f) & 0x1F;
    sp50 = temp_t9_5;
    (*(s32 *)((char *)(temp_a3_2) + 0x4)) = (s32) (((temp_t8_6 - var_v1_3) & 0xFFFF) | (((temp_t9_5 + temp_t8_5) - var_a1) << 0x10));
    (*(s32 *)((char *)(temp_a3_2) + 0x8)) = 0xF1000000;
    temp_a3_4 = (char *)(temp_a3_3) + 8;
    temp_f18_2 = temp_f12 - arg4;
    temp_t9_6 = sp30 & 0xFFFF;
    temp_t6 = temp_t9_6 << 0x10;
    sp10 = temp_t9_6;
    sp8 = temp_t6;
    (*(s32 *)((char *)(temp_a3_3) + 0x4)) = (s32) (temp_t6 | temp_t9_6);
    sp24 = temp_f2 - arg3;
    temp_f10 = sp24 - temp_f0;
    sp28 = (s32) temp_t9;
    sp44 = temp_f10;
    sp54 = temp_f18_2 - temp_f0;
    temp_t7_3 = (s32) (temp_f10 * 32.0f) & 0x1F;
    sp18 = temp_t7_3;
    spB4 = temp_t7_3;
    spB0 = (s32) (sp54 * 32.0f) & 0x1F;
    temp_t8_7 = (s32) sp24 * 4;
    temp_a3_5 = (char *)(temp_a3_4) + 8;
    if (temp_t8_7 > 0) {
        var_a0_4 = temp_t8_7;
    } else {
        var_a0_4 = 0;
    }
    sp48 = temp_t8_5;
    temp_a3_6 = (char *)(temp_a3_5) + 8;
    temp_t8_8 = (s32) temp_f18_2 * 4;
    if (temp_t8_8 > 0) {
        var_v1_4 = temp_t8_8;
    } else {
        var_v1_4 = 0;
    }
    (*(s32 *)((char *)(temp_a3_3) + 0x8)) = (s32) ((var_v1_4 & 0xFFF) | 0xE4000000 | ((var_a0_4 & 0xFFF) << 0xC));
    temp_f4 = (s32) sp54;
    temp_t7_4 = (s32) sp44 * 4;
    if (temp_t7_4 > 0) {
        var_a0_5 = temp_t7_4;
    } else {
        var_a0_5 = 0;
    }
    temp_t9_7 = temp_f4 * 4;
    if (temp_t9_7 > 0) {
        var_v1_5 = temp_t9_7;
    } else {
        var_v1_5 = 0;
    }
    sp40 = (s32) temp_t8_7;
    (*(s32 *)((char *)(temp_a3_4) + 0x4)) = (s32) ((var_v1_5 & 0xFFF) | ((var_a0_5 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(temp_a3_4) + 0x8)) = 0xE1000000;
    if (temp_t7_4 < 0) {
        if (unksp36 < 0) {
            temp_t7_5 = (s32) (temp_t7_4 * unksp36) >> 7;
            if (temp_t7_5 > 0) {
                var_a1_2 = temp_t7_5;
            } else {
                var_a1_2 = 0;
            }
        } else {
            var_v0_3 = 0;
            temp_t9_8 = (s32) (temp_t7_4 * unksp36) >> 7;
            if (temp_t9_8 < 0) {
                var_v0_3 = temp_t9_8;
            }
            var_a1_2 = var_v0_3;
        }
    } else {
        var_a1_2 = 0;
    }
    if (temp_f4 & 0x20000000) {
        if (unksp36 < 0) {
            temp_t8_9 = (s32) (temp_t9_7 * unksp36) >> 7;
            if (temp_t8_9 > 0) {
                var_v1_6 = temp_t8_9;
            } else {
                var_v1_6 = 0;
            }
        } else {
            var_v0_4 = 0;
            temp_t6_2 = (s32) (temp_t9_7 * unksp36) >> 7;
            if (temp_t6_2 < 0) {
                var_v0_4 = temp_t6_2;
            }
            var_v1_6 = var_v0_4;
        }
    } else {
        var_v1_6 = 0;
    }
    (*(s32 *)((char *)(temp_a3_5) + 0x4)) = (s32) ((((-spB0 - var_v1_6) + 0x1F) & 0xFFFF) | (((-spB4 - var_a1_2) + 0x1F) << 0x10));
    (*(s32 *)((char *)(temp_a3_5) + 0x8)) = 0xF1000000;
    temp_a0 = var_t4 & 0xFFFF;
    temp_t7_6 = temp_a0 << 0x10;
    sp14 = temp_t7_6;
    sp4 = temp_a0;
    (*(s32 *)((char *)(temp_a3_6) + 0x4)) = (s32) (temp_t7_6 | temp_a0);
    temp_a3_7 = (char *)(temp_a3_6) + 8;
    spB4 = sp50;
    temp_a3_8 = (char *)(temp_a3_7) + 8;
    if (sp4C > 0) {
        var_a0_6 = sp4C;
    } else {
        var_a0_6 = 0;
    }
    if (temp_t8_8 > 0) {
        var_v1_7 = temp_t8_8;
    } else {
        var_v1_7 = 0;
    }
    (*(s32 *)((char *)(temp_a3_6) + 0x8)) = (s32) ((var_v1_7 & 0xFFF) | 0xE4000000 | ((var_a0_6 & 0xFFF) << 0xC));
    if (temp_t7 > 0) {
        var_a0_7 = temp_t7;
    } else {
        var_a0_7 = 0;
    }
    if (temp_t9_7 > 0) {
        var_v1_8 = temp_t9_7;
    } else {
        var_v1_8 = 0;
    }
    (*(s32 *)((char *)(temp_a3_7) + 0x4)) = (s32) ((var_v1_8 & 0xFFF) | ((var_a0_7 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(temp_a3_7) + 0x8)) = 0xE1000000;
    temp_a3_9 = (char *)(temp_a3_8) + 8;
    if (temp_t7 < 0) {
        temp_t7_7 = (s32) (temp_t7 * unksp32) >> 7;
        if (unksp32 < 0) {
            if (temp_t7_7 > 0) {
                var_a1_3 = temp_t7_7;
            } else {
                var_a1_3 = 0;
            }
        } else {
            var_v0_5 = 0;
            if (temp_t7_7 < 0) {
                var_v0_5 = temp_t7_7;
            }
            var_a1_3 = var_v0_5;
        }
    } else {
        var_a1_3 = 0;
    }
    if (temp_f4 & 0x20000000) {
        temp_t6_3 = (s32) (temp_t9_7 * unksp36) >> 7;
        if (unksp36 < 0) {
            if (temp_t6_3 > 0) {
                var_v1_9 = temp_t6_3;
            } else {
                var_v1_9 = 0;
            }
        } else {
            var_v0_6 = 0;
            if (temp_t6_3 < 0) {
                var_v0_6 = temp_t6_3;
            }
            var_v1_9 = var_v0_6;
        }
    } else {
        var_v1_9 = 0;
    }
    (*(s32 *)((char *)(temp_a3_8) + 0x4)) = (s32) ((((0x1F - spB0) - var_v1_9) & 0xFFFF) | (((spB4 + sp48) - var_a1_3) << 0x10));
    (*(s32 *)((char *)(temp_a3_8) + 0x8)) = 0xF1000000;
    temp_a3_10 = (char *)(temp_a3_9) + 8;
    (*(s32 *)((char *)(temp_a3_9) + 0x4)) = (s32) (sp8 | sp4);
    temp_a3_11 = (char *)(temp_a3_10) + 8;
    if (sp40 > 0) {
        var_a0_8 = sp40;
    } else {
        var_a0_8 = 0;
    }
    if (spC > 0) {
        var_v1_10 = spC;
    } else {
        var_v1_10 = 0;
    }
    (*(s32 *)((char *)(temp_a3_9) + 0x8)) = (s32) ((var_v1_10 & 0xFFF) | 0xE4000000 | ((var_a0_8 & 0xFFF) << 0xC));
    if (temp_t7_4 > 0) {
        var_a0_9 = temp_t7_4;
    } else {
        var_a0_9 = 0;
    }
    if (sp28 > 0) {
        var_v1_11 = sp28;
    } else {
        var_v1_11 = 0;
    }
    (*(s32 *)((char *)(temp_a3_10) + 0x4)) = (s32) ((var_v1_11 & 0xFFF) | ((var_a0_9 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(temp_a3_10) + 0x8)) = 0xE1000000;
    temp_a3 = (char *)(temp_a3_11) + 8;
    if (temp_t7_4 < 0) {
        temp_t8_10 = (s32) (temp_t7_4 * unksp36) >> 7;
        if (unksp36 < 0) {
            if (temp_t8_10 > 0) {
                var_a1_4 = temp_t8_10;
            } else {
                var_a1_4 = 0;
            }
        } else {
            var_v0_7 = 0;
            if (temp_t8_10 < 0) {
                var_v0_7 = temp_t8_10;
            }
            var_a1_4 = var_v0_7;
        }
    } else {
        var_a1_4 = 0;
    }
    var_v1_12 = 0;
    if (sp2C < 0) {
        temp_t9_9 = (s32) (sp28 * unksp32) >> 7;
        if (unksp32 < 0) {
            if (temp_t9_9 > 0) {
                var_v1_12 = temp_t9_9;
            } else {
                var_v1_12 = 0;
            }
        } else {
            var_v0_8 = 0;
            if (temp_t9_9 < 0) {
                var_v0_8 = temp_t9_9;
            }
            var_v1_12 = var_v0_8;
        }
    }
    (*(s32 *)((char *)(temp_a3_11) + 0x4)) = (s32) (((sp1C - var_v1_12) & 0xFFFF) | (((0x1F - sp18) - var_a1_4) << 0x10));
    (*(s32 *)((char *)(temp_a3_11) + 0x8)) = 0xF1000000;
    (*(s32 *)((char *)(temp_a3) + 0x4)) = (s32) (sp14 | sp10);
    return (char *)(temp_a3) + 8;
}

void *func_15180580(f32 arg0, s32 arg1) {
    s16 spF8;
    s16 spF4;
    s16 spF2;
    s32 spDC;
    s32 spD8;
    void *sp70;
    s32 sp6C;
    s32 sp68;
    u8 *sp64;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f20;
    f32 var_f12;
    f32 var_f2;
    s16 var_fp;
    s32 temp_a0;
    s32 temp_f10;
    s32 temp_f16;
    s32 temp_f16_2;
    s32 temp_f16_3;
    s32 temp_f4;
    s32 temp_f4_2;
    s32 temp_t6;
    s32 temp_v0_2;
    s32 var_s0;
    u8 *temp_s0;
    u8 *temp_t7;
    u8 temp_v1_5;
    void *temp_s5;
    void *temp_s5_10;
    void *temp_s5_11;
    void *temp_s5_12;
    void *temp_s5_13;
    void *temp_s5_14;
    void *temp_s5_15;
    void *temp_s5_16;
    void *temp_s5_17;
    void *temp_s5_18;
    void *temp_s5_19;
    void *temp_s5_20;
    void *temp_s5_21;
    void *temp_s5_22;
    void *temp_s5_23;
    void *temp_s5_24;
    void *temp_s5_25;
    void *temp_s5_26;
    void *temp_s5_27;
    void *temp_s5_28;
    void *temp_s5_29;
    void *temp_s5_2;
    void *temp_s5_30;
    void *temp_s5_3;
    void *temp_s5_4;
    void *temp_s5_5;
    void *temp_s5_6;
    void *temp_s5_7;
    void *temp_s5_8;
    void *temp_s5_9;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_6;
    void *temp_v1_7;
    void *var_s5;
    void *var_s5_2;
    void *var_s5_3;
    void *var_v0;

    var_f12 = arg0;
    (*(void **)&(var_s5)) = (*(void **)&(arg0));
    if (D_800DDE40 != 0) {
        if (D_800C35EA == 1) {
            var_f12 = D_800A728C;
            var_f2 = *D_800DDE44 * var_f12;
            if (var_f2 > 1.0f) {
                var_f2 = 1.0f;
            } else if (var_f2 < 0.0f) {
                var_f2 = 0.0f;
            }
            temp_v0 = (arg1 * 8) + &D_800DDDE8;
            (*(f32 *)((char *)(temp_v0) + 0x0)) = (f32) ((*(f32 *)((char *)(D_800BE628) + 0x4)) * (*D_800DDE48 * var_f12));
            (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) ((*(f32 *)((char *)(D_800BE628) + 0x8)) * -(*D_800DDE4C * var_f12));
        } else {
            var_f2 = 1.0f;
        }
    } else {
        var_f2 = *(&D_800DDDC8 + (arg1 * 4));
    }
    if (var_f2 == 0.0f) {

    } else {
        temp_s5 = (char *)(var_s5) + 8;
        (*(s32 *)((char *)(var_s5) + 0x0)) = 0xDE000000;
        (*(s32 *)((char *)(var_s5) + 0x4)) = &D_8008D018;
        (*(s32 *)((char *)(var_s5) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_s5) + 0x4)) = 0;
        temp_s5_2 = (char *)(temp_s5) + 8;
        (*(s32 *)((char *)(temp_s5_2) + 0x4)) = 0x10001;
        (*(s32 *)((char *)(temp_s5) + 0x8)) = 0xF7000000;
        temp_s5_3 = (char *)(temp_s5_2) + 8;
        (*(s32 *)((char *)(temp_s5_3) + 0x4)) = 0xFF;
        (*(s32 *)((char *)(temp_s5_2) + 0x8)) = 0xFA000000;
        temp_s5_4 = (char *)(temp_s5_3) + 8;
        (*(s32 *)((char *)(temp_s5_3) + 0x8)) = 0xFCFFFFFF;
        (*(s32 *)((char *)(temp_s5_4) + 0x4)) = 0xFFFDF6FB;
        temp_s5_5 = (char *)(temp_s5_4) + 8;
        (*(s32 *)((char *)(temp_s5_4) + 0x8)) = 0xEF000CFF;
        (*(s32 *)((char *)(temp_s5_5) + 0x4)) = 0x0F0A4004;
        temp_s5_6 = (char *)(temp_s5_5) + 8;
        (*(s32 *)((char *)(temp_s5_5) + 0x8)) = 0xD9E0FFFE;
        (*(s32 *)((char *)(temp_s5_6) + 0x4)) = 0;
        temp_s5_7 = (char *)(temp_s5_6) + 8;
        (*(s32 *)((char *)(temp_s5_6) + 0x8)) = 0xD9FFFFFF;
        (*(s32 *)((char *)(temp_s5_7) + 0x4)) = 0x200004;
        temp_s5_8 = (char *)(temp_s5_7) + 8;
        temp_a0 = arg1 * 0x180;
        if (var_f2 < 1.0f) {
            temp_v0_2 = arg1 * 0x180;
            temp_v1 = D_800BE628 + temp_v0_2;
            temp_f4 = (s32) (*(s32 *)((char *)(temp_v1) + 0x2C));
            spF4 = (s16) (s32) (*(s16 *)((char *)(temp_v1) + 0x28));
            temp_f16 = (s32) (*(s32 *)((char *)(temp_v1) + 0x24));
            temp_f16_2 = (s32) (*(s32 *)((char *)(temp_v1) + 0x30));
            temp_f10 = (s32) ((D_800A7290 * var_f2) + 400.0f);
            temp_t0 = (arg1 * 8) + &D_800DDDE8;
            temp_f20 = (f32) (s16) temp_f10;
            spF2 = (s16) temp_f16_2;
            spF8 = (s16) temp_f16;
            sp68 = (s32) (s16) temp_f10;
            sp70 = temp_t0;
            sp6C = temp_v0_2;
            temp_v1_2 = D_800BE628 + sp6C;
            temp_f0 = (*(s32 *)((char *)(temp_v1_2) + 0x10)) + (*(s32 *)((char *)(temp_t0) + 0x4));
            temp_v1_3 = D_800BE628 + sp6C;
            temp_f0_2 = (*(s32 *)((char *)(temp_v1_3) + 0x10)) + (*(s32 *)((char *)(temp_t0) + 0x4));
            temp_v0_3 = func_1517F9F4(func_1517F9F4(func_1517F9F4(func_1517F9F4((*(void **)&var_f12), 0x3F800000, (s32) temp_s5_8, (s32) (s16) temp_f4, (s32) (s16) temp_f16, (s32) (s16) temp_f16_2), (s32) (s16) temp_f4, (s32) (s16) (s32) ((*(s32 *)((char *)((D_800BE628 + sp6C)) + 0x10)) + (*(s32 *)((char *)(sp70) + 0x4)) + temp_f20), (s32) (s16) temp_f16_2, (s32) spF4, arg1), (s32) (s16) temp_f4, (s32) (s16) (s32) (temp_f0 - temp_f20), (s32) (s16) (s32) (((*(s32 *)((char *)(temp_v1_2) + 0xC)) + (*(s32 *)((char *)(temp_t0) + 0x0))) - temp_f20), (s32) (s16) (s32) (temp_f0 + temp_f20), arg1), (s32) (s16) (s32) ((*(s32 *)((char *)(temp_v1_3) + 0xC)) + (*(s32 *)((char *)(temp_t0) + 0x0)) + temp_f20), (s32) (s16) (s32) (temp_f0_2 - temp_f20), (s32) (s16) temp_f16_2, (s32) (s16) (s32) (temp_f0_2 + temp_f20), arg1);
            temp_t7 = arg1 + &D_800DDE1C;
            sp64 = temp_t7;
            var_s5_2 = temp_v0_3;
            if (*temp_t7 != 0) {
                (*(s32 *)((char *)(temp_v0_3) + 0x0)) = 0xE7000000;
                temp_s5_9 = (char *)(temp_v0_3) + 8;
                (*(s32 *)((char *)(temp_v0_3) + 0x4)) = 0;
                (*(s32 *)((char *)(temp_v0_3) + 0x8)) = 0xEF002C0F;
                (*(s32 *)((char *)(temp_s5_9) + 0x4)) = 0x0F0A4004;
                temp_s5_10 = (char *)(temp_s5_9) + 8;
                (*(s32 *)((char *)(temp_s5_9) + 0x8)) = 0xFCFFFFFF;
                (*(s32 *)((char *)(temp_s5_10) + 0x4)) = 0xFFFDF6FB;
                temp_s5_11 = (char *)(temp_s5_10) + 8;
                (*(s32 *)((char *)(temp_s5_11) + 0x4)) = 0xFF;
                (*(s32 *)((char *)(temp_s5_10) + 0x8)) = 0xFA000000;
                var_s5_2 = (char *)(temp_s5_11) + 8;
                var_s0 = 0;
                var_fp = (s16) temp_f4;
                sp5C = (s32) spF2;
                sp58 = (s32) spF8;
                sp54 = (s32) spF4;
                do {
                    temp_f0_3 = (*(s32 *)((char *)((D_800BE628 + sp6C)) + 0x10));
                    temp_f0_4 = (*(s32 *)((char *)((D_800BE628 + sp6C)) + 0xC));
                    var_v0 = func_1517F9F4(func_1517F9F4(var_s5_2, (s32) var_fp, (s16) (s32) (temp_f0_3 - 1.0f) - var_s0, sp5C, (s16) (s32) (temp_f0_3 + 1.0f) + var_s0, arg1), (s16) (s32) (temp_f0_4 - 1.0f) - var_s0, sp58, (s16) (s32) (temp_f0_4 + 1.0f) + var_s0, sp54, arg1);
                    var_s5_2 = var_v0;
                    if (*sp64 == 1) {
                        temp_v1_4 = D_800BE628 + sp6C;
                        temp_f4_2 = (s32) ((*(s32 *)((char *)(temp_v1_4) + 0xC)) + (*(s32 *)((char *)(sp70) + 0x0)));
                        spD8 = temp_f4_2;
                        temp_f16_3 = (s32) ((*(s32 *)((char *)(temp_v1_4) + 0x10)) + (*(s32 *)((char *)(sp70) + 0x4)));
                        spDC = temp_f16_3;
                        var_v0 = func_1517F9F4(func_1517F9F4(func_1517F9F4(func_1517F9F4(func_1517F9F4(func_1517F9F4(func_1517F9F4(func_1517F9F4(var_s5_2, (s16) (temp_f4_2 - 0x3C) - var_s0, (s16) (temp_f16_3 - 0x3C) - var_s0, (s16) (temp_f4_2 - 0x1E) + var_s0, (s16) (temp_f16_3 - 0x3A) + var_s0, arg1), (s16) (spD8 - 0x3C) - var_s0, (s16) (spDC - 0x3C) - var_s0, (s16) (spD8 - 0x3A) + var_s0, (s16) (spDC - 0x1E) + var_s0, arg1), (s16) (spD8 + 0x3A) - var_s0, (s16) (spDC - 0x1E) - var_s0, (s16) (spD8 + 0x3C) + var_s0, (s16) (spDC - 0x3C) + var_s0, arg1), (s16) (spD8 + 0x1E) - var_s0, (s16) (spDC - 0x3A) - var_s0, (s16) (spD8 + 0x3C) + var_s0, (s16) (spDC - 0x3C) + var_s0, arg1), (s16) (spD8 + 0x3C) - var_s0, (s16) (spDC + 0x3C) - var_s0, (s16) (spD8 + 0x3A) + var_s0, (s16) (spDC + 0x1E) + var_s0, arg1), (s16) (spD8 + 0x3C) - var_s0, (s16) (spDC + 0x3C) - var_s0, (s16) (spD8 + 0x1E) + var_s0, (s16) (spDC + 0x3A) + var_s0, arg1), (s16) (spD8 - 0x3C) - var_s0, (s16) (spDC + 0x3C) - var_s0, (s16) (spD8 - 0x3A) + var_s0, (s16) (spDC + 0x1E) + var_s0, arg1), (s16) (spD8 - 0x3C) - var_s0, (s16) (spDC + 0x3C) - var_s0, (s16) (spD8 - 0x1E) + var_s0, (s16) (spDC + 0x3A) + var_s0, arg1);
                        var_s5_2 = var_v0;
                    }
                    var_fp -= 1;
                    if (var_s0 == 0) {
                        (*(s32 *)((char *)(var_v0) + 0x0)) = 0xE7000000;
                        temp_s5_12 = (char *)(var_v0) + 8;
                        (*(s32 *)((char *)(var_v0) + 0x4)) = 0;
                        (*(s32 *)((char *)(var_v0) + 0x8)) = 0xEF002C0F;
                        (*(s32 *)((char *)(temp_s5_12) + 0x4)) = 0x504244;
                        temp_s5_13 = (char *)(temp_s5_12) + 8;
                        (*(s32 *)((char *)(temp_s5_12) + 0x8)) = 0xF7000000;
                        (*(s32 *)((char *)(temp_s5_13) + 0x4)) = 0;
                        temp_s5_14 = (char *)(temp_s5_13) + 8;
                        (*(s32 *)((char *)(temp_s5_14) + 0x4)) = -0x100;
                        (*(s32 *)((char *)(temp_s5_13) + 0x8)) = 0xFA000000;
                        var_s5_2 = (char *)(temp_s5_14) + 8;
                    }
                    var_s0 += 1;
                    sp54 += 1;
                    sp58 -= 1;
                    sp5C += 1;
                } while (var_s0 != 2);
            }
            (*(s32 *)((char *)(var_s5_2) + 0x0)) = 0xE7000000;
            (*(s32 *)((char *)(var_s5_2) + 0x4)) = 0;
            temp_s5_15 = (char *)(var_s5_2) + 8;
            (*(s32 *)((char *)(temp_s5_15) + 0x4)) = -0xC07;
            (*(s32 *)((char *)(var_s5_2) + 0x8)) = 0xFCFFFFFF;
            temp_s5_16 = (char *)(temp_s5_15) + 8;
            (*(s32 *)((char *)(temp_s5_16) + 0x4)) = -1;
            (*(s32 *)((char *)(temp_s5_15) + 0x8)) = 0xD7000002;
            temp_s5_17 = (char *)(temp_s5_16) + 8;
            (*(s32 *)((char *)(temp_s5_16) + 0x8)) = 0xFD900000;
            temp_s5_18 = (char *)(temp_s5_17) + 8;
            (*(s32 *)((char *)(temp_s5_17) + 0x4)) = func_1510D0EC((*(s32 *)((char *)&(D_80090298) + 0x4)), 0, 3, 0);
            (*(s32 *)((char *)(temp_s5_17) + 0x8)) = 0xF5900000;
            (*(s32 *)((char *)(temp_s5_18) + 0x4)) = 0x07000000;
            temp_s5_19 = (char *)(temp_s5_18) + 8;
            (*(s32 *)((char *)(temp_s5_18) + 0x8)) = 0xF3000000;
            (*(s32 *)((char *)(temp_s5_19) + 0x4)) = 0x077FF000;
            temp_s5_20 = (char *)(temp_s5_19) + 8;
            (*(s32 *)((char *)(temp_s5_19) + 0x8)) = 0xF5881000;
            (*(s32 *)((char *)(temp_s5_20) + 0x4)) = 0x98260;
            temp_s5_21 = (char *)(temp_s5_20) + 8;
            (*(s32 *)((char *)(temp_s5_20) + 0x8)) = 0xF2002002;
            (*(s32 *)((char *)(temp_s5_21) + 0x4)) = 0xFE0FE;
            temp_s5_22 = (char *)(temp_s5_21) + 8;
            (*(s32 *)((char *)(temp_s5_21) + 0x8)) = 0xEF002CFF;
            (*(s32 *)((char *)(temp_s5_22) + 0x4)) = 0x5011C4;
            temp_v0_4 = func_1517FB9C((char *)(temp_s5_22) + 8, sp68, 0x40, 0.0f, 0.0f, arg1);
            var_s5_3 = temp_v0_4;
            if (*sp64 != 0) {
                temp_s5_23 = (char *)(var_s5_3) + 8;
                (*(s32 *)((char *)(temp_v0_4) + 0x0)) = 0xE7000000;
                (*(s32 *)((char *)(temp_v0_4) + 0x4)) = 0;
                (*(s32 *)((char *)(var_s5_3) + 0x8)) = 0xFD700000;
                temp_s5_24 = (char *)(temp_s5_23) + 8;
                (*(s32 *)((char *)(temp_s5_23) + 0x4)) = func_1510D0EC((*(s32 *)((char *)&(D_80090298) + 0x8)), 0, 3, 0);
                (*(s32 *)((char *)(temp_s5_23) + 0x8)) = 0xF5700000;
                (*(s32 *)((char *)(temp_s5_24) + 0x4)) = 0x07000000;
                temp_s5_25 = (char *)(temp_s5_24) + 8;
                (*(s32 *)((char *)(temp_s5_24) + 0x8)) = 0xF3000000;
                (*(s32 *)((char *)(temp_s5_25) + 0x4)) = 0x077FF000;
                temp_s5_26 = (char *)(temp_s5_25) + 8;
                (*(s32 *)((char *)(temp_s5_25) + 0x8)) = 0xF5681000;
                (*(s32 *)((char *)(temp_s5_26) + 0x4)) = 0x98260;
                temp_v0_5 = func_1517FB9C((char *)(temp_s5_26) + 8, sp68 / 2, 0x40, 0.0f, 0.0f, arg1);
                var_s5_3 = temp_v0_5;
                if (*sp64 == 2) {
                    (*(s32 *)((char *)(temp_v0_5) + 0x4)) = 0xFFFCF279;
                    temp_s5_27 = (char *)(var_s5_3) + 8;
                    (*(s32 *)((char *)(temp_v0_5) + 0x0)) = 0xFCFFFFFF;
                    (*(s32 *)((char *)(var_s5_3) + 0x8)) = 0xFD100000;
                    temp_s0 = arg1 + &D_800DDD78;
                    temp_s5_28 = (char *)(temp_s5_27) + 8;
                    (*(s32 *)((char *)(temp_s5_27) + 0x4)) = func_1510D0EC((*(s32 *)((char *)((&D_80090298 + (*temp_s0 * 4))) + 0xC)), 0, 3, 0);
                    (*(s32 *)((char *)(temp_s5_27) + 0x8)) = 0xF5100000;
                    (*(s32 *)((char *)(temp_s5_28) + 0x4)) = 0x07000000;
                    temp_s5_29 = (char *)(temp_s5_28) + 8;
                    (*(s32 *)((char *)(temp_s5_29) + 0x4)) = 0x073FF000;
                    (*(s32 *)((char *)(temp_s5_28) + 0x8)) = 0xF3000000;
                    temp_s5_30 = (char *)(temp_s5_29) + 8;
                    (*(s32 *)((char *)(temp_s5_29) + 0x8)) = 0xF5101000;
                    (*(s32 *)((char *)(temp_s5_30) + 0x4)) = 0x94250;
                    temp_t6 = sp68 / 4;
                    temp_v1_5 = *temp_s0;
                    var_s5_3 = func_1517FB9C(func_1517FB9C((char *)(temp_s5_30) + 8, temp_t6, 0x20, 32.0f, 28.0f, arg1), temp_t6, 0x20, 28.0f, 32.0f, arg1);
                    if ((s32) temp_v1_5 < 2) {
                        *temp_s0 = temp_v1_5 + 1;
                    } else {
                        *temp_s0 = 0;
                    }
                }
            }
        } else {
            temp_v1_6 = D_800BE628 + temp_a0;
            var_s5_3 = (char *)(temp_s5_8) + 8;
            (*(s32 *)((char *)(temp_s5_7) + 0x8)) = (s32) ((((u32) (*(s32 *)((char *)(temp_v1_6) + 0x28)) & 0x3FF) * 4) | 0xF6000000 | (((u32) (*(s32 *)((char *)(temp_v1_6) + 0x30)) & 0x3FF) << 0xE));
            temp_v1_7 = D_800BE628 + temp_a0;
            (*(s32 *)((char *)(temp_s5_8) + 0x4)) = (s32) ((((u32) (*(s32 *)((char *)(temp_v1_7) + 0x24)) & 0x3FF) * 4) | (((u32) (*(s32 *)((char *)(temp_v1_7) + 0x2C)) & 0x3FF) << 0xE));
        }
        (*(s32 *)((char *)(var_s5_3) + 0x4)) = 1;
        (*(s32 *)((char *)(var_s5_3) + 0x0)) = 0xD9FFFFFF;
        var_s5 = (char *)(var_s5_3) + 8;
    }
    return var_s5;
}

void func_151814FC(void) {
    f32 spD4;
    f32 spCC;
    f32 spC8;
    s32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spA0;
    u8 *sp74;
    f32 *temp_s0;
    f32 *temp_s0_2;
    f32 *temp_s0_3;
    f32 *var_s3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 var_f10;
    f32 var_f10_2;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f2_4;
    s32 temp_a2;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    u16 *temp_v0_8;
    u16 temp_v1_3;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *var_fp;
    u8 *var_t0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    void *temp_a0;
    void *temp_s1;
    void *temp_v1;
    void *temp_v1_2;

    temp_a2 = D_80082FA0;
    var_fp = &D_800DDE20;
    var_s2 = 0;
    if (temp_a2 >= 0) {
        temp_f26 = D_800A7294;
        temp_f24 = D_800A7298;
        var_s3 = &D_800DDDD8;
        var_s4 = 0;
        do {
            var_t0 = var_s2 + &D_800DDE3C;
            if (*var_fp != 0) {
                temp_s0 = var_s4 + &D_800DDDC8;
                temp_v1 = (var_s2 * 0x32C) + &gObjects;
                temp_a0 = (*(s32 *)((char *)(temp_v1) + 0x31C));
                *temp_s0 += *var_s3 * (f32) D_800BE9E4;
                if (temp_a0 == NULL) {
                    *temp_s0 = 1.0f;
                } else {
                    temp_v0 = (*(s32 *)((char *)(temp_a0) + 0x120));
                    if (temp_v0 == 3) {
                        temp_f0 = *(&D_800A7260 + (temp_a2 * 4));
                        if (temp_f0 <= *temp_s0) {
                            *temp_s0 = temp_f0;
                            (*(s32 *)((char *)((*(s32 *)((char *)(temp_v1) + 0x31C))) + 0x120)) = 4U;
                            *(&D_800DDD70 + var_s2) = 0x1E;
                            *(&D_800DDD74 + var_s2) = 0;
                        }
                    } else {
                        temp_a0_2 = &D_800DDD70 + var_s2;
                        if (temp_v0 == 4) {
                            temp_v0_2 = *temp_a0_2;
                            if (temp_v0_2 != 0) {
                                temp_a2_2 = var_s2 + &D_800DDD74;
                                if ((s32) temp_v0_2 >= D_800BE9E4) {
                                    *temp_a0_2 = temp_v0_2 - D_800BE9E4;
                                } else {
                                    *temp_a0_2 = 0;
                                }
                                temp_v0_3 = *temp_a0_2;
                                *temp_a2_2 += D_800BE9E4 * 0x14;
                                if ((s32) temp_v0_3 < 0x1E) {
                                    var_f10 = (f32) temp_v0_3;
                                    if ((s32) temp_v0_3 < 0) {
                                        var_f10 += 4294967296.0f;
                                    }
                                    var_f2 = (var_f10 * temp_f24) / 30.0f;
                                } else {
                                    var_f2 = temp_f24;
                                }
                                spD4 = var_f2;
                                *temp_s0 = (func_15048A40(*temp_a2_2, (u8) D_800BE9E4, temp_a2_2) * var_f2) + *(&D_800A7260 + (D_80082FA0 * 4));
                            } else {
                                *temp_s0 = *(&D_800A7260 + (temp_a2 * 4));
                                (*(s32 *)((char *)((*(s32 *)((char *)(temp_v1) + 0x31C))) + 0x120)) = 5U;
                            }
                        } else if (temp_v0 == 5) {
                            *temp_s0 = *(&D_800A7260 + (temp_a2 * 4));
                        } else if (temp_v0 == 6) {
                            *var_s3 = D_800A729C;
                            temp_f0_2 = *(&D_800A7270 + (temp_a2 * 4));
                            if (temp_f0_2 <= *temp_s0) {
                                *temp_s0 = temp_f0_2;
                                (*(s32 *)((char *)((*(s32 *)((char *)(temp_v1) + 0x31C))) + 0x120)) = 7U;
                                (*(s32 *)((char *)((*(s32 *)((char *)(temp_v1) + 0x31C))) + 0x124)) = 0x1E;
                                *var_s3 = 0.0f;
                            }
                        } else if (temp_v0 == 8) {
                            *var_s3 = D_800A72A0;
                            if (*temp_s0 >= 1.0f) {
                                *temp_s0 = 1.0f;
                                (*(s32 *)((char *)((*(s32 *)((char *)(temp_v1) + 0x31C))) + 0x120)) = 9U;
                            }
                        }
                    }
                }
            } else {
                temp_s0_2 = var_s4 + &D_800DDDC8;
                if (*var_t0 != 0) {
                    temp_v1_2 = (var_s2 * 0x32C) + &gObjects;
                    temp_v0_4 = (*(s32 *)((char *)(temp_v1_2) + 0x1D4));
                    *temp_s0_2 += *var_s3 * (f32) D_800BE9E4;
                    temp_s1 = (var_s2 * 8) + &D_800DDDE8;
                    if (temp_v0_4 != 0) {
                        var_a0 = temp_v0_4;
                        if ((*(s32 *)((char *)(temp_v1_2) + 0x0)) == 1) {
                            var_a0 = temp_v0_4 + 0x300;
                        }
                        sp74 = var_t0;
                        func_150A7960(var_a0, 0, (*(s32 *)((char *)(temp_v1_2) + 0x150)) * 40.0f, 0, &spCC, &spC8, &spC4);
                        var_t0 = sp74;
                    } else {
                        spCC = (*(s32 *)((char *)(temp_v1_2) + 0x14));
                        spC8 = (*(s32 *)((char *)(temp_v1_2) + 0x18));
                        spC4 = (*(s32 *)((char *)(temp_v1_2) + 0x1C));
                    }
                    temp_f14 = (*(s32 *)((char *)(temp_s1) + 0x0));
                    temp_f16 = (*(s32 *)((char *)(temp_s1) + 0x4));
                    sp74 = var_t0;
                    spC0 = temp_f14;
                    spBC = temp_f16;
                    func_1517F814(0, spCC, spC8, spC4, var_s2);
                    var_f14 = temp_f14;
                    var_f16 = temp_f16;
                    spCC = (*(s32 *)((char *)(temp_s1) + 0x0));
                    spC8 = (*(s32 *)((char *)(temp_s1) + 0x4));
                    if (D_800BE9B4 != 0) {
                        var_f18 = 1.0f;
                    } else {
                        var_f18 = D_800A72A4;
                    }
                    temp_f12 = spCC - var_f14;
                    var_f2_2 = temp_f12;
                    if (fabsf(temp_f12) > 15.0f) {
                        var_v0 = 1;
                        if (temp_f12 < 0.0f) {
                            var_v0 = -1;
                        }
                        var_f2_2 = (f32) var_v0 * 15.0f;
                        var_f14 = spCC - var_f2_2;
                    }
                    temp_f12_2 = spC8 - var_f16;
                    temp_f14_2 = var_f14 + (var_f2_2 * var_f18);
                    var_f2_3 = temp_f12_2;
                    if (fabsf(temp_f12_2) > 11.25f) {
                        var_v0_2 = 1;
                        if (temp_f12_2 < 0.0f) {
                            var_v0_2 = -1;
                        }
                        var_f2_3 = (f32) var_v0_2 * 11.25f;
                        var_f16 = spC8 - var_f2_3;
                    }
                    temp_v0_5 = *var_t0;
                    (*(s32 *)((char *)(temp_s1) + 0x0)) = temp_f14_2;
                    (*(f32 *)((char *)(temp_s1) + 0x4)) = (f32) (var_f16 + (var_f2_3 * var_f18));
                    if (temp_v0_5 == 1) {
                        if (*temp_s0_2 <= temp_f26) {
                            *(&D_800DDD70 + var_s2) = 0x1E;
                            *temp_s0_2 = temp_f26;
                            *var_s3 = 0.0f;
                            *var_t0 = 2;
                        }
                    } else {
                        temp_a0_3 = &D_800DDD70 + var_s2;
                        if (temp_v0_5 == 2) {
                            temp_v0_6 = *temp_a0_3;
                            if (temp_v0_6 != 0) {
                                temp_a2_3 = var_s2 + &D_800DDD74;
                                if ((s32) temp_v0_6 >= D_800BE9E4) {
                                    *temp_a0_3 = temp_v0_6 - D_800BE9E4;
                                } else {
                                    *temp_a0_3 = 0;
                                }
                                temp_v0_7 = *temp_a0_3;
                                *temp_a2_3 -= D_800BE9E4 * 0x14;
                                if ((s32) temp_v0_7 < 0x1E) {
                                    var_f10_2 = (f32) temp_v0_7;
                                    if ((s32) temp_v0_7 < 0) {
                                        var_f10_2 += 4294967296.0f;
                                    }
                                    var_f2_4 = (var_f10_2 * temp_f24) / 30.0f;
                                } else {
                                    var_f2_4 = temp_f24;
                                }
                                spA0 = var_f2_4;
                                *temp_s0_2 = (func_15048A40((u8) temp_f12_2, (u8) temp_f14_2, (u8 *) *temp_a2_3, D_800BE9E4, temp_a2_3) * var_f2_4) + temp_f26;
                            } else {
                                *temp_s0_2 = temp_f26;
                                *var_t0 = 3;
                                *(&D_800DDD80 + (var_s2 * 2)) = 0x3C;
                            }
                        } else if (temp_v0_5 == 3) {
                            temp_v0_8 = (var_s2 * 2) + &D_800DDD80;
                            temp_v1_3 = *temp_v0_8;
                            if (D_800BE9E4 < (s32) temp_v1_3) {
                                *temp_v0_8 = temp_v1_3 - D_800BE9E4;
                            } else {
                                *var_t0 = 4;
                                *var_s3 = D_800A72A8;
                            }
                        } else if (*temp_s0_2 <= 0.0f) {
                            *var_t0 = 0;
                            *temp_s0_2 = 0.0f;
                        }
                    }
                } else {
                    temp_f2 = *var_s3;
                    if (temp_f2 != 0.0f) {
                        temp_s0_3 = var_s4 + &D_800DDDC8;
                        if (temp_f2 > 0.0f) {
                            if (*temp_s0_3 >= 1.0f) {
                                *var_s3 = 0.0f;
                                *temp_s0_3 = 1.0f;
                            }
                        } else if (*temp_s0_3 <= 0.0f) {
                            *var_s3 = 0.0f;
                            *temp_s0_3 = 0.0f;
                        }
                        *temp_s0_3 += *var_s3 * (f32) D_800BE9E4;
                    }
                }
            }
            var_s2 += 1;
            var_fp += 1;
            var_s4 += 4;
            var_s3 += 4;
        } while (temp_a2 >= var_s2);
    }
}

s32 func_15181CC8(s32 arg0) {
    if (*(&D_800DDDC8 + (arg0 * 4)) == 0.0f) {
        return 1;
    }
    return 0;
}

void func_15181D00(s32 arg0, s32 arg1) {
    void *temp_v1;

    if (arg1 == 0) {
        *(&D_800DDDC8 + (arg0 * 4)) = 0.0f;
    } else {
        (&D_800DDDD8)[arg0] = 0.0f;
        temp_v1 = (arg0 * 8) + &D_800DDDE8;
        *(&D_800DDDC8 + (arg0 * 4)) = D_800A72AC;
        (*(s32 *)((char *)(temp_v1) + 0x0)) = 0.0f;
        (*(s32 *)((char *)(temp_v1) + 0x4)) = 0.0f;
    }
    *(&D_800DDE1C + arg0) = arg1;
}

void func_15181D70(s32 arg0) {
    void *temp_v1;

    (&D_800DDDD8)[arg0] = D_800A72B0;
    *(&D_800DDDC8 + (arg0 * 4)) = 0.0f;
    temp_v1 = (arg0 * 8) + &D_800DDDE8;
    (*(s32 *)((char *)(temp_v1) + 0x0)) = 0.0f;
    (*(s32 *)((char *)(temp_v1) + 0x4)) = 0.0f;
    (&D_800DDE20)[arg0] = 1;
}

void func_15181DC8(s32 arg0) {
    void *temp_v1;

    (&D_800DDDD8)[arg0] = 0.0f;
    *(&D_800DDDC8 + (arg0 * 4)) = 0.0f;
    temp_v1 = (arg0 * 8) + &D_800DDDE8;
    (*(s32 *)((char *)(temp_v1) + 0x0)) = 0.0f;
    (*(s32 *)((char *)(temp_v1) + 0x4)) = 0.0f;
    (&D_800DDE20)[arg0] = 0;
}

void func_15181E18(s32 arg0) {
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    if (D_800BE616 != 0) {
        temp_v0 = (arg0 * 3) + &D_800DDDA0;
        temp_v1 = arg0 * 4;
        (*(s32 *)((char *)(temp_v0) + 0x0)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x1)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x2)) = 0;
        *(&D_800DDE28 + temp_v1) = 0x19;
        *(&D_800DDDB0 + temp_v1) = 0;
        *(&D_800DDDAC + arg0) = 0;
        *(&D_800DDDC0 + arg0) = 0;
        return;
    }
    *(&D_800DDE3C + arg0) = 1;
    *(&D_800DDDC8 + (arg0 * 4)) = 1.0f;
    temp_v0_2 = (arg0 * 8) + &D_800DDDE8;
    (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0.0f;
    (*(s32 *)((char *)(temp_v0_2) + 0x4)) = 0.0f;
    (&D_800DDDD8)[arg0] = D_800A72B4;
}

void *func_15181EE0(void *arg0) {
    s16 spF4;
    s16 spF2;
    s16 spF0;
    s32 spEC;
    s32 spE8;
    s32 spDC;
    f32 spD0;
    void *spA8;
    void *sp88;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp2C;
    f32 temp_f12;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f2;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_t6;
    s16 temp_t7;
    s16 temp_t8;
    s16 temp_t8_2;
    s16 temp_t9_3;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v1;
    s16 var_v1_2;
    s16 var_v1_5;
    s16 var_v1_6;
    s32 temp_f10;
    s32 temp_f10_2;
    s32 temp_f16;
    s32 temp_f4;
    s32 temp_f6;
    s32 temp_f8;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t8_3;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_t9_4;
    s32 var_t3;
    s32 var_t3_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_7;
    s32 var_v1_8;
    void *temp_a0;
    void *temp_s0;
    void *temp_s0_10;
    void *temp_s0_11;
    void *temp_s0_12;
    void *temp_s0_13;
    void *temp_s0_14;
    void *temp_s0_15;
    void *temp_s0_16;
    void *temp_s0_17;
    void *temp_s0_18;
    void *temp_s0_19;
    void *temp_s0_20;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s0_9;
    void *temp_v0;
    void *var_s0;

    var_s0 = arg0;
    if (D_800DDE18 == NULL) {

    } else {
        temp_f2 = (*(s32 *)((D_800DDE18))) * D_800A72B8;
        if (temp_f2 < 0.0f) {
            var_f2 = 0.0f;
        } else {
            if (temp_f2 > 1.0f) {
                var_f0 = 1.0f;
            } else {
                var_f0 = temp_f2;
            }
            var_f2 = var_f0;
        }
        if (var_f2 == 0.0f) {

        } else {
            temp_s0 = (char *)(var_s0) + 8;
            (*(s32 *)((char *)(var_s0) + 0x0)) = 0xE7000000;
            (*(s32 *)((char *)(var_s0) + 0x4)) = 0;
            (*(s32 *)((char *)(var_s0) + 0x8)) = 0xF7000000;
            (*(s32 *)((char *)(temp_s0) + 0x4)) = 0x10001;
            temp_s0_2 = (char *)(temp_s0) + 8;
            (*(s32 *)((char *)(temp_s0) + 0x8)) = 0xD9E0FFFE;
            (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
            temp_s0_3 = (char *)(temp_s0_2) + 8;
            (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0xD9FFFFFF;
            (*(s32 *)((char *)(temp_s0_3) + 0x4)) = 0x200004;
            temp_s0_4 = (char *)(temp_s0_3) + 8;
            (*(s32 *)((char *)(temp_s0_4) + 0x4)) = 4;
            (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0xEF302C0F;
            temp_f12 = (*(s32 *)((char *)(D_800BE628) + 0x24));
            temp_f4 = (s32) (*(s32 *)((char *)(D_800BE628) + 0x28));
            temp_f16 = (s32) (*(s32 *)((char *)(D_800BE628) + 0x2C));
            spF2 = (s16) temp_f4;
            spF4 = (s16) temp_f16;
            temp_f8 = (s32) (*(s32 *)((char *)(D_800BE628) + 0x30));
            spD0 = var_f2;
            spF0 = (s16) temp_f8;
            temp_f6 = (s32) ((temp_f12 - 30.0f) + ((((*(s32 *)((char *)(D_800BE628) + 0x8)) * D_800A72BC) + 30.0f) * var_f2));
            sp40 = (s32) (s16) temp_f6;
            spEC = temp_f6;
            temp_a0 = func_1517F9F4((*(void **)&temp_f12), 0x41F00000, (s32) ((char *)(temp_s0_4) + 8), (s32) (s16) temp_f16, (s32) (s16) (s32) temp_f12, (s32) (s16) temp_f8);
            temp_f10 = (s32) (((*(s32 *)((char *)(D_800BE628) + 0x28)) + 30.0f) - ((((*(s32 *)((char *)(D_800BE628) + 0x8)) * (1.0f - D_800A72C0)) + 30.0f) * var_f2));
            sp3C = (s32) (s16) temp_f10;
            spE8 = temp_f10;
            temp_v0 = func_1517F9F4(temp_a0, (s32) (s16) temp_f16, (s32) (s16) temp_f10, (s32) (s16) temp_f8, temp_f4, 0);
            (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xE7000000;
            (*(s32 *)((char *)(temp_v0) + 0x4)) = 0;
            (*(s32 *)((char *)(temp_v0) + 0xC)) = -1;
            (*(s32 *)((char *)(temp_v0) + 0x8)) = 0xD7000002;
            (*(s32 *)((char *)(temp_v0) + 0x10)) = 0xEF002CFF;
            (*(s32 *)((char *)(temp_v0) + 0x14)) = 0x5011C4;
            (*(s32 *)((char *)(temp_v0) + 0x1C)) = -0xC07;
            (*(s32 *)((char *)(temp_v0) + 0x18)) = 0xFCFFFFFF;
            spA8 = (char *)(temp_v0) + 0x20;
            (*(s32 *)((char *)(temp_v0) + 0x20)) = 0xFD900000;
            temp_s0_5 = (char *)(temp_v0) + 0x28;
            (*(s32 *)((char *)(spA8) + 0x4)) = func_1510D0EC(D_800902C8, 0, 3, 0);
            (*(s32 *)((char *)(temp_s0_5) + 0x4)) = 0x07000000;
            (*(s32 *)((char *)(temp_v0) + 0x28)) = 0xF5900000;
            temp_s0_6 = (char *)(temp_s0_5) + 8;
            (*(s32 *)((char *)(temp_s0_5) + 0x8)) = 0xF3000000;
            (*(s32 *)((char *)(temp_s0_6) + 0x4)) = 0x077FF000;
            temp_s0_7 = (char *)(temp_s0_6) + 8;
            (*(s32 *)((char *)(temp_s0_6) + 0x8)) = 0xF5801000;
            (*(s32 *)((char *)(temp_s0_7) + 0x4)) = 0x9C270;
            temp_s0_8 = (char *)(temp_s0_7) + 8;
            (*(s32 *)((char *)(temp_s0_7) + 0x8)) = 0xF2002002;
            (*(s32 *)((char *)(temp_s0_8) + 0x4)) = 0x1FE0FE;
            temp_s0_9 = (char *)(temp_s0_8) + 8;
            temp_s0_10 = (char *)(temp_s0_9) + 8;
            temp_t7 = (s16) temp_f8 * 4;
            temp_s0_11 = (char *)(temp_s0_10) + 8;
            temp_f10_2 = (s32) ((128.0f / (*(s32 *)((char *)(D_800BE628) + 0x4))) * 1024.0f);
            if (temp_t7 > 0) {
                var_v0 = temp_t7;
            } else {
                var_v0 = 0;
            }
            temp_t8 = (spEC + 0x1E) * 4;
            if (temp_t8 > 0) {
                var_v1 = temp_t8;
            } else {
                var_v1 = 0;
            }
            temp_t6 = spF4 * 4;
            (*(s32 *)((char *)(temp_s0_8) + 0x8)) = (s32) ((var_v1 & 0xFFF) | 0xE4000000 | ((var_v0 & 0xFFF) << 0xC));
            if (temp_t6 > 0) {
                var_v0_2 = temp_t6;
            } else {
                var_v0_2 = 0;
            }
            temp_t8_2 = sp40 * 4;
            if (temp_t8_2 > 0) {
                var_v1_2 = temp_t8_2;
            } else {
                var_v1_2 = 0;
            }
            (*(s32 *)((char *)(temp_s0_9) + 0x4)) = (s32) ((var_v1_2 & 0xFFF) | ((var_v0_2 & 0xFFF) << 0xC));
            (*(s32 *)((char *)(temp_s0_9) + 0x8)) = 0xE1000000;
            if (temp_t6 < 0) {
                if ((s16) temp_f10_2 < 0) {
                    temp_t8_3 = (s32) (temp_t6 * (s16) temp_f10_2) >> 7;
                    if (temp_t8_3 > 0) {
                        var_t3 = temp_t8_3;
                    } else {
                        var_t3 = 0;
                    }
                } else {
                    var_v1_3 = 0;
                    temp_t9 = (s32) (temp_t6 * (s16) temp_f10_2) >> 7;
                    if (temp_t9 < 0) {
                        var_v1_3 = temp_t9;
                    }
                    var_t3 = var_v1_3;
                }
            } else {
                var_t3 = 0;
            }
            if (sp40 & 0x20000000) {
                temp_t6_2 = (s32) (temp_t8_2 * 0x222) >> 7;
                var_v1_4 = 0;
                if (temp_t6_2 < 0) {
                    var_v1_4 = temp_t6_2;
                }
            } else {
                var_v1_4 = 0;
            }
            (*(s32 *)((char *)(temp_s0_10) + 0x4)) = (s32) ((-var_v1_4 & 0xFFFF) | (var_t3 * -0x10000));
            temp_t9_2 = (temp_f10_2 << 0x10) | 0x222;
            (*(s32 *)((char *)(temp_s0_10) + 0x8)) = 0xF1000000;
            sp2C = temp_t9_2;
            (*(s32 *)((char *)(temp_s0_11) + 0x4)) = temp_t9_2;
            temp_s0_12 = (char *)(temp_s0_11) + 8;
            (*(s32 *)((char *)(temp_s0_11) + 0x8)) = 0xFD900000;
            spDC = temp_f10_2;
            sp38 = (s32) temp_t7;
            sp34 = (s32) temp_t6;
            sp88 = temp_s0_12;
            temp_s0_13 = (char *)(temp_s0_12) + 8;
            (*(s32 *)((char *)(temp_s0_12) + 0x4)) = func_1510D0EC(D_800902CC, 0, 3, 0);
            (*(s32 *)((char *)(temp_s0_13) + 0x4)) = 0x07000000;
            (*(s32 *)((char *)(temp_s0_12) + 0x8)) = 0xF5900000;
            temp_s0_14 = (char *)(temp_s0_13) + 8;
            (*(s32 *)((char *)(temp_s0_13) + 0x8)) = 0xF3000000;
            (*(s32 *)((char *)(temp_s0_14) + 0x4)) = 0x077FF000;
            temp_s0_15 = (char *)(temp_s0_14) + 8;
            (*(s32 *)((char *)(temp_s0_14) + 0x8)) = 0xF5801000;
            (*(s32 *)((char *)(temp_s0_15) + 0x4)) = 0x9C270;
            temp_s0_16 = (char *)(temp_s0_15) + 8;
            (*(s32 *)((char *)(temp_s0_15) + 0x8)) = 0xF2002002;
            (*(s32 *)((char *)(temp_s0_16) + 0x4)) = 0x1FE0FE;
            temp_s0_17 = (char *)(temp_s0_16) + 8;
            temp_s0_18 = (char *)(temp_s0_17) + 8;
            if (temp_t7 > 0) {
                var_v0_3 = temp_t7;
            } else {
                var_v0_3 = 0;
            }
            temp_t9_3 = sp3C * 4;
            if (temp_t9_3 > 0) {
                var_v1_5 = temp_t9_3;
            } else {
                var_v1_5 = 0;
            }
            (*(s32 *)((char *)(temp_s0_16) + 0x8)) = (s32) ((var_v1_5 & 0xFFF) | 0xE4000000 | ((var_v0_3 & 0xFFF) << 0xC));
            if (temp_t6 > 0) {
                var_v0_4 = temp_t6;
            } else {
                var_v0_4 = 0;
            }
            temp_s0_19 = (char *)(temp_s0_18) + 8;
            var_v1_6 = 0;
            temp_a2 = spE8 - 0x1E;
            temp_a2_2 = temp_a2 * 4;
            if (temp_a2_2 > 0) {
                var_v1_6 = temp_a2_2;
            }
            (*(s32 *)((char *)(temp_s0_17) + 0x4)) = (s32) ((var_v1_6 & 0xFFF) | ((var_v0_4 & 0xFFF) << 0xC));
            (*(s32 *)((char *)(temp_s0_17) + 0x8)) = 0xE1000000;
            if (temp_t6 < 0) {
                temp_t9_4 = (s32) (temp_t6 * (s16) temp_f10_2) >> 7;
                if ((s16) temp_f10_2 < 0) {
                    if (temp_t9_4 > 0) {
                        var_t3_2 = temp_t9_4;
                    } else {
                        var_t3_2 = 0;
                    }
                } else {
                    var_v1_7 = 0;
                    if (temp_t9_4 < 0) {
                        var_v1_7 = temp_t9_4;
                    }
                    var_t3_2 = var_v1_7;
                }
            } else {
                var_t3_2 = 0;
            }
            var_v1_8 = 0;
            if (temp_a2 & 0x20000000) {
                temp_t6_3 = (s32) (temp_a2_2 * 0x222) >> 7;
                var_v1_8 = 0;
                if (temp_t6_3 < 0) {
                    var_v1_8 = temp_t6_3;
                }
            }
            (*(s32 *)((char *)(temp_s0_18) + 0x4)) = (s32) ((-var_v1_8 & 0xFFFF) | (var_t3_2 * -0x10000));
            (*(s32 *)((char *)(temp_s0_18) + 0x8)) = 0xF1000000;
            temp_s0_20 = (char *)(temp_s0_19) + 8;
            (*(s32 *)((char *)(temp_s0_19) + 0x4)) = sp2C;
            (*(s32 *)((char *)(temp_s0_20) + 0x4)) = 1;
            (*(s32 *)((char *)(temp_s0_19) + 0x8)) = 0xD9FFFFFF;
            var_s0 = (char *)(temp_s0_20) + 8;
        }
    }
    return var_s0;
}

void func_15182670( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s16 sp3A;
    u8 sp38;
    u8 sp37;
    u8 sp36;
    u8 sp35;
    u8 sp34;
    s32 temp_v0;

    if (arg4 > 0) {
        sp34 = arg0;
        sp3A = (s16) ((s32) arg3 / arg4);
        sp37 = arg3;
        sp35 = arg1;
        sp36 = arg2;
        sp38 = arg5;
        temp_v0 = func_15149130(arg4, -1, 0x39, 3, 1, 0, 8, (s32) arg6, arg7);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x28, &sp34, 8);
        }
    }
}

void func_15182748(void *arg0) {
    (*(s8 *)((char *)(arg0) + 0x2B)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) * (*(s8 *)((char *)(arg0) + 0xE)));
}

void *func_15182768(void *arg0, void *arg1, s32 arg2) {
    void *temp_v0;
    void *var_a0;

    var_a0 = arg0;
    temp_v0 = (char *)(arg1) + 0x28;
    if (arg2 == (*(s32 *)((char *)(arg1) + 0x2C))) {
        var_a0 = func_1517F08C((void *) (*(s32 *)((char *)(temp_v0) + 0x3)), (s32) (*(s32 *)((char *)(arg1) + 0x28)), (*(s32 *)((char *)(temp_v0) + 0x1)), (u8) (s32) (*(s32 *)((char *)(temp_v0) + 0x2)), (s32) (*(s32 *)((char *)(temp_v0) + 0x4)), 0);
    }
    return var_a0;
}
