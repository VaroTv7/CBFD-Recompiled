/**
 * Auto-decompiled from asm/11C2B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1502EA98();       /* extern */
void * func_1505D024();                    /* extern */
void * func_15081690(); /* extern */
u32 random_u32();                          /* extern */
f32 random_float();                          /* extern */
void * func_15102B38(); /* extern */
s32 func_15130280();        /* extern */
s32 func_151407D0(); /* extern */
void * func_15143134();             /* extern */
void * func_15143794();                /* extern */
void * func_15143874();              /* extern */
s32 func_15145128();  /* extern */
void * func_15145EA4();           /* extern */
void * func_1515080C(); /* extern */
void * func_15152190(); /* extern */
void * func_15152B38();                /* extern */
void * func_151541B8(); /* extern */
void * func_1515C2F0();        /* extern */
s32 func_151602C0(); /* extern */
void * func_15160A58(); /* extern */
void * func_151617C4();                            /* extern */
void * func_151617E4();                            /* extern */
s32 func_151A7950();              /* extern */
s32 func_151C229C(); /* extern */
void * func_151C329C();                    /* extern */
void * func_151D3FF4();                   /* extern */
void * func_151D5334();     /* extern */
void * func_151D5514();                   /* extern */
void * memcpy();                       /* extern */
void *func_150EEF80();
s32 func_150EFEC8();
s32 func_150F0198();
void func_150F02A0();                     /* static */
void func_150F0318();                     /* static */
void func_150F0380();                     /* static */
void func_150F03E8();                     /* static */
void func_150F0A24();
extern s32 D_80088B00;
extern s8 (*D_8008FD00)(s8);
extern s32 D_800A15F0;
extern s32 D_800A1620;
extern s32 D_800A1638;
extern s32 D_800A163C;
extern s32 D_800A1640;
extern s32 D_800A1658;
extern s32 D_800A1670;
extern s32 D_800A1674;
extern s32 D_800A1680;
extern s32 D_800A168C;
extern s32 D_800A174C;
extern s32 D_800A180C;
extern u16 D_800A1810;
extern f32 D_800A1814;
extern f32 D_800A1818;
extern f32 D_800A181C;
extern f32 D_800A1820;
extern f32 D_800A1824;
extern f32 D_800A1828;
extern f32 D_800A182C;
extern f32 D_800A1830;
extern f32 D_800A1834;
extern f32 D_800A1838;
extern f32 D_800A183C;
extern f32 D_800A1840;
extern f32 D_800A1844;
extern f32 D_800A1848;
extern f32 D_800A184C;
extern f32 D_800A1850;
extern f32 D_800A1854;
extern f32 D_800A1858;
extern f32 D_800A185C;
extern f32 D_800A1860;
extern f32 D_800A1864;
extern f32 D_800A1868;
extern f32 D_800A186C;
extern f32 D_800A1870;
extern f32 D_800A1874;
extern f32 D_800A1878;
extern f32 D_800A187C;
extern f32 D_800A1880;
extern f32 D_800A1884;
extern f32 D_800A1888;
extern f32 D_800A188C;
extern f32 D_800A1890;
extern f32 D_800A1894;
extern f32 D_800A1898;
extern f32 D_800A189C;
extern f32 D_800A18A0;
extern f32 D_800A18A4;
extern f32 D_800A18A8;
extern f32 D_800A18AC;
extern f32 D_800A18B0;
extern f32 D_800A18B4;
extern s32 D_800A18C0;
extern s32 D_800A18CC;
extern s32 D_800A18D8;
extern s32 D_800A18E0;
extern f32 D_800A18E8;
extern f32 D_800A18EC;
extern f32 D_800A18F0;
extern f32 D_800A18F4;
extern f32 D_800A18F8;
extern f32 D_800A18FC;
extern f32 D_800A1900;
extern f32 D_800A1904;
extern f32 D_800A1908;
extern f32 D_800A190C;
extern f32 D_800A1910;
extern f32 D_800A1914;
extern f32 D_800A1918;
extern f32 D_800A191C;
extern s32 D_800CC354;
extern u8 D_800D98F0;

void func_150EEE00(void *arg0, s32 arg1) {
    f32 sp54;
    s8 sp50;
    s16 sp4E;
    s8 sp4D;
    s8 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    s32 temp_v1;
    u8 temp_t6;

    f32 sp58;
    f32 sp5C;
    temp_t6 = arg1 & 0xFF;
    if (!(*(&D_800A163C + temp_t6) & (*(s32 *)((char *)(arg0) + 0x94)))) {
        arg1 = temp_t6;
        func_150EEF80(temp_t6, 0xFFU, 1);
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x1D4));
        if (temp_v1 != 0) {
            func_15143134((arg1 * 0xC) + &D_800A15F0, &sp54, (*(&D_800A1638 + arg1) << 6) + temp_v1, arg1);
            sp4C = 3;
            sp4D = -1;
            sp4E = (random_u32() % 3U) + 4;
            sp50 = 0;
            sp40 = (s32) sp54;
            sp44 = (s32) sp58;
            sp48 = (s32) sp5C;
            func_151602C0(&sp4C, &sp40, 0xFFU, 0xFFU, 0xFF, 0xFF, 0xFF, 0, 0, 0xFF, 1);
            func_150F0A24(&sp54);
        }
    }
}

void func_150EEF40(void *arg0, s32 arg1) {
    s8 sp1D;
    u8 sp1C;
    void *sp18;
    s8 temp_a3;

    temp_a3 = arg1 & 0xFF;
    sp18 = arg0;
    sp1D = temp_a3;
    sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
    func_151403A8(&sp18, 0x43, arg0, temp_a3);
}

