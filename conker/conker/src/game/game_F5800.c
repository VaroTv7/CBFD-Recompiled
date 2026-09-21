/**
 * Auto-decompiled from asm/F5800.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1503E5F8(); /* extern */
s32 func_15046C80();            /* extern */
void func_1504715C();                     /* extern */
void * func_1505D024();          /* extern */
void *func_15073118(); /* extern */
u32 random_u32();                        /* extern */
f32 random_float();                               /* extern */
void * func_150CCD90();     /* extern */
void * func_150CDB6C();                               /* extern */
s32 func_1510D0EC();                /* extern */
s32 func_15130374();            /* extern */
void * func_15132A4C();          /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();         /* extern */
s32 func_15142CF0(); /* extern */
void *func_15142FBC();             /* extern */
void * func_15143794();            /* extern */
void * func_1514C678(); /* extern */
void *func_15167A68();        /* extern */
void * memcpy();                         /* extern */
void func_150CA930();
extern s32 D_80088810;
extern s32 D_80088820;
extern s32 D_80088858;
extern s32 D_80088860;
extern s32 D_80088864;
extern s32 *D_80090E84;
extern f32 D_800A04F0;
extern f32 D_800A04F4;
extern f32 D_800A04F8;
extern f32 D_800A04FC;
extern f32 D_800A0528;
extern f32 D_800A052C;
extern f32 D_800A0530;
extern f32 D_800A0534;
extern f32 D_800A0538;
extern f32 D_800A053C;
extern f32 D_800A0540;
extern f32 D_800A0544;
extern f32 D_800A0548;
extern f32 D_800A054C;
extern f32 D_800A0550;
extern f32 D_800A0554;
extern f32 D_800A0558;
extern f32 D_800A055C;
extern f32 D_800A0560;
extern f32 D_800A0564;
extern f32 D_800A0568;
extern f32 D_800A056C;
extern f32 D_800A0570;
extern f32 D_800A0574;
extern f32 D_800A0578;
extern f32 D_800A057C;
extern f32 D_800A0580;
extern f32 D_800A0584;
extern f32 D_800A0588;
extern f32 D_800A058C;
extern f32 D_800A0590;
extern f32 D_800A0594;
extern f32 D_800A0598;
extern f32 D_800A059C;
extern f32 D_800A05A0;
extern f32 D_800A05A4;
extern f32 D_800A05A8;
extern f32 D_800A05AC;
extern f32 D_800A05B0;
extern f32 D_800A05B4;
extern f32 D_800A05B8;
extern f32 D_800A05BC;
extern f32 D_800A05C0;
extern f32 D_800A05C4;
extern f32 D_800A05C8;
extern f32 D_800A05CC;
extern f32 D_800A05D0;
extern f32 D_800A05D4;
extern f32 D_800A05D8;
extern s32 D_800A4AC8;
extern s32 func_15193CA0;
extern s32 func_151942B0;

void func_150C8350(void) {
    s16 temp_a1;
    s16 temp_a1_3;
    s16 var_a0;
    s16 var_a2;
    s32 temp_a1_2;
    s32 temp_t7;
    s32 var_a1;
    s32 var_t0;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *var_v0;

    var_v1 = 0;
    do {
        var_v0 = D_800BE4E0 + var_v1;
        var_a0 = (*(s32 *)((char *)(var_v0) + 0x6));
        temp_a1 = (*(s32 *)((char *)(var_v0) + 0x8));
        if (var_a0 != temp_a1) {
            var_a2 = temp_a1;
            if (var_a0 < 0) {
                var_a2 = -temp_a1;
            }
            temp_a1_2 = var_a2 - var_a0;
            var_t0 = temp_a1_2;
            temp_t7 = D_800BE9E4 * 0x10;
            if (temp_a1_2 < 0) {
                var_t0 = -temp_a1_2;
            }
            if (var_t0 < temp_t7) {
                (*(s32 *)((char *)(var_v0) + 0x6)) = var_a2;
                var_v0 = D_800BE4E0 + var_v1;
            } else {
                if (temp_a1_2 < 0) {
                    var_a1 = -1;
                } else {
                    var_a1 = 1;
                }
                (*(s16 *)((char *)(var_v0) + 0x6)) = (s16) (var_a0 + (temp_t7 * var_a1));
                var_v0 = D_800BE4E0 + var_v1;
            }
            var_a0 = (*(s32 *)((char *)(var_v0) + 0x6));
        }
        (*(s16 *)((char *)(var_v0) + 0x4)) = (s16) ((*(s16 *)((char *)(var_v0) + 0x4)) + (var_a0 * (*(s16 *)((char *)(var_v0) + 0x2)) * D_800BE9A0));
        temp_v0 = D_800BE4E0 + var_v1;
        temp_a1_3 = (*(s32 *)((char *)(temp_v0) + 0x4));
        if (temp_a1_3 >= 0x500) {
            (*(s16 *)((char *)(temp_v0) + 0x4)) = (s16) (temp_a1_3 - 0x500);
            temp_v0_2 = D_800BE4E0 + var_v1;
            (*(s16 *)((char *)(temp_v0_2) + 0x4)) = (s16) (0x500 - (*(s16 *)((char *)(temp_v0_2) + 0x4)));
            temp_v0_3 = D_800BE4E0 + var_v1;
            (*(s8 *)((char *)(temp_v0_3) + 0x2)) = (s8) -(*(s8 *)((char *)(temp_v0_3) + 0x2));
            temp_v0_4 = D_800BE4E0 + var_v1;
            if ((*(s32 *)((char *)(temp_v0_4) + 0x4)) >= 0x500) {
                (*(s32 *)((char *)(temp_v0_4) + 0x4)) = 0x4FF;
            }
        } else if (temp_a1_3 < 0) {
            (*(s16 *)((char *)(temp_v0) + 0x4)) = (s16) -temp_a1_3;
            temp_v0_5 = D_800BE4E0 + var_v1;
            (*(s8 *)((char *)(temp_v0_5) + 0x2)) = (s8) -(*(s8 *)((char *)(temp_v0_5) + 0x2));
            temp_v0_6 = D_800BE4E0 + var_v1;
            if ((*(s32 *)((char *)(temp_v0_6) + 0x4)) < 0) {
                (*(s32 *)((char *)(temp_v0_6) + 0x4)) = 0;
            }
        }
        var_v1 += 0xA;
    } while (var_v1 != 0x64);
}

void func_150C84F4(s32 arg0) {
    if (arg0 == 0) {
        func_150C8350();
    }
}

void func_150C851C(s32 arg0) {
    s32 var_s0;
    void *temp_t1;

    if (D_800BE4E0 != 0) {
        func_150CDB6C(arg0);
        var_s0 = 0;
        do {
            temp_t1 = D_800BE4E0 + var_s0;
            var_s0 += 0xA;
            (*(s16 *)((char *)(temp_t1) + 0x8)) = (s16) (((s32) (arg0 * 0x12C) >> 8) + (random_u32() % (u32) (((s32) (arg0 * 0x32) >> 8) + 0x32)));
        } while (var_s0 != 0x64);
    }
}

