/**
 * Auto-decompiled from asm/1EF500.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1000A420(); /* extern */
s32 func_1000B060();                   /* extern */
void * func_1000E7A0();                            /* extern */
void * func_15081690(); /* extern */
s32 func_150AC9C0(); /* extern */
u32 random_u32();                        /* extern */
f32 random_float();                             /* extern */
void * func_15102920(); /* extern */
s32 func_1510F8CC();                             /* extern */
void * func_15130280();          /* extern */
void * func_151436B4();                  /* extern */
void *func_15144B34();                           /* extern */
s32 func_15145128();             /* extern */
void * func_15152B38();                     /* extern */
void * func_15153634();                 /* extern */
void * func_151602C0(); /* extern */
void * func_151D4DAC(); /* extern */
s32 func_151D5B6C();    /* extern */
void * func_151D5D60();        /* extern */
void * memcpy();                          /* extern */
void func_151C436C(); /* static */
u8 func_151C43E0(void *arg0, void *arg1, f32 arg2);
void func_151C4510(void *arg0, void *arg1, f32 arg2);
s32 func_151C455C(void *arg0, void *arg1, f32 arg2);
s32 func_151C4B0C(void *arg0, void * *arg1, void *arg2, void * *arg3, f32 *arg4, f32 arg5, u8 arg6, void *arg7, void * *arg8, u8 *arg9, u8 arg10, f32 arg11, f32 arg12, s8 arg13, u8 arg14, u8 arg15, s32 arg16, u8 arg17);
extern s32 D_8008FBD0;
extern s32 D_8008FBE8;
extern s32 D_800AA9D0;
extern s32 D_800AA9E8;
extern s32 D_800AAA00;
extern s32 D_800AAA14;
extern s32 D_800AAA28;
extern f32 D_800AAA30;
extern f32 D_800AAA34;
extern f32 D_800AAA38;
extern f32 D_800AAA3C;
extern f32 D_800AAA40;
extern f32 D_800AAA44;
extern f32 D_800AAA48;
extern f32 D_800AAA4C;
extern f32 D_800AAA50;
extern f32 D_800AAA54;
extern f32 D_800AAA58;
extern f32 D_800AAA5C;
extern f32 D_800AAA60;
extern f32 D_800AAA64;
extern f32 D_800AAA68;
extern f32 D_800AAA6C;
extern f32 D_800AAA70;
extern f32 D_800AAA74;
extern f32 D_800AAA78;
extern f32 D_800AAA7C;
extern f32 D_800AAA80;
extern f32 D_800AAA84;
extern u8 D_800DCA20;
extern f32 D_800DCA24;
void func_151C2EF0(void *arg2, f32 arg3, void *arg4, void * *arg5);

void func_151C2050(void *arg0, void *arg1, void * *arg2, s32 arg3, f32 arg4) {
    s32 sp4C;
    u32 sp48;
    s32 sp40;
    f32 sp34;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_v1;

    if (arg0 != NULL) {
        if ((D_800BE616 != 0) || (temp_v1 = (*(s32 *)((char *)(arg0) + 0x318)), (temp_v1 == NULL))) {
            temp_v0 = D_800B0DF0->unk2C;
            if ((temp_v0 == 0x24) || (temp_v0 == 0x13) || (temp_v0 == 0x4D) || (temp_v0 == 0x85) || (temp_v0 == 0x93)) {
                func_100114D0((s32) (*(s32 *)((char *)(arg1) + 0x0)), (s32) (*(s32 *)((char *)(arg1) + 0x4)), (s32) (*(s32 *)((char *)(arg1) + 0x8)), 0x7FFF, 0x3E8, 0x64, &sp4C, &sp48, 0);
                if (sp48 >= 0x1001U) {
                    sp48 = sp48 >> 7;
                    func_1000E7A0(8, (func_1510F8CC(arg3) + 1) | (sp48 << 8) | (sp4C << 0x10));
                }
            }
        } else {
            temp_v0_2 = D_800B0DF0->unk2C;
            if ((temp_v0_2 == 0x24) || (temp_v0_2 == 0x13)) {
                temp_f0 = 255.0f - (arg4 * D_800AAA30);
                if (temp_f0 > 16.0f) {
                    sp34 = temp_f0;
                    sp40 = func_1000B060((*(u32 *)((char *)(arg2) + 0x0)), (*(u32 *)((char *)(arg2) + 0x8)), (u32) ((*(u32 *)((char *)(temp_v1) + 0x3A0)) * D_800AAA34));
                    func_1000E7A0(8, (func_1510F8CC(arg3) + 1) | ((s32) temp_f0 << 8) | (sp40 << 0x10));
                }
            }
        }
    }
}

