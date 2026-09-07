/**
 * Auto-decompiled from asm/E8090.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();            /* extern */
void * func_1504715C();                     /* extern */
u32 random_u32();                             /* extern */
f32 random_float();                             /* extern */
s32 func_15130374();            /* extern */
void * func_15132A4C();          /* extern */
void * func_1513F6C0();                             /* extern */
void * func_15142314();           /* extern */
void * func_15143E94();                              /* extern */
void * func_1514C678(); /* extern */
void * func_15165F80(); /* extern */
s32 func_1518ABD0();                     /* extern */
void * memcpy();                            /* extern */
extern f32 D_8009FE70;
extern f32 D_8009FE74;
extern f32 D_8009FE78;
extern f32 D_8009FE7C;
extern f32 D_8009FE80;
extern f32 D_8009FE84;
extern f32 D_8009FE88;
extern f32 D_8009FE8C;

void func_150BABE0(void *arg0, s32 arg1, s32 arg2) {
    f32 spC8;
    f32 spC4;
    s32 spC0;
    s32 spBC;
    void * sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    s8 sp84;
    s32 sp80;
    s32 sp7C;
    s8 sp7B;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    s8 sp77;
    s8 sp76;
    s8 sp75;
    s8 sp74;
    s32 sp70;
    s32 sp6C;
    s8 sp6B;
    s8 sp6A;
    s16 sp68;
    s32 sp64;
    s32 sp60;
    f32 sp5C;
    f32 sp54;
    u32 sp50;
    u32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 temp_f16;
    s16 temp_a0;
    s16 temp_v1_2;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    f32 spCC;
    temp_t6 = arg1 & 0xFF;
    spBC = (s32) ((*(s32 *)((char *)((D_800DBFF0 + (D_80082FA4 * 0x9A0))) + 0x380)) * D_8009FE70);
    if (arg0 != NULL) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x0));
        if ((temp_v0 != 0) && (temp_v0 != 8)) {
            temp_v1 = (*(s32 *)((char *)(arg0) + 0x1D4));
            if (temp_v1 != 0) {
                switch (temp_t6) {                  /* irregular */
                case 0:
                    spC0 = 0x11;
                    break;
                case 1:
                    spC0 = 0x1A;
                    break;
                }
                func_15142314(temp_v1, spC0, &spC4, arg0);
                spC8 = (*(s32 *)((char *)(arg0) + 0x180));
                func_15143E94(5, 0x4022);
                func_15165F80(-1, (s32) spC4, (s32) (spC8 + 6.0f), (s32) spCC, 0x19, 0x12, 0, (s32) arg2, 1);
                sp54 = random_float();
                temp_v1_2 = spBC + 0x3C;
                temp_a0 = spBC - 0x3C;
                temp_t7 = (random_u32() % 11U) + 0x1E;
                sp44 = (f32) temp_a0;
                sp48 = (f32) temp_v1_2;
                func_1514C678(spC4, spC8, temp_a0, spBC, spCC, (sp54 * 50.0f) + 40.0f, (s32) temp_v1_2, (s32) temp_a0, temp_t7, 5, 0, 0, 0, (s32) arg2);
                func_1504715C(&sp98, arg0);
                sp8C = spC4;
                sp90 = spC8 + 100.0f;
                sp94 = spCC;
                if (func_15046C80(&sp8C, 0, spC8 - 100.0f, &sp98) != 0) {
                    temp_f16 = random_float() * 200.0f;
                    sp6A = 0x2A;
                    sp6B = 0;
                    sp64 = 0x7340;
                    sp68 = 0x12C;
                    sp6C = 0;
                    sp5C = temp_f16 + 200.0f;
                    sp70 = (random_u32() % 2001U) + 0x7D0;
                    sp74 = 0xFF;
                    sp75 = 0xFF;
                    sp76 = 0;
                    sp77 = 0;
                    sp78 = 0;
                    sp79 = 0xFF;
                    sp7A = 0;
                    sp7B = 0xD;
                    sp84 = 0xFF;
                    sp80 = 0;
                    sp7C = 0x170002;
                    sp4C = random_u32();
                    sp50 = random_u32();
                    temp_v0_2 = func_1513C73C(&sp64, 0, 0, &sp9C, spC4, sp98, spCC, sp5C, sp5C, sp4C & 0xFF, (random_u32() & 1) + ((sp50 & 1) * 2), 4, (s32) arg2, 0);
                    if (temp_v0_2 != 0) {
                        sp60 = temp_v0_2;
                        if (func_1518ABD0(D_80088750, temp_v0_2, 1) == 0) {
                            func_1516972C(sp60, sp60);
                        }
                    }
                }
                sp54 = random_float();
                func_1514C678(spC4, spC8, (s16) spCC, (s32) ((sp54 * 40.0f) + 60.0f), sp48, sp44, (random_u32() % 7U) + 6, 6, 0, 0, 0, (s32) arg2);
            }
        }
    }
}

