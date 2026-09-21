/**
 * Auto-decompiled from asm/124920.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15081690(); /* extern */
u32 random_u32();                         /* extern */
f32 random_float();                                /* extern */
void *func_150FF288();                        /* extern */
void * func_150FF474();                 /* extern */
s32 func_150FF6E0(); /* extern */
void * func_15102B38(); /* extern */
void * func_15130280();          /* extern */
s32 func_1513264C(); /* extern */
void * func_15140410();                     /* extern */
void * func_15143794();                /* extern */
void * func_15143874();            /* extern */
s32 func_15145128();        /* extern */
void * func_15145974();           /* extern */
void * func_15145EA4();                /* extern */
s32 func_15146078();             /* extern */
void * func_15152B38();                       /* extern */
void * func_151541B8(); /* extern */
void * func_151602C0(); /* extern */
void * func_15164F0C();                  /* extern */
void func_151C329C();                     /* extern */
s32 func_151C4B0C(); /* extern */
void * func_151D3F14();                      /* extern */
void * func_151D4408(); /* extern */
void * func_151D4DAC(); /* extern */
void * func_151D8868();                   /* extern */
void * func_151DB5D0(); /* extern */
void * memcpy();                          /* extern */
void func_150F7F8C();
void func_150F892C();        /* static */
extern u8 D_80088B50;
extern f32 D_800A1BC0;
extern f32 D_800A1BC4;
extern f32 D_800A1BC8;
extern f32 D_800A1BCC;
extern f32 D_800A1BD0;
extern f32 D_800A1BD4;
extern f32 D_800A1BD8;
extern f32 *D_800A1BDC;
extern f32 D_800A1BE0;
extern f32 D_800A1BE4;
extern f32 D_800A1BE8;
extern f32 D_800A1BEC;
extern f32 D_800A1BF0;
extern f32 D_800A1BF4;
extern s32 D_800A1C40;
extern s32 D_800A1C48;
extern s32 D_800A1C54;
extern f32 D_800A1C60;
extern f32 D_800A1C64;
extern f32 D_800A1C68;
extern f32 D_800A1C6C;
extern f32 D_800A1C70;
extern f32 D_800A1C74;
extern f32 D_800A1C78;
extern f32 D_800A1C7C;
extern f32 D_800A1C80;
extern f32 D_800A1C84;
extern f32 D_800A1C88;
extern f32 D_800A1C8C;
extern f32 D_800A1C90;
extern f32 D_800A1C94;
extern f32 D_800A1C98;
extern f32 D_800A1C9C;
extern f32 D_800A1CA0;
extern f32 D_800A1CA4;
extern f32 D_800A1CA8;
extern f32 D_800A1CAC;
extern f32 D_800A1CB0;
extern f32 D_800A1CB4;
extern f32 D_800A1CB8;

