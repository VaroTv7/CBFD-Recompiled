/**
 * Auto-decompiled from asm/105FC0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1000D96C();                           /* extern */
void * func_150472C0();                      /* extern */
void * func_1505A250();     /* extern */
void * func_1505D024();               /* extern */
void * func_15081690(); /* extern */
u8 random_u32();                                 /* extern */
f32 random_float();                                /* extern */
s32 func_15130280();        /* extern */
void * func_15131828();             /* extern */
void * func_15131958();                  /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
f32 func_15143E64();                      /* extern */
f32 func_15144528();                     /* extern */
void *func_15144B34();                           /* extern */
void * func_15145740();             /* extern */
void * func_151478F4();                            /* extern */
void * func_15147928();                            /* extern */
void *func_15147A80(); /* extern */
void * func_15147D64();           /* extern */
void * func_15153C84();          /* extern */
void * func_15153CCC();           /* extern */
void * func_151D5D60();    /* extern */
s32 func_151EF610();                                /* extern */
void * memcpy();                       /* extern */
void func_150DA67C();
extern s32 D_7FFFC000;
extern s32 D_80091238;
extern f32 D_800A0B40;
extern f32 D_800A0B44;
extern f32 D_800A0B48;
extern f32 D_800A0B4C;
extern f32 D_800A0B50;
extern f32 D_800A0B54;
extern f32 D_800A0B58;
extern f32 D_800A0B5C;
extern f32 D_800A0B60;
extern f32 D_800A0B64;
extern f32 D_800A0B68;
extern f32 D_800A0B6C;
extern f32 D_800A0B70;
extern f32 D_800A0B74;
extern f32 D_800A0B78;
extern f32 D_800A0B7C;
extern f32 D_800A0B80;
extern f32 D_800A0B84;
extern f32 D_800A0B88;
extern f32 D_800A0B8C;
extern f32 D_800A0B90;
extern f32 D_800A0B94;
extern f32 D_800A0B98;
extern f32 D_800A0B9C;
extern f32 D_800A0BA0;
extern f32 D_800A0BA4;
extern f32 D_800A0BA8;
extern f32 D_800A0BAC;
extern f32 D_800A0BB0;
extern f32 D_800A0BB4;
extern f32 D_800A0BB8;
extern f32 D_800A0BBC;
extern f32 D_800A0BC0;
extern f32 D_800A0BC4;
extern f32 D_800A0BC8;
extern f32 D_800A0BCC;
extern f32 D_800A0BD0;
extern f32 D_800A0BD4;
extern f32 D_800A0BD8;
extern f32 D_800A0BDC;
extern s32 D_800A4AC8;
extern s32 D_800D2C9C;
void func_150D8B3C();
void func_150D8D84(void *arg0, void *arg1, f32 arg2);

void func_150D8B10(void *arg0, f32 *arg1) {
    (*(s32 *)((char *)(arg1) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x18)) + 20.0f);
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
}

void func_150D8B3C(void *arg1) {
    void * sp34;
    void * sp28;
    f32 var_f0;

    if (D_800BE616 != 0) {
        var_f0 = D_800A0B40;
    } else {
        var_f0 = D_800A0B44;
    }
    func_15145740(&sp34, &sp28, arg1, var_f0);
}

void func_150D8B88(void *arg0) {
    s32 spC4;
    s8 spC1;
    s8 spC0;
    s32 spBC;
    s16 spBA;
    s16 spB8;
    f32 spAC;
    s8 spA5;
    u8 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    s16 sp88;
    f32 sp84;
    f32 sp78;
    void * sp6C;
    void * sp60;
    u8 sp5C;
    void *sp58;
    void * sp4C;
    void *temp_v0;
    void *temp_v1;

    if ((*(s32 *)((char *)(arg0) + 0x31C)) != NULL) {
        if (D_800BE9F0 == 0xA) {
            func_1000D96C(0xA, 0x37, 0);
        }
        func_150D8B10(arg0, &spAC);
        spA5 = 0;
        spA4 = 1;
        sp58 = arg0;
        sp5C = (*(s32 *)((char *)(arg0) + 0x3B));
        (*(f32 *)((char *)&(sp4C) + 0x0)) = (f32) (*(f32 *)((char *)&(spAC) + 0x0));
        (*(s32 *)((char *)&(sp4C) + 0x4)) = (s32) (*(s32 *)((char *)&(spAC) + 0x4));
        (*(s32 *)((char *)&(sp4C) + 0x8)) = (s32) (*(s32 *)((char *)&(spAC) + 0x8));
        (*(f32 *)((char *)&(sp60) + 0x0)) = (f32) (*(f32 *)((char *)&(sp4C) + 0x0));
        (*(s32 *)((char *)&(sp60) + 0x4)) = (s32) (*(s32 *)((char *)&(sp4C) + 0x4));
        (*(s32 *)((char *)&(sp60) + 0x8)) = (s32) (*(s32 *)((char *)&(sp4C) + 0x8));
        (*(f32 *)((char *)&(sp6C) + 0x0)) = (f32) (*(f32 *)((char *)&(sp4C) + 0x0));
        (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp4C) + 0x4));
        (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp4C) + 0x8));
        func_150D8B3C(arg0);
        sp94 = D_800A0B48;
        sp88 = func_10010F88((func_151EF610() % 2) + 0x1B6, 0x7FFF, 0, 0, 0, 0, 0, 0, 0x1F4, 0x1388);
        sp8C = 0.0f;
        sp84 = 0.0f;
        sp98 = 0.0f;
        sp9C = 0.0f;
        spA0 = 0.0f;
        sp90 = -16384.0f;
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x31C));
        if ((temp_v1 != NULL) && ((*(s32 *)((char *)(temp_v1) + 0x84)) != 0)) {
            spA4 &= 0xFFFE;
        }
        spC1 = 0x32;
        spB8 = 0x12C;
        spBA = 0x36;
        spBC = 2;
        spC0 = 5;
        spC4 = 0;
        temp_v0 = func_15147A80(&spAC, 0x50, 0x24, 0xE, 1, 0x11, 3, 0xFF, 0, 0xFF, 1);
        if (temp_v0 != NULL) {
            memcpy((*(s32 *)((char *)(temp_v0) + 0x98)), &sp58, 0x50);
        }
    }
}