void *func_150C8600(void *arg0) {
    s32 sp4C[64];
    s32 sp58;
    s32 temp_t1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u8 var_v1;
    void *temp_a0;
    void *var_s2;

    var_s2 = arg0;
    sp4C[0] = (*(s32 *)((char *)&(D_80088810) + 0x0));
    var_s0 = 0;
    var_s1 = 4;
    sp4C[1] = (s32) (*(s32 *)((char *)&(D_80088810) + 0x4));
    do {
        temp_a0 = D_800BE4E0 + var_s0;
        temp_t1 = (s16) (*(s16 *)((char *)(temp_a0) + 0x4)) >> 8;
        var_v0 = temp_t1;
        if (temp_t1 < 0) {
            var_v0 = 0;
        } else if (var_v0 >= 5) {
            var_v0 = 4;
        }
        var_v1 = (*(s32 *)((char *)(temp_a0) + 0x0));
        if ((s32) var_v1 >= 2) {
            (*(s32 *)((char *)(temp_a0) + 0x0)) = 0U;
            var_v1 = (*(s32 *)((char *)(D_800BE4E0) + var_s0));
        }
        temp_v0 = func_1510D0EC((*(s32 *)((char *)(sp4C[var_v1]) + (var_v0 * 4))), &sp58, 3, 0);
        (*(s32 *)((char *)(var_s2) + 0x0)) = (s32) ((var_s1 & 0xFFFF) | 0xDB060000);
        (*(s32 *)((char *)(var_s2) + 0x4)) = temp_v0;
        var_s2 = (char *)(var_s2) + 8;
        var_s1 += 4;
        var_s0 += 0xA;
    } while (var_s1 != 0x2C);
    return var_s2;
}

s32 func_150C8730(void *arg0, void *arg1) {
    f32 spA0;
    f32 sp90;
    f32 sp80;
    f32 sp70;
    void * sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    void * sp54;
    void * sp50;
    void * sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s32 temp_f18;
    s32 var_v0;
    u16 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x2D0));
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x84));
    if (((temp_v1 == 0x14) && ((*(s32 *)((char *)(temp_v0) + 0x8)) > 10.0f)) || (var_v0 = 0, (temp_v1 == 0x23))) {
        guMtxL2F(&sp64, (*(s32 *)((char *)(arg0) + 0x34)) + ((D_800BE9C0 == 0) << 6));
        sp70 = 0.0f;
        sp80 = 0.0f;
        sp90 = 0.0f;
        spA0 = 1.0f;
        func_1503E5F8(&sp64, &sp60, &sp5C, &sp58, &sp48, &sp44, &sp40, &sp54, &sp50, &sp4C);
        temp_v0_2 = func_15073118(arg1, -1, 0x4E, 0, 0.0f, 0.0f, 0.0f, D_800A04F0, D_800A04F4, D_800A04F8, 0xC8);
        (*(s32 *)((char *)(temp_v0_2) + 0x14)) = sp60;
        (*(s32 *)((char *)(temp_v0_2) + 0x18)) = sp5C;
        (*(s32 *)((char *)(temp_v0_2) + 0x1C)) = sp58;
        (*(s32 *)((char *)(temp_v0_2) + 0xB8)) = sp48;
        (*(s32 *)((char *)(temp_v0_2) + 0x40)) = sp44;
        (*(s32 *)((char *)(temp_v0_2) + 0xC4)) = sp40;
        temp_f18 = (s32) (((*(s32 *)((char *)(temp_v0_2) + 0x40)) - 90.0f) * D_800A04FC);
        (*(s16 *)((char *)(temp_v0_2) + 0x76)) = (s16) temp_f18;
        (*(s16 *)((char *)(temp_v0_2) + 0x7A)) = (s16) temp_f18;
        var_v0 = 1;
    }
    return var_v0;
}

void *func_150C88D0(f32 *arg0, s32 arg1, s32 arg2, void * arg3) {
    f32 var_f20;
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_s1;
    void *temp_v0;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_v0 = func_15167A68(0x31, arg3, arg1 + (temp_v1 * 8) + (temp_v1 * 0xA0) + 0x408, 1, (s32) arg2, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    memcpy((char *)(temp_v0) + 0x10, arg0, 0x30);
    (*(s32 *)((char *)(temp_v0) + 0x360)) = (void *) ((char *)(temp_v0) + 0x368);
    temp_a0 = (*(s32 *)((char *)(temp_v0) + 0x24));
    (*(s32 *)((char *)(temp_v0) + 0x54)) = (void *) ((char *)(temp_v0) + ((*(s32 *)((char *)(arg0) + 0x14)) * 8) + 0x368);
    temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(s32 *)((char *)(temp_v0) + 0x58)) = (void *) ((char *)(temp_v0) + (temp_v1_2 * 8) + (temp_v1_2 * 0x50) + 0x3B8);
    temp_v1_3 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(s32 *)((char *)(temp_v0) + 0x40)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x44)) = 0.0f;
    var_s1 = 0;
    var_s0 = 0;
    (*(s32 *)((char *)(temp_v0) + 0x364)) = (void *) ((char *)(temp_v0) + (temp_v1_3 * 8) + (temp_v1_3 * 0xA0) + 0x408);
    (*(s32 *)((char *)(temp_v0) + 0x50)) = 0.0f;
    (*(s16 *)((char *)(temp_v0) + 0x4C)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x28));
    (*(f32 *)((char *)(temp_v0) + 0x48)) = (f32) (D_800A0528 / (f32) temp_a0);
    var_f20 = 0.0f;
    if (temp_a0 > 0) {
        do {
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x360))) + var_s0)) = sinf(var_f20);
            var_s1 += 1;
            (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x360)) + var_s0)) + 0x4)) = cosf(var_f20);
            var_s0 += 8;
            var_f20 += (*(s32 *)((char *)(temp_v0) + 0x48));
        } while (var_s1 < (*(s32 *)((char *)(temp_v0) + 0x24)));
    }
    return temp_v0;
}

