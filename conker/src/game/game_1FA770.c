/**
 * Auto-decompiled from asm/1FA770.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1503F404(); /* extern */
s32 func_1504530C();                /* extern */
s32 func_15046C80();            /* extern */
void * func_1504715C();                       /* extern */
void * func_1505D024();                      /* extern */
u32 random_u32();                              /* extern */
f32 random_float();                             /* extern */
s32 func_1510F8CC();                             /* extern */
void *func_15130280();      /* extern */
void * func_1513173C();                            /* extern */
void * func_1513175C();                            /* extern */
void * func_15132A4C();          /* extern */
void *func_1513F4E4();               /* extern */
void *func_15142B7C();                  /* extern */
void *func_15142C10();    /* extern */
void *func_15142E24(); /* extern */
void *func_15142FBC();        /* extern */
void * func_15143134();                   /* extern */
void * func_151432BC();       /* extern */
void * func_15143794();                /* extern */
f32 func_15143E64();   /* extern */
f32 func_15144528();       /* extern */
f32 func_15144AA8();                              /* extern */
void *func_15144B34();                            /* extern */
void * func_15145EA4();              /* extern */
void * func_151478F4();                            /* extern */
void * func_15147928();                            /* extern */
void *func_15147A80(); /* extern */
s32 func_1514F6E8();                            /* extern */
void * func_1514F808();                    /* extern */
void * func_1514FF44();          /* extern */
void * func_1515080C(); /* extern */
void * func_15150D1C();                    /* extern */
void * func_15151A38();                      /* extern */
void * func_15152190(); /* extern */
void * func_15153CCC();          /* extern */
void * func_1515C1A0();              /* extern */
void * func_1515C244();             /* extern */
void * func_151A9834(); /* extern */
void * func_151D5D60();   /* extern */
void * memcpy();      /* extern */
void *func_151CD4C0();
void func_151CE47C();                /* static */
void *func_151CE634();                      /* static */
s32 func_151CEC10();
s32 func_151D10E4();            /* static */
void func_151D13E0();                     /* static */
void func_151D1448();                     /* static */
extern s32 D_8008FC30;
extern s32 D_80090B60;
extern s32 D_80091154;
extern s32 D_80091430;
extern s32 D_800A4AC8;
extern s32 D_800A5760;
extern s32 D_800AAEE0;
extern s32 D_800AAEEC;
extern s32 D_800AAF40;
extern s32 D_800AAF5C;
extern s32 D_800AAF74;
extern s32 D_800AAF80;
extern s32 D_800AAF84;
extern s32 D_800AAF90;
extern s32 D_800AAF9C;
extern f32 D_800AAFB4;
extern f32 D_800AAFB8;
extern f32 D_800AAFBC;
extern f32 D_800AAFC0;
extern f32 D_800AAFC4;
extern f32 D_800AAFC8;
extern f32 D_800AAFCC;
extern f32 D_800AAFD0;
extern f32 D_800AAFD4;
extern f32 D_800AAFD8;
extern f32 D_800AAFDC;
extern f32 D_800AAFE0;
extern f32 D_800AAFE4;
extern f32 D_800AAFE8;
extern f32 D_800AAFEC;
extern f32 D_800AAFF0;
extern f32 D_800AAFF4;
extern f32 D_800AAFF8;
extern f32 D_800AAFFC;
extern f32 D_800AB000;
extern f32 D_800AB004;
extern f32 D_800AB008;
extern f32 D_800AB00C;
extern f32 D_800AB010;
extern f32 D_800AB014;
extern f32 D_800AB018;
extern f32 D_800AB01C;
extern f32 D_800AB020;
extern f32 D_800AB024;
extern f32 D_800AB028;
extern f32 D_800AB02C;
extern f32 D_800AB030;
extern f32 D_800AB034;
extern f32 D_800AB038;
extern f32 D_800AB03C;
extern f32 D_800AB040;
extern f32 D_800AB044;
extern f32 D_800AB048;
extern f32 D_800AB04C;
extern f32 D_800AB050;
extern f32 D_800AB054;
extern f32 D_800AB058;
extern f32 D_800AB05C;
extern f32 D_800AB060;
extern f32 D_800AB064;
extern f32 D_800AB068;
extern f32 D_800AB06C;
extern f32 D_800AB070;
extern f32 D_800AB074;
extern f32 D_800AB078;
extern f32 D_800AB07C;
extern f32 D_800AB080;
extern f32 D_800AB084;
extern f32 D_800AB088;
extern f32 D_800AB08C;
extern f32 D_800AB090;
extern f32 D_800AB094;
extern f32 D_800AB098;
extern f32 D_800AB09C;
extern f32 D_800AB0A0;
extern f32 D_800AB0A4;
extern f32 D_800AB0A8;
extern f32 D_800AB0AC;
extern s32 D_800AB0B0;
extern s32 D_800AB0E0;
extern s32 D_800AB110;
extern s32 D_800AB114;
extern f32 D_800AB118;
extern f32 D_800AB11C;
extern f32 D_800AB120;
extern f32 D_800AB124;
extern f32 D_800AB128;
extern f32 D_800AB12C;
extern f32 D_800AB130;
extern f32 D_800AB134;
extern f32 D_800AB138;
extern f32 D_800AB13C;
extern s32 D_800D2C9C;
extern f32 D_800D9860;
extern s32 D_800DCE50;
void func_151D1368();

s32 func_151CD2C0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp44;
    s8 sp40;
    s32 sp3C;
    s32 sp38;
    void *sp34;
    s32 temp_v0;
    s32 var_v1;

    sp34 = arg0;
    sp3C = 0;
    sp38 = (*(s32 *)((char *)(arg0) + 0x18));
    sp40 = (s8) (*(s8 *)((char *)(arg0) + 0x1C));
    temp_v0 = func_15149130(0x12C, -1, -1, -1, 0, 0x1E, 0x10, (s32) arg1, arg2);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp44 = temp_v0;
        memcpy(temp_v0 + 0x28, &sp34, 0x10);
        var_v1 = sp44;
    }
    return var_v1;
}

void func_151CD35C(s32 arg0) {
    s32 sp1C;

    if ((arg0 >= 0) && (arg0 < 4)) {
        sp1C = arg0;
        func_151494E0(&sp1C, 0x17, arg0);
    }
}

void func_151CD394(s32 arg0) {
    s32 sp1C;

    if ((arg0 >= 0) && (arg0 < 4)) {
        sp1C = arg0;
        func_151494E0(&sp1C, 0x18, arg0);
    }
}

void func_151CD3CC(void *arg0, s32 *arg1, s32 arg2) {
    void *sp2C;
    s32 temp_a2;
    s32 temp_t6;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x17) {
        temp_v1 = (char *)(arg0) + 0x28;
        temp_a2 = (*(s32 *)((char *)(temp_v1) + 0x4));
        if ((temp_a2 == *arg1) && ((*(s32 *)((char *)(temp_v1) + 0x8)) == NULL)) {
            sp2C = temp_v1;
            (*(s32 *)((char *)(temp_v1) + 0x8)) = func_151CD4C0((*(s32 *)((char *)(arg0) + 0x28)), (*(s32 *)((char *)(temp_v1) + 0xC)), temp_a2, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x14)) = 0;
        }
    } else {
        temp_v1_2 = (char *)(arg0) + 0x28;
        if (temp_t6 == 0x18) {
            if ((*(s32 *)((char *)(temp_v1_2) + 0x4)) == *arg1) {
                temp_a0 = (*(s32 *)((char *)(temp_v1_2) + 0x8));
                if (temp_a0 != NULL) {
                    func_151CE47C(temp_a0, temp_t6);
                }
            }
        } else {
            temp_v1_3 = (char *)(arg0) + 0x28;
            if ((temp_t6 == 0x23) && ((*(s32 *)((char *)(temp_v1_3) + 0x4)) == *arg1)) {
                (*(s32 *)((char *)(temp_v1_3) + 0x8)) = 0;
                (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x14)) = 1;
            }
        }
    }
}

void *func_151CD4C0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 spB0;
    s8 spAD;
    s8 spAC;
    s32 spA8;
    s16 spA6;
    s16 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    u8 sp94;
    s32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
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
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f6;
    void *temp_v0;

    spAD = 0x23;
    temp_f18 = (f32) (*(f32 *)((char *)(arg0) + 0x6));
    temp_f16 = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    temp_f12 = temp_f18 * 0.125f;
    sp98 = temp_f16;
    sp9C = (f32) ((*(f32 *)((char *)(arg0) + 0x2)) + (*(f32 *)((char *)(arg0) + 0x8)));
    spA4 = 0x12C;
    spA6 = 0x34;
    spA8 = 0xB;
    temp_f6 = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    spA0 = temp_f6;
    sp6C = temp_f18 * 0.875f;
    sp58 = D_800AAFB4;
    sp48 = temp_f12;
    sp4C = temp_f12;
    sp5C = D_800AAFB8;
    sp50 = 0.0f;
    sp8C = (f32) (*(f32 *)((char *)(arg0) + 0x2));
    sp54 = 0.0f;
    sp60 = temp_f16;
    sp64 = temp_f6;
    sp7C = sp6C;
    sp70 = temp_f18 * 0.0625f;
    sp74 = 0.0f;
    sp78 = D_800AAFBC;
    sp88 = 0.0f;
    sp90 = arg2;
    sp80 = -16384.0f;
    sp84 = -16384.0f;
    sp68 = 0.0f;
    sp94 = arg1;
    spB0 = 0;
    spAC = 7;
    temp_v0 = func_15147A80(temp_f12, 0xC6800000, &sp98, 0x50, 0x1C, 9, 9, 9, 0, 0, 0, (s32) arg3, arg4);
    if (temp_v0 != NULL) {
        memcpy((*(s32 *)((char *)(temp_v0) + 0x98)), (void **) &sp48, 0x50);
    }
    return temp_v0;
}

s32 func_151CD674(void *arg0) {
    f32 temp_f0;
    s32 temp_v1;
    s8 var_a1;
    void *temp_a2;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x94));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(arg0) + 0x1E)) & 8)) {
        return 0;
    }
    var_a1 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_a1 -= 1;
            if (var_a1 < 0) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_a2 = (var_a1 * 0x1C) + temp_v1;
            temp_f0 = (*(s32 *)((char *)(temp_a2) + 0xC));
            (*(f32 *)((char *)(temp_a2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0x4)) + ((temp_f0 * D_800BE9A4) + (D_800AAFC4 * (D_800BE9A4 * D_800BE9A4))));
            (*(f32 *)((char *)(temp_a2) + 0xC)) = (f32) (temp_f0 + (D_800AAFC0 * D_800BE9A4));
            if ((*(s32 *)((char *)(temp_a2) + 0x4)) < (*(s32 *)((char *)(temp_v0) + 0x44))) {
                if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    do {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
                }
                (*(s32 *)((char *)((temp_v1 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x1C))) + 0x4)) = (*(s32 *)((char *)(temp_v0) + 0x44));
            }
        } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(arg0) + 0x10));
    (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
    (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
    return 1;
}

s32 func_151CD7BC(void *arg0) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA0;
    f32 sp9C;
    f32 sp90;
    f32 sp84;
    void *sp6C;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f28;
    f32 temp_f30;
    f32 temp_f8;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    s32 temp_s3;
    s8 temp_v1;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;

    temp_s1 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s3 = (*(s32 *)((char *)(arg0) + 0x94));
    (*(f32 *)((char *)(temp_s1) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x8)) + ((*(f32 *)((char *)(temp_s1) + 0x10)) * D_800BE9A4));
    (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) + ((*(f32 *)((char *)(temp_s1) + 0x14)) * D_800BE9A4));
    (*(s32 *)((char *)(temp_s1) + 0x8)) = func_15144B68((*(s32 *)((char *)(temp_s1) + 0x8)));
    (*(s32 *)((char *)(temp_s1) + 0xC)) = func_15144B68((*(s32 *)((char *)(temp_s1) + 0xC)));
    (*(f32 *)((char *)(temp_s1) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x2C)) + ((*(f32 *)((char *)(temp_s1) + 0x30)) * D_800BE9A4));
    (*(s32 *)((char *)(temp_s1) + 0x2C)) = func_15144B68((*(s32 *)((char *)(temp_s1) + 0x2C)));
    (*(f32 *)((char *)(temp_s1) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x40)) + (D_800AAFC8 * D_800BE9A4));
    (*(f32 *)((char *)(temp_s1) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x3C)) + ((D_800AAFCC + (random_float() * D_800AAFD0)) * D_800AAFD4 * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s1) + 0x3C)) >= 16384.0f) {
        do {
            (*(f32 *)((char *)(temp_s1) + 0x3C)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x3C)) - 16384.0f);
        } while ((*(s32 *)((char *)(temp_s1) + 0x3C)) >= 16384.0f);
    }
    temp_f0 = (*(s32 *)((char *)(temp_s1) + 0x40));
    if (temp_f0 > 1.0f) {
        temp_f28 = 1.0f / temp_f0;
        temp_v0 = (char *)(temp_s1) + 0x18;
        temp_f16 = (*(s32 *)((char *)(temp_s1) + 0x20)) + D_800BE9A4;
        spAC = -(temp_f16 * temp_f28);
        (*(s32 *)((char *)&(sp9C) + 0x0)) = (*(s32 *)((char *)(temp_s1) + 0x18));
        (*(s32 *)((char *)&(sp9C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
        spB0 = temp_f16;
        sp6C = temp_v0;
        temp_f30 = ((sinf((*(s32 *)((char *)(temp_s1) + 0x8))) * (*(s32 *)((char *)(temp_s1) + 0x0))) + (*(s32 *)((char *)(arg0) + 0x10))) - (*(s32 *)((char *)(temp_s1) + 0x18));
        spA8 = ((sinf((*(s32 *)((char *)(temp_s1) + 0xC))) * (*(s32 *)((char *)(temp_s1) + 0x4))) + (*(s32 *)((char *)(arg0) + 0x18))) - (*(s32 *)((char *)(temp_s1) + 0x1C));
        var_f12 = (*(s32 *)((char *)(temp_s1) + 0x34));
        var_f16 = temp_f16;
        temp_f8 = ((sinf((*(s32 *)((char *)(temp_s1) + 0x2C))) * (*(s32 *)((char *)(temp_s1) + 0x28))) + (*(s32 *)((char *)(temp_s1) + 0x24))) - var_f12;
        sp90 = temp_f8;
        var_f14 = (*(s32 *)((char *)(temp_s1) + 0x3C));
        sp84 = var_f14 - (*(s32 *)((char *)(temp_s1) + 0x38));
        if ((*(s32 *)((char *)(temp_s1) + 0x40)) > 1.0f) {
            do {
                temp_v0_2 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x1C) + temp_s3;
                (*(s32 *)((char *)(temp_v0_2) + 0x0)) = sp9C;
                (*(f32 *)((char *)(temp_v0_2) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
                (*(f32 *)((char *)(temp_v0_2) + 0xC)) = (f32) D_800AAFE0;
                (*(s32 *)((char *)(temp_v0_2) + 0x10)) = var_f12;
                (*(s32 *)((char *)(temp_v0_2) + 0x14)) = 0xFF;
                (*(s32 *)((char *)(temp_v0_2) + 0x18)) = var_f14;
                (*(s32 *)((char *)(temp_v0_2) + 0x8)) = spA0;
                var_f12 += temp_f8 * temp_f28;
                var_f14 += sp84 * temp_f28;
                (*(f32 *)((char *)(temp_v0_2) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0_2) + 0x4)) + ((D_800AAFE0 * D_800BE9A4) + (D_800AAFDC * (D_800BE9A4 * D_800BE9A4))));
                (*(f32 *)((char *)(temp_v0_2) + 0xC)) = (f32) (D_800AAFE0 + (D_800AAFD8 * D_800BE9A4));
                (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                    (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
                }
                temp_v1 = (*(s32 *)((char *)(arg0) + 0x2D));
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
                if (temp_v1 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                    (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v1 + 1);
                    if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                        (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                    }
                    (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                }
                sp9C += temp_f30 * temp_f28;
                var_f16 += spAC;
                spA0 += spA8 * temp_f28;
                (*(f32 *)((char *)(temp_s1) + 0x40)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x40)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s1) + 0x40)) > 1.0f);
        }
        (*(f32 *)((char *)(sp6C) + 0x0)) = (f32) (*(f32 *)((char *)&(sp9C) + 0x0));
        (*(s32 *)((char *)(sp6C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp9C) + 0x4));
        (*(s32 *)((char *)(temp_s1) + 0x34)) = var_f12;
        (*(s32 *)((char *)(temp_s1) + 0x38)) = var_f14;
        (*(s32 *)((char *)(temp_s1) + 0x20)) = var_f16;
    }
    return 1;
}

