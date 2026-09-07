/**
 * Auto-decompiled from asm/117490.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();           /* extern */
u32 random_u32();                     /* extern */
f32 random_float();                                /* extern */
void * func_150E5AE0();                                  /* extern */
s32 func_151303BC();                     /* extern */
void * func_1513418C();                    /* extern */
s32 func_15134DAC();            /* extern */
s32 func_151602C0(); /* extern */
void * memcpy();                            /* extern */
extern f32 D_800A1410;
extern f32 D_800A1414;
extern f32 D_800A1418;
extern f32 D_800A141C;
extern f32 D_800A1420;
extern f32 D_800A1424;
extern f32 D_800A1428;
extern f32 D_800A142C;
extern f32 D_800A1430;
extern f32 D_800A1434;
extern f32 D_800A1438;
extern f32 D_800A143C;
extern f32 D_800A1440;
extern f32 D_800A1444;
extern f32 D_800A1448;
extern f32 D_800A144C;
extern f32 D_800A1450;
extern f32 D_800A1454;
extern f32 D_800A1458;
extern f32 D_800A1460;

s32 func_150E9FE0(void *arg0, s32 arg1, void * arg2, void * arg3) {
    s8 sp65;
    s8 sp64;
    f32 sp60;
    s8 sp5C;
    s8 sp5B;
    s8 sp5A;
    s16 sp56;
    s16 sp54;
    s16 sp52;
    s8 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s8 sp34;
    void *sp30;
    u8 sp2C;
    s32 sp28;
    f32 sp24;
    f32 sp20;
    s32 sp1C;
    f32 sp18;
    s32 temp_v0;
    s32 var_v1;

    sp2C = (*(s32 *)((char *)(arg0) + 0x3B));
    sp38 = -9.0f;
    sp30 = arg0;
    sp34 = 8;
    sp3C = -14.0f;
    sp48 = -14.0f;
    sp50 = 2;
    sp52 = 0x3C;
    sp54 = 0x3C;
    sp56 = arg1;
    sp5A = 2;
    sp5B = 2;
    sp5C = 2;
    sp64 = 3;
    sp65 = -1;
    sp18 = 0.0f;
    sp1C = 0x11111;
    sp40 = 27.0f;
    sp44 = -21.0f;
    sp4C = 41.0f;
    sp60 = 0.5f;
    sp20 = D_800A1410;
    sp24 = D_800A1414;
    temp_v0 = func_15134DAC(&sp2C, 0x10, arg0, arg1);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        sp28 = temp_v0;
        memcpy(temp_v0 + 0x80, &sp18, 0x10);
        var_v1 = sp28;
    }
    return var_v1;
}

s32 func_150EA10C(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x80)) = 0;
    return 1;
}

void func_150EA11C(void *arg0, void *arg1, void * arg2, void * arg3, f32 arg4, void *arg5) {
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s32 sp58;
    s32 sp54;
    s16 sp52;
    s16 sp50;
    s32 sp4C;
    s32 sp48;
    f32 sp3C;
    f32 sp38;
    s8 sp37;
    s8 sp36;
    s8 sp35;
    s8 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s8 sp23;
    s8 sp22;
    s8 sp21;
    s8 sp20;
    f32 sp1C;
    f32 temp_f2;
    f32 temp_f4;
    s32 temp_v0;

    sp65 = 0x2F;
    sp50 = 0xC01;
    sp48 = 0x200005;
    sp4C = 0;
    sp62 = 0;
    sp61 = 0;
    sp60 = 0;
    sp5F = 0;
    sp5E = 0;
    sp5D = 0;
    sp5C = 0;
    sp58 = 0;
    sp54 = 0;
    sp64 = 0xFF;
    sp6A = 0;
    sp6C = 0.0f;
    spA0 = 0x1207;
    spA8 = 5;
    spA9 = 5;
    spAA = 4;
    spAB = -1;
    sp84 = 0.0f;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp66 = 0x14;
    sp68 = 0xC;
    sp20 = 0;
    sp21 = 0;
    sp34 = 0;
    sp35 = 0;
    sp2C = 3.5f;
    sp30 = D_800A1418;
    temp_f4 = ((*(s32 *)((char *)(arg1) + 0x0)) - (*(s32 *)((char *)(arg0) + 0x0))) * (*(s32 *)((char *)(arg5) + 0x74));
    sp90 = temp_f4;
    sp94 = ((*(s32 *)((char *)(arg1) + 0x4)) - (*(s32 *)((char *)(arg0) + 0x4))) * (*(s32 *)((char *)(arg5) + 0x74));
    sp98 = ((*(s32 *)((char *)(arg1) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x8))) * (*(s32 *)((char *)(arg5) + 0x74));
    (*(s32 *)((char *)&(sp78) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(sp78) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(sp78) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    sp78 += temp_f4 * arg4;
    sp7C += sp94 * arg4;
    sp80 += sp98 * arg4;
    if (random_u32(arg4, arg5) & 1) {
        spA0 |= 0x40;
    }
    if (random_u32() & 1) {
        spA0 |= 0x80;
    }
    sp52 = (random_u32() % 51U) + 0x32;
    sp63 = (random_u32() % 101U) + 0x64;
    temp_f2 = (random_float() * 39.0f) + 31.0f;
    sp70 = temp_f2;
    sp1C = temp_f2;
    sp74 = temp_f2;
    sp22 = (random_u32() % 5U) + 4;
    sp23 = (random_u32() % 5U) + 4;
    sp24 = ((random_float() * 0.25f) + D_800A141C) * sp1C;
    sp28 = ((random_float() * 0.25f) + D_800A1420) * sp1C;
    sp36 = (random_u32() % 5U) + 4;
    sp37 = (random_u32() % 5U) + 4;
    sp38 = ((random_float() * D_800A1424) + D_800A1428) * sp1C;
    sp3C = ((random_float() * D_800A142C) + D_800A1430) * sp1C;
    sp9C = ((random_float() * 70.0f) + 73.0f) * D_800A1434;
    temp_v0 = func_151303BC(&sp48, 2, 0x28);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, &sp1C, 0x28);
    }
}