void func_150C8A68(void *arg0) {
    u8 sp93;
    f32 sp8C;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    s8 temp_v0_2;
    s8 temp_v0_3;

    sp93 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x1C)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x28)) = (s16) ((*(s16 *)((char *)(arg0) + 0x28)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x28)) < 0) {
            sp93 = 1;
        }
    }
    if (sp93 == 0) {
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x44));
        sp8C = temp_f0;
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
        (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (temp_f0 + ((*(f32 *)((char *)(arg0) + 0x20)) * D_800BE9A4));
        if ((*(s32 *)((char *)(arg0) + 0x2A)) < temp_v0) {
            (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((f32) (s16) ((*(f32 *)((char *)(arg0) + 0x4C)) - temp_v0) * (*(f32 *)((char *)(arg0) + 0x2C)));
        }
        if (temp_v0 < (*(s32 *)((char *)(arg0) + 0x30))) {
            (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((f32) temp_v0 * (*(f32 *)((char *)(arg0) + 0x34)));
        }
        if ((*(s32 *)((char *)(arg0) + 0x3C)) != -1) {
            (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) + ((*(f32 *)((char *)(arg0) + 0x38)) * D_800BE9A4 * (D_800A052C * (*(f32 *)((char *)(arg0) + 0x44)))));
            if ((*(s32 *)((char *)(arg0) + 0x50)) > 1.0f) {
                temp_f26 = D_800A0530;
                temp_f24 = D_800A0534;
                do {
                    temp_s2 = (s32) ((*(s32 *)((char *)((D_800DBFF0 + (D_80082FA4 * 0x9A0))) + 0x380)) * temp_f24);
                    temp_a0 = ((random_u32() % 81U) + temp_s2) - 0x28;
                    temp_s1 = temp_a0 & 0xFF;
                    temp_f20 = func_151423D8((temp_a0 - 0x40) & 0xFF);
                    temp_f0_2 = func_151423D8(temp_s1 & 0xFF);
                    temp_f2 = temp_f0_2;
                    temp_f8 = (*(s32 *)((char *)(arg0) + 0x10)) + (temp_f20 * (*(s32 *)((char *)(arg0) + 0x44)));
                    sp74 = temp_f8;
                    sp78 = (*(s32 *)((char *)(arg0) + 0x14));
                    sp7C = (*(s32 *)((char *)(arg0) + 0x18)) + (temp_f0_2 * (*(s32 *)((char *)(arg0) + 0x44)));
                    if (((temp_f8 * temp_f8) + (sp7C * sp7C)) < temp_f26) {
                        ((s32 (*)())((char *)(&D_80088858 + ((*(s32 *)((char *)(arg0) + 0x3C)) * 4))))(arg0, &sp74, temp_s1 & 0xFF, temp_f20, temp_f2);
                    }
                    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) - 1.0f);
                } while ((*(s32 *)((char *)(arg0) + 0x50)) > 1.0f);
            }
        }
        temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x3D));
        if (temp_v0_2 != -1) {
            ((s32 (*)())((char *)(&D_80088864 + (temp_v0_2 * 4))))(arg0, sp8C);
        }
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x1D));
        if ((temp_v0_3 != -1) && (((s32 (*)())((char *)(&D_80088860 + (temp_v0_3 * 4))))(arg0) == 0)) {
            sp93 = 1;
        }
    }
    if (sp93 != 0) {
        func_1516972C(arg0);
    }
}