s32 func_151CDB94(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    s32 temp_v0;
    s32 var_v1;
    s8 temp_a2;
    s8 var_v1_2;
    void *temp_a1;
    void *temp_a2_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x94));
    if ((*(s32 *)((char *)(arg0) + 0x2C)) <= 0) {

    } else {
        var_v1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
        if (var_v1 < 0) {
            var_v1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
        }
        temp_a2 = (*(s32 *)((char *)(arg0) + 0x2D));
        temp_a1 = (temp_a2 * 0x1C) + temp_v0;
        temp_f0 = fabsf((*(s32 *)((char *)(((var_v1 * 0x1C) + temp_v0)) + 0x4)) - (*(s32 *)((char *)(temp_a1) + 0x4)));
        if (temp_f0 == 0.0f) {

        } else {
            temp_f14 = 1.0f / temp_f0;
            var_v1_2 = temp_a2;
            do {
                temp_a2_2 = (var_v1_2 * 0x1C) + temp_v0;
                (*(s32 *)((char *)(temp_a2_2) + 0x14)) = 0xFF;
                temp_f12 = (*(s32 *)((char *)(temp_a2_2) + 0x4)) - (*(s32 *)((char *)(temp_a1) + 0x4));
                if (temp_f12 < (temp_f0 * D_800AAFE4)) {
                    (*(s16 *)((char *)(temp_a2_2) + 0x14)) = (s16) ((u32) (temp_f12 * (temp_f14 * D_800AAFEC) * 255.0f) & 0xFF);
                } else if ((temp_f0 - (temp_f0 * D_800AAFE8)) < temp_f12) {
                    (*(s16 *)((char *)(temp_a2_2) + 0x14)) = (s16) ((u32) ((temp_f0 - temp_f12) * (temp_f14 * 10.0f) * 255.0f) & 0xFF);
                }
                var_v1_2 += 1;
                if (var_v1_2 >= (s32) (*(s32 *)((char *)(arg0) + 0x25))) {
                    var_v1_2 = 0;
                }
            } while (var_v1_2 != (*(s32 *)((char *)(arg0) + 0x2E)));
        }
    }
    return 1;
}

void *func_151CDE20(void *arg0, void *arg1, s32 arg2) {
    void **spBC;
    s8 spB3;
    f32 sp9C;
    f32 sp90;
    f32 *sp70;
    f32 *sp6C;
    f32 *var_a3;
    f32 *var_t0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_s4;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_s2;
    s32 var_s4;
    void **temp_t2;
    void **temp_t2_2;
    void *temp_s3;
    void *temp_s3_2;
    void *var_a2;
    void *var_s0;
    void *var_s3;

    f32 sp94;
    f32 sp98;
    f32 spA0;
    f32 spA4;
    var_s3 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &spBC, 0);
        if (spBC != NULL) {
            temp_s6 = (*(s32 *)((char *)(arg0) + 0x94));
            spB3 = 1;
            temp_v0 = *(&D_800AAEE0 + ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x4C)) * 4));
            var_s3 = func_15142FBC(func_15142B7C(func_1513F4E4(func_15142E24(var_s3, (temp_v0 * 0xC) + &D_80090B60, 0, 0, 0, 0, temp_v0, 0, 0, &spB3, 3), 0x4E, &spB3), 0x200005, 0x1F0600), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x1C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x18)), &spB3);
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                var_s2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_s2 < 0) {
                    var_s2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                (*(s32 *)((char *)&(sp90) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                var_a2 = temp_s6 + (var_s2 * 0x1C);
                (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
            } else {
                var_s4 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_s4 < 0) {
                    var_s4 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_s2 = var_s4 - 1;
                if (var_s2 < 0) {
                    var_s2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_a2 = temp_s6 + (var_s4 * 0x1C);
                (*(s32 *)((char *)&(sp90) + 0x0)) = (*(s32 *)((char *)(var_a2) + 0x0));
                (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)(var_a2) + 0x4));
                (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)(var_a2) + 0x8));
            }
            var_s0 = temp_s6 + (var_s2 * 0x1C);
            (*(s32 *)((char *)&(sp9C) + 0x0)) = (*(s32 *)((char *)(var_s0) + 0x0));
            temp_v0_2 = arg2 * 4;
            var_a3 = temp_v0_2 + D_800DD1D8;
            (*(s32 *)((char *)&(sp9C) + 0x4)) = (s32) (*(s32 *)((char *)(var_s0) + 0x4));
            (*(s32 *)((char *)&(sp9C) + 0x8)) = (s32) (*(s32 *)((char *)(var_s0) + 0x8));
            temp_f0 = (*(s32 *)((char *)(var_a2) + 0x10));
            var_t0 = temp_v0_2 + D_800DD1E8;
            temp_f2 = temp_f0 * *var_a3;
            temp_f12 = temp_f0 * *var_t0;
            (*(s16 *)((char *)(spBC) + 0x0)) = (s16) (s32) (sp90 + temp_f12);
            (*(s16 *)((char *)(spBC) + 0x2)) = (s16) (s32) sp94;
            (*(s16 *)((char *)(spBC) + 0x4)) = (s16) (s32) (sp98 - temp_f2);
            (*(s32 *)((char *)(spBC) + 0x8)) = 0;
            (*(s16 *)((char *)(spBC) + 0xA)) = (s16) (s32) (*(s16 *)((char *)(var_a2) + 0x18));
            (*(s32 *)((char *)(spBC) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spBC) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spBC) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(spBC) + 0xF)) = (s8) (*(s8 *)((char *)(var_a2) + 0x14));
            (*(s32 *)((char *)(spBC) + 0x6)) = 0;
            spBC = (char *)(spBC) + 0x10;
            (*(s16 *)((char *)(spBC) + 0x10)) = (s16) (s32) (sp90 - temp_f12);
            (*(s16 *)((char *)(spBC) + 0x2)) = (s16) (s32) sp94;
            (*(s16 *)((char *)(spBC) + 0x4)) = (s16) (s32) (sp98 + temp_f2);
            (*(s32 *)((char *)(spBC) + 0x8)) = 0x7FF;
            (*(s16 *)((char *)(spBC) + 0xA)) = (s16) (s32) (*(s16 *)((char *)(var_a2) + 0x18));
            (*(s32 *)((char *)(spBC) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(spBC) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(spBC) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(spBC) + 0xF)) = (s8) (*(s8 *)((char *)(var_a2) + 0x14));
            (*(s32 *)((char *)(spBC) + 0x6)) = 0;
            spBC = (char *)(spBC) + 0x10;
            do {
                temp_f0_2 = (*(s32 *)((char *)(var_s0) + 0x10));
                temp_f2_2 = temp_f0_2 * *var_a3;
                temp_f12_2 = temp_f0_2 * *var_t0;
                (*(s16 *)((char *)(spBC) + 0x0)) = (s16) (s32) (sp9C + temp_f12_2);
                (*(s16 *)((char *)(spBC) + 0x2)) = (s16) (s32) spA0;
                (*(s16 *)((char *)(spBC) + 0x4)) = (s16) (s32) (spA4 - temp_f2_2);
                (*(s32 *)((char *)(spBC) + 0x8)) = 0;
                (*(s16 *)((char *)(spBC) + 0xA)) = (s16) (s32) (*(s16 *)((char *)(var_s0) + 0x18));
                (*(s32 *)((char *)(spBC) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spBC) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spBC) + 0xE)) = 0xFF;
                (*(s8 *)((char *)(spBC) + 0xF)) = (s8) (*(s8 *)((char *)(var_s0) + 0x14));
                (*(s32 *)((char *)(spBC) + 0x6)) = 0;
                temp_t2 = (char *)(spBC) + 0x10;
                spBC = temp_t2;
                (*(s16 *)((char *)(spBC) + 0x10)) = (s16) (s32) (sp9C - temp_f12_2);
                (*(s16 *)((char *)(temp_t2) + 0x2)) = (s16) (s32) spA0;
                (*(s32 *)((char *)(temp_t2) + 0x8)) = 0x7FF;
                (*(s16 *)((char *)(temp_t2) + 0x4)) = (s16) (s32) (spA4 + temp_f2_2);
                (*(s32 *)((char *)(temp_t2) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(temp_t2) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(temp_t2) + 0xE)) = 0xFF;
                (*(s16 *)((char *)(temp_t2) + 0xA)) = (s16) (s32) (*(s16 *)((char *)(var_s0) + 0x18));
                (*(s32 *)((char *)(temp_t2) + 0x6)) = 0;
                (*(s8 *)((char *)(temp_t2) + 0xF)) = (s8) (*(s8 *)((char *)(var_s0) + 0x14));
                spBC = (char *)(temp_t2) + 0x10;
                (*(s32 *)((char *)(var_s3) + 0x0)) = 0x01004008;
                temp_s3 = (char *)(var_s3) + 8;
                (*(s32 *)((char *)(var_s3) + 0x4)) = (void **) ((char *)(spBC) - 0x40);
                temp_s3_2 = (char *)(temp_s3) + 8;
                (*(s32 *)((char *)(var_s3) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s3) + 0x4)) = 0;
                (*(s32 *)((char *)(temp_s3) + 0x8)) = 0x05020604;
                (*(s32 *)((char *)(temp_s3_2) + 0x4)) = 0;
                var_s3 = (char *)(temp_s3_2) + 8;
                var_a1 = 0;
                if ((*(s32 *)((char *)(var_a2) + 0x18)) < (*(s32 *)((char *)(var_s0) + 0x18))) {
                    var_a1 = 1;
                }
                temp_s4 = var_s2;
                if (var_a1 != 0) {
                    sp70 = var_a3;
                    sp6C = var_t0;
                    memcpy((*(void ** *)&temp_f12_2), spBC, (char *)(spBC) - 0x20, 0x20, var_a3);
                    (*(s16 *)((char *)(spBC) - 0x16)) = (s16) ((*(s16 *)((char *)(spBC) - 0x16)) - 0x4000);
                    temp_t2_2 = (char *)(spBC) + 0x10;
                    spBC = temp_t2_2;
                    (*(s16 *)((char *)(temp_t2_2) - 0x16)) = (s16) ((*(s16 *)((char *)(temp_t2_2) - 0x16)) - 0x4000);
                    spBC = (char *)(spBC) + 0x10;
                }
                var_s2 -= 1;
                var_s0 = (char *)(var_s0) - 0x1C;
                if (var_s2 < 0) {
                    var_s2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    var_s0 = temp_s6 + (var_s2 * 0x1C);
                }
                var_a2 = temp_s6 + (temp_s4 * 0x1C);
                (*(s32 *)((char *)&(sp90) + 0x0)) = (*(s32 *)((char *)(var_a2) + 0x0));
                (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)(var_a2) + 0x4));
                (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)(var_a2) + 0x8));
                (*(s32 *)((char *)&(sp9C) + 0x0)) = (*(s32 *)((char *)(var_s0) + 0x0));
                (*(s32 *)((char *)&(sp9C) + 0x4)) = (s32) (*(s32 *)((char *)(var_s0) + 0x4));
                (*(s32 *)((char *)&(sp9C) + 0x8)) = (s32) (*(s32 *)((char *)(var_s0) + 0x8));
            } while (temp_s4 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s3;
}

void func_151CE47C(void *arg0) {
    u16 temp_t8;

    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    temp_t8 = (*(s32 *)((char *)(arg0) + 0x1E)) & 0xFFFD;
    (*(s32 *)((char *)(arg0) + 0x1E)) = temp_t8;
    (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) (temp_t8 | 8);
}

void func_151CE49C(void *arg0) {
    s32 sp1C;

    sp1C = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x48));
    func_151494E0(&sp1C, 0x23);
    func_151478F4(arg0);
}

void func_151CE4DC(void *arg0) {
    s32 sp1C;

    sp1C = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x48));
    func_151494E0(&sp1C, 0x23);
    func_15147928(arg0);
}

