/**
 * Auto-decompiled from asm/11FF10.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_1502EA98();    /* extern */
void * func_15052590();                            /* extern */
void * func_150585F0();                         /* extern */
void * func_150599C8();               /* extern */
void * func_1505A3A8();     /* extern */
void * func_15073FA0();                            /* extern */
void * func_1507CD64();                            /* extern */
s32 func_1509BE40();                      /* extern */
f32 random_float();                                /* extern */
s32 func_151149AC();                             /* extern */
void * func_15136C3C();  /* extern */
void * func_15140410();                     /* extern */
void * func_15143134();          /* extern */
void * func_15145EA4();              /* extern */
s32 func_15146078();                 /* extern */
void * func_15196318();                     /* extern */
void * memcpy();                          /* extern */
extern s32 D_800A1950;
extern s32 D_800A195C;
extern f32 D_800A1968;
extern f32 D_800A196C;
extern f32 D_800A1970;
extern f32 D_800A1980;
extern f32 D_800A1984;
extern f32 D_800A1988;
extern f32 D_800A198C;
extern f32 D_800A1990;
extern f32 D_800A1994;
extern f32 D_800A1998;
extern f32 D_800A199C;
extern f32 D_800A19A0;
extern f32 D_800A19A4;
extern f32 D_800A19A8;
extern f32 D_800A19AC;
extern f32 D_800A19B0;
extern f32 D_800A19B4;
extern f32 D_800A19B8;
extern f32 D_800A19BC;
extern f32 D_800A19C0;
extern f32 D_800A19C4;
extern f32 D_800A19C8;
extern f32 D_800A19CC;
extern f32 D_800A19D0;
extern f32 D_800A19D4;
extern s8 D_800CBDD3;
extern u8 D_800CC26D;
extern u8 D_800CC40C;
extern s8 D_800CC49A;
extern void *D_800CC5EC;
extern s32 D_800CC5FC;
extern s32 D_800DBF94;

void func_150F2A60(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    void *temp_v0_2;

    if (D_800CC5EC != NULL) {
        var_s0 = 0;
        if ((*(s32 *)((char *)(D_800CC5EC) + 0x120)) == 0) {
loop_3:
            temp_v0 = func_151149AC((0xFA - var_s0) & 0xFF);
            var_s0 += 1;
            if ((*(s32 *)((char *)(D_800DBF94) + (((s32) ((char *)(temp_v0) - (char *)(D_800DBEF4)) / 160) * 4))) & 1) {
                if (D_800CC40C != 0) {
                    func_15060F28((D_800CC40C * 0x32C) + 0xFFFEC2D0 + &gObjects, 0);
                }
                D_800CC49A = 0;
                func_15136C3C(&gObjects, 0, 0, 1, 1, 0, 0xFF, 1);
                func_10010630(0x627, &gObjects, 0x6D60, 0x1F4, 0x3E8);
                func_15145A50(&gObjects);
                func_1507CD64(&gObjects, 6);
            } else if (var_s0 < 2) {
                goto loop_3;
            }
            temp_v0_2 = func_15083E90(0xE);
            if (temp_v0_2 != NULL) {
                var_s0_2 = (*(s32 *)((char *)(temp_v0_2) + 0x2E4));
            } else {
                var_s0_2 = 0;
            }
            func_15196318(D_800BE4F0->unk0, var_s0_2, 0);
            temp_s1 = -var_s0_2;
            func_15196318(D_800BE4F0->unk4, 0, temp_s1);
            func_15196318(D_800BE4F0->unk8, var_s0_2, 0);
            func_15196318(D_800BE4F0->unkC, temp_s1, 0);
        }
    }
}

void func_150F2C8C(void *arg0) {
    s8 sp44;
    f32 sp40;
    s8 sp3D;
    u8 sp3C;
    void *sp38;
    s32 temp_v0;

    sp38 = arg0;
    sp3D = 0;
    sp44 = 0;
    sp40 = 0.0f;
    sp3C = (*(s32 *)((char *)(arg0) + 0x3B));
    temp_v0 = func_15149130(0x12C, -1, 0x5C, -1, 0, 0x44, 0x10, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x28, &sp38, 0x10);
    }
}