void *func_151C229C(void *arg0, void * *arg1, void *arg2, void * *arg3, u8 arg4, void *arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, u8 arg11, void *arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, s8 arg19, s32 arg20, f32 arg21, u8 arg22, s8 arg23, s32 arg24, u8 arg25, s32 arg26) {
    void *sp19C;
    u8 sp190;
    s8 sp18B;
    s8 sp18A;
    s8 sp189;
    u8 sp188;
    s32 sp184;
    f32 sp180;
    f32 sp17C;
    f32 sp178;
    f32 sp174;
    f32 sp170;
    f32 sp16C;
    void * sp160;
    f32 sp15C;
    f32 sp158;
    s8 sp157;
    s8 sp156;
    s8 sp155;
    s8 sp154;
    s32 sp150;
    s32 sp14C;
    s16 sp148;
    s16 sp146;
    s8 sp145;
    s8 sp144;
    s32 sp140;
    s8 sp13C;
    s32 sp138;
    s8 sp135;
    s8 sp134;
    s16 sp132;
    s8 sp130;
    f32 sp12C;
    u8 sp128;
    void *sp124;
    f32 sp120;
    void * spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    u8 sp94;
    void * sp88;
    u8 sp87;
    void * sp78;
    u8 sp77;
    u8 sp67;
    void *sp50;
    void * *var_a1;
    void * *var_a3_2;
    void * *var_v0_3;
    s32 var_a3;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 var_a0;
    u8 temp_t1;
    u8 var_t1;
    void *temp_a0;
    void *temp_v0;
    void *var_a0_2;

    f32 spF4;
    f32 spF8;
    f32 spFC;
    sp87 = 0;
    var_v0 = arg4 != 0;
    var_a0 = 0;
    if (var_v0 != 0) {
        var_v0 = arg3 != NULL;
    }
    temp_t1 = var_v0 & 0xFF;
    if (var_v0 & 0xFF) {
        (*(s32 *)((char *)&(sp78) + 0x0)) = (s32) (*(s32 *)((char *)(arg3) + 0x0));
        (*(s32 *)((char *)&(sp78) + 0x4)) = (s32) (*(s32 *)((char *)(arg3) + 0x4));
        (*(s32 *)((char *)&(sp78) + 0x8)) = (s32) (*(s32 *)((char *)(arg3) + 0x8));
    }
    if (arg14 != 0) {
        var_a0 = 4;
    }
    var_v1 = 0;
    if (arg18 != 0) {
        var_v1 = 2;
    }
    var_a3 = 0;
    if (arg17 != 0) {
        var_a3 = 1;
    }
    var_v0_2 = 0;
    if (arg15 != 0) {
        var_v0_2 = 8;
    }
    sp94 = var_v0_2 | var_a3 | var_v1 | var_a0;
    sp140 = 0;
    sp77 = temp_t1;
    sp13C = arg23;
    sp130 = arg19;
    sp138 = arg20;
    var_t1 = temp_t1;
    if ((u32) (random_u32(var_a0, var_a3) & 0xFF) < arg16) {
        sp134 = 1;
    } else {
        sp134 = 0;
    }
    sp132 = 0;
    sp135 = 0;
    if ((arg2 != NULL) && (arg3 != NULL)) {
        if (var_t1 == 0) {
            if (func_15145128(arg3, &sp78, NULL, 0) != 0) {
                var_t1 = 1;
                goto block_21;
            }
            return NULL;
        }
block_21:
        var_a0_2 = arg2;
        var_a1 = &sp78;
        goto block_27;
    }
    if (arg1 != NULL) {
        sp77 = var_t1;
        var_t1 = sp77;
        if (func_15145128(arg1, &sp88, NULL, 0) != 0) {
            sp87 = 1;
            goto block_26;
        }
        return NULL;
    }
block_26:
    var_a0_2 = arg0;
    var_a1 = &sp88;
block_27:
    var_t0 = -1;
    if (arg14 != 0) {
        sp77 = var_t1;
        var_t0 = func_151D5B6C(var_a0_2, var_a1, arg12, arg23, 0);
    }
    if (sp87 != 0) {
        var_a3_2 = &sp88;
    } else {
        var_a3_2 = NULL;
    }
    if (var_t1 != 0) {
        var_v0_3 = &sp78;
    } else {
        var_v0_3 = NULL;
    }
    sp140 = var_t0;
    if (func_151C4B0C(arg5, &spBC, arg0, var_a3_2, &sp120, arg7, (s32) arg13, arg2, var_v0_3, &sp94, 3U, arg10, (f32)(s32)(arg12), (s32) arg23, (s32) arg14, (s32) arg15, var_t0, 0U) == 0) {
        return NULL;
    }
    sp98 = spF4 * arg6;
    sp9C = spF8 * arg6;
    spA0 = spFC * arg6;
    spA4 = 0.0f;
    spB0 = spF4 * arg9;
    spA8 = 0.0f;
    spAC = 0.0f;
    spB4 = spF8 * arg9;
    sp124 = arg12;
    spB8 = spFC * arg9;
    if (arg12 != NULL) {
        sp128 = (*(s32 *)((char *)(arg12) + 0x3B));
    } else {
        sp128 = 0x63;
    }
    sp144 = 0x41;
    sp12C = arg6;
    sp145 = 4;
    sp146 = 0x4503;
    sp148 = 0x12C;
    sp14C = 0;
    sp150 = 0;
    sp154 = 0;
    sp155 = 0;
    sp156 = 0;
    sp157 = 0xFF;
    sp189 = 0xFF;
    sp15C = arg9;
    sp188 = arg11;
    sp158 = arg8;
    (*(s32 *)((char *)&(sp160) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    (*(s32 *)((char *)&(sp160) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    (*(s32 *)((char *)&(sp160) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    sp16C = 0.0f;
    sp170 = 0.0f;
    sp174 = 0.0f;
    sp178 = 0.0f;
    sp17C = 0.0f;
    sp180 = 0.0f;
    sp184 = 0xC04C0008;
    sp18A = 0;
    sp18B = 0;
    sp190 = arg22;
    temp_v0 = func_1513D2F0(&sp144, &D_800A4AA0, 0x16, 0, 0, 0x14, 0, 0, 0, arg24 + 0xB0, (s32) arg25, arg26);
    sp19C = temp_v0;
    if (temp_v0 != NULL) {
        temp_a0 = (char *)(temp_v0) + 0x110;
        sp67 = 0;
        sp50 = temp_a0;
        memcpy(temp_a0, &sp94, 0xB0);
        func_151C436C(sp19C, sp50, (s32) arg21);
        if (func_151C43E0(sp19C, sp50, arg21) == 0) {
            sp67 = 1;
        }
        func_151C4510(sp19C, sp50, arg21);
        if (func_151C455C(sp19C, sp50, arg21) == 0) {
            sp67 = 1;
        }
        if (sp67 != 0) {
            func_1516972C(sp19C);
            return NULL;
        }
        goto block_47;
    }
block_47:
    return sp19C;
}

s8 func_151C2734(void *arg0) {
    s8 spD7;
    void *spCC;
    s32 spC8;
    s32 spA8;
    void * spA4;
    f32 sp70;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f8;
    s32 temp_f6_2;
    s32 temp_f6_3;
    s32 temp_f6_4;
    s8 var_v1;
    u16 temp_a0;
    u16 temp_a2;
    u32 temp_v0;
    void *temp_a3;
    void *temp_s0;
    void *var_a0;
    void *var_t0;

    temp_s0 = (char *)(arg0) + 0x110;
    spD7 = 1;
    func_151C436C(arg0, temp_s0, D_800BE9E4);
    if (func_151C43E0(arg0, temp_s0, D_800BE9A4) == 0) {
        spD7 = 0;
    }
    func_151C4510(arg0, temp_s0, D_800BE9A4);
    if (func_151C455C(arg0, temp_s0, D_800BE9A4) == 0) {
        spD7 = 0;
    }
    if (((*(s32 *)((char *)(temp_s0) + 0xA0)) != 0) && (spD7 == 1)) {
        spC8 = 0;
        temp_a0 = (*(s32 *)((char *)(temp_s0) + 0x9E));
        if (temp_a0 == 0) {
            spCC = NULL;
            temp_v0 = random_u32(temp_a0);
            var_t0 = spCC;
            var_v1 = 0;
            if (D_80082FA0 >= 0) {
                temp_a3 = ((temp_v0 & 7) * 4) + &D_8008FBE8;
                temp_a2 = (*(s32 *)((char *)(temp_a3) + 0x2));
                var_a0 = D_800DBFF0;
                temp_f18 = (*(s32 *)((char *)(temp_s0) + 0x98));
                sp70 = (f32) temp_a2 * temp_f18;
loop_9:
                temp_f8 = (*(s32 *)((char *)(var_a0) + 0x2FC));
                temp_f6 = (*(s32 *)((char *)(var_a0) + 0x300));
                temp_f12 = (*(s32 *)((char *)(var_a0) + 0x2F8)) - (*(s32 *)((char *)(arg0) + 0x34));
                var_t0 = var_a0;
                var_a0 = (char *)(var_a0) + 0x9A0;
                temp_f14 = temp_f8 - (*(s32 *)((char *)(arg0) + 0x38));
                temp_f16 = temp_f6 - (*(s32 *)((char *)(arg0) + 0x3C));
                temp_f2 = ((*(s32 *)((char *)(temp_s0) + 0x60)) * temp_f12) + (temp_f14 * (*(s32 *)((char *)(temp_s0) + 0x64))) + (temp_f16 * (*(s32 *)((char *)(temp_s0) + 0x68)));
                if ((temp_f2 < sp70) && (((f32) (temp_a2 - 0xA) * temp_f18) < temp_f2) && (temp_f0 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16)), (temp_f0 != 0.0f)) && (temp_f0 < ((*(f32 *)((char *)(temp_s0) + 0x8C)) * temp_f18)) && (D_800AAA38 < (temp_f2 / temp_f0))) {
                    spC8 = (s32) (*(s32 *)((char *)(temp_a3) + 0x0));
                    (*(s32 *)((char *)(temp_s0) + 0xA1)) = var_v1;
                } else {
                    var_v1 += 1;
                    var_t0 = NULL;
                    if (D_80082FA0 < var_v1) {

                    } else {
                        goto loop_9;
                    }
                }
            }
        } else {
            spCC = NULL;
            var_t0 = NULL;
            if (func_1000F3D0(temp_a0) != 0) {
                var_t0 = ((u8) (*(u8 *)((char *)(temp_s0) + 0xA1)) * 0x9A0) + D_800DBFF0;
            } else {
                (*(s32 *)((char *)(temp_s0) + 0xA0)) = 0U;
            }
        }
        if (var_t0 != NULL) {
            spA8 = 0x40;
            temp_f6_2 = (s32) ((*(s32 *)((char *)(arg0) + 0x34)) - (*(s32 *)((char *)(var_t0) + 0x2F8)));
            temp_f6_3 = (s32) ((*(s32 *)((char *)(arg0) + 0x38)) - (*(s32 *)((char *)(var_t0) + 0x2FC)));
            temp_f6_4 = (s32) ((*(s32 *)((char *)(arg0) + 0x3C)) - (*(s32 *)((char *)(var_t0) + 0x300)));
            func_1000A420(temp_f6_2, temp_f6_3, temp_f6_4, (*(s32 *)((char *)(var_t0) + 0x380)), temp_f6_2, temp_f6_3, temp_f6_4, 0x2710, 0x270F, &spA8, &spA4, 0);
            if (spC8 != 0) {
                (*(s32 *)((char *)(temp_s0) + 0x9E)) = func_10010F30(spC8, 0x6590, spA8 & 0x7F, 0, spA8 & 0x80);
            } else {
                func_1000F85C((*(s32 *)((char *)(temp_s0) + 0x9E)), 4, spA8 & 0x7F);
                func_1000F85C((*(s32 *)((char *)(temp_s0) + 0x9E)), 0x100, spA8 & 0x80);
            }
        }
    }
    return spD7;
}

void *func_151C2AD0(void *arg0, s32 arg1) {
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp64;
    void *sp5C;
    void *sp58;
    u8 sp53;
    void *sp48;
    u8 *sp44;
    f32 sp38;
    f32 sp34;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    u8 *temp_a1;
    void *temp_t2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    f32 spA8;
    f32 spAC;
    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp5C, &sp53);
    sp58 = sp5C;
    if (sp5C != NULL) {
        if (sp53 != 0) {
            temp_v1 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp44 = temp_a1;
            sp48 = temp_v1;
            memcpy((*(s32 *)((char *)(temp_v1) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v1) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_v0 = func_15144B34(arg1);
        temp_v1_2 = (char *)(arg0) + 0x110;
        (*(s32 *)((char *)&(spA4) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x34));
        (*(f32 *)((char *)&(spA4) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x38));
        (*(f32 *)((char *)&(spA4) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
        temp_f16 = (*(s32 *)((char *)(arg0) + 0x34)) - (*(s32 *)((char *)(temp_v1_2) + 0x10));
        temp_f18 = (*(s32 *)((char *)(arg0) + 0x38)) - (*(s32 *)((char *)(temp_v1_2) + 0x14));
        temp_f4 = (*(s32 *)((char *)(arg0) + 0x3C)) - (*(s32 *)((char *)(temp_v1_2) + 0x18));
        temp_f2 = temp_f16 - spA4;
        spA0 = temp_f4;
        temp_f12 = temp_f18 - spA8;
        temp_f10 = ((temp_f2 * 0.5f) + spA4) - (*(s32 *)((char *)(temp_v0) + 0x0));
        sp74 = temp_f10;
        temp_f8 = ((temp_f12 * 0.5f) + spA8) - (*(s32 *)((char *)(temp_v0) + 0x4));
        sp78 = temp_f8;
        temp_f14 = temp_f4 - spAC;
        sp28 = temp_f10;
        sp9C = temp_f18;
        temp_f4_2 = ((temp_f14 * 0.5f) + spAC) - (*(s32 *)((char *)(temp_v0) + 0x8));
        sp98 = temp_f16;
        sp7C = temp_f4_2;
        temp_f18_2 = (temp_f12 * temp_f4_2) - (temp_f8 * temp_f14);
        temp_f16_2 = (temp_f14 * sp28) - (temp_f4_2 * temp_f2);
        sp38 = temp_f16_2;
        temp_f8_2 = (temp_f2 * temp_f8) - (sp28 * temp_f12);
        sp34 = temp_f8_2;
        temp_f0 = (temp_f18_2 * temp_f18_2) + (temp_f16_2 * temp_f16_2) + (temp_f8_2 * temp_f8_2);
        sp64 = temp_f0;
        if (temp_f0 == 0.0f) {
            var_f16 = 0.0f;
            var_f12 = 0.0f;
            var_f14 = 0.0f;
        } else {
            temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x2C)) / sqrtf(temp_f0);
            var_f12 = temp_f18_2 * temp_f2_2;
            var_f14 = sp38 * temp_f2_2;
            var_f16 = sp34 * temp_f2_2;
        }
        (*(s16 *)((char *)(sp5C) + 0x0)) = (s16) (s32) (spA4 - var_f12);
        (*(s16 *)((char *)(sp5C) + 0x2)) = (s16) (s32) (spA8 - var_f14);
        (*(s16 *)((char *)(sp5C) + 0x4)) = (s16) (s32) (spAC - var_f16);
        (*(u8 *)((char *)(sp5C) + 0xF)) = (u8) (*(u8 *)((char *)(arg0) + 0x5C));
        (*(s32 *)((char *)(sp5C) + 0x6)) = 0;
        sp5C = (char *)(sp5C) + 0x10;
        (*(s16 *)((char *)(sp5C) + 0x10)) = (s16) (s32) (sp98 - var_f12);
        (*(s16 *)((char *)(sp5C) + 0x2)) = (s16) (s32) (sp9C - var_f14);
        (*(s16 *)((char *)(sp5C) + 0x4)) = (s16) (s32) (spA0 - var_f16);
        (*(s32 *)((char *)(sp5C) + 0xF)) = 0U;
        (*(s32 *)((char *)(sp5C) + 0x6)) = 0;
        temp_t2 = (char *)(sp5C) + 0x10;
        sp5C = temp_t2;
        (*(s32 *)((char *)(temp_t2) + 0xF)) = 0;
        (*(s32 *)((char *)(temp_t2) + 0x6)) = 0;
        (*(s16 *)((char *)(sp5C) + 0x10)) = (s16) (s32) (sp98 + var_f12);
        (*(s16 *)((char *)(temp_t2) + 0x2)) = (s16) (s32) (sp9C + var_f14);
        (*(s16 *)((char *)(temp_t2) + 0x4)) = (s16) (s32) (spA0 + var_f16);
        sp5C = (char *)(temp_t2) + 0x10;
        (*(s16 *)((char *)(temp_t2) + 0x10)) = (s16) (s32) (spA4 + var_f12);
        (*(s16 *)((char *)(sp5C) + 0x2)) = (s16) (s32) (spA8 + var_f14);
        (*(s16 *)((char *)(sp5C) + 0x4)) = (s16) (s32) (spAC + var_f16);
        (*(u8 *)((char *)(sp5C) + 0xF)) = (u8) (*(u8 *)((char *)(arg0) + 0x5C));
        (*(s32 *)((char *)(sp5C) + 0x6)) = 0;
        return sp58;
    }
    return NULL;
}

s32 func_151C2E4C(void *arg0, s32 arg1) {
    if ((char *)(arg0) == (char *)(arg1)) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x0)) == 0) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0xFF) {
        return 0;
    }
    return 1;
}

s32 func_151C2E94(void *arg0, s32 arg1) {
    if ((char *)(arg0) == (char *)(arg1)) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x0)) == 0) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0xFF) {
        return 0;
    }
    if ((*(s32 *)((char *)(arg0) + 0x127)) == 0xFF) {
        return 0;
    }
    return 1;
}

