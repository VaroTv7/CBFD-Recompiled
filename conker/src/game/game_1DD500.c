/**
 * Auto-decompiled from asm/1DD500.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1504697C();            /* extern */
s32 func_15046C80(); /* extern */
void * func_1504715C();             /* extern */
u32 random_u32();                             /* extern */
f32 random_float();                        /* extern */
s32 func_15130374();            /* extern */
s32 func_15134070();                          /* extern */
void * func_15136698(); /* extern */
void * func_1513F680();              /* extern */
void * func_15143134();              /* extern */
void * func_15143794();                /* extern */
void * func_15143874();            /* extern */
void * func_15153F18();         /* extern */
void * func_151D5D60();        /* extern */
void * func_151DA6F8(); /* extern */
void * func_151DAB58(); /* extern */
void * memcpy();                          /* extern */
void func_151B1918();                     /* static */
extern s32 D_8008FAD0;
extern s32 D_8008FADC;
extern s32 D_800A3FD8;
extern s32 D_800A3FE6;
extern s32 D_800AA120;
extern s32 D_800AA12C;
extern s32 D_800AA1DC;
extern f32 D_800AA28C;
extern f32 D_800AA290;
extern f32 D_800AA294;
extern f32 D_800AA298;
extern f32 D_800AA29C;
extern f32 D_800AA2A0;
extern f32 D_800AA2A4;
extern f32 D_800AA2A8;
extern f32 D_800AA2AC;
extern f32 D_800AA2B0;
extern f32 D_800AA2B4;
extern f32 D_800AA2B8;
extern f32 D_800AA2BC;
extern f32 D_800AA2C0;
extern f32 D_800AA2C4;
extern f32 D_800AA2C8;
extern f32 D_800AA2CC;
extern f32 D_800AA2D0;
extern f32 D_800AA2D4;
extern f32 D_800AA2D8;
extern f32 D_800AA2DC;
extern f32 D_800AA2E0;
extern f32 D_800AA2E4;
extern f32 D_800AA2E8;
extern f32 D_800AA2EC;
extern f32 D_800AA2F0;
extern f32 D_800AA2F4;
extern f32 D_800AA2F8;
extern f32 D_800AA2FC;
extern f32 D_800AA300;
extern f32 D_800AA304;
extern f32 D_800AA308;
extern void *D_800AA30C;
extern f32 D_800AA310;
extern f32 D_800AA314;
extern f32 D_800AA318;
extern s32 D_800AB310;

s32 func_151B0050(s32 arg0, void * arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg8, s16 arg9, u8 arg14) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    void * sp68;
    f32 sp5C;
    u32 sp58;
    u32 sp54;
    f32 sp50;

    sp74 = arg2;
    sp78 = arg3;
    sp7C = arg4;
    func_15143794(arg9, arg8, (random_float(arg2, arg3) * D_800AA28C) + D_800AA290, &sp68);
    sp50 = random_float();
    sp54 = random_u32();
    sp58 = random_u32();
    sp5C = random_float();
    func_151DA6F8(&sp74, &sp68, (sp50 * 0.0f) + D_800AA294, (s16) ((sp54 % 20U) + 0x1F), (sp58 % 101U) + 0x9B, (sp5C * D_800AA298) + D_800AA29C, (random_u32() & 1) + 3, 1, 1.0f, 1.0f, 0, 0, 0, 0x10, 0xF, 0, (s32) arg14, 1);
    return 1;
}

void func_151B01B8(void * *arg0, void *arg1) {
    s32 sp9C;
    s16 sp9A;
    s16 sp98;
    f32 sp94;
    s8 sp90;
    s16 sp8E;
    s16 sp8C;
    s16 sp8A;
    s16 sp88;
    s16 sp86;
    s16 sp84;
    s16 sp82;
    s16 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp5C;
    s16 sp5A;
    s16 sp58;
    s16 sp56;
    s16 sp54;
    u8 sp53;
    void * sp2C;
    void *sp20;
    s32 var_v0;
    u8 temp_v0;
    void *temp_v1;

    if ((arg0 != NULL) && ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) && (((*(s32 *)((char *)(arg0) + 0x74)) & 0xF) != 0xF)) {
        func_1504715C(&sp2C, arg0, arg1, arg0);
        var_v0 = 4;
        if (arg1 != NULL) {
            temp_v0 = (*(s32 *)((char *)(arg1) + 0x4));
            if ((temp_v0 == 0x53) || (temp_v0 == 0xA5)) {
                var_v0 = 4;
            } else {
                var_v0 = func_15134070(arg1);
            }
        }
        if (var_v0 != 0x63) {
            temp_v1 = (var_v0 * 0x10) + &D_800A3FD8;
            if ((*(s32 *)((char *)(temp_v1) + 0xE)) != 2) {
                sp53 = ((s32) (*(s32 *)((char *)(arg0) + 0x7A)) >> 8) + 0x40;
                sp20 = temp_v1;
                func_15143134(&D_800AA120, &sp5C, (*(s32 *)((char *)(arg0) + 0x1D4)) + 0x180, arg0);
                sp54 = sp53 - 0x68;
                sp68 = D_800AA2A0;
                sp80 = 0xA;
                sp82 = 0x14;
                sp56 = 0xD0;
                sp58 = -0x1B;
                sp5A = 0x36;
                sp84 = 3;
                sp86 = 2;
                sp88 = 0x1E;
                sp8A = 0x28;
                sp8C = 0x9B;
                sp8E = 0x64;
                sp6C = D_800AA2A4;
                sp70 = D_800AA2A8;
                sp74 = D_800AA2AC;
                sp78 = 6.0f;
                sp7C = D_800AA2B0;
                sp94 = 0.5f;
                if ((*(s32 *)((char *)(sp20) + 0xE)) == 1) {
                    sp90 = 1;
                } else {
                    sp90 = 0;
                }
                sp98 = 0x10;
                sp9A = 0xF;
                sp9C = 0;
                func_15153F18(&sp54, &sp5C, &sp2C, 0xFF, 1);
            }
        }
    }
}