void *func_150EEF80(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 sp16A;
    s16 sp168;
    s32 sp164;
    s8 sp160;
    s32 sp15C;
    s8 sp15B;
    s8 sp15A;
    s8 sp159;
    s8 sp158;
    s32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    void * sp13C;
    void * sp130;
    f32 sp12C;
    f32 sp128;
    s8 sp127;
    s8 sp126;
    s8 sp125;
    s8 sp124;
    s32 sp120;
    s32 sp11C;
    s16 sp118;
    s16 sp116;
    s8 sp115;
    s8 sp114;
    f32 sp110;
    f32 sp10C;
    void * sp100;
    s8 spE8;
    f32 spE4;
    f32 spE0;
    u8 spDD;
    s8 spDC;
    s32 spD8;
    u8 spD4;
    void *spD0;
    s8 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s8 sp99;
    s8 sp98;
    f32 sp94;
    s8 sp93;
    s8 sp92;
    s8 sp91;
    s8 sp90;
    f32 sp8C;
    s8 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7E;
    s16 sp7C;
    u8 sp78;                                        /* compiler-managed */
    void *sp74;
    u8 sp70;
    void *sp6C;
    f32 sp68;
    void *sp64;
    f32 temp_f20;
    f32 temp_f6;
    s32 temp_s3;
    s32 temp_v0_2;
    s8 temp_t4;
    void *temp_s0;
    void *temp_v0;
    void *temp_v1;

    temp_s3 = arg2 & 0xFF;
    if (arg0 == NULL) {
        return NULL;
    }
    if ((s32) arg1 >= 2) {
        return NULL;
    }
    temp_f20 = D_800A1814;
    spE0 = random_float() * temp_f20;
    temp_f6 = random_float() * temp_f20;
    spD0 = arg0;
    spE4 = temp_f6;
    spD4 = (*(s32 *)((char *)(arg0) + 0x3B));
    spD8 = func_15083E90(0x12);
    spDC = 0x12;
    spDD = arg1;
    (*(s32 *)((char *)&(sp100) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp100) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp100) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    spE8 = 0;
    sp114 = 0x94;
    sp115 = 7;
    sp116 = 0x2203;
    sp118 = 0x12C;
    sp11C = 0;
    sp120 = 0;
    sp124 = 0xFF;
    sp125 = 0xFF;
    sp126 = 0xFF;
    sp127 = 0xFF;
    sp110 = 1.0f;
    sp12C = 1.0f;
    sp10C = 0.0f;
    sp148 = 0.0f;
    sp14C = 0.0f;
    sp150 = 0.0f;
    sp128 = 100.0f;
    (*(s32 *)((char *)&(sp130) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp130) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp130) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    (*(s32 *)((char *)&(sp13C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp13C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp13C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp154 = 0x046C0008;
    sp158 = 0xFF;
    sp159 = 0xFF;
    sp15A = 0;
    sp15B = 7;
    sp15C = 0;
    sp160 = 0xFF;
    sp164 = 0;
    sp168 = 1;
    sp16A = 0xFF;
    temp_v0 = func_1513D2F0(&sp114, &D_800A4AA0, 0x1D, 0, 0, 0x1C, 0, 0, 0, 0x44, temp_s3, arg3);
    if (temp_v0 != NULL) {
        temp_s0 = (char *)(temp_v0) + 0x110;
        memcpy(temp_s0, &spD0, 0x44);
        sp7C = 0x12C;
        sp7E = 9;
        sp80 = 1.0f;
        sp84 = 1.0f;
        sp88 = 0;
        sp90 = 0xFF;
        sp91 = 0xDC;
        sp92 = 0xA0;
        sp93 = 0xC8;
        sp98 = 0;
        sp99 = -1;
        sp9C = 0.0f;
        spA0 = 0.0f;
        spA4 = 0.0f;
        spA8 = 0.0f;
        spAC = 0.0f;
        spB0 = 0.0f;
        spB4 = 0.0f;
        spB8 = 0.0f;
        spBC = 0.0f;
        spC0 = 0.0f;
        spC4 = 1.0f;
        sp6C = arg0;
        sp8C = D_800A1818;
        sp94 = 40.0f;
        sp74 = temp_v0;
        spC8 = 1;
        sp78 = 0;
        sp70 = (*(s32 *)((char *)(arg0) + 0x3B));
        do {
            (*(s32 *)((char *)(((char *)(temp_s0) + (sp78 * 4))) + 0x1C)) = func_151A7950(&sp7C, 0x10, temp_s3 & 0xFF, arg3);
            temp_v1 = (*(s32 *)((char *)(((char *)(temp_s0) + (sp78 * 4))) + 0x1C));
            if (temp_v1 != NULL) {
                memcpy((*(s32 *)((char *)(temp_v1) + 0x60)), &sp6C, 0x10);
            }
            temp_t4 = (sp78 + 1) & 0xFF;
            sp78 = temp_t4;
        } while (temp_t4 < 2);
        sp64 = temp_v0;
        sp68 = 0.0f;
        temp_v0_2 = func_15149130(0x12C, -1, 0x22, -1, 0, 0x20, 8, temp_s3, arg3);
        (*(s32 *)((char *)(temp_s0) + 0x24)) = temp_v0_2;
        if (temp_v0_2 != 0) {
            memcpy(temp_v0_2 + 0x28, &sp64, 8);
        }
        (*(s32 *)((char *)(temp_s0) + 0x28)) = func_150EFEC8(arg0, arg1, 0xFFU, 0xD9U, 0xA0U, temp_v0, temp_s3, arg3);
        (*(s32 *)((char *)(temp_s0) + 0x2C)) = func_150F0198(0x46U, 0xFFU, 0x82U, 0U, temp_v0, temp_s3, arg3);
    }
    return temp_v0;
}

s32 func_150EF38C(void *arg0) {
    void *spD0;
    void *spCC;
    s32 sp64;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_a3;
    u8 temp_v0;
    void *temp_a0;
    void *temp_s0;
    void *temp_t0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    f32 spBD;
    temp_t0 = (*(s32 *)((char *)(arg0) + 0x110));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x118));
    if (((*(s32 *)((char *)(arg0) + 0x114)) != (*(s32 *)((char *)(temp_t0) + 0x3B))) || ((*(s32 *)((char *)(temp_t0) + 0x0)) == 0) || (temp_s0 = (char *)(arg0) + 0x110, ((*(s32 *)((char *)(temp_t0) + 0x4)) == 0xFF))) {
        return 0;
    }
    if (((*(s32 *)((char *)(temp_s0) + 0xC)) != (*(s32 *)((char *)(temp_v1) + 0x3B))) || ((*(s32 *)((char *)(temp_v1) + 0x0)) == 0)) {
        return 0;
    }
    if (*(&D_800A163C + (*(s32 *)((char *)(temp_s0) + 0xD))) & (*(s32 *)((char *)(temp_t0) + 0x94))) {
        return 0;
    }
    (*(u8 *)((char *)(temp_s0) + 0x18)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0x18)) & 0xFFFE);
    temp_a3 = (*(s32 *)((char *)(temp_t0) + 0x1D4));
    spD0 = temp_t0;
    if (temp_a3 != 0) {
        temp_v0 = (*(s32 *)((char *)(temp_s0) + 0xD));
        spD0 = temp_t0;
        spCC = temp_v1;
        func_15143134((temp_v0 * 0xC) + &D_800A15F0, (char *)(arg0) + 0x34, (*(&D_800A1638 + temp_v0) << 6) + temp_a3, (u8) temp_a3);
        temp_a0 = (char *)(temp_s0) + 0x30;
        (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x14));
        (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x18));
        (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x1C));
        (*(f32 *)((char *)(temp_s0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) - (*(f32 *)((char *)(arg0) + 0x34)));
        (*(f32 *)((char *)(temp_s0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) - (*(f32 *)((char *)(arg0) + 0x38)));
        (*(f32 *)((char *)(temp_s0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) - (*(f32 *)((char *)(arg0) + 0x3C)));
        if (func_15145128(temp_a0, temp_a0, (char *)(temp_s0) + 0x3C, (char *)(temp_s0) + 0x40) != 0) {
            (*(u8 *)((char *)(temp_s0) + 0x18)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0x18)) | 1);
        }
    }
    (*(f32 *)((char *)(temp_s0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x10)) + (D_800A181C * D_800BE9A4));
    temp_f0 = func_15144B68((*(s32 *)((char *)(temp_s0) + 0x10)));
    (*(s32 *)((char *)(temp_s0) + 0x10)) = temp_f0;
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((sinf(temp_f0) * 5.0f) + 16.0f);
    (*(f32 *)((char *)(temp_s0) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x14)) + (D_800A1820 * D_800BE9A4));
    temp_f0_2 = func_15144B68((*(s32 *)((char *)(temp_s0) + 0x14)));
    (*(s32 *)((char *)(temp_s0) + 0x14)) = temp_f0_2;
    (*(s8 *)((char *)(arg0) + 0x5C)) = (s8) (u32) ((sinf(temp_f0_2) * 25.0f) + 230.0f);
    if ((*(s32 *)((char *)(temp_s0) + 0x18)) & 1) {
        temp_v1_2 = (*(s32 *)((char *)(temp_s0) + 0x2C));
        if (temp_v1_2 != NULL) {
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_v1_2) + 0x14))) + 0x9)) = 0;
            temp_v0_2 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x2C))) + 0x14));
            temp_v0_3 = (char *)(temp_v0_2) + 0xE;
            (*(s16 *)((char *)(temp_v0_2) + 0xE)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x34));
            (*(s16 *)((char *)(temp_v0_3) + 0x2)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x38));
            (*(s16 *)((char *)(temp_v0_3) + 0x4)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x3C));
        }
        func_15081690(spD0, (*(s32 *)((char *)(arg0) + 0x34)), (*(s32 *)((char *)(arg0) + 0x38)), (*(s32 *)((char *)(arg0) + 0x3C)), (*(s32 *)((char *)(temp_s0) + 0x30)), (*(s32 *)((char *)(temp_s0) + 0x34)), (*(s32 *)((char *)(temp_s0) + 0x38)), &sp64, (*(s32 *)((char *)(temp_s0) + 0x3C)), 1, 0, 1, 4, 0, 0);
        if ((s32) spBD >= 2) {
            func_1502EA98(sp64, 0xFF, 0, 0, 0x90, 0, 1);
            func_1505D024(sp64, 0xA0038, 0, (s32) ((char *)(spD0) - (char *)(&gObjects)) / 812);
        }
    } else {
        temp_v1_3 = (*(s32 *)((char *)(temp_s0) + 0x2C));
        if (temp_v1_3 != NULL) {
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_v1_3) + 0x14))) + 0x9)) = 1;
        }
    }
    return 1;
}