void func_150F7470(void *arg0, f32 *arg1, s32 arg2, f32 *arg3, u8 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, void *arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, s32 arg14, s8 arg15, s32 arg16, u8 arg17, u8 arg18, s32 arg19) {
    s8 sp1AC;
    f32 sp1A8;
    f32 sp1A4;
    f32 sp1A0;
    void * sp194;
    f32 sp190;
    f32 sp18C;
    f32 sp188;
    void * sp17C;
    void *sp170;
    u8 sp16C;
    f32 sp168;
    void * sp164;
    s32 sp160;
    f32 sp134;
    void *spFC;
    s32 spF8;
    s16 spF4;
    s16 spF2;
    u8 spF0;
    void *spEC;
    s8 spEA;
    s8 spE8;
    s8 spE7;
    s8 spE6;
    s8 spE5;
    s8 spE4;
    s8 spE3;
    s8 spE2;
    s8 spE1;
    s8 spE0;
    s32 spDC;
    s8 spD8;
    s16 spD6;
    s16 spD4;
    s32 spD0;
    f32 spCC;
    void * spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    void * sp94;
    void * sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp70;
    u8 sp6F;
    f32 sp60;
    u8 sp5F;
    f32 *var_a3_2;
    f32 *var_v0_2;
    s32 temp_v0;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v1;
    u8 var_t0;
    u8 var_t1;

    f32 sp138;
    f32 sp13C;
    f32 sp100;
    f32 spAC;
    f32 spB0;
    var_t1 = arg4;
    var_t0 = 0;
    var_v1 = 0;
    if (var_t1 != 0) {
        (*(s32 *)((char *)&(sp60) + 0x0)) = (*(s32 *)((char *)(arg3) + 0x0));
        (*(s32 *)((char *)&(sp60) + 0x4)) = (s32) (*(s32 *)((char *)(arg3) + 0x4));
        (*(s32 *)((char *)&(sp60) + 0x8)) = (s32) (*(s32 *)((char *)(arg3) + 0x8));
    }
    var_a3 = 0;
    if (arg12 != 0) {
        var_v1 = 2;
    }
    var_v0 = 0;
    if (arg11 != 0) {
        var_a3 = 1;
    }
    if (arg13 != 0) {
        var_v0 = 4;
    }
    sp16C = var_v0 | var_a3 | var_v1;
    sp1AC = arg15;
    if ((arg2 != 0) && (arg3 != NULL)) {
        if (arg4 == 0) {
            sp6F = 0;
            var_t0 = sp6F;
            if (func_15145128(arg3, &sp60, NULL, NULL) != 0) {
                var_t1 = 1;
                goto block_16;
            }
        } else {
            goto block_16;
        }
    } else if (arg1 != NULL) {
        sp5F = var_t1;
        var_t1 = sp5F;
        if (func_15145128(arg1, &sp70, NULL, NULL) != 0) {
            var_t0 = 1;
            goto block_16;
        }
    } else {
block_16:
        if (var_t0 != 0) {
            var_a3_2 = &sp70;
        } else {
            var_a3_2 = NULL;
        }
        if (var_t1 != 0) {
            var_v0_2 = &sp60;
        } else {
            var_v0_2 = NULL;
        }
        if ((func_151C4B0C(arg5, &spFC, arg0, var_a3_2, &sp164, arg7, (s32) arg10, arg2, var_v0_2, &sp16C, 1, arg8, arg9, (s32) arg15, (s32) arg12, (s32) arg13, 0, (s32) arg17) != 0) && (func_15146078(&sp134, &sp170, &sp17C) != 0)) {
            sp160 = arg14;
            sp18C = 0.0f;
            sp188 = 0.0f;
            sp190 = 70.0f * arg7;
            var_v0_3 = 0;
            (*(f32 *)((char *)&(sp194) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
            (*(s32 *)((char *)&(sp194) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
            (*(s32 *)((char *)&(sp194) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
            sp1A0 = sp134 * 70.0f;
            sp1A4 = sp138 * 70.0f;
            sp1A8 = sp13C * 70.0f;
            sp168 = arg6;
            if (sp100 > 150.0f) {
                var_v0_3 = 1;
            }
            sp16C |= var_v0_3;
            sp80 = 1.0f;
            sp84 = 1.0f;
            sp8C = D_800A1BC0;
            sp88 = D_800A1BC0;
            func_15145974(0, D_800A1BC0, &sp134, &sp94, &sp90);
            sp9C = 1.0f;
            spA0 = 1.0f;
            spA4 = 1.0f;
            sp98 = 0.0f;
            (*(s32 *)((char *)&(spA8) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x0));
            (*(s32 *)((char *)&(spA8) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
            (*(s32 *)((char *)&(spA8) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
            spB4 = sp134 * arg6;
            spB8 = sp138 * arg6;
            spBC = sp13C * arg6;
            (*(s32 *)((char *)&(spC0) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
            (*(s32 *)((char *)&(spC0) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
            (*(s32 *)((char *)&(spC0) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
            spD0 = 0x120;
            spD4 = 0x12C;
            spD6 = 0x2F;
            spD8 = 0;
            spDC = 0;
            spE0 = 0xFF;
            spE1 = 0x13;
            spE2 = 0;
            spE3 = 0;
            spE4 = 0;
            spE5 = 0;
            spE6 = 0;
            spE7 = 0;
            spE8 = 0;
            spEA = 0;
            spCC = 0.0f;
            spEC = arg9;
            spF2 = 1;
            spF4 = 0xFF;
            spF0 = (*(s32 *)((char *)(arg9) + 0x3B));
            if (arg16 != 0) {
                spF8 = func_10010F88(arg16, 0x4650, -0x1F4, 0, -1, (s32) spA8, (s32) spAC, (s32) spB0, 0x3E8, 0x7D0);
            } else {
                spF8 = 0;
            }
            temp_v0 = func_1513264C(&sp80, NULL, 0, 0, 0xB4, (s32) arg18, arg19);
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0x170, &spFC, 0xB4);
            }
        }
    }
}

s8 func_150F78B4(void *arg0) {
    s8 sp1AF;
    void * sp154;
    void * sp13C;
    s32 sp134;
    s32 sp128;
    s8 sp124;
    s32 sp120;
    s8 sp11F;
    s8 sp11E;
    s8 sp11D;
    s8 sp11C;
    s32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    void * sp100;
    void * spF4;
    f32 spF0;
    f32 spEC;
    s8 spEB;
    s8 spEA;
    s8 spE9;
    s8 spE8;
    s32 spE4;
    s32 spE0;
    s16 spDC;
    s16 spDA;
    s8 spD9;
    s8 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    void * spB8;
    void *spAC;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 var_f20;
    f32 var_f24;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    u8 temp_v1;
    void *temp_s5;
    void *var_s0;

    f32 sp18D;
    sp1AF = 1;
    temp_s2 = (*(s32 *)((char *)(arg0) + 0x7C));
    var_s0 = (char *)(arg0) + 0x170;
    if ((*(s32 *)((char *)(arg0) + 0x1D8)) < D_800BE9A4) {
        var_s0 = (char *)(arg0) + 0x170;
        var_f24 = (*(s32 *)((char *)(var_s0) + 0x68));
    } else {
        var_f24 = D_800BE9A4;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x88));
    if (temp_v0 != 0) {
        func_1000F9D4(temp_v0 & 0xFFFF, (s16) (s32) (*(s16 *)((char *)(arg0) + 0x38)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x3C)), (s16) (s32) (*(s16 *)((char *)(arg0) + 0x40)));
    }
    temp_v1 = (*(s32 *)((char *)(var_s0) + 0x70));
    temp_f26 = (*(s32 *)((char *)(var_s0) + 0x6C)) * var_f24;
    if (temp_v1 & 2) {
        func_15081690(temp_s2, (*(s32 *)((char *)(arg0) + 0x38)), (*(s32 *)((char *)(arg0) + 0x3C)), (*(s32 *)((char *)(arg0) + 0x40)), (*(s32 *)((char *)(var_s0) + 0x38)), (*(s32 *)((char *)(var_s0) + 0x3C)), (*(s32 *)((char *)(var_s0) + 0x40)), &sp134, temp_f26, 1, 0, (temp_v1 & 4) == 0, (s32) (*(s32 *)((char *)(var_s0) + 0xB0)), 0, 0);
        if ((s32) sp18D >= 2) {
            func_151D4DAC(sp134, temp_s2, &sp13C, &sp154, &sp134, 0x1A, (char *)(var_s0) + 0x38, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if ((*(s32 *)((char *)(var_s0) + 0x70)) & 1) {
                func_150F7F8C(&sp13C, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
            }
            sp1AF = 0;
        }
    }
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x44)) * var_f24));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x48)) * var_f24));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * var_f24));
    if (sp1AF == 1) {
        (*(f32 *)((char *)(var_s0) + 0x68)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x68)) - D_800BE9A4);
        if ((*(s32 *)((char *)(var_s0) + 0x68)) <= 0.0f) {
            sp1AF = 0;
            if ((*(s32 *)((char *)(var_s0) + 0x70)) & 1) {
                func_150F7F8C((char *)(arg0) + 0x38, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
            }
        }
    }
    (*(f32 *)((char *)(var_s0) + 0x8C)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x8C)) + temp_f26);
    (*(f32 *)((char *)(var_s0) + 0x90)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x90)) + var_f24);
    var_f20 = (*(s32 *)((char *)(var_s0) + 0x8C)) * D_800A1BC4;
    if (var_f20 > 1.0f) {
        (*(s32 *)((char *)&(spAC) + 0x0)) = (*(s32 *)((char *)(var_s0) + 0x74));
        (*(s32 *)((char *)&(spAC) + 0x4)) = (s32) (*(s32 *)((char *)(var_s0) + 0x78));
        (*(s32 *)((char *)&(spAC) + 0x8)) = (s32) (*(s32 *)((char *)(var_s0) + 0x7C));
        (*(s32 *)((char *)&(spB8) + 0x0)) = (s32) (*(s32 *)((char *)(var_s0) + 0x80));
        temp_s5 = (char *)(var_s0) + 0x98;
        (*(s32 *)((char *)&(spB8) + 0x4)) = (s32) (*(s32 *)((char *)(var_s0) + 0x84));
        (*(s32 *)((char *)&(spB8) + 0x8)) = (s32) (*(s32 *)((char *)(var_s0) + 0x88));
        spD0 = D_800A1BC8;
        spD4 = D_800A1BC8;
        spD8 = 0x7A;
        spD9 = 0;
        spDA = 0x4404;
        spDC = 0xA;
        spE0 = 0;
        spE4 = 0;
        spE8 = 0xFF;
        spE9 = 0xFF;
        spEA = 0xFF;
        spEB = 0xFF;
        spEC = 0.0f;
        spF0 = 0.0f;
        spCC = D_800A1BCC;
        (*(s32 *)((char *)&(sp100) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp100) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp100) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        temp_f28 = D_800A1BD0;
        sp10C = 1.0f;
        sp110 = 1.0f;
        sp114 = 1.0f;
        sp118 = 0xCC0008;
        sp11D = 0xFF;
        sp11E = 0;
        sp11F = 6;
        sp120 = 0;
        sp124 = 0xFF;
        sp128 = 0;
        temp_f24 = D_800A1BD4;
        do {
            spC8 = temp_f24;
            spC4 = 27.0f - (*(s32 *)((char *)(var_s0) + 0x90));
            (*(f32 *)((char *)&(spF4) + 0x0)) = (f32) (*(f32 *)((char *)(var_s0) + 0x98));
            (*(s32 *)((char *)&(spF4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s5) + 0x4));
            (*(s32 *)((char *)&(spF4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s5) + 0x8));
            sp11C = (s8) (u32) (spC4 * temp_f28);
            temp_v0_2 = func_1513D2F0(&spD8, &D_800A4AA0, 0x24, 0, 0, 0x21, 0, 0, 0, 0x2C, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0_2 != 0) {
                memcpy(temp_v0_2 + 0x110, &spAC, 0x2C);
            }
            (*(f32 *)((char *)(var_s0) + 0x8C)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x8C)) - 70.0f);
            (*(f32 *)((char *)(var_s0) + 0x90)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x90)) - (*(f32 *)((char *)(var_s0) + 0x94)));
            (*(f32 *)((char *)(var_s0) + 0x98)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x98)) + (*(f32 *)((char *)(var_s0) + 0xA4)));
            (*(f32 *)((char *)(var_s0) + 0x9C)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x9C)) + (*(f32 *)((char *)(var_s0) + 0xA8)));
            var_f20 -= 1.0f;
            (*(f32 *)((char *)(var_s0) + 0xA0)) = (f32) ((*(f32 *)((char *)(var_s0) + 0xA0)) + (*(f32 *)((char *)(var_s0) + 0xAC)));
        } while (var_f20 > 1.0f);
    }
    return sp1AF;
}

