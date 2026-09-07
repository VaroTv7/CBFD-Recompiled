/**
 * Auto-decompiled from asm/F2820.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                            /* extern */
s32 func_15142C10();      /* extern */
s32 func_15142CF0(); /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143134();       /* extern */
f32 func_15143E64();            /* extern */
void * func_1514EDF0();                               /* extern */
void *func_15167A68();        /* extern */
void * memcpy();                           /* extern */
extern s32 D_80088760;
extern s32 D_800887B8;
extern s32 D_800887C0;
extern s32 D_800887C8;
extern s32 D_80090DE8;
extern f32 D_800A0400;
extern s32 D_800A4AC8;
extern s32 D_800D2C9C;
void func_150C5430();
void func_150C5450();

void *func_150C5370(s32 arg0, s32 arg1) {
    void *sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    void *temp_v0;

    temp_v0 = func_15167A68(0x46, 0, arg1 + 0xC8, 1, 0xFF, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    sp2C = temp_v0;
    memcpy((char *)(temp_v0) + 0x18, arg0, 0x24);
    sp20 = (*(s32 *)((char *)(temp_v0) + 0x18)) - (*(s32 *)((char *)(temp_v0) + 0x24));
    sp24 = (*(s32 *)((char *)(temp_v0) + 0x1C)) - (*(s32 *)((char *)(temp_v0) + 0x28));
    sp28 = (*(s32 *)((char *)(temp_v0) + 0x20)) - (*(s32 *)((char *)(temp_v0) + 0x2C));
    (*(s32 *)((char *)(sp2C) + 0xC0)) = func_15143E64(&sp20);
    (*(s32 *)((char *)(sp2C) + 0x10)) = 1;
    (*(s32 *)((char *)(sp2C) + 0x14)) = 0;
    return sp2C;
}

void func_150C5430(void) {
    func_15169804();
}

void func_150C5450(void) {
    func_15169824();
}

void func_150C5470(void *arg0) {
    u8 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x38));
    if ((s32) var_v0 < 0) {
        goto block_3;
    }
    if ((s32) var_v0 >= 2) {
block_3:
        var_v0 = 0;
    }
    ((s32 (*)())((char *)(&D_800887B8 + (var_v0 * 4))))();
}

void func_150C54C0(void *arg0) {
    u8 var_v0;

    var_v0 = (*(s32 *)((char *)(arg0) + 0x38));
    if ((s32) var_v0 < 0) {
        goto block_3;
    }
    if ((s32) var_v0 >= 2) {
block_3:
        var_v0 = 0;
    }
    ((s32 (*)())((char *)(&D_800887C0 + (var_v0 * 4))))();
}

void func_150C5510(void *arg0) {
    func_1514EDF0((*(s32 *)((char *)(arg0) + 0xC8)));
    func_150C5430();
}

void func_150C553C(void *arg0) {
    func_1514EDF0((*(s32 *)((char *)(arg0) + 0xC8)));
    func_150C5450();
}

void func_150C5568(void *arg0) {
    u8 sp3B;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s8 temp_v0;
    u8 var_v1;

    var_v1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x10)) & 1) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x30));
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x18)) - (*(s32 *)((char *)(arg0) + 0x24));
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x1C)) - (*(s32 *)((char *)(arg0) + 0x28));
        temp_f12 = (*(s32 *)((char *)(arg0) + 0x20)) - (*(s32 *)((char *)(arg0) + 0x2C));
        if (temp_v0 != -1) {
            sp3B = 0;
            sp2C = temp_f0;
            sp30 = temp_f2;
            sp34 = temp_f12;
            var_v1 = sp3B;
            if (((s32 (*)())((char *)(&D_80088760 + (temp_v0 * 4))))(temp_f12, arg0, arg0) == 0) {
                var_v1 = 1;
            }
        }
        if ((var_v1 == 0) && ((sp20 = (*(s32 *)((char *)(arg0) + 0x18)) - (*(s32 *)((char *)(arg0) + 0x24)), sp24 = (*(s32 *)((char *)(arg0) + 0x1C)) - (*(s32 *)((char *)(arg0) + 0x28)), sp28 = (*(s32 *)((char *)(arg0) + 0x20)) - (*(s32 *)((char *)(arg0) + 0x2C)), (sp20 != temp_f0)) || (sp24 != temp_f2) || (sp28 != temp_f12))) {
            sp3B = var_v1;
            var_v1 = sp3B;
            (*(s32 *)((char *)(arg0) + 0xC0)) = func_15143E64((*(f32 * *)&temp_f12), &sp20, arg0);
        }
        if (var_v1 != 0) {
            func_1516972C(arg0, arg0);
        }
    }
}