s32 func_150EF784(void *arg0, void * arg1, void * arg2) {
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x28) {
        return 1;
    }
    return 0;
}

void func_150EF7B0(s32 arg0) {
    s32 var_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_s3;
    void *var_s1;

    var_s0 = 0;
    temp_s3 = arg0 + 0x110;
    var_s1 = temp_s3;
    do {
        temp_a0 = (*(s32 *)((char *)(var_s1) + 0x1C));
        if (temp_a0 != NULL) {
            func_1516972C(temp_a0);
        }
        var_s0 += 4;
        var_s1 = (char *)(var_s1) + 4;
    } while (var_s0 != 8);
    temp_a0_2 = (*(s32 *)((char *)(temp_s3) + 0x24));
    if (temp_a0_2 != NULL) {
        func_1516972C(temp_a0_2);
    }
    temp_a0_3 = (*(s32 *)((char *)(temp_s3) + 0x28));
    if (temp_a0_3 != NULL) {
        func_1516972C(temp_a0_3);
    }
    temp_a0_4 = (*(s32 *)((char *)(temp_s3) + 0x2C));
    if (temp_a0_4 != NULL) {
        func_1516972C(temp_a0_4);
    }
    func_1513CA6C(arg0);
}

void func_150EF860(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 var_s0;
    void *temp_s3;
    void *var_s1;

    var_s0 = 0;
    temp_s3 = arg0 + 0x110;
    var_s1 = temp_s3;
    do {
        temp_a0 = (*(s32 *)((char *)(var_s1) + 0x1C));
        if (temp_a0 != 0) {
            func_1516979C(temp_a0);
        }
        var_s0 += 4;
        var_s1 = (char *)(var_s1) + 4;
    } while (var_s0 != 8);
    temp_a0_2 = (*(s32 *)((char *)(temp_s3) + 0x24));
    if (temp_a0_2 != 0) {
        func_1516979C(temp_a0_2);
    }
    temp_a0_3 = (*(s32 *)((char *)(temp_s3) + 0x28));
    if (temp_a0_3 != 0) {
        func_1516979C(temp_a0_3);
    }
    temp_a0_4 = (*(s32 *)((char *)(temp_s3) + 0x2C));
    if (temp_a0_4 != 0) {
        func_1516979C(temp_a0_4);
    }
    func_1513CAA0(arg0);
}

void func_150EF910(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_v1;
    u8 temp_a2;
    u8 temp_t6;
    void *temp_v0;
    void *temp_v0_2;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        temp_a2 = (*(s32 *)((char *)(((char *)(arg0) + 0x110)) + 0x4));
        if (((*(s32 *)((char *)(arg0) + 0x110)) == (*(s32 *)((char *)(arg1) + 0x0))) || ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2)) {
            func_1516972C(arg0, temp_a2, arg0);
        }
    } else if (temp_t6 == 0x2D) {
        temp_v0 = (char *)(arg0) + 0x110;
        temp_a2_2 = (*(s32 *)((char *)(arg0) + 0x110));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a2_2) {
            (*(s32 *)((char *)(arg0) + 0x110)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
        } else if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a2_2) {
            (*(s32 *)((char *)(arg0) + 0x110)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
        temp_a2_3 = (*(s32 *)((char *)(temp_v0) + 0x8));
        if ((*(s32 *)((char *)(arg1) + 0x0)) == temp_a2_3) {
            (*(s32 *)((char *)(temp_v0) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0xC)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a2_3) {
            (*(s32 *)((char *)(temp_v0) + 0x8)) = (*(s32 *)((char *)(arg1) + 0x0));
            (*(u8 *)((char *)(temp_v0) + 0xC)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else {
        temp_v0_2 = (char *)(arg0) + 0x110;
        if ((temp_t6 == 0x43) && (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(arg0) + 0x110))) || ((*(s32 *)((char *)(arg1) + 0x4)) == (*(s32 *)((char *)(temp_v0_2) + 0x4)))) && ((*(s32 *)((char *)(arg1) + 0x5)) == (*(s32 *)((char *)(temp_v0_2) + 0xD)))) {
            func_1516972C(arg0, temp_t6, arg0);
        }
    }
}

s32 func_150EFA4C(void *arg0) {
    u8 temp_v0;
    void *temp_t0;
    void *temp_t1;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x60))) + 0x8));
    temp_t0 = (char *)(temp_v1) + 0x110;
    if ((*(s32 *)((char *)(temp_v1) + 0x128)) & 1) {
        temp_t1 = (*(s32 *)((char *)(temp_v1) + 0x110));
        if ((*(s32 *)((char *)(temp_t1) + 0x1D4)) != 0) {
            temp_v0 = (*(s32 *)((char *)(temp_t0) + 0xD));
            (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x34));
            (*(f32 *)((char *)(arg0) + 0x34)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x38));
            (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x3C));
            (*(s32 *)((char *)(arg0) + 0x3C)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x40));
            (*(s32 *)((char *)(arg0) + 0x40)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x44));
            (*(s32 *)((char *)(arg0) + 0x44)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x48));
            (*(f32 *)((char *)(arg0) + 0x54)) = (f32) (*(f32 *)((char *)(temp_t0) + 0x3C));
            (*(f32 *)((char *)(arg0) + 0x58)) = (f32) (*(f32 *)((char *)(temp_t0) + 0x40));
            func_15143134((temp_v0 * 0xC) + &D_800A1620, (char *)(arg0) + 0x48, (*(&D_800A1638 + temp_v0) << 6) + (*(u8 *)((char *)(temp_t1) + 0x1D4)), (u8) arg0);
            (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) - (*(f32 *)((char *)(arg0) + 0x30)));
            (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) - (*(f32 *)((char *)(arg0) + 0x34)));
            (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg0) + 0x1C)) | 2);
            (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) - (*(f32 *)((char *)(arg0) + 0x38)));
        } else {
            (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg0) + 0x1C)) & 0xFFFD);
        }
    } else {
        (*(u8 *)((char *)(arg0) + 0x1C)) = (u8) ((*(u8 *)((char *)(arg0) + 0x1C)) & 0xFFFD);
    }
    return 1;
}