f32 func_150EA490(void *arg0) {
    f32 temp_f2;

    temp_f2 = (func_151423D8((((u32) (*(u32 *)((char *)(arg0) + 0x80)) >> 0x10) - 0x40) & 0xFF) * (*(u32 *)((char *)(arg0) + 0x8C))) + (*(u32 *)((char *)(arg0) + 0x88));
    (*(u32 *)((char *)(arg0) + 0x80)) = (u32) ((*(u32 *)((char *)(arg0) + 0x80)) + ((*(u32 *)((char *)(arg0) + 0x84)) * D_800BE9E4));
    return temp_f2;
}

void func_150EA500(void *arg0, s32 arg1, void * arg2, void * arg3) {
    s8 sp4D;
    s8 sp4C;
    s8 sp4B;
    s8 sp4A;
    s16 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s8 sp30;
    void *sp2C;
    u8 sp28;
    s32 sp24;
    s32 sp20;
    s32 var_v0;

    sp20 = 0;
    sp24 = 0;
    sp2C = arg0;
    sp30 = 1;
    sp34 = 0.0f;
    sp38 = 0.0f;
    sp3C = 0.0f;
    sp28 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp40 = 25.0f;
    sp44 = D_800A1438;
    if (arg1 == -1) {
        sp48 = 0x12C;
    } else {
        sp48 = arg1;
    }
    if (arg1 == -1) {
        var_v0 = 0;
    } else {
        var_v0 = 4;
    }
    sp4A = var_v0 | 0xA;
    sp4B = 7;
    sp4C = -1;
    sp4D = 6;
    func_1513418C(&sp20, 0, 0xFF, 0);
}

void func_150EA5CC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg5) {
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    s16 sp6A;
    s16 sp68;
    s16 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5F;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s32 sp58;
    s32 sp54;
    s16 sp52;
    s16 sp50;
    s32 sp4C;
    s32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    s8 sp37;
    s8 sp36;
    s8 sp35;
    s8 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s8 sp23;
    s8 sp22;
    s8 sp21;
    s8 sp20;
    f32 sp1C;
    f32 temp_f2;
    s32 temp_v0;

    sp40 = 1000.0f;
    sp80 = arg2;
    sp2C = 4.0f;
    sp30 = 0.25f;
    sp65 = 0x2F;
    sp50 = 0xC01;
    sp48 = 0x200005;
    sp4C = 0;
    sp62 = 0;
    sp61 = 0;
    sp60 = 0;
    sp5F = 0;
    sp5E = 0;
    sp5D = 0;
    sp5C = 0;
    sp58 = 0;
    sp54 = 0;
    sp64 = 0xFF;
    sp6A = 0;
    sp6C = 0.0f;
    spA0 = 0x3207;
    spA8 = 5;
    spA9 = 5;
    spAA = 4;
    spAB = -1;
    sp78 = arg0;
    sp7C = arg1;
    sp84 = 0.0f;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp66 = 0x1E;
    sp68 = 8;
    sp20 = 0;
    sp21 = 0;
    sp34 = 0;
    sp35 = 0;
    sp90 = -arg3 * D_800A143C;
    sp94 = 0.0f;
    sp98 = -arg5 * D_800A143C;
    if (random_u32() & 1) {
        spA0 |= 0x40;
    }
    if (random_u32() & 1) {
        spA0 |= 0x80;
    }
    sp52 = (random_u32() % 51U) + 0x6A;
    sp63 = (random_u32() % 101U) + 0x64;
    temp_f2 = (random_float() * 62.0f) + 41.0f;
    sp70 = temp_f2;
    sp1C = temp_f2;
    sp74 = temp_f2;
    sp22 = (random_u32() % 5U) + 4;
    sp23 = (random_u32() % 5U) + 4;
    sp24 = ((random_float() * 0.25f) + D_800A1440) * sp1C;
    sp28 = ((random_float() * 0.25f) + D_800A1444) * sp1C;
    sp36 = (random_u32() % 5U) + 4;
    sp37 = (random_u32() % 5U) + 4;
    sp38 = ((random_float() * D_800A1448) + D_800A144C) * sp1C;
    sp3C = ((random_float() * D_800A1450) + D_800A1454) * sp1C;
    sp9C = ((random_float() * 60.0f) + 21.0f) * D_800A1458;
    temp_v0 = func_151303BC(&sp48, 2, 0x28);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, &sp1C, 0x28);
    }
}