s32 func_150C56A4(s32 arg0, void *arg1, s32 arg2) {
    s8 spAB;
    void *spA0;
    f32 sp98;
    f32 sp94;
    f32 sp8C;
    f32 sp88;
    f32 sp78;
    s32 sp60;                                       /* compiler-managed */
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f6;
    f32 temp_f8;
    f32 var_f12;
    f32 var_f16;
    f32 var_f18;
    s32 temp_a0;
    s32 temp_f6_2;
    s32 temp_t7;
    s32 temp_t9;
    s32 var_a0;
    s32 var_v0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    var_a0 = arg0;
    if ((*(s32 *)((char *)(arg1) + 0x10)) & 1) {
        temp_t7 = arg2 * 0x9A0;
        spAB = 1;
        temp_s0 = (char *)(arg1) + (D_800BE9C0 << 6) + 0x40;
        spA0 = temp_t7 + D_800DBFF0 + 0x2F8;
        sp60 = temp_t7;
        temp_a0 = func_15142E24(func_15142B7C(1, 0x600), &D_80090DE8, 0, 0, 0, 0, 0x36, 0, 0, &spAB, 3);
        if ((*(s32 *)((char *)((D_800DBFF0 + sp60)) + 0x5F0)) & 1) {
            temp_t9 = arg2 * 3;
            temp_v0 = temp_t9 + &D_800D9B78;
            sp60 = temp_t9;
            temp_v1 = sp60 + &D_800D9B68;
            var_v0 = func_1513F4E4(func_15142CF0(func_15142C10(temp_a0, (*(s32 *)((char *)(temp_v0) + 0x0)), (*(s32 *)((char *)(temp_v0) + 0x1)), (*(s32 *)((char *)(temp_v0) + 0x2)), 0xFF, &spAB), 0xF2, 0, (*(s32 *)((char *)(temp_v1) + 0x0)), (s32) (*(s32 *)((char *)(temp_v1) + 0x1)), (s32) (*(s32 *)((char *)(temp_v1) + 0x2)), 0xFF, &spAB), 0x1E, &spAB);
        } else {
            var_v0 = func_1513F4E4(func_15142CF0(func_15142C10(temp_a0, 0U, 0U, 0U, 0, &spAB), 0, 0, 0U, 0, 0, 0, &spAB), 0x13, &spAB);
        }
        temp_v0_2 = func_15142FBC(var_v0, D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0xC)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x8)), &spAB);
        temp_a0_2 = (char *)(temp_v0_2) + 8;
        sp58 = (*(s32 *)((char *)(arg1) + 0x24));
        temp_a0_3 = (char *)(temp_a0_2) + 8;
        temp_f8 = sp58 - (*(s32 *)((char *)(arg1) + 0x18));
        var_a0 = (char *)(temp_a0_3) + 8;
        sp94 = temp_f8;
        temp_f14 = (*(s32 *)((char *)(arg1) + 0x28));
        temp_f6 = temp_f14 - (*(s32 *)((char *)(arg1) + 0x1C));
        sp98 = temp_f6;
        temp_f12 = (*(s32 *)((char *)(arg1) + 0x2C));
        temp_f0 = temp_f12 - (*(s32 *)((char *)(arg1) + 0x20));
        temp_f10 = sp58 - (*(s32 *)((char *)(spA0) + 0x0));
        sp88 = temp_f10;
        sp8C = temp_f14 - (*(s32 *)((char *)(spA0) + 0x4));
        sp48 = temp_f8;
        temp_f2 = temp_f12 - (*(s32 *)((char *)(spA0) + 0x8));
        sp4C = temp_f10;
        sp50 = sp8C;
        temp_f16 = (temp_f6 * temp_f2) - (sp8C * temp_f0);
        sp4C = temp_f6;
        sp48 = temp_f16;
        sp60 = temp_f16;
        temp_f18 = (temp_f0 * temp_f10) - (temp_f2 * temp_f8);
        sp5C = temp_f18;
        temp_f12_2 = (temp_f8 * sp50) - (temp_f10 * sp4C);
        temp_f2_2 = (sp48 * sp48) + (temp_f18 * temp_f18) + (temp_f12_2 * temp_f12_2);
        sp78 = temp_f2_2;
        if (temp_f2_2 == 0.0f) {
            var_f16 = 0.0f;
            var_f18 = 0.0f;
            var_f12 = 0.0f;
        } else {
            temp_f2_3 = D_800A0400 / sqrtf(sp78);
            var_f16 = temp_f16 * temp_f2_3;
            var_f18 = temp_f18 * temp_f2_3;
            var_f12 = temp_f12_2 * temp_f2_3;
        }
        temp_s0_2 = (char *)(temp_s0) + 0x40;
        temp_f6_2 = (s32) ((*(s32 *)((char *)(arg1) + 0xC0)) * (*(s32 *)((char *)(arg1) + 0x34)) * 64.0f);
        (*(s16 *)((char *)(temp_s0_2) - 0x40)) = (s16) (s32) (sp58 + var_f16);
        (*(s16 *)((char *)(temp_s0_2) - 0x3E)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x28)) + var_f18);
        (*(s32 *)((char *)(temp_s0_2) - 0x38)) = 0;
        (*(s32 *)((char *)(temp_s0_2) - 0x36)) = 0;
        (*(s16 *)((char *)(temp_s0_2) - 0x3C)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x2C)) + var_f12);
        (*(s16 *)((char *)(temp_s0_2) - 0x30)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x24)) - var_f16);
        (*(s16 *)((char *)(temp_s0_2) - 0x2E)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x28)) - var_f18);
        (*(s32 *)((char *)(temp_s0_2) - 0x28)) = 0x3C0;
        (*(s32 *)((char *)(temp_s0_2) - 0x26)) = 0;
        (*(s16 *)((char *)(temp_s0_2) - 0x2C)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x2C)) - var_f12);
        (*(s16 *)((char *)(temp_s0_2) - 0x20)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x18)) - var_f16);
        (*(s16 *)((char *)(temp_s0_2) - 0x1E)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x1C)) - var_f18);
        (*(s32 *)((char *)(temp_s0_2) - 0x18)) = 0x3C0;
        (*(s16 *)((char *)(temp_s0_2) - 0x16)) = (s16) temp_f6_2;
        (*(s16 *)((char *)(temp_s0_2) - 0x1C)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x20)) - var_f12);
        (*(s16 *)((char *)(temp_s0_2) - 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x18)) + var_f16);
        (*(s16 *)((char *)(temp_s0_2) - 0xE)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x1C)) + var_f18);
        (*(s32 *)((char *)(temp_s0_2) - 0x8)) = 0;
        (*(s16 *)((char *)(temp_s0_2) - 0x6)) = (s16) temp_f6_2;
        (*(s16 *)((char *)(temp_s0_2) - 0xC)) = (s16) (s32) ((*(s16 *)((char *)(arg1) + 0x20)) + var_f12);
        (*(s32 *)((char *)(temp_v0_2) + 0x0)) = 0x01004008;
        (*(s32 *)((char *)(temp_v0_2) + 0x4)) = (void *) ((char *)(temp_s0_2) - 0x40);
        (*(s32 *)((char *)(temp_a0_2) + 0x0)) = 0x05000204;
        (*(s32 *)((char *)(temp_a0_2) + 0x4)) = 0;
        (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0x05000406;
        (*(s32 *)((char *)(temp_a0_3) + 0x4)) = 0;
    }
    return var_a0;
}