void func_151CE51C(s32 arg0, void *arg1) {
    void * sp44;
    void * sp40;
    f32 sp3C;
    void *sp38;
    s32 var_v0;
    void *temp_v0;

    f32 sp48;
    temp_v0 = func_151CE634((*(s32 *)((char *)(arg1) + 0x18)));
    if (temp_v0 != NULL) {
        sp38 = temp_v0;
        func_1515C1A0(arg0, &sp44, &sp40, &sp3C);
        if ((*(s32 *)((char *)(sp38) + 0x1E)) & 8) {
            if ((*(s32 *)((char *)(sp38) + 0x2C)) > 0) {
                var_v0 = (*(s32 *)((char *)(sp38) + 0x2E)) - 1;
                if (var_v0 < 0) {
                    var_v0 = (*(s32 *)((char *)(sp38) + 0x25)) - 1;
                }
                if ((sp48 - sp3C) <= (*(s32 *)((char *)(((*(s32 *)((char *)(sp38) + 0x94)) + (var_v0 * 0x1C))) + 0x4))) {
                    func_1505D024(arg0, 0x60019, 0, -1);
                }
            }
        } else if (((*(s32 *)((char *)(sp38) + 0x2C)) > 0) && ((*(s32 *)((char *)(((*(s32 *)((char *)(sp38) + 0x94)) + ((*(s32 *)((char *)(sp38) + 0x2D)) * 0x1C))) + 0x4)) <= (sp48 + sp3C))) {
            func_1505D024(arg0, 0x60019, 0, -1);
        }
    }
}

void *func_151CE634(s32 arg0) {
    void * *var_a0;
    s32 temp_t4;
    s32 var_v0;
    void **var_a1;
    void *var_v1;

    var_v0 = 0;
loop_1:
    var_a0 = &D_800DCE50;
    var_a1 = (*(&D_800A5760 + (var_v0 * 4)) * 4) + &D_800DCE50;
loop_2:
    var_v1 = *var_a1;
    if (var_v1 != NULL) {
loop_3:
        if (((*(s32 *)((char *)(var_v1) + 0x20)) == 0xB) && (arg0 == (*(s32 *)((char *)((*(s32 *)((char *)(var_v1) + 0x98))) + 0x48)))) {
            return var_v1;
        }
        var_v1 = (*(s32 *)((char *)(var_v1) + 0x8));
        if (var_v1 == NULL) {
            goto block_7;
        }
        goto loop_3;
    }
block_7:
    var_a0 = (char *)(var_a0) + 0x1A0;
    var_a1 = (char *)(var_a1) + 0x1A0;
    if ((char *)(var_a0) == (char *)(&D_800DD190)) {
        temp_t4 = (var_v0 + 1) & 0xFF;
        var_v0 = temp_t4;
        if (temp_t4 >= 2) {
            return NULL;
        }
        goto loop_1;
    }
    goto loop_2;
}

void func_151CE6D0(void *arg0) {
    void *spEC;
    s8 spEB;
    s8 spEA;
    s8 spE9;
    s8 spE8;
    s32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    void * spC8;
    f32 spC4;
    void * spC0;
    f32 spBC;
    f32 spB8;
    s8 spB7;
    s8 spB6;
    s8 spB5;
    s8 spB4;
    s32 spB0;
    s32 spAC;
    s16 spA8;
    s16 spA6;
    s8 spA5;
    s8 spA4;
    s32 spA0;
    f32 temp_f22;
    f32 temp_f26;
    f32 temp_f28;
    s16 var_v1;
    s32 temp_t7;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) + ((D_800AAFF0 + (random_float() * D_800AAFF4)) * D_800AAFF8 * D_800BE9A4 * (*(f32 *)((char *)(temp_s0) + 0x4))));
    if ((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f) {
        var_v0 = 0;
        var_v1 = 0;
        if (D_80082FA0 >= 0) {
            do {
                temp_t7 = 1 << var_v0;
                var_v0 += 1;
                var_v1 |= temp_t7;
            } while (D_80082FA0 >= var_v0);
        }
        if (!((*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0xC))) + 0x2)) & var_v1)) {
            do {
                (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f);
            return;
        }
        temp_f28 = D_800AAFFC;
        spA4 = 0x6A;
        spA5 = 0;
        spA6 = 0x2203;
        spA8 = 0x64;
        spAC = 0;
        spB0 = 0;
        spB4 = 0xFF;
        spB5 = 0xFF;
        spB6 = 0xFF;
        spB7 = 0xFF;
        spD0 = 0.0f;
        spD4 = 0.0f;
        spDC = 0.0f;
        spE0 = 1.0f;
        spE4 = 0x01CC0061;
        spE9 = 0xFF;
        spEA = 0;
        spEB = 7;
        temp_f26 = D_800AB000;
        temp_f22 = D_800AB004;
        spEC = (*(s32 *)((char *)(temp_s0) + 0xC));
        do {
            spCC = ((random_float() * temp_f26) + temp_f28) * temp_f22;
            spD8 = ((random_float() * 121.0f) + 23.0f) * temp_f22;
            spB8 = (random_float() * 25.0f) + 10.0f;
            spBC = (random_float() * 60.0f) + 60.0f;
            func_151432BC((*(s32 *)((char *)(arg0) + 0x28)), &spC0, &spC8, &spA0, &spC4);
            if (func_1504530C(&spC0, spA0, (char *)(temp_s0) + 0x10) != 0) {
                spC4 = (*(s32 *)((char *)(temp_s0) + 0x10));
                spE8 = (random_u32() % 101U) + 0x9B;
                func_1513D2F0(&spA4, &D_800A4AA0, 0x1C, 0, 0, 0x22, 0, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            }
            (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f);
    }
}

s32 func_151CEA20(void *arg0) {
    f32 temp_f12;
    f32 temp_f2;

    temp_f12 = (*(s32 *)((char *)(arg0) + 0x40));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x44));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (temp_f2 + (temp_f12 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((temp_f2 + (0.5f * temp_f12 * D_800BE9A4)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x50)) > 1.0f) {
        (*(s32 *)((char *)(arg0) + 0x50)) = 1.0f;
    }
    return 1;
}

void *func_151CEAAC(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 sp81;
    s8 sp80;
    s32 sp7C;
    s16 sp7A;
    s16 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s8 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    void *sp4C;
    u8 sp48;
    void *sp44;
    void *sp40;
    s32 temp_t6;
    s8 var_v0;
    void *temp_v0;
    void *var_v1;

    temp_t6 = arg2 & 0xFF;
    sp81 = 0x19;
    sp78 = 0x12C;
    sp7A = 0x10;
    sp7C = 0x11;
    sp80 = 3;
    sp44 = arg0;
    if (arg0 != NULL) {
        sp48 = (*(s32 *)((char *)(arg0) + 0x3B));
    } else {
        sp48 = 0;
    }
    sp54 = 1.0f;
    sp5C = 1.0f;
    sp4C = arg1;
    sp50 = 0.0f;
    sp58 = 0.0f;
    if (temp_t6 != 0) {
        var_v0 = 2;
    } else {
        var_v0 = 0;
    }
    sp60 = var_v0;
    sp64 = (random_float(temp_t6) * 400.0f) + 400.0f;
    sp68 = 2.0f * random_float(0x43C80000) * D_800AB008;
    if (func_151CEC10(&sp6C, arg0, arg1) == 0) {
        sp6C = 0.0f;
        sp70 = 0.0f;
        sp74 = 0.0f;
    }
    temp_v0 = func_15147A80((f32)(s32)&sp6C, 0x28, 0x28, 0, 0xF, 0xF, 0, 0, 0, (s32) arg3, arg4);
    var_v1 = temp_v0;
    if (temp_v0 != NULL) {
        sp40 = temp_v0;
        memcpy((*(s32 *)((char *)(temp_v0) + 0x98)), &sp44, 0x28);
        var_v1 = sp40;
    }
    return var_v1;
}

s32 func_151CEC10(f32 *arg0, void *arg1, void *arg2) {
    if (arg2 != NULL) {
        (*(s32 *)((char *)(arg0) + 0x0)) = (*(s32 *)((char *)(arg2) + 0x40));
        (*(s32 *)((char *)(arg0) + 0x4)) = (s32) (*(s32 *)((char *)(arg2) + 0x44));
        (*(s32 *)((char *)(arg0) + 0x8)) = (s32) (*(s32 *)((char *)(arg2) + 0x48));
        return 1;
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = (*(s32 *)((char *)(arg1) + 0x14));
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x18));
    (*(s32 *)((char *)(arg0) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x1C));
    return 1;
}

s32 func_151CEC54(void *arg0) {
    void *spAC;
    s32 spA8;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp54;
    f32 sp4C;
    f32 sp48;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 *sp2C;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f8;
    s16 temp_v0;
    s16 var_a2;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_t0;
    s8 temp_a0_3;
    u8 temp_a0_2;
    void *temp_a0_4;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0_2;
    void *temp_v1;

    f32 sp9C;
    f32 sp98;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_t0 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_a1 = (*(s32 *)((char *)(temp_v1) + 0x0));
    if ((temp_a1 != NULL) && (((*(s32 *)((char *)(temp_a1) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v1) + 0x4)) != (*(s32 *)((char *)(temp_a1) + 0x3B))))) {
        return 0;
    }
    temp_a0 = (char *)(arg0) + 0x10;
    if (D_800BE9E4 > 0) {
        (*(s32 *)((char *)&(sp94) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
        (*(s32 *)((char *)&(sp94) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a0) + 0x4));
        (*(f32 *)((char *)&(sp94) + 0x8)) = (f32) (*(f32 *)((char *)(temp_a0) + 0x8));
        spA8 = temp_t0;
        sp2C = temp_a0;
        spAC = temp_v1;
        if (func_151CEC10(temp_a0, temp_a1, (*(s32 *)((char *)(temp_v1) + 0x8))) != 0) {
            if (!((*(s32 *)((char *)(arg0) + 0x1E)) & 4)) {
                (*(s32 *)((char *)&(sp94) + 0x0)) = (*(s32 *)((char *)(sp2C) + 0x0));
                (*(s32 *)((char *)&(sp94) + 0x4)) = (s32) (*(s32 *)((char *)(sp2C) + 0x4));
                (*(f32 *)((char *)&(sp94) + 0x8)) = (f32) (*(f32 *)((char *)(sp2C) + 0x8));
            } else {
                temp_a0_2 = (*(s32 *)((char *)(temp_v1) + 0x1C));
                if (!(temp_a0_2 & 1)) {
                    temp_f16 = (*(s32 *)((char *)(arg0) + 0x10)) - sp94;
                    temp_f18 = (*(s32 *)((char *)(arg0) + 0x18)) - sp9C;
                    temp_f0 = sqrtf((temp_f16 * temp_f16) + (temp_f18 * temp_f18));
                    if (temp_f0 != 0.0f) {
                        temp_f2 = 1.0f / temp_f0;
                        (*(u8 *)((char *)(temp_v1) + 0x1C)) = (u8) (temp_a0_2 | 1);
                        temp_f14 = -(temp_f18 * temp_f2);
                        (*(s32 *)((char *)(temp_v1) + 0x14)) = temp_f14;
                        temp_f12 = temp_f16 * temp_f2;
                        (*(f32 *)((char *)(temp_v1) + 0xC)) = (f32) (temp_f14 * 51.0f);
                        (*(s32 *)((char *)(temp_v1) + 0x18)) = temp_f12;
                        (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) (temp_f12 * 51.0f);
                    }
                }
            }
            (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 4);
            sp88 = (*(s32 *)((char *)(arg0) + 0x10)) - sp94;
            sp8C = (*(s32 *)((char *)(arg0) + 0x14)) - sp98;
            spA8 = temp_t0;
            spAC = temp_v1;
            sp90 = (*(s32 *)((char *)(arg0) + 0x18)) - sp9C;
            temp_f0_2 = func_15143E64(&sp88);
            if (D_800AB00C < temp_f0_2) {
                temp_a1_2 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x28) + spA8;
                (*(f32 *)((char *)(temp_a1_2) + 0x0)) = (f32) (*(f32 *)((char *)(sp2C) + 0x0));
                (*(s32 *)((char *)(temp_a1_2) + 0x4)) = (s32) (*(s32 *)((char *)(sp2C) + 0x4));
                (*(s32 *)((char *)(temp_a1_2) + 0xC)) = temp_f0_2;
                (*(f32 *)((char *)(temp_a1_2) + 0x8)) = (f32) (*(f32 *)((char *)(sp2C) + 0x8));
                temp_f0_3 = sqrtf((sp88 * sp88) + (sp90 * sp90));
                if (temp_f0_3 == 0.0f) {
                    (*(s32 *)((char *)(temp_a1_2) + 0x10)) = 1.0f;
                } else {
                    (*(f32 *)((char *)(temp_a1_2) + 0x10)) = (f32) (1.0f / temp_f0_3);
                }
                (*(s32 *)((char *)(temp_a1_2) + 0x14)) = 0.0f;
                (*(s32 *)((char *)(temp_a1_2) + 0x18)) = (s32) (*(s32 *)((char *)(spAC) + 0xC));
                (*(s32 *)((char *)(temp_a1_2) + 0x1C)) = (s32) (*(s32 *)((char *)(spAC) + 0x10));
                (*(s32 *)((char *)(temp_a1_2) + 0x20)) = (s32) (*(s32 *)((char *)(spAC) + 0x14));
                (*(s32 *)((char *)(temp_a1_2) + 0x24)) = (s32) (*(s32 *)((char *)(spAC) + 0x18));
                (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                    (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
                }
                temp_a0_3 = (*(s32 *)((char *)(arg0) + 0x2D));
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
                if (temp_a0_3 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                    (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_a0_3 + 1);
                    if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                        (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                    }
                    (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                }
                if (((*(s32 *)((char *)(spAC) + 0x1C)) & 2) && ((*(s32 *)((char *)(arg0) + 0x2C)) >= 3)) {
                    var_v1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                    if (var_v1 < 0) {
                        var_v1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    }
                    var_v1_2 = var_v1 - 1;
                    if (var_v1_2 < 0) {
                        var_v1_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    }
                    temp_v0 = var_v1_2 - 1;
                    var_a2 = temp_v0;
                    if (temp_v0 < 0) {
                        var_a2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    }
                    temp_f0_4 = (*(s32 *)((char *)(temp_a1_2) + 0x10));
                    temp_v0_2 = (var_v1_2 * 0x28) + spA8;
                    temp_f12_2 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
                    temp_f14_2 = (*(s32 *)((char *)(temp_v0_2) + 0x8));
                    temp_f2_2 = (*(s32 *)((char *)(temp_v0_2) + 0x10));
                    temp_f4 = ((*(s32 *)((char *)(temp_a1_2) + 0x8)) - temp_f14_2) * temp_f0_4;
                    temp_a0_4 = (var_a2 * 0x28) + spA8;
                    sp54 = temp_f4;
                    temp_f8 = ((*(s32 *)((char *)(temp_a0_4) + 0x0)) - temp_f12_2) * temp_f2_2;
                    sp48 = temp_f8;
                    temp_f10 = ((*(s32 *)((char *)(temp_a0_4) + 0x8)) - temp_f14_2) * temp_f2_2;
                    sp4C = temp_f10;
                    temp_f4_2 = -(temp_f4 - temp_f10);
                    sp3C = (((*(s32 *)((char *)(temp_a1_2) + 0x0)) - temp_f12_2) * temp_f0_4) - temp_f8;
                    sp38 = temp_f4_2;
                    temp_f16_2 = (temp_f4_2 * temp_f4_2) + (sp3C * sp3C);
                    sp34 = temp_f16_2;
                    if (D_800AB010 < temp_f16_2) {
                        temp_f2_3 = 1.0f / sqrtf(sp34);
                        sp38 = temp_f4_2 * temp_f2_3;
                        sp3C *= temp_f2_3;
                        (*(f32 *)((char *)(temp_v0_2) + 0x20)) = (f32) (*(f32 *)((char *)&(sp38) + 0x0));
                        (*(s32 *)((char *)(temp_v0_2) + 0x24)) = (s32) (*(s32 *)((char *)&(sp38) + 0x4));
                        (*(f32 *)((char *)(temp_v0_2) + 0x18)) = (f32) (sp38 * 51.0f);
                        (*(f32 *)((char *)(temp_v0_2) + 0x1C)) = (f32) (sp3C * 51.0f);
                    } else {
                        (*(s32 *)((char *)(temp_v0_2) + 0x18)) = 0.0f;
                        (*(s32 *)((char *)(temp_v0_2) + 0x1C)) = 0.0f;
                        (*(s32 *)((char *)(temp_v0_2) + 0x20)) = 0.0f;
                        (*(s32 *)((char *)(temp_v0_2) + 0x24)) = 0;
                    }
                }
            }
            goto block_35;
        }
        (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) & 0xFFFB);
        return 1;
    }
block_35:
    return 1;
}