s32 func_150F7E20(void *arg0) {
    void *sp1C;
    f32 temp_f2;
    s32 var_v0;
    void *temp_v0;

    (*(s8 *)((char *)(arg0) + 0x5C)) = (s8) (u32) ((*(s8 *)((char *)(arg0) + 0x128)) * D_800A1BD8);
    temp_v0 = (char *)(arg0) + 0x110;
    temp_f2 = (sinf((*(s32 *)((char *)(arg0) + 0x12C))) * (*(s32 *)((char *)(temp_v0) + 0x28))) + (*(s32 *)((char *)(temp_v0) + 0x24));
    (*(s32 *)((char *)(arg0) + 0x30)) = temp_f2;
    (*(s32 *)((char *)(arg0) + 0x2C)) = temp_f2;
    sp1C = temp_v0;
    (*(s32 *)((char *)(temp_v0) + 0x1C)) = func_15144B68((*(s32 *)((char *)(temp_v0) + 0x1C)) + ((*(s32 *)((char *)(temp_v0) + 0x20)) * D_800BE9A4));
    (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) - D_800BE9A4);
    var_v0 = 1;
    if ((*(s32 *)((char *)(temp_v0) + 0x18)) < 0.0f) {
        var_v0 = 0;
    }
    return var_v0;
}

void func_150F7F58(s32 arg0, s32 arg1) {
    func_15140410(arg0 + 0x110, arg0 + 0x11C, arg1);
}

void func_150F7F8C(void * *arg0, s32 arg1, s32 arg2) {
    f32 sp28;
    f32 temp_f12;
    f32 temp_f14;

    sp28 = random_float();
    temp_f12 = random_float() * 70.0f;
    temp_f14 = sp28 * 3.0f;
    func_151541B8(temp_f12, temp_f14, arg0, temp_f14 + 9.0f, 0x3F030C35, temp_f12 + 70.0f, 0.0f, (s32) arg1, arg2);
    func_151D3F14(arg0, arg1, arg2);
}