void func_151C2EF0(void *arg2, f32 arg3, void *arg4, void * *arg5) {
    func_151D4DAC(arg3, arg4, arg5, (*(s32 *)((char *)(arg2) + 0x1B4)), (char *)(arg2) + 0x170, (s32) (*(s32 *)((char *)(arg2) + 0xC)), (s32) (*(s32 *)((char *)(arg2) + 0x1)));
}

void func_151C2F48(void *arg0) {
    s8 spD8;
    s16 spD6;
    s8 spD5;
    s8 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s8 spC7;
    s8 spC6;
    s8 spC5;
    s8 spC4;
    f32 spC0;
    s8 spBE;
    s16 spBC;
    s16 spBA;
    s16 spB8;
    s32 spB4;
    s32 spB0;
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
    s8 sp9F;
    s8 sp9E;
    s8 sp9D;
    s8 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s8 sp97;
    s8 sp96;
    s16 sp94;
    s16 sp92;
    s16 sp90;
    s32 sp8C;
    s32 sp88;
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
    void * sp5C;
    s32 sp58;
    s32 sp54;
    f32 sp4C;
    void *sp48;
    void *sp44;
    void *temp_a3;
    void *temp_v1;

    sp4C = random_float();
    temp_v1 = (char *)(arg0) + 0x110;
    temp_a3 = (char *)(temp_v1) + 0x30;
    sp44 = temp_a3;
    sp48 = temp_v1;
    func_15102920((sp4C * 30.0f) + 8.0f, 0xFF, (char *)(temp_v1) + 0x6C, temp_a3, (random_u32() % 46U) + 0x19, 1, 1, (*(s32 *)((char *)(temp_v1) + 0x88)), (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    if (random_float() < (D_800AAA3C * D_800DCA24)) {
        spD4 = 3;
        spD5 = -1;
        sp48 = temp_v1;
        spD6 = (random_u32() % 7U) + 4;
        spD8 = 0;
        spC8 = (s32) (*(s32 *)((char *)(temp_v1) + 0x30));
        spCC = (s32) (*(s32 *)((char *)(temp_v1) + 0x34));
        spD0 = (s32) (*(s32 *)((char *)(temp_v1) + 0x38));
        func_151602C0(&spD4, &spC8, (random_u32() % 9U) + 0xC, 0xFFU, 0xFF, 0xFF, 0xFF, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        sp54 = 5 >> D_800DCA20;
        sp58 = 4 >> D_800DCA20;
        (*(s32 *)((char *)&(sp5C) + 0x0)) = (s32) (*(s32 *)((char *)(sp44) + 0x0));
        (*(s32 *)((char *)&(sp5C) + 0x4)) = (s32) (*(s32 *)((char *)(sp44) + 0x4));
        (*(s32 *)((char *)&(sp5C) + 0x8)) = (s32) (*(s32 *)((char *)(sp44) + 0x8));
        sp86 = 0x50;
        sp88 = 3;
        sp84 = -0x3D;
        sp8C = 1;
        sp90 = 0xC;
        sp92 = 0xA;
        sp94 = 1;
        sp96 = 4;
        sp97 = 2;
        sp82 = 0xFF;
        sp9A = 0xFF;
        sp9B = 0xFF;
        sp99 = 0xFF;
        sp9C = 0xFF;
        spA1 = 0xFF;
        spA2 = 0xFF;
        spA3 = 0xFF;
        spA4 = 0xFF;
        spA9 = 0xFF;
        sp70 = 0.0f;
        sp74 = 0.0f;
        sp80 = 0;
        sp98 = 3;
        sp9D = 0;
        sp9E = 0;
        sp9F = 0;
        spA0 = 0;
        spA5 = 0;
        spA6 = 0;
        spA7 = 0;
        spA8 = 0;
        spAA = 0;
        spAB = 3;
        spAC = 0x24;
        spB0 = 0x200005;
        spB4 = 0x60600;
        spB8 = 0xA;
        spBA = 0x19;
        spBC = 1;
        spBE = 0;
        spC4 = -1;
        spC5 = 0;
        spC6 = -1;
        spC7 = -1;
        sp68 = 8.25f;
        sp6C = D_800AAA40;
        sp78 = 7.0f;
        sp7C = 16.0f;
        spC0 = 1.0f;
        func_15152B38(&sp54, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
    }
}

void func_151C329C(void *arg0, s32 arg1, s32 arg2) {
    s8 sp13F;
    s8 sp13E;
    s8 sp13D;
    s8 sp13C;
    f32 sp138;
    s8 sp136;
    s16 sp134;
    s16 sp132;
    s16 sp130;
    s32 sp12C;
    s32 sp128;
    s8 sp124;
    s8 sp123;
    s8 sp122;
    s8 sp121;
    s8 sp120;
    s8 sp11F;
    s8 sp11E;
    s8 sp11D;
    s8 sp11C;
    s8 sp11B;
    s8 sp11A;
    s8 sp119;
    s8 sp118;
    s8 sp117;
    s8 sp116;
    s8 sp115;
    s8 sp114;
    s8 sp113;
    s8 sp112;
    s8 sp111;
    s8 sp110;
    s8 sp10F;
    s8 sp10E;
    s16 sp10C;
    s16 sp10A;
    s16 sp108;
    s32 sp104;
    s32 sp100;
    s16 spFE;
    s16 spFC;
    s16 spFA;
    s16 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    void * spD4;
    s32 spD0;
    s32 spCC;
    s8 spC1;
    s8 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    void * sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s8 sp79;
    s8 sp78;
    s8 sp77;
    s8 sp76;
    s8 sp75;
    s8 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s32 sp6C;
    s32 sp68;
    s16 sp66;
    s16 sp64;
    s32 sp60;
    s32 sp5C;
    s8 sp58;
    s16 sp56;
    s8 sp55;
    s8 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp40;
    f32 temp_f16;
    s32 var_v0;
    s32 var_v1;

    spCC = 5;
    spD0 = 7;
    (*(f32 *)((char *)&(spD4) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(spD4) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(spD4) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    spFE = 0x50;
    sp100 = 3;
    spFC = -0x40;
    sp104 = 1;
    sp108 = 0x14;
    sp10A = 0xF;
    sp10C = 1;
    sp10E = 4;
    sp10F = 2;
    sp112 = 0xFF;
    sp113 = 0xFF;
    spE0 = D_800AAA44;
    spFA = 0xFF;
    sp111 = 0xFF;
    sp114 = 0xFF;
    sp119 = 0xFF;
    sp11A = 0xFF;
    sp11B = 0xFF;
    sp11C = 0xFF;
    sp121 = 0xFF;
    spF8 = 0;
    sp110 = 3;
    sp115 = 0;
    sp116 = 0;
    sp117 = 0;
    sp118 = 0;
    sp11D = 0;
    sp11E = 0;
    sp11F = 0;
    sp120 = 0;
    sp122 = 0;
    sp123 = 3;
    sp124 = 0x24;
    sp128 = 0x200005;
    sp12C = 0x60600;
    sp130 = 8;
    sp132 = 0x1F;
    sp134 = 1;
    sp136 = 0;
    sp13C = -1;
    sp13D = 0;
    sp13E = -1;
    sp13F = -1;
    spE4 = D_800AAA48;
    spE8 = D_800AAA4C;
    spEC = D_800AAA50;
    spF0 = 15.0f;
    spF4 = 30.0f;
    sp138 = 1.0f;
    func_15152B38(&spCC, arg1, (u8) arg2);
    sp79 = 0x2B;
    sp64 = 0x4403;
    sp5C = 0x200005;
    sp60 = 0x20000;
    sp66 = (random_u32() % 7U) + 6;
    sp68 = 0;
    sp6C = 0;
    sp70 = 0xFF;
    sp71 = 0xFF;
    sp72 = 0xFF;
    sp73 = 0xFF;
    sp74 = 0xFF;
    sp75 = 0xFF;
    sp76 = 0xFF;
    sp77 = 0xFF;
    sp78 = 0xFF;
    temp_f16 = (random_float() * 196.0f) + 106.0f;
    sp88 = temp_f16;
    sp84 = temp_f16;
    (*(f32 *)((char *)&(sp8C) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(sp8C) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(sp8C) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    sp7A = 3;
    sp7C = 0x55;
    sp7E = 1;
    sp98 = 0.0f;
    sp9C = 0.0f;
    spA0 = 0.0f;
    spA4 = 0.0f;
    spA8 = 0.0f;
    spAC = 0.0f;
    spB0 = 0.0f;
    sp80 = 1.0f;
    var_v1 = 0;
    if (random_u32() & 1) {
        var_v1 = 0x40;
    }
    sp40 = var_v1;
    if (random_u32() & 1) {
        var_v0 = 0x80;
    } else {
        var_v0 = 0;
    }
    spB4 = var_v0 | 1 | var_v1 | 0xC200;
    spBC = 6;
    spBD = 6;
    spBE = -1;
    spBF = -1;
    spC0 = -1;
    spC1 = 4;
    func_15130280(&sp5C, 1, 0, 0, (s32) arg1, arg2);
    sp54 = 3;
    sp55 = -1;
    sp56 = (random_u32() % 7U) + 6;
    sp58 = 0;
    sp48 = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    sp4C = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    sp50 = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    func_151602C0(&sp54, &sp48, (random_u32() & 1) + 5, 0xFFU, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg1, arg2);
}

void func_151C36D8(void *arg0, s32 arg1, s32 arg2) {
    s8 sp13F;
    s8 sp13E;
    s8 sp13D;
    s8 sp13C;
    f32 sp138;
    s8 sp136;
    s16 sp134;
    s16 sp132;
    s16 sp130;
    s32 sp12C;
    s32 sp128;
    s8 sp124;
    s8 sp123;
    s8 sp122;
    s8 sp121;
    s8 sp120;
    s8 sp11F;
    s8 sp11E;
    s8 sp11D;
    s8 sp11C;
    s8 sp11B;
    s8 sp11A;
    s8 sp119;
    s8 sp118;
    s8 sp117;
    s8 sp116;
    s8 sp115;
    s8 sp114;
    s8 sp113;
    s8 sp112;
    s8 sp111;
    s8 sp110;
    s8 sp10F;
    s8 sp10E;
    s16 sp10C;
    s16 sp10A;
    s16 sp108;
    s32 sp104;
    s32 sp100;
    s16 spFE;
    s16 spFC;
    s16 spFA;
    s16 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    void * spD4;
    s32 spD0;
    s32 spCC;
    s8 spC1;
    s8 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    void * sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7E;
    s16 sp7C;
    s16 sp7A;
    s8 sp79;
    s8 sp78;
    s8 sp77;
    s8 sp76;
    s8 sp75;
    s8 sp74;
    s8 sp73;
    s8 sp72;
    s8 sp71;
    s8 sp70;
    s32 sp6C;
    s32 sp68;
    s16 sp66;
    s16 sp64;
    s32 sp60;
    s32 sp5C;
    s8 sp58;
    s16 sp56;
    s8 sp55;
    s8 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp40;
    f32 temp_f16;
    s32 var_v0;
    s32 var_v1;

    spCC = 8;
    spD0 = 6;
    (*(f32 *)((char *)&(spD4) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(spD4) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(spD4) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    spFC = -0x40;
    spFE = 0x50;
    sp100 = 3;
    sp108 = 0xF;
    sp10A = 0xA;
    sp10C = 1;
    sp10E = 4;
    sp10F = 2;
    sp112 = 0xFF;
    sp113 = 0xFF;
    spE0 = D_800AAA54;
    spFA = 0xFF;
    sp111 = 0xFF;
    sp114 = 0xFF;
    sp119 = 0xFF;
    sp11A = 0xFF;
    sp11B = 0xFF;
    sp11C = 0xFF;
    sp121 = 0xFF;
    spF8 = 0;
    sp104 = 0;
    sp110 = 3;
    sp115 = 0;
    sp116 = 0;
    sp117 = 0;
    sp118 = 0;
    sp11D = 0;
    sp11E = 0;
    sp11F = 0;
    sp120 = 0;
    sp122 = 0;
    sp123 = 3;
    sp124 = 0x24;
    sp128 = 0x200005;
    sp12C = 0x60600;
    sp130 = 8;
    sp132 = 0x1F;
    sp134 = 1;
    sp136 = 0;
    sp13C = -1;
    sp13D = 0;
    sp13E = -1;
    sp13F = -1;
    spE4 = D_800AAA58;
    spE8 = D_800AAA5C;
    spEC = D_800AAA60;
    spF0 = 10.0f;
    spF4 = 8.0f;
    sp138 = 1.0f;
    func_15152B38(&spCC, arg1, (u8) arg2);
    sp79 = 0x2B;
    sp64 = 0x4403;
    sp5C = 0x200005;
    sp60 = 0x20000;
    sp66 = (random_u32() % 5U) + 4;
    sp68 = 0;
    sp6C = 0;
    sp70 = 0xFF;
    sp71 = 0xFF;
    sp72 = 0xFF;
    sp73 = 0xFF;
    sp74 = 0xFF;
    sp75 = 0xFF;
    sp76 = 0xFF;
    sp77 = 0xFF;
    sp78 = 0xFF;
    temp_f16 = (random_float() * 60.0f) + 80.0f;
    sp88 = temp_f16;
    sp84 = temp_f16;
    (*(f32 *)((char *)&(sp8C) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    (*(f32 *)((char *)&(sp8C) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(sp8C) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    sp7A = 2;
    sp7C = 0x7F;
    sp7E = 1;
    sp98 = 0.0f;
    sp9C = 0.0f;
    spA0 = 0.0f;
    spA4 = 0.0f;
    spA8 = 0.0f;
    spAC = 0.0f;
    spB0 = 0.0f;
    sp80 = 1.0f;
    var_v1 = 0;
    if (random_u32() & 1) {
        var_v1 = 0x40;
    }
    sp40 = var_v1;
    if (random_u32() & 1) {
        var_v0 = 0x80;
    } else {
        var_v0 = 0;
    }
    spB4 = var_v0 | 1 | var_v1 | 0xC200;
    spBC = 6;
    spBD = 6;
    spBE = -1;
    spBF = -1;
    spC0 = -1;
    spC1 = 4;
    func_15130280(&sp5C, 1, 0, 0, (s32) arg1, arg2);
    sp54 = 3;
    sp55 = -1;
    sp56 = (random_u32() % 7U) + 6;
    sp58 = 0;
    sp48 = (s32) (*(s32 *)((char *)(arg0) + 0x0));
    sp4C = (s32) (*(s32 *)((char *)(arg0) + 0x4));
    sp50 = (s32) (*(s32 *)((char *)(arg0) + 0x8));
    func_151602C0(&sp54, &sp48, (random_u32() & 1) + 5, 0xFFU, 0xFF, 0xFF, 0xFF, 0, 0, (s32) arg1, arg2);
}

void func_151C3B0C(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7) {
    void *sp;
    s32 sp10C[64];
    s32 sp1C4;
    s16 sp1C0;
    s16 sp1BE;
    u8 sp1BC;
    s32 sp1B4;
    s8 sp1B3;
    s8 sp1B2;
    s8 sp1B1;
    s8 sp1B0;
    s8 sp1AF;
    s8 sp1AE;
    s8 sp1AD;
    s8 sp1AC;
    s32 sp1A8;
    s32 sp1A4;
    s8 sp1A3;
    s8 sp1A2;
    s16 sp1A0;
    s32 sp19C;
    f32 sp198;
    void * sp180;
    s16 sp17A;
    s16 sp178;
    u8 sp170;
    s32 sp16C;
    s8 sp16B;
    s8 sp16A;
    s8 sp169;
    s8 sp168;
    s32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp158;
    f32 sp154;
    f32 sp150;
    f32 sp14C;
    void * sp140;
    f32 sp13C;
    f32 sp138;
    s8 sp137;
    s8 sp136;
    s8 sp135;
    s8 sp134;
    s32 sp130;
    s32 sp12C;
    s16 sp128;
    s16 sp126;
    s8 sp125;
    s8 sp124;
    f32 sp108;
    s8 sp104;
    s8 sp103;
    s8 sp102;
    s8 sp101;
    s8 sp100;
    s32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    s16 spEA;
    s16 spE8;
    s16 spE6;
    s16 spE4;
    void * spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s16 spCA;
    s16 spC8;
    s16 spC6;
    s8 spC5;
    s8 spC4;
    s8 spC3;
    u8 spC2;
    u8 spC1;
    u8 spC0;
    s8 spBF;
    u8 spBE;
    u8 spBD;
    u8 spBC;
    s32 spB8;
    s32 spB4;
    s16 spB2;
    s16 spB0;
    s32 spAC;
    s32 spA8;
    s16 spA6;
    s8 spA4;
    s16 spA2;
    s16 spA0;
    void * sp8C;
    void * sp78;
    s8 sp74;
    s16 sp72;
    s8 sp71;
    s8 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    void * sp5C;
    u8 sp5B;
    void *sp50;
    f32 var_f12;
    s32 temp_t5;
    s32 temp_t7;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;

    var_f12 = arg1;
    temp_t7 = (*(s32 *)((char *)(arg0) + 0x198)) & 0x1F;
    if ((D_800BE9F0 == 0x2B) || (D_800BE9F0 == 0x30)) {
        switch (temp_t7) {                          /* irregular */
        case 1:
            sp1C4 = 3;
            break;
        default:
        case 0:
        case 5:
            sp1C4 = 4;
            break;
        }
    } else if ((temp_t7 == 0xB) && (D_800BE9F0 == 4)) {
        sp1C4 = 1;
    } else if (((temp_t7 == 1) || (temp_t7 == 0xA)) && (D_800BE9F0 == 0xE)) {
        sp1C4 = 2;
    } else if (D_800BE9F0 == 0x34) {
        sp1C4 = 3;
    } else if (D_800BE9F0 == 0x27) {
        sp1C4 = 5;
    } else {
        var_f12 = 0.0f;
        sp1C4 = 0;
        arg2 = 0.0f;
        arg3 = 0.0f;
    }
    arg1 = var_f12;
    if (random_float(var_f12) < arg1) {
        (*(s32 *)((char *)&(sp180) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AA9D0) + 0x0));
        (*(s32 *)((char *)&(sp180) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AA9D0) + 0x4));
        (*(s32 *)((char *)&(sp180) + 0xC)) = (s32) (*(s32 *)((char *)&(D_800AA9D0) + 0xC));
        (*(s32 *)((char *)&(sp180) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AA9D0) + 0x8));
        (*(s32 *)((char *)&(sp180) + 0x10)) = (s32) (*(s32 *)((char *)&(D_800AA9D0) + 0x10));
        (*(s32 *)((char *)&(sp180) + 0x14)) = (s32) (*(s32 *)((char *)&(D_800AA9D0) + 0x14));
        var_v0 = 0;
        sp198 = (random_float(arg1) * 15.0f) + 15.0f;
        sp1A3 = 0;
        sp1A2 = (s8) (*(s8 *)((char *)((char *)(sp) + (sp1C4 * 4)) + 0x180));
        if (D_800BE616 != 0) {
            var_v0 = 0x20000;
        }
        sp19C = var_v0 | 0xBF01;
        sp1A0 = (random_u32() % 61U) + 0x3C;
        sp1A4 = 0;
        sp1A8 = 0;
        temp_v1 = (sp1C4 == 4) & 0xFF;
        sp1AC = (random_u32() % 56U) + 0xC8;
        sp1AD = 0xFF;
        sp1AE = 0;
        sp1AF = 0;
        sp1B0 = 0;
        sp1B1 = 0xFF;
        if (temp_v1 != 0) {
            var_v0_2 = 0x48;
        } else {
            var_v0_2 = 0x3B;
        }
        sp1B4 = (var_v0_2 << 0x10) + 2;
        sp1B2 = 0;
        if (temp_v1 != 0) {
            sp1B3 = 6;
        } else {
            sp1B3 = 7;
        }
        sp1BE = 0x20;
        sp1C0 = 7;
        sp1BC = arg5;
        temp_v1_2 = (char *)(arg0) + 0x110;
        func_1513C650(&sp19C, 0, 0, (char *)(temp_v1_2) + 0x6C, (*(s32 *)((char *)(temp_v1_2) + 0x30)), (*(s32 *)((char *)(temp_v1_2) + 0x34)), (*(s32 *)((char *)(temp_v1_2) + 0x38)), sp198, sp198, random_u32() & 0xFF, 0, 0, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    }
    if (random_float() < arg2) {
        sp10C[0] = (*(s32 *)((char *)&(D_800AA9E8) + 0x0));
        sp10C[1] = (s32) (*(s32 *)((char *)&(D_800AA9E8) + 0x4));
        sp10C[2] = (s32) (*(s32 *)((char *)&(D_800AA9E8) + 0x8));
        sp10C[3] = (s32) (*(s32 *)((char *)&(D_800AA9E8) + 0xC));
        sp10C[4] = (s32) (*(s32 *)((char *)&(D_800AA9E8) + 0x10));
        sp10C[5] = (s32) (*(s32 *)((char *)&(D_800AA9E8) + 0x14));
        temp_v1_3 = (char *)(arg0) + 0x110;
        sp125 = 0;
        sp126 = 0x3B03;
        sp50 = temp_v1_3;
        sp124 = (s8) (&sp10C[0])[sp1C4];
        sp128 = (random_u32() % 6U) + 0xD;
        sp12C = 0;
        sp130 = 0;
        sp134 = 0xFF;
        sp135 = 0xFF;
        sp136 = 0xFF;
        sp137 = 0xFF;
        sp138 = (random_float() * 5.0f) + 7.0f;
        var_v0_3 = 0;
        sp13C = (random_float() * 40.0f) + 10.0f;
        (*(f32 *)((char *)&(sp140) + 0x0)) = (f32) (*(f32 *)((char *)(temp_v1_3) + 0x30));
        (*(f32 *)((char *)&(sp140) + 0x4)) = (f32) (*(f32 *)((char *)(temp_v1_3) + 0x34));
        (*(f32 *)((char *)&(sp140) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v1_3) + 0x38));
        sp14C = (*(s32 *)((char *)(temp_v1_3) + 0x30)) - (*(s32 *)((char *)(temp_v1_3) + 0x60));
        sp150 = (*(s32 *)((char *)(temp_v1_3) + 0x34)) - (*(s32 *)((char *)(temp_v1_3) + 0x64));
        sp158 = D_800AAA64;
        sp15C = 1.0f;
        sp160 = D_800AAA68;
        sp154 = (*(s32 *)((char *)(temp_v1_3) + 0x38)) - (*(s32 *)((char *)(temp_v1_3) + 0x68));
        if (D_800BE616 != 0) {
            var_v0_3 = 0x40000000;
        }
        sp164 = var_v0_3 | 0x08DC0009;
        sp168 = (random_u32() % 76U) + 0xB4;
        sp169 = 0xFF;
        sp16A = 0;
        sp16B = 7;
        sp16C = 0;
        sp178 = 8;
        sp17A = 0x1F;
        sp170 = arg7;
        func_1513D2F0(&sp124, &D_800A4AA0, 0x22, 0, 0, 0x1C, 2, 0, 0, 0, *(u8 *)((char *)(arg0) + 0xC), *(u8 *)((char *)(arg0) + 0x1));
    }
    if (random_float() < arg3) {
        (*(s32 *)((char *)&(sp8C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AAA00) + 0x0));
        (*(s32 *)((char *)&(sp8C) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AAA00) + 0x4));
        (*(s32 *)((char *)&(sp8C) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AAA00) + 0x8));
        (*(s32 *)((char *)&(sp8C) + 0xC)) = (s32) (*(s32 *)((char *)&(D_800AAA00) + 0xC));
        (*(u16 *)((char *)&(sp8C) + 0x10)) = (u16) (*(u16 *)((char *)&(D_800AAA00) + 0x10));
        (*(s32 *)((char *)&(sp78) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AAA14) + 0x0));
        (*(s32 *)((char *)&(sp78) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AAA14) + 0x4));
        (*(s32 *)((char *)&(sp78) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AAA14) + 0x8));
        (*(s32 *)((char *)&(sp78) + 0xC)) = (s32) (*(s32 *)((char *)&(D_800AAA14) + 0xC));
        (*(u16 *)((char *)&(sp78) + 0x10)) = (u16) (*(u16 *)((char *)&(D_800AAA14) + 0x10));
        spA0 = 5;
        spA2 = 0xF;
        temp_t5 = sp1C4 * 3;
        spA4 = 0x6C;
        spA6 = 0x5103;
        spA8 = 0x200005;
        spAC = 0;
        spB0 = 0x14;
        spB2 = 0xF;
        spB4 = 0;
        spB8 = 0;
        spBF = 0xFF;
        temp_v0 = &sp8C + temp_t5;
        temp_v1_4 = &sp78 + temp_t5;
        spBC = (*(s32 *)((char *)(temp_v0) + 0x0));
        spBD = (*(s32 *)((char *)(temp_v0) + 0x1));
        spBE = (*(s32 *)((char *)(temp_v0) + 0x2));
        spC0 = (*(s32 *)((char *)(temp_v1_4) + 0x0));
        spC1 = (*(s32 *)((char *)(temp_v1_4) + 0x1));
        spC3 = 0xE6;
        spC4 = 0x14;
        spC5 = 0xFF;
        spC6 = 0x19;
        spC8 = 0xA;
        spCA = 0x1E;
        spCC = D_800AAA6C;
        spD0 = 60.0f;
        spD4 = 65.0f;
        spC2 = (*(s32 *)((char *)(temp_v1_4) + 0x2));
        (*(s32 *)((char *)&(spD8) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x140));
        (*(s32 *)((char *)&(spD8) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x144));
        (*(s32 *)((char *)&(spD8) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x148));
        spE4 = 0;
        spE6 = -0x28;
        spE8 = 0xFF;
        spEA = 0x28;
        spEC = 9.0f;
        spF0 = 17.0f;
        spF4 = D_800AAA70;
        spF8 = D_800AAA74;
        if (D_800BE616 != 0) {
            var_v0_4 = 0x800000;
        } else {
            var_v0_4 = 0;
        }
        spFC = var_v0_4 | 0x40E07;
        sp100 = 0x10;
        sp101 = -1;
        sp102 = 8;
        sp103 = 6;
        sp104 = 1;
        sp108 = D_800AAA78;
        func_15153634(&spA0, arg6, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
    }
    if (random_float() < arg4) {
        (*(s32 *)((char *)&(sp5C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AAA28) + 0x0));
        (*(u16 *)((char *)&(sp5C) + 0x4)) = (u16) (*(u16 *)((char *)&(D_800AAA28) + 0x4));
        sp70 = 3;
        sp71 = -1;
        temp_v1_5 = (char *)(arg0) + 0x110;
        sp50 = temp_v1_5;
        sp72 = (random_u32() % 6U) + 3;
        sp74 = 0;
        sp64 = (s32) (*(s32 *)((char *)(temp_v1_5) + 0x30));
        sp68 = (s32) (*(s32 *)((char *)(temp_v1_5) + 0x34));
        sp6C = (s32) (*(s32 *)((char *)(temp_v1_5) + 0x38));
        sp5B = random_u32() & 1;
        temp_v1_6 = (sp5B * 3) + &sp5C;
        func_151602C0(&sp70, &sp64, (random_u32() % 6U) + 0xA, (*(s32 *)((char *)(temp_v1_6) + 0x0)), (s32) (*(s32 *)((char *)(temp_v1_6) + 0x1)), (s32) (*(s32 *)((char *)(temp_v1_6) + 0x2)), 0xFF, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
    }
}

void func_151C436C(void *arg0, void *arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f16;
    s32 var_a2;

    var_a2 = arg2;
    if (var_a2 > 0) {
        do {
            temp_f0 = (*(s32 *)((char *)(arg1) + 0x10));
            temp_f12 = (*(s32 *)((char *)(arg1) + 0x14));
            temp_f16 = (*(s32 *)((char *)(arg1) + 0x18));
            var_a2 -= 1;
            (*(f32 *)((char *)(arg1) + 0x10)) = (f32) (temp_f0 + (((*(f32 *)((char *)(arg1) + 0x1C)) - temp_f0) * D_800AAA7C));
            (*(f32 *)((char *)(arg1) + 0x14)) = (f32) (temp_f12 + (((*(f32 *)((char *)(arg1) + 0x20)) - temp_f12) * D_800AAA7C));
            (*(f32 *)((char *)(arg1) + 0x18)) = (f32) (temp_f16 + (((*(f32 *)((char *)(arg1) + 0x24)) - temp_f16) * D_800AAA7C));
        } while (var_a2 > 0);
    }
}

u8 func_151C43E0(void *arg0, void *arg1, f32 arg2) {
    u8 spDF;
    f32 spD8;
    void * sp84;
    void * sp6C;
    void *sp64;
    f32 temp_f2;
    f32 var_f0;
    u8 temp_v1;
    u8 var_t0;

    f32 spBD;
    var_t0 = 1;
    spD8 = (*(s32 *)((char *)(arg1) + 0x90));
    temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
    if (temp_v1 & 4) {
        temp_f2 = (*(s32 *)((char *)(arg1) + 0x8C));
        if (temp_f2 < arg2) {
            var_f0 = (*(s32 *)((char *)(arg1) + 0x98)) * temp_f2;
        } else {
            var_f0 = (*(s32 *)((char *)(arg1) + 0x98)) * arg2;
        }
        if (var_f0 != 0.0f) {
            spDF = 1;
            func_15081690(arg2, spD8, (*(s32 *)((char *)(arg0) + 0x34)), (*(s32 *)((char *)(arg0) + 0x38)), (*(s32 *)((char *)(arg0) + 0x3C)), (*(s32 *)((char *)(arg1) + 0x60)), (*(s32 *)((char *)(arg1) + 0x64)), (*(s32 *)((char *)(arg1) + 0x68)), &sp64, var_f0, 1, 0, (temp_v1 & 8) == 0, (s32) (*(s32 *)((char *)(arg1) + 0xA8)), 0, (*(s32 *)((char *)(arg1) + 0xAC)));
            var_t0 = spDF;
            if ((s32) spBD >= 2) {
                func_151C2EF0(sp64, spD8, arg0, &sp6C);
                var_t0 = 0;
            }
        }
    }
    return var_t0;
}

void func_151C4510(void *arg0, void *arg1, f32 arg2) {
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + ((*(f32 *)((char *)(arg1) + 0x4)) * arg2));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg1) + 0x8)) * arg2));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg1) + 0xC)) * arg2));
}

