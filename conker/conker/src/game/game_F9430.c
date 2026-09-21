/**
 * Auto-decompiled from asm/F9430.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();            /* extern */
void func_1504715C();                     /* extern */
u32 random_u32();              /* extern */
f32 random_float();                                /* extern */
void * func_150C88D0();                      /* extern */
void * func_150CCD90();     /* extern */
s32 func_15130374();            /* extern */
void * func_15132A4C();          /* extern */
void * func_15143134();                /* extern */
void * func_15143794();                /* extern */
void * func_1514C678(); /* extern */
void * memcpy();                            /* extern */
extern s32 D_800A0640;
extern f32 D_800A06C4;
extern f32 D_800A06C8;
extern f32 D_800A06CC;
extern f32 D_800A06D0;
extern f32 D_800A06D4;
extern f32 D_800A06D8;
extern f32 D_800A06DC;
extern f32 D_800A06E0;
extern f32 D_800A06E4;
extern f32 D_800A06E8;
extern f32 D_800A06EC;
extern f32 D_800A06F0;
extern f32 D_800A06F4;
extern f32 D_800A06F8;

void func_150CBF80(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp178;
    s32 sp174;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    u8 sp163;
    u8 sp162;
    u8 sp161;
    void * sp140;
    f32 sp13C;
    s32 sp138;
    f32 sp134;
    s32 sp130;
    f32 sp12C;
    s16 sp128;
    s8 sp117;
    s8 sp116;
    s8 sp115;
    s8 sp114;
    s32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    s32 spF4;
    f32 spF0;
    s32 spEC;
    f32 spE8;
    f32 spE4;
    s8 spE3;
    s8 spE2;
    s8 spE1;
    s8 spE0;
    s32 spDC;
    s32 spD8;
    s16 spD4;
    s16 spD2;
    u8 spD0;
    s16 spCA;
    s16 spC8;
    s16 spC6;
    s16 spC4;
    s16 spC2;
    s16 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s16 spB0;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    s16 spA6;
    s16 spA4;
    s8 sp9D;
    s8 sp9C;
    f32 sp98;
    f32 sp94;
    s16 sp90;
    f32 sp8C;
    s16 sp8A;
    s16 sp88;
    s32 sp84;
    f32 sp80;
    s8 sp7D;
    s8 sp7C;
    void * sp70;
    u8 sp66;
    u8 sp65;
    u8 sp64;
    f32 temp_f10;
    s16 temp_a0;
    s16 temp_s0_2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_v0_2;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_a3;
    void *temp_s0;

    f32 sp17C;
    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0)) {
        func_1504715C(&sp13C, arg0);
        temp_s0 = (arg1 * 0x2C) + &D_800A0640;
        func_15143134((char *)(temp_s0) + 4, &sp174, (*(s32 *)((char *)(arg0) + 0x1D4)) + ((*(s32 *)((char *)(temp_s0) + 0x1)) << 6));
        sp134 = sp178 + 200.0f;
        sp130 = sp174;
        sp138 = sp17C;
        if (func_15046C80(&sp130, 0, sp178 - 2000.0f, &sp13C) != 0) {
            sp178 = sp13C;
            func_150CCD90(sp17C, sp13C, &sp16C, &sp168, &sp164);
            temp_a1 = (u32) sp16C;
            sp163 = (u8) temp_a1;
            temp_v0 = temp_a1 & 0xFF;
            temp_a2 = (u32) sp168;
            sp162 = (u8) temp_a2;
            temp_v1 = temp_a2 & 0xFF;
            temp_a3 = (u32) sp164;
            sp161 = (u8) temp_a3;
            temp_a0 = temp_a3 & 0xFF;
            spA4 = temp_v0;
            spA6 = temp_v1;
            spA8 = temp_a0;
            spAA = 0xFF;
            spAC = 0;
            spAE = temp_v0;
            spB0 = temp_v1;
            spB2 = temp_a0;
            spB4 = 0xFF;
            spB6 = 0;
            spB8 = temp_v0;
            spBA = temp_v1;
            spBC = temp_a0;
            spBE = 0xFF;
            spC0 = 0;
            spC2 = temp_v0;
            spC4 = temp_v1;
            spC6 = temp_a0;
            spC8 = 0xFF;
            spCA = 0;
            spD2 = 0x2601;
            spD0 = (*(s32 *)((char *)(temp_s0) + 0x0));
            spD4 = (random_u32(temp_a0, temp_a1, temp_a2, temp_a3) % 51U) + 0x84;
            spD8 = 0;
            spDC = 0;
            spE0 = 0xFF;
            spE1 = 0xFF;
            spE2 = 0xFF;
            spE3 = 0xFF;
            temp_f10 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x1C))) + (*(s32 *)((char *)(temp_s0) + 0x18));
            spE8 = temp_f10;
            spE4 = temp_f10;
            spF0 = sp178 + 10.0f;
            sp110 = 0x1C0001;
            sp104 = 1.0f;
            sp108 = 1.0f;
            sp10C = 1.0f;
            spEC = sp174;
            spF8 = 0.0f;
            spFC = 0.0f;
            sp100 = 0.0f;
            spF4 = sp17C;
            sp114 = (random_u32(0) % (u32) ((*(u32 *)((char *)(temp_s0) + 0x11)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x10));
            sp115 = 0xFF;
            sp116 = 0;
            sp117 = 6;
            sp128 = (spD4 - (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x14)) + 1))) - (*(u32 *)((char *)(temp_s0) + 0x12));
            sp12C = ((random_float() * (*(s32 *)((char *)(temp_s0) + 0x24))) + (*(s32 *)((char *)(temp_s0) + 0x20))) * spE4;
            temp_v0_2 = func_1513D668(&spD0, &spA4, 0, 0x18, 0, 0, ((s32) (*(s32 *)((char *)(arg0) + 0x7A)) >> 8) + (*(s32 *)((char *)(temp_s0) + 0x28)), 500.0f, 500.0f, 0, &sp140, 1, 8, (s32) arg3, arg2);
            if (temp_v0_2 != 0) {
                memcpy(temp_v0_2 + 0x128, &sp128, 8);
            }
            random_u32();
            func_1514C678(sp174, sp178, sp17C, (random_float() * 50.0f) + 80.0f, 0, 0xFF, 0x29, 0x11, 0, 0.0f, NULL, (s32) arg3);
            (*(s32 *)((char *)&(sp70) + 0x0)) = (s32) (*(s32 *)((char *)&(sp174) + 0x0));
            (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)&(sp174) + 0x4));
            (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)&(sp174) + 0x8));
            sp80 = D_800A06C8;
            sp7C = 1;
            sp7D = -1;
            sp84 = 0xC;
            sp88 = 0x28;
            sp8A = 0x1E;
            sp90 = 0x19;
            sp9C = -1;
            sp9D = -1;
            sp98 = 0.0f;
            sp8C = D_800A06C4 / (f32) 0xA;
            sp94 = D_800A06C4 / (f32) 0x19;
            func_150C88D0(&sp70, 0, 0xFF, 1);
            temp_s0_2 = (random_u32() % 14U) + 0xF;
            sp64 = sp163;
            sp65 = sp162;
            sp66 = sp161;
            func_1514C678(sp174, sp178, sp17C, (random_float() * 70.0f) + 70.0f, 0, 0xFF, (s32) temp_s0_2, 0x12, 0, 0.0f, &sp64, (s32) arg3);
            func_151D5404(&sp174, 0x43FA0000, 0x459C4000, 0x3951B717, 0xC, 0xF, 0xFF, 0);
        }
    }
}