void func_151B03B8(void * *arg0, s32 arg1, s32 arg2) {
    s32 sp174;
    s16 sp172;
    s16 sp170;
    f32 sp16C;
    s8 sp168;
    s16 sp166;
    s16 sp164;
    s16 sp162;
    s16 sp160;
    s16 sp15E;
    s16 sp15C;
    s16 sp15A;
    s16 sp158;
    f32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    s16 sp132;
    s16 sp130;
    s16 sp12E;
    s16 sp12C;
    void * sp108;
    s32 sp100;
    u8 spFD;
    s8 spFC;
    s32 spF8;
    void * spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    s32 spB8;
    u8 spB5;
    s8 spB4;
    s32 spB0;
    void * sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 temp_f10;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f4;
    s32 temp_s4;
    s32 var_s1;
    u32 temp_hi;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_s1;

    temp_s4 = arg1 & 0xFF;
    if (arg0 != NULL) {
        func_1504715C(&sp108, arg0);
        sp134 = (*(s32 *)((char *)(arg0) + 0x14));
        sp138 = (*(s32 *)((char *)(arg0) + 0x18));
        sp13C = (*(s32 *)((char *)(arg0) + 0x1C));
        sp140 = D_800AA2B4;
        sp158 = 0xA;
        sp12E = 0xFF;
        sp130 = -0x3F;
        sp15A = 0;
        sp12C = 0;
        sp132 = 0x2D;
        sp15C = 3;
        sp15E = 2;
        sp160 = 0x28;
        sp162 = 0x14;
        sp164 = 0x9B;
        sp166 = 0x64;
        sp168 = 0;
        sp170 = 0x10;
        sp172 = 0xF;
        sp174 = 0;
        sp144 = D_800AA2B8;
        sp148 = D_800AA2BC;
        sp14C = D_800AA2C0;
        sp150 = 18.0f;
        sp154 = D_800AA2C4;
        sp16C = 0.5f;
        func_15153F18(&sp12C, &sp134, &sp108, 0xFF, 1);
        temp_hi = random_u32() % 6U;
        spF8 = 0;
        spFC = 0;
        spFD = 0;
        sp100 = 0;
        spE0 = D_800AA2C8;
        var_s1 = temp_hi + 0xC;
        spD8 = (*(s32 *)((char *)(arg0) + 0x18)) + 100.0f;
        if (var_s1 != 0) {
loop_3:
            temp_s0 = random_u32();
            func_15143874((s16) (temp_s0 & 0xFF), (random_float() * 100.0f) + 110.0f, &spC8, &spD0);
            temp_f4 = spC8 + (*(s32 *)((char *)(arg0) + 0x14));
            spC8 = temp_f4;
            spD4 = temp_f4;
            temp_f10 = spD0 + (*(s32 *)((char *)(arg0) + 0x1C));
            spD0 = temp_f10;
            spDC = temp_f10;
            if ((func_15046C80(&spD4, 0.0f, (*(s32 *)((char *)(arg0) + 0x18)) - 500.0f, &spE0) != 0) && (spFD != 3)) {
                spCC = spE0 + 10.0f;
                if (random_u32() & 1) {
                    temp_f20 = random_float();
                    func_151D9B8C(0U, (temp_f20 * 4.5f) + 15.0f, (u32) ((random_float() * 100.0f) + 155.0f) & 0xFF, &spE4, &spC8, 0x64, 0, 1, 0, temp_s4, arg2);
                } else {
                    temp_f20_2 = random_float();
                    func_151DAB58(0U, (temp_f20_2 * D_800AA2CC) + D_800AA2D0, (u32) ((random_float() * 100.0f) + 155.0f) & 0xFF, &spC8, 1, temp_s4, arg2);
                }
                var_s1 -= 1;
                if (var_s1 == 0) {
                    goto block_9;
                }
                goto loop_3;
            }
        } else {
block_9:
            spBC = (*(s32 *)((char *)(arg0) + 0x14));
            spC0 = (*(s32 *)((char *)(arg0) + 0x18));
            spB8 = 0;
            spB5 = 0;
            spB4 = 0;
            spB0 = 0;
            sp98 = D_800AA2D4;
            spC4 = (*(s32 *)((char *)(arg0) + 0x1C));
            sp8C = spBC;
            sp90 = spC0 + 100.0f;
            sp94 = spC4;
            if ((func_1504697C(&sp8C, 0, spC0 - 500.0f, &sp98) != 0) && (spB5 != 3)) {
                spC0 = sp98 + 10.0f;
                temp_f20_3 = random_float();
                temp_f22 = random_float();
                temp_s0_2 = random_u32();
                temp_s1 = random_u32();
                func_15136698(((temp_f20_3 * 40.0f) + 120.0f) * D_800AA2D8, ((temp_f22 * 123.0f) + 123.0f) * D_800AA2DC, ((temp_s0_2 % 101U) + 0x9B) & 0xFF, ((temp_s1 % 101U) + 0x64) & 0xFF, (random_u32() % 56U) + 0x46, &sp9C, &spBC, 0, 1, temp_s4, arg2);
            }
        }
    }
}