void func_150F2D14(void *arg0) {
    void *sp14C;
    s16 sp146;
    s16 sp144;
    s32 sp140;
    s8 sp13C;
    s32 sp138;
    s8 sp137;
    s8 sp136;
    s8 sp135;
    s8 sp134;
    s32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    void * sp118;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    s8 sp103;
    s8 sp102;
    s8 sp101;
    s8 sp100;
    s32 spFC;
    s32 spF8;
    s16 spF4;
    s16 spF2;
    s8 spF1;
    s8 spF0;
    void * spE4;
    void * spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    u8 spC0;
    void *spBC;
    void * *spB4;
    void * *spB0;
    f32 *spAC;
    f32 *spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 temp_f16;
    f32 temp_f28;
    f32 temp_f4;
    s32 temp_v0_3;
    s32 var_t1;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;
    void *temp_s1;

    f32 sp110;
    f32 sp114;
    temp_s0 = (char *)(arg0) + 0x28;
    sp14C = temp_s0;
    if (D_800C35EA != 1) {
        temp_s1 = (*(s32 *)((char *)(arg0) + 0x28));
        if (((*(s32 *)((char *)(temp_s1) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s0) + 0x4)) != (*(s32 *)((char *)(temp_s1) + 0x3B)))) {
            (*(s32 *)((char *)(arg0) + 0xE)) = -1;
            return;
        }
        temp_v0 = (*(s32 *)((char *)(temp_s1) + 0x222));
        if ((temp_v0 != (*(s32 *)((char *)(temp_s0) + 0x5))) && (temp_v0 != 0)) {
            (*(s32 *)((char *)(temp_s0) + 0xC)) = 3;
            (*(s32 *)((char *)(temp_s0) + 0x8)) = 0.0f;
        }
        (*(s32 *)((char *)(temp_s0) + 0x5)) = (*(s32 *)((char *)(temp_s1) + 0x222));
        temp_v0_2 = (*(s32 *)((char *)(temp_s1) + 0x222));
        if (temp_v0_2 != 0) {
            func_1502EA98((temp_v0_2 * 0x32C) + &gObjects, 0xFF, 0, 0, 0x50, 0, 0xF);
        }
        if (((*(s32 *)((char *)(temp_s1) + 0x1D4)) != 0) && ((*(s32 *)((char *)(temp_s0) + 0xC)) > 0)) {
            (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) + (D_800A1968 * D_800BE9A4));
            if ((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f) {
                temp_f28 = D_800A196C;
loop_13:
                spBC = temp_s1;
                spC4 = 0.0f;
                spC0 = (*(s32 *)((char *)(temp_s1) + 0x3B));
                temp_f4 = random_float() * 6.0f;
                spCC = temp_f28;
                spC8 = temp_f4 + 13.0f;
                temp_f16 = (random_float() * 40.0f) + 60.0f;
                spD0 = temp_f16;
                spD4 = temp_f16 / (spC8 * spC8);
                spB0 = &D_800A1950;
                spB4 = &D_800A195C;
                spA8 = &sp10C;
                spAC = &sp9C;
                func_15145EA4(&spB0, &spA8, (*(s32 *)((char *)(temp_s1) + 0x1D4)) + 0x3C0, 2);
                sp9C -= sp10C;
                spA0 -= sp110;
                spA4 -= sp114;
                if (func_15146078(&sp9C, &spD8, &spE4) != 0) {
                    if (M2C_ERROR(/* cfc1 */) & 0x78) {
                        if (!(M2C_ERROR(/* cfc1 */) & 0x78)) {
                            var_t1 = (s32) (spD0 - 2.1474836e9f) | 0x80000000;
                        } else {
                            goto block_17;
                        }
                    } else {
                        var_t1 = (s32) spD0;
                        if (var_t1 < 0) {
block_17:
                            var_t1 = -1;
                        }
                    }
                    sp134 = (s8) var_t1;
                    spF0 = 0x79;
                    spF1 = 0xC;
                    spF2 = 0x4405;
                    spF4 = 0x12C;
                    spF8 = 0;
                    spFC = 0;
                    sp100 = 0xD5;
                    sp101 = 0xDB;
                    sp102 = 0xFF;
                    sp103 = 0xFF;
                    sp108 = 0.0f;
                    sp104 = 0.0f;
                    (*(s32 *)((char *)&(sp118) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
                    (*(s32 *)((char *)&(sp118) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
                    (*(s32 *)((char *)&(sp118) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
                    sp124 = 1.0f;
                    sp128 = 1.0f;
                    sp12C = 1.0f;
                    sp130 = 0x04EC0000;
                    sp135 = 0xFF;
                    sp136 = 0;
                    sp137 = 6;
                    sp138 = 0;
                    sp13C = 0xFF;
                    sp140 = 0;
                    sp144 = 1;
                    sp146 = 0xFF;
                    temp_v0_3 = func_1513D2F0(&spF0, &D_800A4AA0, 0x26, 0, 0, 0x25, 0, 0, 0, 0x34, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                    if (temp_v0_3 != 0) {
                        memcpy(temp_v0_3 + 0x110, &spBC, 0x34);
                    }
                    (*(s8 *)((char *)(temp_s0) + 0xC)) = (s8) ((*(s8 *)((char *)(temp_s0) + 0xC)) - 1);
                    (*(f32 *)((char *)(temp_s0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x8)) - 1.0f);
                    if (((*(s32 *)((char *)(temp_s0) + 0x8)) > 1.0f) && ((*(s32 *)((char *)(sp14C) + 0xC)) > 0)) {
                        goto loop_13;
                    }
                }
            }
        }
    }
}

void func_150F3194(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x28, arg0 + 0x2C, arg0);
}

void func_150F31D4(s32 arg0, s32 arg1, s32 arg2) {
    func_15169850(arg1, arg2, arg0 + 0x110, arg0 + 0x114, arg0);
}

s32 func_150F3214(void *arg0) {
    void *sp18;
    f32 temp_f12;
    f32 temp_f2;
    s32 temp_t0;
    s32 var_v0;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x110));
    temp_v0 = (char *)(arg0) + 0x110;
    if (((*(s32 *)((char *)(temp_v1) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_v1) + 0x3B))) || (temp_t0 = (*(s32 *)((char *)(temp_v1) + 0x1D4)), (temp_t0 == 0))) {
        return 0;
    }
    sp18 = temp_v0;
    func_15143134(&D_800A1950, (char *)(arg0) + 0x34, temp_t0 + 0x3C0, arg0);
    temp_f2 = sqrtf((*(s32 *)((char *)(temp_v0) + 0x8))) * (*(s32 *)((char *)(temp_v0) + 0x10));
    (*(s32 *)((char *)(arg0) + 0x30)) = temp_f2;
    (*(s32 *)((char *)(arg0) + 0x2C)) = temp_f2;
    temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x8));
    (*(s8 *)((char *)(arg0) + 0x5C)) = (s8) (u32) ((*(s8 *)((char *)(temp_v0) + 0x14)) - ((*(s8 *)((char *)(temp_v0) + 0x18)) * temp_f12 * temp_f12));
    (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x8)) + D_800BE9A4);
    var_v0 = 1;
    if ((*(s32 *)((char *)(temp_v0) + 0xC)) < (*(s32 *)((char *)(temp_v0) + 0x8))) {
        var_v0 = 0;
    }
    return var_v0;
}