void func_150EA8E0(s32 arg0) {
    func_150E5AE0();
}

void func_150EA904(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = D_800DBEF4 + (arg1 * 0xA0);
    if ((*(s32 *)((char *)(temp_v0) + 0x72)) == 0xE0) {
        (*(u8 *)((char *)(temp_v0) + 0x73)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x73)) | 3);
    }
}

void func_150EA944(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    s32 temp_t3;
    s32 temp_v0;

    if (((*(s32 *)((char *)(arg0) + 0x73)) & 3) == 3) {
        temp_f0 = (f32) D_800BE9E4;
        (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x0)) + ((*(f32 *)((char *)(arg0) + 0x60)) * temp_f0));
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x0));
        if (temp_f2 < 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (temp_f2 + 360.0f);
        } else if (temp_f2 >= 360.0f) {
            (*(f32 *)((char *)(arg0) + 0x0)) = (f32) (temp_f2 - 360.0f);
        }
        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + ((*(f32 *)((char *)(arg0) + 0x64)) * temp_f0));
        temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x4));
        if (temp_f2_2 < 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (temp_f2_2 + 360.0f);
        } else if (temp_f2_2 >= 360.0f) {
            (*(f32 *)((char *)(arg0) + 0x4)) = (f32) (temp_f2_2 - 360.0f);
        }
        (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) + ((*(f32 *)((char *)(arg0) + 0x68)) * temp_f0));
        temp_f2_3 = (*(s32 *)((char *)(arg0) + 0x8));
        if (temp_f2_3 < 0.0f) {
            (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (temp_f2_3 + 360.0f);
        } else if (temp_f2_3 >= 360.0f) {
            (*(f32 *)((char *)(arg0) + 0x8)) = (f32) (temp_f2_3 - 360.0f);
        }
        (*(s16 *)((char *)(arg0) + 0x5C)) = (s16) ((*(s16 *)((char *)(arg0) + 0x5C)) - ((*(s16 *)((char *)(arg0) + 0x3C)) * D_800BE9E4));
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) ((*(s16 *)((char *)(arg0) + 0x10)) + ((*(s16 *)((char *)(arg0) + 0x5A)) * D_800BE9E4));
        temp_t3 = (*(s32 *)((char *)(arg0) + 0x7C)) + ((*(s32 *)((char *)(arg0) + 0x5C)) * D_800BE9E4);
        (*(s32 *)((char *)(arg0) + 0x7C)) = temp_t3;
        (*(s16 *)((char *)(arg0) + 0x12)) = (s16) (temp_t3 >> 3);
        (*(s16 *)((char *)(arg0) + 0x14)) = (s16) ((*(s16 *)((char *)(arg0) + 0x14)) + ((*(s16 *)((char *)(arg0) + 0x5E)) * D_800BE9E4));
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x8A)) - (D_800BE9E4 * 4);
        if (temp_v0 > 0) {
            (*(u8 *)((char *)(arg0) + 0x8A)) = (u8) temp_v0;
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
    }
}