s32 func_151B09BC(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 spDC;
    s8 spD8;
    f32 spD4;
    void * spC8;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    u8 sp48;
    void *sp44;
    u8 sp38;
    void *sp34;
    void * var_a3;
    s16 var_a0;
    s32 *var_v0_2;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v1;
    u8 temp_v0;
    u8 temp_v1;

    if (arg0 == NULL) {
        return 0;
    }
    var_v0 = 4;
    if (arg1 != NULL) {
        temp_v0 = (*(s32 *)((char *)(arg1) + 0x4));
        if ((temp_v0 == 0x53) || (temp_v0 == 0xA5)) {
            var_v0 = 4;
        } else {
            var_v0 = func_15134070(arg1);
        }
    }
    if (var_v0 == 0x63) {
        return 0;
    }
    temp_v1 = *(&D_800A3FE6 + (var_v0 * 0x10));
    if (temp_v1 == 2) {
        return 0;
    }
    if (temp_v1 == 1) {
        spD8 = 1;
    } else {
        spD8 = 0;
    }
    sp34 = arg0;
    sp38 = (*(s32 *)((char *)(arg0) + 0x3B));
    func_151494E0(&sp34, 0x13);
    var_a3 = 0;
    if (arg2 == -1) {
        var_a0 = 0x12C;
    } else {
        var_a0 = arg2;
        var_a3 = 1;
    }
    sp44 = arg0;
    sp4C = 0;
    sp48 = (*(s32 *)((char *)(arg0) + 0x3B));
    spD4 = 0.0f;
    sp50 = 0;
    sp54 = 0;
    sp58 = 0;
    sp5C = 0;
    sp60 = 0;
    sp64 = 0;
    sp68 = 0;
    sp6C = 0;
    sp70 = 0;
    var_v0_2 = &sp68;
    do {
        var_v0_2 += 0x30;
        (*(s32 *)((char *)(var_v0_2) - 0x18)) = 0;
        (*(s32 *)((char *)(var_v0_2) - 0x14)) = 0;
        (*(s32 *)((char *)(var_v0_2) - 0x10)) = 0;
        (*(s32 *)((char *)(var_v0_2) - 0xC)) = 0;
        (*(s32 *)((char *)(var_v0_2) - 0x8)) = 0;
        (*(s32 *)((char *)(var_v0_2) - 0x4)) = 0;
        (*(s32 *)((char *)(var_v0_2) + 0x0)) = 0;
        (*(s32 *)((char *)(var_v0_2) + 0x4)) = 0;
        (*(s32 *)((char *)(var_v0_2) + 0x8)) = 0;
        (*(s32 *)((char *)(var_v0_2) - 0x24)) = 0;
        (*(s32 *)((char *)(var_v0_2) - 0x20)) = 0;
        (*(s32 *)((char *)(var_v0_2) - 0x1C)) = 0;
    } while ((char *)(var_v0_2) != (char *)(&spC8));
    temp_v0_2 = func_151491F4(var_a0, -1, 0x13, var_a3, 0xF, 0x98, (s32) arg3, arg4);
    var_v1 = temp_v0_2;
    if (temp_v0_2 != 0) {
        spDC = temp_v0_2;
        memcpy(temp_v0_2 + 0x28, &sp44, 0x98);
        var_v1 = spDC;
    }
    return var_v1;
}