void func_150F337C(s32 arg0, s32 arg1) {
    func_15140410(arg0 + 0x12C, arg0 + 0x138, arg1);
}

void func_150F33B0(void *arg0) {
    if (D_800DBFF0->unk300 < -2000.0f) {
        (*(u8 *)((char *)(arg0) + 0x4F)) = (u8) ((*(u8 *)((char *)(arg0) + 0x4F)) & 0xFFFE);
        return;
    }
    (*(u8 *)((char *)(arg0) + 0x4F)) = (u8) ((*(u8 *)((char *)(arg0) + 0x4F)) | 1);
}

void func_150F33F8(s32 arg0) {
    void *temp_v0;

    temp_v0 = D_800DBFF0 + (arg0 * 0x9A0);
    if ((*(s32 *)((char *)(temp_v0) + 0x300)) < D_800A1970) {
        if ((*(s32 *)((char *)(temp_v0) + 0x2FC)) > 840.0f) {
            (*(s32 *)((D_800D9A40))) |= 1 << arg0;
            return;
        }
        (*(s32 *)((D_800D9A40))) &= ~(1 << arg0);
    }
}

f32 func_150F34A0(void *arg0, f32 arg1) {
    f32 var_f2;

    if (arg1 < -5.0f) {
        var_f2 = (arg1 * D_800A1980) + D_800A1984;
    } else {
        var_f2 = 0.75f;
    }
    return var_f2;
}