s32 *func_150C8DB8(s32 arg0, void *arg1, void * arg2) {
    void *sp1B4;
    s32 sp1B0;
    s8 sp1AF;
    s32 sp13C;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    s32 sp94;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 var_f16;
    f32 var_f16_2;
    s32 *temp_v1;
    s32 *var_s3;
    s32 temp_t3;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_5;
    s32 var_a2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s5;
    s32 var_s7;
    s32 var_v1;
    void *temp_a0;
    void *temp_s3;
    void *temp_s3_10;
    void *temp_s3_11;
    void *temp_s3_12;
    void *temp_s3_13;
    void *temp_s3_14;
    void *temp_s3_15;
    void *temp_s3_16;
    void *temp_s3_17;
    void *temp_s3_18;
    void *temp_s3_19;
    void *temp_s3_20;
    void *temp_s3_21;
    void *temp_s3_22;
    void *temp_s3_2;
    void *temp_s3_3;
    void *temp_s3_4;
    void *temp_s3_5;
    void *temp_s3_6;
    void *temp_s3_7;
    void *temp_s3_8;
    void *temp_s3_9;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_s0;
    void *var_s0_2;

    sp1B4 = arg1;
    sp1AF = 1;
    var_s7 = 0;
    temp_s3 = func_15142FBC(func_1513F4E4(func_15142CF0(func_15142C10(func_15142B7C(arg0, 0x200205, 0x70400), 0xFF, 0xFF, 0xFF, 0xFF, &sp1AF), 0xF2, 0, 0xFF, 0xFF, 0xFF, 0xFF, &sp1AF), 0x21, &sp1AF), 0x1DACA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x74)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x70)), &sp1AF);
    temp_v0 = func_1510D0EC(*D_80090E84, &sp1B0, 3, 0);
    (*(s32 *)((char *)(temp_s3) + 0x0)) = 0xD7000002;
    (*(s32 *)((char *)(temp_s3) + 0x4)) = -1;
    temp_s3_2 = (char *)(temp_s3) + 8;
    (*(s32 *)((char *)(temp_s3) + 0x8)) = 0xFD500000;
    (*(s32 *)((char *)(temp_s3_2) + 0x4)) = temp_v0;
    temp_s3_3 = (char *)(temp_s3_2) + 8;
    (*(s32 *)((char *)(temp_s3_3) + 0x4)) = 0x07000000;
    (*(s32 *)((char *)(temp_s3_2) + 0x8)) = 0xF5500000;
    temp_s3_4 = (char *)(temp_s3_3) + 8;
    (*(s32 *)((char *)(temp_s3_3) + 0x8)) = 0xF3000000;
    (*(s32 *)((char *)(temp_s3_4) + 0x4)) = 0x073EF000;
    temp_s3_5 = (char *)(temp_s3_4) + 8;
    (*(s32 *)((char *)(temp_s3_4) + 0x8)) = 0xF5400400;
    (*(s32 *)((char *)(temp_s3_5) + 0x4)) = 0x01018050;
    temp_s3_6 = (char *)(temp_s3_5) + 8;
    (*(s32 *)((char *)(temp_s3_5) + 0x8)) = 0xF2402402;
    (*(s32 *)((char *)(temp_s3_6) + 0x4)) = 0x0147E4FE;
    temp_s3_7 = (char *)(temp_s3_6) + 8;
    (*(s32 *)((char *)(temp_s3_6) + 0x8)) = 0xF5400280;
    (*(s32 *)((char *)(temp_s3_7) + 0x4)) = 0x02014441;
    temp_s3_8 = (char *)(temp_s3_7) + 8;
    (*(s32 *)((char *)(temp_s3_7) + 0x8)) = 0xF2202202;
    (*(s32 *)((char *)(temp_s3_8) + 0x4)) = 0x0223E27E;
    temp_s3_9 = (char *)(temp_s3_8) + 8;
    (*(s32 *)((char *)(temp_s3_8) + 0x8)) = 0xF54002A0;
    (*(s32 *)((char *)(temp_s3_9) + 0x4)) = 0x03010832;
    temp_s3_10 = (char *)(temp_s3_9) + 8;
    (*(s32 *)((char *)(temp_s3_9) + 0x8)) = 0xF2102102;
    (*(s32 *)((char *)(temp_s3_10) + 0x4)) = 0x0311E13E;
    temp_s3_11 = (char *)(temp_s3_10) + 8;
    (*(s32 *)((char *)(temp_s3_10) + 0x8)) = 0xF54002B0;
    (*(s32 *)((char *)(temp_s3_11) + 0x4)) = 0x0400CC23;
    temp_s3_12 = (char *)(temp_s3_11) + 8;
    (*(s32 *)((char *)(temp_s3_11) + 0x8)) = 0xF2082082;
    (*(s32 *)((char *)(temp_s3_12) + 0x4)) = 0x0408E09E;
    temp_s3_13 = (char *)(temp_s3_12) + 8;
    (*(s32 *)((char *)(temp_s3_12) + 0x8)) = 0xF54002B8;
    (*(s32 *)((char *)(temp_s3_13) + 0x4)) = 0x05009014;
    temp_s3_14 = (char *)(temp_s3_13) + 8;
    (*(s32 *)((char *)(temp_s3_13) + 0x8)) = 0xF2042042;
    (*(s32 *)((char *)(temp_s3_14) + 0x4)) = 0x0504604E;
    temp_s3_15 = (char *)(temp_s3_14) + 8;
    (*(s32 *)((char *)(temp_s3_14) + 0x8)) = 0xF56004BC;
    (*(s32 *)((char *)(temp_s3_15) + 0x4)) = 0x17C5F;
    temp_s3_16 = (char *)(temp_s3_15) + 8;
    (*(s32 *)((char *)(temp_s3_15) + 0x8)) = 0xF2802802;
    (*(s32 *)((char *)(temp_s3_16) + 0x4)) = 0x87E87E;
    temp_s3_17 = (char *)(temp_s3_16) + 8;
    (*(s32 *)((char *)(temp_s3_16) + 0x8)) = 0xFD100000;
    temp_s3_18 = (char *)(temp_s3_17) + 8;
    (*(s32 *)((char *)(temp_s3_17) + 0x4)) = (s32) ((sp1B0 + temp_v0) - 0x20);
    (*(s32 *)((char *)(temp_s3_18) + 0x4)) = 0x06000000;
    (*(s32 *)((char *)(temp_s3_17) + 0x8)) = 0xF5600100;
    temp_s3_19 = (char *)(temp_s3_18) + 8;
    (*(s32 *)((char *)(temp_s3_18) + 0x8)) = 0xE6000000;
    (*(s32 *)((char *)(temp_s3_19) + 0x4)) = 0;
    temp_s3_20 = (char *)(temp_s3_19) + 8;
    (*(s32 *)((char *)(temp_s3_19) + 0x8)) = 0xF0000000;
    (*(s32 *)((char *)(temp_s3_20) + 0x4)) = 0x0603C000;
    temp_s3_21 = (char *)(temp_s3_20) + 8;
    (*(s32 *)((char *)(temp_s3_20) + 0x8)) = 0xD7002002;
    (*(s32 *)((char *)(temp_s3_21) + 0x4)) = -1;
    var_s3 = (char *)(temp_s3_21) + 8;
    temp_a0 = (*(s32 *)((char *)(arg1) + 0x360));
    var_s2 = 0;
    temp_f24 = (*(s32 *)((char *)(temp_a0) + 0x0));
    temp_f26 = (*(s32 *)((char *)(temp_a0) + 0x4));
    sp13C = (*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 * 4))) + 0x54));
    temp_f0 = (*(s32 *)((char *)(arg1) + 0x44));
    var_s5 = 0;
    temp_f20 = (*(s32 *)((char *)(arg1) + 0x10)) + (temp_f0 * temp_f24);
    var_s0 = sp13C + (0 * 0x10);
    temp_f22 = (*(s32 *)((char *)(arg1) + 0x18)) + (temp_f0 * temp_f26);
    if (((temp_f20 * temp_f20) + (temp_f22 * temp_f22)) < D_800A0538) {
        var_s5 = 1;
    }
    var_s1 = 0;
    if ((*(s32 *)((char *)&(D_80088820) + 0x0)) > 0) {
        temp_f30 = D_800A053C;
        do {
            temp_f0_2 = (*(s32 *)((char *)(arg1) + 0x40));
            temp_v0_2 = (var_s1 * 8) + (*(s32 *)((char *)&(D_80088820) + 0x4));
            temp_f14 = (*(s32 *)((char *)(temp_v0_2) + 0x0)) * temp_f0_2;
            if (var_s5 != 0) {
                var_f16 = (*(s32 *)((char *)(temp_v0_2) + 0x4)) * temp_f0_2;
            } else {
                var_f16 = 0.0f;
            }
            temp_f0_3 = temp_f20 + (temp_f14 * temp_f24);
            temp_f12 = temp_f22 + (temp_f14 * temp_f26);
            (*(s16 *)((char *)(var_s0) + 0x0)) = (s16) (s32) temp_f0_3;
            (*(s16 *)((char *)(var_s0) + 0x2)) = (s16) (s32) (var_f16 + (*(s16 *)((char *)(arg1) + 0x14)));
            (*(s16 *)((char *)(var_s0) + 0x4)) = (s16) (s32) temp_f12;
            (*(s16 *)((char *)(var_s0) + 0x8)) = (s16) (s32) -(((temp_f0_3 * temp_f30) + (temp_f12 * D_800A0540) + D_800A0544) * 32.0f);
            (*(s16 *)((char *)(var_s0) + 0xA)) = (s16) (s32) -(((temp_f0_3 * D_800A0548) + (temp_f12 * D_800A054C) + D_800A0550) * 32.0f);
            func_150CCD90(temp_f12, temp_f14, &spF8, &spF4, &spF0);
            var_s7 += 1;
            (*(s8 *)((char *)(var_s0) + 0xC)) = (s8) (u32) spF8;
            (*(s8 *)((char *)(var_s0) + 0xD)) = (s8) (u32) spF4;
            (*(s8 *)((char *)(var_s0) + 0xE)) = (s8) (u32) spF0;
            if (var_s5 != 0) {
                (*(s32 *)((char *)(var_s0) + 0xF)) = 0xFF;
            } else {
                (*(s32 *)((char *)(var_s0) + 0xF)) = 0;
            }
            var_s0 = (char *)(var_s0) + 0x10;
            var_s1 += 1;
        } while (var_s1 < (*(s32 *)((char *)&(D_80088820) + 0x0)));
    }
    temp_f30_2 = D_800A0554;
    if ((*(s32 *)((char *)(arg1) + 0x24)) > 0) {
        do {
            var_s1_2 = 0;
            temp_f0_4 = (*(s32 *)((char *)(arg1) + 0x44));
            if ((var_s2 + 1) == (*(s32 *)((char *)(arg1) + 0x24))) {
                sp94 = var_s2 + 1;
                var_v1 = 0;
            } else {
                var_v1 = var_s2 + 1;
                sp94 = var_v1;
            }
            temp_v0_3 = (*(s32 *)((char *)(arg1) + 0x360)) + (var_v1 * 8);
            temp_f24_2 = (*(s32 *)((char *)(temp_v0_3) + 0x0));
            temp_f26_2 = (*(s32 *)((char *)(temp_v0_3) + 0x4));
            var_s2_2 = 0;
            var_s0_2 = sp13C + (var_s7 * 0x10);
            temp_f20_2 = (*(s32 *)((char *)(arg1) + 0x10)) + (temp_f0_4 * temp_f24_2);
            temp_f22_2 = (*(s32 *)((char *)(arg1) + 0x18)) + (temp_f0_4 * temp_f26_2);
            if (((temp_f20_2 * temp_f20_2) + (temp_f22_2 * temp_f22_2)) < D_800A0558) {
                var_s2_2 = 1;
            }
            if ((*(s32 *)((char *)&(D_80088820) + 0x0)) > 0) {
                do {
                    temp_f0_5 = (*(s32 *)((char *)(arg1) + 0x40));
                    temp_v0_4 = (var_s1_2 * 8) + (*(s32 *)((char *)&(D_80088820) + 0x4));
                    temp_f14_2 = (*(s32 *)((char *)(temp_v0_4) + 0x0)) * temp_f0_5;
                    if (var_s2_2 != 0) {
                        var_f16_2 = (*(s32 *)((char *)(temp_v0_4) + 0x4)) * temp_f0_5;
                    } else {
                        var_f16_2 = 0.0f;
                    }
                    temp_f0_6 = temp_f20_2 + (temp_f14_2 * temp_f24_2);
                    temp_f12_2 = temp_f22_2 + (temp_f14_2 * temp_f26_2);
                    (*(s16 *)((char *)(var_s0_2) + 0x0)) = (s16) (s32) temp_f0_6;
                    (*(s16 *)((char *)(var_s0_2) + 0x2)) = (s16) (s32) (var_f16_2 + (*(s16 *)((char *)(arg1) + 0x14)));
                    (*(s16 *)((char *)(var_s0_2) + 0x4)) = (s16) (s32) temp_f12_2;
                    (*(s16 *)((char *)(var_s0_2) + 0x8)) = (s16) (s32) -(((temp_f0_6 * temp_f30_2) + (temp_f12_2 * D_800A055C) + D_800A0560) * 32.0f);
                    (*(s16 *)((char *)(var_s0_2) + 0xA)) = (s16) (s32) -(((temp_f0_6 * D_800A0564) + (temp_f12_2 * D_800A0568) + D_800A056C) * 32.0f);
                    func_150CCD90(temp_f12_2, temp_f14_2, &spBC, &spB8, &spB4);
                    var_s7 += 1;
                    (*(s8 *)((char *)(var_s0_2) + 0xC)) = (s8) (u32) spBC;
                    (*(s8 *)((char *)(var_s0_2) + 0xD)) = (s8) (u32) spB8;
                    (*(s8 *)((char *)(var_s0_2) + 0xE)) = (s8) (u32) spB4;
                    if (var_s2_2 != 0) {
                        (*(s32 *)((char *)(var_s0_2) + 0xF)) = 0xFF;
                    } else {
                        (*(s32 *)((char *)(var_s0_2) + 0xF)) = 0;
                    }
                    var_s0_2 = (char *)(var_s0_2) + 0x10;
                    var_s1_2 += 1;
                } while (var_s1_2 < (*(s32 *)((char *)&(D_80088820) + 0x0)));
                var_s1_2 = 0;
            }
            temp_v0_5 = (*(s32 *)((char *)&(D_80088820) + 0x0)) * 2;
            temp_v1 = var_s3;
            (*(s32 *)((char *)(temp_v1) + 0x0)) = ((temp_v0_5 & 0xFF) << 0xC) | 0x01000000 | ((temp_v0_5 & 0x7F) * 2);
            var_s3 += 8;
            var_a2 = 0;
            (*(s32 *)((char *)(temp_v1) + 0x4)) = (s32) ((*(s32 *)((char *)(((char *)(arg1) + (D_800BE9C0 * 4))) + 0x54)) + ((var_s7 - temp_v0_5) * 0x10));
            var_a3 = 2;
            if (((*(s32 *)((char *)&(D_80088820) + 0x0)) - 1) > 0) {
                do {
                    temp_t8 = (var_a2 & 0xFF) << 0x10;
                    (*(s32 *)((char *)(var_s3) + 0x0)) = temp_t8 | ((var_a3 & 0xFF) << 8) | ((((var_s1_2 + (*(s32 *)((char *)&(D_80088820) + 0x0))) * 2) + 2) & 0xFF) | 0x05000000;
                    (*(s32 *)((char *)(var_s3) + 0x4)) = 0;
                    temp_s3_22 = var_s3 + 8;
                    (*(s32 *)((char *)(temp_s3_22) + 0x4)) = 0;
                    temp_t3 = (var_s1_2 + (*(s32 *)((char *)&(D_80088820) + 0x0))) * 2;
                    (*(s32 *)((char *)(var_s3) + 0x8)) = (s32) (temp_t8 | (((temp_t3 + 2) & 0xFF) << 8) | (temp_t3 & 0xFF) | 0x05000000);
                    var_s3 = (char *)(temp_s3_22) + 8;
                    var_s1_2 += 1;
                    var_a2 += 2;
                    var_a3 += 2;
                } while (var_s1_2 < ((*(s32 *)((char *)&(D_80088820) + 0x0)) - 1));
            }
            var_s2 = sp94;
        } while (var_s2 < (*(s32 *)((char *)(sp1B4) + 0x24)));
    }
    return var_s3;
}