void func_151B0B88(void *arg0) {
    u8 sp133;
    s8 sp101;
    s8 sp100;
    s32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    s8 spCF;
    s8 spCE;
    s8 spCD;
    s8 spCC;
    s32 spC8;
    s32 spC4;
    s16 spC0;
    s16 spBE;
    u8 spBC;
    u8 spB9;
    s8 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    s8 spA7;
    s8 spA6;
    s8 spA5;
    s8 spA4;
    f32 spA0;
    void *sp94;
    void * *var_a3;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s3;
    s32 var_s7;
    s32 var_v1;
    u32 temp_hi;
    u32 var_fp;
    u8 *temp_s0_5;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s6;
    void *temp_v0_2;
    void *var_s2;
    void *var_s4;
    void *var_s5;

    sp133 = 0;
    if (((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x0)) == 0) || ((*(s32 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) != (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x3B)))) {
        sp133 = 1;
    }
    if (sp133 == 0) {
        temp_a0 = (*(s32 *)((char *)(arg0) + 0x28));
        temp_s6 = (char *)(arg0) + 0x28;
        if (((*(s32 *)((char *)(temp_a0) + 0x1D4)) != 0) && (var_s2 = NULL, var_s4 = NULL, (((*(s32 *)((char *)(temp_a0) + 0x74)) & 0xF) != 0xF))) {
            var_fp = 0;
            var_s7 = 0;
            var_s5 = temp_s6;
            do {
                var_s3 = 1;
                if ((*(s32 *)((char *)(var_s5) + 0xC)) != NULL) {
                    temp_s1 = (char *)(var_s5) + 0xC;
                    temp_s0 = (*(s32 *)((char *)(var_s5) + 0xC));
                    temp_v0 = var_s7 * 0x10;
                    (*(f32 *)((char *)(temp_s0) + 0x40)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x34));
                    (*(s32 *)((char *)(temp_s0) + 0x44)) = (s32) (*(s32 *)((char *)(temp_s0) + 0x38));
                    (*(f32 *)((char *)(temp_s0) + 0x48)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x3C));
                    temp_a0_2 = (*(s32 *)((char *)(arg0) + 0x28));
                    temp_v1 = (*(s32 *)((char *)(temp_a0_2) + 0x4));
                    var_a3 = temp_v0 + 4 + &D_800AA12C;
                    if (temp_v1 == 0x36) {
                        var_a3 = temp_v0 + 4 + &D_800AA1DC;
                    }
                    if (temp_v1 == 0x36) {
                        var_s0 = (*(&D_800AA1DC + temp_v0) << 6) + (*(s32 *)((char *)(temp_a0_2) + 0x1D4));
                    } else {
                        var_s0 = (*(&D_800AA12C + temp_v0) << 6) + (*(s32 *)((char *)(temp_a0_2) + 0x1D4));
                    }
                    func_15143134(var_a3, (*(s32 *)((char *)(var_s5) + 0xC)) + 0x34, var_s0, var_a3);
                    temp_t2 = (*(s32 *)((char *)(temp_s1) + 0x4)) - D_800BE9E4;
                    (*(s32 *)((char *)(temp_s1) + 0x4)) = temp_t2;
                    if (temp_t2 < 0) {
                        temp_s0_2 = (*(s32 *)((char *)(var_s5) + 0xC));
                        temp_v0_2 = (char *)(temp_s0_2) + 0x110;
                        (*(s32 *)((char *)(temp_v0_2) + 0x4)) = 0.0f;
                        var_s3 = 1;
                        (*(f32 *)((char *)(temp_s0_2) + 0x110)) = (f32) (((*(f32 *)((char *)(temp_s0_2) + 0x34)) - (*(f32 *)((char *)(temp_s0_2) + 0x40))) * D_800BE9A8);
                        temp_s0_3 = (*(s32 *)((char *)(var_s5) + 0xC));
                        (*(f32 *)((char *)(temp_v0_2) + 0x8)) = (f32) (((*(f32 *)((char *)(temp_s0_3) + 0x3C)) - (*(f32 *)((char *)(temp_s0_3) + 0x48))) * D_800BE9A8);
                        func_1513F680((*(s32 *)((char *)(var_s5) + 0xC)), 0x10, 0x1B, 0, 0x10);
                        temp_s0_4 = (*(s32 *)((char *)(var_s5) + 0xC));
                        (*(s32 *)((char *)(temp_s0_4) + 0x58)) = (s32) ((*(s32 *)((char *)(temp_s0_4) + 0x58)) | 1);
                        (*(s32 *)((char *)(var_s5) + 0xC)) = NULL;
                        (*(s32 *)((char *)(temp_s6) + 0x8)) = (s32) ((*(s32 *)((char *)(temp_s6) + 0x8)) - 1);
                    } else {
                        var_s3 = 0;
                    }
                }
                var_s7 += 1;
                if (var_s3 != 0) {
                    temp_s1_2 = (char *)(var_s5) + 0xC;
                    if (var_s4 == NULL) {
                        var_s4 = temp_s1_2;
                    }
                    (*(s32 *)((char *)(temp_s1_2) + 0x8)) = var_s2;
                    var_s2 = temp_s1_2;
                    var_fp += 1;
                }
                var_s5 = (char *)(var_s5) + 0xC;
            } while (var_s7 != 0xB);
            if (var_fp != 0) {
                (*(f32 *)((char *)(temp_s6) + 0x90)) = (f32) ((*(f32 *)((char *)(temp_s6) + 0x90)) + (random_float() * D_800AA2E0 * D_800AA2E4 * D_800BE9A4));
                if ((*(s32 *)((char *)(temp_s6) + 0x90)) > 1.0f) {
                    (*(s32 *)((char *)(var_s4) + 0x8)) = var_s2;
                    spBE = 0x1001;
                    spBC = *(&D_800AB310 + (*(s32 *)((char *)(temp_s6) + 0x94)));
                    spC0 = (random_u32() % 51U) + 0x34;
                    spC4 = 0;
                    spC8 = 0;
                    spCC = 0;
                    spCD = 0;
                    spCE = 0;
                    spCF = 0xFF;
                    spFC = 0;
                    spF0 = 1.0f;
                    spF4 = 1.0f;
                    spF8 = 1.0f;
                    spA4 = 0;
                    spA5 = 0;
                    spE4 = 0.0f;
                    spE8 = 0.0f;
                    spEC = 0.0f;
                    spB9 = (*(s32 *)((char *)(temp_s6) + 0x94));
                    spB8 = random_u32() & 1;
                    spA8 = 5.0f;
                    spAC = 25.0f;
                    spB0 = 2.0f;
                    spD0 = 0.0f;
                    spD4 = 0.0f;
                    spB4 = 8.0f;
loop_24:
                    temp_hi = random_u32() % var_fp;
                    var_v1 = temp_hi - 1;
                    if (temp_hi != 0) {
                        do {
                            var_s4 = var_s2;
                            var_s2 = (*(s32 *)((char *)(var_s2) + 0x8));
                            var_v1 -= 1;
                        } while (var_v1 != 0);
                    }
                    temp_s0_5 = (((s32) (((char *)(var_s2) - (char *)(temp_s6)) - 0xC) / 12) * 0x10) + &D_800AA12C;
                    sp101 = (random_u32(temp_hi) % 101U) + 0x64;
                    sp100 = (random_u32() % 101U) + 0x9B;
                    spA6 = (random_u32() % 5U) + 4;
                    spA7 = (random_u32() % 5U) + 4;
                    spA0 = ((random_float() * 506.0f) + D_800AA2E8) * D_800AA2EC;
                    func_15143134(temp_s0_5 + 4, &spD8, (*temp_s0_5 << 6) + (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x1D4)));
                    (*(s32 *)((char *)&(spE4) + 0x0)) = (*(s32 *)((char *)&(spD8) + 0x0));
                    (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)&(spD8) + 0x4));
                    (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)&(spD8) + 0x8));
                    random_u32();
                    temp_v0_3 = func_1513D524(&spBC, 0x11, 0, 0, 0x10, 2, 0x28, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                    (*(s32 *)((char *)(var_s2) + 0x0)) = temp_v0_3;
                    if (temp_v0_3 != 0) {
                        memcpy(temp_v0_3 + 0x110, &sp94, 0x28);
                        (*(s32 *)((char *)(var_s2) + 0x4)) = (s32) ((random_u32() % 31U) + 0x14);
                        var_s2 = (*(s32 *)((char *)(var_s2) + 0x8));
                        var_fp -= 1;
                        (*(s32 *)((char *)(var_s4) + 0x8)) = var_s2;
                        (*(s32 *)((char *)(temp_s6) + 0x8)) = (s32) ((*(s32 *)((char *)(temp_s6) + 0x8)) + 1);
                    }
                    (*(f32 *)((char *)(temp_s6) + 0x90)) = (f32) ((*(f32 *)((char *)(temp_s6) + 0x90)) - 1.0f);
                    if ((*(s32 *)((char *)(temp_s6) + 0x90)) > 1.0f) {
                        if (var_fp == 0) {

                        } else {
                            goto loop_24;
                        }
                    }
                }
            }
        } else if ((*(s32 *)((char *)(temp_s6) + 0x8)) != 0) {
            func_151B1918(arg0);
        }
    }
    if (sp133 != 0) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
    }
}