void func_150EFB80(void *arg0) {
    s8 spDD;
    s32 spD8;
    s16 spD6;
    s16 spD4;
    void * spC8;
    s8 spC5;
    s8 spC4;
    f32 spC0;
    s8 spBE;
    s16 spBC;
    s16 spBA;
    s16 spB8;
    s32 spB4;
    s32 spB0;
    s8 spAD;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s8 spA3;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    f32 sp9C;
    void * sp90;
    f32 sp8C;
    u32 temp_s1;
    u32 temp_s2;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s0) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x4)) + ((364.0f + (random_float() * 300.0f)) * D_800A1824));
    if ((*(s32 *)((char *)(temp_s0) + 0x4)) > 1.0f) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
        if ((*(s32 *)((char *)(temp_v0) + 0x128)) & 1) {
            (*(s32 *)((char *)&(spC8) + 0x0)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x40));
            (*(s32 *)((char *)&(spC8) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x44));
            (*(s32 *)((char *)&(spC8) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x48));
            spD8 = 0xA;
            spA0 = 4;
            spD6 = 5;
            spA1 = 2;
            spA2 = 3;
            spA3 = 0x9D;
            spA4 = 0x72;
            spA5 = 0x2E;
            spA7 = 0;
            spA8 = 0;
            spA9 = 0;
            spAA = 0;
            spAB = 0xFF;
            spAC = 3;
            spAD = 0x24;
            spB0 = 0x200005;
            spB4 = 0x60600;
            spB8 = 0xC;
            spBA = 0x15;
            spBC = 1;
            spBE = 0;
            spC0 = 1.0f;
            spC4 = -1;
            spC5 = 0;
            do {
                spDD = (random_u32() % 3U) + 3;
                spD4 = (random_u32() & 0xF) + 0x28;
                sp8C = (random_float() * 10.0f) + 22.0f;
                temp_s1 = random_u32();
                temp_s2 = random_u32();
                func_15143794((s16) (temp_s1 & 0xFF), (s16) ((temp_s2 % 31U) - 0x37), (random_float() * 15.0f) + 25.0f, &sp90);
                sp9C = ((random_float() * 740.0f) + D_800A1828) * D_800A182C;
                spA6 = (random_u32() % 101U) + 0x9B;
                func_1515C2F0(&spC8, 0, &sp8C, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                (*(f32 *)((char *)(temp_s0) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x4)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s0) + 0x4)) > 1.0f);
            return;
        }
        do {
            (*(f32 *)((char *)(temp_s0) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x4)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x4)) > 1.0f);
    }
}

s32 func_150EFEC8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5, s32 arg6, s32 arg7) {
    s32 spF4;
    s8 spF1;
    s8 spF0;
    s8 spEF;
    s8 spEE;
    s8 spED;
    s8 spEC;
    s16 spEA;
    s16 spE8;
    s16 spE6;
    s16 spE4;
    f32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    s32 sp88;
    s8 sp87;
    s8 sp86;
    s8 sp85;
    s8 sp84;
    s32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s8 sp53;
    u8 sp52;
    u8 sp51;
    u8 sp50;
    s32 sp4C;
    s32 sp48;
    s16 sp44;
    s16 sp42;
    s8 sp41;
    s8 sp40;
    void *sp3C;
    s8 sp39;
    u8 sp38;
    void *sp34;
    s32 temp_v0_2;
    s32 var_v1;
    s8 temp_t6;
    s8 temp_v0;

    temp_t6 = arg1 & 0xFF;
    sp34 = arg0;
    sp39 = temp_t6;
    sp38 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp3C = arg5;
    temp_v0 = D_8008FD00(temp_t6);
    sp53 = 0xFF;
    sp80 = 0xCD2002;
    sp41 = 3;
    sp42 = 0x2203;
    sp44 = 0x12C;
    sp50 = arg2;
    spD4 = -1;
    spC8 = -1;
    sp84 = 0xFF;
    sp87 = 6;
    spBC = -1;
    spCC = -1;
    spC0 = -1;
    sp51 = arg3;
    sp52 = arg4;
    sp40 = temp_v0;
    sp48 = 0;
    sp4C = 0;
    sp85 = 0xFF;
    sp86 = 0;
    sp88 = 0;
    spD0 = -1;
    spC4 = -1;
    spD8 = -1;
    spDC = 0;
    spE4 = 0;
    spE6 = 0;
    spE8 = 0;
    spEA = 0;
    spEC = 0xFF;
    spED = 0xFF;
    spEE = 0xFF;
    spEF = 0xFF;
    spF0 = 0xA;
    spF1 = -1;
    sp74 = 1.0f;
    sp78 = 1.0f;
    sp7C = 1.0f;
    spB0 = 1.0f;
    spE0 = 1.0f;
    sp58 = 100.0f;
    sp54 = 100.0f;
    sp9C = 160.0f;
    sp98 = 160.0f;
    spA4 = 80.0f;
    spA0 = 80.0f;
    sp5C = 0.0f;
    sp60 = 0.0f;
    sp64 = 0.0f;
    sp68 = 0.0f;
    sp6C = 0.0f;
    sp70 = 0.0f;
    spA8 = 0.5f;
    spAC = 0.5f;
    spB4 = D_800A1830;
    spB8 = D_800A1834;
    temp_v0_2 = func_151407D0(0x42C80000, 0x43200000, &sp98, 0x6C, &sp40, 0x1E, 0, 0, 0, -1, (s32) arg6, arg7);
    var_v1 = temp_v0_2;
    if (temp_v0_2 != 0) {
        spF4 = temp_v0_2;
        memcpy(temp_v0_2 + 0x170, &sp34, 0xC);
        var_v1 = spF4;
    }
    return var_v1;
}

s32 func_150F00EC(void *arg0) {
    s32 temp_t4;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x178));
    if ((*(s32 *)((char *)(temp_v0) + 0x128)) & 1) {
        temp_v1 = (char *)(temp_v0) + 0x110;
        (*(f32 *)((char *)(arg0) + 0x34)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x34));
        (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x38));
        (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x3C));
        (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x34)) + ((s32)((*(f32 *)((char *)(temp_v1) + 0x30)) * 500.0f)));
        (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x38)) + ((s32)((*(f32 *)((char *)(temp_v1) + 0x34)) * 500.0f)));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) | 6);
        (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x3C)) + ((s32)((*(f32 *)((char *)(temp_v1) + 0x38)) * 500.0f)));
    } else {
        temp_t4 = (*(s32 *)((char *)(arg0) + 0x58)) & ~4;
        (*(s32 *)((char *)(arg0) + 0x58)) = temp_t4;
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (temp_t4 & ~2);
    }
    return 1;
}

s32 func_150F0198( s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5, s32 arg6) {
    s32 sp54;
    s8 sp50;
    s16 sp4E;
    s8 sp4D;
    s8 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    void *sp3C;
    s32 temp_v0;
    s32 var_v1;

    sp3C = arg4;
    sp4C = 2;
    sp4D = -1;
    sp4E = 0x12C;
    sp50 = 0x21;
    sp40 = 0;
    sp44 = 0;
    sp48 = 0;
    temp_v0 = func_151602C0(&sp4C, &sp40, arg0, arg1, (s32) arg2, (s32) arg3, 0xFF, 0, 4, (s32) arg5, arg6);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp54 = temp_v0;
        memcpy(temp_v0 + 0x18, &sp3C, 4);
        var_v1 = sp54;
    }
    return var_v1;
}

void func_150F0260(void) {
    func_150F02A0();
}

void func_150F0280(void) {
    func_150F02A0();
}

void func_150F02A0(void *arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x60));
    (*(s32 *)((char *)(((*(s32 *)((char *)(temp_v0) + 0x8)) + ((*(s32 *)((char *)(temp_v0) + 0xC)) * 4))) + 0x12C)) = 0;
}

void func_150F02C0(void *arg0) {
    func_150F0318(arg0);
    func_1514933C(arg0);
}

void func_150F02EC(void *arg0) {
    func_150F0318(arg0);
    func_15149368(arg0);
}