void func_150F802C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    void *spB4;
    s32 spB0;
    s16 spAC;
    s16 spAA;
    s8 spA8;
    s32 spA4;
    s8 spA2;
    s8 spA0;
    s8 sp9F;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s32 sp94;
    s8 sp90;
    s16 sp8E;
    s16 sp8C;
    s32 sp88;
    f32 sp84;
    void * sp78;
    f32 sp74;
    f32 sp70;
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
    f32 *sp44;
    f32 *sp40;
    f32 sp3C;
    f32 sp38;
    s32 temp_v0;

    spB4 = arg0;
    spB8 = (*(s32 *)((char *)(arg0) + 0x0));
    spBC = (*(s32 *)((char *)(arg0) + 0x4));
    spC4 = 0.0f;
    sp38 = 1.0f;
    sp3C = 1.0f;
    sp40 = D_800A1BDC;
    sp44 = D_800A1BDC;
    spC0 = (*(s32 *)((char *)(arg0) + 0x8));
    sp48 = (*(s32 *)((char *)(arg0) + 0xC));
    sp4C = (*(s32 *)((char *)(arg0) + 0x10));
    sp54 = 1.0f;
    sp58 = 1.0f;
    sp5C = 1.0f;
    sp50 = (*(s32 *)((char *)(arg0) + 0x14));
    sp60 = (*(s32 *)((char *)(arg0) + 0x0));
    sp64 = (*(s32 *)((char *)(arg0) + 0x4));
    sp6C = 0.0f;
    sp70 = 0.0f;
    sp74 = 0.0f;
    sp68 = (*(s32 *)((char *)(arg0) + 0x8));
    (*(s32 *)((char *)&(sp78) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp78) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp78) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp84 = 0.0f;
    sp88 = 0x980;
    sp8E = 0x2F;
    sp90 = 0;
    sp94 = 0;
    sp98 = 0xFF;
    sp99 = 0x14;
    sp9A = 0;
    sp9B = 0;
    sp9C = 0;
    sp9D = 0;
    sp9E = 0;
    sp9F = 0;
    spA0 = 0;
    spA2 = 0;
    spA4 = 0;
    spA8 = 0;
    spAA = 1;
    spAC = 0xFF;
    spB0 = 0;
    sp8C = arg1;
    temp_v0 = func_1513264C(D_800A1BDC, &sp38, 3, 0xFF, 0, 0xB4, (s32) arg2, arg3);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x170, &spB4, 0x14);
    }
}

s32 func_150F81BC(void *arg0) {
    f32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    void * sp138;
    f32 sp12C;
    f32 sp124;
    f32 sp120;
    s32 sp114;
    s8 sp110;
    s32 sp10C;
    s8 sp10B;
    s8 sp10A;
    s8 sp109;
    s8 sp108;
    s32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    void * spEC;
    void * spE0;
    f32 spDC;
    f32 spD8;
    s8 spD7;
    s8 spD6;
    s8 spD5;
    s8 spD4;
    s32 spD0;
    s32 spCC;
    s16 spC8;
    s16 spC6;
    s8 spC5;
    s8 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    void * spA4;
    void *sp98;
    f32 sp94;
    f32 temp_f24;
    f32 temp_f28;
    f32 var_f20;
    s32 temp_v0_2;
    void *temp_s0;
    void *temp_s5;
    void *temp_v0;

    f32 sp130;
    f32 sp134;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x170));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x0));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x4));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x8));
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) (*(f32 *)((char *)(temp_v0) + 0xC));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x10));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x14));
    sp140 = (*(s32 *)((char *)(arg0) + 0x38)) - (*(s32 *)((char *)(arg0) + 0x174));
    sp144 = (*(s32 *)((char *)(arg0) + 0x3C)) - (*(s32 *)((char *)(arg0) + 0x178));
    sp148 = (*(s32 *)((char *)(arg0) + 0x40)) - (*(s32 *)((char *)(arg0) + 0x17C));
    (*(f32 *)((char *)(arg0) + 0x180)) = (f32) ((*(f32 *)((char *)(arg0) + 0x180)) + D_800BE9A4);
    if (func_15145128(&sp140, &sp12C, &sp13C, &sp138) != 0) {
        temp_s0 = (char *)(arg0) + 0x170;
        var_f20 = sp13C * D_800A1BE0;
        sp120 = sp130 * 20.0f;
        sp124 = sp134 * 20.0f;
        if (var_f20 > 1.0f) {
            sp94 = (*(s32 *)((char *)(temp_s0) + 0x10)) / var_f20;
            func_15146078(&sp140, &sp98, &spA4);
            spC4 = 0x7A;
            spC5 = 0;
            spC6 = 0x4404;
            spC8 = 0xA;
            spCC = 0;
            spD0 = 0;
            spD4 = 0xFF;
            spD5 = 0xFF;
            spD6 = 0xFF;
            spD7 = 0xFF;
            spB8 = D_800A1BE4;
            spBC = D_800A1BE8;
            spDC = 0.0f;
            spD8 = 0.0f;
            spC0 = D_800A1BEC;
            (*(s32 *)((char *)&(spEC) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
            (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
            (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
            temp_f28 = D_800A1BF0;
            spF8 = 1.0f;
            spFC = 1.0f;
            sp100 = 1.0f;
            sp104 = 0xCC0008;
            sp109 = 0xFF;
            sp10A = 0;
            sp10B = 6;
            sp10C = 0;
            sp110 = 0xFF;
            sp114 = 0;
            temp_f24 = D_800A1BF4;
            temp_s5 = (char *)(temp_s0) + 4;
            do {
                spB4 = temp_f24;
                spB0 = 27.0f - (*(s32 *)((char *)(temp_s0) + 0x10));
                (*(f32 *)((char *)&(spE0) + 0x0)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x4));
                (*(s32 *)((char *)&(spE0) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s5) + 0x4));
                (*(s32 *)((char *)&(spE0) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s5) + 0x8));
                sp108 = (s8) (u32) (spB0 * temp_f28);
                temp_v0_2 = func_1513D2F0(&spC4, &D_800A4AA0, 0x24, 0, 0, 0x21, 0, 0, 0, 0x2C, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                if (temp_v0_2 != 0) {
                    memcpy(temp_v0_2 + 0x110, &sp98, 0x2C);
                }
                var_f20 -= 1.0f;
                (*(f32 *)((char *)(temp_s0) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x4)) + (sp12C * 20.0f));
                (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) + sp120);
                (*(f32 *)((char *)(temp_s0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0xC)) + sp124);
                (*(f32 *)((char *)(temp_s0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x10)) - sp94);
            } while (var_f20 > 1.0f);
        }
    }
    return 1;
}