s32 func_150BAFEC(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg8, u8 arg14) {
    s32 unksp3F;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
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
    s16 sp3E;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    f32 temp_f6_2;
    s16 temp_t4;
    s32 temp_v0;

    sp38 = func_151423D8((arg8 - 0x40) & 0xFF);
    sp34 = func_151423D8((u8) arg8);
    sp65 = 0x29;
    sp50 = 0xE03;
    sp48 = 0x200005;
    sp4C = 0;
    sp52 = (random_u32() % 36U) + 0x46;
    sp54 = 0;
    sp58 = 0;
    sp60 = 0xB0;
    sp61 = 0xA0;
    sp62 = 0x2A;
    sp5C = 0x40;
    sp5D = 0xB;
    sp5E = 0x6A;
    sp5F = 0xFF;
    sp63 = (random_u32() % 52U) + 0x5A;
    sp64 = 0xFF;
    spA8 = 3;
    spA9 = 3;
    temp_f6 = random_float() * 165.0f;
    sp78 = arg2;
    sp7C = arg3;
    sp80 = arg4;
    temp_f2 = temp_f6 + 800.0f;
    sp70 = temp_f2;
    sp74 = temp_f2;
    temp_t4 = (random_u32() % 11U) - 0xC;
    sp3E = temp_t4;
    sp30 = func_151423D8((temp_t4 - 0x40) & 0xFF);
    sp2C = func_151423D8(unksp3F);
    temp_f6_2 = random_float() * 11.0f;
    spA0 = 0xE05;
    temp_f2_2 = temp_f6_2 + 15.0f;
    temp_f12 = temp_f2_2 * sp2C;
    sp90 = temp_f12 * sp38;
    sp94 = -temp_f2_2 * sp30;
    sp9C = 0.0f;
    sp98 = temp_f12 * sp34;
    if (random_u32(temp_f12) & 1) {
        spA0 |= 0x40;
    }
    if (random_u32() & 1) {
        spA0 |= 0x80;
    }
    spAA = 2;
    spAB = -1;
    sp66 = 0x16;
    sp68 = 0xB;
    sp6A = 1;
    sp6C = D_8009FE74;
    sp40 = D_8009FE78;
    temp_v0 = func_15130374(&sp48, 0, 4, arg14, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0xA8, &sp40, 4);
    }
    return 1;
}

s32 func_150BB260(void *arg0, void * arg1) {
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

void func_150BB408(void *arg0) {
    (*(s32 *)((char *)(arg0) + 0x1C)) = 0x32;
    (*(s32 *)((char *)(arg0) + 0x18)) = (s32) ((*(s32 *)((char *)(arg0) + 0x18)) | 1);
    (*(s32 *)((char *)(arg0) + 0xB2)) = 5;
    (*(s16 *)((char *)(arg0) + 0xB0)) = (s16) (*(s16 *)((char *)(arg0) + 0x1C));
    func_1513F6C0(6, (*(s32 *)((char *)(arg0) + 0x81)));
}

s32 func_150BB450(void *arg0) {
    s16 temp_lo;
    s16 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (temp_v0 < (*(s32 *)((char *)(arg0) + 0xB0))) {
        temp_lo = temp_v0 * (*(s32 *)((char *)(arg0) + 0xB2));
        if (temp_lo < (s32) (*(s32 *)((char *)(arg0) + 0x28))) {
            (*(u8 *)((char *)(arg0) + 0x28)) = (u8) temp_lo;
        }
    }
    return 1;
}

s32 func_150BB498(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg8, u8 arg14) {
    s32 unkspBF;
    s16 spBE;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    s16 spA0;
    s16 sp9E;
    s8 sp9C;
    s32 sp98;
    s8 sp96;
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
    s8 sp84;
    s16 sp82;
    s16 sp80;
    s32 sp7C;
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
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    s16 temp_t8;

    spB8 = func_151423D8((arg8 - 0x40) & 0xFF);
    spB4 = func_151423D8((u8) arg8);
    sp7C = 0x9E8;
    sp48 = 1.0f;
    sp4C = 1.0f;
    sp50 = 1.0f;
    sp3C = 0.0f;
    sp40 = 0.0f;
    sp44 = 0.0f;
    sp54 = arg2;
    sp58 = arg3;
    sp5C = arg4;
    sp30 = D_8009FE7C;
    temp_t8 = (random_u32(1.0f) % 13U) - 0x34;
    spBE = temp_t8;
    spB0 = func_151423D8((temp_t8 - 0x40) & 0xFF);
    spAC = func_151423D8(unkspBF);
    temp_f2 = (random_float() * 9.0f) + 3.0f;
    temp_f12 = temp_f2 * spAC;
    sp60 = temp_f12 * spB8;
    sp64 = -temp_f2 * spB0;
    sp68 = temp_f12 * spB4;
    temp_f16 = random_float(temp_f12) * 50.0f;
    sp70 = 0.0f;
    sp6C = temp_f16 + -25.0f;
    sp74 = (random_float() * 50.0f) + -25.0f;
    sp80 = (random_u32() % 68U) + 0x26;
    temp_f6 = random_float() * D_8009FE80;
    sp2C = 1.0f;
    sp78 = temp_f6 + D_8009FE84;
    temp_f2_2 = (random_float() * D_8009FE88) + D_8009FE8C;
    sp82 = 0x1F;
    sp84 = 0;
    sp88 = 0;
    sp34 = temp_f2_2;
    sp8C = 0xFF;
    sp8D = 1;
    sp8E = 0;
    sp8F = 0;
    sp90 = 0;
    sp91 = 0;
    sp92 = 0;
    sp93 = 0;
    sp94 = 0;
    sp96 = 0;
    sp98 = 0;
    sp9C = 0;
    sp9E = 1;
    spA0 = 0xFF;
    sp38 = temp_f2_2;
    func_15132A4C(&sp2C, 3, 0xFF, 0, (s32) arg14, 0);
    return 1;
}