void func_150F34F4(void *arg0) {
    u16 sp7E;
    f32 sp6C;
    f32 sp68;
    f32 sp58;
    s32 sp50;
    f32 sp48;
    void * *sp34;
    void * *var_a1;
    void * *var_v0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f0;
    f32 var_f12;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_cond;
    s32 temp_t6;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_t9;
    u16 var_v0;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a2;
    void *temp_t2;
    void *temp_v0_2;
    void *temp_v0_4;

    sp58 = 0.0f;
    (*(s32 *)((char *)(arg0) + 0xAB)) = 1;
    (*(s32 *)((char *)(arg0) + 0x80)) = 1;
    (*(s32 *)((char *)(arg0) + 0x222)) = 0;
    D_800CC288 = (s32) D_800BE710;
    temp_t2 = (*(s32 *)((D_800BE728)));
    D_800CC284 = temp_t2;
    if ((D_80082FA0 >= (s32) gCurrentObjectIndex) && (*(&D_800DDE3C + gCurrentObjectIndex) != 0) && (*(&D_800DDDC8 + (gCurrentObjectIndex * 4)) > 0.75f) && (D_800E0B94 != 2)) {
        (*(s32 *)((char *)(temp_t2) + 0x2)) = 0;
        (*(s32 *)((char *)(D_800CC284) + 0x3)) = 0;
        (*(s32 *)((char *)(D_800CC284) + 0x0)) = 0U;
        D_800CC288 = 0;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x103));
    (*(s32 *)((char *)(arg0) + 0xF8)) = (s32) ((*(s32 *)((char *)(arg0) + 0xF8)) | 0x40);
    (*(f32 *)((char *)(arg0) + 0x1CC)) = (f32) (*(f32 *)((char *)(arg0) + 0x18));
    if (temp_v0 != 0) {
        (*(u8 *)((char *)(arg0) + 0x103)) = (u8) (temp_v0 - 1);
    }
    if ((*(s32 *)((char *)(arg0) + 0x104)) != 0) {
        func_150585F0(arg0, 0x3E800000);
        func_15059140(arg0);
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x13C));
        (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((f32) ((*(f32 *)((char *)(arg0) + 0x7A)) + 0x4000) * 0.005493164f);
        if (temp_v1 != 0) {
            temp_v0_2 = ((temp_v1 - 0x64) * 0x32C) + &gObjects;
            (*(s32 *)((char *)(temp_v0_2) + 0x13D)) = 0;
            (*(s32 *)((char *)(temp_v0_2) + 0x232)) = 0x21;
            (*(s32 *)((char *)(temp_v0_2) + 0x218)) = 0;
            (*(s32 *)((char *)(temp_v0_2) + 0x104)) = 0;
            (*(s32 *)((char *)(temp_v0_2) + 0xF8)) = (s32) ((*(s32 *)((char *)(temp_v0_2) + 0xF8)) & ~0x400);
            (*(f32 *)((char *)(temp_v0_2) + 0x3C)) = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
            (*(s32 *)((char *)(arg0) + 0x13C)) = 0U;
        }
    } else if ((*(s32 *)((char *)(arg0) + 0x102)) == 0) {
        (*(s32 *)((char *)(arg0) + 0xAD)) = 0;
        sp7E = func_1505A630((f32) (*(f32 *)((char *)(D_800CC284) + 0x2)), (f32) (*(f32 *)((char *)(D_800CC284) + 0x3)), arg0);
        var_f2 = func_1505A5CC(D_800CC284);
        if ((*(s32 *)((char *)(D_800CC284) + 0x0)) & 0x10) {
            var_f2 = 0.0f;
        }
        (*(u16 *)((char *)(arg0) + 0x78)) = (u16) (*(u16 *)((char *)(arg0) + 0x7A));
        if (var_f2 > 1.0f) {
            (*(u16 *)((char *)(arg0) + 0x78)) = (u16) ((sp7E + D_800CC280) & 0xFFFF);
        }
        (*(s32 *)((char *)(arg0) + 0x232)) = 7;
        (*(s32 *)((char *)(arg0) + 0x218)) = 0;
        (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (var_f2 * D_800A1988);
        if ((D_800CC288 & 0xC000) || ((*(s32 *)((char *)(arg0) + 0x28)) > 100.0f)) {
            (*(s32 *)((char *)(arg0) + 0x232)) = 8;
            (*(s32 *)((char *)(arg0) + 0x102)) = 1U;
        }
        func_15052590(arg0);
        if (D_800CC26D != 0) {
            if ((*(s32 *)((char *)(arg0) + 0x28)) > 30.0f) {
                D_800D1580 = 0xFF010074;
                func_1506E8D8();
                func_1505959C((D_800CC26D * 0x32C) + 0xFFFEC2D0 + &gObjects, gCurrentObjectIndex);
                (*(s32 *)((char *)(arg0) + 0x102)) = 1U;
                (*(u8 *)((char *)(arg0) + 0x13C)) = (u8) D_800CC26D;
            }
            (*(s32 *)((char *)(arg0) + 0x20)) = 23.0f;
        }
        if ((*(s32 *)((char *)(arg0) + 0x18)) < (*(s32 *)((char *)(arg0) + 0x118))) {
            (*(s32 *)((char *)(arg0) + 0x102)) = 1U;
            (*(s32 *)((char *)(arg0) + 0x86)) = 1U;
            (*(s32 *)((char *)(arg0) + 0x20)) = -6.0f;
        }
    } else {
        sp68 = (*(s32 *)((char *)(arg0) + 0x3C));
        if (sp68 > 60.0f) {
            sp68 = 60.0f;
        }
        sp6C = (f32) (*(f32 *)((char *)(D_800CC284) + 0x3)) * 1.25f;
        temp_t6 = (*(s32 *)((char *)(D_800CC284) + 0x0)) & 0x10;
        if (temp_t6 != 0) {
            sp6C = 0.0f;
        }
        if ((*(s32 *)((char *)(arg0) + 0x13C)) != 0) {
            if (temp_t6 == 0) {
                (*(f32 *)((char *)(arg0) + 0x18)) = (f32) ((*(f32 *)((char *)(arg0) + 0x18)) - (16.0f * ((*(f32 *)((D_800D1550))))));
            }
        } else {
            var_f2_2 = 1000.0f;
            var_a1 = &gObjects;
            var_v1 = 0;
            do {
                if (((*(s32 *)((char *)(var_a1) + 0x0)) != 0) && ((*(s32 *)((char *)(var_a1) + 0x1CA)) != 0) && ((*(s32 *)((char *)(var_a1) + 0x28)) == 0.0f) && ((*(s32 *)((char *)(var_a1) + 0x232)) != 0x21) && ((temp_v0_3 = (*(s32 *)((char *)(var_a1) + 0x4)), (temp_v0_3 == 0x9C)) || (temp_v0_3 == 0x9D))) {
                    sp50 = var_v1;
                    sp34 = var_a1;
                    sp48 = var_f2_2;
                    temp_f0 = func_1505A6F8(gCurrentObject, var_a1);
                    temp_cond = temp_f0 < var_f2_2;
                    if (temp_cond) {
                        (*(s8 *)((char *)(arg0) + 0x222)) = (s8) var_v1;
                        var_f2_2 = temp_f0;
                    }
                }
                var_v1 += 1;
                var_a1 = (char *)(var_a1) + 0x32C;
            } while (var_v1 != 0x19);
        }
        if (sp6C < -90.0f) {
            sp6C = -90.0f;
        }
        if (sp6C > 90.0f) {
            sp6C = 90.0f;
        }
        if (D_800A198C < (*(s32 *)((char *)(arg0) + 0x18))) {
            temp_f2 = (*(s32 *)((char *)(arg0) + 0x20));
            if (temp_f2 > -30.0f) {
                (*(f32 *)((char *)(arg0) + 0x20)) = (f32) (temp_f2 - 1.5f);
            }
            sp6C = 40.0f;
        }
        temp_f0_2 = (*(s32 *)((char *)(arg0) + 0xC4));
        temp_f12 = (f32) (*(f32 *)((char *)(D_800CC284) + 0x2));
        (*(f32 *)((char *)(arg0) + 0xC4)) = (f32) (temp_f0_2 + ((temp_f12 - temp_f0_2) * (D_800A1990 * ((*(f32 *)((D_800D1550)))))));
        (*(s32 *)((char *)(arg0) + 0x7E)) = 0x19;
        temp_t9 = (*(s32 *)((char *)(arg0) + 0x76)) - (s32) ((*(s32 *)((char *)(arg0) + 0xC4)) * ((*(s32 *)((D_800D1550)))) * D_800A1994 * ((100.0f - sp68) * D_800A1998) * 220.0f);
        (*(s32 *)((char *)(arg0) + 0x76)) = temp_t9;
        func_150599C8(temp_f12, arg0, 8, temp_t9 & 0xFFFF);
        (*(s32 *)((char *)(arg0) + 0xC0)) = 0.0f;
        sp68 = 0.0f;
        var_f0 = D_800A199C;
        if ((*(s32 *)((char *)(arg0) + 0x18)) < (*(s32 *)((char *)(arg0) + 0x118))) {
            if ((*(s32 *)((char *)(arg0) + 0x86)) == 0) {
                (*(s32 *)((char *)(arg0) + 0x86)) = 1U;
                (*(s32 *)((char *)(arg0) + 0x3C)) = 0.0f;
                (*(s32 *)((char *)(arg0) + 0x20)) = -6.0f;
            }
        } else if ((*(s32 *)((char *)(arg0) + 0x86)) != 0) {
            (*(s32 *)((char *)(arg0) + 0x86)) = 0U;
            (*(s32 *)((char *)(arg0) + 0x20)) = 9.0f;
        }
        var_v0 = (*(s32 *)((char *)(D_800CC284) + 0x0));
        if (!(var_v0 & 0x10)) {
            if (var_v0 & 0x8000) {
                (*(s32 *)((char *)(arg0) + 0xC0)) = -22.0f;
                sp68 = 1.0f;
                var_f0 = D_800A19A0;
                var_v0 = (*(s32 *)((char *)(D_800CC284) + 0x0));
            }
            if (var_v0 & 0x4000) {
                temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x20));
                (*(s32 *)((char *)(arg0) + 0xC0)) = 30.0f;
                if (temp_f2_2 < 0.0f) {
                    (*(f32 *)((char *)(arg0) + 0xC0)) = (f32) ((*(f32 *)((char *)(arg0) + 0xC0)) - (temp_f2_2 * D_800A19A4));
                }
                sp68 = 1.5f;
                var_f0 = D_800A19A8;
            }
        }
        func_1505A3A8((*(s32 *)((char *)(arg0) + 0xC0)), 0x3FC00000, arg0, sp68, var_f0, 1);
        (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((f32) ((*(f32 *)((char *)(arg0) + 0x7A)) + 0x4000) * 0.005493164f);
        (*(f32 *)((char *)(arg0) + 0x24)) = (f32) (sp6C * D_800A19AC * (200.0f - (*(f32 *)((char *)(arg0) + 0x3C))));
        if ((*(s32 *)((char *)(arg0) + 0x13C)) == 0) {
            if ((*(s32 *)((char *)(arg0) + 0x20)) > 26.0f) {
                (*(s32 *)((char *)(arg0) + 0x20)) = 26.0f;
            }
            if ((*(s32 *)((char *)(arg0) + 0x20)) < -34.0f) {
                (*(s32 *)((char *)(arg0) + 0x20)) = -34.0f;
            }
        }
        temp_f0_3 = fabsf(sp6C * 0.5f);
        var_f12 = temp_f0_3;
        if ((*(s32 *)((char *)(arg0) + 0x86)) != 0) {
            var_f12 = temp_f0_3 * D_800A19B0;
            (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) * D_800A19B4);
        }
        temp_f0_4 = (*(s32 *)((char *)(arg0) + 0x24));
        temp_f2_3 = (*(s32 *)((char *)(arg0) + 0x20));
        if (temp_f0_4 == 0.0f) {
            if (fabsf(temp_f2_3) < 1.5f) {
                (*(s32 *)((char *)(arg0) + 0x20)) = 0.0f;
            } else if (temp_f2_3 > 0.0f) {
                (*(f32 *)((char *)(arg0) + 0x24)) = (f32) D_800A19B8;
            } else {
                (*(f32 *)((char *)(arg0) + 0x24)) = (f32) D_800A19BC;
            }
        } else {
            if (((var_f12 * D_800A19C0) < temp_f2_3) && (temp_f0_4 < 0.0f)) {
                goto block_80;
            }
            if ((temp_f2_3 < (-var_f12 * 1.5f)) && (temp_f0_4 > 0.0f)) {
block_80:
                (*(s32 *)((char *)(arg0) + 0x24)) = 0.0f;
            }
        }
        (*(s32 *)((char *)(arg0) + 0xAD)) = 0xA;
        if ((*(s32 *)((char *)(D_800CC284) + 0x0)) & 0x10) {
            temp_f0_5 = (*(s32 *)((char *)(arg0) + 0xB8));
            (*(s32 *)((char *)(arg0) + 0x20)) = 0.0f;
            (*(s32 *)((char *)(arg0) + 0x24)) = 0.0f;
            (*(f32 *)((char *)(arg0) + 0xB8)) = (f32) (temp_f0_5 + (((f32) (*(f32 *)((char *)(D_800CC284) + 0x3)) - temp_f0_5) * D_800A19C4));
        } else {
            temp_f0_6 = ((*(s32 *)((char *)(arg0) + 0x20)) - 0.0f) * -2.0f;
            (*(s32 *)((char *)(arg0) + 0xB8)) = temp_f0_6;
            if (temp_f0_6 > 40.0f) {
                (*(s32 *)((char *)(arg0) + 0xB8)) = 40.0f;
            } else if ((*(s32 *)((char *)(arg0) + 0xB8)) < -55.0f) {
                (*(s32 *)((char *)(arg0) + 0xB8)) = -55.0f;
            }
        }
        sp68 = (*(s32 *)((char *)(arg0) + 0x20));
        D_800CBDD3 = 1;
        func_15059140((*(void **)&var_f12), 0x3FC00000, arg0);
        D_800CBDD3 = 0;
        temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x13C));
        if ((temp_v1_2 != 0) && ((*(s32 *)((char *)(arg0) + 0x28)) < 50.0f)) {
            sp58 = 50.0f;
        }
        if (!((*(s32 *)((char *)(D_800CC284) + 0x0)) & 0x10)) {
            if ((D_800CC26D != 0) && (temp_v1_2 == 0)) {
                temp_a2 = &gObjects + (D_800CC26D * 0x32C) + 0xFFFE8000;
                if ((*(s32 *)((char *)(temp_a2) + 0x42F8)) == 0.0f) {
                    (*(s32 *)((char *)(arg0) + 0x20)) = 20.0f;
                    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_a2) + 0x42E8)) + 70.0f);
                    func_1505959C(&gObjects + (D_800CC26D * 0x32C) + 0xFFFEC2D0, gCurrentObjectIndex, temp_a2, &D_800CC26D);
                    (*(u8 *)((char *)(arg0) + 0x13C)) = (u8) D_800CC26D;
                    D_800D1580 = 0xFF010074;
                    func_1506E8D8();
                }
            }
            if ((*(s32 *)((char *)(arg0) + 0x13C)) != 0) {
                temp_a1 = (*(s32 *)((char *)(arg0) + 0x25C));
                temp_a0 = (*(s32 *)((char *)(arg0) + 0x13C)) - 0x64;
                if (temp_a1 & 2) {
                    (*(s32 *)((char *)(arg0) + 0x25C)) = (s32) (temp_a1 & ~2);
                    temp_v0_4 = &gObjects + (temp_a0 * 0x32C);
                    (*(s32 *)((char *)(temp_v0_4) + 0x13D)) = 0;
                    (*(s32 *)((char *)(temp_v0_4) + 0x232)) = 0x21;
                    (*(s32 *)((char *)(temp_v0_4) + 0x218)) = 0;
                    (*(s32 *)((char *)(temp_v0_4) + 0x104)) = 0;
                    (*(s32 *)((char *)(temp_v0_4) + 0xF8)) = (s32) ((*(s32 *)((char *)(temp_v0_4) + 0xF8)) & ~0x400);
                    (*(f32 *)((char *)(temp_v0_4) + 0x3C)) = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
                    (*(s32 *)((char *)(arg0) + 0x13C)) = 0U;
                    (*(s32 *)((char *)(arg0) + 0x20)) = 0.0f;
                    D_800D1580 = 0x76;
                    func_1506E8D8(temp_a0, temp_a1);
                }
            } else if ((D_800CC288 & 0x2000) && ((*(s32 *)((char *)(arg0) + 0x103)) == 0)) {
                var_v1_2 = 0;
                if (D_800BE9F0 == 0x3C) {
                    var_v0_2 = &D_800CC5FC;
                    do {
                        if (((*(s32 *)((char *)(var_v0_2) + 0x0)) != 0) && ((*(s32 *)((char *)(var_v0_2) + 0x4)) == 0x25)) {
                            var_v1_2 += 1;
                        }
                        var_v0_2 = (char *)(var_v0_2) + 0x32C;
                    } while ((char *)(var_v0_2) != (char *)(&D_800D121C));
                    if (var_v1_2 < 5) {
                        D_800D1580 = 6;
                        (*(s32 *)((char *)(arg0) + 0x103)) = 4U;
                        func_15073FA0(0x25, &D_800D121C);
                    }
                }
            }
        }
        if ((*(s32 *)((char *)(arg0) + 0x28)) <= sp58) {
            (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) * D_800A19C8);
            if (((*(s32 *)((char *)(D_800CC284) + 0x0)) & 0x4000) || ((*(s32 *)((char *)(arg0) + 0x86)) != 0) || ((*(s32 *)((char *)(arg0) + 0x13C)) != 0)) {
                if ((*(s32 *)((char *)(arg0) + 0x13C)) != 0) {
                    if ((*(s32 *)((char *)(arg0) + 0x20)) < -10.0f) {
                        D_800D1580 = 0xFF0100A7;
                        func_1506E5FC();
                        D_800D1580 = 0xFF060372;
                        func_1506E8D8();
                    }
                } else if ((*(s32 *)((char *)(arg0) + 0x18)) < 0.0f) {
                    D_800D1580 = 0xFF010072;
                    func_1506E8D8();
                }
                if ((*(s32 *)((char *)(arg0) + 0x13C)) == 0) {
                    (*(s32 *)((char *)(arg0) + 0x20)) = 20.0f;
                } else if ((*(s32 *)((char *)(arg0) + 0x86)) == 0) {
                    (*(s32 *)((char *)(arg0) + 0x20)) = 38.0f;
                }
                sp6C = -80.0f;
            } else {
                (*(s32 *)((char *)(arg0) + 0x102)) = 0U;
                (*(f32 *)((char *)(arg0) + 0x20)) = (f32) (sp68 * -1.0f);
                (*(s32 *)((char *)(arg0) + 0xB8)) = 0.0f;
                (*(f32 *)((char *)(arg0) + 0x28)) = (f32) D_800A19CC;
            }
        }
        if (!((*(s32 *)((char *)(D_800CC284) + 0x0)) & 0x10)) {
            (*(f32 *)((char *)(arg0) + 0xB8)) = (f32) ((*(f32 *)((char *)(arg0) + 0xB8)) + 20.0f);
        } else {
            (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0xB8)) * D_800A19D0);
        }
        if ((*(s32 *)((char *)(arg0) + 0x86)) != 0) {
            (*(s32 *)((char *)(arg0) + 0x83)) = 0;
            if ((fabsf(sp6C) > 8.0f) || ((*(s32 *)((char *)(arg0) + 0xC0)) > 7.0f)) {
                var_f2_3 = 1.0f;
            } else {
                var_f2_3 = 0.5f;
            }
        } else {
            var_f2_3 = func_150F34A0(arg0, sp6C);
        }
        var_v0_3 = 0xF;
        if (((*(s32 *)((char *)(arg0) + 0xB8)) > 40.0f) && (sp6C > 20.0f)) {
            var_v0_3 = 0x11;
        }
        temp_f0_7 = (*(s32 *)((char *)(arg0) + 0x3C));
        if ((temp_f0_7 < 20.0f) && ((*(s32 *)((char *)(arg0) + 0xC0)) <= 0.0f) && (sp6C == 0.0f)) {
            var_v0_3 = 0x18;
        }
        if (temp_f0_7 < 0.0f) {
            var_v0_3 = 0x1F;
        }
        if ((*(s32 *)((char *)(arg0) + 0x13C)) != 0) {
            var_v0_3 = 0x17;
            var_f2_3 += D_800A19D4;
        }
        func_1505E650(arg0, var_v0_3 & 0xFFFF, var_f2_3, 9.0f, 0.0f, 0.0f, 0);
    }
}