void func_150F0318(void *arg0) {
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x134)) = 0;
}

void func_150F0328(void *arg0) {
    func_150F0380(arg0);
    func_151411A4(arg0);
}

void func_150F0354(void *arg0) {
    func_150F0380(arg0);
    func_151411C4(arg0);
}

void func_150F0380(void *arg0) {
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x178))) + 0x138)) = 0;
}

void func_150F0390(void *arg0) {
    func_150F03E8(arg0);
    func_151617C4(arg0);
}

void func_150F03BC(void *arg0) {
    func_150F03E8(arg0);
    func_151617E4(arg0);
}

void func_150F03E8(void *arg0) {
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x18))) + 0x13C)) = 0;
}

s32 func_150F03F8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 spDC;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    void *spC0;
    void *spBC;
    f32 *spB8;
    f32 *spB4;
    s8 spB0;
    s16 spAE;
    s8 spAD;
    s8 spAC;
    s32 spA8;
    s32 spA4;
    s32 spA0;
    f32 sp9C;
    f32 sp98;
    u32 sp94;
    f32 sp90;
    f32 sp8C;
    u32 sp88;
    u8 *sp84;
    s32 temp_t0;
    s32 temp_v0_2;
    u8 *temp_v0;

    f32 spD4;
    f32 spD8;
    if (arg0 == NULL) {
        return 0;
    }
    if ((s32) arg1 >= 2) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) == 0) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x2EC)) < 0x5A) {
        return 0;
    }
    temp_t0 = arg1 * 0xC;
    temp_v0 = arg1 + &D_800A1670;
    spBC = temp_t0 + &D_800A1640;
    spC0 = temp_t0 + &D_800A1658;
    spB4 = &spD0;
    spB8 = &spC4;
    sp84 = temp_v0;
    func_15145EA4(&spBC, &spB4, (*temp_v0 << 6) + (*(s32 *)((char *)(arg0) + 0x1D4)), 2);
    spC4 -= spD0;
    spC8 -= spD4;
    spCC -= spD8;
    sp8C = random_float();
    sp90 = random_float();
    random_u32();
    spDC = func_151C229C(&spD0, &spC4, 0, 0, 0, 0, 150.0f, D_800A1838, (sp8C * 19.0f) + 38.0f, (sp90 * D_800A183C) + 149.0f, 50.0f, 0xFF, arg0, 1, 1, 0, 8, 0, 1, 0, 0xA0038, 0.0f, 0xFF, -1, 0, (s32) arg2, arg3);
    spAC = 3;
    spAD = -1;
    spAE = (random_u32() % 5U) + 4;
    spB0 = 0;
    spA0 = (s32) spD0;
    spA4 = (s32) spD4;
    spA8 = (s32) spD8;
    func_151602C0(&spAC, &spA0, (random_u32() % 51U) + 0x50, 0xFFU, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg2, arg3);
    sp9C = ((random_float() * D_800A1840) + D_800A1844) * D_800A1848;
    sp98 = ((random_float() * D_800A184C) + 628.0f) * D_800A1850;
    sp88 = random_u32();
    sp94 = random_u32();
    temp_v0_2 = arg1 * 0xC;
    func_15102B38(arg0, *sp84, temp_v0_2 + &D_800A1640, temp_v0_2 + &D_800A1658, &sp98, (sp88 % 3U) + 8, 0xFF, (random_float() * 2000.0f) + 2000.0f, &spD0, 0xFF, 0, -1, (s32) arg2, arg3);
    return spDC;
}

void func_150F07E4(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x60));
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(temp_v0) + 0x0))) || ((*(s32 *)((char *)(temp_v0) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C((void *) temp_t6);
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

void func_150F088C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v1;
    u8 temp_t6;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0) {
        if (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(arg0) + 0x170))) || ((*(s32 *)((char *)(((char *)(arg0) + 0x170)) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_t6, arg0);
        }
    } else {
        temp_v0 = (char *)(arg0) + 0x170;
        if (temp_t6 == 0x2D) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x170));
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
            if (temp_v1 == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x170)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                return;
            }
            if ((s32) (*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x170)) = temp_v1;
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            }
        }
    }
}

void func_150F0938(s32 arg0) {
    func_15160A58(arg0, 0x25, &D_800A1674, 2, 0x12C, 4, 0, 0xFF, 0, 0xFF, 0, -1, 0, 0, 0xFF, 1);
    func_15160A58(arg0, 2, &D_800A1680, 2, 0x12C, 0xD, 0xFF, 0xFF, 0xFF, 0xFF, 0, -1, 0, 0, 0xFF, 1);
}

void func_150F0A24(f32 *arg0) {
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    f32 sp88;
    s8 sp86;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    s32 sp7C;
    s32 sp78;
    s8 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s8 sp6F;
    s8 sp6E;
    s8 sp6D;
    s8 sp6C;
    s8 sp6B;
    s8 sp6A;
    s8 sp69;
    s8 sp68;
    s8 sp67;
    s8 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s16 sp5C;
    s16 sp5A;
    s16 sp58;
    s32 sp54;
    s32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void * sp24;
    s32 sp20;
    s32 sp1C;

    sp1C = 9;
    sp20 = 6;
    (*(s32 *)((char *)&(sp24) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp24) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp24) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp4E = 0x50;
    sp50 = 3;
    sp4C = -0x1F;
    sp54 = 4;
    sp58 = 0x14;
    sp5A = 0x1E;
    sp5C = 1;
    sp5E = 4;
    sp5F = 2;
    sp62 = 0xFF;
    sp63 = 0xFF;
    sp4A = 0xFF;
    sp61 = 0xFF;
    sp64 = 0xFF;
    sp69 = 0xFF;
    sp6A = 0xFF;
    sp6B = 0xFF;
    sp6C = 0xFF;
    sp71 = 0xFF;
    sp30 = D_800A1854;
    sp34 = D_800A1854;
    sp48 = 0;
    sp60 = 3;
    sp65 = 0;
    sp66 = 0;
    sp67 = 0;
    sp68 = 0;
    sp6D = 0;
    sp6E = 0;
    sp6F = 0;
    sp70 = 0;
    sp72 = 0;
    sp73 = 3;
    sp74 = 0x24;
    sp78 = 0x200005;
    sp7C = 0x60600;
    sp80 = 8;
    sp82 = 0x1F;
    sp84 = 1;
    sp86 = 0;
    sp8C = -1;
    sp8D = 0;
    sp8E = -1;
    sp8F = -1;
    sp38 = D_800A1858;
    sp3C = D_800A185C;
    sp40 = 39.0f;
    sp44 = 35.0f;
    sp88 = 1.0f;
    func_15152B38(&sp1C, 0xFF, 1, arg0);
}