s32 func_151C455C(void *arg0, void *arg1, f32 arg2) {
    s32 temp_v1;
    s32 var_v1;
    s8 temp_v0;

    var_v1 = 1;
    (*(f32 *)((char *)(arg1) + 0x8C)) = (f32) ((*(f32 *)((char *)(arg1) + 0x8C)) - arg2);
    if ((*(s32 *)((char *)(arg1) + 0x8C)) <= 0.0f) {
        if ((D_800E0940 != NULL) && ((*(s32 *)((char *)(arg1) + 0x0)) & 1)) {
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x84));
            if (temp_v1 != 0) {
                D_800E0940(arg2, (char *)(arg1) + 0x30, (s32) ((char *)(temp_v1) - (char *)(D_800DBEF4)) / 160, arg1);
            }
        }
        if ((*(s32 *)((char *)(arg1) + 0x0)) & 2) {
            temp_v0 = (*(s32 *)((char *)(arg1) + 0x9C));
            if (temp_v0 != -1) {
                ((s32 (*)())((char *)(&D_8008FBD0 + (temp_v0 * 4))))(arg0);
            }
        }
        var_v1 = 0;
    }
    return var_v1;
}

void func_151C4644(void *arg0) {
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
    f32 temp_f8;
    s32 temp_t8;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x28;
    temp_t8 = (*(s32 *)((char *)(arg0) + 0x2C)) - D_800BE9E4;
    (*(s32 *)((char *)(arg0) + 0x2C)) = temp_t8;
    if (temp_t8 < 0) {
        sp48 = (*(s32 *)((char *)(temp_s0) + 0x1C));
        sp4C = (*(s32 *)((char *)(temp_s0) + 0x20));
        sp50 = random_float() * (*(s32 *)((char *)(temp_s0) + 0x24));
        sp54 = random_float() * (*(s32 *)((char *)(temp_s0) + 0x24));
        sp58 = random_float() * D_800AAA80;
        sp5C = random_float() * D_800AAA84;
        sp60 = (*(s32 *)((char *)(temp_s0) + 0x28));
        sp68 = 0.0f;
        sp64 = (*(s32 *)((char *)(temp_s0) + 0x28));
        temp_f8 = random_float() * (*(s32 *)((char *)(temp_s0) + 0x18));
        sp70 = 0.0f;
        sp6C = temp_f8 + (*(s32 *)((char *)(temp_s0) + 0x14));
        sp74 = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x0));
        sp78 = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x2));
        sp7C = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x28))) + 0x4));
        sp80 = (*(s32 *)((char *)(temp_s0) + 0x2C));
        sp84 = (*(s32 *)((char *)(temp_s0) + 0x30));
        sp88 = (*(s32 *)((char *)(temp_s0) + 0x34));
        temp_v0 = func_15149130((s16) ((random_u32() % (u32) ((*(s16 *)((char *)(temp_s0) + 0x12)) + 1)) + (*(s16 *)((char *)(temp_s0) + 0x10))), -1, 0x2B, -1, 1, 0, 0x44, (s32) (*(s16 *)((char *)(arg0) + 0xC)), (s32) (*(s16 *)((char *)(arg0) + 0x1)));
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x28, (u8 *) &sp48, 0x44);
        }
        (*(s32 *)((char *)(temp_s0) + 0x4)) = (s32) ((random_u32() % (u32) ((*(s32 *)((char *)(temp_s0) + 0xC)) + 1)) + (*(s32 *)((char *)(temp_s0) + 0x8)));
    }
}

