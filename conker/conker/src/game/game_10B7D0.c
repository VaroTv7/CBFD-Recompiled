/**
 * Auto-decompiled from asm/10B7D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150A2864();                             /* extern */
s32 func_150A32B4();                  /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
s32 func_1510D0EC();                /* extern */
void * func_1510D874();        /* extern */
void *func_151149AC();                         /* extern */
s32 func_15140410();                   /* extern */
void * func_151417C4();                             /* extern */
void * func_1514470C();                        /* extern */
void * func_15145128();       /* extern */
void * func_151616D0();                     /* extern */
void * memcpy();                            /* extern */
void func_150DEC28();               /* static */
extern s32 D_80088950;
extern s32 D_80088958;
extern s32 D_80090204;
extern s32 D_800A0D00;
extern s32 D_800A0D0B;
extern s32 D_800A0D2B;
extern f32 D_800A0D48;
extern f32 D_800A0D4C;
extern f32 D_800A0D50;
extern f32 D_800A0D54;
extern f32 D_800A0D58;
extern f32 D_800A0D5C;

void func_150DE320(s32 arg0) {

}

void func_150DE32C() {
    u8 sp50;
    void * sp48;
    s32 var_s0;
    u8 *var_s1;
    u8 temp_a0;
    void *temp_v0;
    s32 arg0;
    s32 arg1;
    s32 arg2;

    (*(s32 *)((char *)&(sp50) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80088950) + 0x0));
    (*(s32 *)((char *)&(sp50) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80088950) + 0x4));
    (*(s32 *)((char *)&(sp48) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80088958) + 0x0));
    var_s0 = 0;
    var_s1 = &sp50;
    (*(s32 *)((char *)&(sp48) + 0x4)) = (s32) (*(s32 *)((char *)&(D_80088958) + 0x4));
    do {
        if (func_150A32B4((*var_s1 * 0x34) + D_800D3098, arg0, arg1, arg2) != 0) {
            temp_a0 = *(&sp48 + var_s0);
            if (temp_a0 != 0) {
                temp_v0 = func_151149AC(temp_a0, 1);
                (*(u8 *)((char *)(temp_v0) + 0x73)) = (u8) (((*(u8 *)((char *)(temp_v0) + 0x73)) & ~3) | 3);
            } else {
                func_150A2864(*var_s1, 1);
            }
        }
        var_s0 += 1;
        var_s1 += 1;
    } while (var_s0 != 8);
}

void func_150DE458(void *arg0) {
    s32 sp54;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    s32 *var_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s2;

    if (((*(s32 *)((char *)(arg0) + 0x73)) & 3) == 3) {
        temp_f12 = (f32) D_800BE9E4;
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x0)) + ((*(f32 *)((char *)(arg0) + 0x60)) * temp_f12));
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x0));
        if (temp_f0 < 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (temp_f0 + 360.0f);
        } else if (temp_f0 >= 360.0f) {
            (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (temp_f0 - 360.0f);
        }
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + ((*(f32 *)((char *)(arg0) + 0x64)) * temp_f12));
        temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x4));
        if (temp_f0_2 < 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (temp_f0_2 + 360.0f);
        } else if (temp_f0_2 >= 360.0f) {
            (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (temp_f0_2 - 360.0f);
        }
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) + ((*(f32 *)((char *)(arg0) + 0x68)) * temp_f12));
        temp_f0_3 = (*(s32 *)((char *)(arg0) + 0x8));
        if (temp_f0_3 < 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (temp_f0_3 + 360.0f);
        } else if (temp_f0_3 >= 360.0f) {
            (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (temp_f0_3 - 360.0f);
        }
        (*(s16 *)((char *)(arg0) + 0x5C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x5C)) - ((*(s16 *)((char *)(arg0) + 0x3C)) * D_800BE9E4));
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) ((*(s16 *)((char *)(arg0) + 0x10)) + ((*(s16 *)((char *)(arg0) + 0x5A)) * D_800BE9E4));
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) ((*(s16 *)((char *)(arg0) + 0x12)) + ((*(s16 *)((char *)(arg0) + 0x5C)) * D_800BE9E4));
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) ((*(s16 *)((char *)(arg0) + 0x14)) + ((*(s16 *)((char *)(arg0) + 0x5E)) * D_800BE9E4));
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x8A)) - D_800BE9E4;
        if (temp_v0 > 0) {
            (*(u8 *)((char *)(arg0) + 0x8A)) = (u8) temp_v0;
        } else {
            (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
        }
    }
    if (((*(s32 *)((char *)(arg0) + 0x54)) & 0xFFFF7FFF) == 0xC) {
        var_s2 = 4;
        var_s1 = ((*(s32 *)((char *)(arg0) + 0x7C)) * 8) + &D_80090204;
        var_s0 = 5;
        do {
            temp_v0_2 = func_1510D0EC(*var_s1, &sp54, 3, 0);
            func_1510D874(arg0, temp_v0_2, (sp54 + temp_v0_2) - 0x200, var_s2, var_s0);
            var_s0 += 2;
            var_s1 += 4;
            var_s2 += 2;
        } while (var_s0 != 9);
    }
}

