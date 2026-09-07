/**
 * Auto-decompiled from asm/188440.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1504697C();            /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
s32 func_151303BC();                     /* extern */
s32 func_1515548C();   /* extern */
void * func_1515572C();                     /* extern */
s32 func_151D8E20();                                /* extern */
void * memcpy();                            /* extern */
extern s32 D_8008FD04;
extern f32 D_800A6420;
extern f32 D_800A6424;
extern f32 D_800A6428;
extern f32 D_800A642C;
extern f32 D_800A6430;
extern f32 D_800A6434;
extern f32 D_800A6438;
extern f32 D_800A643C;
extern f32 D_800A6440;
extern f32 D_800A6444;
extern f32 D_800A6448;
extern f32 D_800A644C;
extern f32 D_800A6450;
extern f32 D_800A6454;
extern f32 D_800A6458;
extern f32 D_800A645C;
extern f32 D_800A6460;
extern f32 D_800A6464;
extern f32 D_800A6468;

void func_1515AF90( s32 arg0) {
    s32 unkspA9;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    void *spB0;
    s32 spAC;
    u8 spAB;
    s16 spA8;
    f32 spA4;
    f32 spA0;
    s32 sp98;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s32 sp68;
    s8 sp65;
    s8 sp64;
    s32 sp60;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 temp_f0;
    s32 temp_t8;
    s32 temp_v0;

    if (!(random_u32() & 0xF)) {
        temp_t8 = arg0 * 0x9A0;
        spAB = 1;
        spB0 = temp_t8 + D_800DBFF0 + 0x2F8;
        spAC = (s32) ((*(s32 *)((char *)((D_800DBFF0 + temp_t8)) + 0x380)) * D_800A6420);
        spA8 = ((random_u32() % 41U) + spAC) - 0x14;
        spA4 = (random_float() * D_800A6424) + 107.0f;
        spA0 = func_151423D8(unkspA9);
        spB4 = (*(s32 *)((char *)(spB0) + 0x0)) - (spA4 * func_151423D8((spA8 - 0x40) & 0xFF));
        spBC = (*(s32 *)((char *)(spB0) + 0x8)) - (spA4 * spA0);
        sp6C = spB4;
        sp90 = 0;
        sp94 = 0;
        sp95 = 0;
        sp98 = 0;
        sp70 = D_800A6428;
        sp74 = spBC;
        sp78 = D_800A642C;
        if (func_1504697C(&sp6C, 0, (*(s32 *)((char *)(spB0) + 0x4)), &sp78) != 0) {
            spC8 = sp78;
        } else {
            spAB = 0;
        }
        if (spAB != 0) {
            temp_f0 = (*(s32 *)((char *)(spB0) + 0x4)) + -250.0f;
            sp68 = 0;
            sp65 = 0;
            sp64 = 0;
            sp60 = 0;
            sp48 = D_800A6430;
            sp3C = spB4;
            sp38 = temp_f0;
            sp40 = (*(s32 *)((char *)(spB0) + 0x4));
            sp44 = spBC;
            if (func_1504697C(&sp3C, 0, temp_f0, &sp48) != 0) {
                spB8 = sp48;
            } else {
                spB8 = sp38;
            }
        }
        random_float();
        spC4 = 0.0f;
        spC0 = 195.0f * D_800A6434;
        if (spAB != 0) {
            temp_v0 = func_151491F4((s16) ((random_u32() % 61U) + 5), -1, 0xC, 1, 7, 0x18, 0xFF, 0);
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0x28, &spB4, 0x18);
            }
        }
    }
}

void func_1515B21C(void *arg0) {
    s8 spF7;
    s8 spF6;
    s8 spF5;
    s8 spF4;
    s32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    void * spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA4;
    s32 spA0;
    s16 sp9E;
    s16 sp9C;
    s32 sp98;
    s32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s8 sp87;
    s8 sp86;
    s8 sp85;
    s8 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    f32 sp6C;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    s32 temp_v0;
    void *temp_s0;

    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x34)) * D_800BE9A4));
    temp_s0 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(arg0) + 0x38)) > 1.0f) {
        spB1 = 0x2F;
        sp9C = 0xC01;
        sp94 = 0x200005;
        sp98 = 0;
        spAE = 0;
        spAD = 0;
        spAC = 0;
        spAB = 0;
        spAA = 0;
        spA9 = 0;
        spA8 = 0;
        spA4 = 0;
        spA0 = 0;
        spB0 = 0xFF;
        spB6 = 0;
        spB8 = 0.0f;
        spEC = 0x3207;
        spF4 = 5;
        spF5 = 5;
        spF6 = 4;
        spF7 = -1;
        (*(s32 *)((char *)&(spC4) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x28));
        (*(s32 *)((char *)&(spC4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s0) + 0x4));
        (*(s32 *)((char *)&(spC4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s0) + 0x8));
        spD0 = 0.0f;
        spD4 = 0.0f;
        spD8 = 0.0f;
        spB2 = 0x32;
        spB4 = 5;
        sp70 = 0;
        sp71 = 0;
        sp84 = 0;
        sp85 = 0;
        spDC = 0.0f;
        spE4 = 0.0f;
        sp7C = D_800A6438;
        sp80 = D_800A643C;
        sp90 = (*(s32 *)((char *)(temp_s0) + 0x14));
        if (random_u32() & 1) {
            spEC |= 0x40;
        }
        if (random_u32() & 1) {
            spEC |= 0x80;
        }
        temp_f26 = D_800A6440;
        temp_f24 = D_800A6444;
        temp_f22 = D_800A6448;
        do {
            spE0 = random_float() * 12.0f * D_800A644C;
            sp9E = (random_u32() % 152U) + 0x96;
            spAF = (random_u32() % 151U) + 0x37;
            temp_f2 = (random_float() * 200.0f) + 100.0f;
            spBC = temp_f2;
            sp6C = temp_f2;
            spC0 = temp_f2;
            sp72 = (random_u32() % 5U) + 4;
            sp73 = (random_u32() % 5U) + 4;
            sp74 = ((random_float() * 0.25f) + temp_f22) * sp6C;
            sp78 = ((random_float() * 0.25f) + temp_f22) * sp6C;
            sp86 = (random_u32() & 3) + 2;
            sp87 = (random_u32() & 3) + 2;
            sp88 = ((random_float() * temp_f24) + temp_f26) * sp6C;
            sp8C = ((random_float() * temp_f24) + temp_f26) * sp6C;
            spE8 = ((random_float() * D_800A6450) + 600.0f) * D_800A6454;
            temp_v0 = func_151303BC(&sp94, 2, 0x28);
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0xA8, &sp6C, 0x28);
            }
            (*(f32 *)((char *)(temp_s0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x10)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x10)) > 1.0f);
    }
}