void func_150F0BEC(void *arg0) {
    f32 spAC;
    s16 spA8;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    s8 spA3;
    s8 spA2;
    s8 spA1;
    s8 spA0;
    s32 sp9C;
    s32 sp98;
    f32 sp94;
    void * sp88;
    void * sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s16 sp62;
    s16 sp60;
    s16 sp5E;
    s8 sp5D;
    s8 sp5C;
    s8 sp5B;
    s8 sp5A;
    s8 sp59;
    s8 sp58;
    s8 sp57;
    s8 sp56;
    s8 sp55;
    s8 sp54;
    s32 sp50;
    s32 sp4C;
    s16 sp4A;
    s16 sp48;
    s32 sp44;
    s32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    u8 sp30;
    void *sp2C;
    s32 sp20;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    sp5D = 0x2B;
    sp48 = 0x4403;
    sp40 = 0x200005;
    sp44 = 0x70600;
    sp4A = 0x12C;
    sp4C = 0;
    sp50 = 0;
    sp54 = 0xFF;
    sp55 = 0xFF;
    sp56 = 0xFF;
    sp57 = 0xFF;
    sp58 = 0xFF;
    sp59 = 0xD9;
    sp5A = 0xA0;
    sp5B = 0xFF;
    sp5C = 0xFF;
    sp6C = 250.0f;
    sp68 = 250.0f;
    sp70 = (*(s32 *)((char *)(arg0) + 0x14));
    sp74 = (*(s32 *)((char *)(arg0) + 0x18));
    sp78 = (*(s32 *)((char *)(arg0) + 0x1C));
    (*(s32 *)((char *)&(sp7C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp7C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp7C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    (*(s32 *)((char *)&(sp88) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp88) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp88) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp5E = 1;
    sp60 = 0xFF;
    sp62 = 1;
    sp94 = 0.0f;
    sp64 = 1.0f;
    if (random_u32() & 1) {
        var_v1 = 0x40;
    } else {
        var_v1 = 0;
    }
    sp20 = var_v1;
    if (random_u32(arg0) & 1) {
        var_v0 = 0x80;
    } else {
        var_v0 = 0;
    }
    sp98 = var_v0 | var_v1 | 0xC000 | 0x40000;
    spA0 = 6;
    spA1 = 6;
    spA2 = 0x25;
    spA3 = -1;
    spA4 = -1;
    spA5 = 0xA;
    sp9C = 0;
    spA6 = 0xFF;
    spA8 = 0;
    sp2C = arg0;
    spAC = D_800A1860;
    sp30 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp34 = 2.0f * random_float(arg0) * D_800A1864;
    sp38 = 2.0f * random_float() * D_800A1868;
    sp3C = 2.0f * random_float() * D_800A186C;
    temp_v0 = func_15130280(&sp40, 1, 0, 0x14, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, &sp2C, 0x14);
    }
}

s32 func_150F0E48(void *arg0, void * arg1) {
    void *temp_s0;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0xA8));
    if ((*(s32 *)((char *)(arg0) + 0xAC)) != (*(s32 *)((char *)(temp_v0) + 0x3B))) {
        return 0;
    }
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x14));
    temp_s0 = (char *)(arg0) + 0xA8;
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x18));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x1C));
    (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) + (D_800A1870 * D_800BE9A4));
    (*(f32 *)((char *)(temp_s0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0xC)) + (D_800A1874 * D_800BE9A4));
    (*(f32 *)((char *)(temp_s0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x10)) + (0.25f * D_800BE9A4));
    (*(s32 *)((char *)(temp_s0) + 0x8)) = func_15144B68((*(s32 *)((char *)(temp_s0) + 0x8)));
    (*(s32 *)((char *)(temp_s0) + 0xC)) = func_15144B68((*(s32 *)((char *)(temp_s0) + 0xC)));
    (*(s32 *)((char *)(temp_s0) + 0x10)) = func_15144B68((*(s32 *)((char *)(temp_s0) + 0x10)));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((sinf((*(f32 *)((char *)(temp_s0) + 0x8))) * 243.0f) + 780.0f);
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((sinf((*(f32 *)((char *)(temp_s0) + 0xC))) * 243.0f) + 780.0f);
    (*(s8 *)((char *)(arg0) + 0x2B)) = (s8) (u32) ((sinf((*(s8 *)((char *)(temp_s0) + 0x10))) * 50.0f) + 200.0f);
    return 1;
}

void *func_150F1020(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v1;
    u8 temp_t6;
    void *var_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        var_v0 = (char *)(arg0) + 0xA8;
        temp_a0 = (*(s32 *)((char *)(arg0) + 0xA8));
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        if (temp_v1 == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0xA8)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(var_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return var_v0;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
            (*(s32 *)((char *)(arg0) + 0xA8)) = temp_v1;
            (*(u8 *)((char *)(var_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            return var_v0;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    if (((temp_t6 == 0) || (var_v0 = (char *)(arg0) + 0xA8, (temp_t6 == 0x43))) && ((var_v0 = (char *)(arg0) + 0xA8, ((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0xA8)))) || ((*(u8 *)((char *)(var_v0) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        var_v0 = func_1516972C(arg0, temp_t6, arg0);
    }
    return var_v0;
}

void func_150F10D4(void *arg0) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    u8 sp44;
    void *sp40;
    s32 temp_v0;

    sp40 = arg0;
    sp44 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp48 = 0.0f;
    sp4C = (*(s32 *)((char *)(arg0) + 0x14));
    sp50 = (*(s32 *)((char *)(arg0) + 0x18));
    sp54 = (*(s32 *)((char *)(arg0) + 0x1C));
    temp_v0 = func_15149130(0x12C, -1, 0x4C, -1, 0, 0x3A, 0x18, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp40, 0x18);
    }
}

void func_150F1170(void *arg0) {
    f32 sp124;
    s8 sp10D;
    s8 sp10C;
    s8 sp10B;
    s8 sp10A;
    s8 sp109;
    s8 sp108;
    s32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s16 spCA;
    s16 spC8;
    s16 spC6;
    s8 spC5;
    s8 spC4;
    s8 spC3;
    s8 spC2;
    s8 spC1;
    s8 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s32 spB8;
    s32 spB4;
    s16 spB2;
    s16 spB0;
    s32 spAC;
    s32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;
    void *temp_v0;

    f32 sp128;
    f32 sp12C;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    (*(s32 *)((char *)&(sp124) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x34));
    temp_s1 = (char *)(arg0) + 0x28;
    (*(s32 *)((char *)&(sp124) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x38));
    (*(s32 *)((char *)&(sp124) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x3C));
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s1) + 0x4)) != (*(s32 *)((char *)(temp_v0) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x14));
    (*(f32 *)((char *)(temp_s1) + 0x10)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x18));
    (*(f32 *)((char *)(temp_s1) + 0x14)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x1C));
    temp_f24 = (*(s32 *)((char *)(temp_s1) + 0xC)) - sp124;
    temp_f26 = (*(s32 *)((char *)(temp_s1) + 0x10)) - sp128;
    temp_f28 = (*(s32 *)((char *)(temp_s1) + 0x14)) - sp12C;
    (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) + ((D_800A1878 + (random_float() * D_800A187C)) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f) {
        spC5 = 0x6C;
        spB0 = 0x5103;
        spA8 = 0x200005;
        spC6 = 0x23;
        spC8 = 7;
        sp100 = 0x90DE07;
        sp108 = 8;
        sp109 = 6;
        sp10A = 0x20;
        sp10B = -1;
        spAC = 0;
        spB4 = 0;
        spB8 = 0;
        sp10C = -1;
        sp10D = 0;
        spCA = 0x23;
        spBC = 0xDD;
        spBD = 0xD3;
        spBE = 0xCD;
        spBF = 0xFF;
        spC0 = 0x57;
        spC1 = 0x55;
        spC2 = 0x5A;
        spC4 = 0xFF;
        spE4 = 0.0f;
        spE8 = 0.0f;
        spEC = 0.0f;
        temp_f20 = D_800A1888;
        spA4 = D_800A1880;
        spCC = D_800A1884;
        do {
            temp_f0 = random_float();
            spD8 = (temp_f24 * temp_f0) + sp124;
            spDC = (temp_f26 * temp_f0) + sp128;
            spE0 = (temp_f28 * temp_f0) + sp12C;
            spF0 = temp_f24 * D_800BE9A8 * temp_f20;
            spF4 = temp_f26 * D_800BE9A8 * temp_f20;
            spF8 = temp_f28 * D_800BE9A8 * temp_f20;
            sp98 = random_u32();
            sp99 = random_u32();
            sp9A = (random_u32() % 5U) + 4;
            sp9B = (random_u32() % 5U) + 4;
            sp9C = random_float() * 39.0f;
            spA0 = random_float() * 39.0f;
            temp_f16 = random_float() * D_800A188C;
            sp100 &= ~0xC0;
            spFC = temp_f16 + D_800A1890;
            var_s0 = 0;
            if (random_u32() & 1) {
                var_s0 = 0x80;
            }
            if (random_u32() & 1) {
                var_v0 = 0x40;
            } else {
                var_v0 = 0;
            }
            sp100 |= var_v0 | var_s0;
            spC3 = (random_u32() % 71U) + 0x50;
            spB2 = (random_u32() % 31U) + 0x3C;
            temp_f16_2 = (random_float() * D_800A1894) + 404.0f;
            spD4 = temp_f16_2;
            spD0 = temp_f16_2;
            temp_v0_2 = func_15130280(&spA8, 1, 0, 0x10, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            if (temp_v0_2 != 0) {
                memcpy(temp_v0_2 + 0xA8, (void **) &sp98, 0x10);
            }
            (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0x8)) > 1.0f);
    }
}