void func_150D8D84(void *arg0, void *arg1, f32 arg2) {
    f32 sp4;

    f32 sp8;
    f32 spC;
    (*(s32 *)((char *)&(sp4) + 0x0)) = (*(s32 *)((char *)(arg1) + 0x0));
    (*(f32 *)((char *)&(sp4) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp4) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((*(f32 *)((char *)(arg1) + 0x4)) + (D_800A0B4C * arg2));
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x0)) + (sp4 * arg2));
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + ((sp8 * arg2) + (D_800A0B50 * arg2 * arg2)));
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) + (spC * arg2));
}

void func_150D8E1C(void *arg0) {
    u16 temp_t0;
    u16 temp_t8;

    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    temp_t8 = (*(s32 *)((char *)(arg0) + 0x1E)) & 0xFFFD;
    temp_t0 = temp_t8 | 8;
    (*(s32 *)((char *)(arg0) + 0x1E)) = temp_t8;
    (*(s32 *)((char *)(arg0) + 0x1E)) = temp_t0;
    (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) (temp_t0 | 1);
    (*(s32 *)((char *)(arg0) + 0x1C)) = 0x28;
}

s32 func_150D8E4C(void *arg0) {
    s32 temp_s4;
    s8 var_s0;
    void *temp_a0;
    void *temp_s5;
    void *temp_t0;
    void *temp_v0;
    void *temp_v1;

    temp_s5 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s4 = (*(s32 *)((char *)(arg0) + 0x94));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(arg0) + 0x1E)) & 8)) {
        return 0;
    }
    var_s0 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_s0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_s0 -= 1;
            if (var_s0 < 0) {
                var_s0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_a0 = (var_s0 * 0x24) + temp_s4;
            func_150D8D84(temp_a0, (char *)(temp_a0) + 0xC, D_800BE9A4);
        } while (var_s0 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_t0 = temp_s4 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x24);
        (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x8));
    } else {
        (*(s32 *)((char *)(arg0) + 0x54)) = 0;
        (*(s32 *)((char *)(arg0) + 0x58)) = 0;
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
    }
    (*(s8 *)((char *)(temp_s5) + 0x4D)) = (s8) ((*(s8 *)((char *)(temp_s5) + 0x4D)) + D_800BE9E4);
    if ((*(s32 *)((char *)(temp_s5) + 0x4D)) >= 0x3D) {
        temp_v1 = (*(s32 *)((char *)(temp_s5) + 0x0));
        if (temp_v1 != NULL) {
            temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x31C));
            if (temp_v0 != NULL) {
                (*(s16 *)((char *)(temp_v0) + 0x1AA)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x1AA)) + 1);
            }
        }
        (*(s32 *)((char *)(temp_s5) + 0x4D)) = 0;
    }
    return 1;
}