s32 func_151CF120(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f20;
    f32 var_f22;
    f32 var_f26;
    s32 temp_a1;
    s32 temp_s3;
    s32 var_a0;
    s8 var_s1;
    void *temp_s2;
    void *temp_s4;
    void *temp_v0;
    void *temp_v1;

    temp_s4 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s3 = (*(s32 *)((char *)(arg0) + 0x94));
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_f26 = 0.0f;
        var_a0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
        if (var_a0 < 0) {
            var_a0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
        }
        if (var_a0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
            do {
                temp_a1 = var_a0;
                var_a0 -= 1;
                if (var_a0 < 0) {
                    var_a0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v1 = (temp_a1 * 0x28) + temp_s3;
                temp_f16 = (*(s32 *)((char *)(temp_v1) + 0xC));
                var_f26 += temp_f16;
                if ((*(s32 *)((char *)(temp_s4) + 0x20)) < var_f26) {
                    if (temp_f16 != 0.0f) {
                        temp_f14 = (var_f26 - (*(s32 *)((char *)(temp_s4) + 0x20))) / temp_f16;
                        temp_v0 = (var_a0 * 0x28) + temp_s3;
                        temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x0));
                        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x4));
                        temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x8));
                        (*(f32 *)((char *)(temp_v0) + 0x0)) = (f32) (temp_f0 - ((temp_f0 - (*(f32 *)((char *)(temp_v1) + 0x0))) * temp_f14));
                        (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) (temp_f2 - ((temp_f2 - (*(f32 *)((char *)(temp_v1) + 0x4))) * temp_f14));
                        (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) (temp_f12 - ((temp_f12 - (*(f32 *)((char *)(temp_v1) + 0x8))) * temp_f14));
                        (*(f32 *)((char *)(temp_v1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0xC)) * (1.0f - temp_f14));
                    }
                    if (var_a0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                        do {
                            (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                                (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                            }
                            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                        } while (var_a0 != (*(s32 *)((char *)(arg0) + 0x2D)));
                    }
                    var_f26 = (*(s32 *)((char *)(temp_s4) + 0x20));
                }
            } while (var_a0 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        temp_f26 = D_800AB014;
        var_f20 = 0.0f;
        var_s1 = (*(s32 *)((char *)(arg0) + 0x2E));
        var_f22 = (*(s32 *)((char *)(temp_s4) + 0x24));
        temp_f24 = D_800AB018;
        do {
            var_s1 -= 1;
            if (var_s1 < 0) {
                var_s1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_s2 = (var_s1 * 0x28) + temp_s3;
            temp_f2_2 = (*(s32 *)((char *)(temp_s2) + 0xC));
            (*(f32 *)((char *)(temp_s2) + 0x14)) = (f32) (sinf(var_f22) * var_f20);
            var_f20 += temp_f2_2 * temp_f24;
            var_f22 += temp_f2_2 * temp_f26;
        } while (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    (*(f32 *)((char *)(temp_s4) + 0x24)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x24)) + (D_800AB01C * D_800BE9A4));
    return 1;
}

void *func_151CF380(void *arg0, void *arg1, s32 arg2) {
    f32 sp90;
    f32 sp84;
    s32 sp78;
    s8 sp77;
    f32 sp54;
    f32 sp4C;
    void **sp48;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 var_f12;
    f32 var_f2;
    s32 temp_a1;
    s32 var_a0;
    s32 var_a1;
    void **temp_t6;
    void **temp_t9;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_s0;

    f32 sp88;
    f32 sp8C;
    f32 sp94;
    f32 sp98;
    f32 sp50;
    f32 sp58;
    var_s0 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) < 2) {

    } else {
        temp_v1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x98))));
        if ((temp_v1 != NULL) && ((*(s32 *)((char *)(temp_v1) + 0x1D4)) == 0)) {

        } else {
            sp78 = (*(s32 *)((char *)(arg0) + 0x94));
            func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &sp48, 0);
            sp77 = 1;
            var_s0 = func_15142FBC(func_1513F4E4(func_15142B7C(func_15142C10(var_s0, 0xED, 0xD2, 0x85, 0xC8, &sp77), 0x200005, 0x1F0600), 0x54, &sp77), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0xC)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x8)), &sp77);
            var_a1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
            if (var_a1 < 0) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_a0 = var_a1 - 1;
            if (var_a0 < 0) {
                var_a0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1_2 = sp78 + (var_a1 * 0x28);
            (*(s32 *)((char *)&(sp84) + 0x0)) = (*(s32 *)((char *)(temp_v1_2) + 0x0));
            (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x4));
            (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x8));
            temp_f14 = (*(s32 *)((char *)(temp_v1_2) + 0x14));
            (*(s32 *)((char *)&(sp4C) + 0x0)) = (*(s32 *)((char *)(temp_v1_2) + 0x18));
            temp_v0 = sp78 + (var_a0 * 0x28);
            (*(s32 *)((char *)&(sp4C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_2) + 0x1C));
            temp_f16 = (*(s32 *)((char *)(temp_v1_2) + 0x20)) * temp_f14;
            (*(s32 *)((char *)&(sp90) + 0x0)) = (*(s32 *)((char *)(temp_v0) + 0x0));
            temp_f18 = (*(s32 *)((char *)(temp_v1_2) + 0x24)) * temp_f14;
            (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
            (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
            temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x14));
            (*(s32 *)((char *)&(sp54) + 0x0)) = (*(s32 *)((char *)(temp_v0) + 0x18));
            var_f2 = (*(s32 *)((char *)(temp_v0) + 0x20)) * temp_f0;
            (*(s32 *)((char *)&(sp54) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x1C));
            var_f12 = (*(s32 *)((char *)(temp_v0) + 0x24)) * temp_f0;
            (*(s16 *)((char *)(sp48) + 0x0)) = (s16) (s32) (sp84 + sp4C + temp_f16);
            (*(s16 *)((char *)(sp48) + 0x2)) = (s16) (s32) sp88;
            (*(s16 *)((char *)(sp48) + 0x4)) = (s16) (s32) (sp8C + sp50 + temp_f18);
            (*(s32 *)((char *)(sp48) + 0x6)) = 0;
            temp_t6 = (char *)(sp48) + 0x10;
            sp48 = temp_t6;
            (*(s16 *)((char *)(sp48) + 0x10)) = (s16) (s32) ((sp84 - sp4C) + temp_f16);
            (*(s16 *)((char *)(sp48) + 0x2)) = (s16) (s32) sp88;
            (*(s16 *)((char *)(sp48) + 0x4)) = (s16) (s32) ((sp8C - sp50) + temp_f18);
            (*(s32 *)((char *)(sp48) + 0x6)) = 0;
            sp48 = (char *)(temp_t6) + 0x10;
            do {
                temp_a1 = var_a0;
                var_a0 -= 1;
                (*(s16 *)((char *)(sp48) + 0x0)) = (s16) (s32) (sp90 + sp54 + var_f2);
                (*(s16 *)((char *)(sp48) + 0x2)) = (s16) (s32) sp94;
                (*(s16 *)((char *)(sp48) + 0x4)) = (s16) (s32) (sp98 + sp58 + var_f12);
                (*(s32 *)((char *)(sp48) + 0x6)) = 0;
                temp_t9 = (char *)(sp48) + 0x10;
                sp48 = temp_t9;
                (*(s16 *)((char *)(sp48) + 0x10)) = (s16) (s32) ((sp90 - sp54) + var_f2);
                (*(s16 *)((char *)(sp48) + 0x2)) = (s16) (s32) sp94;
                (*(s16 *)((char *)(sp48) + 0x4)) = (s16) (s32) ((sp98 - sp58) + var_f12);
                (*(s32 *)((char *)(sp48) + 0x6)) = 0;
                sp48 = (char *)(temp_t9) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                temp_s0 = (char *)(var_s0) + 8;
                temp_v1_3 = temp_s0;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void **) ((char *)(sp48) - 0x40);
                var_s0 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(temp_v1_3) + 0x0)) = 0x06000204;
                (*(s32 *)((char *)(temp_v1_3) + 0x4)) = 0x20604;
                if (var_a0 < 0) {
                    var_a0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if (temp_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    temp_v1_4 = sp78 + (temp_a1 * 0x28);
                    (*(s32 *)((char *)&(sp84) + 0x0)) = (*(s32 *)((char *)(temp_v1_4) + 0x0));
                    (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_4) + 0x4));
                    temp_v0_2 = sp78 + (var_a0 * 0x28);
                    (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1_4) + 0x8));
                    (*(s32 *)((char *)&(sp90) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x0));
                    (*(s32 *)((char *)&(sp90) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
                    (*(s32 *)((char *)&(sp90) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
                    temp_f0_2 = (*(s32 *)((char *)(temp_v0_2) + 0x14));
                    (*(s32 *)((char *)&(sp54) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x18));
                    var_f2 = (*(s32 *)((char *)(temp_v0_2) + 0x20)) * temp_f0_2;
                    (*(s32 *)((char *)&(sp54) + 0x4)) = (s32) (*(s32 *)((char *)(((char *)(temp_v0_2) + 0x18)) + 0x4));
                    var_f12 = (*(s32 *)((char *)(temp_v0_2) + 0x24)) * temp_f0_2;
                    (*(s32 *)((char *)&(sp4C) + 0x0)) = (*(s32 *)((char *)(temp_v1_4) + 0x18));
                    (*(s32 *)((char *)&(sp4C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1_4) + 0x1C));
                }
            } while (temp_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s0;
}

void func_151CF844(void *arg0, s32 arg1, s32 arg2) {
    s32 *sp24;
    s32 *temp_t7;

    temp_t7 = (*(s32 *)((char *)(arg0) + 0x98));
    sp24 = temp_t7;
    if (*temp_t7 != 0) {
        func_15169850(arg1, arg2, temp_t7, temp_t7 + 4, arg0);
    }
}

void func_151CF898(void *arg0, f32 arg1, s32 arg2) {
    void *sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    void *sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    void *sp38;
    f32 temp_f6;
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x318));
    if (temp_v1 != NULL) {
        sp64 = temp_v1;
        if (random_float() < D_800AB020) {
            sp64 = temp_v1;
            sp54 = func_15144B34((*(s32 *)((char *)(temp_v1) + 0x23D)));
            sp50 = func_15144AA8((*(s32 *)((char *)(temp_v1) + 0x23D)));
            sp4C = ((random_float() * 80.0f) + (sp50 - 40.0f)) * D_800AB024;
            sp48 = random_float() * 2000.0f;
            temp_f6 = sinf(sp4C) * sp48;
            sp5C = arg1;
            sp58 = (*(s32 *)((char *)(sp54) + 0x0)) - temp_f6;
            sp60 = (*(s32 *)((char *)(sp54) + 0x8)) - (cosf(sp4C) * sp48);
            if (func_15046C80(&sp58, 0, arg2, &D_800D9860) != 0) {
                sp5C = D_800D9860;
                (*(s32 *)((char *)&(sp38) + 0x0)) = (void *) (*(s32 *)((char *)&(sp58) + 0x0));
                (*(s32 *)((char *)&(sp38) + 0x4)) = (s32) (*(s32 *)((char *)&(sp58) + 0x4));
                (*(s32 *)((char *)&(sp38) + 0x8)) = (s32) (*(s32 *)((char *)&(sp58) + 0x8));
                sp44 = 0.0f;
                temp_v0 = func_15149130((s16) ((random_u32() % 131U) + 0x33), -1, 0x20, -1, 1, 0, 0x10, 0xFF, 1);
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0x28, &sp38, 0x10);
                }
            }
        }
    }
}