void func_150F15F8(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    void *temp_a2_2;

    temp_a2 = (char *)(arg0) + 0x28;
    if (arg2 == 0x43) {
        temp_a2_2 = (char *)(arg0) + 0x28;
        if (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(arg0) + 0x28))) || ((*(s32 *)((char *)(temp_a2_2) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, (u8) temp_a2_2);
        }
    } else {
        func_15149514(arg1, arg2, temp_a2, temp_a2 + 4, arg0);
    }
}

void func_150F1684(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if ((temp_t6 == 0x43) && (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(arg0) + 0x18))) || ((*(s32 *)((char *)(((char *)(arg0) + 0x18)) + 0x4)) == (*(s32 *)((char *)(arg1) + 0x4))))) {
        func_1516972C((void *) temp_t6);
    }
}

void func_150F16DC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp84;
    u8 sp83;
    u16 sp80;
    void *sp7C;
    f32 *sp78;
    s8 sp74;
    s16 sp72;
    s8 sp71;
    s8 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    f32 sp60;
    f32 sp5C;
    u32 sp58;
    u32 sp50;
    void *sp4C;
    u8 *sp48;
    s32 temp_v0_2;
    u8 *temp_v1;
    void *temp_v0;

    f32 sp88;
    f32 sp8C;
    if ((arg0 != NULL) && ((s32) arg2 < 4) && ((s32) arg1 < 2)) {
        if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x23) {
            sp83 = 1;
            goto block_7;
        }
        sp80 = D_800A1810;
        if (!(*(&sp80 + arg1) & (*(s32 *)((char *)(arg0) + 0x94)))) {
            sp83 = 0;
block_7:
            if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
                temp_v0 = (sp83 * 0x60) + (arg2 * 0x18) + &D_800A168C;
                temp_v1 = (sp83 * 2) + arg1 + &D_800A180C;
                sp7C = (char *)(temp_v0) + (arg1 * 0xC);
                sp78 = &sp84;
                sp48 = temp_v1;
                sp4C = temp_v0;
                func_15145EA4(&sp7C, &sp78, (*temp_v1 << 6) + (*(s32 *)((char *)(arg0) + 0x1D4)), 1);
                sp70 = 3;
                sp71 = -1;
                sp72 = (random_u32() % 5U) + 4;
                sp74 = 0;
                sp64 = (s32) sp84;
                sp68 = (s32) sp88;
                sp6C = (s32) sp8C;
                func_151602C0(&sp70, &sp64, (random_u32() % 51U) + 0x50, 0xFFU, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg3, arg4);
                sp60 = ((random_float() * D_800A1898) + D_800A189C) * D_800A18A0;
                sp5C = ((random_float() * D_800A18A4) + D_800A18A8) * D_800A18AC;
                sp50 = random_u32();
                sp58 = random_u32();
                temp_v0_2 = arg1 * 0xC;
                func_15102B38(arg0, *sp48, (char *)(sp4C) + temp_v0_2, (sp83 * 0x60) + (arg2 * 0x18) + temp_v0_2 + &D_800A174C, &sp5C, (sp50 % 6U) + 8, 0xFF, (random_float() * D_800A18B0) + D_800A18B4, &sp84, 0xFF, 0, -1, (s32) arg3, arg4);
            }
        }
    }
}

void func_150F1A00(void *arg0) {
    s32 sp3C[64];
    f32 *var_a2;
    f32 *var_v0_2;
    f32 temp_f2;
    f32 var_f18;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;

    var_v0 = 0;
    sp3C[0] = (s32) (*(s32 *)((char *)&(D_80088B00) + 0x0));
    sp3C[1] = (u16) (*(u16 *)((char *)&(D_80088B00) + 0x4));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x2E4));
    if ((temp_v1 & 3) == 3) {
        var_v0 = 1;
    }
    if ((temp_v1 & 0xC) == 0xC) {
        var_v0 = 2;
    }
    (*(s16 *)((char *)&(D_800CC298) + 0x14)) = (s16) ((*(s16 *)((char *)&(D_800CC298) + 0x14)) + ((&sp3C[0])[var_v0] * D_800BE9E4));
    var_a0 = 0;
    var_a2 = (*(s32 *)((char *)(arg0) + 0x1D4)) + 0xF80;
    temp_f2 = ((cosf((f32) (*(f32 *)((char *)&(D_800CC298) + 0x14)) * D_800A18E8) + 1.0f) * 0.5f * D_800A18EC) + D_800A18F0;
    do {
        var_v0_2 = var_a2;
        var_v1 = 1;
        var_f18 = *var_v0_2 * temp_f2;
        if (1 != 3) {
            do {
                var_v1 += 1;
                (*(s32 *)((char *)(var_v0_2) + 0x0)) = var_f18;
                var_f18 = (*(s32 *)((char *)(var_v0_2) + 0x4)) * temp_f2;
                var_v0_2 += 4;
            } while (var_v1 != 3);
        }
        (*(s32 *)((char *)((var_v0_2 + 4)) - 0x4)) = var_f18;
        var_a0 += 1;
        var_a2 += 0x10;
    } while (var_a0 != 3);
}