void func_150EAB10(void *arg0) {
    s32 spF8;
    s8 spF5;
    s8 spF4;
    s32 spF0;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spBC;
    s8 spB8;
    s16 spB6;
    s8 spB5;
    s8 spB4;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_v0;
    void *temp_s0;

    f32 spC0;
    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s0) + 0x30)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x30)) + (((*(f32 *)((char *)(temp_s0) + 0x28)) + (random_float() * (*(f32 *)((char *)(temp_s0) + 0x2C)))) * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s0) + 0x30)) > 1.0f) {
        spF0 = 0;
        spF4 = 0;
        spF5 = 0;
        spF8 = 0;
        spD8 = D_800A1460;
        spCC = (*(s32 *)((char *)(temp_s0) + 0x20));
        spB4 = 2;
        spB5 = 0x13;
        spB6 = 0x12C;
        spB8 = 0;
        spD0 = (*(s32 *)((char *)(temp_s0) + 0x24));
        do {
            temp_f20 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x38))) + (*(s32 *)((char *)(temp_s0) + 0x34));
            if (temp_f20 != 0.0f) {
                temp_f0 = random_float();
                spA0 = ((*(s32 *)((char *)(temp_s0) + 0x10)) * temp_f0) + (*(s32 *)((char *)(arg0) + 0x28));
                temp_f16 = ((*(s32 *)((char *)(temp_s0) + 0x14)) * temp_f0) + (*(s32 *)((char *)(temp_s0) + 0x4));
                spA4 = temp_f16;
                temp_f0_2 = random_float();
                temp_f8 = ((*(s32 *)((char *)(temp_s0) + 0x18)) * temp_f0_2) + (*(s32 *)((char *)(temp_s0) + 0x8));
                spA8 = temp_f8;
                temp_f10 = temp_f8 - spA0;
                spC4 = temp_f10;
                temp_f18 = ((*(s32 *)((char *)(temp_s0) + 0x1C)) * temp_f0_2) + (*(s32 *)((char *)(temp_s0) + 0xC));
                temp_f6 = temp_f18 - temp_f16;
                spAC = temp_f18;
                spC8 = temp_f6;
                temp_f0_3 = sqrtf((temp_f10 * temp_f10) + (temp_f6 * temp_f6));
                if (temp_f0_3 != 0.0f) {
                    temp_f0_4 = 1.0f / temp_f0_3;
                    spC4 = temp_f10 * temp_f0_4;
                    spC8 = temp_f6 * temp_f0_4;
                    if (random_u32() & 1) {
                        (*(s32 *)((char *)&(spBC) + 0x0)) = (*(s32 *)((char *)&(spA0) + 0x0));
                        (*(s32 *)((char *)&(spBC) + 0x4)) = (s32) (*(s32 *)((char *)&(spA0) + 0x4));
                    } else {
                        (*(s32 *)((char *)&(spBC) + 0x0)) = (*(s32 *)((char *)&(spA8) + 0x0));
                        (*(s32 *)((char *)&(spBC) + 0x4)) = (s32) (*(s32 *)((char *)&(spA8) + 0x4));
                        spC4 = -spC4;
                        spC8 = -spC8;
                    }
                    spC4 *= temp_f20;
                    spC8 *= temp_f20;
                    spD4 = temp_f0_3 / temp_f20;
                    sp88 = (s32) spBC;
                    sp90 = (s32) spC0;
                    sp8C = (s32) (*(s32 *)((char *)(temp_s0) + 0x20));
                    temp_v0 = func_151602C0(&spB4, &sp88, (*(s32 *)((char *)(temp_s0) + 0x3F)), (*(s32 *)((char *)(temp_s0) + 0x3C)), (s32) (*(s32 *)((char *)(temp_s0) + 0x3D)), (s32) (*(s32 *)((char *)(temp_s0) + 0x3E)), 0xFF, 0, 0x40, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                    if (temp_v0 != 0) {
                        memcpy(temp_v0 + 0x18, &spBC, 0x40);
                    }
                }
            }
            (*(f32 *)((char *)(temp_s0) + 0x30)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x30)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x30)) > 1.0f);
    }
}

s32 func_150EAE24(void *arg0) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    s32 var_v0;
    void *var_v0_2;

    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) ((*(f32 *)((char *)(arg0) + 0x18)) + ((*(f32 *)((char *)(arg0) + 0x20)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x1C)) + ((*(f32 *)((char *)(arg0) + 0x24)) * D_800BE9A4));
    sp28 = (*(s32 *)((char *)(arg0) + 0x18));
    sp2C = (*(s32 *)((char *)(arg0) + 0x28));
    sp30 = (*(s32 *)((char *)(arg0) + 0x1C));
    (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0xE)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x18));
    (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x12)) = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x1C));
    if (func_15046C80(&sp28, 0, (*(s32 *)((char *)(arg0) + 0x2C)), (char *)(arg0) + 0x34) != 0) {
        var_v0_2 = (char *)(arg0) + 0x18;
        (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x10)) = (s16) (s32) (*(s16 *)((char *)(var_v0_2) + 0x1C));
    } else {
        var_v0_2 = (char *)(arg0) + 0x18;
        (*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x14))) + 0x10)) = (s16) (s32) (*(s16 *)((char *)(var_v0_2) + 0x10));
    }
    (*(f32 *)((char *)(var_v0_2) + 0x18)) = (f32) ((*(f32 *)((char *)(var_v0_2) + 0x18)) - D_800BE9A4);
    var_v0 = 1;
    if ((*(s32 *)((char *)(var_v0_2) + 0x18)) <= 0.0f) {
        var_v0 = 0;
    }
    return var_v0;
}