s32 func_150CC638(void *arg0) {
    f32 temp_f0;
    s16 temp_v1;
    s32 temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x58)) & 1) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x1C));
        if (temp_v1 < 0x20) {
            temp_v0 = temp_v1 * 8;
            if (temp_v0 < (s32) (*(s32 *)((char *)(arg0) + 0x5C))) {
                (*(u8 *)((char *)(arg0) + 0x5C)) = (u8) temp_v0;
            }
        }
        if ((*(s32 *)((char *)(arg0) + 0x128)) < (*(s32 *)((char *)(arg0) + 0x1C))) {
            temp_f0 = (*(s32 *)((char *)(((char *)(arg0) + 0x128)) + 0x4)) * D_800BE9A4;
            (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) + temp_f0);
            (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) + temp_f0);
        }
    }
    return 1;
}

s32 func_150CC6B8(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg8, u8 arg14) {
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
    sp3E = (random_u32() & 0xF) + 0x14;
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
    temp_f6 = random_float() * D_800A06CC;
    sp64 = arg2;
    sp68 = arg3;
    sp6C = arg4;
    temp_f2 = temp_f6 + 300.0f;
    sp5C = temp_f2;
    sp60 = temp_f2;
    sp24 = random_u32();
    func_15143794(arg8, (s16) ((sp24 % 21U) - 0x19), ((random_float() * 200.0f) + 350.0f) * D_800A06D0, &sp7C);
    sp8C = 0xE05;
    sp88 = 0.0f;
    if (random_u32() & 1) {
        sp8C |= 0x40;
    }
    if (random_u32() & 1) {
        sp8C |= 0x80;
    }
    sp96 = 8;
    sp97 = -1;
    sp52 = 0xA;
    sp54 = 0x19;
    sp56 = 0x1B;
    sp58 = D_800A06D4;
    sp2C = D_800A06D8;
    temp_v0 = func_15130374(&sp34, 1, 4, arg14, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, (s16 *) &sp2C, 4);
    }
    return 1;
}

s32 func_150CC8D4(void *arg0, void * arg1) {
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

s32 func_150CCA7C(s32 arg0, void * arg1, f32 arg2, u32 arg3, f32 arg4, s16 arg8, u8 arg14) {
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
    u32 sp54;
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
    sp2C = D_800A06DC;
    sp20 = random_u32((s16) arg2, arg3);
    func_15143794(arg8, (s16) ((sp20 % 44U) - 0x3F), ((random_float() * 200.0f) + 300.0f) * D_800A06E0, &sp5C);
    sp68 = ((random_float() * 260.0f) + -130.0f) * D_800A06E4;
    sp70 = ((random_float() * 260.0f) + -130.0f) * D_800A06E8;
    sp7C = (random_u32() % 51U) + 0x32;
    sp74 = ((random_float() * D_800A06EC) + D_800A06F0) * D_800A06F4;
    temp_f10 = random_float() * 500.0f;
    sp80 = 0;
    sp84 = 0;
    temp_f2 = (temp_f10 + 100.0f) * D_800A06F8;
    sp30 = temp_f2;
    sp34 = temp_f2;
    sp88 = (random_u32() % 101U) + 0x9B;
    sp89 = 3;
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

s32 func_150CCCB4(void *arg0) {
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