void func_150F85A0(s32 arg0, void *arg1, void * arg2) {
    f32 spCC;
    f32 spC8;
    f32 spC4;
    s8 spC0;
    s16 spBE;
    s8 spBD;
    s8 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    f32 spA8;
    s8 spA6;
    s16 spA4;
    s16 spA2;
    s16 spA0;
    s32 sp9C;
    s32 sp98;
    s8 sp94;
    s8 sp93;
    s8 sp92;
    s8 sp91;
    s8 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s8 sp8B;
    s8 sp8A;
    s8 sp89;
    s8 sp88;
    s8 sp87;
    s8 sp86;
    s8 sp85;
    s8 sp84;
    s8 sp83;
    s8 sp82;
    s8 sp81;
    s8 sp80;
    s8 sp7F;
    s8 sp7E;
    s16 sp7C;
    s16 sp7A;
    s16 sp78;
    s32 sp74;
    s32 sp70;
    s16 sp6E;
    s16 sp6C;
    s16 sp6A;
    s16 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    void * sp44;
    s32 sp40;
    s32 sp3C;

    spC4 = (*(s32 *)((char *)(arg1) + 0x14));
    spC8 = (*(s32 *)((char *)(arg1) + 0x18)) + 50.0f;
    spCC = (*(s32 *)((char *)(arg1) + 0x1C));
    spBC = 3;
    spBD = -1;
    spBE = (random_u32() % 9U) + 5;
    spC0 = 0;
    spB0 = (s32) spC4;
    spB4 = (s32) spC8;
    spB8 = (s32) spCC;
    func_151602C0(&spBC, &spB0, (random_u32() % 31U) + 0x5A, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0xFF, 1);
    sp3C = 8;
    sp40 = 0xC;
    (*(f32 *)((char *)&(sp44) + 0x0)) = (f32) (*(f32 *)((char *)&(spC4) + 0x0));
    (*(s32 *)((char *)&(sp44) + 0x4)) = (s32) (*(s32 *)((char *)&(spC4) + 0x4));
    (*(s32 *)((char *)&(sp44) + 0x8)) = (s32) (*(s32 *)((char *)&(spC4) + 0x8));
    sp6E = 0x50;
    sp70 = 3;
    sp6C = -0x40;
    sp74 = 1;
    sp78 = 0x14;
    sp7A = 0xF;
    sp7C = 1;
    sp7E = 4;
    sp7F = 2;
    sp82 = 0xFF;
    sp83 = 0xFF;
    sp50 = D_800A1C60;
    sp6A = 0xFF;
    sp81 = 0xFF;
    sp84 = 0xFF;
    sp89 = 0xFF;
    sp8A = 0xFF;
    sp8B = 0xFF;
    sp8C = 0xFF;
    sp91 = 0xFF;
    sp68 = 0;
    sp80 = 3;
    sp85 = 0;
    sp86 = 0;
    sp87 = 0;
    sp88 = 0;
    sp8D = 0;
    sp8E = 0;
    sp8F = 0;
    sp90 = 0;
    sp92 = 0;
    sp93 = 3;
    sp94 = 0x24;
    sp98 = 0x200005;
    sp9C = 0x60600;
    spA0 = 8;
    spA2 = 0x1F;
    spA4 = 1;
    spA6 = 0;
    spAC = -1;
    spAD = 0;
    spAE = -1;
    spAF = -1;
    sp54 = D_800A1C64;
    sp58 = D_800A1C68;
    sp5C = D_800A1C6C;
    sp60 = 15.0f;
    sp64 = 30.0f;
    spA8 = 1.0f;
    func_15152B38(&sp3C, 0xFF, 1);
}

void func_150F884C(s32 arg0, s32 arg1) {
    s32 sp18;

    sp18 = arg1;
    func_151494E0(&sp18, 0x3F);
}

void func_150F887C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_at;
    s32 temp_t2;
    s32 temp_t6;
    s32 var_v0;
    void *temp_a0;
    void *temp_t1;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x42) {
        temp_a0 = (char *)(arg0) + 0x28;
        var_v0 = 0;
        if ((*(s32 *)((char *)(arg1) + 0x4)) == (*(s32 *)((char *)(temp_a0) + 0x4))) {
            do {
                temp_t1 = (*(s32 *)((char *)(((char *)(temp_a0) + (var_v0 * 4))) + 0xC));
                temp_t2 = (var_v0 + 1) & 0xFF;
                temp_at = temp_t2 < 7;
                var_v0 = temp_t2;
                (*(s32 *)((char *)(temp_t1) + 0x6E)) = 1;
            } while (temp_at != 0);
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_a0) + 0x28))) + 0x6E)) = 0;
            (*(s32 *)((char *)(temp_a0) + 0x8)) = 7;
        }
    } else if ((temp_t6 == 0x3F) && ((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(arg0) + 0x28)))) {
        func_150F892C(arg0, temp_t6, arg0);
    }
}