void func_150C99B4(void *arg0, void *arg1, s32 arg2, void * arg3) {
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s32 sp90;
    f32 sp8C;
    void * sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    void * sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s16 sp5A;
    s16 sp58;
    s16 sp56;
    s8 sp55;
    s8 sp54;
    s8 sp53;
    s8 sp52;
    s8 sp51;
    s8 sp50;
    s8 sp4F;
    s8 sp4E;
    s8 sp4D;
    s8 sp4C;
    s32 sp48;
    s32 sp44;
    s16 sp42;
    s16 sp40;
    s32 sp3C;
    s32 sp38;
    s16 sp32;
    s32 sp28;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;
    s32 var_v0;
    s32 var_v1;

    sp55 = 0x26;
    sp40 = 0xC01;
    sp38 = 0x200005;
    sp3C = 0;
    sp42 = (random_u32() % 81U) + 0x19;
    sp44 = 0;
    sp48 = 0;
    sp98 = 5;
    sp99 = 5;
    sp4C = 0;
    sp4D = 0;
    sp4E = 0;
    sp4F = 0xFF;
    sp50 = 0;
    sp51 = 0;
    sp52 = 0;
    sp53 = (random_u32() % 156U) + 0x64;
    sp54 = 0xFF;
    temp_f6 = (random_float() * 500.0f) + 500.0f;
    sp64 = temp_f6;
    sp60 = temp_f6;
    (*(s32 *)((char *)&(sp68) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp68) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp68) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    sp74 = 0.0f;
    sp78 = 0.0f;
    sp7C = 0.0f;
    temp_f18 = (random_float(0x43FA0000) * D_800A0570) + -1416.0f;
    sp56 = 0x14;
    sp58 = 0xC;
    sp5A = 0;
    sp5C = 1.0f;
    sp8C = temp_f18 * D_800A0574;
    var_v1 = 0;
    if (random_u32() & 1) {
        var_v1 = 0x40;
    }
    sp28 = var_v1;
    if (random_u32() & 1) {
        var_v0 = 0x80;
    } else {
        var_v0 = 0;
    }
    sp90 = var_v0 | 7 | var_v1 | 0x200;
    sp9A = -1;
    sp9B = -1;
    sp32 = (random_u32() % 11U) - 0x12;
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x20));
    temp_f12 = (random_float() * (temp_f2 * D_800A0578)) + (temp_f2 * D_800A057C);
    func_15143794(temp_f12, arg2, sp32, temp_f12, &sp80);
    func_15130374(&sp38, 1, 0, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
}