void func_150DE6D8(void *arg0) {
    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (s32) ((func_15048A40(((s32) (*(s16 *)((char *)(arg0) + 0x7C)) >> 3) & 0xFF) * D_800A0D48) + D_800A0D4C);
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (func_15048A40(((s32) (*(f32 *)((char *)(arg0) + 0x80)) >> 3) & 0xFF) * D_800A0D50);
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (func_15048A40(((s32) (*(f32 *)((char *)(arg0) + 0x84)) >> 3) & 0xFF) * D_800A0D54);
    (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) ((*(s32 *)((char *)(arg0) + 0x7C)) + (D_800BE9E4 * 0xC));
    (*(s32 *)((char *)(arg0) + 0x80)) = (s32) ((*(s32 *)((char *)(arg0) + 0x80)) + (D_800BE9E4 * 0x10));
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) + (D_800BE9E4 * 0x18));
}

void func_150DE7C0(void *arg0) {
    void *sp;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    void * spDC;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    s16 spAE;
    s16 spAC;
    s32 spA8;
    s8 spA4;
    s32 spA0;
    s8 sp9F;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    void * sp80;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    s8 sp68;
    s32 sp64;
    s32 sp60;
    s16 sp5C;
    s16 sp5A;
    s8 sp59;
    u8 sp58;
    void * sp50;
    void *sp44;
    f32 temp_f12;
    f32 var_f2;
    s32 temp_v0;
    void *temp_v1;

    f32 spF4;
    f32 spF8;
    f32 sp78;
    f32 sp7C;
    (*(s16 *)((char *)(arg0) + 0x28)) = (s16) ((*(s16 *)((char *)(arg0) + 0x28)) - D_800BE9E4);
    if ((*(s32 *)((char *)(arg0) + 0x28)) < 0) {
        (*(s32 *)((char *)&(sp50) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A0D00) + 0x0));
        (*(s32 *)((char *)&(sp50) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A0D00) + 0x4));
        temp_v1 = (char *)(arg0) + 0x28;
        sp58 = (u8) (*(u8 *)((char *)(((char *)(sp) + ((random_u32() & 1) * 4))) + 0x50));
        sp44 = temp_v1;
        func_1514470C((*(s32 *)((char *)(temp_v1) + 0x4)), &sp74);
        func_1514470C((*(s32 *)((char *)(sp44) + 0x8)), &spF0);
        spE4 = spF0 - sp74;
        spE8 = spF4 - sp78;
        spEC = spF8 - sp7C;
        func_15145128(&spE4, &spB0, &spE0, &spDC);
        temp_f12 = (random_float() * 30.0f) + 25.0f;
        var_f2 = temp_f12;
        if (sp58 == 0xBF) {
            var_f2 = temp_f12 * D_800A0D58;
        }
        spB0 *= var_f2;
        spB4 *= var_f2;
        spB8 *= var_f2;
        spCC = spE4;
        spD4 = spEC;
        spD0 = 0.0f;
        spBC = spE0 / var_f2;
        func_15145128((*(f32 * *)&temp_f12), &spCC, &spCC, NULL, 0);
        spC0 = -spD4;
        spC4 = 0.0f;
        spC8 = spCC;
        (*(s32 *)((char *)&(sp80) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp80) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp80) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        sp59 = 0;
        sp5A = 0x3B03;
        sp5C = 0x12C;
        sp60 = 0;
        sp64 = 0;
        sp68 = 0xFF;
        sp69 = 0xFF;
        sp6A = 0xFF;
        sp6B = 0xFF;
        random_float();
        sp70 = D_800A0D5C;
        sp6C = D_800A0D5C;
        (*(s32 *)((char *)&(sp80) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp80) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp80) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        sp98 = 0x065C0000;
        sp9C = 0xFF;
        sp9D = 0xFF;
        sp9E = 0;
        sp9F = 7;
        spA0 = 0;
        spA4 = 0xFF;
        spA8 = 0;
        spAC = 1;
        spAE = 0xFF;
        sp8C = 1.0f;
        sp90 = 1.0f;
        sp94 = 1.0f;
        temp_v0 = func_1513D2F0(&sp58, &D_800A4AA0, 0x28, 0, 0, 0x26, 0, 3, 0xFF, 0x28, *(u8 *)((char *)(arg0) + 0xC), *(u8 *)((char *)(arg0) + 0x1));
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x110, &spB0, 0x28);
        }
        (*(s16 *)((char *)(sp44) + 0x0)) = (s16) ((random_u32() % 201U) + 0xC8);
    }
}

s32 func_150DEACC(void *arg0) {
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + ((*(f32 *)((char *)(arg0) + 0x110)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x114)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x118)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x11C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x11C)) - D_800BE9A4);
    if ((*(s32 *)((char *)(arg0) + 0x11C)) < 0.0f) {
        return 0;
    }
    return 1;
}

s32 func_150DEB58(s32 arg0, s32 arg1) {
    if ((*(s32 *)((char *)((D_800DBFF0 + (D_80082FA0 * 0x9A0))) + 0x388)) < 5.0f) {
        return 0;
    }
    return func_15140410(arg0 + 0x120, arg0 + 0x12C, arg1);
}

void func_150DEBE0(s32 arg0) {
    s32 temp_t6;
    s32 var_s0;

    var_s0 = 0;
    do {
        func_150DEC28(var_s0 & 0xFF, 1);
        temp_t6 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t6;
    } while (temp_t6 < 4);
}

void func_150DEC28(s32 arg0, void * arg1) {
    s32 sp18;
    s32 temp_a3;
    s32 temp_v0;

    temp_a3 = arg0 & 0xFF;
    temp_v0 = temp_a3 * 4;
    sp18 = temp_v0;
    func_151616D0(*(&D_800A0D0B + temp_v0), 0x22, 0, temp_a3);
    func_151417C4(*(&D_800A0D2B + temp_v0), 0x22);
}