void func_151CFA4C(void *arg0, s32 arg1, s32 arg2) {
    s32 sp180[64];
    void * sp244;
    void * sp240;
    void * sp23C;
    f32 sp238;
    f32 sp234;
    s32 sp230;
    void * sp22C;
    void * sp228;
    void * sp224;
    void * sp220;
    void * sp21C;
    void * sp218;
    s16 sp210;
    s16 sp20E;
    u8 sp20C;
    void *sp208;
    s8 sp206;
    s8 sp204;
    s8 sp203;
    s8 sp202;
    s8 sp201;
    s8 sp200;
    s8 sp1FF;
    s8 sp1FE;
    s8 sp1FD;
    s8 sp1FC;
    s32 sp1F8;
    s8 sp1F4;
    s16 sp1F2;
    s16 sp1F0;
    s32 sp1EC;
    f32 sp1E8;
    f32 sp1E4;
    f32 sp1E0;
    f32 sp1DC;
    void * sp1D0;
    f32 sp1C4;
    f32 sp1C0;
    f32 sp1BC;
    f32 sp1B8;
    void * sp1AC;
    f32 sp1A8;
    f32 sp1A4;
    f32 sp1A0;
    f32 sp19C;
    s16 sp176;
    s16 sp174;
    s8 sp171;
    s8 sp170;
    s32 sp16C;
    s32 sp168;
    s32 sp164;
    s32 sp160;
    s32 sp15C;
    s32 sp158;
    s32 sp154;
    s32 sp150;
    s32 sp14C;
    s8 sp14A;
    s8 sp149;
    s8 sp148;
    s32 sp144;
    s32 sp140;
    s32 sp13C;
    s32 sp138;
    s32 sp134;
    s32 sp130;
    s8 sp12E;
    s8 sp12D;
    s8 sp12C;
    s16 sp12A;
    s16 sp128;
    s16 sp126;
    s16 sp124;
    s16 sp122;
    s16 sp120;
    s16 sp11E;
    s16 sp11C;
    s16 sp11A;
    s16 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    void * spF4;
    s8 spF0;
    s16 spEE;
    s16 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    s16 spDE;
    s16 spDC;
    s16 spDA;
    s16 spD8;
    void * spCC;
    s32 spC8;
    s32 spC4;
    void * spA0;
    s8 sp9F;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    s32 temp_t0;
    s32 temp_v0;
    s32 var_s0;
    u32 temp_s1;
    u32 temp_s2;

    sp230 = (*(s32 *)((char *)(arg0) + 0x14));
    sp234 = (*(s32 *)((char *)(arg0) + 0x18)) + 200.0f;
    sp238 = (*(s32 *)((char *)(arg0) + 0x1C));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1D4));
    if (temp_v0 != 0) {
        func_1503F404(temp_v0, &sp224, &sp228, &sp22C, &sp23C, &sp240, &sp244, &sp218, &sp21C, &sp220);
        sp180[0] = (*(s32 *)((char *)&(D_800AAF40) + 0x0));
        sp180[1] = (s32) (*(s32 *)((char *)&(D_800AAF40) + 0x4));
        sp180[2] = (s32) (*(s32 *)((char *)&(D_800AAF40) + 0x8));
        sp180[3] = (s32) (*(s32 *)((char *)&(D_800AAF40) + 0xC));
        var_s0 = 0;
        sp180[4] = (s32) (*(s32 *)((char *)&(D_800AAF40) + 0x10));
        sp180[5] = (s32) (*(s32 *)((char *)&(D_800AAF40) + 0x14));
        sp180[6] = (s32) (*(s32 *)((char *)&(D_800AAF40) + 0x18));
        sp19C = 1.0f;
        sp1A0 = D_800AB028;
        temp_f16 = ((*(s32 *)((char *)(arg0) + 0x14C)) + (*(s32 *)((char *)(arg0) + 0x150))) * 0.5f;
        sp1A8 = temp_f16;
        sp1A4 = temp_f16;
        (*(s32 *)((char *)&(sp1AC) + 0x0)) = (s32) (*(s32 *)((char *)&(sp23C) + 0x0));
        (*(s32 *)((char *)&(sp1AC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp23C) + 0x4));
        (*(s32 *)((char *)&(sp1AC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp23C) + 0x8));
        temp_f30 = D_800AB02C;
        sp1B8 = 1.0f;
        sp1BC = 0.0f;
        sp1C0 = 1.0f;
        sp1E0 = 0.0f;
        sp1F4 = 0;
        sp1F8 = 0;
        sp1FC = 0xFF;
        sp1FE = 0;
        sp200 = 0;
        sp201 = 0;
        sp202 = 0;
        sp203 = 0;
        sp206 = 1;
        sp208 = arg0;
        temp_f28 = D_800AB030;
        temp_f26 = D_800AB034;
        temp_f24 = D_800AB038;
        temp_f22 = D_800AB03C;
        sp20E = 0xC;
        sp210 = 0x15;
        sp1EC = 0x39E9;
        sp1FD = 0xD;
        sp204 = 2;
        sp1FF = 7;
        temp_f20 = D_800AB040;
        sp20C = (*(s32 *)((char *)(arg0) + 0x3B));
        do {
            sp1F2 = (s16) (&sp180[0])[var_s0];
            func_15143134(&D_800AAEEC + (var_s0 * 0xC), &sp1C4, (*(s32 *)((char *)(arg0) + 0x1D4)));
            temp_s1 = random_u32();
            temp_s2 = random_u32();
            func_15143794((s16) (temp_s1 & 0xFF), (s16) ((temp_s2 % 25U) - 0x40), (random_float() * temp_f24) + temp_f26, &sp1D0);
            sp1DC = (random_float() * temp_f20) + temp_f22;
            sp1E4 = (random_float() * temp_f20) + temp_f22;
            sp1E8 = (random_float() * temp_f28) + temp_f30;
            sp1F0 = (random_u32() % 101U) + 0x64;
            func_15132A4C(&sp19C, 3, 0xFF, 0, (s32) arg1, arg2);
            temp_t0 = (var_s0 + 1) & 0xFF;
            var_s0 = temp_t0;
        } while (temp_t0 < 7);
        (*(s32 *)((char *)&(spF4) + 0x0)) = (s32) (*(s32 *)((char *)&(sp230) + 0x0));
        (*(s32 *)((char *)&(spF4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp230) + 0x4));
        (*(s32 *)((char *)&(spF4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp230) + 0x8));
        sp118 = 0xD;
        sp11A = 6;
        sp11E = 0xFF;
        sp120 = -0x40;
        sp122 = 0x32;
        sp128 = 0x28;
        sp12A = 0x19;
        sp124 = 3;
        sp126 = 2;
        sp12C = 9;
        sp12D = 1;
        sp12E = 0x48;
        sp130 = 1;
        sp149 = 0x96;
        sp14A = 0x69;
        sp14C = 3;
        sp11C = 0;
        sp134 = 0;
        sp138 = 0;
        sp13C = 0;
        sp140 = 0;
        sp144 = 0;
        sp148 = 0;
        sp150 = 0xFF;
        sp154 = 0;
        sp158 = 0x220005;
        sp15C = 0x1D0600;
        sp160 = 3;
        sp164 = 0x3B;
        sp168 = 0x80;
        sp16C = 0x20;
        sp170 = 0;
        sp171 = 7;
        sp174 = 0xA;
        sp176 = 0x19;
        sp100 = 8.0f;
        sp104 = 13.0f;
        sp108 = D_800AB044;
        sp10C = D_800AB048;
        sp110 = 23.0f;
        sp114 = 7.0f;
        func_15151A38(&spF4, arg1, arg2);
        spC4 = 0xF;
        spC8 = 6;
        (*(s32 *)((char *)&(spCC) + 0x0)) = (s32) (*(s32 *)((char *)&(sp230) + 0x0));
        (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp230) + 0x4));
        (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp230) + 0x8));
        spD8 = 0;
        spDA = 0xFF;
        spDC = -0x1D;
        spDE = 0x28;
        spEC = 0x78;
        spEE = 0x78;
        spF0 = 2;
        spE0 = D_800AB04C;
        spE4 = 20.0f;
        spE8 = 40.0f;
        func_15150D1C(&spC4, arg1, arg2);
        func_1504715C(&spA0, arg0);
        sp9F = 2;
        func_151A9834(&sp230, sp234 - 2000.0f, 0x43480000, &spA0, (random_u32() & 3) + 7, 0, &sp9F, (s32) arg1, arg2);
    }
}

void func_151D0024(void *arg0) {
    u8 sp1C;
    void *sp18;

    sp18 = arg0;
    sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
    func_151494E0((s32 *) &sp18, 0x18, (s32) arg0);
}

void func_151D0058(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 sp49;
    s8 sp48;
    f32 sp44;
    u16 sp42;
    u8 sp40;
    void *sp3C;
    s32 temp_v0;
    s8 temp_t6;

    temp_t6 = arg1 & 0xFF;
    sp3C = arg0;
    sp40 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp49 = temp_t6;
    sp44 = ((*(s32 *)((char *)(arg0) + 0x14C)) + (*(s32 *)((char *)(arg0) + 0x150))) * 0.5f;
    sp48 = (random_u32(temp_t6) % 56U) + 0xC8;
    sp42 = (*(s32 *)((char *)(arg0) + 0x84));
    temp_v0 = func_15149130(0x12C, -1, 0x61, 4, 0, 0x31, 0x10, (s32) arg2, arg3);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp3C, 0x10);
    }
}

void func_151D0128(void *arg0) {
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x84)) != (*(s32 *)((char *)(arg0) + 0x2E))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
    }
}

void *func_151D014C(void *arg0, void *arg1, s32 arg2) {
    void **sp140;
    s8 sp13B;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp10C;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 sp88;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f30;
    f32 var_f14;
    f32 var_f20;
    f32 var_f24;
    s32 temp_f4;
    s32 temp_f4_2;
    s32 var_s2;
    void **temp_t1;
    void **temp_t5;
    void **temp_t9;
    void *temp_s0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;
    void *var_s1;

    f32 sp104;
    f32 sp108;
    f32 sp110;
    f32 sp114;
    var_s1 = arg0;
    temp_s0 = (*(s32 *)((char *)(arg1) + 0x28));
    temp_s3 = (char *)(arg1) + 0x28;
    if (((*(s32 *)((char *)(temp_s0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s3) + 0x4)) != (*(s32 *)((char *)(temp_s0) + 0x3B)))) {
        (*(s32 *)((char *)(arg1) + 0xE)) = -1;
        return var_s1;
    }
    if ((*(s32 *)((char *)(temp_s0) + 0x1D4)) == 0) {

    } else {
        func_151D5D60((char *)(arg1) + 0x14, arg2, 0x1C0, &sp140, 0);
        if (sp140 == NULL) {

        } else {
            sp13B = 1;
            func_15143134(((*(s32 *)((char *)(temp_s3) + 0xD)) * 0xC) + &D_800AAF5C, &sp10C, (*(s32 *)((char *)(temp_s0) + 0x1D4)) + 0x80);
            func_15143134(&D_800AAF74, &sp100, (*(&D_800AAF80 + (*(s32 *)((char *)(temp_s3) + 0xD))) << 6) + (*(s32 *)((char *)(temp_s0) + 0x1D4)));
            temp_s2 = func_15144B34((u8) arg2);
            temp_v0 = func_15142FBC(func_15142C10(func_1513F4E4(func_15142E24(func_15142B7C(var_s1, 0x200005, 0x60600), &D_80091154, 0, 0, 0, 0, 0x7F, 0, 0, &sp13B, 3), 0x3B, &sp13B), 0xFF, 0xFF, 0xFF, (s32) (*(s32 *)((char *)(temp_s3) + 0xC)), &sp13B), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x1C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x18)), &sp13B);
            spF4 = sp100 - sp10C;
            var_s1 = temp_v0;
            spF8 = sp104 - sp110;
            spFC = sp108 - sp114;
            spD0 = func_15143E64(&spF4);
            temp_f20 = ((spF4 * 0.5f) + sp10C) - (*(s32 *)((char *)(temp_s2) + 0x0));
            sp88 = spF4;
            temp_f22 = ((spF8 * 0.5f) + sp110) - (*(s32 *)((char *)(temp_s2) + 0x4));
            var_s2 = 0;
            temp_f24 = ((spFC * 0.5f) + sp114) - (*(s32 *)((char *)(temp_s2) + 0x8));
            temp_f14 = (spF8 * temp_f24) - (temp_f22 * spFC);
            var_f24 = 0.0f;
            temp_f16 = (spFC * temp_f20) - (temp_f24 * spF4);
            var_f20 = 0.0f;
            temp_f18 = (spF4 * temp_f22) - (temp_f20 * spF8);
            temp_f26 = (temp_f14 * temp_f14) + (temp_f16 * temp_f16) + (temp_f18 * temp_f18);
            if (temp_f26 == 0.0f) {
                sp11C = 0.0f;
                sp120 = 0.0f;
                sp124 = 0.0f;
            } else {
                temp_f2 = (35.0f * (*(s32 *)((char *)(temp_s3) + 0x8))) / sqrtf(temp_f26);
                sp11C = temp_f14 * temp_f2;
                sp120 = temp_f16 * temp_f2;
                sp124 = temp_f18 * temp_f2;
            }
            var_f14 = 20.0f;
            temp_f26_2 = spF4 * D_800AB050;
            temp_f28 = spF8 * D_800AB050;
            temp_f30 = spFC * D_800AB050;
            if (spD0 < 20.0f) {
                spCC = 0.0f;
            } else if (spD0 < 70.0f) {
                spCC = (spD0 - 20.0f) * D_800AB054 * D_800AB058;
            } else {
                spCC = D_800AB05C;
            }
            (*(s32 *)((char *)&(spDC) + 0x0)) = (*(s32 *)((char *)&(sp10C) + 0x0));
            (*(s32 *)((char *)&(spDC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp10C) + 0x4));
            (*(s32 *)((char *)&(spDC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp10C) + 0x8));
            spD4 = 0.0f;
            do {
                temp_f2_2 = 1.0f - (sinf(var_f20) * spCC);
                temp_f12 = sp11C * temp_f2_2;
                (*(s16 *)((char *)(sp140) + 0x0)) = (s16) (s32) (temp_f12 + spDC);
                (*(s16 *)((char *)(sp140) + 0x2)) = (s16) (s32) ((sp120 * temp_f2_2) + spE0);
                temp_f4 = (s32) var_f24;
                (*(s16 *)((char *)(sp140) + 0x4)) = (s16) (s32) ((sp124 * temp_f2_2) + spE4);
                (*(s32 *)((char *)(sp140) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0xF)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0x8)) = 0;
                (*(s16 *)((char *)(sp140) + 0xA)) = (s16) temp_f4;
                temp_t5 = (char *)(sp140) + 0x10;
                sp140 = temp_t5;
                temp_t1 = (char *)(temp_t5) + 0x10;
                (*(s16 *)((char *)(sp140) + 0x10)) = (s16) (s32) (spDC - temp_f12);
                (*(s16 *)((char *)(temp_t5) + 0x2)) = (s16) (s32) (spE0 - (sp120 * temp_f2_2));
                (*(s32 *)((char *)(temp_t5) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(temp_t5) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(temp_t5) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(temp_t5) + 0xF)) = 0xFF;
                (*(s32 *)((char *)(temp_t5) + 0x8)) = 0x7C0;
                (*(s16 *)((char *)(temp_t5) + 0xA)) = (s16) temp_f4;
                (*(s16 *)((char *)(temp_t5) + 0x4)) = (s16) (s32) (spE4 - (sp124 * temp_f2_2));
                sp140 = temp_t1;
                temp_f22_2 = var_f20 + D_800AB060;
                var_s2 += 1;
                temp_f2_3 = 1.0f - (sinf(temp_f22_2) * spCC);
                temp_f12_2 = sp11C * temp_f2_3;
                (*(s16 *)((char *)(sp140) + 0x0)) = (s16) (s32) ((spDC + temp_f26_2) - temp_f12_2);
                temp_f14_2 = sp120 * temp_f2_3;
                (*(s16 *)((char *)(sp140) + 0x2)) = (s16) (s32) ((spE0 + temp_f28) - temp_f14_2);
                temp_f16_2 = sp124 * temp_f2_3;
                (*(s16 *)((char *)(sp140) + 0x4)) = (s16) (s32) ((spE4 + temp_f30) - temp_f16_2);
                (*(s32 *)((char *)(temp_t1) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0xF)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0x8)) = 0x7C0;
                temp_f18_2 = var_f24 + D_800AB064;
                temp_f4_2 = (s32) temp_f18_2;
                (*(s16 *)((char *)(sp140) + 0xA)) = (s16) temp_f4_2;
                temp_t9 = (char *)(sp140) + 0x10;
                sp140 = temp_t9;
                (*(s16 *)((char *)(sp140) + 0x10)) = (s16) (s32) (spDC + temp_f26_2 + temp_f12_2);
                (*(s16 *)((char *)(sp140) + 0x2)) = (s16) (s32) (spE0 + temp_f28 + temp_f14_2);
                (*(s16 *)((char *)(sp140) + 0x4)) = (s16) (s32) (spE4 + temp_f30 + temp_f16_2);
                (*(s32 *)((char *)(sp140) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(temp_t9) + 0xF)) = 0xFF;
                (*(s32 *)((char *)(sp140) + 0x8)) = 0;
                (*(s16 *)((char *)(sp140) + 0xA)) = (s16) temp_f4_2;
                sp140 = (char *)(sp140) + 0x10;
                (*(s32 *)((char *)(var_s1) + 0x0)) = 0x01004008;
                temp_s1 = (char *)(var_s1) + 8;
                (*(s32 *)((char *)(var_s1) + 0x4)) = (void **) ((char *)(sp140) - 0x40);
                temp_s1_2 = (char *)(temp_s1) + 8;
                (*(s32 *)((char *)(var_s1) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s1) + 0x4)) = 0;
                (*(s32 *)((char *)(temp_s1) + 0x8)) = 0x05000406;
                (*(s32 *)((char *)(temp_s1_2) + 0x4)) = 0;
                var_s1 = (char *)(temp_s1_2) + 8;
                var_f14 = spE0 + temp_f28;
                var_f20 = temp_f22_2;
                var_f24 = temp_f18_2;
                spDC += temp_f26_2;
                spE0 = var_f14;
                spE4 += temp_f30;
                spD4 += D_800AB068;
            } while (var_s2 != 6);
        }
    }
    return var_s1;
}