void func_150C9BDC(void *arg0, void * arg1) {
    void * *var_s0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 var_f14;
    s32 temp_v0;
    u8 temp_v1;

    var_s0 = &gObjects;
    do {
        temp_v0 = (*(s32 *)((char *)(var_s0) + 0x0));
        if ((temp_v0 != 0) && ((*(s32 *)((char *)(var_s0) + 0x28)) < 20.0f) && ((*(s32 *)((char *)(var_s0) + 0x125)) == 0) && ((temp_v1 = (*(s32 *)((char *)(var_s0) + 0x4)), (temp_v1 == 0x53)) || (temp_v0 == 1))) {
            temp_f2 = (*(s32 *)((char *)(var_s0) + 0x14)) - (*(s32 *)((char *)(arg0) + 0x10));
            temp_f12 = (*(s32 *)((char *)(var_s0) + 0x1C)) - (*(s32 *)((char *)(arg0) + 0x18));
            temp_f16 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12)) - 100.0f;
            var_f14 = temp_f16;
            if ((temp_v1 == 0x53) && ((*(s32 *)((char *)(var_s0) + 0x13C)) == 0)) {
                var_f14 = temp_f16 - 150.0f;
            }
            temp_f0 = (*(s32 *)((char *)(arg0) + 0x44)) - var_f14;
            if ((temp_f0 >= 0.0f) && (temp_f0 < 250.0f)) {
                if (temp_v1 == 0x53) {
                    (*(s32 *)((char *)(var_s0) + 0x89)) = 0xA;
                    (*(s32 *)((char *)(var_s0) + 0x218)) = 0;
                    (*(s32 *)((char *)(var_s0) + 0x232)) = 0x13;
                    if ((*(s32 *)((char *)((&gObjects + ((*(s32 *)((char *)(var_s0) + 0x124)) * 0x32C))) + 0x65)) != 0) {
                        (*(s32 *)((char *)(var_s0) + 0x232)) = 0x14;
                    }
                } else {
                    func_1505D024(temp_f12, var_f14, var_s0, 0x6000E, (*(s32 *)((char *)(var_s0) + 0x7A)), -1);
                }
            }
        }
        var_s0 = (char *)(var_s0) + 0x32C;
    } while ((char *)(var_s0) != (char *)(&D_800D121C));
}

void func_150C9DC4(void *arg0, void *arg1, s32 arg2, void * arg3) {
    s16 spA8;
    s16 spA6;
    s8 spA4;
    s32 spA0;
    s8 sp9E;
    s8 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    s8 sp8C;
    s16 sp8A;
    s16 sp88;
    s32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    void * sp68;
    void * sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    void * sp30;
    f32 sp2C;
    f32 sp28;
    u32 sp20;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;

    func_150CCD90((*(f32 *)((char *)(arg1) + 0x8)), (f32)(s32)&sp30, &sp2C, &sp28);
    (*(s32 *)((char *)&(sp5C) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp5C) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(f32 *)((char *)&(sp5C) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x8));
    sp50 = 1.0f;
    sp54 = 1.0f;
    sp58 = 1.0f;
    sp84 = 0x29E8;
    sp44 = random_float() * 360.0f;
    sp48 = random_float() * 360.0f;
    temp_f18 = random_float() * 360.0f;
    sp8A = 0x20;
    sp38 = D_800A0580;
    sp4C = temp_f18;
    sp78 = 0.0f;
    sp34 = 1.0f;
    sp20 = random_u32();
    func_15143794((f32) arg2, (u8) (s16) ((sp20 % 26U) - 0x2D), (s16) (((random_float() * 81.0f) + 60.0f) * (*(f32 *)((char *)(arg0) + 0x20)) * D_800A0584), (f32)(s32)&sp68);
    sp74 = ((random_float() * 260.0f) + -130.0f) * D_800A0588;
    sp7C = ((random_float() * 260.0f) + -130.0f) * D_800A058C;
    sp88 = (random_u32() % 41U) + 0x28;
    sp80 = ((random_float() * D_800A0590) + D_800A0594) * D_800A0598;
    temp_f4 = random_float() * 400.0f;
    sp8C = 0;
    sp90 = 0;
    temp_f2 = (temp_f4 + 199.0f) * D_800A059C;
    sp3C = temp_f2;
    sp40 = temp_f2;
    sp94 = (random_u32() % 101U) + 0x9B;
    sp95 = 7;
    sp96 = 0;
    sp97 = 0;
    sp98 = 0;
    sp99 = 0;
    sp9A = 0;
    sp9B = 0;
    sp9C = 0;
    sp9E = 2;
    spA0 = 0;
    spA4 = 0;
    spA6 = 0x20;
    spA8 = 7;
    func_15132A4C(&sp34, 3, 0xFF, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
}

s32 func_150CA07C(void *arg0) {
    f32 temp_f12;
    f32 temp_f2;

    temp_f12 = (*(s32 *)((char *)(arg0) + 0x5C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x48));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x44)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((temp_f2 * D_800BE9A4) + (temp_f12 * D_800BE9A4 * D_800BE9A4 * 0.5f)));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (temp_f2 + (temp_f12 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x58)) * D_800BE9A4));
    return 1;
}