s8 func_151B118C(void *arg0) {
    f32 sp90;
    s8 sp87;
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
    void *sp58;
    f32 sp50;
    f32 sp4C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    s8 var_t0;
    void *temp_v1;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x38));
    temp_v1 = (char *)(arg0) + 0x110;
    sp80 = temp_f2;
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x110));
    sp78 = temp_f12;
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x118));
    var_t0 = 1;
    sp7C = temp_f14;
    (*(f32 *)((char *)(arg0) + 0x110)) = (f32) (temp_f12 * (0.25f * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x118)) = (f32) (temp_f14 * (0.25f * D_800BE9A4));
    sp50 = (*(s32 *)((char *)(arg0) + 0x114));
    temp_f16 = ((*(s32 *)((char *)(arg0) + 0x110)) + sp78) * 0.5f * D_800BE9A4;
    sp4C = (*(s32 *)((char *)(arg0) + 0x11C)) * D_800BE9A4;
    temp_f18 = (sp50 * D_800BE9A4) + (sp4C * D_800BE9A4 * 0.5f);
    temp_f4 = ((*(s32 *)((char *)(arg0) + 0x118)) + sp7C) * 0.5f * D_800BE9A4;
    sp90 = temp_f4;
    (*(f32 *)((char *)(arg0) + 0x114)) = (f32) (sp50 + sp4C);
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) (temp_f2 + temp_f18);
    temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x38));
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + temp_f16);
    temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x34));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + temp_f4);
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + temp_f16);
    temp_f0 = (*(s32 *)((char *)(arg0) + 0x3C));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) + temp_f18);
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) + sp90);
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) (temp_f12_2 + (((*(f32 *)((char *)(arg0) + 0x40)) - temp_f12_2) * D_800AA2F0));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (temp_f2_2 + (((*(f32 *)((char *)(arg0) + 0x44)) - temp_f2_2) * D_800AA2F0));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (temp_f0 + (((*(f32 *)((char *)(arg0) + 0x48)) - temp_f0) * D_800AA2F0));
    if ((*(s32 *)((char *)(temp_v1) + 0x24)) != 0) {
        sp6C = temp_f12_2;
        sp70 = sp80 - (*(s32 *)((char *)(arg0) + 0x30));
        sp74 = (*(s32 *)((char *)(arg0) + 0x3C));
        sp87 = 1;
        sp58 = temp_v1;
        var_t0 = sp87;
        if (func_15046C80((*(f32 * *)&temp_f12_2), D_800AA2F0, (f32)(s32)&sp6C, NULL, (*(f32 *)((char *)(arg0) + 0x38)) - (*(f32 *)((char *)(arg0) + 0x30)), (char *)(arg0) + 0x78) != 0) {
            sp60 = sp6C;
            sp68 = sp74;
            sp64 = (*(s32 *)((char *)(arg0) + 0x78)) + 5.0f;
            temp_f0_2 = ((*(s32 *)((char *)(sp58) + 0x14)) + ((*(s32 *)((char *)(sp58) + 0x1C)) * 0.5f) + ((*(s32 *)((char *)(sp58) + 0x18)) + ((*(s32 *)((char *)(sp58) + 0x20)) * 0.5f))) * 0.5f;
            sp5C = temp_f0_2;
            if (random_u32() & 1) {
                func_151D9B8C((*(s32 *)((char *)(sp58) + 0x25)), temp_f0_2 * D_800AA2F4, (*(s32 *)((char *)(arg0) + 0x5C)), (char *)(arg0) + 0x7C, &sp60, 0x64, 0, 1, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            } else {
                func_151DAB58((*(s32 *)((char *)(sp58) + 0x25)), temp_f0_2 * D_800AA2F8, (*(s32 *)((char *)(arg0) + 0x5C)), &sp60, 1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
            }
            var_t0 = 0;
        }
    }
    return var_t0;
}

s32 func_151B1478(void *arg0) {
    s16 temp_v0;
    s32 temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (temp_v0 < 0x20) {
        temp_v1 = temp_v0 * 8;
        if (temp_v1 < (s32) (*(s32 *)((char *)(arg0) + 0x5C))) {
            (*(u8 *)((char *)(arg0) + 0x5C)) = (u8) temp_v1;
        }
    }
    return 1;
}

void *func_151B14AC(void *arg0, s32 arg1) {
    void *sp64;
    void *sp60;
    f32 sp5C;
    f32 sp54;
    f32 sp50;
    f32 sp3C;
    u8 sp3B;
    void *sp34;
    void **sp30;
    f32 *sp2C;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    s32 temp_t0;
    void **temp_a1;
    f32 *temp_v1;
    void *temp_v0;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp64, &sp3B);
    sp60 = sp64;
    if (sp64 != NULL) {
        if (sp3B != 0) {
            temp_v0 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp30 = temp_a1;
            sp34 = temp_v0;
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_t0 = arg1 * 4;
        temp_v1 = temp_t0 + D_800DD1E8;
        temp_a0 = temp_t0 + D_800DD1D8;
        var_f16 = -1.0f;
        var_f14 = ((*temp_v1 * ((*(s32 *)((char *)(arg0) + 0x40)) - (*(s32 *)((char *)(arg0) + 0x34)))) - (*temp_a0 * ((*(s32 *)((char *)(arg0) + 0x48)) - (*(s32 *)((char *)(arg0) + 0x3C))))) * D_800BE9A8;
        if (var_f14 < 0.0f) {
            var_f16 = 1.0f;
            var_f14 = -var_f14;
        }
        var_f12 = sqrtf(var_f14) * 0.25f;
        if (D_800AA2FC < var_f12) {
            var_f12 = D_800AA2FC;
        }
        temp_f12 = var_f12 * var_f16;
        sp30 = temp_v1;
        sp2C = temp_a0;
        sp3C = temp_f12;
        sp5C = sinf(temp_f12);
        temp_f0 = cosf(temp_f12);
        temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x2C));
        temp_f14 = (*(s32 *)((char *)(arg0) + 0x30));
        temp_f2 = temp_f12_2 * temp_f0;
        temp_f18 = temp_f12_2 * sp5C;
        temp_f16 = -temp_f2;
        sp54 = temp_f14 * temp_f0;
        sp50 = temp_f14 * sp5C;
        (*(s16 *)((char *)(sp64) + 0x0)) = (s16) (s32) (((f32) *temp_v1 * temp_f16) + (*(s16 *)((char *)(arg0) + 0x34)));
        (*(s16 *)((char *)(sp64) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) + temp_f18);
        (*(s16 *)((char *)(sp64) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - (*temp_a0 * temp_f16));
        (*(s32 *)((char *)(sp64) + 0x6)) = 0;
        (*(s16 *)((char *)(sp64) + 0x10)) = (s16) (s32) (((f32) *temp_v1 * temp_f2) + (*(s16 *)((char *)(arg0) + 0x34)));
        (*(s16 *)((char *)(sp64) + 0x12)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) - temp_f18);
        (*(s16 *)((char *)(sp64) + 0x14)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - (*temp_a0 * temp_f2));
        (*(s32 *)((char *)(sp64) + 0x16)) = 0;
        temp_f0_2 = temp_f2 - sp50;
        (*(s16 *)((char *)(sp64) + 0x20)) = (s16) (s32) (((f32) *temp_v1 * temp_f0_2) + (*(s16 *)((char *)(arg0) + 0x34)));
        (*(s16 *)((char *)(sp64) + 0x22)) = (s16) (s32) (((*(s16 *)((char *)(arg0) + 0x38)) - temp_f18) - sp54);
        (*(s16 *)((char *)(sp64) + 0x24)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - (*temp_a0 * temp_f0_2));
        (*(s32 *)((char *)(sp64) + 0x26)) = 0;
        temp_f0_3 = -(temp_f2 + sp50);
        (*(s16 *)((char *)(sp64) + 0x30)) = (s16) (s32) (((f32) *temp_v1 * temp_f0_3) + (*(s16 *)((char *)(arg0) + 0x34)));
        (*(s16 *)((char *)(sp64) + 0x32)) = (s16) (s32) (((*(s16 *)((char *)(arg0) + 0x38)) + temp_f18) - sp54);
        (*(s16 *)((char *)(sp64) + 0x34)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - (*temp_a0 * temp_f0_3));
        (*(s32 *)((char *)(sp64) + 0x36)) = 0;
        return sp60;
    }
    return NULL;
}