void func_150F892C(void *arg0) {
    s8 sp1F6;
    s8 sp1F5;
    s8 sp1F4;
    s16 sp1F2;
    s8 sp1F0;
    s8 sp1EE;
    s8 sp1ED;
    s8 sp1EC;
    s16 sp1EA;
    s8 sp1E8;
    f32 sp1E0;
    f32 sp1DC;
    f32 sp1D8;
    s32 sp1D0;
    s16 sp1CC;
    s16 sp1CA;
    s8 sp1C8;
    s32 sp1C4;
    s8 sp1C2;
    s8 sp1C0;
    s8 sp1BF;
    s8 sp1BE;
    s8 sp1BD;
    s8 sp1BC;
    s8 sp1BB;
    s8 sp1BA;
    s8 sp1B9;
    s8 sp1B8;
    s32 sp1B4;
    s8 sp1B0;
    s16 sp1AE;
    s16 sp1AC;
    s32 sp1A8;
    f32 sp1A4;
    f32 sp1A0;
    f32 sp19C;
    f32 sp198;
    void * sp18C;
    f32 sp188;
    f32 sp184;
    f32 sp180;
    f32 sp17C;
    f32 sp178;
    f32 sp174;
    f32 sp170;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp158;
    f32 sp14C;
    s16 sp148;
    s8 sp146;
    s8 sp145;
    s8 sp144;
    s8 sp143;
    s8 sp142;
    s8 sp141;
    s8 sp140;
    s32 sp13C;
    s32 sp138;
    f32 sp134;
    void * sp128;
    void * sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    s16 sp102;
    s16 sp100;
    s16 spFE;
    s8 spFD;
    s8 spFB;
    s8 spFA;
    s8 spF9;
    s8 spF8;
    s8 spF7;
    s8 spF6;
    s8 spF5;
    s8 spF4;
    s32 spF0;
    s32 spEC;
    s16 spEA;
    s16 spE8;
    s32 spE4;
    s32 spE0;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    void * spBC;
    f32 spA0;
    s32 sp9C;
    void * *var_v0;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    s16 temp_lo;
    s16 temp_lo_2;
    s16 temp_lo_3;
    s16 var_s2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2_2;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_s0_3;
    u32 temp_s1;
    u32 temp_s1_2;
    u32 temp_s1_3;
    u32 temp_s1_4;
    u8 temp_t1;
    void *temp_fp;
    void *temp_v1;
    void *temp_v1_2;

    var_s0 = 0;
    var_v0 = &gObjects;
    var_v1 = 0;
    do {
        var_v1 += 1;
        if (((*(s32 *)((char *)(var_v0) + 0x4)) == 0x98) && ((*(s32 *)((char *)(var_v0) + 0x84)) == 0x1EB) && ((*(s32 *)((char *)(var_v0) + 0x222)) == 0)) {
            var_s0 += 1;
        }
        var_v0 = (char *)(var_v0) + 0x32C;
    } while (var_v1 != 0x19);
    temp_fp = (char *)(arg0) + 0x28;
    if (var_s0 != 0) {
        if ((s32) (*(s32 *)((char *)(temp_fp) + 0x8)) < 7) {
            (*(s16 *)((char *)(temp_fp) + 0x6)) = (s16) ((*(s16 *)((char *)(temp_fp) + 0x6)) - (D_800BE9E4 * var_s0));
            if ((*(s32 *)((char *)(temp_fp) + 0x6)) < 0) {
                temp_v1 = (*(s32 *)((char *)(((char *)(temp_fp) + ((*(s32 *)((char *)(temp_fp) + 0x8)) * 4))) + 0xC));
                func_10010F88((random_u32(0x98, 0x1EB, 0x19) % 3U) + 0x2B3, 0x5DC0, 0, 0, -1, (s32) (*(s32 *)((char *)(temp_v1) + 0x10)), (s32) (*(s32 *)((char *)(temp_v1) + 0x12)), (s32) (*(s32 *)((char *)(temp_v1) + 0x14)), 0x1F4, 0x3E8);
                (*(s32 *)((char *)((*(s32 *)((char *)(((char *)(temp_fp) + ((*(s32 *)((char *)(temp_fp) + 0x8)) * 4))) + 0xC))) + 0x6E)) = 1;
                temp_t1 = (*(s32 *)((char *)(temp_fp) + 0x8)) + 1;
                (*(s32 *)((char *)(temp_fp) + 0x8)) = temp_t1;
                (*(s32 *)((char *)((*(s32 *)((char *)(((char *)(temp_fp) + ((temp_t1 & 0xFF) * 4))) + 0xC))) + 0x6E)) = 0;
                func_15164F0C(7, 0, 0, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                sp1F0 = 1;
                sp1F2 = 0x19;
                sp1F5 = 1;
                sp1F4 = 8;
                sp1F6 = -1;
                func_151D8868(&sp1F0, 0, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
                (*(s16 *)((char *)(temp_fp) + 0x6)) = (s16) ((random_u32() % 31U) + 0x46);
            }
        }
        (*(s16 *)((char *)(temp_fp) + 0x3C)) = (s16) ((*(s16 *)((char *)(temp_fp) + 0x3C)) - (D_800BE9E4 * var_s0));
        if ((*(s32 *)((char *)(temp_fp) + 0x3C)) < 0) {
            sp1E8 = 1;
            sp1EA = (random_u32() % 21U) + 0xA;
            sp1ED = 1;
            sp1EC = (random_u32() & 3) + 1;
            sp1EE = -1;
            func_151D8868(&sp1E8, 0, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
            temp_v1_2 = (*(s32 *)((char *)(((char *)(temp_fp) + ((*(s32 *)((char *)(temp_fp) + 0x8)) * 4))) + 0xC));
            func_10010F88((random_u32() & 3) + 0x6D6, 0x5DC0, 0, 0, -1, (s32) (*(s32 *)((char *)(temp_v1_2) + 0x10)), (s32) (*(s32 *)((char *)(temp_v1_2) + 0x12)), (s32) (*(s32 *)((char *)(temp_v1_2) + 0x14)), 0x1F4, 0x3E8);
            (*(s16 *)((char *)(temp_fp) + 0x3C)) = (s16) ((random_u32() % 151U) + 0x96);
        }
        temp_f0 = random_float();
        temp_f20 = D_800A1C70;
        spA0 = (f32) var_s0;
        (*(f32 *)((char *)(temp_fp) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_fp) + 0x38)) + ((temp_f20 + (temp_f0 * D_800A1C74)) * (D_800BE9A4 * spA0)));
        if ((*(s32 *)((char *)(temp_fp) + 0x38)) > 1.0f) {
            var_v0_2 = 1;
            if ((*(s32 *)((char *)(temp_fp) + 0x5)) & 1) {
                var_v0_2 = -1;
            }
            do {
                func_15143874((s16) (((random_u32() % 126U) - 0xDC) * var_v0_2), (*(s16 *)((char *)(temp_fp) + 0x48)), &sp1D8, &sp1E0);
                sp1DC = (random_float() * 150.0f) + 30.0f;
                sp1D8 += (*(s32 *)((char *)(temp_fp) + 0x40));
                sp1E0 += (*(s32 *)((char *)(temp_fp) + 0x44));
                func_151C329C(&sp1D8, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_fp) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_fp) + 0x38)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_fp) + 0x38)) > 1.0f);
        }
        (*(f32 *)((char *)(temp_fp) + 0x34)) = (f32) ((*(f32 *)((char *)(temp_fp) + 0x34)) + ((temp_f20 + (random_float() * D_800A1C78)) * (D_800BE9A4 * spA0)));
        if ((*(s32 *)((char *)(temp_fp) + 0x34)) > 1.0f) {
            if ((*(s32 *)((char *)(temp_fp) + 0x5)) & 1) {
                var_v0_3 = -1;
            } else {
                var_v0_3 = 1;
            }
            temp_f28 = D_800A1C7C;
            temp_f26 = D_800A1C80;
            temp_f24 = D_800A1C84;
            temp_f22 = D_800A1C88;
            sp158 = 1.0f;
            sp15C = 1.0f;
            sp174 = 1.0f;
            sp178 = 1.0f;
            sp17C = 1.0f;
            sp1A8 = 0x39E8;
            sp1AE = 0x86;
            sp1B0 = 0;
            sp1B4 = 0;
            sp1B8 = 0xFF;
            sp1B9 = 8;
            sp1BA = 0;
            sp1BB = 0;
            sp1BC = 0;
            sp1BD = 0;
            sp1BE = 0;
            sp1BF = 0;
            sp1C0 = 0;
            sp1C2 = 2;
            sp1C4 = 0;
            sp1C8 = 0;
            sp1CA = 0xC;
            sp1CC = 0x15;
            sp1D0 = 0;
            sp19C = 0.0f;
            do {
                var_s2 = (random_u32() % 7U) + 5;
                temp_lo = ((random_u32() % 126U) - 0xDC) * var_v0_3;
                func_15143874(temp_lo, (*(s32 *)((char *)(temp_fp) + 0x48)), &sp180, &sp188);
                sp184 = (random_float() * 150.0f) + 30.0f;
                sp180 += (*(s32 *)((char *)(temp_fp) + 0x40));
                sp188 += (*(s32 *)((char *)(temp_fp) + 0x44));
                if (var_s2 > 0) {
                    do {
                        sp1AC = (random_u32() & 0xF) + 0x23;
                        temp_f2 = (random_float() * temp_f26) + temp_f28;
                        sp160 = temp_f2;
                        sp164 = temp_f2;
                        sp168 = random_float() * 360.0f;
                        sp16C = random_float() * 360.0f;
                        sp170 = random_float() * 360.0f;
                        temp_s1 = random_u32();
                        temp_s0 = random_u32();
                        func_15143794((s16) ((temp_s1 & 0xF) + (temp_lo - 7)), (s16) ((temp_s0 % 37U) - 0x3F), (random_float() * 8.0f) + 10.0f, &sp18C);
                        sp198 = (random_float() * temp_f22) + temp_f24;
                        sp1A0 = (random_float() * temp_f22) + temp_f24;
                        sp1A4 = (random_float() * D_800A1C8C) + D_800A1C90;
                        func_1513264C(&sp158, 3, 1, 0, 0, 0xFF, 1);
                        var_s2 -= 1;
                    } while (var_s2 > 0);
                }
                (*(f32 *)((char *)(temp_fp) + 0x34)) = (f32) ((*(f32 *)((char *)(temp_fp) + 0x34)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_fp) + 0x34)) > 1.0f);
        }
        (*(f32 *)((char *)(temp_fp) + 0x30)) = (f32) ((*(f32 *)((char *)(temp_fp) + 0x30)) + ((D_800A1C94 + (random_float() * D_800A1C98)) * (D_800BE9A4 * spA0)));
        if ((*(s32 *)((char *)(temp_fp) + 0x30)) > 1.0f) {
            var_v0_4 = 1;
            if ((*(s32 *)((char *)(temp_fp) + 0x5)) & 1) {
                var_v0_4 = -1;
            }
            spFD = 0x86;
            spE0 = 0x200005;
            spE8 = 0x4404;
            spE4 = 0x9F0600;
            spEC = 0;
            spF0 = 0;
            spF4 = 0xFF;
            spF5 = 0xFF;
            spF6 = 0xFF;
            spF7 = 0xFF;
            spF8 = 0xFF;
            spF9 = 0xFF;
            spFA = 0xFF;
            (*(s32 *)((char *)&(sp11C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
            (*(s32 *)((char *)&(sp11C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
            (*(s32 *)((char *)&(sp11C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
            temp_f26_2 = D_800A1C9C;
            temp_f24_2 = D_800A1CA0;
            spFE = 8;
            sp100 = 0x1F;
            sp102 = 1;
            sp138 = 0x1C207;
            sp140 = 6;
            sp141 = 5;
            sp142 = -1;
            sp143 = -1;
            sp144 = -1;
            sp145 = 0;
            sp13C = 0;
            sp146 = 0xFF;
            sp148 = 0;
            sp14C = 0.0f;
            sp9C = var_v0_4;
            sp104 = 1.0f;
            do {
                var_s2_2 = (random_u32() % 13U) + 7;
                temp_lo_2 = ((random_u32() % 126U) - 0xDC) * sp9C;
                func_15143874(temp_lo_2, (*(s32 *)((char *)(temp_fp) + 0x48)), &sp110, &sp118);
                sp114 = (random_float() * 150.0f) + 30.0f;
                sp110 += (*(s32 *)((char *)(temp_fp) + 0x40));
                sp118 += (*(s32 *)((char *)(temp_fp) + 0x44));
                if (var_s2_2 > 0) {
                    do {
                        spEA = (random_u32() % 21U) + 0x1E;
                        spFB = (random_u32() % 156U) + 0x64;
                        temp_f16 = random_float() * 110.0f;
                        sp138 &= ~0xC0;
                        temp_f2_2 = temp_f16 + 70.0f;
                        sp108 = temp_f2_2;
                        sp10C = temp_f2_2;
                        var_s1 = 0;
                        if (random_u32() & 1) {
                            var_s1 = 0x80;
                        }
                        if (random_u32() & 1) {
                            var_s0_2 = 0x40;
                        } else {
                            var_s0_2 = 0;
                        }
                        sp138 |= var_s0_2 | var_s1;
                        temp_s1_2 = random_u32();
                        temp_s0_2 = random_u32();
                        func_15143794((s16) ((temp_s1_2 % 9U) + (temp_lo_2 - 4)), (s16) ((temp_s0_2 & 7) - 0x10), (random_float() * 10.0f) + 6.0f, &sp128);
                        sp134 = (random_float() * temp_f24_2) + temp_f26_2;
                        func_15130280(&spE0, 1, 0, 0, 0xFF, 1);
                        var_s2_2 -= 1;
                    } while (var_s2_2 > 0);
                }
                (*(f32 *)((char *)(temp_fp) + 0x30)) = (f32) ((*(f32 *)((char *)(temp_fp) + 0x30)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_fp) + 0x30)) > 1.0f);
        }
        (*(f32 *)((char *)(temp_fp) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_fp) + 0x2C)) + ((D_800A1CA4 + (random_float() * D_800A1CA8)) * (D_800BE9A4 * spA0)));
        if ((*(s32 *)((char *)(temp_fp) + 0x2C)) > 1.0f) {
            var_v0_5 = 1;
            if ((*(s32 *)((char *)(temp_fp) + 0x5)) & 1) {
                var_v0_5 = -1;
            }
            temp_f30 = D_800A1CAC;
            do {
                temp_lo_3 = ((random_u32() % 126U) - 0xDC) * var_v0_5;
                func_15143874(temp_lo_3, (*(s32 *)((char *)(temp_fp) + 0x48)), &spC8, &spD0);
                spCC = (random_float() * 150.0f) + 30.0f;
                spC8 += (*(s32 *)((char *)(temp_fp) + 0x40));
                spD0 += (*(s32 *)((char *)(temp_fp) + 0x44));
                temp_s1_3 = random_u32();
                temp_s0_3 = random_u32();
                func_15143794((s16) (((temp_s1_3 % 9U) + temp_lo_3) - 4), (s16) ((temp_s0_3 & 7) - 0x10), (random_float() * 6.0f) + 4.0f, &spBC);
                temp_f22_2 = random_float();
                temp_f20_2 = random_float();
                temp_s1_4 = random_u32();
                func_151DB5D0(8, &spC8, &spBC, (temp_f22_2 * 200.0f) + 200.0f, temp_f30, D_800A1CB0, (temp_f20_2 * D_800A1CB4) + D_800A1CB8, (temp_s1_4 % 21U) + 0x23, (random_u32() % 121U) + 0x64, 0x32, 5, 0, 0xFF, 1);
                (*(f32 *)((char *)(temp_fp) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_fp) + 0x2C)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_fp) + 0x2C)) > 1.0f);
        }
    }
}

void func_150F9720(s32 arg0) {
    u8 sp24;
    s32 sp20;
    u8 *sp1C;
    s32 *sp18;
    s32 temp_a2;
    u8 *temp_v0;

    temp_a2 = arg0 & 0xFF;
    temp_v0 = (temp_a2 * 2) + &D_800A1C40;
    sp20 = 0;
    sp18 = &sp20;
    sp1C = temp_v0;
    sp24 = *temp_v0;
    func_151494E0(&sp20, 0x42);
    sp24 = (*(s32 *)((char *)(sp1C) + 0x1));
    func_151494E0(sp18, 0x42);
}

void func_150F9788(s32 arg0) {

}

void func_150F9794(s32 arg0) {
    func_150F9788(arg0);
    func_1514933C(arg0);
}

void func_150F97C0(s32 arg0) {
    func_150F9788(arg0);
    func_15149368(arg0);
}

void func_150F97EC(void *arg0, s32 arg1, s32 arg2) {
    void * sp64;
    f32 sp5C;
    f32 sp58;
    void * *sp54;
    void * *sp50;
    u32 sp48;
    u32 sp44;

    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        sp54 = &D_800A1C48;
        sp50 = &sp64;
        func_15145EA4(&sp54, &sp50, (*(s32 *)((char *)(arg0) + 0x1D4)) + (D_80088B50 << 6), 1);
        sp5C = (random_float() * 1.0f) + 2.0f;
        sp58 = (random_float() * 14.0f) + 28.0f;
        sp44 = random_u32();
        sp48 = random_u32();
        func_15102B38(arg0, D_80088B50, &D_800A1C48, &D_800A1C54, &sp58, (sp44 % 3U) + 4, (sp48 % 156U) + 0x64, (random_float() * 300.0f) + 400.0f, &sp64, 0xFF, 0, -1, (s32) arg1, arg2);
    }
}

void func_150F9950(void *arg0, s32 arg1, s32 arg2) {
    void * sp60;
    void * sp54;
    void * sp48;
    void * sp3C;
    void * sp30;
    void *sp2C;
    void *temp_v0;

    temp_v0 = func_150FF288(arg0);
    if (temp_v0 != NULL) {
        sp2C = temp_v0;
        if (func_150FF6E0(&sp60, &sp54, &sp48, &sp3C, &sp30, arg0, temp_v0) != 0) {
            func_151D3F14(&sp54, arg1, arg2);
            func_151D4408(&sp48, &sp3C, (*(s32 *)((char *)(arg0) + 0x1D4)) + ((*(s32 *)((char *)(sp2C) + 0x2)) << 6), arg0, 1.0f, (s32) arg1, arg2);
            func_150FF474(&sp54, &sp60, arg1, arg2);
        }
    }
}