void *func_150F1B48(void *arg0, s32 arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_t8;
    s32 temp_v1;
    s32 var_v0;

    if (*(&D_800CC354 + (arg1 * 0x32C)) == 0x21) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    temp_t8 = D_800BE9E4 * 0x222;
    if (var_v0 != 0) {
        temp_v0 = (*(s32 *)((char *)&(D_800CC298) + 0x12)) - temp_t8;
        if (D_800A18F4 < (f32) temp_v0) {
            (*(s32 *)((char *)&(D_800CC298) + 0x12)) = temp_v0;
        } else {
            (*(s32 *)((char *)&(D_800CC298) + 0x12)) = -0x1999;
        }
    } else {
        temp_v0_2 = (*(s32 *)((char *)&(D_800CC298) + 0x12)) + temp_t8;
        if ((f32) temp_v0_2 < D_800A18F8) {
            (*(s32 *)((char *)&(D_800CC298) + 0x12)) = temp_v0_2;
        } else {
            (*(s32 *)((char *)&(D_800CC298) + 0x12)) = 0x1555;
        }
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xB2;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0xB8;
    (*(s16 *)((char *)(arg0) + 0x2)) = (s16) (*(s16 *)((char *)&(D_800CC298) + 0x12));
    temp_v1 = 2 * 6;
    (*(s16 *)((char *)(arg0) + 0x8)) = (s16) (temp_v1 + 0xB2);
    (*(s16 *)((char *)(arg0) + 0x6)) = (s16) (*(s16 *)((char *)&(D_800CC298) + 0x12));
    (*(s16 *)((char *)(arg0) + 0xC)) = (s16) (temp_v1 + 0xB8);
    (*(s16 *)((char *)(arg0) + 0xA)) = (s16) (*(s16 *)((char *)&(D_800CC298) + 0x12));
    (*(s16 *)((char *)(arg0) + 0x10)) = (s16) (temp_v1 + 0xBE);
    (*(s16 *)((char *)(arg0) + 0xE)) = (s16) (*(s16 *)((char *)&(D_800CC298) + 0x12));
    (*(s16 *)((char *)(arg0) + 0x14)) = (s16) (temp_v1 + 0xC4);
    (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (*(s16 *)((char *)&(D_800CC298) + 0x12));
    (*(s16 *)((char *)(arg0) + 0x16)) = (s16) (*(s16 *)((char *)&(D_800CC298) + 0x12));
    return (char *)(arg0) + 0x18;
}

void func_150F1CB0(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x84)) == 0x14) {
        (*(s32 *)((char *)(arg0) + 0x68)) = 0x1B;
    } else {
        (*(s32 *)((char *)(arg0) + 0x68)) = 0xC;
    }
    (*(s32 *)((char *)(arg0) + 0x69)) = 0x13;
    if (((*(s32 *)((char *)(arg0) + 0x2E4)) & 3) == 3) {
        (*(s32 *)((char *)(arg0) + 0x69)) = 0x14;
    }
    if (((*(s32 *)((char *)(arg0) + 0x2E4)) & 0xC) == 0xC) {
        (*(s32 *)((char *)(arg0) + 0x69)) = 0x17;
    }
}

void func_150F1D10(void *arg0, s32 arg1, s32 arg2) {
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    s8 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s16 spCA;
    s16 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s16 spB0;
    void * spA4;
    s32 spA0;
    s32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s16 sp8E;
    s16 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    s16 sp7A;
    s16 sp78;
    s16 sp76;
    s16 sp74;
    void * sp68;
    s32 sp64;
    s32 sp60;
    f32 sp58;
    f32 var_f10;
    s32 temp_s1;
    s32 temp_t8;

    temp_s1 = arg1 & 0xFF;
    if (arg0 != NULL) {
        spE4 = (*(s32 *)((char *)(arg0) + 0x14));
        spE8 = (*(s32 *)((char *)(arg0) + 0x18)) + 20.0f;
        spEC = (*(s32 *)((char *)(arg0) + 0x1C));
        spE0 = ((*(s32 *)((char *)(arg0) + 0x14C)) + (*(s32 *)((char *)(arg0) + 0x150))) * 0.5f;
        func_151D5404(&spE4, 0x43FD0000, 0x447D4000, 0x3A8163D3, 0xF, 0x14, temp_s1, arg2);
        func_151D5334(&spE4, 0x43FD0000, 0x447D4000, 0x3A8163D3, 5, temp_s1, arg2);
        func_151D5514(&spE4, temp_s1 & 0xFF, arg2);
        func_10010F88((random_u32() & 8) + 0x2B6, 0x7FFF, 0, 0, 0, (s32) spE4, (s32) spE8, (s32) spEC, 0xFA0, 0x1770);
        func_151D3FF4(&spE4, temp_s1 & 0xFF, arg2);
        sp58 = random_float();
        temp_t8 = (random_u32() % 56U) + 0xC8;
        var_f10 = (f32) temp_t8;
        if (temp_t8 < 0) {
            var_f10 += 4294967296.0f;
        }
        func_151541B8(&spE4, (sp58 * 4.0f) + 12.0f, 0x3FD20C49, var_f10, 0.0f, temp_s1, arg2);
        sp9C = 3;
        spA0 = 0;
        (*(f32 *)((char *)&(spA4) + 0x0)) = (f32) (*(f32 *)((char *)&(spE4) + 0x0));
        (*(s32 *)((char *)&(spA4) + 0x4)) = (s32) (*(s32 *)((char *)&(spE4) + 0x4));
        (*(s32 *)((char *)&(spA4) + 0x8)) = (s32) (*(s32 *)((char *)&(spE4) + 0x8));
        spB8 = 30.0f;
        spBC = 20.0f;
        spC0 = D_800A18FC;
        spB0 = 0;
        spB2 = 0xFF;
        spB4 = -0x40;
        spB6 = 0x2C;
        spC8 = 0x3C;
        spCA = 0x14;
        spCC = 1.0f * spE0;
        spD0 = 0.0f * spE0;
        spD8 = 0.0f;
        spDC = 0xC;
        spC4 = D_800A1900;
        spD4 = D_800A1904;
        func_1515080C(&sp9C, &D_800A18C0, &D_800A18CC, 3, 0, 0, 0, 1, -1, 0, 0.0f, 0, 0, temp_s1, arg2);
        sp60 = 5;
        sp64 = 3;
        (*(f32 *)((char *)&(sp68) + 0x0)) = (f32) (*(f32 *)((char *)&(spE4) + 0x0));
        (*(s32 *)((char *)&(sp68) + 0x4)) = (s32) (*(s32 *)((char *)&(spE4) + 0x4));
        (*(s32 *)((char *)&(sp68) + 0x8)) = (s32) (*(s32 *)((char *)&(spE4) + 0x8));
        sp7C = 25.0f;
        sp80 = 15.0f;
        sp74 = 0;
        sp76 = 0xFF;
        sp78 = -0x40;
        sp7A = 0x1E;
        sp8C = 0x46;
        sp8E = 0x14;
        sp84 = D_800A1908;
        sp88 = D_800A190C;
        sp90 = D_800A1910;
        sp94 = D_800A1914;
        sp98 = D_800A1918;
        func_15152190(&sp60, &D_800A18D8, &D_800A18E0, 2, 0.0f, 0, temp_s1, arg2);
    }
}

void func_150F20F0(s32 arg0) {
    s32 unksp4F;
    s32 sp4C;
    void * sp48;
    void * sp44;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    void *temp_v0;

    temp_v0 = (arg0 * 0x32C) + &gObjects;
    temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x14));
    temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x1C));
    temp_f2_2 = temp_f2 * temp_f2;
    temp_f0_2 = temp_f0 * temp_f0;
    if (D_800D98F0 != 0) {
        if (D_800BE9E4 < (s32) D_800D98F0) {
            D_800D98F0 -= D_800BE9E4;
            return;
        }
        D_800D98F0 = 0;
        return;
    }
    if (D_800A191C < ((temp_f2_2 * temp_f2_2) + (temp_f0_2 * temp_f0_2))) {
        func_100114D0(0, (s32) (*(s32 *)((char *)(temp_v0) + 0x18)), 0, 0x7FFF, 0x4E20, 0x4A38, &sp4C, &sp48, &sp44);
        sp4C += 0x80;
        D_800D98F0 = (random_u32() & 0x7F) + 0x80;
        func_10010F30((random_u32() % 3U) + 0x6C, 0x5DC0, unksp4F, 0, 0);
    }
}

void func_150F2230(void *arg0, s32 arg1, s32 arg2) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp20;

    if (((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
        sp2C = 0.0f;
        sp30 = 0.0f;
        sp34 = 0.0f;
        func_15143874((s16) (random_u32() & 0xFF), 0x42C80000, &sp2C, &sp34);
        func_15143134(&sp2C, &sp20, (*(s32 *)((char *)(arg0) + 0x1D4)) + 0x4C0);
        func_151C329C(&sp20, arg1, arg2);
    }
}