s32 func_151B1828(void *arg0) {
    f32 sp24;
    void *sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    u8 temp_a0;
    void *temp_v1;

    temp_a0 = (*(s32 *)((char *)(arg0) + 0x120)) + ((*(s32 *)((char *)(arg0) + 0x122)) * D_800BE9E4);
    (*(s32 *)((char *)(arg0) + 0x120)) = temp_a0;
    (*(u8 *)((char *)(arg0) + 0x121)) = (u8) ((*(u8 *)((char *)(arg0) + 0x121)) + ((*(u8 *)((char *)(arg0) + 0x123)) * D_800BE9E4));
    sp24 = func_151423D8((temp_a0 - 0x40) & 0xFF, arg0);
    temp_v1 = (char *)(arg0) + 0x110;
    sp1C = temp_v1;
    temp_f0 = func_151423D8(((*(s32 *)((char *)(temp_v1) + 0x11)) - 0x40) & 0xFF, arg0);
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x2C));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x30));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f2 + ((((*(f32 *)((char *)(temp_v1) + 0x14)) + ((*(f32 *)((char *)(temp_v1) + 0x1C)) * sp24)) - temp_f2) * 0.5f));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f12 + ((((*(f32 *)((char *)(temp_v1) + 0x18)) + ((*(f32 *)((char *)(temp_v1) + 0x20)) * temp_f0)) - temp_f12) * 0.5f));
    return 1;
}