void func_150CA150(void *arg0) {
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp158;
    f32 sp154;
    f32 sp150;
    u8 sp14F;
    u8 sp14E;
    u8 sp14D;
    f32 sp128;
    u8 sp127;
    s8 sp111;
    s8 sp110;
    f32 sp10C;
    f32 sp108;
    s16 sp104;
    f32 sp100;
    s16 spFE;
    s16 spFC;
    s32 spF8;
    f32 spF4;
    s8 spF1;
    s8 spF0;
    f32 spE4;
    s32 spCC;
    s8 spCB;
    s8 spCA;
    s8 spC9;
    s8 spC8;
    s8 spC7;
    s8 spC6;
    s8 spC5;
    s8 spC4;
    s32 spC0;
    s32 spBC;
    s8 spBA;
    s16 spB8;
    s32 spB4;
    f32 spA8;
    u8 spA7;
    f32 spA0;
    f32 sp9C;
    s16 sp92;
    s16 sp90;
    s16 sp8E;
    s16 sp8C;
    s16 sp8A;
    s16 sp88;
    s16 sp86;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s16 sp78;
    s16 sp76;
    s16 sp74;
    s16 sp72;
    s16 sp70;
    s16 sp6E;
    s16 sp6C;
    s16 sp6A;
    u8 sp66;
    u8 sp65;
    u8 sp64;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f4;
    s32 *var_v0;
    s32 temp_t3;
    s32 var_t6;
    s32 var_v1;
    s8 temp_t5;
    u8 temp_t6;

    sp127 = 0;
    if (arg0 != NULL) {
        func_1504715C(&sp128, arg0);
        func_1512D748((D_800BE9E8 * 0x9A0) + D_800DBFF0, 7, 1);
        sp15C = (*(s32 *)((char *)(arg0) + 0x14));
        sp160 = (*(s32 *)((char *)(arg0) + 0x18)) + 100.0f;
        sp164 = (*(s32 *)((char *)(arg0) + 0x1C));
        if (func_15046C80(&sp15C, 0, (*(s32 *)((char *)(arg0) + 0x18)) - 300.0f, &sp128) != 0) {
            sp127 = 1;
            sp160 = sp128;
        } else {
            sp160 = (*(s32 *)((char *)(arg0) + 0x180));
        }
        var_v0 = &func_15193CA0;
        var_v1 = 0;
        if ((u32) &func_15193CA0 < (u32) &func_151942B0) {
            do {
                temp_t3 = *var_v0;
                var_v0 += 4;
                var_v1 ^= ~temp_t3;
            } while ((u32) var_v0 < (u32) &func_151942B0);
        }
        if (var_v1 != 0x79844C6B) {
            D_800C3E7C = 0;
        }
        func_150CCD90(sp164, (f32)(s32)&func_151942B0, &sp158, &sp154, &sp150);
        if (M2C_ERROR(/* cfc1 */) & 0x78) {
            if (!(M2C_ERROR(/* cfc1 */) & 0x78)) {
                var_t6 = (s32) (sp158 - 2.1474836e9f) | 0x80000000;
            } else {
                goto block_11;
            }
        } else {
            var_t6 = (s32) sp158;
            if (var_t6 < 0) {
block_11:
                var_t6 = -1;
            }
        }
        sp14F = (u8) var_t6;
        sp14E = (u8) (u32) sp154;
        sp14D = (u8) (u32) sp150;
        func_151D5404(&sp15C, 0x43FA0000, 0x459C4000, 0x3951B717, 0xC, 0xF, 0xFF, 0);
        (*(s32 *)((char *)&(spE4) + 0x0)) = (*(s32 *)((char *)&(sp15C) + 0x0));
        (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x4));
        (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp15C) + 0x8));
        spF4 = D_800A05A4;
        spF0 = 1;
        spF1 = -1;
        spF8 = 0xD;
        spFC = 0x65;
        spFE = 0x58;
        sp104 = 0x13;
        sp110 = 1;
        sp111 = 0;
        sp10C = D_800A05A8;
        sp100 = D_800A05A0 / (f32) 0xD;
        sp108 = D_800A05A0 / (f32) 0x13;
        func_150C88D0(&spE4, 0, 0xFFU, 1);
        if (sp127 != 0) {
            temp_t6 = (-0x40 - ((s32) (*(s32 *)((char *)(arg0) + 0x7A)) >> 8)) & 0xFF;
            spA7 = temp_t6;
            sp9C = func_151423D8(temp_t6);
            spA0 = func_151423D8((spA7 - 0x40) & 0xFF);
            temp_f4 = random_float() * 96.0f;
            spB4 = 0x701;
            temp_f20 = (temp_f4 + 352.0f) * 0.5f;
            spA8 = temp_f20;
            random_u32();
            spB8 = 0x408;
            spBC = 0;
            spC0 = 0;
            temp_f2 = spA8 * sp9C;
            temp_f12 = spA8 * spA0;
            temp_t5 = (random_u32() % 41U) + 0xB4;
            spC9 = 0xFF;
            spC4 = temp_t5;
            spC8 = 0xFF;
            spCC = 0x260001;
            spC5 = 0xFF;
            spC6 = 0xFF;
            spC7 = 0xFF;
            spCA = 0;
            spCB = 6;
            sp72 = 0xFF;
            sp74 = 0;
            sp7C = 0xFF;
            sp7E = 0;
            sp86 = 0xFF;
            sp88 = 0;
            sp90 = 0xFF;
            sp92 = 0;
            spBA = 0x51;
            sp58 = temp_f12;
            sp5C = temp_f2;
            sp6C = (s16) sp14F;
            sp76 = (s16) sp14F;
            sp80 = (s16) sp14F;
            sp8A = (s16) sp14F;
            sp6E = (s16) sp14E;
            sp78 = (s16) sp14E;
            sp82 = (s16) sp14E;
            sp8C = (s16) sp14E;
            sp70 = (s16) sp14D;
            sp7A = (s16) sp14D;
            sp84 = (s16) sp14D;
            sp8E = (s16) sp14D;
            func_1513C5B0(temp_f12, &spB4, &sp6C, 0xC, 0.0f, (temp_f2 + sp15C) - temp_f12, sp160 + 10.0f, temp_f2 + sp164 + temp_f12, temp_f20, temp_f20, (f32) spA7, 0, 0, 0xFF);
            temp_f0 = -1.0f * spA8;
            temp_f14 = temp_f0 * spA0;
            spBA = 0x52;
            sp54 = temp_f14;
            temp_f16 = temp_f0 * sp9C;
            sp50 = temp_f16;
            func_1513C5B0(sp58, (*(s32 * *)&temp_f14), (s16 *) &spB4, &sp6C, 1.7e-44f, 0.0f, (sp5C + sp15C) - temp_f14, sp160 + 10.0f, temp_f16 + sp164 + sp58, temp_f20, temp_f20, (s32) spA7, 0, 0);
            spBA = 0x53;
            func_1513C5B0(sp58, (*(s32 *)&sp54), (s16 *) &spB4, &sp6C, 1.7e-44f, 0.0f, (sp50 + sp15C) - sp58, sp160 + 10.0f, sp5C + sp164 + sp54, temp_f20, temp_f20, (s32) spA7, 0, 0);
            spBA = 0x54;
            func_1513C5B0((f32)(s32)&spB4, (s32 *) &sp6C, 0xC, NULL, (sp50 + sp15C) - sp54, sp160 + 10.0f, sp50 + sp164 + sp54, temp_f20, temp_f20, (f32) spA7, 0.0f, 0, 0xFF, 0);
            func_150CA930(&sp15C);
            sp6A = (random_u32() % 21U) + 0xA;
            sp64 = sp14F;
            sp65 = sp14E;
            sp66 = sp14D;
            func_1514C678(sp15C, sp160, sp164, (random_float() * 81.0f) + 150.0f, 0, 0xFF, (s32) sp6A, 0x14, 0, 0.0f, &sp64, 0xFF);
        }
    }
}

void func_150CA930(f32 *arg0) {
    s16 sp3E;

    sp3E = (random_u32() % 21U) + 0xA;
    func_1514C678((*(s32 *)((char *)(arg0) + 0x0)), (*(s32 *)((char *)(arg0) + 0x4)), (*(s32 *)((char *)(arg0) + 0x8)), (random_float() * 59.0f) + 170.0f, 0, 0xFF, (s32) sp3E, 0x13, 0, 0.0f, NULL, 0xFF);
}