void func_151C4820(void *arg0) {
    f32 sp118;
    void * spF4;
    f32 spD0;
    f32 spCC;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f2;
    f32 var_f24;
    f32 var_f26;
    f32 var_f28;
    void *temp_s0;

    temp_s0 = (char *)(arg0) + 0x28;
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    if ((*(s32 *)((char *)(arg0) + 0x50)) > 1.0f) {
        temp_f2 = 1.0f / (*(s32 *)((char *)(temp_s0) + 0x28));
        var_f24 = (*(s32 *)((char *)(temp_s0) + 0x20)) + D_800BE9A4;
        sp118 = var_f24 * temp_f2;
        var_f26 = (*(s32 *)((char *)(temp_s0) + 0x10));
        var_f28 = (*(s32 *)((char *)(temp_s0) + 0x14));
        spD0 = (*(s32 *)((char *)(temp_s0) + 0x18)) * D_800BE9A4 * temp_f2;
        spCC = (*(s32 *)((char *)(temp_s0) + 0x1C)) * D_800BE9A4 * temp_f2;
        do {
            temp_f20 = sinf(var_f26);
            func_151436B4((*(s32 *)((char *)(arg0) + 0x28)) + (temp_f20 * (*(s32 *)((char *)(temp_s0) + 0x8))), (*(s32 *)((char *)(temp_s0) + 0x4)) + (sinf(var_f28) * (*(s32 *)((char *)(temp_s0) + 0xC))), 0x40A00000, &spF4);
            temp_f20_2 = random_float();
            temp_f22 = random_float();
            func_151C229C((char *)(temp_s0) + 0x2C, &spF4, NULL, NULL, 0U, NULL, (*(u8 *)((char *)(temp_s0) + 0x38)), (*(u8 *)((char *)(temp_s0) + 0x3C)), (temp_f20_2 * 40.0f) + 55.0f, (temp_f22 * 300.0f) + 250.0f, (*(u8 *)((char *)(temp_s0) + 0x40)), (u8) ((random_u32() % 56U) + 0xC8), NULL, 0U, 0U, 0U, 0U, 0U, 0U, -1, 0, var_f24, 0xFFU, -1, 0, (u8) (s32) (*(u8 *)((char *)(arg0) + 0xC)), (s32) (*(u8 *)((char *)(arg0) + 0x1)));
            var_f26 += spD0;
            (*(f32 *)((char *)(temp_s0) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x28)) - 1.0f);
            var_f28 += spCC;
            var_f24 -= sp118;
        } while ((*(s32 *)((char *)(temp_s0) + 0x28)) > 1.0f);
        (*(s32 *)((char *)(temp_s0) + 0x10)) = func_15144B68(var_f26);
        (*(s32 *)((char *)(temp_s0) + 0x14)) = func_15144B68(var_f28);
        (*(s32 *)((char *)(temp_s0) + 0x20)) = var_f24;
    }
}