void func_151B1918(void *arg0) {
    s32 var_s3;
    void *var_s0;
    void *var_s2;

    var_s2 = (char *)(arg0) + 0x28;
    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    var_s0 = (char *)(var_s2) + 0xC;
    var_s3 = 0;
    (*(s32 *)((char *)(arg0) + 0xB8)) = 0.0f;
    do {
        if ((*(s32 *)((char *)(var_s2) + 0xC)) != 0) {
            func_1516972C((*(s32 *)((char *)(var_s0) + 0x0)));
        }
        (*(s32 *)((char *)(var_s0) + 0x0)) = NULL;
        (*(s32 *)((char *)(var_s0) + 0x4)) = 0;
        (*(s32 *)((char *)(var_s0) + 0x8)) = 0;
        var_s3 += 0xC;
        var_s2 = (char *)(var_s2) + 0xC;
        var_s0 = (char *)(var_s0) + 0xC;
    } while (var_s3 != 0x84);
}

void func_151B19A4(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if ((temp_t6 == 0) || (temp_t6 == 0x13)) {
        if (((*(u8 *)((char *)(arg0) + 0x28)) == (*(u8 *)((char *)(arg1) + 0x0))) || ((*(u8 *)((char *)(arg0) + 0x2C)) == (u8) (*(u8 *)((char *)(arg1) + 0x4)))) {
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

void func_151B1A58(void *arg0) {
    func_151B1918(arg0);
    func_1514933C(arg0);
}

void func_151B1A84(void *arg0) {
    func_151B1918(arg0);
    func_15149368(arg0);
}

void func_151B1AB0(void *arg0) {
    f32 sp30;
    u8 sp2C;
    void *sp28;
    s32 temp_v0;

    if (arg0 != NULL) {
        sp28 = arg0;
        sp2C = (*(s32 *)((char *)(arg0) + 0x3B));
        sp30 = 0.0f;
        temp_v0 = func_151491F4(0x3C, -1, 0x15, 1, 0x11, 0xC, 0xFF, 1);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x28, &sp28, 0xC);
        }
    }
}

void func_151B1B34(void *arg0) {
    s8 sp127;
    s8 sp126;
    s8 sp125;
    s8 sp124;
    s32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    s16 spE6;
    s16 spE4;
    s16 spE2;
    s8 spE1;
    s8 spE0;
    s8 spDF;
    s8 spDE;
    s8 spDD;
    s8 spDC;
    s8 spDB;
    s8 spDA;
    s8 spD9;
    s8 spD8;
    s32 spD4;
    s32 spD0;
    s16 spCE;
    s16 spCC;
    s32 spC8;
    s32 spC4;
    void *spBC;
    f32 spB0;
    f32 spA4;
    void * sp98;
    void * sp8C;
    f32 *var_s0;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    s16 temp_v1;
    s32 temp_s1;
    s32 temp_v0;
    void *temp_s3;

    temp_s3 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(temp_s3) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x8)) + ((D_800AA300 + (random_float() * 342.0f)) * D_800AA304 * D_800BE9A4));
    temp_f2 = (*(s32 *)((char *)(temp_s3) + 0x8));
    if (temp_f2 > 1.0f) {
        if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x1D4)) != 0) {
            (*(s32 *)((char *)&(sp98) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008FAD0) + 0x0));
            (*(s32 *)((char *)&(sp98) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008FAD0) + 0x4));
            (*(s32 *)((char *)&(sp98) + 0x8)) = (s32) (*(s32 *)((char *)&(D_8008FAD0) + 0x8));
            func_15143134(&sp98, &spB0, (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x1D4)) + 0x800);
            (*(s32 *)((char *)&(sp8C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_8008FADC) + 0x0));
            (*(s32 *)((char *)&(sp8C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_8008FADC) + 0x4));
            (*(s32 *)((char *)&(sp8C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_8008FADC) + 0x8));
            func_15143134(&sp8C, &spA4, (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x1D4)) + 0x640);
            temp_f30 = D_800AA310;
            spE1 = 0x29;
            spCC = 0xE03;
            spC4 = 0x200005;
            spDC = 0xB0;
            spDD = 0xA0;
            spDE = 0x2A;
            spD8 = 0x40;
            spD9 = 0xB;
            spDA = 0x6A;
            spC8 = 0;
            spD0 = 0;
            spD4 = 0;
            spDB = 0xFF;
            spE0 = 0xFF;
            sp124 = 3;
            sp125 = 3;
            sp118 = 0.0f;
            sp11C = 0xE05;
            sp126 = 0xA;
            sp127 = -1;
            spE2 = 0x1E;
            spE4 = 8;
            spE6 = 0x32;
            spE8 = D_800AA308;
            spBC = D_800AA30C;
            do {
                spCE = (random_u32() % 41U) + 0x1E;
                spDF = (random_u32() % 156U) + 0x64;
                temp_f2_2 = (random_float() * 104.0f) + 199.0f;
                spEC = temp_f2_2;
                spF0 = temp_f2_2;
                var_s0 = &spA4;
                if (random_u32() & 1) {
                    var_s0 = &spB0;
                }
                temp_s1 = (((s32) (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x7A)) >> 8) + 0x40) & 0xFF;
                temp_v1 = ((random_u32() % 100U) + temp_s1) - 0x31;
                func_15143874(temp_v1, 36.0f, &spF4, &spFC);
                spF8 = 0.0f;
                spF4 += (*(s32 *)((char *)(var_s0) + 0x0));
                spF8 = (*(s32 *)((char *)(var_s0) + 0x4));
                spFC += (*(s32 *)((char *)(var_s0) + 0x8));
                func_15143874(temp_v1, ((random_float() * temp_f30) + D_800AA314) * D_800AA318, &sp10C, &sp114);
                sp110 = 0.0f;
                sp11C &= ~0xC0;
                if (random_u32() & 1) {
                    sp11C |= 0x40;
                }
                if (random_u32() & 1) {
                    sp11C |= 0x80;
                }
                temp_v0 = func_15130374(&spC4, 1, 4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                if (temp_v0 != 0) {
                    memcpy(temp_v0 + 0xA8, &spBC, 4);
                }
                (*(f32 *)((char *)(temp_s3) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s3) + 0x8)) > 1.0f);
            return;
        }
        if (temp_f2 > 1.0f) {
            do {
                (*(f32 *)((char *)(temp_s3) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x8)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s3) + 0x8)) > 1.0f);
        }
    }
}

void func_151B1FAC(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v1;
    void *temp_v0;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x2D) {
        temp_v0 = (char *)(arg0) + 0x28;
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
    } else if ((temp_t6 == 0) && (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0x28))) || ((*(u8 *)((char *)(((char *)(arg0) + 0x28)) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        func_1516972C(arg0, temp_t6, arg0);
    }
}