void func_151D08F0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if ((temp_t6 == 0) || (temp_t6 == 0x18)) {
        if (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0x28))) || ((*(u8 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(arg0, temp_t6, arg0);
        }
    } else {
        temp_v0 = (char *)(arg0) + 0x28;
        if (temp_t6 == 0x2D) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
            if (temp_v1 == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
                return;
            }
            if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a0) {
                (*(s32 *)((char *)(arg0) + 0x28)) = temp_v1;
                (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
            }
        }
    }
}

void func_151D09A8(void *arg0, s32 arg1, s32 arg2) {
    f32 sp1DC;
    f32 sp1D8;
    f32 sp1D4;
    f32 sp1D0;
    void * sp1AC;
    f32 sp1A8;
    void * sp19C;
    void * sp190;
    void * sp184;
    s8 sp180;
    void * *sp17C;
    void * *sp178;
    f32 *sp174;
    f32 *sp170;
    f32 sp16C;
    s8 sp168;
    f32 sp164;
    s8 sp161;
    s8 sp160;
    f32 sp15C;
    f32 sp158;
    s8 sp155;
    s8 sp154;
    f32 sp150;
    f32 sp14C;
    s16 sp14A;
    s16 sp148;
    f32 sp144;
    f32 sp140;
    s16 sp13E;
    s16 sp13C;
    void * sp130;
    s32 sp12C;
    s16 sp12A;
    s16 sp128;
    f32 sp124;
    s8 sp120;
    s16 sp11E;
    s16 sp11C;
    s16 sp11A;
    s16 sp118;
    s16 sp116;
    s16 sp114;
    s16 sp112;
    s16 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    void * spEC;
    f32 spE4;
    s16 spE0;
    s8 spDE;
    s8 spDD;
    s8 spDC;
    s8 spDB;
    s8 spDA;
    s8 spD9;
    s8 spD8;
    s32 spD4;
    s32 spD0;
    f32 spCC;
    void * spC0;
    void * spB4;
    void * spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s16 sp9A;
    s16 sp98;
    s16 sp96;
    s8 sp95;
    s8 sp94;
    s8 sp93;
    s8 sp92;
    s8 sp91;
    s8 sp90;
    s8 sp8F;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
    s32 sp88;
    s32 sp84;
    s16 sp82;
    s16 sp80;
    s32 sp7C;
    s32 sp78;
    void * sp64;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f26;
    s32 temp_s2;
    s32 var_s1;
    u32 temp_hi;
    void *temp_v0;

    f32 sp1E0;
    f32 sp1E4;
    temp_s2 = arg1 & 0xFF;
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        sp178 = &D_800AAF84;
        sp17C = &D_800AAF90;
        sp170 = &sp1DC;
        sp174 = &sp1D0;
        func_15145EA4(&sp178, &sp170, (*(s32 *)((char *)(arg0) + 0x1D4)) + 0x80, 2);
        sp1D0 -= sp1DC;
        sp1D4 -= sp1E0;
        sp1D8 -= sp1E4;
        func_1504715C(&sp1AC, arg0);
        temp_f22 = D_800AB06C;
        temp_f26 = D_800AB070;
        sp180 = 0;
        (*(f32 *)((char *)&(sp184) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1D0) + 0x0));
        (*(s32 *)((char *)&(sp184) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1D0) + 0x4));
        (*(s32 *)((char *)&(sp184) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1D0) + 0x8));
        (*(s32 *)((char *)&(sp64) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp64) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp64) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
        (*(s32 *)((char *)&(sp19C) + 0x0)) = (s32) (*(s32 *)((char *)&(sp64) + 0x0));
        (*(s32 *)((char *)&(sp19C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp64) + 0x4));
        (*(s32 *)((char *)&(sp19C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp64) + 0x8));
        (*(s32 *)((char *)&(sp190) + 0x0)) = (s32) (*(s32 *)((char *)&(sp64) + 0x0));
        (*(s32 *)((char *)&(sp190) + 0x4)) = (s32) (*(s32 *)((char *)&(sp64) + 0x4));
        (*(s32 *)((char *)&(sp190) + 0x8)) = (s32) (*(s32 *)((char *)&(sp64) + 0x8));
        (*(f32 *)((char *)&(sp130) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1DC) + 0x0));
        (*(s32 *)((char *)&(sp130) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1DC) + 0x4));
        (*(s32 *)((char *)&(sp130) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1DC) + 0x8));
        sp13C = 6;
        sp13E = 8;
        sp140 = temp_f26;
        sp148 = 0x1E;
        sp14A = 0x1E;
        sp154 = 0x9B;
        sp155 = 0x64;
        sp160 = 1;
        sp161 = 2;
        sp164 = 0.0f;
        sp168 = 1;
        sp16C = 0.0f;
        sp1A8 = temp_f22;
        sp144 = D_800AB074;
        sp14C = D_800AB078;
        sp150 = D_800AB07C;
        sp158 = D_800AB080;
        sp15C = D_800AB084;
        func_1514FF44(&sp180, &sp130, &sp1AC, temp_s2 & 0xFF, arg2);
        (*(f32 *)((char *)&(spEC) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1DC) + 0x0));
        (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1DC) + 0x4));
        (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1DC) + 0x8));
        sp110 = 0xF;
        sp112 = 8;
        sp114 = 3;
        sp116 = 2;
        sp118 = 0x1E;
        sp11A = 0x19;
        sp11C = 0x9B;
        sp11E = 0x64;
        sp124 = 0.0f;
        sp128 = 0x10;
        sp12A = 0xF;
        sp12C = 0;
        sp120 = 2;
        sp1A8 = temp_f22;
        spF8 = 10.0f;
        spFC = 25.0f;
        sp100 = D_800AB088;
        sp104 = D_800AB08C;
        sp108 = D_800AB090;
        sp10C = D_800AB094;
        func_15153CCC(&sp180, &spEC, &sp1AC, temp_s2 & 0xFF, arg2);
        if (func_1514F6E8(&sp180) != 0) {
            sp1A8 = 1000.0f;
            temp_hi = random_u32() % 6U;
            sp95 = 0x3E;
            sp80 = 0x2203;
            sp78 = 0x200005;
            sp7C = 0;
            sp84 = 0;
            sp88 = 0;
            sp8C = 0;
            sp8D = 0;
            sp8E = 0;
            sp8F = 0xFF;
            sp90 = 0;
            sp91 = 0;
            sp92 = 0;
            sp93 = 0;
            sp94 = 0xFF;
            (*(f32 *)((char *)&(spA8) + 0x0)) = (f32) (*(f32 *)((char *)&(sp1DC) + 0x0));
            (*(s32 *)((char *)&(spA8) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1DC) + 0x4));
            var_s1 = temp_hi + 5;
            (*(s32 *)((char *)&(spA8) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1DC) + 0x8));
            (*(s32 *)((char *)&(spB4) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
            (*(s32 *)((char *)&(spB4) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
            (*(s32 *)((char *)&(spB4) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
            sp9A = 1;
            spD0 = 0xC007;
            sp9C = 1.0f;
            sp82 = (random_u32() % 11U) + 0x28;
            sp96 = 1;
            sp98 = 0xFF;
            spD8 = 6;
            spD9 = 8;
            spDC = -1;
            spDA = -1;
            spDB = -1;
            spDD = 0xB;
            spD4 = 0;
            spDE = 0xFF;
            spE0 = 0;
            spA4 = 0.0f;
            spA0 = 0.0f;
            spE4 = D_800AB098;
            if (var_s1 != 0) {
                temp_f24 = D_800AB09C;
                temp_f22_2 = D_800AB0A0;
                temp_f20 = D_800AB0A4;
                do {
                    func_1514F808(&sp180, (random_float() * temp_f26) + temp_f20, &spC0);
                    spCC = (random_float() * temp_f22_2) + temp_f24;
                    temp_v0 = func_15130280(&sp78, 1, 0, 4, temp_s2, arg2);
                    if (temp_v0 != NULL) {
                        (*(s32 *)((char *)(temp_v0) + 0xA8)) = func_151CEAAC(NULL, temp_v0, 0, temp_s2 & 0xFF, arg2);
                    }
                    var_s1 -= 1;
                } while (var_s1 != 0);
            }
        }
    }
}

void func_151D0ED8(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0xA8)) != NULL) {
        func_1516972C((*(s32 *)((char *)(arg0) + 0xA8)), (s32) arg0);
    }
}

void func_151D0F08(void *arg0) {
    func_151D0ED8(arg0);
    func_1513173C(arg0);
}

void func_151D0F34(void *arg0) {
    func_151D0ED8(arg0);
    func_1513175C(arg0);
}

void func_151D0F60(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp68;
    f32 sp64;
    void * sp58;
    void * sp4C;
    void * sp40;
    s32 sp3C;
    u8 sp38;
    void *sp34;
    s32 temp_v0;

    sp34 = arg0;
    sp3C = 0;
    sp38 = (*(s32 *)((char *)(arg0) + 0x3B));
    if (((s32 (*)())((char *)(&D_8008FC30 + (arg1 * 4))))(&sp4C) == 0) {
        (*(s32 *)((char *)&(sp4C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
        (*(s32 *)((char *)&(sp4C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
        (*(s32 *)((char *)&(sp4C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    }
    (*(s32 *)((char *)&(sp40) + 0x0)) = (s32) (*(s32 *)((char *)&(sp4C) + 0x0));
    (*(s32 *)((char *)&(sp40) + 0x4)) = (s32) (*(s32 *)((char *)&(sp4C) + 0x4));
    (*(s32 *)((char *)&(sp40) + 0x8)) = (s32) (*(s32 *)((char *)&(sp4C) + 0x8));
    (*(s32 *)((char *)&(sp58) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp58) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp58) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp64 = 0.0f;
    sp68 = arg1;
    temp_v0 = func_15149130(0x12C, -1, 0x5F, -1, 0, 0x48, 0x38, (s32) arg2, arg3);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp34, 0x38);
    }
}

s32 func_151D1074(void *arg0, void *arg1) {
    (*(f32 *)((char *)(arg1) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x180)) + 8.0f);
    (*(f32 *)((char *)(arg1) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x1C));
    return 1;
}

void func_151D10A4(void) {
    func_151D10E4(NULL);
}

void func_151D10C4(void) {
    func_151D10E4(1);
}

s32 func_151D10E4(void *arg0, s32 arg2) {
    f32 *temp_v0;
    s32 temp_a3;

    temp_a3 = arg2 & 0xFF;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1D4));
    if (temp_v0 == NULL) {
        return 0;
    }
    func_15143134((temp_a3 * 0xC) + &D_800AAF9C, temp_v0, temp_a3);
    return 1;
}

void func_151D1138(void *arg0) {
    void *sp30;
    u8 sp2F;
    void *sp24;
    void *sp20;
    void *sp1C;
    f32 temp_f0;
    s32 temp_v0;
    u8 var_t0;
    u8 var_t0_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;
    void *temp_v1;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x28));
    temp_v1 = (char *)(arg0) + 0x28;
    if (((*(s32 *)((char *)(temp_a2) + 0x0)) == 0) || (temp_a1 = (char *)(temp_v1) + 0x18, ((*(s32 *)((char *)(temp_v1) + 0x4)) != (*(s32 *)((char *)(temp_a2) + 0x3B))))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        return;
    }
    temp_a3 = (char *)(temp_v1) + 0xC;
    (*(f32 *)((char *)(temp_v1) + 0xC)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x18));
    (*(s32 *)((char *)(temp_a3) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x4));
    (*(s32 *)((char *)(temp_a3) + 0x8)) = (s32) (*(s32 *)((char *)(temp_a1) + 0x8));
    sp2F = 0;
    sp1C = temp_a3;
    sp30 = temp_a2;
    sp20 = temp_a1;
    sp24 = temp_v1;
    var_t0 = 0;
    if (((s32 (*)())((char *)(&D_8008FC30 + ((*(s32 *)((char *)(temp_v1) + 0x34)) * 4))))(temp_a2, temp_a1, temp_a2, temp_a3) == 0) {
        var_t0 = 1;
        (*(f32 *)((char *)(temp_v1) + 0x18)) = (f32) (*(f32 *)((char *)(temp_v1) + 0xC));
        (*(s32 *)((char *)(temp_a1) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a3) + 0x4));
        (*(s32 *)((char *)(temp_a1) + 0x8)) = (s32) (*(s32 *)((char *)(temp_a3) + 0x8));
    }
    (*(f32 *)((char *)(temp_v1) + 0x24)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x18)) - (*(f32 *)((char *)(temp_v1) + 0xC)));
    (*(f32 *)((char *)(temp_v1) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x1C)) - (*(f32 *)((char *)(temp_v1) + 0x10)));
    (*(f32 *)((char *)(temp_v1) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x20)) - (*(f32 *)((char *)(temp_v1) + 0x14)));
    sp2F = var_t0;
    sp30 = temp_a2;
    sp24 = temp_v1;
    (*(s32 *)((char *)(temp_v1) + 0x30)) = func_15143E64((char *)(temp_v1) + 0x24, temp_a1, temp_a2, temp_a3);
    temp_v0 = func_1510F8CC((*(s32 *)((char *)(temp_a2) + 0x184)));
    temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x30));
    var_t0_2 = var_t0;
    if ((temp_f0 > 300.0f) || (temp_f0 <= 0.0f) || ((*(s32 *)((char *)(temp_a2) + 0x28)) != 0.0f) || ((*(s32 *)((char *)(temp_a2) + 0xAD)) != 0) || (temp_v0 == 5) || (temp_v0 == 6) || (temp_v0 == 9) || (temp_v0 == 0xD) || (temp_v0 == 0xE)) {
        var_t0_2 = 1;
    }
    if (var_t0_2 != 0) {
        func_151D13E0(arg0);
        return;
    }
    if ((*(s32 *)((char *)(temp_v1) + 0x8)) == 0) {
        func_151D1448(arg0);
    }
}