void func_150F43F0(void *arg0) {
    s32 temp_t0;

    if ((*(s32 *)((char *)(arg0) + 0x23E)) == 0x3B) {
        func_1509BFB0(0, 0x405C, 1);
        if (((*(s32 *)((char *)(arg0) + 0x2C)) != 0x100) && ((*(s32 *)((char *)(arg0) + 0x6C8)) == 0)) {
            if (func_15123934(arg0, 8, 0, 0, 0) != 0) {
                temp_t0 = (*(s32 *)((char *)(arg0) + 0x84)) | 0x300000;
                (*(s32 *)((char *)(arg0) + 0x84)) = temp_t0;
                (*(s32 *)((char *)(arg0) + 0x84)) = (s32) (temp_t0 & ~4);
                (*(s32 *)((char *)(arg0) + 0x1B4)) = 1;
                (*(s32 *)((char *)(arg0) + 0x1E0)) = 3;
                func_15124B18(arg0);
            }
            (*(s32 *)((char *)(arg0) + 0x134)) = 0;
            (*(s32 *)((char *)(arg0) + 0x348)) = 125.0f;
            (*(s32 *)((char *)(arg0) + 0x34C)) = 125.0f;
            (*(s32 *)((char *)(arg0) + 0x374)) = 220.0f;
            (*(s32 *)((char *)(arg0) + 0x190)) = 30.0f;
        } else {
            (*(s32 *)((char *)(arg0) + 0x190)) = 0.0f;
        }
    } else if (((*(s32 *)((char *)(arg0) + 0x2C)) == 8) && ((*(s32 *)((char *)(arg0) + 0x6C8)) == 0)) {
        func_151239CC(arg0, 0);
        func_1509BFB0(0, 0x405C, 0);
    }
    if ((func_1509BE40(1, 0x4054, 6, 0x9000) != 0) && (func_1509BE40(1, 0x405E, 6, 0x9000) == 0)) {
        (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) | 0x80000000);
        return;
    }
    (*(s32 *)((char *)(arg0) + 0x84)) = (s32) ((*(s32 *)((char *)(arg0) + 0x84)) & 0x7FFFFFFF);
}