s32 func_150CA9D0(void *arg0) {
    s16 temp_v0;
    s32 temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (temp_v0 < 0x20) {
        temp_v1 = temp_v0 * 8;
        if (temp_v1 < (s32) (*(s32 *)((char *)(arg0) + 0x28))) {
            (*(u8 *)((char *)(arg0) + 0x28)) = (u8) temp_v1;
        }
    }
    return 1;
}

s32 func_150CAA04(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg8, u8 arg14) {
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp8C;
    f32 sp88;
    void * sp7C;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s8 sp51;
    s8 sp50;
    s8 sp4F;
    s8 sp4E;
    s8 sp4D;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    s8 sp49;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s16 sp3E;
    s16 sp3C;
    s32 sp38;
    s32 sp34;
    f32 sp2C;
    u32 sp24;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_v0;

    sp51 = 0x29;
    sp3C = 0xE03;
    sp34 = 0x200005;
    sp38 = 0;
    sp3E = (random_u32() % 26U) + 0x19;
    sp40 = 0;
    sp44 = 0;
    sp4C = 0xB0;
    sp4D = 0xA0;
    sp4E = 0x2A;
    sp48 = 0x40;
    sp49 = 0xB;
    sp4A = 0x6A;
    sp4B = 0xFF;
    sp4F = (random_u32() % 156U) + 0x64;
    sp50 = 0xFF;
    sp94 = 3;
    sp95 = 3;
    temp_f6 = random_float() * D_800A05AC;
    sp64 = arg2;
    sp68 = arg3;
    sp6C = arg4;
    temp_f2 = temp_f6 + 800.0f;
    sp5C = temp_f2;
    sp60 = temp_f2;
    sp24 = random_u32();
    func_15143794((f32) arg8, (u8) (s16) ((sp24 % 12U) - 0x15), (s16) (((random_float() * 300.0f) + 498.0f) * D_800A05B0), (f32)(s32)&sp7C);
    sp8C = 0xE05;
    sp88 = 0.0f;
    if (random_u32() & 1) {
        sp8C |= 0x40;
    }
    if (random_u32() & 1) {
        sp8C |= 0x80;
    }
    sp96 = 9;
    sp97 = -1;
    sp52 = 0x19;
    sp54 = 0xA;
    sp56 = 0x20;
    sp58 = D_800A05B4;
    sp2C = D_800A05B8;
    temp_v0 = func_15130374(&sp34, 1, 4, arg14, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, &sp2C, 4);
    }
    return 1;
}

s32 func_150CAC28(void *arg0, void * arg1) {
    f32 var_f18;
    f32 var_f18_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v1;
    s32 var_v1_2;

    var_v1 = D_800BE9E4;
    if (var_v1 != 0) {
        temp_a2 = -(var_v1 & 3);
        temp_a1 = temp_a2 + var_v1;
        if (temp_a2 != 0) {
            var_v1 -= 1;
            var_f18 = (*(s32 *)((char *)(arg0) + 0x58)) * (*(s32 *)((char *)(arg0) + 0xA8));
            if (temp_a1 != var_v1) {
                do {
                    (*(s32 *)((char *)(arg0) + 0x58)) = var_f18;
                    var_v1 -= 1;
                    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    var_f18 = (*(s32 *)((char *)(arg0) + 0x58)) * (*(s32 *)((char *)(arg0) + 0xA8));
                } while (temp_a1 != var_v1);
            }
            (*(s32 *)((char *)(arg0) + 0x58)) = var_f18;
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            if (var_v1 != 0) {
                goto block_5;
            }
        } else {
block_5:
            var_v1_2 = var_v1 - 4;
            var_f18_2 = (*(s32 *)((char *)(arg0) + 0x58)) * (*(s32 *)((char *)(arg0) + 0xA8));
            if (var_v1_2 != 0) {
                do {
                    (*(s32 *)((char *)(arg0) + 0x58)) = var_f18_2;
                    var_v1_2 -= 4;
                    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
                    var_f18_2 = (*(s32 *)((char *)(arg0) + 0x58)) * (*(s32 *)((char *)(arg0) + 0xA8));
                } while (var_v1_2 != 0);
            }
            (*(s32 *)((char *)(arg0) + 0x58)) = var_f18_2;
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0xA8)));
            (*(f32 *)((char *)(arg0) + 0x60)) = (f32) ((*(f32 *)((char *)(arg0) + 0x60)) * (*(f32 *)((char *)(arg0) + 0xA8)));
        }
    }
    return 1;
}

s32 func_150CADD0(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg8, u8 arg14) {
    s16 sp9C;
    s16 sp9A;
    s8 sp98;
    s32 sp94;
    s8 sp92;
    s8 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s32 sp84;
    s8 sp80;
    s16 sp7E;
    s16 sp7C;
    s32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    void * sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    u32 sp20;
    f32 temp_f10;
    f32 temp_f2;

    sp50 = arg2;
    sp54 = arg3;
    sp44 = 1.0f;
    sp48 = 1.0f;
    sp4C = 1.0f;
    sp78 = 0x29E8;
    sp38 = 0.0f;
    sp3C = 0.0f;
    sp40 = 0.0f;
    sp6C = 0.0f;
    sp28 = 1.0f;
    sp7E = 0x20;
    sp58 = arg4;
    sp2C = D_800A05BC;
    sp20 = random_u32(arg2, arg3);
    func_15143794((f32) arg8, (u8) (s16) ((sp20 % 21U) - 0x28), (s16) (((random_float() * 204.0f) + 500.0f) * D_800A05C0), (f32)(s32)&sp5C);
    sp68 = ((random_float() * 260.0f) + -130.0f) * D_800A05C4;
    sp70 = ((random_float() * 260.0f) + -130.0f) * D_800A05C8;
    sp7C = (random_u32() % 51U) + 0x32;
    sp74 = ((random_float() * 1008.0f) + D_800A05CC) * D_800A05D0;
    temp_f10 = random_float() * D_800A05D4;
    sp80 = 0;
    sp84 = 0;
    temp_f2 = (temp_f10 + 200.0f) * D_800A05D8;
    sp30 = temp_f2;
    sp34 = temp_f2;
    sp88 = (random_u32() % 76U) + 0xB4;
    sp89 = 4;
    sp8A = 0;
    sp8B = 0;
    sp8C = 0;
    sp8D = 0;
    sp8E = 0;
    sp8F = 0;
    sp90 = 0;
    sp92 = 2;
    sp94 = 0;
    sp98 = 0;
    sp9A = 0x20;
    sp9C = 7;
    func_15132A4C(&sp28, 3, 0xFF, 0, (s32) arg14, 0);
    return 1;
}

s32 func_150CB008(void *arg0) {
    f32 temp_f12;
    f32 temp_f2;

    temp_f12 = (*(s32 *)((char *)(arg0) + 0x5C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x48));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x44)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((temp_f2 * D_800BE9A4) + (temp_f12 * D_800BE9A4 * D_800BE9A4 * 0.5f)));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (temp_f2 + (temp_f12 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x58)) * D_800BE9A4));
    return 1;
}