void func_151D1328(void *arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, (char *)(arg0) + 0x28, (char *)(arg0) + 0x2C, arg0);
}

void func_151D1368(void) {
    func_151D13E0();
}

void func_151D1388(s32 arg0) {
    func_151D1368();
    func_1514933C(arg0);
}

void func_151D13B4(s32 arg0) {
    func_151D1368();
    func_15149368(arg0);
}

void func_151D13E0(void *arg0) {
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(arg0) + 0x30)) != 0) {
        temp_a1 = (*(s32 *)((char *)(temp_v0) + 0x8));
        (*(s32 *)((char *)(temp_a1) + 0x30)) = 0;
        temp_a1_2 = (*(s32 *)((char *)(temp_v0) + 0x8));
        (*(u16 *)((char *)(temp_a1_2) + 0x1E)) = (u16) ((*(u16 *)((char *)(temp_a1_2) + 0x1E)) & 0xFFFD);
        temp_a1_3 = (*(s32 *)((char *)(temp_v0) + 0x8));
        (*(u16 *)((char *)(temp_a1_3) + 0x1E)) = (u16) ((*(u16 *)((char *)(temp_a1_3) + 0x1E)) | 8);
        temp_a1_4 = (*(s32 *)((char *)(temp_v0) + 0x8));
        (*(u16 *)((char *)(temp_a1_4) + 0x1E)) = (u16) ((*(u16 *)((char *)(temp_a1_4) + 0x1E)) | 1);
        (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x8))) + 0x1C)) = 0x28;
        (*(s32 *)((*(s32 *)((char *)(temp_a1) + 0x98)))) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x8)) = NULL;
    }
}

void func_151D1448(void *arg0) {
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    s8 sp74;
    f32 sp70;
    void *sp6C;
    s32 sp68;
    s8 sp65;
    s8 sp64;
    s32 sp60;
    s16 sp5E;
    s16 sp5C;
    void * sp50;
    void *sp44;
    void *temp_v0;
    void *temp_v1;

    sp6C = arg0;
    sp74 = 0xFF;
    sp70 = 0.0f;
    temp_v1 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x4)) == 0x25) {
        sp78 = 800.0f;
        sp7C = 36.0f;
        sp80 = 50.0f;
        sp84 = 200.0f;
    } else {
        if (D_80082FA0 > 0) {
            sp78 = 260.0f;
        } else {
            sp78 = 500.0f;
        }
        sp7C = 40.0f;
        sp80 = 40.0f;
        sp84 = 180.0f;
    }
    sp65 = 0x19;
    sp88 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x14C));
    (*(s32 *)((char *)&(sp50) + 0x0)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x18));
    (*(s32 *)((char *)&(sp50) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x1C));
    (*(s32 *)((char *)&(sp50) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x20));
    sp5C = 0x12C;
    sp5E = 0x36;
    sp60 = 0x13;
    sp64 = 6;
    sp68 = 0;
    sp44 = temp_v1;
    temp_v0 = func_15147A80((f32)(s32)&sp50, 0x20, 0x28, 0, 0x11, 0x12, 0, 0, 0, (s32) (*(f32 *)((char *)(arg0) + 0xC)), (s32) (*(f32 *)((char *)(arg0) + 0x1)));
    if (temp_v0 != NULL) {
        memcpy((*(s32 *)((char *)(temp_v0) + 0x98)), &sp6C, 0x20);
        (*(s32 *)((char *)(sp44) + 0x8)) = temp_v0;
    }
}

s32 func_151D15D0(void *arg0) {
    void *sp74;
    s32 sp70;
    void *sp64;
    f32 sp60;
    f32 sp48;
    f32 sp44;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *sp28;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f8;
    s16 temp_v0_2;
    s16 var_a2;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_t0;
    s8 temp_v1_2;
    void *temp_a1;
    void *temp_a3;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_3;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_t0 = (*(s32 *)((char *)(arg0) + 0x94));
    if (D_800BE9E4 > 0) {
        temp_a3 = (*(s32 *)((char *)(temp_v1) + 0x0)) + 0x28;
        temp_v0 = (char *)(arg0) + 0x10;
        (*(f32 *)((char *)(arg0) + 0x10)) = (f32) (*(f32 *)((char *)(temp_a3) + 0x18));
        (*(s32 *)((char *)(temp_v0) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a3) + 0x1C));
        (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) (*(f32 *)((char *)(temp_a3) + 0x20));
        (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) | 4);
        temp_a1 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x28) + temp_t0;
        (*(f32 *)((char *)(temp_a1) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x10));
        (*(s32 *)((char *)(temp_a1) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
        (*(f32 *)((char *)(temp_a1) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x8));
        (*(f32 *)((char *)(temp_a1) + 0xC)) = (f32) (*(f32 *)((char *)(temp_a3) + 0x30));
        temp_f12 = (*(s32 *)((char *)(temp_a3) + 0x24));
        temp_f2 = (*(s32 *)((char *)(temp_a3) + 0x2C));
        temp_f0 = sqrtf((temp_f12 * temp_f12) + (temp_f2 * temp_f2));
        if (temp_f0 == 0.0f) {
            (*(s32 *)((char *)(temp_a1) + 0x10)) = 1.0f;
        } else {
            (*(f32 *)((char *)(temp_a1) + 0x10)) = (f32) (1.0f / temp_f0);
        }
        (*(s32 *)((char *)(temp_a1) + 0x1C)) = 100.0f;
        (*(s32 *)((char *)(temp_a1) + 0x14)) = 0xFF;
        (*(f32 *)((char *)(temp_a1) + 0x18)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x4));
        (*(f32 *)((char *)(temp_v1) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x4)) + ((*(f32 *)((char *)(temp_a1) + 0xC)) * D_800AB0A8));
        sp60 = temp_f0;
        sp70 = temp_t0;
        sp28 = temp_a3;
        sp64 = temp_a1;
        sp74 = temp_v1;
        (*(s32 *)((char *)(temp_v1) + 0x4)) = func_15144528((*(s32 *)((char *)(temp_v1) + 0x4)), 0x46000000, temp_a1, 0, temp_a3);
        if (temp_f0 != 0.0f) {
            temp_f0_2 = (*(s32 *)((char *)(temp_a1) + 0x10));
            (*(f32 *)((char *)(temp_a1) + 0x20)) = (f32) (-(*(f32 *)((char *)(temp_a3) + 0x2C)) * temp_f0_2);
            (*(f32 *)((char *)(temp_a1) + 0x24)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x24)) * temp_f0_2);
        } else {
            (*(s32 *)((char *)(temp_a1) + 0x20)) = 0.0f;
            (*(s32 *)((char *)(temp_a1) + 0x24)) = 0.0f;
        }
        (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
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
        if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 3) {
            var_v1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
            if (var_v1 < 0) {
                var_v1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_v1_2 = var_v1 - 1;
            if (var_v1_2 < 0) {
                var_v1_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v0_2 = var_v1_2 - 1;
            var_a2 = temp_v0_2;
            if (temp_v0_2 < 0) {
                var_a2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            if ((*(s32 *)((char *)(temp_a1) + 0xC)) != 0.0f) {
                temp_v0_3 = (var_v1_2 * 0x28) + temp_t0;
                if ((*(s32 *)((char *)(temp_v0_3) + 0xC)) != 0.0f) {
                    temp_f12_2 = (*(s32 *)((char *)(temp_v0_3) + 0x0));
                    temp_f14 = (*(s32 *)((char *)(temp_v0_3) + 0x8));
                    temp_f0_3 = (*(s32 *)((char *)(temp_a1) + 0x10));
                    temp_f2_2 = (*(s32 *)((char *)(temp_v0_3) + 0x10));
                    temp_v1_3 = (var_a2 * 0x28) + temp_t0;
                    temp_f4 = ((*(s32 *)((char *)(temp_v1_3) + 0x0)) - temp_f12_2) * temp_f2_2;
                    sp44 = temp_f4;
                    temp_f8 = ((*(s32 *)((char *)(temp_v1_3) + 0x8)) - temp_f14) * temp_f2_2;
                    sp48 = temp_f8;
                    temp_f10 = -((((*(s32 *)((char *)(temp_a1) + 0x8)) - temp_f14) * temp_f0_3) - temp_f8);
                    sp38 = (((*(s32 *)((char *)(temp_a1) + 0x0)) - temp_f12_2) * temp_f0_3) - temp_f4;
                    sp34 = temp_f10;
                    temp_f6 = (temp_f10 * temp_f10) + (sp38 * sp38);
                    sp24 = temp_f6;
                    sp30 = temp_f6;
                    if (D_800AB0AC < temp_f6) {
                        temp_f2_3 = 1.0f / sqrtf(temp_f6);
                        sp34 = temp_f10 * temp_f2_3;
                        sp38 *= temp_f2_3;
                        (*(f32 *)((char *)(temp_v0_3) + 0x20)) = (f32) (*(f32 *)((char *)&(sp34) + 0x0));
                        (*(s32 *)((char *)(temp_v0_3) + 0x24)) = (s32) (*(s32 *)((char *)&(sp34) + 0x4));
                    } else {
                        (*(s32 *)((char *)(temp_v0_3) + 0x20)) = 0.0f;
                        (*(s32 *)((char *)(temp_v0_3) + 0x24)) = 0;
                    }
                }
            }
        }
    }
    return 1;
}

s32 func_151D197C(void *arg0) {
    f32 sp3C;
    f32 sp38;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f26;
    f32 var_f2;
    s32 temp_a1_2;
    s32 temp_v1;
    s32 var_a2;
    s8 var_a1;
    u16 temp_v1_2;
    void *temp_a1;
    void *temp_a1_3;
    void *temp_a2;
    void *temp_t0;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_a1 = (*(s32 *)((char *)(temp_v0) + 0x0));
    if (temp_a1 != NULL) {
        (*(f32 *)((char *)(temp_v0) + 0x1C)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(temp_a1) + 0x28))) + 0x14C));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_f26 = 0.0f;
        var_a2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
        if (var_a2 < 0) {
            var_a2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
        }
        if (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D))) {
            do {
                temp_a1_2 = var_a2;
                var_a2 -= 1;
                if (var_a2 < 0) {
                    var_a2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_t0 = (temp_a1_2 * 0x28) + temp_v1;
                temp_f16 = (*(s32 *)((char *)(temp_t0) + 0xC));
                var_f26 += temp_f16;
                if ((*(s32 *)((char *)(temp_v0) + 0xC)) < var_f26) {
                    if (temp_f16 != 0.0f) {
                        temp_f14 = (var_f26 - (*(s32 *)((char *)(temp_v0) + 0xC))) / temp_f16;
                        temp_a1_3 = (var_a2 * 0x28) + temp_v1;
                        temp_f0 = (*(s32 *)((char *)(temp_a1_3) + 0x0));
                        temp_f2 = (*(s32 *)((char *)(temp_a1_3) + 0x4));
                        temp_f12 = (*(s32 *)((char *)(temp_a1_3) + 0x8));
                        (*(f32 *)((char *)(temp_a1_3) + 0x0)) = (f32) (temp_f0 - ((temp_f0 - (*(f32 *)((char *)(temp_t0) + 0x0))) * temp_f14));
                        (*(f32 *)((char *)(temp_a1_3) + 0x4)) = (f32) (temp_f2 - ((temp_f2 - (*(f32 *)((char *)(temp_t0) + 0x4))) * temp_f14));
                        (*(f32 *)((char *)(temp_a1_3) + 0x8)) = (f32) (temp_f12 - ((temp_f12 - (*(f32 *)((char *)(temp_t0) + 0x8))) * temp_f14));
                        (*(f32 *)((char *)(temp_t0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_t0) + 0xC)) * (1.0f - temp_f14));
                    }
                    if (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                        do {
                            (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                                (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                            }
                            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                        } while (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D)));
                    }
                    var_f26 = (*(s32 *)((char *)(temp_v0) + 0xC));
                }
            } while (var_a2 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
        if (var_f26 != 0.0f) {
            var_f0 = 1.0f / var_f26;
        } else {
            var_f0 = 0.0f;
        }
        sp38 = var_f0;
        sp3C = var_f26;
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_a1 = (*(s32 *)((char *)(arg0) + 0x2E));
        var_f2 = sp3C;
        do {
            var_a1 -= 1;
            if (var_a1 < 0) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_a2 = (var_a1 * 0x28) + temp_v1;
            (*(f32 *)((char *)(temp_a2) + 0x1C)) = (f32) (((*(f32 *)((char *)(temp_v0) + 0x10)) * (*(f32 *)((char *)(temp_v0) + 0x1C))) + (var_f2 * ((*(f32 *)((char *)(temp_v0) + 0x14)) * (*(f32 *)((char *)(temp_v0) + 0x1C)) * sp38)));
            (*(s8 *)((char *)(temp_a2) + 0x14)) = (s8) (u32) (var_f2 * ((*(s8 *)((char *)(temp_v0) + 0x18)) * sp38));
            var_f2 -= (*(s32 *)((char *)(temp_a2) + 0xC));
        } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x1E));
    if ((temp_v1_2 & 1) && (temp_v1_2 & 8)) {
        (*(s8 *)((char *)(temp_v0) + 0x8)) = (s8) ((*(s8 *)((char *)(arg0) + 0x1C)) * 6);
    }
    return 1;
}