s32 func_150D8FAC(void *arg0) {
    f32 spF8;
    f32 spEC;
    f32 spDC;
    f32 spD8;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    void *sp88;
    void *sp84;
    f32 sp78;
    void *sp74;
    void *sp70;
    f32 sp60;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    f32 var_f0;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f20;
    f32 var_f2;
    s32 temp_s5;
    s8 temp_v1_2;
    void *temp_a0;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v1;

    f32 sp100;
    f32 spFC;
    f32 spF0;
    f32 spF4;
    temp_s1 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s5 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_s2 = (*(s32 *)((char *)(temp_s1) + 0x0));
    if (((*(s32 *)((char *)((*(s32 *)((char *)(temp_s2) + 0x31C))) + 0x78)) != 3) || ((s32) (*(s32 *)((char *)(temp_s2) + 0x1CA)) <= 0)) {
        func_150D8E1C(arg0);
    }
    if (((*(s32 *)((char *)(temp_s2) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s1) + 0x4)) != (*(s32 *)((char *)(temp_s2) + 0x3B)))) {
        return 0;
    }
    func_150D8B10(temp_s2, &spF8);
    func_150D8B3C(temp_s2);
    temp_v1 = (char *)(temp_s1) + 0x20;
    (*(f32 *)((char *)(arg0) + 0x10)) = (f32) (*(f32 *)((char *)&(spF8) + 0x0));
    (*(s32 *)((char *)(arg0) + 0x14)) = (s32) (*(s32 *)((char *)&(spF8) + 0x4));
    (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (*(s32 *)((char *)&(spF8) + 0x8));
    if ((*(s32 *)((char *)(temp_s1) + 0x4C)) & 1) {
        if ((*(s32 *)((char *)((*(s32 *)((char *)(temp_s2) + 0x31C))) + 0x8A)) & 0x2000) {
            var_f0 = D_800A0B54;
            (*(f32 *)((char *)(temp_s1) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x3C)) + (D_800A0B58 * D_800BE9A4));
            if (var_f0 < (*(s32 *)((char *)(temp_s1) + 0x3C))) {
                goto block_11;
            }
        } else {
            var_f0 = D_800A0B5C;
            (*(f32 *)((char *)(temp_s1) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x3C)) - (D_800A0B60 * D_800BE9A4));
            if ((*(s32 *)((char *)(temp_s1) + 0x3C)) < var_f0) {
block_11:
                (*(s32 *)((char *)(temp_s1) + 0x3C)) = var_f0;
            }
        }
    }
    temp_v0 = (char *)(temp_s1) + 0x14;
    (*(f32 *)((char *)(temp_s1) + 0x34)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x34)) + (D_800A0B64 * D_800BE9A4));
    temp_f2 = (*(s32 *)((char *)(temp_s1) + 0x34));
    if (temp_f2 > 1.0f) {
        (*(s32 *)((char *)&(spB8) + 0x0)) = (*(s32 *)((char *)(temp_s1) + 0x14));
        var_f20 = (*(s32 *)((char *)(temp_s1) + 0x2C)) + D_800BE9A4;
        (*(s32 *)((char *)&(spB8) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
        temp_f0 = 1.0f / temp_f2;
        (*(s32 *)((char *)&(spB8) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
        (*(s32 *)((char *)&(spAC) + 0x0)) = (*(s32 *)((char *)(temp_s1) + 0x20));
        (*(s32 *)((char *)&(spAC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
        (*(s32 *)((char *)&(spAC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
        var_f16 = var_f20 * temp_f0;
        temp_f4 = sp100 - (*(s32 *)((char *)(temp_s1) + 0x1C));
        temp_f26 = (spF8 - (*(s32 *)((char *)(temp_s1) + 0x14))) * temp_f0;
        spD8 = temp_f4;
        temp_f28 = (spFC - (*(s32 *)((char *)(temp_s1) + 0x18))) * temp_f0;
        temp_f6 = spEC - (*(s32 *)((char *)(temp_s1) + 0x20));
        spC4 = temp_f6;
        sp60 = temp_f4;
        temp_f8 = spF0 - (*(s32 *)((char *)(temp_s1) + 0x24));
        spC8 = temp_f8;
        sp84 = temp_v1;
        sp88 = temp_v0;
        temp_f10 = spF4 - (*(s32 *)((char *)(temp_s1) + 0x28));
        spCC = temp_f10;
        var_f2 = temp_f6 * temp_f0;
        var_f12 = temp_f8 * temp_f0;
        var_f14 = temp_f10 * temp_f0;
        do {
            temp_a0 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24) + temp_s5;
            (*(f32 *)((char *)(temp_a0) + 0x0)) = (f32) (*(f32 *)((char *)&(spB8) + 0x0));
            (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) (*(s32 *)((char *)&(spB8) + 0x4));
            (*(s32 *)((char *)(temp_a0) + 0x8)) = (s32) (*(s32 *)((char *)&(spB8) + 0x8));
            (*(f32 *)((char *)(temp_a0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x3C)) * spAC);
            (*(f32 *)((char *)(temp_a0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x3C)) * spB0);
            (*(s32 *)((char *)(temp_a0) + 0x18)) = 0.0f;
            (*(s32 *)((char *)(temp_a0) + 0x1C)) = 0xFF;
            (*(s32 *)((char *)(temp_a0) + 0x20)) = 0.0f;
            (*(f32 *)((char *)(temp_a0) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x3C)) * spB4);
            spDC = var_f16;
            sp70 = (*(void **)&var_f14);
            sp74 = (*(void **)&var_f12);
            sp78 = var_f2;
            func_150D8D84((*(void **)&var_f12), (*(void **)&var_f14), (f32)(s32)(temp_a0));
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
            var_f20 -= var_f16;
            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
            }
            temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x2D));
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
            if (temp_v1_2 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v1_2 + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                }
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
            }
            spB8 += temp_f26;
            spBC += temp_f28;
            spC0 += temp_f4 * temp_f0;
            spAC += var_f2;
            spB0 += var_f12;
            spB4 += var_f14;
            (*(f32 *)((char *)(temp_s1) + 0x34)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x34)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0x34)) > 1.0f);
        (*(f32 *)((char *)(sp88) + 0x0)) = (f32) (*(f32 *)((char *)&(spB8) + 0x0));
        (*(s32 *)((char *)(sp88) + 0x4)) = (s32) (*(s32 *)((char *)&(spB8) + 0x4));
        (*(s32 *)((char *)(sp88) + 0x8)) = (s32) (*(s32 *)((char *)&(spB8) + 0x8));
        (*(f32 *)((char *)(sp84) + 0x0)) = (f32) (*(f32 *)((char *)&(spAC) + 0x0));
        (*(s32 *)((char *)(sp84) + 0x4)) = (s32) (*(s32 *)((char *)&(spAC) + 0x4));
        (*(s32 *)((char *)(sp84) + 0x8)) = (s32) (*(s32 *)((char *)&(spAC) + 0x8));
        (*(s32 *)((char *)(temp_s1) + 0x2C)) = var_f20;
    }
    return 1;
}

s32 func_150D942C(void *arg0) {
    f32 sp17C;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp15C;
    f32 sp158;
    f32 sp154;
    f32 sp150;
    f32 spF0;
    void *spE8;
    f32 spB8;
    s32 sp90;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f12;
    f32 var_f20;
    f32 var_f2;
    s32 temp_s6;
    s32 var_a2;
    s8 var_s1_2;
    s8 var_s3;
    s8 var_v0;
    u16 temp_a0;
    u8 temp_v0;
    void **temp_fp;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s4;
    void *temp_v1;
    void *var_s1;

    f32 sp141;
    f32 spF8;
    f32 spEC;
    temp_fp = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s6 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_s4 = (*(s32 *)((char *)(temp_fp) + 0x0));
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_f20 = 0.0f;
        var_s3 = (*(s32 *)((char *)(arg0) + 0x2E));
        if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
            var_s1 = (char *)(arg0) + 0x10;
        } else {
            var_s3 -= 1;
            if (var_s3 < 0) {
                var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_s1 = (var_s3 * 0x24) + temp_s6;
        }
        temp_f24 = D_800A0B68;
        do {
            var_s3 -= 1;
            if (var_s3 < 0) {
                var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_s2 = (var_s3 * 0x24) + temp_s6;
            sp164 = (*(s32 *)((char *)(temp_s2) + 0x0)) - (*(s32 *)((char *)(var_s1) + 0x0));
            sp168 = (*(s32 *)((char *)(temp_s2) + 0x4)) - (*(s32 *)((char *)(var_s1) + 0x4));
            sp15C = D_800A0B6C;
            sp16C = (*(s32 *)((char *)(temp_s2) + 0x8)) - (*(s32 *)((char *)(var_s1) + 0x8));
            temp_f0 = func_15143E64(D_800A0B6C, &sp164);
            var_f20 += temp_f0;
            var_f12 = sp15C;
            (*(s32 *)((char *)(temp_s2) + 0x18)) = temp_f0;
            if (temp_f24 < var_f20) {
                temp_f2 = (*(s32 *)((char *)(temp_s2) + 0x18));
                if (temp_f2 != 0.0f) {
                    var_f12 = 1.0f / temp_f2;
                    sp150 = sp164 * var_f12;
                    sp154 = sp168 * var_f12;
                    temp_f0_2 = (var_f20 - temp_f24) * var_f12;
                    sp158 = sp16C * var_f12;
                    (*(f32 *)((char *)(temp_s2) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x0)) - (sp164 * temp_f0_2));
                    (*(f32 *)((char *)(temp_s2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x4)) - (sp168 * temp_f0_2));
                    (*(f32 *)((char *)(temp_s2) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x8)) - (sp16C * temp_f0_2));
                    (*(f32 *)((char *)(temp_s2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x18)) * (1.0f - temp_f0_2));
                }
                var_f20 = temp_f24;
                if (var_s3 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    do {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    } while (var_s3 != (*(s32 *)((char *)(arg0) + 0x2D)));
                }
            }
            temp_f2_2 = (*(s32 *)((char *)(temp_s2) + 0x18));
            if (temp_f2_2 != 0.0f) {
                if (var_f12 == D_800A0B70) {
                    var_f12 = 1.0f / temp_f2_2;
                    sp150 = sp164 * var_f12;
                    sp154 = sp168 * var_f12;
                    sp158 = sp16C * var_f12;
                }
                func_15081690(var_f12, temp_s4, (*(s32 *)((char *)(var_s1) + 0x0)), (*(s32 *)((char *)(var_s1) + 0x4)), (*(s32 *)((char *)(var_s1) + 0x8)), sp150, sp154, sp158, &spE8, (*(s32 *)((char *)(temp_s2) + 0x18)), 0, 0, 1, -1, 0, 0);
                if (sp141 != 0) {
                    func_150DA67C(arg0, &spE8, &sp150);
                    if ((s32) sp141 >= 2) {
                        temp_v0 = (*(s32 *)((char *)(spE8) + 0x4));
                        (*(s32 *)((char *)(spE8) + 0x2EC)) = 1;
                        if (temp_v0 == 0x3A) {
                            (*(s32 *)((char *)(spE8) + 0x232)) = 0xAU;
                            (*(s32 *)((char *)(spE8) + 0x218)) = 0;
                        } else if ((temp_v0 == 0x10) && ((*(s32 *)((char *)(spE8) + 0x251)) == 1)) {
                            func_1505A250((*(s32 *)((char *)(spE8) + 0x14)) - spF0, (*(s32 *)((char *)(spE8) + 0x1C)) - spF8, ((1.0f - ((var_f20 - 50.0f) * D_800A0B74)) * D_800A0B78) + D_800A0B7C, (char *)(spE8) + 0x164, (char *)(spE8) + 0x168);
                            if ((*(s32 *)((char *)(spE8) + 0x232)) == 0xF) {
                                (*(s32 *)((char *)(spE8) + 0x218)) = 0;
                            }
                        } else if (temp_v0 == 0x10) {
                            temp_f16 = (*(s32 *)((char *)(temp_s2) + 0x0)) - (*(s32 *)((char *)(temp_s4) + 0x14));
                            temp_f18 = (*(s32 *)((char *)(temp_s2) + 0x8)) - (*(s32 *)((char *)(temp_s4) + 0x1C));
                            if ((*(s32 *)((char *)(spE8) + 0x232)) == 0x10) {
                                (*(f32 *)((char *)(spE8) + 0x3C)) = (f32) ((*(f32 *)((char *)(spE8) + 0x3C)) * D_800A0B80);
                                temp_f2_3 = 1.0f / (sqrtf((temp_f16 * temp_f16) + (temp_f18 * temp_f18)) * D_800A0B84);
                                func_1505A250(temp_f16 * temp_f2_3, temp_f18 * temp_f2_3, 0.7f, (char *)(spE8) + 0x164, (char *)(spE8) + 0x168);
                            }
                            if ((*(s32 *)((char *)(spE8) + 0x125)) == 0) {
                                (*(s32 *)((char *)(spE8) + 0x232)) = 0xFU;
                                (*(s32 *)((char *)(spE8) + 0x218)) = 0;
                            }
                        } else if (temp_v0 == 0x91) {
                            (*(s32 *)((char *)(spE8) + 0x232)) = 3U;
                            (*(s32 *)((char *)(spE8) + 0x218)) = 0;
                        } else if (temp_v0 == 0x90) {
                            (*(s32 *)((char *)(spE8) + 0x232)) = 0x2CU;
                            (*(s32 *)((char *)(spE8) + 0x218)) = 0;
                        } else {
                            sp90 = (s32) ((char *)(temp_s4) - (char *)(&gObjects)) / 812;
                            temp_f6 = func_150484A0(sp150, sp158) * D_800A0B88;
                            if (M2C_ERROR(/* cfc1 */) & 0x78) {
                                if (!(M2C_ERROR(/* cfc1 */) & 0x78)) {
                                    var_a2 = (s32) (temp_f6 - 2.1474836e9f) | (s32) &D_7FFFC000;
                                } else {
                                    goto block_39;
                                }
                            } else {
                                var_a2 = (s32) temp_f6;
                                if (var_a2 < 0) {
block_39:
                                    var_a2 = -1;
                                }
                            }
                            func_1505D024(spE8, 0xE0036, (var_a2 | 1) & 0xFFFF, sp90);
                        }
                    }
                    (*(f32 *)((char *)(temp_s2) + 0x0)) = (f32) (*(f32 *)((char *)&(spF0) + 0x0));
                    temp_f20 = var_f20 - (*(s32 *)((char *)(temp_s2) + 0x18));
                    (*(f32 *)((char *)(temp_s2) + 0x4)) = (f32) (*(f32 *)((char *)&(spF0) + 0x4));
                    (*(f32 *)((char *)(temp_s2) + 0x8)) = (f32) (*(f32 *)((char *)&(spF0) + 0x8));
                    (*(s32 *)((char *)(temp_s2) + 0x18)) = spEC;
                    var_f20 = temp_f20 + (*(s32 *)((char *)(temp_s2) + 0x18));
                    if (var_s3 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                        do {
                            (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                                (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                            }
                            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                        } while (var_s3 != (*(s32 *)((char *)(arg0) + 0x2D)));
                    }
                    temp_a0 = (*(s32 *)((char *)(temp_fp) + 0x30));
                    if (temp_a0 != 0) {
                        func_1000F91C(temp_a0, 0x7FFF, 0, 0, 0, (s32) (*(s32 *)((char *)(temp_s2) + 0x0)), (s32) (*(s32 *)((char *)(temp_s2) + 0x4)), (s32) (*(s32 *)((char *)(temp_s2) + 0x8)), 0x1F4, 0x1388);
                    }
                }
            }
            var_s1 = temp_s2;
        } while (var_s3 != (*(s32 *)((char *)(arg0) + 0x2D)));
        sp17C = var_f20;
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        (*(f32 *)((char *)(temp_fp) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_fp) + 0x38)) + (D_800A0B8C * D_800BE9A4));
        (*(s32 *)((char *)(temp_fp) + 0x38)) = func_15144528((*(s32 *)((char *)(temp_fp) + 0x38)), D_800A0B90, 0xC6800000);
        var_f2 = 0.0f;
        var_s1_2 = (*(s32 *)((char *)(arg0) + 0x2E));
        do {
            var_s1_2 -= 1;
            if (var_s1_2 < 0) {
                var_s1_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_s2_2 = (var_s1_2 * 0x24) + temp_s6;
            temp_f2_4 = var_f2 + (*(s32 *)((char *)(temp_s2_2) + 0x18));
            spB8 = temp_f2_4;
            var_f2 = temp_f2_4;
            (*(s32 *)((char *)(temp_s2_2) + 0x20)) = func_15144528((*(s32 *)((char *)(temp_fp) + 0x38)) + (temp_f2_4 * D_800A0B94), D_800A0B98, 0xC6800000);
        } while (var_s1_2 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_f0 = 0.0f;
        temp_f2_5 = sp17C * D_800A0B9C;
        var_v0 = (*(s32 *)((char *)(arg0) + 0x2E));
        temp_f12 = sp17C - temp_f2_5;
        do {
            var_v0 -= 1;
            if (var_v0 < 0) {
                var_v0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1 = (var_v0 * 0x24) + temp_s6;
            var_f0 += (*(s32 *)((char *)(temp_v1) + 0x18));
            if (temp_f2_5 < var_f0) {
                (*(s8 *)((char *)(temp_v1) + 0x1C)) = (s8) (u32) ((temp_f12 - (var_f0 - temp_f2_5)) * (1.0f / temp_f12) * 155.0f);
            } else {
                (*(s32 *)((char *)(temp_v1) + 0x1C)) = 0x9B;
            }
        } while (var_v0 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    return 1;
}

void *func_150D9C7C(void *arg0, void *arg1, s32 arg2) {
    f32 sp110;
    f32 sp104;
    f32 spCC;
    s8 spCB;
    f32 spC4;
    f32 spC0;
    void *spBC;
    f32 spA0;
    f32 sp94;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f8;
    f32 temp_f8_3;
    f32 var_f28;
    f32 var_f28_2;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f30;
    f32 var_f30_2;
    s32 temp_f10;
    s32 temp_f8_2;
    s32 temp_s6;
    s32 temp_v1;
    s32 var_s3;
    s32 var_v1;
    u8 var_a0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s4;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t9;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s1;
    void *var_s2;

    f32 sp108;
    f32 sp10C;
    f32 sp114;
    f32 sp118;
    var_s2 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) < 2) {

    } else {
        temp_s1 = (*(s32 *)((char *)(arg0) + 0x98));
        temp_s6 = (*(s32 *)((char *)(arg0) + 0x94));
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &spBC, 0);
        if (spBC == NULL) {

        } else {
            temp_s4 = func_15144B34(arg2);
            spCB = 1;
            var_s2 = func_15142FBC(func_1513F4E4(func_15142B7C(func_15142E24(var_s2, &D_80091238, 0, 0, 0, 0, 0x92, 0, 0, &spCB, 3), 0x220005, 0x1D0600), 0x4E, &spCB), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x1C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x18)), &spCB);
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                var_s3 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_s3 < 0) {
                    var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                (*(s32 *)((char *)&(sp104) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                (*(s32 *)((char *)&(sp104) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                (*(s32 *)((char *)&(sp104) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
                spC0 = (*(s32 *)((char *)(temp_s1) + 0x38));
            } else {
                var_v1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_v1 < 0) {
                    var_v1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_s3 = var_v1 - 1;
                if (var_s3 < 0) {
                    var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v0 = temp_s6 + (var_v1 * 0x24);
                (*(s32 *)((char *)&(sp104) + 0x0)) = (*(s32 *)((char *)(temp_v0) + 0x0));
                (*(s32 *)((char *)&(sp104) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
                (*(s32 *)((char *)&(sp104) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
                spC0 = (*(s32 *)((char *)(temp_v0) + 0x20));
            }
            var_s1 = temp_s6 + (var_s3 * 0x24);
            (*(s32 *)((char *)&(sp110) + 0x0)) = (*(s32 *)((char *)(var_s1) + 0x0));
            (*(s32 *)((char *)&(sp110) + 0x4)) = (s32) (*(s32 *)((char *)(var_s1) + 0x4));
            (*(s32 *)((char *)&(sp110) + 0x8)) = (s32) (*(s32 *)((char *)(var_s1) + 0x8));
            var_a0 = (*(s32 *)((char *)(var_s1) + 0x1C));
            spC4 = (*(s32 *)((char *)(var_s1) + 0x20));
            temp_f22 = sp104 - (*(s32 *)((char *)(temp_s4) + 0x0));
            temp_f24 = sp108 - (*(s32 *)((char *)(temp_s4) + 0x4));
            temp_f26 = sp10C - (*(s32 *)((char *)(temp_s4) + 0x8));
            temp_f18 = sp108 - sp114;
            temp_f20 = sp10C - sp118;
            temp_f16 = sp104 - sp110;
            temp_f2 = (temp_f18 * temp_f26) - (temp_f24 * temp_f20);
            temp_f28 = (temp_f20 * temp_f22) - (temp_f26 * temp_f16);
            temp_f14 = (temp_f16 * temp_f24) - (temp_f22 * temp_f18);
            temp_f8 = (temp_f2 * temp_f2) + (temp_f28 * temp_f28) + (temp_f14 * temp_f14);
            sp94 = temp_f8;
            spCC = temp_f8;
            if (temp_f8 != 0.0f) {
                temp_f12 = 4.0f / sqrtf(temp_f8);
                var_f2 = temp_f2 * temp_f12;
                var_f28 = temp_f28 * temp_f12;
                var_f30 = temp_f14 * temp_f12;
            } else {
                var_f30 = 0.0f;
                var_f2 = 0.0f;
                var_f28 = 0.0f;
            }
            (*(s16 *)((char *)(spBC) + 0x0)) = (s16) (s32) (sp104 + var_f2);
            (*(s16 *)((char *)(spBC) + 0x2)) = (s16) (s32) (sp108 + var_f28);
            (*(s16 *)((char *)(spBC) + 0x4)) = (s16) (s32) (sp10C + var_f30);
            temp_f8_2 = (s32) spC0;
            (*(s16 *)((char *)(spBC) + 0x8)) = (s16) temp_f8_2;
            (*(s32 *)((char *)(spBC) + 0xA)) = 0x400;
            (*(s32 *)((char *)(spBC) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spBC) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spBC) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(spBC) + 0xF)) = var_a0;
            (*(s32 *)((char *)(spBC) + 0x6)) = 0;
            temp_t1 = (char *)(spBC) + 0x10;
            spBC = temp_t1;
            (*(s16 *)((char *)(spBC) + 0x10)) = (s16) (s32) (sp104 - var_f2);
            (*(s16 *)((char *)(spBC) + 0x2)) = (s16) (s32) (sp108 - var_f28);
            (*(s16 *)((char *)(spBC) + 0x4)) = (s16) (s32) (sp10C - var_f30);
            (*(s16 *)((char *)(spBC) + 0x8)) = (s16) temp_f8_2;
            (*(s32 *)((char *)(spBC) + 0xA)) = 0;
            (*(s32 *)((char *)(spBC) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(temp_t1) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spBC) + 0xE)) = 0xFF;
            (*(s32 *)((char *)(spBC) + 0xF)) = var_a0;
            (*(s32 *)((char *)(spBC) + 0x6)) = 0;
            spBC = (char *)(spBC) + 0x10;
            do {
                temp_f22_2 = sp110 - (*(s32 *)((char *)(temp_s4) + 0x0));
                temp_f24_2 = sp114 - (*(s32 *)((char *)(temp_s4) + 0x4));
                temp_f26_2 = sp118 - (*(s32 *)((char *)(temp_s4) + 0x8));
                temp_f18_2 = sp108 - sp114;
                temp_f20_2 = sp10C - sp118;
                temp_f16_2 = sp104 - sp110;
                temp_f2_2 = (temp_f18_2 * temp_f26_2) - (temp_f24_2 * temp_f20_2);
                temp_f28_2 = (temp_f20_2 * temp_f22_2) - (temp_f26_2 * temp_f16_2);
                temp_f14_2 = (temp_f16_2 * temp_f24_2) - (temp_f22_2 * temp_f18_2);
                temp_f8_3 = (temp_f2_2 * temp_f2_2) + (temp_f28_2 * temp_f28_2) + (temp_f14_2 * temp_f14_2);
                spA0 = temp_f8_3;
                spCC = temp_f8_3;
                if (temp_f8_3 != 0.0f) {
                    temp_f12_2 = 4.0f / sqrtf(temp_f8_3);
                    var_f2_2 = temp_f2_2 * temp_f12_2;
                    var_f28_2 = temp_f28_2 * temp_f12_2;
                    var_f30_2 = temp_f14_2 * temp_f12_2;
                } else {
                    var_f30_2 = 0.0f;
                    var_f2_2 = 0.0f;
                    var_f28_2 = 0.0f;
                }
                (*(s16 *)((char *)(spBC) + 0x0)) = (s16) (s32) (sp110 + var_f2_2);
                temp_f10 = (s32) spC4;
                (*(s16 *)((char *)(spBC) + 0x2)) = (s16) (s32) (sp114 + var_f28_2);
                (*(s16 *)((char *)(spBC) + 0x4)) = (s16) (s32) (sp118 + var_f30_2);
                (*(s16 *)((char *)(spBC) + 0x8)) = (s16) temp_f10;
                (*(s32 *)((char *)(spBC) + 0xA)) = 0x400;
                (*(s32 *)((char *)(spBC) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spBC) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spBC) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(spBC) + 0xF)) = var_a0;
                (*(s32 *)((char *)(spBC) + 0x6)) = 0;
                temp_t9 = (char *)(spBC) + 0x10;
                spBC = temp_t9;
                (*(s16 *)((char *)(spBC) + 0x10)) = (s16) (s32) (sp110 - var_f2_2);
                (*(s16 *)((char *)(spBC) + 0x2)) = (s16) (s32) (sp114 - var_f28_2);
                (*(s16 *)((char *)(spBC) + 0x4)) = (s16) (s32) (sp118 - var_f30_2);
                (*(s16 *)((char *)(spBC) + 0x8)) = (s16) temp_f10;
                (*(s32 *)((char *)(spBC) + 0xA)) = 0;
                (*(s32 *)((char *)(spBC) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(temp_t9) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spBC) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(spBC) + 0xF)) = var_a0;
                (*(s32 *)((char *)(spBC) + 0x6)) = 0;
                spBC = (char *)(spBC) + 0x10;
                (*(s32 *)((char *)(var_s2) + 0x0)) = 0x01004008;
                temp_s2 = (char *)(var_s2) + 8;
                (*(s32 *)((char *)(var_s2) + 0x4)) = (void *) ((char *)(spBC) - 0x40);
                (*(s32 *)((char *)(var_s2) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s2) + 0x4)) = 0;
                temp_s2_2 = (char *)(temp_s2) + 8;
                (*(s32 *)((char *)(temp_s2) + 0x8)) = 0x05020604;
                (*(s32 *)((char *)(temp_s2_2) + 0x4)) = 0;
                var_s2 = (char *)(temp_s2_2) + 8;
                if (spC4 < spC0) {
                    memcpy(spBC, (char *)(spBC) - 0x20, 0x20);
                    (*(s16 *)((char *)(spBC) - 0x18)) = (s16) ((*(s16 *)((char *)(spBC) - 0x18)) - 0x8000);
                    temp_t1_2 = (char *)(spBC) + 0x10;
                    spBC = temp_t1_2;
                    (*(s16 *)((char *)(temp_t1_2) - 0x18)) = (s16) ((*(s16 *)((char *)(temp_t1_2) - 0x18)) - 0x8000);
                    spBC = (char *)(spBC) + 0x10;
                }
                temp_v1 = var_s3;
                var_s3 -= 1;
                var_s1 = (char *)(var_s1) - 0x24;
                if (var_s3 < 0) {
                    var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    var_s1 = temp_s6 + (var_s3 * 0x24);
                }
                temp_v0_2 = temp_s6 + (temp_v1 * 0x24);
                (*(s32 *)((char *)&(sp104) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x0));
                (*(s32 *)((char *)&(sp104) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
                (*(s32 *)((char *)&(sp104) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
                (*(s32 *)((char *)&(sp110) + 0x0)) = (*(s32 *)((char *)(var_s1) + 0x0));
                (*(s32 *)((char *)&(sp110) + 0x4)) = (s32) (*(s32 *)((char *)(var_s1) + 0x4));
                (*(s32 *)((char *)&(sp110) + 0x8)) = (s32) (*(s32 *)((char *)(var_s1) + 0x8));
                var_a0 = (*(s32 *)((char *)(var_s1) + 0x1C));
                spC0 = (*(s32 *)((char *)(temp_v0_2) + 0x20));
                spC4 = (*(s32 *)((char *)(var_s1) + 0x20));
            } while (temp_v1 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s2;
}

void func_150DA484(void *arg0) {
    u16 temp_a1;

    temp_a1 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x30));
    if (temp_a1 != 0) {
        func_100111C8(temp_a1 & 0xFFFF, temp_a1);
    }
}

void func_150DA4B4(void *arg0) {
    func_150DA484(arg0);
    func_151478F4(arg0);
}

void func_150DA4E0(void *arg0) {
    func_150DA484(arg0);
    func_15147928(arg0);
}

void func_150DA50C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    if (temp_t6 == 0x44) {
        if (((*(s32 *)((char *)(temp_v0) + 0x0)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(temp_v0) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            (*(f32 *)((char *)(temp_v0) + 0x3C)) = (f32) (*(f32 *)((char *)(arg1) + 0x8));
        }
    } else if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(temp_v0) + 0x0))) || ((*(s32 *)((char *)(arg1) + 0x4)) == (*(s32 *)((char *)(temp_v0) + 0x4)))) {
            func_1516972C(temp_t6);
        }
    } else if (temp_t6 == 0x2D) {
        temp_a0 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x0));
        if (temp_a0 == temp_v1) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_v1) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = temp_a0;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

void func_150DA5EC(void *arg0, f32 arg1) {
    f32 sp24;
    u8 sp20;
    void *sp1C;

    sp1C = arg0;
    sp24 = arg1;
    sp20 = (*(s32 *)((char *)(arg0) + 0x3B));
    func_15147D64(arg1, &sp1C, 0x44, arg0);
}

s32 func_150DA628(s32 arg0, void * arg1) {
    void *sp20;
    void *temp_a2;

    temp_a2 = arg0 + 0xA8;
    sp20 = temp_a2;
    func_15131828(arg0, arg0 + 0xAC, temp_a2, arg0 + 0xAA);
    func_15131958(arg0 + 0x58, (*(s32 *)((char *)(temp_a2) + 0xC)), temp_a2);
    return 1;
}

void func_150DA67C(void *arg0, void **arg1, f32 *arg2) {
    s8 sp1B5;
    s8 sp1B4;
    s8 sp1B3;
    s8 sp1B2;
    s8 sp1B1;
    s8 sp1B0;
    s32 sp1A8;
    f32 sp1A4;
    void * sp198;
    f32 sp194;
    f32 sp190;
    f32 sp18C;
    void * sp180;
    f32 sp17C;
    f32 sp178;
    f32 sp174;
    s16 sp172;
    s16 sp170;
    s16 sp16E;
    s8 sp16D;
    s8 sp16C;
    s8 sp16B;
    s8 sp16A;
    s8 sp169;
    s8 sp168;
    s8 sp167;
    s8 sp166;
    s8 sp165;
    s8 sp164;
    s32 sp160;
    s32 sp15C;
    s16 sp15A;
    s16 sp158;
    s32 sp154;
    s32 sp150;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    s8 sp143;
    s8 sp142;
    u8 sp141;
    u8 sp140;
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
    void * spF8;
    void * spD4;
    f32 spD0;
    void * spC4;
    void * spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    s8 spA8;
    f32 spA4;
    void * sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    void * sp6C;
    void **sp68;
    void **sp64;
    f32 temp_f20;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v0;
    u8 temp_s0;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s1;

    temp_s1 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x59));
    if (temp_v0 != 0) {
        if (((s32) temp_v0 >= 2) && ((temp_v0_2 = (*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x0))) + 0x4)), (temp_v0_2 == 0x33)) || (temp_v0_2 == 0x3A))) {
            (*(f32 *)((char *)(temp_s1) + 0x48)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x48)) + ((D_800A0BA0 + (random_float() * D_800A0BA4)) * D_800BE9A4));
            if ((*(s32 *)((char *)(temp_s1) + 0x48)) > 1.0f) {
                sp158 = 0x5103;
                sp172 = 0x2E;
                sp16D = 0x6C;
                sp150 = 0x200005;
                sp16E = 0x2E;
                sp170 = 5;
                sp1A8 = 0x90DE07;
                sp1B0 = 8;
                sp1B1 = 6;
                sp1B2 = 0x24;
                sp1B3 = -1;
                sp154 = 0;
                sp15C = 0;
                sp160 = 0;
                sp1B4 = -1;
                sp1B5 = 0;
                sp164 = 0xDD;
                sp165 = 0xD3;
                sp166 = 0xCD;
                sp167 = 0xFF;
                sp168 = 0x57;
                sp169 = 0x55;
                sp16A = 0x5A;
                sp16C = 0xFF;
                sp18C = 0.0f;
                sp190 = 0.0f;
                sp194 = 0.0f;
                sp14C = D_800A0BA8;
                sp174 = D_800A0BAC;
                (*(s32 *)((char *)&(sp180) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
                (*(s32 *)((char *)&(sp180) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0xC));
                (*(s32 *)((char *)&(sp180) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x10));
                (*(s32 *)((char *)&(sp198) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
                (*(s32 *)((char *)&(sp198) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
                (*(s32 *)((char *)&(sp198) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
                do {
                    sp140 = random_u32();
                    sp141 = random_u32();
                    sp142 = (random_u32() % 5U) + 4;
                    sp143 = (random_u32() % 5U) + 4;
                    sp144 = random_float() * 10.0f;
                    sp148 = random_float() * 10.0f;
                    temp_f8 = random_float() * D_800A0BB0;
                    sp1A8 &= ~0xC0;
                    sp1A4 = temp_f8 + D_800A0BB4;
                    var_s0 = 0;
                    if (random_u32() & 1) {
                        var_s0 = 0x80;
                    }
                    if (random_u32() & 1) {
                        var_v0 = 0x40;
                    } else {
                        var_v0 = 0;
                    }
                    sp1A8 |= var_v0 | var_s0;
                    sp16B = (random_u32() % 101U) + 0x64;
                    sp15A = (random_u32() % 11U) + 0x46;
                    temp_f8_2 = (random_float() * 116.0f) + 131.0f;
                    sp17C = temp_f8_2;
                    sp178 = temp_f8_2;
                    temp_v0_3 = func_15130280(&sp150, 1, 0, 0x10, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                    if (temp_v0_3 != 0) {
                        memcpy(temp_v0_3 + 0xA8, (void **) &sp140, 0x10);
                    }
                    (*(f32 *)((char *)(temp_s1) + 0x48)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x48)) - 1.0f);
                } while ((*(s32 *)((char *)(temp_s1) + 0x48)) > 1.0f);
            }
        } else {
            (*(f32 *)((char *)(temp_s1) + 0x44)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x44)) + ((D_800A0BB8 + (random_float() * D_800A0BB8)) * D_800BE9A4));
            if ((*(s32 *)((char *)(temp_s1) + 0x44)) > 1.0f) {
                func_150472C0(&spD4, arg1);
                (*(s32 *)((char *)&(spF8) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
                (*(s32 *)((char *)&(spF8) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0xC));
                (*(s32 *)((char *)&(spF8) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x10));
                sp104 = D_800A0BBC;
                sp11E = 2;
                sp11C = 1;
                sp120 = 3;
                sp122 = 1;
                sp124 = 0x14;
                sp126 = 0xA;
                sp128 = 0xC8;
                sp12A = 0x37;
                sp134 = 0x10;
                sp136 = 0xF;
                sp138 = 0;
                sp12C = 3;
                sp108 = D_800A0BC0;
                sp10C = D_800A0BC4;
                sp110 = D_800A0BC8;
                sp114 = D_800A0BCC;
                sp118 = D_800A0BD0;
                sp130 = D_800A0BD4;
                if ((s32) (*(s32 *)((char *)(arg1) + 0x59)) >= 2) {
                    spA8 = 1;
                    spAC = -(*(s32 *)((char *)(arg2) + 0x0));
                    spB0 = -(*(s32 *)((char *)(arg2) + 0x4));
                    spB4 = -(*(s32 *)((char *)(arg2) + 0x8));
                    (*(s32 *)((char *)&(sp6C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
                    (*(s32 *)((char *)&(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
                    (*(s32 *)((char *)&(sp6C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
                    (*(s32 *)((char *)&(spC4) + 0x0)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x0));
                    (*(s32 *)((char *)&(spC4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x4));
                    (*(s32 *)((char *)&(spC4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x8));
                    (*(s32 *)((char *)&(spB8) + 0x0)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x0));
                    (*(s32 *)((char *)&(spB8) + 0x4)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x4));
                    (*(s32 *)((char *)&(spB8) + 0x8)) = (s32) (*(s32 *)((char *)&(sp6C) + 0x8));
                    spD0 = 300.0f;
                    do {
                        func_15153CCC(&spA8, &spF8, &spD4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                        (*(f32 *)((char *)(temp_s1) + 0x44)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x44)) - 1.0f);
                    } while ((*(s32 *)((char *)(temp_s1) + 0x44)) > 1.0f);
                } else {
                    sp84 = -(*(s32 *)((char *)(arg2) + 0x0));
                    sp88 = -(*(s32 *)((char *)(arg2) + 0x4));
                    sp8C = -(*(s32 *)((char *)(arg2) + 0x8));
                    (*(s32 *)((char *)&(sp90) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x44));
                    (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x48));
                    (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x4C));
                    (*(s32 *)((char *)&(sp90) + 0xC)) = (s32) (*(s32 *)((char *)(arg1) + 0x50));
                    (*(u16 *)((char *)&(sp90) + 0x10)) = (u16) (*(u16 *)((char *)(arg1) + 0x54));
                    spA4 = 300.0f;
                    do {
                        func_15153C84(&sp84, &spF8, &spD4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                        (*(f32 *)((char *)(temp_s1) + 0x44)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x44)) - 1.0f);
                    } while ((*(s32 *)((char *)(temp_s1) + 0x44)) > 1.0f);
                }
            }
        }
        if ((*(s32 *)((char *)(arg1) + 0x59)) == 1) {
            (*(f32 *)((char *)(temp_s1) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x40)) + ((D_800A0BD8 + (random_float() * D_800A0BDC)) * D_800BE9A4));
            if ((*(s32 *)((char *)(temp_s1) + 0x40)) > 1.0f) {
                sp68 = (char *)(arg1) + 8;
                sp64 = (char *)(arg1) + 0x44;
                do {
                    temp_f20 = random_float();
                    temp_s0 = random_u32();
                    func_151D9B8C(3, (temp_f20 * 30.0f) + 15.0f, ((temp_s0 % 101U) + 0x64) & 0xFF, sp64, sp68, (random_u32() % 81U) + 0x3C, 1, 1, 1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                    (*(f32 *)((char *)(temp_s1) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x40)) - 1.0f);
                } while ((*(s32 *)((char *)(temp_s1) + 0x40)) > 1.0f);
            }
        }
    }
}