void func_1515B5F4( s32 arg0) {
    s16 sp1C;

    sp1C = arg0;
    func_1515572C(&sp1C, 0xB, arg0);
}

void func_1515B62C(void *arg0, s16 *arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if ((temp_t6 == 0xB) && ((*(s32 *)((char *)(arg0) + 0x70)) == *arg1)) {
        func_1516972C(temp_t6);
    }
}

void func_1515B674( s32 arg0) {
    s8 spE0;
    s8 spDD;
    s8 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s8 spBB;
    s8 spBA;
    s8 spB9;
    s8 spB8;
    s8 spB7;
    s8 spB6;
    s16 spB4;
    s16 spB2;
    u16 spB0;
    s16 spAE;
    s8 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    s16 sp80;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f30;
    s16 var_s0;
    s32 temp_v0;

    random_u32();
    spB0 = 0x19;
    spB6 = 1;
    spB2 = 0x14;
    spB4 = 0xC;
    spB7 = 0xFF;
    spB8 = 0xFF;
    spB9 = 0xFF;
    spBB = 0xFF;
    sp80 = arg0;
    spE0 = (s8) arg0;
    spBC = 0xFF;
    spBD = 0xFF;
    spBE = 0xFF;
    spBF = 0xFF;
    spC0 = 0;
    spC4 = 0;
    spC8 = 0;
    spDC = 0;
    spDD = 9;
    spCC = 7;
    spD0 = 0x3C;
    spD4 = 0x80;
    spD8 = 0x20;
    var_s0 = 9;
    if (0xA != 0) {
        temp_f30 = D_800A6458;
        temp_f24 = D_800A645C;
        temp_f22 = D_800A6460;
        do {
            sp84 = ((random_float() * 105.0f) + 105.0f) * temp_f22;
            sp88 = random_float() * 3008.0f * temp_f22;
            temp_f2 = ((random_float() * temp_f30) + D_800A6464) * temp_f24;
            spA4 = temp_f2;
            spA8 = temp_f2;
            sp8C = temp_f2;
            sp90 = ((random_float() * D_800A6468) + 94.0f) * temp_f24;
            sp9C = (random_float() * 200.0f) + -100.0f;
            spA0 = (random_float() * 148.0f) + -100.0f;
            spAC = ((s32 (*)())((char *)(&D_8008FD04 + (func_151D8E20() * 4))))();
            spAE = (random_u32() % 51U) + 0x32;
            spBA = (random_u32() % 101U) + 0x64;
            if (random_u32() & 1) {
                spB0 |= 2;
            }
            if (random_u32() & 1) {
                spB0 |= 4;
            }
            temp_v0 = func_1515548C(&sp9C, 2, 0, 0, 0x18, 0xFF, 1);
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0x70, (f32 *) &sp80, 0x18);
            }
            var_s0 -= 1;
        } while (var_s0 != 0);
    }
}

s32 func_1515B994(void *arg0) {
    f32 temp_f14;
    f32 temp_f2;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x78));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x74));
    (*(f32 *)((char *)(arg0) + 0x14)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) + ((temp_f2 * D_800BE9A4) + (0.5f * temp_f14 * D_800BE9A4)));
    (*(f32 *)((char *)(arg0) + 0x78)) = (f32) (temp_f2 + (temp_f14 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7C)) + ((*(f32 *)((char *)(arg0) + 0x80)) * ((*(f32 *)((char *)(arg0) + 0x78)) + temp_f2) * 0.5f));
    return 1;
}

void func_1515BA10(s32 arg0) {

}

void func_1515BA1C( s32 arg0) {
    func_1515AF90(arg0);
}

void func_1515BA48(s32 arg0) {

}

void func_1515BA54( s32 arg0) {
    func_1515B674(arg0);
}

void func_1515BA80( s32 arg0) {
    func_1515B5F4(arg0);
}

void func_1515BAAC( s32 arg0) {
    func_1515B5F4(arg0);
}