void *func_151D1C98(void *arg0, void *arg1, s32 arg2) {
    void *spE4;
    f32 spD8;
    f32 spCC;
    s8 spBF;
    void **sp9C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 var_f20;
    f32 var_f22;
    f32 var_f24;
    f32 var_f26;
    s32 temp_a0;
    s32 temp_f18;
    s32 temp_f4;
    s32 temp_fp;
    s32 temp_t9;
    s32 var_a0;
    s32 var_s0;
    s8 var_s2;
    void **temp_t5;
    void **temp_t7;
    void **temp_t7_2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s1;

    f32 spD0;
    f32 spD4;
    f32 spDC;
    f32 spE0;
    var_s1 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) < 2) {

    } else {
        spE4 = (*(s32 *)((char *)(arg0) + 0x98));
        temp_fp = (*(s32 *)((char *)(arg0) + 0x94));
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &sp9C, 0);
        if (sp9C == NULL) {

        } else {
            spBF = 1;
            var_s1 = func_15142FBC(func_1513F4E4(func_15142B7C(func_15142E24(var_s1, &D_80091430, 0, 0, 0, 0, 0xBC, 0, 0, &spBF, 3), 0x220005, 0x1D0600), 0x4C, &spBF), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0xC)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x8)), &spBF);
            var_a0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
            if (var_a0 < 0) {
                var_a0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_s0 = var_a0 - 1;
            if (var_s0 < 0) {
                var_s0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1 = temp_fp + (var_a0 * 0x28);
            (*(s32 *)((char *)&(spCC) + 0x0)) = (*(s32 *)((char *)(temp_v1) + 0x0));
            (*(s32 *)((char *)&(spCC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
            (*(s32 *)((char *)&(spCC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
            temp_f2 = (*(s32 *)((char *)(temp_v1) + 0x1C));
            var_f26 = (*(s32 *)((char *)(temp_v1) + 0x18));
            temp_f12 = (*(s32 *)((char *)(temp_v1) + 0x20)) * temp_f2;
            temp_f14 = (*(s32 *)((char *)(temp_v1) + 0x24)) * temp_f2;
            temp_t9 = (s32) ((*(s32 *)((char *)(temp_v1) + 0x14)) * (*(s32 *)((char *)(spE4) + 0x8))) >> 8;
            temp_v0 = temp_fp + (var_s0 * 0x28);
            (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)(temp_v0) + 0x0));
            (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
            (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
            temp_f0 = (*(s32 *)((char *)(temp_v0) + 0x1C));
            var_f24 = (*(s32 *)((char *)(temp_v0) + 0x18));
            var_f20 = (*(s32 *)((char *)(temp_v0) + 0x20)) * temp_f0;
            temp_f4 = (s32) var_f26;
            (*(s16 *)((char *)(sp9C) + 0x0)) = (s16) (s32) (spCC + temp_f12);
            var_f22 = (*(s32 *)((char *)(temp_v0) + 0x24)) * temp_f0;
            (*(s16 *)((char *)(sp9C) + 0x2)) = (s16) (s32) spD0;
            var_s2 = ((s32) ((*(s32 *)((char *)(temp_v0) + 0x14)) * (*(s32 *)((char *)(spE4) + 0x8))) >> 8) & 0xFF;
            (*(s16 *)((char *)(sp9C) + 0x4)) = (s16) (s32) (spD4 + temp_f14);
            (*(s8 *)((char *)(sp9C) + 0xF)) = (s8) temp_t9;
            (*(s16 *)((char *)(sp9C) + 0xA)) = (s16) temp_f4;
            (*(s32 *)((char *)(sp9C) + 0x8)) = 0x7FF;
            (*(s32 *)((char *)(sp9C) + 0x6)) = 0;
            temp_t7 = (char *)(sp9C) + 0x10;
            sp9C = temp_t7;
            (*(s16 *)((char *)(sp9C) + 0x10)) = (s16) (s32) (spCC - temp_f12);
            (*(s16 *)((char *)(sp9C) + 0x2)) = (s16) (s32) spD0;
            (*(s16 *)((char *)(sp9C) + 0x4)) = (s16) (s32) (spD4 - temp_f14);
            (*(s8 *)((char *)(sp9C) + 0xF)) = (s8) temp_t9;
            (*(s16 *)((char *)(sp9C) + 0xA)) = (s16) temp_f4;
            (*(s32 *)((char *)(sp9C) + 0x8)) = 0;
            (*(s32 *)((char *)(temp_t7) + 0x6)) = 0;
            sp9C = (char *)(sp9C) + 0x10;
            do {
                temp_f18 = (s32) var_f24;
                (*(s16 *)((char *)(sp9C) + 0x0)) = (s16) (s32) (spD8 + var_f20);
                (*(s16 *)((char *)(sp9C) + 0x2)) = (s16) (s32) spDC;
                (*(s16 *)((char *)(sp9C) + 0x4)) = (s16) (s32) (spE0 + var_f22);
                (*(s32 *)((char *)(sp9C) + 0xF)) = var_s2;
                (*(s16 *)((char *)(sp9C) + 0xA)) = (s16) temp_f18;
                (*(s32 *)((char *)(sp9C) + 0x8)) = 0x7FF;
                (*(s32 *)((char *)(sp9C) + 0x6)) = 0;
                temp_t5 = (char *)(sp9C) + 0x10;
                sp9C = temp_t5;
                (*(s16 *)((char *)(sp9C) + 0x10)) = (s16) (s32) (spD8 - var_f20);
                (*(s16 *)((char *)(sp9C) + 0x2)) = (s16) (s32) spDC;
                (*(s16 *)((char *)(sp9C) + 0x4)) = (s16) (s32) (spE0 - var_f22);
                (*(s32 *)((char *)(sp9C) + 0xF)) = var_s2;
                (*(s16 *)((char *)(sp9C) + 0xA)) = (s16) temp_f18;
                (*(s32 *)((char *)(sp9C) + 0x8)) = 0;
                (*(s32 *)((char *)(temp_t5) + 0x6)) = 0;
                sp9C = (char *)(sp9C) + 0x10;
                (*(s32 *)((char *)(var_s1) + 0x0)) = 0x01004008;
                temp_s1 = (char *)(var_s1) + 8;
                temp_v1_2 = temp_s1;
                (*(s32 *)((char *)(var_s1) + 0x4)) = (void **) ((char *)(sp9C) - 0x40);
                var_s1 = (char *)(temp_s1) + 8;
                (*(s32 *)((char *)(temp_v1_2) + 0x0)) = 0x06000204;
                (*(s32 *)((char *)(temp_v1_2) + 0x4)) = 0x20604;
                if (var_f26 < var_f24) {
                    memcpy(sp9C, (char *)(sp9C) - 0x20, 0x20, 0x7FF);
                    (*(s16 *)((char *)(sp9C) - 0x16)) = (s16) ((*(s16 *)((char *)(sp9C) - 0x16)) - 0x2000);
                    temp_t7_2 = (char *)(sp9C) + 0x10;
                    sp9C = temp_t7_2;
                    (*(s16 *)((char *)(temp_t7_2) - 0x16)) = (s16) ((*(s16 *)((char *)(temp_t7_2) - 0x16)) - 0x2000);
                    sp9C = (char *)(sp9C) + 0x10;
                }
                temp_a0 = var_s0;
                var_s0 -= 1;
                if (var_s0 < 0) {
                    var_s0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                if (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    temp_v0_2 = temp_fp + (var_s0 * 0x28);
                    (*(s32 *)((char *)&(spD8) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x0));
                    (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
                    (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
                    temp_f0_2 = (*(s32 *)((char *)(temp_v0_2) + 0x1C));
                    var_f20 = (*(s32 *)((char *)(temp_v0_2) + 0x20)) * temp_f0_2;
                    var_f26 = (*(s32 *)((char *)((temp_fp + (temp_a0 * 0x28))) + 0x18));
                    var_f22 = (*(s32 *)((char *)(temp_v0_2) + 0x24)) * temp_f0_2;
                    var_f24 = (*(s32 *)((char *)(temp_v0_2) + 0x18));
                    var_s2 = ((s32) ((*(s32 *)((char *)(temp_v0_2) + 0x14)) * (*(s32 *)((char *)(spE4) + 0x8))) >> 8) & 0xFF;
                }
            } while (temp_a0 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s1;
}

void func_151D223C(void *arg0) {
    void *temp_v1;

    temp_v1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x98))));
    if (temp_v1 != NULL) {
        (*(s32 *)((char *)(temp_v1) + 0x30)) = 0;
    }
}

void func_151D2258(void *arg0) {
    func_151D223C(arg0);
    func_151478F4(arg0);
}

void func_151D2284(void *arg0) {
    func_151D223C(arg0);
    func_15147928(arg0);
}

void func_151D22B0(void *arg0, s32 arg1, s32 arg2) {
    void * sp18C;
    void * sp188;
    void * sp184;
    f32 sp180;
    void * sp15C;
    s8 sp158;
    f32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    s16 sp146;
    s16 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    s16 sp132;
    s16 sp130;
    s16 sp12E;
    s16 sp12C;
    void * sp120;
    s32 sp11C;
    s32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    s16 sp10A;
    s16 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    s16 spF6;
    s16 spF4;
    s16 spF2;
    s16 spF0;
    void * spE4;
    s32 spE0;
    s32 spDC;
    s16 spD6;
    s16 spD4;
    s8 spD1;
    s8 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA4;
    s32 spA0;
    s32 sp9C;
    s32 sp98;
    s32 sp94;
    s32 sp90;
    s8 sp8E;
    s8 sp8D;
    s8 sp8C;
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
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    void * sp54;

    if (arg0 != NULL) {
        func_10010154(0xAA, arg0, 0x7FFF, 0x3E8, 0xBB8);
        func_10010A3C(arg0);
        sp180 = ((*(s32 *)((char *)(arg0) + 0x14C)) + (*(s32 *)((char *)(arg0) + 0x150))) * 0.5f;
        func_1515C244(arg0, &sp18C, &sp188, &sp184);
        func_1504715C(&sp15C, arg0);
        sp118 = 5;
        sp11C = 5;
        (*(s32 *)((char *)&(sp120) + 0x0)) = (s32) (*(s32 *)((char *)&(sp18C) + 0x0));
        (*(s32 *)((char *)&(sp120) + 0x4)) = (s32) (*(s32 *)((char *)&(sp18C) + 0x4));
        (*(s32 *)((char *)&(sp120) + 0x8)) = (s32) (*(s32 *)((char *)&(sp18C) + 0x8));
        sp134 = 15.0f;
        sp13C = D_800AB118;
        sp12E = 0xFF;
        sp140 = D_800AB11C;
        sp12C = 0;
        sp130 = -0x3C;
        sp132 = 0x34;
        sp138 = 20.0f;
        sp144 = 0x50;
        sp146 = 0x1E;
        sp148 = 1.0f * sp180;
        sp14C = 0.0f * sp180;
        sp158 = 0xB;
        sp150 = D_800AB120;
        sp154 = 1.0f;
        func_1515080C(&sp118, &D_800AB0B0, &D_800AB0E0, 0xC, 0, 0, 0, 1, -1, &sp15C, 20.0f, 0, 0, (s32) arg1, arg2);
        spDC = 0xF;
        spE0 = 7;
        (*(s32 *)((char *)&(spE4) + 0x0)) = (s32) (*(s32 *)((char *)&(sp18C) + 0x0));
        (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp18C) + 0x4));
        (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp18C) + 0x8));
        spF8 = 30.0f;
        spFC = 10.0f;
        spF0 = 0;
        spF2 = 0xFF;
        spF4 = -0x1D;
        spF6 = 0x14;
        sp108 = 0x20;
        sp10A = 0x12;
        sp100 = D_800AB124;
        sp104 = D_800AB128;
        sp10C = D_800AB12C;
        sp110 = D_800AB130;
        sp114 = D_800AB134;
        func_15152190(&spDC, &D_800AB110, &D_800AB114, 1, 0.0f, 0, (s32) arg1, arg2);
        (*(s32 *)((char *)&(sp54) + 0x0)) = (s32) (*(s32 *)((char *)&(sp18C) + 0x0));
        (*(s32 *)((char *)&(sp54) + 0x4)) = (s32) (*(s32 *)((char *)&(sp18C) + 0x4));
        (*(s32 *)((char *)&(sp54) + 0x8)) = (s32) (*(s32 *)((char *)&(sp18C) + 0x8));
        sp78 = 0xA;
        sp7A = 7;
        sp7E = 0xFF;
        sp80 = -0x32;
        sp82 = 0x1E;
        sp86 = 3;
        sp88 = 0x23;
        sp84 = 3;
        sp8A = 0xF;
        sp8D = 1;
        sp8E = 0x48;
        sp90 = 1;
        spA9 = 0xC8;
        spAA = 0x37;
        spAC = 3;
        sp7C = 0;
        sp8C = 0;
        sp94 = 0;
        sp98 = 0;
        sp9C = 0;
        spA0 = 0;
        spA4 = 0;
        spA8 = 0;
        spB0 = 0xFF;
        spB4 = 0;
        spB8 = 0x220005;
        spBC = 0x1D0600;
        spC0 = 3;
        spC4 = 0x3B;
        spC8 = 0x80;
        spCC = 0x20;
        spD0 = 0;
        spD1 = 7;
        spD4 = 0xC;
        spD6 = 0x15;
        sp60 = 5.0f;
        sp64 = 10.0f;
        sp68 = D_800AB138;
        sp6C = D_800AB13C;
        sp70 = 20.0f;
        sp74 = 25.0f;
        func_15151A38(&sp54, arg1, arg2);
    }
}