void func_151C4AB0(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = arg0 + 0x110;
    if ((arg2 & 0xFF) == 0x2D) {
        temp_v1 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_a2 = (*(s32 *)((char *)(temp_v0) + 0x90));
        if (temp_v1 == temp_a2) {
            (*(s32 *)((char *)(temp_v0) + 0x90)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v0) + 0x94)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_a2) {
            (*(s32 *)((char *)(temp_v0) + 0x90)) = temp_v1;
            (*(u8 *)((char *)(temp_v0) + 0x94)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

s32 func_151C4B0C(void *arg0, void * *arg1, void *arg2, void * *arg3, f32 *arg4, f32 arg5, u8 arg6, void *arg7, void * *arg8, u8 *arg9, u8 arg10, f32 arg11, f32 arg12, s8 arg13, u8 arg14, u8 arg15, s32 arg16, u8 arg17) {
    s32 sp12D;
    void * spD4;
    s32 spCC;
    f32 spC8;
    void * sp64;
    void *sp58;
    void *sp54;
    void * *sp50;
    void * *temp_a0;
    void * *temp_t4;
    void * *temp_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_v0;
    u8 temp_v0_4;
    void *temp_a2;
    void *var_t0;
    void *var_t0_2;

    if (arg0 != NULL) {
        M2C_MEMCPY_ALIGNED(arg1, arg0, 0x60);
        (*(s32 *)((char *)(arg1) + 0x60)) = (s32) (*(s32 *)((char *)(arg0) + 0x60));
        temp_f0 = (*(s32 *)((char *)(arg2) + 0x0));
        if (((*(s32 *)((char *)(arg1) + 0x2C)) != temp_f0) || ((*(s32 *)((char *)(arg1) + 0x30)) != (*(s32 *)((char *)(arg2) + 0x4))) || ((*(s32 *)((char *)(arg1) + 0x34)) != (*(s32 *)((char *)(arg2) + 0x8)))) {
            temp_a0 = (char *)(arg1) + 0x38;
            (*(f32 *)((char *)(arg1) + 0x38)) = (f32) ((*(f32 *)((char *)(arg1) + 0x8)) - temp_f0);
            (*(f32 *)((char *)(arg1) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg1) + 0xC)) - (*(f32 *)((char *)(arg2) + 0x4)));
            (*(f32 *)((char *)(arg1) + 0x40)) = (f32) ((*(f32 *)((char *)(arg1) + 0x10)) - (*(f32 *)((char *)(arg2) + 0x8)));
            (*(f32 *)((char *)(arg1) + 0x2C)) = (f32) (*(f32 *)((char *)(arg2) + 0x0));
            (*(f32 *)((char *)(arg1) + 0x30)) = (f32) (*(f32 *)((char *)(arg2) + 0x4));
            (*(f32 *)((char *)(arg1) + 0x34)) = (f32) (*(f32 *)((char *)(arg2) + 0x8));
            if (func_15145128(temp_a0, temp_a0, (char *)(arg1) + 4, 0) == 0) {
                return 0;
            }
        }
        if ((arg17 != 0) && ((temp_v0 = (*(s32 *)((char *)(arg1) + 0x59)), (temp_v0 == 2)) || (temp_v0 == 3))) {
            func_15081690(arg12, (*(s32 *)((char *)(arg1) + 0x2C)), (*(s32 *)((char *)(arg1) + 0x30)), (*(s32 *)((char *)(arg1) + 0x34)), (*(s32 *)((char *)(arg1) + 0x38)), (*(s32 *)((char *)(arg1) + 0x3C)), (*(s32 *)((char *)(arg1) + 0x40)), &spD4, NULL, 0.0f, 1, 1, -1, 0, arg16);
            if (sp12D != 0) {
                M2C_MEMCPY_ALIGNED(arg1, &spD4, 0x60);
                (*(s32 *)((char *)(arg1) + 0x60)) = (s32) (*(s32 *)((char *)&(spD4) + 0x60));
            }
        }
        *arg4 = (*(s32 *)((char *)(arg1) + 0x4)) * arg5;
        goto block_55;
    }
    if (arg6 != 0) {
        spCC = -1;
        if ((arg7 != NULL) && (arg8 != NULL)) {
            var_t0 = (char *)(arg1) + 0x2C;
            temp_t4 = (char *)(arg1) + 0x38;
            (*(f32 *)((char *)(arg1) + 0x2C)) = (f32) (*(f32 *)((char *)(arg7) + 0x0));
            (*(s32 *)((char *)(var_t0) + 0x4)) = (s32) (*(s32 *)((char *)(arg7) + 0x4));
            (*(s32 *)((char *)(var_t0) + 0x8)) = (s32) (*(s32 *)((char *)(arg7) + 0x8));
            sp50 = temp_t4;
            (*(f32 *)((char *)(arg1) + 0x38)) = (f32) (*(f32 *)((char *)(arg8) + 0x0));
            (*(f32 *)((char *)(temp_t4) + 0x4)) = (f32) (*(f32 *)((char *)(arg8) + 0x4));
            (*(f32 *)((char *)(temp_t4) + 0x8)) = (f32) (*(f32 *)((char *)(arg8) + 0x8));
        } else {
            var_t0 = (char *)(arg1) + 0x2C;
            temp_v0_2 = (char *)(arg1) + 0x38;
            (*(f32 *)((char *)(arg1) + 0x2C)) = (f32) (*(f32 *)((char *)(arg2) + 0x0));
            (*(f32 *)((char *)(var_t0) + 0x4)) = (f32) (*(f32 *)((char *)(arg2) + 0x4));
            (*(f32 *)((char *)(var_t0) + 0x8)) = (f32) (*(f32 *)((char *)(arg2) + 0x8));
            (*(f32 *)((char *)(arg1) + 0x38)) = (f32) (*(f32 *)((char *)(arg3) + 0x0));
            (*(f32 *)((char *)(temp_v0_2) + 0x4)) = (f32) (*(f32 *)((char *)(arg3) + 0x4));
            (*(f32 *)((char *)(temp_v0_2) + 0x8)) = (f32) (*(f32 *)((char *)(arg3) + 0x8));
            sp50 = temp_v0_2;
        }
        if (arg14 != 0) {
            var_v1 = 0;
        } else {
            var_v1 = 1;
        }
        if ((arg15 != 0) && (arg14 != 0)) {
            var_v0 = 0;
        } else {
            var_v0 = 1;
        }
        sp54 = var_t0;
        func_15081690(arg12, (*(s32 *)((char *)(arg1) + 0x2C)), (*(s32 *)((char *)(arg1) + 0x30)), (*(s32 *)((char *)(arg1) + 0x34)), (*(s32 *)((char *)(arg1) + 0x38)), (*(s32 *)((char *)(arg1) + 0x3C)), (*(s32 *)((char *)(arg1) + 0x40)), arg1, NULL, 0.0f, var_v1, var_v0, (s32) arg13, 0, arg16);
        temp_v0_3 = (*(s32 *)((char *)(arg1) + 0x5C));
        var_t0_2 = var_t0;
        if (temp_v0_3 == 0) {
            spCC = -1;
        } else {
            spCC = (s32) ((char *)(temp_v0_3) - (char *)(D_800DBEF4)) / 160;
        }
        temp_v0_4 = (*(s32 *)((char *)(arg1) + 0x59));
        if (temp_v0_4 == 0) {
            var_v1_2 = 0;
            goto block_38;
        }
        if (temp_v0_4 == 1) {
            var_v1_2 = 1;
            goto block_38;
        }
        if ((arg7 != NULL) && (arg8 != NULL)) {
            M2C_MEMCPY_ALIGNED(&sp64, arg1, 0x60);
            temp_a2 = (char *)(arg1) + 4;
            (*(s32 *)((char *)&(sp64) + 0x60)) = (s32) (*(s32 *)((char *)(arg1) + 0x60));
            (*(f32 *)((char *)(var_t0_2) + 0x0)) = (f32) (*(f32 *)((char *)(arg2) + 0x0));
            (*(f32 *)((char *)(var_t0_2) + 0x4)) = (f32) (*(f32 *)((char *)(arg2) + 0x4));
            (*(f32 *)((char *)(var_t0_2) + 0x8)) = (f32) (*(f32 *)((char *)(arg2) + 0x8));
            (*(f32 *)((char *)(arg1) + 0x38)) = (f32) ((*(f32 *)((char *)(arg1) + 0x8)) - (*(f32 *)((char *)(arg2) + 0x0)));
            (*(f32 *)((char *)(arg1) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg1) + 0xC)) - (*(f32 *)((char *)(arg2) + 0x4)));
            (*(f32 *)((char *)(arg1) + 0x40)) = (f32) ((*(f32 *)((char *)(arg1) + 0x10)) - (*(f32 *)((char *)(arg2) + 0x8)));
            sp54 = var_t0_2;
            sp58 = temp_a2;
            if (func_15145128(sp50, sp50, temp_a2, 0) == 0) {
                return 0;
            }
            spC8 = (*(s32 *)((char *)(arg1) + 0x4));
            sp54 = var_t0_2;
            temp_v0_5 = func_150AC9C0((*(s32 *)((char *)(arg1) + 0x8)), (*(s32 *)((char *)(arg1) + 0xC)), (*(s32 *)((char *)(arg1) + 0x10)), (*(s32 *)((char *)(arg1) + 0x38)), (*(s32 *)((char *)(arg1) + 0x3C)), (*(s32 *)((char *)(arg1) + 0x40)), 0, (char *)(arg1) + 0x44, (char *)(arg1) + 8, (char *)(arg1) + 0xC, (char *)(arg1) + 0x10, sp58, &spCC, (char *)(arg1) + 0x60, 0.0f);
            var_t0_2 = sp54;
            var_v1_2 = temp_v0_5 & 0xFF;
            if (temp_v0_5 & 0xFF) {
                (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((*(f32 *)((char *)(arg1) + 0x4)) + spC8);
                (*(f32 *)((char *)(var_t0_2) + 0x0)) = (f32) (*(f32 *)((char *)(arg2) + 0x0));
                (*(f32 *)((char *)(var_t0_2) + 0x4)) = (f32) (*(f32 *)((char *)(arg2) + 0x4));
                (*(f32 *)((char *)(var_t0_2) + 0x8)) = (f32) (*(f32 *)((char *)(arg2) + 0x8));
            }
            goto block_38;
        }
        sp54 = var_t0_2;
        var_t0_2 = sp54;
        var_v1_2 = func_150AC9C0((*(s32 *)((char *)(arg2) + 0x0)), (*(s32 *)((char *)(arg2) + 0x4)), (*(s32 *)((char *)(arg2) + 0x8)), (*(s32 *)((char *)(arg1) + 0x38)), (*(s32 *)((char *)(arg1) + 0x3C)), (*(s32 *)((char *)(arg1) + 0x40)), 0, (char *)(arg1) + 0x44, (char *)(arg1) + 8, (char *)(arg1) + 0xC, (char *)(arg1) + 0x10, (char *)(arg1) + 4, &spCC, (char *)(arg1) + 0x60, 0.0f) & 0xFF;
block_38:
        if (var_v1_2 != 0) {
            *arg4 = (*(s32 *)((char *)(arg1) + 0x4)) * arg5;
            temp_f0_2 = (*(s32 *)((char *)(arg2) + 0x0));
            if (((*(s32 *)((char *)(arg1) + 0x2C)) != temp_f0_2) || ((*(s32 *)((char *)(arg1) + 0x30)) != (*(s32 *)((char *)(arg2) + 0x4))) || ((*(s32 *)((char *)(arg1) + 0x34)) != (*(s32 *)((char *)(arg2) + 0x8)))) {
                (*(f32 *)((char *)(arg1) + 0x38)) = (f32) ((*(f32 *)((char *)(arg1) + 0x8)) - temp_f0_2);
                (*(f32 *)((char *)(arg1) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg1) + 0xC)) - (*(f32 *)((char *)(arg2) + 0x4)));
                (*(f32 *)((char *)(arg1) + 0x40)) = (f32) ((*(f32 *)((char *)(arg1) + 0x10)) - (*(f32 *)((char *)(arg2) + 0x8)));
                (*(f32 *)((char *)(var_t0_2) + 0x0)) = (f32) (*(f32 *)((char *)(arg2) + 0x0));
                (*(f32 *)((char *)(var_t0_2) + 0x4)) = (f32) (*(f32 *)((char *)(arg2) + 0x4));
                (*(f32 *)((char *)(var_t0_2) + 0x8)) = (f32) (*(f32 *)((char *)(arg2) + 0x8));
                if (func_15145128(sp50, sp50, (char *)(arg1) + 4, 0) == 0) {
                    return 0;
                }
            }
            func_151C2050((*(void **)&(arg12)), (char *)(arg1) + 8, sp50, (*(s32 *)((char *)(arg1) + 0x60)), (*(s32 *)((char *)(arg1) + 0x4)));
            if (spCC == -1) {
                (*(s32 *)((char *)(arg1) + 0x5C)) = 0;
            } else {
                (*(s32 *)((char *)(arg1) + 0x5C)) = (s32) ((spCC * 0xA0) + D_800DBEF4);
            }
            goto block_55;
        }
        *arg9 &= ~arg10;
        *arg4 = arg11;
        if ((arg3 == NULL) && (arg8 == NULL)) {
            return 0;
        }
        goto block_55;
    }
    *arg9 &= ~arg10;
    *arg4 = arg11;
    (*(f32 *)((char *)(arg1) + 0x2C)) = (f32) (*(f32 *)((char *)(arg2) + 0x0));
    (*(f32 *)((char *)(arg1) + 0x30)) = (f32) (*(f32 *)((char *)(arg2) + 0x4));
    (*(f32 *)((char *)(arg1) + 0x34)) = (f32) (*(f32 *)((char *)(arg2) + 0x8));
    if (arg3 != NULL) {
        (*(f32 *)((char *)(arg1) + 0x38)) = (f32) (*(f32 *)((char *)(arg3) + 0x0));
        (*(f32 *)((char *)(arg1) + 0x3C)) = (f32) (*(f32 *)((char *)(arg3) + 0x4));
        (*(f32 *)((char *)(arg1) + 0x40)) = (f32) (*(f32 *)((char *)(arg3) + 0x8));
        goto block_55;
    }
    if (arg8 != NULL) {
        (*(f32 *)((char *)(arg1) + 0x38)) = (f32) (*(f32 *)((char *)(arg8) + 0x0));
        (*(f32 *)((char *)(arg1) + 0x3C)) = (f32) (*(f32 *)((char *)(arg8) + 0x4));
        (*(f32 *)((char *)(arg1) + 0x40)) = (f32) (*(f32 *)((char *)(arg8) + 0x8));
block_55:
        return 1;
    }
    return 0;
}