s32 func_150C5B88(void *arg0) {
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0xC8))) + 0x0)) == 0) {
        return 0;
    }
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0xC8))) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0xC8))) + 0x18));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0xC8))) + 0x1C));
    return 1;
}

s32 func_150C5BD4(void *arg0) {
    s32 temp_t0;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = (char *)(arg0) + 0xC8;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0xC8))) + 0x0)) == 0) {
        return 0;
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0xC8));
    if ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_v1) + 0x3B))) {
        return 0;
    }
    temp_t0 = (*(s32 *)((char *)(temp_v1) + 0x1D4));
    if (temp_t0 == 0) {
        (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x14));
        (*(f32 *)((char *)(arg0) + 0x28)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0xC8))) + 0x18));
        (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0xC8))) + 0x1C));
    } else {
        func_15143134((char *)(temp_v0) + 8, (char *)(arg0) + 0x24, temp_t0 + ((*(s32 *)((char *)(temp_v0) + 0x5)) << 6), arg0);
    }
    return 1;
}

void func_150C5C74(void) {
    func_1514D3B0(0x15, 1, 0);
}

void func_150C5C9C(void) {
    func_1514D3B0(0x15, 2, 0);
}

void func_150C5CC4(void *arg0, s32 arg2) {
    void * (*temp_v0)(s32);

    temp_v0 = *(&D_800887C8 + ((*(s32 *)((char *)(arg0) + 0x38)) * 4));
    if (temp_v0 != NULL) {
        temp_v0(arg2 & 0xFF);
    }
}

void func_150C5D0C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg0) + 0xC8)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(((char *)(arg0) + 0xC8)) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, (void *) temp_t6, arg0);
        }
    } else {
        temp_v0 = (char *)(arg0) + 0xC8;
        if (temp_t6 == 0x2D) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0xC8));
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
            if (temp_v1 == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0xC8)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                return;
            }
            if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0xC8)) = temp_v1;
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            }
        }
    }
}
