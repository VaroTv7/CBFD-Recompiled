/**
 * Auto-decompiled from asm/1F4650.s (non-matching)
 * Suggested renames applied: gGameState -> gGameState, gObjects -> gObjects
 * Object pool stride for gObjects is 812 (0x32C)
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_1000EC24(); /* extern */
void * func_1000FD38(s32 (*)(void *, void *, void *, void *, s16 *), void *, void *); /* extern */
s32 func_15046C80();            /* extern */
void func_1504715C();                     /* extern */
void * func_1505D024();                 /* extern */
void * func_1507C3E0();                   /* extern */
void * func_150A7960(); /* extern */
s32 func_150AC9C0(); /* extern */
u32 random_u32();                             /* extern */
f32 random_float();               /* extern */
void * func_150BDE90();                  /* extern */
void * func_150E7FEC(); /* extern */
void * func_150E83AC();                /* extern */
void func_1510F800();                                 /* extern */
void *func_15132A4C(); /* extern */
void * func_15133760();                    /* extern */
void * func_15136C3C(); /* extern */
s32 func_151407D0(); /* extern */
void * func_1514373C();             /* extern */
void *func_15144B34();                           /* extern */
s32 func_15144E80();              /* extern */
s32 func_15145128(); /* extern */
s32 func_151451F0(); /* extern */
void * func_15145548(); /* extern */
void * func_15145974();         /* extern */
void * func_1514FBFC();             /* extern */
void * func_151541B8(); /* extern */
s32 func_1515548C(); /* extern */
void * func_1515572C();                     /* extern */
s32 func_1515FF74();                   /* extern */
void * func_15160274();                     /* extern */
void * func_151602C0(); /* extern */
s32 func_1516284C(); /* extern */
void * func_15164F0C();                 /* extern */
s32 func_151A4FD0();  /* extern */
void * func_151A561C();                          /* extern */
void * func_151ABE40();          /* extern */
void * func_151D3FF4();                   /* extern */
void * func_151D5334();     /* extern */
void * func_151D5514();                   /* extern */
void * func_151D5D60();     /* extern */
void * func_151D8868();                     /* extern */
void * memcpy();                          /* extern */
f32 *func_151C756C(void * *arg0, void * *arg1, void * *arg2, void * *arg3, void *arg4, s32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, s16 arg10, s16 arg11, s16 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, f32 arg19, f32 arg20, u8 arg21, u8 arg22, s32 arg23);
s32 func_151C87AC();
s32 func_151C87E0(); /* static */
void func_151C899C(); /* static */
s32 func_151C8FCC();
void func_151C9198();
void func_151C9AC0();
void func_151C9F38();
void func_151CB5FC();
f32 func_151CC1D4();                      /* static */
void func_151CC524();
void func_151CC840();
void func_151CCF08();
extern s32 D_8008FC10;
extern s32 D_8008FC28;
extern s32 D_800AAC30;
extern f32 D_800AAC3C;
extern f32 D_800AAC40;
extern f32 D_800AAC44;
extern f32 D_800AAC48;
extern f32 D_800AAC4C;
extern f32 D_800AAC50;
extern f32 D_800AAC54;
extern f32 D_800AAC58;
extern f32 D_800AAC5C;
extern f32 D_800AAC60;
extern f32 D_800AAC64;
extern f32 D_800AAC68;
extern f32 D_800AAC6C;
extern f32 D_800AAC70;
extern f32 D_800AAC74;
extern f32 D_800AAC78;
extern f32 *D_800AAC7C;
extern s32 D_800AAC80;
extern s32 D_800AAC90;
extern s32 D_800AACE0;
extern s32 D_800AAD30;
extern s32 D_800AAD44;
extern s32 D_800AAD58;
extern s32 D_800AAD6C;
extern s32 D_800AAD84;
extern s32 D_800AAD8C;
extern s32 D_800AAD94;
extern s32 D_800AADAC;
extern s32 D_800AADB4;
extern f32 D_800AAE88;
extern f32 D_800AAE8C;
extern f32 D_800AAE90;
extern f32 D_800AAE94;
extern f32 D_800AAE98;
extern f32 D_800AAE9C;
extern f32 D_800AAEA0;
extern f32 D_800AAEA4;
extern f32 D_800AAEA8;
extern f32 D_800AAEAC;
extern f32 D_800AAEB0;
extern f32 D_800AAEB4;
extern f32 D_800AAEB8;
extern f32 D_800AAEBC;
extern f32 D_800AAEC0;
extern f32 D_800AAEC4;
extern f32 D_800AAEC8;
extern f32 D_800AAECC;
extern f32 D_800AAED0;
extern f32 D_800AAED4;
extern f32 D_800AAED8;
extern u8 D_800BEAC2;

s32 func_151C71A0(void *arg0) {
    f32 sp17C;
    f32 sp178;
    f32 sp174;
    f32 sp170;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    void * sp104;
    s32 sp100;
    void * spE8;
    void * spD4;
    void * spD0;
    void * spCC;
    void * spC8;
    void * spC4;
    void * spC0;
    void * spBC;
    void * spB8;
    void * spB4;
    void * spB0;
    void * spAC;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 var_f6;
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_t7;

    if ((*(s32 *)((char *)(arg0) + 0x14)) == 1) {

    } else {
        sp174 = (f32) (*(f32 *)((char *)(arg0) + 0x0));
        sp178 = (f32) (*(f32 *)((char *)(arg0) + 0x2));
        sp17C = (f32) (*(f32 *)((char *)(arg0) + 0x4));
        func_150A8050(&sp104, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x10)), 0);
        func_150A7960(&sp104, 0, (f32) (*(f32 *)((char *)(arg0) + 0x8)), 0, &sp168, &sp16C, &sp170);
        temp_f18 = sp168 + sp174;
        temp_f10 = sp16C + sp178;
        sp74 = temp_f18;
        temp_f6 = sp170 + sp17C;
        sp70 = sp174;
        sp78 = sp178;
        temp_f2 = sp74 - sp174;
        sp74 = temp_f10;
        temp_f0 = sp74;
        sp74 = sp17C;
        temp_f0_2 = temp_f0 - sp178;
        sp168 = temp_f18;
        temp_f18_2 = temp_f6 - sp17C;
        sp16C = temp_f10;
        sp170 = temp_f6;
        sp15C = temp_f2;
        sp160 = temp_f0_2;
        temp_f14 = (temp_f0_2 * 0.5f) + sp178;
        temp_f12 = (temp_f2 * 0.5f) + sp174;
        sp164 = temp_f18_2;
        sp148 = temp_f14;
        temp_f4 = (temp_f18_2 * 0.5f) + sp17C;
        sp144 = temp_f12;
        sp14C = temp_f4;
        sp100 = func_150AC9C0(temp_f12, temp_f14, temp_f4, -temp_f2, -temp_f0_2, -temp_f18_2, 0, &spE8, &spC8, &spCC, &spD0, &spB8, &spB0, 0, 0.0f);
        temp_v0 = func_150AC9C0(sp144, sp148, sp14C, sp15C, sp160, sp164, 0, &spD4, &spBC, &spC0, &spC4, &spB4, &spAC, 0, 0.0f);
        if ((sp100 == 0) || (temp_v0 == 0)) {

        } else {
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x18));
            if (((u32) (temp_v0_2 & 0x40000000) >> 0x1E) != 0) {

            }
            temp_t7 = (u32) ((*(u32 *)((char *)(arg0) + 0x20)) & 0xFF00) >> 8;
            var_f6 = (f32) temp_t7;
            if ((s32) temp_t7 < 0) {
                var_f6 += 4294967296.0f;
            }
            func_151C756C(&spC8, &spE8, &spBC, &spD4, (void *)(s32)(var_f6 * D_800AAC3C), ((u32) (temp_v0_2 & 0x80000000) >> 0x1F) == 0, 0xFFU, 1U, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        }
    }
    return 1;
}

f32 *func_151C756C(void * *arg0, void * *arg1, void * *arg2, void * *arg3, void *arg4, s32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, s16 arg10, s16 arg11, s16 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, f32 arg19, f32 arg20, u8 arg21, u8 arg22, s32 arg23) {
    s32 unkspDA;
    s32 unkspDE;
    s32 unkspE2;
    f32 *sp1DC;
    s8 sp1CB;
    s8 sp1CA;
    s8 sp1C9;
    s8 sp1C8;
    s32 sp1C4;
    f32 sp1C0;
    f32 sp1BC;
    f32 sp1B8;
    void * sp1AC;
    void * sp1A0;
    f32 sp19C;
    f32 sp198;
    s8 sp197;
    u8 sp196;
    u8 sp195;
    u8 sp194;
    s32 sp190;
    s32 sp18C;
    s16 sp188;
    s16 sp186;
    s8 sp185;
    s8 sp184;
    f32 sp180;
    f32 sp17C;
    u8 sp178;
    s32 sp174;
    s32 sp170;
    void *sp16C;
    s8 sp16A;
    s16 sp168;
    s16 sp166;
    s16 sp164;
    s16 sp162;
    void * sp150;
    void * sp13E;
    s8 sp13C;
    f32 sp138;
    void *sp12C;
    void *sp120;
    s32 sp110;
    s32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s8 spC8;
    s16 spC6;
    s8 spC5;
    s8 spC4;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 *sp64;
    s32 sp60;
    s32 sp5C;                                       /* compiler-managed */
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 *temp_a0;
    f32 *temp_v0_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 temp_t7;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    f32 sp124;
    f32 sp128;
    f32 sp130;
    f32 sp134;
    f32 spB8;
    f32 spBC;
    func_1510F800(0);
    sp170 = func_1510FD20((s32) (*(s32 *)((char *)(arg0) + 0x0)), (s32) (*(s32 *)((char *)(arg0) + 0x8)));
    temp_v0 = func_1510FD20((s32) (*(s32 *)((char *)(arg2) + 0x0)), (s32) (*(s32 *)((char *)(arg2) + 0x8)));
    sp174 = temp_v0;
    if ((sp170 == 0) || (temp_v0 == 0)) {
        return NULL;
    }
    sp16C = arg4;
    if (arg18 != 0) {
        var_a2 = 8;
    } else {
        var_a2 = 0;
    }
    if (arg15 != 0) {
        var_a1 = 4;
    } else {
        var_a1 = 0;
    }
    if (arg14 != 0) {
        var_v1 = 0;
    } else {
        var_v1 = 2;
    }
    if (arg13 != 0) {
        var_a0 = 1;
    } else {
        var_a0 = 0;
    }
    if (arg21 != 0) {
        var_v0 = 0x10;
    } else {
        var_v0 = 0;
    }
    sp16A = var_v0 | var_a0 | var_v1 | var_a1 | var_a2;
    if (arg21 == 0) {
        (*(s32 *)((char *)(arg4) + 0x14)) = 1;
    }
    sp17C = arg19;
    sp180 = arg20;
    sp178 = arg17;
    (*(s32 *)((char *)&(sp13E) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp13E) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp13E) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    (*(s32 *)((char *)&(sp13E) + 0xC)) = (s32) (*(s32 *)((char *)(arg1) + 0xC));
    (*(u16 *)((char *)&(sp13E) + 0x10)) = (u16) (*(u16 *)((char *)(arg1) + 0x10));
    (*(s32 *)((char *)&(sp150) + 0x0)) = (s32) (*(s32 *)((char *)(arg3) + 0x0));
    (*(s32 *)((char *)&(sp150) + 0x4)) = (s32) (*(s32 *)((char *)(arg3) + 0x4));
    (*(s32 *)((char *)&(sp150) + 0x8)) = (s32) (*(s32 *)((char *)(arg3) + 0x8));
    (*(s32 *)((char *)&(sp150) + 0xC)) = (s32) (*(s32 *)((char *)(arg3) + 0xC));
    (*(u16 *)((char *)&(sp150) + 0x10)) = (u16) (*(u16 *)((char *)(arg3) + 0x10));
    sp168 = arg10 + arg11;
    sp162 = arg10;
    sp164 = arg11;
    sp166 = arg12;
    temp_f2 = (random_float(var_a0, var_a1, var_a2, arg21) * 1024.0f) + -2560.0f + 2048.0f;
    spE4 = temp_f2;
    spEC = temp_f2;
    temp_f2_2 = (random_float() * 1024.0f) + 1536.0f + 2048.0f;
    spE8 = temp_f2_2;
    spF0 = temp_f2_2;
    spF4 = (random_float() * 768.0f) + 768.0f;
    spF8 = (random_float() * 768.0f) + 768.0f;
    spFC = random_float() * D_800AAC40;
    sp100 = random_float() * D_800AAC44;
    sp104 = ((random_float() * 80.0f) + 50.0f) * D_800AAC48;
    sp108 = ((random_float() * 80.0f) + 50.0f) * D_800AAC4C;
    sp1B8 = (*(s32 *)((char *)(arg2) + 0x0)) - (*(s32 *)((char *)(arg0) + 0x0));
    temp_t7 = ((s32) arg6 < (s32) arg8) & 0xFF;
    sp1BC = (*(s32 *)((char *)(arg2) + 0x4)) - (*(s32 *)((char *)(arg0) + 0x4));
    sp5C = temp_t7;
    sp1C0 = (*(s32 *)((char *)(arg2) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x8));
    spCC = -sp1B8;
    spD0 = -sp1BC;
    spD4 = -sp1C0;
    sp64 = (f32 *) arg6;
    sp60 = (s32) arg8;
    func_151C9198(&sp120, arg0, arg1, &spCC, sp170, temp_t7, (s32) arg15, (s32) arg22, 0);
    func_151C9198(&sp12C, arg2, arg3, &sp1B8, sp174, sp5C, (s32) arg15, (s32) arg22, 0);
    if ((sp120 == NULL) || (sp124 == NULL) || (sp128 == NULL) || (sp12C == NULL) || (sp130 == NULL) || (sp134 == NULL)) {
        if (sp120 != NULL) {
            func_1516972C(sp120);
        }
        if (sp124 != NULL) {
            func_1516972C(sp124);
        }
        if (sp128 != NULL) {
            func_1516972C(sp128);
        }
        if (sp12C != NULL) {
            func_1516972C(sp12C);
        }
        if (sp130 != NULL) {
            func_1516972C(sp130);
        }
        if (sp134 != NULL) {
            func_1516972C(sp134);
        }
        return NULL;
    }
    sp13C = 0;
    sp138 = 0.0f;
    sp10C = arg5;
    if (arg9 != 0) {
        spD8 = (s32) ((*(s32 *)((char *)(arg0) + 0x0)) + (sp1B8 * 0.5f));
        spDC = (s32) ((*(s32 *)((char *)(arg0) + 0x4)) + (sp1BC * 0.5f));
        spC4 = 2;
        spC5 = 2;
        spC6 = 0x12C;
        spC8 = 0;
        spE0 = (s32) ((*(s32 *)((char *)(arg0) + 0x8)) + (sp1C0 * 0.5f));
        sp110 = func_1516284C(&spC4, &spD8, sp64, arg7, sp60, 0xFF, 0, 0, 0x10, (s32) arg22, arg23);
    } else {
        sp110 = 0;
    }
    sp185 = 6;
    sp184 = 0x59;
    sp186 = 0x5A03;
    sp188 = 0x12C;
    sp18C = 0;
    sp190 = 0;
    sp197 = 0xFF;
    sp194 = arg6;
    sp195 = arg7;
    sp196 = arg8;
    sp198 = 0.0f;
    sp19C = 20.0f;
    (*(f32 *)((char *)&(sp1A0) + 0x0)) = (f32) (*(f32 *)((char *)(arg0) + 0x0));
    var_v0_2 = 0x02000000;
    (*(f32 *)((char *)&(sp1A0) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x4));
    (*(f32 *)((char *)&(sp1A0) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x8));
    (*(f32 *)((char *)&(sp1AC) + 0x0)) = (f32) (*(f32 *)((char *)(arg2) + 0x0));
    (*(f32 *)((char *)&(sp1AC) + 0x4)) = (f32) (*(f32 *)((char *)(arg2) + 0x4));
    (*(f32 *)((char *)&(sp1AC) + 0x8)) = (f32) (*(f32 *)((char *)(arg2) + 0x8));
    if (D_800BE9F0 == 0x36) {
        var_v0_2 = 0;
    }
    sp1C4 = var_v0_2 | 0x6C0000 | 0x40000000;
    sp1C8 = 0xFF;
    sp1C9 = 0xFF;
    sp1CA = 0;
    sp1CB = 6;
    temp_v0_2 = func_1513D4B8(&sp184, &D_800A4AA0, 0x1A, 0, 0, 0x18, 0, 0xA0, (s32) arg22, arg23);
    sp1DC = temp_v0_2;
    if (temp_v0_2 != NULL) {
        temp_a0 = temp_v0_2 + 0x110;
        sp64 = temp_a0;
        memcpy(temp_a0, &spE4, 0xA0);
        (*(s32 *)((char *)&(spB4) + 0x0)) = (*(s32 *)((char *)&(sp1B8) + 0x0));
        (*(s32 *)((char *)&(spB4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp1B8) + 0x4));
        (*(s32 *)((char *)&(spB4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp1B8) + 0x8));
        if ((func_15145128(&spB4, &spB4, &spB0, &spAC) != 0) && (arg16 != 0)) {
            temp_f0 = spB4 * 20.0f;
            temp_f6 = (*(s32 *)((char *)(arg0) + 0x0)) + temp_f0;
            temp_f2_3 = spB8 * 20.0f;
            spA0 = temp_f6;
            sp3C = temp_f6;
            sp38 = spB4;
            temp_f8 = (*(s32 *)((char *)(arg0) + 0x4)) + temp_f2_3;
            temp_f12 = spBC * 20.0f;
            spA4 = temp_f8;
            sp40 = spB8;
            temp_f6_2 = (*(s32 *)((char *)(arg0) + 0x8)) + temp_f12;
            temp_f14 = sp38 * 500.0f;
            spA8 = temp_f6_2;
            sp94 = temp_f14 + sp3C;
            temp_f18 = spB8 * 500.0f;
            temp_f8_2 = spBC * 500.0f;
            sp98 = temp_f18 + temp_f8;
            sp5C = temp_f8_2;
            sp9C = temp_f8_2 + temp_f6_2;
            sp88 = (*(s32 *)((char *)(arg2) + 0x0)) - temp_f0;
            sp8C = (*(s32 *)((char *)(arg2) + 0x4)) - temp_f2_3;
            sp90 = (*(s32 *)((char *)(arg2) + 0x8)) - temp_f12;
            sp7C = sp88 - temp_f14;
            sp80 = sp8C - temp_f18;
            sp84 = sp90 - temp_f8_2;
            (*(s32 *)((char *)(sp64) + 0x34)) = func_151C8FCC(temp_f12, temp_f14, sp1DC, &spA0, &sp94, arg6, (s32) arg7, (s32) arg8, sp170, (s32) arg15, (s32) arg22, arg23);
            (*(f32 *)((char *)(sp64) + 0x38)) = func_151C8FCC((s32)(sp1DC), (f32)(s32)&sp88, &sp7C, (f32 *) arg6, (f32 *) arg7, (u8) (s32) arg8, sp174, (s32) arg15, (s32) arg22, arg23);
        } else {
            (*(s32 *)((char *)(sp64) + 0x34)) = 0;
            (*(s32 *)((char *)(sp64) + 0x38)) = 0;
        }
        if ((*(s32 *)((char *)(sp64) + 0x2C)) != 0) {
            func_1000FA64(0x4D0, unkspDA, unkspDE, unkspE2, 0x1F40, 0xFA, 0x64, func_151C87AC, sp64, 0, 8, random_u32() & 0xFF);
        }
    }
    return sp1DC;
}

void *func_151C7E98(void *arg0, s32 arg1) {
    void *sp84;
    void *sp80;
    void *sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp64;
    f32 sp48;
    u8 sp43;
    void *sp38;
    void *sp34;
    f32 *sp30;                                      /* compiler-managed */
    f32 sp2C;
    f32 *temp_a1_2;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f4;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    s16 temp_a1;
    s32 temp_v0;
    void *temp_a2;
    void *temp_t0;
    void *temp_t1;
    void *temp_t3;
    void *temp_t6;
    void *temp_v0_2;
    void *temp_v1;

    f32 sp68;
    f32 sp6C;
    temp_a1 = arg1;
    temp_t0 = (char *)(arg0) + 0x110;
    if (!((*(s32 *)((char *)(arg0) + 0x196)) & 2)) {
        return NULL;
    }
    if ((*(s32 *)((char *)(temp_t0) + 0x86)) & 4) {
        temp_v0 = 1 << temp_a1;
        if (!((*(s32 *)((char *)((*(s32 *)((char *)(temp_t0) + 0x8C))) + 0x2)) & temp_v0) && !((*(s32 *)((char *)((*(s32 *)((char *)(temp_t0) + 0x90))) + 0x2)) & temp_v0)) {
            return NULL;
        }
    }
    arg1 = temp_a1;
    sp38 = temp_t0;
    func_151D5D60((char *)(arg0) + 0x100, temp_a1, 0x40, &sp84, &sp43);
    sp80 = sp84;
    if (sp84 != NULL) {
        if (sp43 != 0) {
            temp_v1 = (char *)(arg0) + (arg1 * 4);
            temp_a1_2 = (char *)(arg0) + 0xC0;
            sp30 = temp_a1_2;
            sp34 = temp_v1;
            memcpy((*(s32 *)((char *)(temp_v1) + 0x100)), temp_a1_2, 0x40);
            memcpy((*(s32 *)((char *)(temp_v1) + 0x100)) + 0x40, temp_a1_2, 0x40);
        }
        temp_v0_2 = func_15144B34(arg1);
        temp_a2 = temp_v0_2;
        sp70 = (*(s32 *)((char *)(arg0) + 0x40)) - (*(s32 *)((char *)(arg0) + 0x34));
        sp74 = (*(s32 *)((char *)(arg0) + 0x44)) - (*(s32 *)((char *)(arg0) + 0x38));
        sp7C = temp_v0_2;
        sp78 = (*(s32 *)((char *)(arg0) + 0x48)) - (*(s32 *)((char *)(arg0) + 0x3C));
        func_15145548((char *)(arg0) + 0x34, &sp70, temp_a2, &sp64, 0);
        temp_f0 = sp64 - (*(s32 *)((char *)(sp7C) + 0x0));
        temp_f2 = sp68 - (*(s32 *)((char *)(sp7C) + 0x4));
        temp_f12 = sp6C - (*(s32 *)((char *)(sp7C) + 0x8));
        temp_f18 = (sp74 * temp_f12) - (temp_f2 * sp78);
        temp_f4 = (sp78 * temp_f0) - (temp_f12 * sp70);
        (*(void **)&(sp30)) = (*(void **)&(temp_f4));
        temp_f10 = (sp70 * temp_f2) - (temp_f0 * sp74);
        sp2C = temp_f10;
        temp_f14 = (temp_f18 * temp_f18) + (temp_f4 * temp_f4) + (temp_f10 * temp_f10);
        sp48 = temp_f14;
        if (temp_f14 == 0.0f) {
            var_f12 = 0.0f;
            var_f14 = 0.0f;
            var_f16 = 0.0f;
        } else {
            temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x30)) / sqrtf(sp48);
            var_f12 = temp_f18 * temp_f2_2;
            var_f14 = (*(f32 *)&(sp30)) * temp_f2_2;
            var_f16 = sp2C * temp_f2_2;
        }
        (*(s16 *)((char *)(sp84) + 0x0)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x40)) - var_f12);
        (*(s16 *)((char *)(sp84) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x44)) - var_f14);
        (*(s16 *)((char *)(sp84) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x48)) - var_f16);
        (*(s16 *)((char *)(sp84) + 0x8)) = (s16) (s32) (*(s16 *)((char *)(sp38) + 0x0));
        (*(s32 *)((char *)(sp84) + 0x6)) = 0;
        temp_t1 = (char *)(sp84) + 0x10;
        sp84 = temp_t1;
        (*(s16 *)((char *)(sp84) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) - var_f12);
        (*(s16 *)((char *)(sp84) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) - var_f14);
        (*(s16 *)((char *)(sp84) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - var_f16);
        (*(s16 *)((char *)(temp_t1) + 0x8)) = (s16) (s32) (*(s16 *)((char *)(sp38) + 0x4));
        (*(s32 *)((char *)(sp84) + 0x6)) = 0;
        temp_t6 = (char *)(sp84) + 0x10;
        sp84 = temp_t6;
        (*(s16 *)((char *)(sp84) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) + var_f12);
        (*(s16 *)((char *)(sp84) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) + var_f14);
        (*(s16 *)((char *)(sp84) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) + var_f16);
        (*(s16 *)((char *)(temp_t6) + 0x8)) = (s16) (s32) (*(s16 *)((char *)(sp38) + 0x4));
        (*(s32 *)((char *)(sp84) + 0x6)) = 0;
        temp_t3 = (char *)(sp84) + 0x10;
        sp84 = temp_t3;
        (*(s16 *)((char *)(sp84) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x40)) + var_f12);
        (*(s16 *)((char *)(sp84) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x44)) + var_f14);
        (*(s16 *)((char *)(sp84) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x48)) + var_f16);
        (*(s16 *)((char *)(temp_t3) + 0x8)) = (s16) (s32) (*(s16 *)((char *)(sp38) + 0x0));
        (*(s32 *)((char *)(sp84) + 0x6)) = 0;
        return sp80;
    }
    return NULL;
}

s32 func_151C82D0(void *arg0) {
    s16 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_s0 = (char *)(arg0) + 0x110;
    if ((*(s32 *)((char *)(arg0) + 0x196)) & 1) {
        temp_v1 = (*(s32 *)((char *)(temp_s0) + 0x84));
        (*(s16 *)((char *)(temp_s0) + 0x82)) = (s16) ((*(s16 *)((char *)(temp_s0) + 0x82)) + D_800BE9E4);
        if ((*(s32 *)((char *)(temp_s0) + 0x82)) >= temp_v1) {
            do {
                (*(s16 *)((char *)(temp_s0) + 0x82)) = (s16) ((*(s16 *)((char *)(temp_s0) + 0x82)) - temp_v1);
            } while ((*(s32 *)((char *)(temp_s0) + 0x82)) >= temp_v1);
        }
        if ((*(s32 *)((char *)(temp_s0) + 0x82)) < (*(s32 *)((char *)(temp_s0) + 0x7E))) {
            (*(u8 *)((char *)(temp_s0) + 0x86)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0x86)) | 2);
        } else {
            (*(u8 *)((char *)(temp_s0) + 0x86)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0x86)) & 0xFFFD);
        }
    }
    temp_s0_2 = (char *)(arg0) + 0x110;
    if ((*(s32 *)((char *)(arg0) + 0x196)) & 2) {
        (*(f32 *)((char *)(temp_s0_2) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x18)) + ((*(f32 *)((char *)(temp_s0_2) + 0x20)) * D_800BE9A4));
        (*(f32 *)((char *)(temp_s0_2) + 0x1C)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x1C)) + ((*(f32 *)((char *)(temp_s0_2) + 0x24)) * D_800BE9A4));
        (*(s32 *)((char *)(temp_s0_2) + 0x18)) = func_15144B68((*(s32 *)((char *)(temp_s0_2) + 0x18)));
        (*(s32 *)((char *)(temp_s0_2) + 0x1C)) = func_15144B68((*(s32 *)((char *)(temp_s0_2) + 0x1C)));
        (*(f32 *)((char *)(arg0) + 0x110)) = (f32) ((func_150AD78C((*(f32 *)((char *)(temp_s0_2) + 0x18))) * (*(f32 *)((char *)(temp_s0_2) + 0x10))) + (*(f32 *)((char *)(temp_s0_2) + 0x8)));
        temp_v0 = (*(s32 *)((char *)(temp_s0_2) + 0x2C));
        (*(f32 *)((char *)(temp_s0_2) + 0x4)) = (f32) ((func_150AD78C((*(f32 *)((char *)(temp_s0_2) + 0x1C))) * (*(f32 *)((char *)(temp_s0_2) + 0x14))) + (*(f32 *)((char *)(temp_s0_2) + 0xC)));
        if (temp_v0 != NULL) {
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x14))) + 0x9)) = 0;
        }
        temp_v0_2 = (*(s32 *)((char *)(temp_s0_2) + 0x88));
        if ((temp_v0_2 != NULL) && ((*(s32 *)((char *)(temp_s0_2) + 0x86)) & 0x10)) {
            (*(s32 *)((char *)(temp_v0_2) + 0x14)) = 0;
        }
    } else {
        temp_v0_3 = (*(s32 *)((char *)(temp_s0_2) + 0x2C));
        if (temp_v0_3 != NULL) {
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_3) + 0x14))) + 0x9)) = 1;
        }
        temp_v0_4 = (*(s32 *)((char *)(temp_s0_2) + 0x88));
        if (temp_v0_4 != NULL) {
            (*(s32 *)((char *)(temp_v0_4) + 0x14)) = 1;
        }
    }
    (*(f32 *)((char *)(temp_s0_2) + 0x54)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x54)) + (D_800AAC50 * D_800BE9A4));
    if ((*(s32 *)((char *)(temp_s0_2) + 0x54)) > 1.0f) {
        do {
            if ((*(s32 *)((char *)(temp_s0_2) + 0x86)) & 2) {
                (*(u8 *)((char *)(temp_s0_2) + 0x58)) = (u8) ((*(u8 *)((char *)(temp_s0_2) + 0x58)) ^ 1);
            }
            (*(f32 *)((char *)(temp_s0_2) + 0x54)) = (f32) ((*(f32 *)((char *)(temp_s0_2) + 0x54)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0_2) + 0x54)) > 1.0f);
    }
    if ((*(s32 *)((char *)(temp_s0_2) + 0x58)) != 0) {
        temp_v0_5 = (*(s32 *)((char *)(temp_s0_2) + 0x40));
        (*(s32 *)((char *)(temp_v0_5) + 0x60)) = (s32) ((*(s32 *)((char *)(temp_v0_5) + 0x60)) & 0xFFFDFFFF);
        temp_v1_2 = (*(s32 *)((char *)(temp_s0_2) + 0x44));
        (*(s32 *)((char *)(temp_v1_2) + 0x60)) = (s32) ((*(s32 *)((char *)(temp_v1_2) + 0x60)) | 0x20000);
        temp_a0 = (*(s32 *)((char *)(temp_s0_2) + 0x4C));
        (*(s32 *)((char *)(temp_a0) + 0x60)) = (s32) ((*(s32 *)((char *)(temp_a0) + 0x60)) & 0xFFFDFFFF);
        temp_a1 = (*(s32 *)((char *)(temp_s0_2) + 0x50));
        (*(s32 *)((char *)(temp_a1) + 0x60)) = (s32) ((*(s32 *)((char *)(temp_a1) + 0x60)) | 0x20000);
    } else {
        temp_v0_6 = (*(s32 *)((char *)(temp_s0_2) + 0x40));
        (*(s32 *)((char *)(temp_v0_6) + 0x60)) = (s32) ((*(s32 *)((char *)(temp_v0_6) + 0x60)) | 0x20000);
        temp_v1_3 = (*(s32 *)((char *)(temp_s0_2) + 0x44));
        (*(s32 *)((char *)(temp_v1_3) + 0x60)) = (s32) ((*(s32 *)((char *)(temp_v1_3) + 0x60)) & 0xFFFDFFFF);
        temp_a0_2 = (*(s32 *)((char *)(temp_s0_2) + 0x4C));
        (*(s32 *)((char *)(temp_a0_2) + 0x60)) = (s32) ((*(s32 *)((char *)(temp_a0_2) + 0x60)) | 0x20000);
        temp_a1_2 = (*(s32 *)((char *)(temp_s0_2) + 0x50));
        (*(s32 *)((char *)(temp_a1_2) + 0x60)) = (s32) ((*(s32 *)((char *)(temp_a1_2) + 0x60)) & 0xFFFDFFFF);
    }
    if ((*(s32 *)((char *)(temp_s0_2) + 0x86)) & 8) {
        (*(s8 *)((char *)(arg0) + 0x5C)) = (s8) (u32) ((func_150AD78C((*(f32 *)((char *)(temp_s0_2) + 0x98))) * 112.5f) + D_800AAC54);
        (*(s32 *)((char *)(temp_s0_2) + 0x98)) = func_15144B68((*(s32 *)((char *)(temp_s0_2) + 0x98)) + ((*(s32 *)((char *)(temp_s0_2) + 0x9C)) * D_800BE9A4));
    }
    return 1;
}

void func_151C8674(s32 arg0, s32 arg1) {
    s32 sp1C;
    s32 sp18;

    if (arg0 != 0) {
        sp18 = arg0;
        sp1C = arg1;
        func_151403A8(&sp18, 0x20);
    }
}

void func_151C86AC(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;
    u8 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    temp_t6 = arg2 & 0xFF;
    switch (temp_t6) {                              /* switch 1; irregular */
    case 0x20:                                      /* switch 1 */
        temp_v0 = (char *)(arg0) + 0x110;
        if (((*(s32 *)((char *)(temp_v0) + 0x86)) & 0x10) && ((*(s32 *)((char *)(temp_v0) + 0x28)) == (s32) (*(s32 *)((char *)(arg1) + 0x4))) && (func_151C87E0((*(s32 *)((char *)(arg1) + 0x0)), arg0, temp_t6, arg1) != 0)) {
            func_151C899C((*(s32 *)((char *)(arg1) + 0x0)), arg0);
            return;
        }
        return;
    case 0x3A:                                      /* switch 1 */
        temp_v0_2 = (char *)(arg0) + 0x110;
        if ((*(s32 *)((char *)(arg0) + 0x138)) == (*(s32 *)((char *)(arg1) + 0x0))) {
            temp_v1 = (*(s32 *)((char *)(arg1) + 0x4));
            switch (temp_v1) {                      /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                (*(u8 *)((char *)(temp_v0_2) + 0x86)) = (u8) ((*(u8 *)((char *)(temp_v0_2) + 0x86)) | 2);
                return;
            case 1:                                 /* switch 2 */
                (*(u8 *)((char *)(temp_v0_2) + 0x86)) = (u8) ((*(u8 *)((char *)(temp_v0_2) + 0x86)) & 0xFFFD);
                return;
            case 2:                                 /* switch 2 */
                func_151C899C(NULL, arg0, temp_t6, arg1);
                break;
            }
        }
        break;
    }
}

s32 func_151C87AC(void *arg0, void * arg1, void * arg2, void * arg3, s16 *arg6) {
    if (!((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x18))) + 0x86)) & 2)) {
        *arg6 = 0;
    }
    return 0;
}

s32 func_151C87E0(void *arg0, void *arg1) {
    f32 spA8;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    void * sp60;
    void * sp54;
    void * sp50;
    void * sp4C;
    s16 sp4A;
    void * sp48;
    void * sp46;
    void * sp40;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f8;
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    if (((s32) temp_v0 < 0xBB) && (temp_v0 != 0xFF)) {
        spA8 = (f32) (*(f32 *)((char *)((*(&D_800D1C90 + (temp_v0 * 4)))) + 0x1A)) * (*(f32 *)((char *)(arg0) + 0x14C));
    } else {
        spA8 = 50.0f;
    }
    func_1507C3E0(&sp4A, &sp48, &sp46);
    temp_f18 = (f32) sp4A;
    if (temp_f18 == 0.0f) {
        goto block_10;
    }
    temp_f0 = temp_f18 * 0.5f;
    sp98 = (*(s32 *)((char *)(arg0) + 0x14));
    temp_f2 = spA8 / temp_f0;
    sp9C = (*(s32 *)((char *)(arg0) + 0x18)) + temp_f0;
    spA0 = (*(s32 *)((char *)(arg0) + 0x1C));
    temp_f4 = (*(s32 *)((char *)(arg1) + 0x34));
    sp88 = temp_f4;
    temp_f8 = (((*(s32 *)((char *)(arg1) + 0x38)) - sp9C) * temp_f2) + sp9C;
    sp8C = temp_f8;
    temp_f4_2 = (*(s32 *)((char *)(arg1) + 0x3C));
    sp90 = temp_f4_2;
    temp_f12 = (*(s32 *)((char *)(arg1) + 0x40));
    temp_f14 = (((*(s32 *)((char *)(arg1) + 0x44)) - sp9C) * temp_f2) + sp9C;
    sp70 = temp_f12 - temp_f4;
    sp74 = temp_f14 - temp_f8;
    sp78 = (*(s32 *)((char *)(arg1) + 0x48)) - temp_f4_2;
    if (func_15145128((*(f32 * *)&temp_f12), (*(f32 * *)&temp_f14), &sp70, &sp70, &sp6C, &sp40) == 0) {
        goto block_10;
    }
    if (func_151451F0(&sp88, &sp70, &sp98, spA8, sp6C, &sp60, &sp54, &sp50, &sp4C) != 0) {
        return 1;
    }
block_10:
    return 0;
}

void func_151C899C(void *arg0, void *arg1) {
    s8 spE8;
    s16 spE6;
    s16 spE4;
    s16 spE2;
    s16 spE0;
    s16 spDE;
    s16 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s32 spC8;
    s32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    void * spA0;
    s32 sp9C;
    s32 sp98;
    f32 sp94;
    void * sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s8 sp64;
    s16 sp62;
    s8 sp61;
    s8 sp60;
    s8 sp5E;
    s8 sp5D;
    s8 sp5C;
    s16 sp5A;
    s8 sp58;
    f32 sp50;
    void *sp4C;
    void * *sp48;
    void * *sp44;
    void *sp40;
    void * *temp_v0;
    void * *temp_v0_2;
    void *temp_a3;
    void *temp_v1;

    sp94 = D_800AAC58;
    spAC = D_800AAC5C;
    spB0 = D_800AAC60;
    spB4 = 30.0f;
    spB8 = 83.0f;
    sp98 = 5;
    sp9C = 3;
    spC4 = 5;
    spC8 = 4;
    spDC = 0x12;
    spDE = 9;
    spE0 = 0x64;
    spE2 = 0x64;
    spE4 = 0xC;
    spE6 = 0xF;
    spE8 = 0;
    temp_v0 = (char *)(arg1) + 0x34;
    spBC = 211.0f;
    spC0 = 150.0f;
    spCC = 21.0f;
    spD0 = D_800AAC64;
    spD4 = D_800AAC68;
    spD8 = D_800AAC6C;
    (*(f32 *)((char *)&(spA0) + 0x0)) = (f32) (*(f32 *)((char *)(arg1) + 0x34));
    (*(s32 *)((char *)&(spA0) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x4));
    (*(s32 *)((char *)&(spA0) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
    (*(s32 *)((char *)&(sp74) + 0x0)) = (*(s32 *)((char *)(arg1) + 0x4C));
    (*(f32 *)((char *)&(sp74) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x50));
    (*(f32 *)((char *)&(sp74) + 0x8)) = (f32) (*(f32 *)((char *)(arg1) + 0x54));
    (*(s32 *)((char *)&(sp80) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x16A));
    (*(s32 *)((char *)&(sp80) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x16E));
    (*(s32 *)((char *)&(sp80) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x172));
    (*(s32 *)((char *)&(sp80) + 0xC)) = (s32) (*(s32 *)((char *)(arg1) + 0x176));
    (*(u16 *)((char *)&(sp80) + 0x10)) = (u16) (*(u16 *)((char *)(arg1) + 0x17A));
    sp48 = temp_v0;
    func_1514FBFC(&sp74, (*(s32 *)((char *)(arg1) + 0xC)), (*(s32 *)((char *)(arg1) + 0x1)));
    temp_v0_2 = (char *)(arg1) + 0x40;
    temp_a3 = (char *)(arg1) + 0x110;
    (*(f32 *)((char *)&(spA0) + 0x0)) = (f32) (*(f32 *)((char *)(arg1) + 0x40));
    temp_v1 = (char *)(temp_a3) + 0x6C;
    (*(s32 *)((char *)&(spA0) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
    (*(s32 *)((char *)&(spA0) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
    sp74 = -(*(s32 *)((char *)(arg1) + 0x4C));
    sp78 = -(*(s32 *)((char *)(arg1) + 0x50));
    sp7C = -(*(s32 *)((char *)(arg1) + 0x54));
    (*(s32 *)((char *)&(sp80) + 0x0)) = (s32) (*(s32 *)((char *)(temp_a3) + 0x6C));
    (*(s32 *)((char *)&(sp80) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
    (*(s32 *)((char *)&(sp80) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
    (*(s32 *)((char *)&(sp80) + 0xC)) = (s32) (*(s32 *)((char *)(temp_v1) + 0xC));
    (*(u16 *)((char *)&(sp80) + 0x10)) = (u16) (*(u16 *)((char *)(temp_v1) + 0x10));
    sp4C = temp_a3;
    sp40 = temp_v1;
    sp44 = temp_v0_2;
    func_1514FBFC(&sp74, (*(s32 *)((char *)(arg1) + 0xC)), (*(s32 *)((char *)(arg1) + 0x1)), temp_a3);
    sp68 = (s32) (*(s32 *)((char *)(arg1) + 0x34));
    sp6C = (s32) (*(s32 *)((char *)(arg1) + 0x38));
    sp60 = 3;
    sp61 = -1;
    sp70 = (s32) (*(s32 *)((char *)(arg1) + 0x3C));
    sp62 = (random_u32() % 9U) + 0x11;
    sp64 = 0;
    func_151602C0(&sp60, &sp68, (random_u32() % 9U) + 5, 0xFF, 0x59, 0, 0xFF, 0, 0, (s32) (*(s32 *)((char *)(arg1) + 0xC)), (s32) (*(s32 *)((char *)(arg1) + 0x1)));
    sp68 = (s32) (*(s32 *)((char *)(arg1) + 0x40));
    sp6C = (s32) (*(s32 *)((char *)(arg1) + 0x44));
    sp70 = (s32) (*(s32 *)((char *)(arg1) + 0x48));
    func_151602C0(&sp60, &sp68, (random_u32() % 9U) + 5, 0xFF, 0x59, 0, 0xFF, 0, 0, (s32) (*(s32 *)((char *)(arg1) + 0xC)), (s32) (*(s32 *)((char *)(arg1) + 0x1)));
    sp50 = random_float();
    func_150E7FEC((sp50 * 101.0f) + 55.0f, ((random_u32() % 66U) + 0xBE) & 0xFF, (char *)(sp4C) + 0x5A, sp48, (f32 *)-1, 1, 1, 0, 0, 0, (s32) (*(s32 *)((char *)(arg1) + 0xC)), 0);
    sp50 = random_float();
    func_150E7FEC((sp50 * 101.0f) + 55.0f, ((random_u32() % 66U) + 0xBE) & 0xFF, sp40, sp44, (f32 *)-1, 1, 1, 0, 0, 0, (s32) (*(s32 *)((char *)(arg1) + 0xC)), 0);
    if (arg0 != NULL) {
        func_15164F0C(2, (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x318))) + 0x23D)), 0, (*(s32 *)((char *)(arg1) + 0xC)), (s32) (*(s32 *)((char *)(arg1) + 0x1)));
        sp58 = 1;
        sp5A = 0x28;
        sp5D = 1;
        sp5C = 8;
        sp5E = -1;
        func_151D8868(&sp58, 0, 0xFF, 0);
    }
    if (arg0 != NULL) {
        func_1505D024(arg0, *(&D_800AAC30 + ((*(s32 *)((char *)(sp4C) + 0x94)) * 4)), 0, -1);
    }
    func_10010F88(0x2F5, 0x7FFF, (s16) (random_u32() % 500U), 0, 0, (s32) (*(s16 *)((char *)(arg1) + 0x34)), (s32) (*(s16 *)((char *)(arg1) + 0x38)), (s32) (*(s16 *)((char *)(arg1) + 0x3C)), 0x7D0, 0x898);
    func_1000FA64(0x2F6, (s16) (s32) (*(s16 *)((char *)(arg1) + 0x40)), (s16) (s32) (*(s16 *)((char *)(arg1) + 0x44)), (s16) (s32) (*(s16 *)((char *)(arg1) + 0x48)), 0x7FFF, 0x898, 0x7D0, func_1000EC24, 5, 0, 0, random_u32() % 500U);
    func_1516972C(arg1);
}

s32 func_151C8FCC(s32 arg0, void *arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s32 spEC;
    s8 spE8;
    s8 spE7;
    s8 spE6;
    s8 spE5;
    s8 spE4;
    f32 spD8;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s32 sp80;
    s8 sp7F;
    s8 sp7E;
    s8 sp7D;
    s8 sp7C;
    s32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    void * sp60;
    void * sp54;
    f32 sp50;
    f32 sp4C;
    s8 sp4B;
    u8 sp4A;
    u8 sp49;
    s8 sp48;
    s32 sp44;
    s32 sp40;
    s16 sp3C;
    s16 sp3A;
    s8 sp39;
    s8 sp38;
    s32 sp34;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    (*(s32 *)((char *)&(sp54) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    (*(s32 *)((char *)&(sp54) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp54) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    var_v0 = 0;
    (*(s32 *)((char *)&(sp60) + 0x0)) = (s32) (*(s32 *)((char *)(arg2) + 0x0));
    (*(s32 *)((char *)&(sp60) + 0x4)) = (s32) (*(s32 *)((char *)(arg2) + 0x4));
    (*(s32 *)((char *)&(sp60) + 0x8)) = (s32) (*(s32 *)((char *)(arg2) + 0x8));
    sp34 = arg0;
    sp90 = D_800AAC70;
    sp94 = D_800AAC70;
    sp98 = 40.0f;
    sp9C = 40.0f;
    spA8 = 1.0f;
    spA0 = 0.0f;
    spA4 = 0.0f;
    sp38 = 0x15;
    sp3A = 0x3403;
    sp3C = 0x12C;
    sp40 = 0;
    sp44 = 0;
    sp48 = arg3 & 0xFF;
    sp4B = 0xFF;
    sp4C = 0.0f;
    sp50 = 0.0f;
    sp6C = 1.0f;
    sp70 = 1.0f;
    sp74 = 1.0f;
    spAC = D_800AAC74;
    sp49 = arg4;
    sp4A = arg5;
    if (arg7 != 0) {
        var_v0 = 0x01000000;
    }
    sp78 = var_v0 | 0x024D2006 | 0x40000000;
    sp7D = 0xFF;
    sp7C = 0xFF;
    sp7E = 0;
    sp7F = 6;
    sp39 = 3;
    spE4 = 0;
    spE5 = 0;
    spE6 = 0;
    spE7 = 0;
    spD8 = 1.0f;
    spE8 = 0;
    sp80 = arg6;
    spB0 = D_800AAC78;
    temp_v0 = func_151407D0(D_800AAC70, 0x42200000, &sp90, 0x64, &sp38, 0, 0, 0, 0, 1, (s32) arg8, arg9);
    var_v1 = temp_v0;
    if (temp_v0 != 0) {
        spEC = temp_v0;
        memcpy(temp_v0 + 0x170, (f32 *) &sp34, 4);
        var_v1 = spEC;
    }
    return var_v1;
}

void func_151C9198(void **arg0, void * *arg1, void * *arg2, f32 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    void * spEC;
    void * spE0;
    void * spD4;
    s16 spCC;
    s16 spCA;
    s8 spC8;
    s32 spC4;
    s8 spC2;
    s8 spC1;
    s8 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s8 spBB;
    s8 spBA;
    s8 spB9;
    s8 spB8;
    s32 spB4;
    s8 spB0;
    s16 spAE;
    s16 spAC;
    s32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    void * sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 *sp64;
    f32 *sp60;
    f32 sp5C;
    f32 sp58;
    s32 sp50;
    s8 sp4E;
    s16 sp4C;
    s32 sp48;
    s8 sp46;
    s16 sp44;
    s8 sp40;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    if (func_15144E80(arg2, &spEC, &spE0, &spD4) != 0) {
        func_15145974(&spD4, &sp6C, &sp68);
        sp58 = 1.0f;
        sp5C = 1.0f;
        sp74 = 1.0f;
        sp78 = 1.0f;
        sp68 += 90.0f;
        sp7C = 1.0f;
        sp64 = D_800AAC7C;
        sp60 = D_800AAC7C;
        sp70 = 0.0f;
        (*(s32 *)((char *)&(sp80) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
        (*(s32 *)((char *)&(sp80) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
        (*(s32 *)((char *)&(sp80) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
        sp8C = 0.0f;
        sp90 = 0.0f;
        sp94 = 0.0f;
        sp98 = 0.0f;
        sp9C = 0.0f;
        spA0 = 0.0f;
        spA4 = 0.0f;
        if (arg6 != 0) {
            var_v0 = 0x400;
        } else {
            var_v0 = 0;
        }
        spA8 = var_v0 | 0x900 | 0x10000 | 0x4000 | 0x40000 | 0x80000;
        spAC = 0x12C;
        spAE = 0x36;
        spB0 = 0;
        spB8 = 0xFF;
        spB9 = 0;
        spBA = 0;
        spBB = 0;
        spBC = 0;
        spBD = 0;
        spBE = 0;
        spBF = 0;
        spC0 = 2;
        spC2 = 0;
        spC4 = 0;
        spC8 = 0;
        spCA = 1;
        spCC = 0xFF;
        spC1 = -1;
        spB4 = arg4;
        temp_v0 = func_15132A4C(D_800AAC7C, &sp58, 3, 0xFF, 0, (s32) arg7, arg8);
        (*(s32 *)((char *)(arg0) + 0x0)) = temp_v0;
        if (temp_v0 != NULL) {
            var_s0 = 0;
            do {
                temp_a1 = (*(s32 *)((char *)(arg0) + 0x0));
                func_15133760((char *)(temp_a1) + var_s0 + 0x90, temp_a1);
                var_s0 += 0x40;
            } while (var_s0 != 0x80);
        }
        spC1 = 2;
        sp40 = 2;
        sp46 = 4;
        sp4E = 6;
        sp48 = 0x3E;
        sp50 = 0x3E;
        if (arg5 != 0) {
            sp44 = 0x87;
            sp4C = 0x88;
        } else {
            sp44 = 0x8B;
            sp4C = 0x8C;
        }
        spAE = 0x37;
        spC0 = 0;
        temp_v0_2 = func_15132A4C(&sp58, 3, 0xFF, 0x14, (s32) arg7, arg8);
        (*(s32 *)((char *)(arg0) + 0x4)) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            var_s0_2 = 0;
            do {
                temp_a1_2 = (*(s32 *)((char *)(arg0) + 0x4));
                func_15133760((char *)(temp_a1_2) + var_s0_2 + 0x90, temp_a1_2);
                var_s0_2 += 0x40;
            } while (var_s0_2 != 0x80);
            memcpy((*(s32 *)((char *)(arg0) + 0x4)) + 0x170, (f32 *) &sp40, 0x14);
        }
        spAE = 0x38;
        if (arg5 != 0) {
            sp44 = 0x89;
            sp4C = 0x8A;
        } else {
            sp44 = 0x8D;
            sp4C = 0x8E;
        }
        temp_v0_3 = func_15132A4C(&sp58, 3, 0xFF, 0x14, (s32) arg7, arg8);
        (*(s32 *)((char *)(arg0) + 0x8)) = temp_v0_3;
        if (temp_v0_3 != NULL) {
            var_s0_3 = 0;
            do {
                temp_a1_3 = (*(s32 *)((char *)(arg0) + 0x8));
                func_15133760((char *)(temp_a1_3) + var_s0_3 + 0x90, temp_a1_3);
                var_s0_3 += 0x40;
            } while (var_s0_3 != 0x80);
            memcpy((*(s32 *)((char *)(arg0) + 0x8)) + 0x170, (f32 *) &sp40, 0x14);
        }
    }
}

void func_151C94D4(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_s0;
    void *temp_s0_2;

    temp_s0 = (char *)(arg0) + 0x110;
    if ((*(s32 *)((char *)(arg0) + 0x13C)) != 0) {
        func_1516972C((*(s32 *)((char *)(temp_s0) + 0x2C)));
        func_1000FD38(func_151C87AC, temp_s0, 0);
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x144));
    temp_s0_2 = (char *)(arg0) + 0x110;
    if (temp_a0 != NULL) {
        func_1516972C(temp_a0);
    }
    temp_a0_2 = (*(s32 *)((char *)(temp_s0_2) + 0x38));
    if (temp_a0_2 != NULL) {
        func_1516972C(temp_a0_2);
    }
    temp_a0_3 = (*(s32 *)((char *)(temp_s0_2) + 0x3C));
    if (temp_a0_3 != NULL) {
        func_1516972C(temp_a0_3);
    }
    temp_a0_4 = (*(s32 *)((char *)(temp_s0_2) + 0x40));
    if (temp_a0_4 != NULL) {
        func_1516972C(temp_a0_4);
    }
    temp_a0_5 = (*(s32 *)((char *)(temp_s0_2) + 0x44));
    if (temp_a0_5 != NULL) {
        func_1516972C(temp_a0_5);
    }
    temp_a0_6 = (*(s32 *)((char *)(temp_s0_2) + 0x48));
    if (temp_a0_6 != NULL) {
        func_1516972C(temp_a0_6);
    }
    temp_a0_7 = (*(s32 *)((char *)(temp_s0_2) + 0x4C));
    if (temp_a0_7 != NULL) {
        func_1516972C(temp_a0_7);
    }
    temp_a0_8 = (*(s32 *)((char *)(temp_s0_2) + 0x50));
    if (temp_a0_8 != NULL) {
        func_1516972C(temp_a0_8);
    }
    func_1513CA6C(arg0);
}

void func_151C95D8(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_s0;
    void *temp_s0_2;

    temp_s0 = (char *)(arg0) + 0x110;
    if ((*(s32 *)((char *)(arg0) + 0x13C)) != 0) {
        func_1516972C((*(s32 *)((char *)(temp_s0) + 0x2C)));
        func_1000FD38(func_151C87AC, temp_s0, 0);
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x144));
    temp_s0_2 = (char *)(arg0) + 0x110;
    if (temp_a0 != NULL) {
        func_1516972C(temp_a0);
    }
    temp_a0_2 = (*(s32 *)((char *)(temp_s0_2) + 0x38));
    if (temp_a0_2 != NULL) {
        func_1516972C(temp_a0_2);
    }
    temp_a0_3 = (*(s32 *)((char *)(temp_s0_2) + 0x3C));
    if (temp_a0_3 != NULL) {
        func_1516972C(temp_a0_3);
    }
    temp_a0_4 = (*(s32 *)((char *)(temp_s0_2) + 0x40));
    if (temp_a0_4 != NULL) {
        func_1516972C(temp_a0_4);
    }
    temp_a0_5 = (*(s32 *)((char *)(temp_s0_2) + 0x44));
    if (temp_a0_5 != NULL) {
        func_1516972C(temp_a0_5);
    }
    temp_a0_6 = (*(s32 *)((char *)(temp_s0_2) + 0x48));
    if (temp_a0_6 != NULL) {
        func_1516972C(temp_a0_6);
    }
    temp_a0_7 = (*(s32 *)((char *)(temp_s0_2) + 0x4C));
    if (temp_a0_7 != NULL) {
        func_1516972C(temp_a0_7);
    }
    temp_a0_8 = (*(s32 *)((char *)(temp_s0_2) + 0x50));
    if (temp_a0_8 != NULL) {
        func_1516972C(temp_a0_8);
    }
    func_1513CAA0(arg0);
}

s32 func_151C96DC(void *arg0, void * arg1) {
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x170))) + 0x196)) & 2) {
        return 1;
    }
    return 0;
}

void func_151C970C( s32 arg0, s32 arg1) {
    s8 sp1C;
    s32 sp18;

    sp18 = arg1;
    sp1C = arg0;
    func_151403A8(&sp18, 0x3A);
}

void func_151C9740(void *arg0, s32 arg1, s32 arg2) {
    s32 sp68;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    u8 sp7F;
    u8 sp7E;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    void * sp50;
    f32 sp4C;
    u32 sp44;                                       /* compiler-managed */
    f32 sp40;
    f32 *var_a0;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f4;
    f32 var_f6;
    s32 temp_s0;
    s32 temp_t6;
    u8 var_t8;

    temp_s0 = arg1 & 0xFF;
    if (arg0 != NULL) {
        temp_f4 = (*(s32 *)((char *)(arg0) + 0x14));
        sp8C = temp_f4;
        temp_f10 = (*(s32 *)((char *)(arg0) + 0x18)) + 135.0f;
        var_t8 = 0;
        sp90 = temp_f10;
        temp_f16 = (*(s32 *)((char *)(arg0) + 0x1C));
        sp7F = 0;
        sp94 = temp_f16;
        if ((*(s32 *)((char *)(arg0) + 0x2D8)) != 0.0f) {
            var_t8 = 1;
        }
        sp7E = var_t8;
        if (!(var_t8 & 0xFF)) {
            sp70 = temp_f4;
            sp74 = temp_f10;
            sp78 = temp_f16;
            func_1504715C(&sp4C, arg0);
            if ((func_15046C80(&sp70, 0, sp90 - 200.0f, &sp4C) != 0) && (sp68 & 1)) {
                sp80 = sp70;
                sp7F = 1;
                sp84 = sp4C;
                sp88 = sp78;
                sp40 = random_float();
                sp44 = random_u32();
                func_150E7FEC((sp40 * 125.0f) + 204.0f, sp44, (void *) (((sp44 % 101U) + 0x9B) & 0xFF), &sp50, &sp80, (random_u32() % 302U) + 0x1F4, 0, 1, 0, 0, 0, temp_s0, 0);
            }
        }
        func_151D5404(&sp8C, 506.0f, 1013.0f, 0.0009871668311944718f, 0xF, 0x14, temp_s0, arg2);
        func_151D5334(&sp8C, 0x43FD0000, 0x447D4000, 0x3A8163D3, 5, temp_s0, arg2);
        func_151D5514(&sp8C, temp_s0 & 0xFF, arg2);
        func_151D3FF4(&sp8C, temp_s0 & 0xFF, arg2);
        var_a0 = &sp8C;
        if (sp7F != 0) {
            var_a0 = &sp80;
        }
        sp44 = var_a0;
        func_150E83AC((u32) var_a0, (s16) ((random_u32((u32) var_a0) % 62U) + 0x78), temp_s0 & 0xFF, arg2);
        sp40 = random_float();
        temp_t6 = (random_u32() % 56U) + 0xC8;
        var_f6 = (f32) temp_t6;
        if (temp_t6 < 0) {
            var_f6 += 4294967296.0f;
        }
        func_151541B8(&sp8C, (2.0f * sp40) + 8.0f, 0x401DB3FA, var_f6, 0.0f, temp_s0, arg2);
        if (sp7E == 0) {
            func_15136C3C(arg0, 0, 0, 1, 0, 0, temp_s0, arg2);
        }
        func_10010F88(0x60D, 0x7D00, 0, 0, 0, (s32) sp8C, (s32) sp90, (s32) sp94, 0x1F4, 0x3E8);
        if (sp7E != 0) {
            func_151C9AC0(arg0, temp_s0 & 0xFF, arg2);
        }
    }
}

void func_151C9AC0(void *arg0, s32 arg1, s32 arg2) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp20;

    sp44 = (*(s32 *)((char *)(arg0) + 0x14));
    sp48 = (*(s32 *)((char *)(arg0) + 0x180)) + 2.0f;
    sp4C = (*(s32 *)((char *)(arg0) + 0x1C));
    func_1504715C(&sp20, arg0);
    func_151ABE40(&sp44, &sp20, 2, arg1, arg2);
}

s32 func_151C9B30(void *arg0) {
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x18))) + 0x6F)) == 0) {
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x9)) = 0;
        return 1;
    }
    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x14))) + 0x9)) = 1;
    return 1;
}

s32 func_151C9B64(void *arg0, s8 *arg1) {
    if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x188))) + 0x6F)) == 0) {
        *arg1 = 1;
        return 1;
    }
    (*(s32 *)((char *)(arg0) + 0x58)) = (s32) ((*(s32 *)((char *)(arg0) + 0x58)) & ~2);
    *arg1 = 0;
    return 1;
}

/*
Decompilation failure in function func_151C9BA0:

Found jr instruction at 1F4650.s line 2939, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void func_151C9DE8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s1 = arg3 & 0xFF;
    temp_s2 = arg1 & 0xFF;
    func_151C9F38(arg0, 4U, temp_s2 & 0xFF, arg2, temp_s1);
    func_151CC524(arg0, 0U, 0x32U, 0xFFU, temp_s2, temp_s1);
    func_151CC840(arg0, 0U, 0x32U, 0xFFU, temp_s2, temp_s1);
    func_151CCF08(arg0, temp_s2 & 0xFF, arg2, temp_s1 & 0xFF);
    func_150BDE90(arg0, temp_s1 & 0xFF, arg4);
    func_151CB5FC(arg0, 2, temp_s2 & 0xFF, arg2, temp_s1);
    if (D_800BE9F0 == 0x27) {
        D_8008CD00 = 1;
    }
}

void func_151C9ED4(s32 arg0) {
    s32 sp24;

    sp24 = arg0;
    func_15160274(&sp24, 0x21, arg0);
    func_1515572C(&sp24, 0x21);
    func_151A561C(&sp24, 0x21);
    func_151494E0(&sp24, 0x21);
    D_8008CD00 = 0;
}

void func_151C9F38(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 spE4;
    s8 spE1;
    s8 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s8 spC3;
    s8 spC2;
    s8 spC1;
    s8 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s8 spBB;
    s8 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    s16 spB2;
    s8 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    s8 sp98;
    f32 sp90;
    void * sp80;
    void * sp70;
    f32 sp6C;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s8 sp51;
    s8 sp50;
    f32 sp4C;
    f32 sp48;
    void *sp44;
    s32 sp3C;
    f32 *sp30;
    f32 *sp28;
    f32 *temp_t1;
    f32 *temp_t3;
    f32 temp_f0;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 temp_t5;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_t0_2;
    s32 var_t4;
    s32 var_t4_2;
    s8 var_t0;
    void *temp_v0_2;
    void *temp_v1;

    (*(s32 *)((char *)&(sp70) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800AAC80) + 0x0));
    (*(s32 *)((char *)&(sp70) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800AAC80) + 0x4));
    (*(s32 *)((char *)&(sp70) + 0xC)) = (s32) (*(s32 *)((char *)&(D_800AAC80) + 0xC));
    (*(s32 *)((char *)&(sp70) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800AAC80) + 0x8));
    temp_t8 = arg1 * 0x10;
    temp_v1 = temp_t8 + &D_800AAC90;
    (*(f32 *)((char *)&(sp80) + 0x0)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x0));
    (*(f32 *)((char *)&(sp80) + 0x4)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x4));
    (*(f32 *)((char *)&(sp80) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v1) + 0x8));
    (*(f32 *)((char *)&(sp80) + 0xC)) = (f32) (*(f32 *)((char *)(temp_v1) + 0xC));
    temp_t8_2 = arg1 * 4;
    temp_t3 = temp_t8_2 + &D_800AAD44;
    temp_f0 = *temp_t3;
    sp48 = 0.0f;
    sp51 = 0;
    sp90 = temp_f0 - 1.0f;
    sp4C = 130.0f;
    sp44 = arg0;
    if (arg3 == -1) {
        var_t0 = 0;
    } else {
        var_t0 = 4;
    }
    spB2 = 0x12C;
    spB6 = 1;
    spBF = 0xFF;
    spB8 = 0xFF;
    spBA = 7;
    spC3 = 0xFF;
    spC0 = 0xFF;
    spC1 = 0xFF;
    spC2 = 0xFF;
    spCC = 0x1F0601;
    sp50 = var_t0;
    sp98 = arg3;
    spC4 = 0;
    spC8 = 0x200004;
    spD8 = 0x80;
    spDC = 0x20;
    spE0 = 0;
    spE1 = 0xA;
    temp_t1 = temp_t8_2 + &D_800AAD30;
    spA4 = 0.0f;
    spAC = temp_f0;
    spB0 = 0xFF;
    spE4 = (*(s32 *)((char *)(arg0) + 0x23D));
    spA0 = *(&D_800AAD58 + temp_t8_2);
    spA8 = *temp_t1;
    if (arg2 & 0xFF) {
        var_t0_2 = 0x40;
    } else {
        var_t0_2 = 0;
    }
    spB4 = var_t0_2 | 0x10 | (1 << ((*(s32 *)((char *)(arg0) + 0x23D)) + 0xB));
    temp_t9 = (D_80082FA0 == 1) * 4;
    temp_t5 = arg1 * 8;
    spD0 = 8;
    spD4 = 0x54;
    temp_f8 = (*(s32 *)((char *)(temp_v1) + 0x0));
    sp60 = 0.0f;
    sp51 = 3;
    sp6C = D_800AAE88;
    sp5C = *(&D_800AAD6C + (temp_t5 + temp_t9));
    sp64 = *(&D_800AAD94 + (temp_t5 + temp_t9));
    if (M2C_ERROR(/* cfc1 */) & 0x78) {
        if (!(M2C_ERROR(/* cfc1 */) & 0x78)) {
            var_t4 = (s32) (temp_f8 - 2.1474836e9f) | 0x80000000;
        } else {
            goto block_9;
        }
    } else {
        var_t4 = (s32) temp_f8;
        if (var_t4 < 0) {
block_9:
            var_t4 = -1;
        }
    }
    spBB = (s8) var_t4;
    spBC = (s8) (u32) (*(s8 *)((char *)(temp_v1) + 0x4));
    spBD = (s8) (u32) (*(s8 *)((char *)(temp_v1) + 0x8));
    spBE = (s8) (u32) (*(s8 *)((char *)(temp_v1) + 0xC));
    sp28 = temp_t1;
    sp3C = temp_t8;
    sp30 = temp_t3;
    temp_v0 = func_1515548C(&spA0, 8, 0, 0, 0x58, (s32) arg4, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x70, (f32 *) &sp44, 0x58);
    }
    temp_v0_2 = sp3C + &D_800AACE0;
    temp_f8_2 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
    sp51 = 0;
    spA8 = *sp28 + 2.0f;
    spAC = *sp30 + 2.0f;
    if (M2C_ERROR(/* cfc1 */) & 0x78) {
        if (!(M2C_ERROR(/* cfc1 */) & 0x78)) {
            var_t4_2 = (s32) (temp_f8_2 - 2.1474836e9f) | 0x80000000;
        } else {
            goto block_16;
        }
    } else {
        var_t4_2 = (s32) temp_f8_2;
        if (var_t4_2 < 0) {
block_16:
            var_t4_2 = -1;
        }
    }
    spBB = (s8) var_t4_2;
    spBC = (s8) (u32) (*(s8 *)((char *)(temp_v0_2) + 0x4));
    spBD = (s8) (u32) (*(s8 *)((char *)(temp_v0_2) + 0x8));
    spBE = (s8) (u32) (*(s8 *)((char *)(temp_v0_2) + 0xC));
    temp_v0_3 = func_1515548C(&spA0, 0, 0, 0, 0x58, (s32) arg4, 0);
    if (temp_v0_3 != 0) {
        memcpy(temp_v0_3 + 0x70, (f32 *) &sp44, 0x58);
    }
}

void func_151CA6A0(void *arg0, s32 arg1) {
    u8 spE4;
    s8 spE1;
    s8 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s8 spC3;
    s8 spC2;
    s8 spC1;
    s8 spC0;
    s8 spBF;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s8 spBB;
    s8 spBA;
    s16 spB8;
    s16 spB6;
    u16 spB4;
    s16 spB2;
    s8 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    s8 sp51;
    s8 sp50;
    f32 sp4C;
    f32 sp48;
    void *sp44;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u16 temp_t2;
    u16 temp_t6;

    temp_s0 = arg1 & 0xFF;
    sp51 = 0;
    sp50 = 0;
    spAC = 25.0f;
    spA8 = 25.0f;
    sp44 = arg0;
    sp48 = 0.0f;
    sp4C = 130.0f;
    if (D_80082FA0 > 0) {
        spB0 = 0x73;
    } else {
        spB0 = 0x5D;
    }
    spB2 = 0x12C;
    temp_t6 = (1 << ((*(s32 *)((char *)(arg0) + 0x23D)) + 0xB)) | 0x50;
    spB6 = 1;
    spBA = 7;
    spBC = 0xFF;
    spBE = 0x82;
    spBF = 0xFF;
    spC0 = 0xFF;
    spC1 = 0xFF;
    spC2 = 0xFF;
    spD0 = 8;
    spB4 = temp_t6;
    spB8 = 0xFF;
    spBB = 0;
    spBD = 0;
    spC3 = 0xFF;
    spC4 = 0;
    spC8 = 0x200004;
    spCC = 0x1F0601;
    spD4 = 0x44;
    spD8 = 0x80;
    spDC = 0x20;
    spE0 = 0;
    spE1 = 0xA;
    temp_t2 = temp_t6 & 0xFFF9;
    spB4 = temp_t2;
    spB4 = temp_t2 | 6;
    spA0 = 25.0f;
    spA4 = 25.0f;
    spE4 = (*(s32 *)((char *)(arg0) + 0x23D));
    if (temp_s0 != 0) {
        var_v0 = 4;
    } else {
        var_v0 = 0;
    }
    temp_v0 = func_1515548C(&spA0, var_v0 & 0xFF, 0, 0, 0x58, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x70, (f32 *) &sp44, 0x58);
    }
    spB4 = (spB4 & 0xFFF9) | 4;
    spA0 = -25.0f;
    spA4 = 25.0f;
    if (temp_s0 != 0) {
        var_v0_2 = 4;
    } else {
        var_v0_2 = 0;
    }
    temp_v0_2 = func_1515548C(&spA0, var_v0_2 & 0xFF, 0, 0, 0x58, 0xFF, 1);
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2 + 0x70, (f32 *) &sp44, 0x58);
    }
    spB4 &= 0xFFF9;
    spA0 = -25.0f;
    spA4 = -25.0f;
    if (temp_s0 != 0) {
        var_v0_3 = 4;
    } else {
        var_v0_3 = 0;
    }
    temp_v0_3 = func_1515548C(&spA0, var_v0_3 & 0xFF, 0, 0, 0x58, 0xFF, 1);
    if (temp_v0_3 != 0) {
        memcpy(temp_v0_3 + 0x70, (f32 *) &sp44, 0x58);
    }
    spB4 = (spB4 & 0xFFF9) | 2;
    spA0 = 25.0f;
    spA4 = -25.0f;
    if (temp_s0 != 0) {
        var_v0_4 = 4;
    } else {
        var_v0_4 = 0;
    }
    temp_v0_4 = func_1515548C(&spA0, var_v0_4 & 0xFF, 0, 0, 0x58, 0xFF, 1);
    if (temp_v0_4 != 0) {
        memcpy(temp_v0_4 + 0x70, (f32 *) &sp44, 0x58);
    }
    spA0 = 0.0f;
    spA4 = 0.0f;
    spAC = 3.0f;
    spA8 = 3.0f;
    spB0 = 0x99;
    spB4 = (1 << ((*(s32 *)((char *)(arg0) + 0x23D)) + 0xB)) | 0x50;
    spD0 = 8;
    spD4 = 0x44;
    sp6C = D_800AAE8C;
    if (D_80082FA0 == 1) {
        sp5C = -62.0f;
    } else {
        sp5C = -50.0f;
    }
    sp60 = 0.0f;
    if (D_80082FA0 == 1) {
        sp64 = D_800AAE90;
    } else {
        sp64 = D_800AAE94;
    }
    var_s0 = 0;
    sp68 = 0.0f;
    do {
        temp_v0_5 = func_1515548C(&spA0, 7, 0, 0, 0x58, 0xFF, 1);
        if (temp_v0_5 != 0) {
            memcpy(temp_v0_5 + 0x70, (f32 *) &sp44, 0x58);
        }
        var_s0 += 1;
        sp68 += D_800AAE98;
    } while (var_s0 != 0xC);
}

void func_151CAACC(void *arg0, void **arg1, s32 arg2) {
    void * (*temp_v0)(void *, void **, u8);

    if (arg2 == 0x21) {
        if ((*(s32 *)((char *)(arg0) + 0x70)) == (s32)(*arg1)) {
            func_1516972C();
        }
    } else if ((arg2 == 0) && ((*(s32 *)((char *)(arg0) + 0x70)) == (*(s32 *)((char *)((*arg1)) + 0x318)))) {
        func_1516972C();
    }
    temp_v0 = *(&D_8008FC10 + ((*(s32 *)((char *)(arg0) + 0x7D)) * 4));
    if (temp_v0 != NULL) {
        temp_v0(arg0, arg1, arg2);
    }
}

void func_151CAB78(void *arg0, s32 arg1) {
    u8 spD4;
    s8 spD1;
    s8 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s16 spA8;
    s16 spA6;
    s16 spA4;
    s16 spA2;
    s8 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s8 sp41;
    s8 sp40;
    f32 sp3C;
    f32 sp38;
    void *sp34;
    f32 var_f0;
    s32 temp_v0;
    s32 var_v0;

    sp34 = arg0;
    sp38 = 0.0f;
    sp41 = 0;
    sp40 = 0;
    sp3C = 130.0f;
    if (D_80082FA0 > 0) {
        var_f0 = 2.0f;
    } else {
        var_f0 = 1.0f;
    }
    spA0 = 0x64;
    spA2 = 0x12C;
    sp9C = var_f0 * 12.0f;
    sp98 = sp9C;
    spA8 = 0xFF;
    spAA = 7;
    spA4 = (1 << ((*(s32 *)((char *)(arg0) + 0x23D)) + 0xB)) | 0x50;
    spA6 = 1;
    spAB = 0xFF;
    spAC = 0xC8;
    spAE = 0x82;
    spAF = 0xFF;
    spB0 = 0xFF;
    spAD = 0;
    spB1 = 0xFF;
    spB2 = 0xFF;
    spB3 = 0xFF;
    spB4 = 0;
    spB8 = 0x200004;
    spBC = 0x1F0601;
    spC0 = 8;
    spC4 = 0x44;
    spC8 = 0x80;
    spCC = 0x20;
    spD0 = 0;
    spD1 = 0xA;
    sp90 = 0.0f;
    sp94 = 0.0f;
    spD4 = (*(s32 *)((char *)(arg0) + 0x23D));
    if (arg1 & 0xFF) {
        var_v0 = 4;
    } else {
        var_v0 = 0;
    }
    temp_v0 = func_1515548C(&sp90, var_v0 & 0xFF, 0, 0, 0x58, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x70, (f32 *) &sp34, 0x58);
    }
}

void func_151CAD28(void *arg0, s32 arg1) {
    u8 spEC;
    s8 spE9;
    s8 spE8;
    s32 spE4;
    s32 spE0;
    s32 spDC;
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s8 spCB;
    s8 spCA;
    s8 spC9;
    s8 spC8;
    s8 spC7;
    s8 spC6;
    s8 spC5;
    s8 spC4;
    s8 spC3;
    s8 spC2;
    s16 spC0;
    s16 spBE;
    u16 spBC;
    s16 spBA;
    s8 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    s8 sp59;
    s8 sp58;
    f32 sp54;
    f32 sp50;
    void *sp4C;
    s8 sp4A;
    s16 sp48;
    s8 sp46;
    s8 sp45;
    s8 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    void *sp34;
    void *sp30;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u16 temp_t2;
    u16 temp_t6;
    void *temp_t5;

    sp59 = 0;
    sp58 = 0;
    spB4 = 25.0f;
    spB0 = 25.0f;
    sp4C = arg0;
    sp50 = 0.0f;
    sp54 = 130.0f;
    if (D_80082FA0 > 0) {
        spB8 = 0x72;
    } else {
        spB8 = 0x65;
    }
    spBA = 0x12C;
    temp_t6 = (1 << ((*(s32 *)((char *)(arg0) + 0x23D)) + 0xB)) | 0x50;
    spBE = 1;
    spC2 = 7;
    spC4 = 0xFF;
    spC6 = 0x82;
    spC8 = 0xFF;
    spC7 = 0xFF;
    spC9 = 0xFF;
    spCA = 0xFF;
    spD8 = 8;
    spE0 = 0x80;
    spBC = temp_t6;
    spC0 = 0xFF;
    spC3 = 0;
    spC5 = 0;
    spCB = 0xFF;
    spCC = 0;
    spD0 = 0x200004;
    spD4 = 0x1F0601;
    spDC = 0x44;
    spE4 = 0x20;
    spE8 = 0;
    spE9 = 0xA;
    temp_t2 = temp_t6 & 0xFFF9;
    spBC = temp_t2;
    spBC = temp_t2 | 6;
    spA8 = 25.0f;
    spAC = 25.0f;
    spEC = (*(s32 *)((char *)(arg0) + 0x23D));
    if (arg1 != 0) {
        var_v0 = 4;
    } else {
        var_v0 = 0;
    }
    temp_v0 = func_1515548C(&spA8, var_v0 & 0xFF, 0, 0, 0x58, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x70, (f32 *) &sp4C, 0x58);
    }
    spBC = (spBC & 0xFFF9) | 4;
    spA8 = -25.0f;
    spAC = 25.0f;
    if (arg1 != 0) {
        var_v0_2 = 4;
    } else {
        var_v0_2 = 0;
    }
    temp_v0_2 = func_1515548C(&spA8, var_v0_2 & 0xFF, 0, 0, 0x58, 0xFF, 1);
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2 + 0x70, (f32 *) &sp4C, 0x58);
    }
    spBC &= 0xFFF9;
    spA8 = -25.0f;
    spAC = -25.0f;
    if (arg1 != 0) {
        var_v0_3 = 4;
    } else {
        var_v0_3 = 0;
    }
    temp_v0_3 = func_1515548C(&spA8, var_v0_3 & 0xFF, 0, 0, 0x58, 0xFF, 1);
    if (temp_v0_3 != 0) {
        memcpy(temp_v0_3 + 0x70, (f32 *) &sp4C, 0x58);
    }
    spBC = (spBC & 0xFFF9) | 2;
    spA8 = 25.0f;
    spAC = -25.0f;
    if (arg1 != 0) {
        var_v0_4 = 4;
    } else {
        var_v0_4 = 0;
    }
    temp_v0_4 = func_1515548C(&spA8, var_v0_4 & 0xFF, 0, 0, 0x58, 0xFF, 1);
    if (temp_v0_4 != 0) {
        memcpy(temp_v0_4 + 0x70, (f32 *) &sp4C, 0x58);
    }
    if (D_800BE616 == 0) {
        sp30 = arg0;
        temp_t5 = ((*(s32 *)((char *)(arg0) + 0x23D)) * 0x180) + D_800BE628;
        sp34 = temp_t5;
        sp3C = (s32) ((*(s32 *)((char *)(temp_t5) + 0x34)) - 12.0f);
        sp44 = 0xE;
        sp45 = -1;
        sp46 = 1;
        sp48 = 0x12C;
        sp4A = 1;
        sp40 = (s32) ((*(s32 *)((char *)(temp_t5) + 0x38)) - 12.0f) * D_800BE620;
        temp_v0_5 = func_1515FF74(&sp44, 0x498, 0xFF, 1);
        if (temp_v0_5 != 0) {
            sp38 = temp_v0_5 + 0x30;
            memcpy(temp_v0_5 + 0x18, (f32 *) &sp30, 0x14);
        }
    }
}

void func_151CB110(void *arg0, s32 arg1) {
    f32 sp98;
    s32 sp88;
    s32 sp84;
    s32 sp80;
    s32 sp7C;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f8_2;
    f32 var_f18;
    f32 var_f18_2;
    f32 var_f20;
    s32 temp_f6;
    s32 temp_f6_2;
    s32 temp_f8;
    s32 temp_f8_3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    void *temp_s0;
    void *temp_s2;

    if ((D_800BEAC0 == 0) && (D_800BEAC1 == 0)) {
        var_s4 = 0;
        var_s6 = 0;
        temp_s0 = (char *)(arg0) + 0x18;
        if (D_800BEAC2 == 0) {
            temp_s2 = (*(s32 *)((char *)(arg0) + 0x1C));
            var_s5 = (*(s32 *)((char *)(arg0) + 0x24)) + (*(s32 *)((char *)(arg0) + 0x28));
            do {
                memcpy((*(s32 *)((char *)(temp_s0) + 0x8)) + (var_s6 * 2), arg1 + (var_s5 * 2), 0x30);
                var_s4 += 1;
                var_s6 += 0x18;
                var_s5 += D_800BE620;
            } while (var_s4 != 0x18);
            var_f18 = -1.0f;
            if (-1.0f < 0.0f) {
                do {
                    temp_f12 = fabsf(var_f18);
                    sp98 = var_f18;
                    temp_f0 = func_15145A0C(temp_f12, 1.0f, 1.0f);
                    var_f18_2 = var_f18;
                    if (temp_f0 != 0.0f) {
                        temp_f2 = var_f18_2 * 12.0f;
                        var_f20 = -temp_f0;
                        sp80 = (s32) ((*(s32 *)((char *)(temp_s2) + 0x38)) + temp_f2) * D_800BE620;
                        sp88 = (s32) ((*(s32 *)((char *)(temp_s2) + 0x38)) - temp_f2) * D_800BE620;
                        if (var_f20 < 0.0f) {
                            temp_f28 = 1.0f - (1.0f - (temp_f0 * D_800AAE9C));
                            do {
                                temp_f12_2 = fabsf(var_f20);
                                sp98 = var_f18_2;
                                temp_f2_2 = var_f20 * 12.0f;
                                temp_f8 = (s32) ((*(s32 *)((char *)(temp_s2) + 0x34)) + temp_f2_2);
                                temp_f8_2 = func_15145A0C(temp_f12_2, temp_f0, 1.0f / temp_f0) * temp_f28;
                                sp7C = temp_f8;
                                temp_f12_3 = 1.0f - temp_f8_2;
                                temp_f6 = (s32) ((*(s32 *)((char *)(temp_s2) + 0x34)) - temp_f2_2);
                                sp84 = temp_f6;
                                temp_f14 = var_f20 * temp_f12_3 * 12.0f;
                                temp_f16 = var_f18_2 * temp_f12_3 * 12.0f;
                                temp_f6_2 = (s32) (temp_f14 + 12.0f);
                                sp68 = temp_f6_2;
                                temp_f8_3 = (s32) (12.0f - temp_f14);
                                temp_lo = (s32) (temp_f16 + 12.0f) * 0x18;
                                sp70 = temp_f8_3;
                                sp6C = temp_lo;
                                temp_lo_2 = (s32) (12.0f - temp_f16) * 0x18;
                                sp74 = temp_lo_2;
                                (*(s32 *)((char *)(arg1) + (sp80 * 2) + (temp_f8 * 2))) = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x8))) + (temp_f6_2 * 2) + (temp_lo * 2)));
                                (*(s32 *)((char *)(arg1) + (sp80 * 2) + (temp_f6 * 2))) = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x8))) + (temp_f8_3 * 2) + (temp_lo * 2)));
                                (*(s32 *)((char *)(arg1) + (sp88 * 2) + (temp_f6 * 2))) = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x8))) + (temp_f8_3 * 2) + (temp_lo_2 * 2)));
                                (*(s32 *)((char *)(arg1) + (sp88 * 2) + (temp_f8 * 2))) = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0x8))) + (temp_f6_2 * 2) + (temp_lo_2 * 2)));
                                var_f20 += D_800AAEA0;
                            } while (var_f20 < 0.0f);
                        }
                    }
                    var_f18 = var_f18_2 + D_800AAEA4;
                } while (var_f18 < 0.0f);
            }
        }
    }
}

void func_151CB49C(void *arg0, void **arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x21) {
        if ((*(s32 *)((char *)(arg0) + 0x18)) == (s32)(*arg1)) {
            func_1516972C((void *) temp_t6);
        }
    } else if ((temp_t6 == 0) && ((*(s32 *)((char *)(arg0) + 0x18)) == (*(s32 *)((char *)((*arg1)) + 0x318)))) {
        func_1516972C((void *) temp_t6);
    }
}

void func_151CB510(void *arg0) {
    f32 temp_f2;
    f32 var_f0;
    void *temp_v0;
    void *var_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x70));
    if (((*(s32 *)((*(s32 *)((char *)(temp_v0) + 0x36C)))) & 0x2000) && (var_v0 = (char *)(arg0) + 0x70, ((*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x3D4))) + 0x19E)) == 0))) {
        var_f0 = (*(s32 *)((char *)(var_v0) + 0x8));
    } else {
        var_f0 = 0.0f;
        var_v0 = (char *)(arg0) + 0x70;
    }
    temp_f2 = (*(s32 *)((char *)(var_v0) + 0x4));
    (*(f32 *)((char *)(var_v0) + 0x4)) = (f32) (temp_f2 + ((var_f0 - temp_f2) * D_800AAEA8));
    (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) (u32) (*(s8 *)((char *)(var_v0) + 0x4));
}

void func_151CB5FC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 spD4;
    s8 spD1;
    s8 spD0;
    s32 spCC;
    s32 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    s8 spAB;
    s8 spAA;
    s16 spA8;
    s16 spA6;
    u16 spA4;
    s16 spA2;
    s8 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    s8 sp88;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s8 sp42;
    s8 sp41;
    s8 sp40;
    f32 sp3C;
    f32 sp38;
    void *sp34;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v1_2;
    s8 var_v1;

    sp38 = 255.0f;
    sp3C = 255.0f;
    sp41 = arg1 & 0xFF;
    sp34 = arg0;
    if (arg3 == -1) {
        var_v1 = 0;
    } else {
        var_v1 = 4;
    }
    sp40 = var_v1;
    sp88 = arg3;
    sp48 = 255.0f;
    spA2 = 0x12C;
    sp98 = 49.0f;
    sp44 = 0.0f;
    sp9C = 18.0f;
    if (arg2 & 0xFF) {
        var_v1_2 = 0x40;
    } else {
        var_v1_2 = 0;
    }
    spA4 = var_v1_2 | 0x32 | (1 << ((*(s32 *)((char *)(arg0) + 0x23D)) + 0xB));
    spAA = 7;
    spAB = 0xFF;
    spA6 = 1;
    spAC = 0xFF;
    spAD = 0xFF;
    spAF = 0xFF;
    spB0 = 0xFF;
    spB1 = 0xFF;
    spA8 = 0xFF;
    spB2 = 0xFF;
    spB3 = 0xFF;
    spB4 = 0;
    spB8 = 0x200004;
    spBC = 0x1F0601;
    spC0 = 7;
    spC4 = 0x22;
    spC8 = 0x80;
    spCC = 0x20;
    spD0 = 0;
    spD1 = 7;
    temp_t6 = (D_80082FA0 == 1) * 4;
    sp42 = 0;
    spAE = 0xFF;
    spA0 = 0x7B;
    sp50 = 0.0f;
    spD4 = (*(s32 *)((char *)(arg0) + 0x23D));
    sp90 = 88.0f;
    sp94 = 91.0f;
    sp4C = *(&D_800AAD84 + temp_t6);
    sp54 = *(&D_800AADAC + temp_t6);
    temp_v0 = func_1515548C(&sp90, 5, 0, 0, 0x58, (s32) arg4, 0);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x70, (f32 *) &sp34, 0x58);
    }
    spAE = 0;
    spA0 = 0x7C;
    temp_v0_2 = func_1515548C(&sp90, 5, 0, 0, 0x58, (s32) arg4, 0);
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2 + 0x70, (f32 *) &sp34, 0x58);
    }
    spA4 &= 0xFFFD;
    spAE = 0xFF;
    spA0 = 0x7B;
    sp42 = 1;
    sp90 = -88.0f;
    sp94 = 91.0f;
    temp_v0_3 = func_1515548C(&sp90, 5, 0, 0, 0x58, (s32) arg4, 0);
    if (temp_v0_3 != 0) {
        memcpy(temp_v0_3 + 0x70, (f32 *) &sp34, 0x58);
    }
    spAE = 0;
    spA0 = 0x7C;
    temp_v0_4 = func_1515548C(&sp90, 5, 0, 0, 0x58, (s32) arg4, 0);
    if (temp_v0_4 != 0) {
        memcpy(temp_v0_4 + 0x70, (f32 *) &sp34, 0x58);
    }
}

void func_151CB918(void *arg0, void *arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x70;
    if (((arg2 & 0xFF) == 0x37) && ((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(temp_v0) + 0xE))) && ((*(s32 *)((char *)(arg1) + 0x4)) == (*(s32 *)((char *)(arg0) + 0x70)))) {
        (*(s32 *)((char *)(temp_v0) + 0x10)) = 0.0f;
        (*(u8 *)((char *)(temp_v0) + 0xC)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0xC)) | 1);
        (*(s32 *)((char *)(temp_v0) + 0x14)) = 0.0f;
    }
}

s32 func_151CB970(void *arg0) {
    f32 sp28;
    void *sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s8 temp_t2;
    void *temp_v1;

    temp_v1 = (char *)(arg0) + 0x70;
    temp_f2 = (1.0f - ((func_151CC1D4() - (*(s32 *)((char *)(temp_v1) + 0x18))) * (*(s32 *)((char *)(temp_v1) + 0x20)))) * 75.0f;
    if ((*(s32 *)((char *)(temp_v1) + 0xC)) & 1) {
        sp28 = temp_f2;
        sp1C = temp_v1;
        temp_f12 = 91.0f + temp_f2;
        (*(f32 *)((char *)(arg0) + 0x14)) = (f32) ((sinf((*(f32 *)((char *)(temp_v1) + 0x10))) * ((112.0f + temp_f2) - temp_f12)) + temp_f12);
        (*(f32 *)((char *)(temp_v1) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1) + 0x10)) + (D_800AAEAC * D_800BE9A4));
        if (D_800AAEB0 <= (*(s32 *)((char *)(temp_v1) + 0x10))) {
            (*(s32 *)((char *)(arg0) + 0x14)) = temp_f12;
            (*(u8 *)((char *)(temp_v1) + 0xC)) = (u8) ((*(u8 *)((char *)(temp_v1) + 0xC)) & 0xFFFE);
        }
    } else {
        (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (91.0f + temp_f2);
    }
    if ((*(s32 *)((char *)(temp_v1) + 0xD)) == 2) {
        (*(f32 *)((char *)(arg0) + 0x14)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14)) - 20.0f);
    }
    temp_t2 = (u32) (*(u32 *)((char *)(temp_v1) + 0x14)) & 0xFF;
    if ((*(s32 *)((char *)(arg0) + 0x20)) == 0x7C) {
        (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) (0xFF - temp_t2);
    } else {
        (*(s32 *)((char *)(arg0) + 0x2E)) = temp_t2;
    }
    temp_f0 = (*(s32 *)((char *)(temp_v1) + 0x14));
    (*(f32 *)((char *)(temp_v1) + 0x14)) = (f32) (temp_f0 + ((255.0f - temp_f0) * D_800AAEB4));
    return 1;
}

void func_151CBB6C(void *arg0, void **arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if (temp_t6 == 0x21) {
        if ((*(s32 *)((char *)(arg0) + 0x20)) == (s32)(*arg1)) {
            func_1516972C((void *) temp_t6);
        }
    } else if ((temp_t6 == 0) && ((*(s32 *)((char *)(arg0) + 0x20)) == (*(s32 *)((char *)((*arg1)) + 0x318)))) {
        func_1516972C((void *) temp_t6);
    }
}

s32 func_151CBBE0(s32 arg0) {
    f32 temp_f0;
    void *temp_v0;

    temp_f0 = func_151CC1D4();
    temp_v0 = arg0 + 0x70;
    if (temp_f0 != (*(s32 *)((char *)(temp_v0) + 0x28))) {
        (*(s32 *)((char *)(temp_v0) + 0x28)) = temp_f0;
        func_1514373C((*(s32 *)((char *)(temp_v0) + 0x24)) + ((temp_f0 - (*(s32 *)((char *)(temp_v0) + 0x18))) * (*(s32 *)((char *)(temp_v0) + 0x20)) * D_800AAEB8), 0x425C0000, arg0, arg0 + 0x10, arg0 + 0x14);
    }
    return 1;
}

s32 func_151CBC60(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    void *temp_v0;

    temp_f0 = func_151CC1D4();
    temp_v0 = (char *)(arg0) + 0x70;
    if (temp_f0 != (*(s32 *)((char *)(temp_v0) + 0x28))) {
        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x4C));
        (*(s32 *)((char *)(temp_v0) + 0x28)) = temp_f0;
        (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) ((temp_f2 - ((temp_f0 - (*(f32 *)((char *)(temp_v0) + 0x18))) * (*(f32 *)((char *)(temp_v0) + 0x20)) * temp_f2)) + 1.0f);
    }
    if ((*(s32 *)((char *)(temp_v0) + 0xC)) & 2) {
        (*(f32 *)((char *)(temp_v0) + 0x50)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x50)) - D_800BE9A4);
        temp_f18 = (*(s32 *)((char *)(temp_v0) + 0x50));
        if (temp_f18 <= 0.0f) {
            (*(s8 *)((char *)(arg0) + 0x2B)) = (s8) (u32) (*(s8 *)((char *)(temp_v0) + 0x3C));
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) (u32) (*(s8 *)((char *)(temp_v0) + 0x40));
            (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (u32) (*(s8 *)((char *)(temp_v0) + 0x44));
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) (u32) (*(s8 *)((char *)(temp_v0) + 0x48));
            (*(u8 *)((char *)(temp_v0) + 0xC)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0xC)) & 0xFFFD);
        } else {
            temp_f0_2 = (*(s32 *)((char *)(temp_v0) + 0x3C));
            (*(s8 *)((char *)(arg0) + 0x2B)) = (s8) (u32) (temp_f0_2 + (((*(s8 *)((char *)(temp_v0) + 0x2C)) - temp_f0_2) * (temp_f18 * D_800AAEBC)));
            temp_f2_2 = (*(s32 *)((char *)(temp_v0) + 0x40));
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) (u32) (temp_f2_2 + (((*(s8 *)((char *)(temp_v0) + 0x30)) - temp_f2_2) * ((*(s8 *)((char *)(temp_v0) + 0x50)) * D_800AAEBC)));
            temp_f12 = (*(s32 *)((char *)(temp_v0) + 0x44));
            (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (u32) (temp_f12 + (((*(s8 *)((char *)(temp_v0) + 0x34)) - temp_f12) * ((*(s8 *)((char *)(temp_v0) + 0x50)) * D_800AAEBC)));
            temp_f14 = (*(s32 *)((char *)(temp_v0) + 0x48));
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) (u32) (temp_f14 + (((*(s8 *)((char *)(temp_v0) + 0x38)) - temp_f14) * ((*(s8 *)((char *)(temp_v0) + 0x50)) * D_800AAEBC)));
        }
    }
    return 1;
}

f32 func_151CC1D4(void *arg0) {
    f32 temp_f0;
    f32 var_f12;
    f32 var_f2;
    void *temp_v1;
    void *var_v0;

    var_v0 = (char *)(arg0) + 0x70;
    if ((*(s32 *)((char *)(arg0) + 0x7C)) & 4) {
        var_v0 = (char *)(arg0) + 0x70;
        var_f12 = (*(s32 *)((char *)(var_v0) + 0x18));
        var_f2 = var_f12 + (((*(s32 *)((char *)(var_v0) + 0x1C)) - var_f12) * ((*(s32 *)((char *)((D_800C3958 + ((*(s32 *)((char *)(var_v0) + 0x54)) * 0x44))) + 0x28)) * D_800AAEC0));
    } else {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x70));
        var_f12 = (*(s32 *)((char *)(var_v0) + 0x18));
        var_f2 = ((*(s32 *)((char *)(temp_v1) + 0x19C)) + (*(s32 *)((char *)(temp_v1) + 0x1A0))) * 0.5f;
    }
    if (var_f2 < var_f12) {
        var_f2 = var_f12;
    } else {
        temp_f0 = (*(s32 *)((char *)(var_v0) + 0x1C));
        if (temp_f0 < var_f2) {
            var_f2 = temp_f0;
        }
    }
    return var_f2;
}

void func_151CC290(s32 arg0) {
    s32 sp1C;

    sp1C = arg0;
    func_1515572C(&sp1C, 0x46, arg0);
}

void func_151CC2BC(void *arg0, s32 *arg1, s32 arg2) {
    f32 temp_f6;
    s32 var_t2;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x70;
    if (((arg2 & 0xFF) == 0x46) && (*arg1 == (*(s32 *)((char *)(arg0) + 0x70)))) {
        temp_f6 = (*(s32 *)((char *)(temp_v0) + 0x2C));
        (*(u8 *)((char *)(temp_v0) + 0xC)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0xC)) | 2);
        (*(s32 *)((char *)(temp_v0) + 0x50)) = 35.0f;
        if (M2C_ERROR(/* cfc1 */) & 0x78) {
            if (!(M2C_ERROR(/* cfc1 */) & 0x78)) {
                var_t2 = (s32) (temp_f6 - 2.1474836e9f) | 0x80000000;
            } else {
                goto block_5;
            }
        } else {
            var_t2 = (s32) temp_f6;
            if (var_t2 < 0) {
block_5:
                var_t2 = -1;
            }
        }
        (*(s8 *)((char *)(arg0) + 0x2B)) = (s8) var_t2;
        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) (u32) (*(s8 *)((char *)(temp_v0) + 0x30));
        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (u32) (*(s8 *)((char *)(temp_v0) + 0x34));
        (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) (u32) (*(s8 *)((char *)(temp_v0) + 0x38));
    }
}

void func_151CC524(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    u8 spCC;
    s8 spC9;
    s8 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s8 spA7;
    s8 spA6;
    u8 spA5;
    u8 spA4;
    u8 spA3;
    s8 spA2;
    s16 spA0;
    s16 sp9E;
    s16 sp9C;
    s16 sp9A;
    s8 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s8 sp39;
    s8 sp38;
    f32 sp34;
    f32 sp30;
    void *sp2C;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    sp30 = 0.0f;
    sp39 = 0;
    sp38 = 0;
    spD8 = 0.0f;
    spDC = 0.0f;
    sp9A = 0x12C;
    sp2C = arg0;
    sp34 = 130.0f;
    if (arg4 != 0) {
        var_v0 = 0x40;
    } else {
        var_v0 = 0;
    }
    sp9E = 1;
    sp9C = var_v0 | 0x390 | (1 << ((*(s32 *)((char *)(arg0) + 0x23D)) + 0xB));
    spA3 = arg1;
    spA4 = arg2;
    spA2 = 7;
    spA6 = 0x82;
    spA7 = 0xFF;
    spA8 = 0xFF;
    spA9 = 0xFF;
    spA5 = arg3;
    spA0 = 0xFF;
    spAA = 0xFF;
    spAB = 0xFF;
    spAC = 0;
    spB0 = 0x200004;
    spB4 = 0x1F0601;
    spB8 = 8;
    spBC = 0x44;
    spC0 = 0x80;
    spC4 = 0x20;
    spC8 = 0;
    spC9 = 0xA;
    sp98 = 0x9A;
    sp88 = 0.0f;
    spD0 = D_800AAEC4;
    spCC = (*(s32 *)((char *)(arg0) + 0x23D));
    spD4 = 1.0f;
    sp90 = 28.0f;
    sp94 = D_800AAEC8;
    sp8C = -37.0f;
    temp_v0 = func_1515548C(&sp88, 9, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x70, (f32 *) &sp2C, 0x58);
    }
    sp98 = 0x9B;
    sp8C = 0.0f;
    spD0 = 1.0f;
    spD4 = D_800AAECC;
    sp90 = D_800AAED0;
    sp94 = 28.0f;
    sp88 = -37.0f;
    temp_v0_2 = func_1515548C(&sp88, 9, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2 + 0x70, (f32 *) &sp2C, 0x58);
    }
}

s32 func_151CC77C(void *arg0) {
    f32 sp24;
    f32 sp20;
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x70))) + 0x3D0));
    if (temp_v1 == NULL) {
        return 0;
    }
    temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x31C));
    if (temp_v0 == 0) {
        return 0;
    }
    func_15145974(temp_v0 + 0x130, &sp24, &sp20, arg0);
    if ((*(s32 *)((char *)(arg0) + 0x20)) == 0x9A) {
        (*(f32 *)((char *)(arg0) + 0x60)) = (f32) (2.0f * -(sp24 * D_800AAED4 * 2560.0f));
        return 1;
    }
    (*(f32 *)((char *)(arg0) + 0x64)) = (f32) (2.0f * (sp20 * D_800AAED8 * 2560.0f));
    return 1;
}

void func_151CC840(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 spCC;
    s8 spC9;
    s8 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s8 spA7;
    s8 spA6;
    u8 spA5;
    u8 spA4;
    u8 spA3;
    s8 spA2;
    s16 spA0;
    s16 sp9E;
    u16 sp9C;
    s16 sp9A;
    s8 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s8 sp39;
    s8 sp38;
    f32 sp34;
    f32 sp30;
    void *sp2C;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 var_v0;

    sp30 = 0.0f;
    sp39 = 0;
    sp38 = 0;
    sp9A = 0x12C;
    sp2C = arg0;
    sp34 = 130.0f;
    if (arg4 != 0) {
        var_v0 = 0x40;
    } else {
        var_v0 = 0;
    }
    sp9E = 1;
    sp9C = var_v0 | 0x10 | (1 << ((*(s32 *)((char *)(arg0) + 0x23D)) + 0xB));
    spA3 = arg1;
    spA4 = arg2;
    spA2 = 7;
    spA6 = 0xB4;
    spA7 = 0xFF;
    spA8 = 0xFF;
    spA9 = 0xFF;
    spA5 = arg3;
    spA0 = 0xFF;
    spAA = 0xFF;
    spAB = 0xFF;
    spAC = 0;
    spB0 = 0x200004;
    spB4 = 0x1F0601;
    spB8 = 8;
    spBC = 0x44;
    spC0 = 0x80;
    spC4 = 0x20;
    spC8 = 0;
    spC9 = 0xA;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp98 = 0x64;
    spCC = (*(s32 *)((char *)(arg0) + 0x23D));
    sp94 = 12.0f;
    sp90 = 12.0f;
    temp_v0 = func_1515548C(&sp88, 0, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x70, (f32 *) &sp2C, 0x58);
    }
    sp98 = 0x9D;
    sp9C &= 0xFFF9;
    sp94 = 7.0f;
    sp90 = 7.0f;
    sp88 = 55.0f;
    sp8C = 0.0f;
    temp_v0_2 = func_1515548C(&sp88, 0, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2 + 0x70, (f32 *) &sp2C, 0x58);
    }
    sp9C = (sp9C & 0xFFF9) | 2;
    sp88 = -55.0f;
    sp8C = 0.0f;
    temp_v0_3 = func_1515548C(&sp88, 0, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0_3 != 0) {
        memcpy(temp_v0_3 + 0x70, (f32 *) &sp2C, 0x58);
    }
    sp98 = 0x9C;
    sp9C = (sp9C & 0xFFF9) | 4;
    sp88 = 0.0f;
    sp8C = 55.0f;
    temp_v0_4 = func_1515548C(&sp88, 0, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0_4 != 0) {
        memcpy(temp_v0_4 + 0x70, (f32 *) &sp2C, 0x58);
    }
    sp9C &= 0xFFF9;
    sp88 = 0.0f;
    sp8C = -55.0f;
    temp_v0_5 = func_1515548C(&sp88, 0, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0_5 != 0) {
        memcpy(temp_v0_5 + 0x70, (f32 *) &sp2C, 0x58);
    }
    sp98 = 0x9E;
    sp9C |= 6;
    sp94 = 6.0f;
    sp90 = 6.0f;
    sp88 = 44.0f;
    sp8C = 44.0f;
    temp_v0_6 = func_1515548C(&sp88, 0, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0_6 != 0) {
        memcpy(temp_v0_6 + 0x70, (f32 *) &sp2C, 0x58);
    }
    sp9C = (sp9C & 0xFFF9) | 4;
    sp88 = -44.0f;
    sp8C = 44.0f;
    temp_v0_7 = func_1515548C(&sp88, 0, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0_7 != 0) {
        memcpy(temp_v0_7 + 0x70, (f32 *) &sp2C, 0x58);
    }
    sp9C &= 0xFFF9;
    sp88 = -44.0f;
    sp8C = -44.0f;
    temp_v0_8 = func_1515548C(&sp88, 0, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0_8 != 0) {
        memcpy(temp_v0_8 + 0x70, (f32 *) &sp2C, 0x58);
    }
    sp9C = (sp9C & 0xFFF9) | 2;
    sp88 = 44.0f;
    sp8C = -44.0f;
    temp_v0_9 = func_1515548C(&sp88, 0, 0, 0, 0x58, (s32) arg5, 1);
    if (temp_v0_9 != 0) {
        memcpy(temp_v0_9 + 0x70, (f32 *) &sp2C, 0x58);
    }
}

void func_151CCD1C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 spCC;
    s8 spC9;
    s8 spC8;
    s32 spC4;
    s32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    s8 spAB;
    s8 spAA;
    s8 spA9;
    s8 spA8;
    s8 spA7;
    s8 spA6;
    u8 spA5;
    u8 spA4;
    u8 spA3;
    s8 spA2;
    s16 spA0;
    s16 sp9E;
    s16 sp9C;
    s16 sp9A;
    s8 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s8 sp39;
    s8 sp38;
    f32 sp34;
    f32 sp30;
    void *sp2C;
    s32 temp_v0;

    sp30 = 0.0f;
    sp39 = 0;
    sp38 = 0;
    sp9A = 0x12C;
    sp2C = arg0;
    sp34 = 130.0f;
    sp9C = (1 << ((*(s32 *)((char *)(arg0) + 0x23D)) + 0xB)) | 0x50;
    sp9E = 1;
    spA3 = arg1;
    spA4 = arg2;
    spA2 = 7;
    spA6 = 0xB4;
    spA7 = 0xFF;
    spA8 = 0xFF;
    spA9 = 0xFF;
    spA5 = arg3;
    spA0 = 0xFF;
    spAA = 0xFF;
    spAB = 0xFF;
    spAC = 0;
    spB0 = 0x200004;
    spB4 = 0x1F0601;
    spB8 = 8;
    spBC = 0x44;
    spC0 = 0x80;
    spC4 = 0x20;
    spC8 = 0;
    spC9 = 0xA;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp98 = 0xB4;
    sp90 = 65.0f;
    sp94 = 65.0f;
    spCC = (*(s32 *)((char *)(arg0) + 0x23D));
    temp_v0 = func_1515548C(&sp88, 0, 0, 0, 0x58, 0xFF, 1);
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x70, (f32 *) &sp2C, 0x58);
    }
}

void func_151CCE94(void *arg0) {
    void *sp28;
    s32 temp_v0;

    if (D_800BE616 != 0) {
        sp28 = arg0;
        temp_v0 = func_151A4FD0(0, 0, 0, 0xFF, 0, (s32) (*(s32 *)((char *)(arg0) + 0x23D)), 1, 4);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x20, (f32 *) &sp28, 4);
        }
    }
}

void func_151CCF08(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    u8 sp124;
    s8 sp121;
    s8 sp120;
    s32 sp11C;
    s32 sp118;
    s32 sp114;
    s32 sp110;
    s32 sp10C;
    s32 sp108;
    s32 sp104;
    s8 sp103;
    s8 sp102;
    s8 sp101;
    s8 sp100;
    s8 spFF;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s8 spFB;
    s8 spFA;
    s16 spF8;
    s16 spF6;
    u16 spF4;
    s16 spF2;
    u8 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    s8 spD8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s8 sp91;
    s8 sp90;
    f32 sp8C;
    f32 sp88;
    void *sp84;
    s32 sp7C;
    f32 var_f18;
    s32 temp_t0;
    s32 temp_t3;
    s32 temp_t5;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s5;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 var_v0;

    spA0 = 0.0f;
    temp_t0 = (D_80082FA0 == 1) * 4;
    sp84 = arg0;
    sp88 = 0.0f;
    sp9C = *(&D_800AAD8C + temp_t0);
    spA4 = *(&D_800AADB4 + temp_t0);
    sp8C = 130.0f;
    if (arg2 == -1) {
        var_v0 = 0;
    } else {
        var_v0 = 4;
    }
    sp90 = var_v0;
    spD8 = arg2;
    spF2 = 0x12C;
    if (arg1 & 0xFF) {
        var_v0_2 = 0x40;
    } else {
        var_v0_2 = 0;
    }
    spFA = 7;
    spFB = 0xFF;
    spF4 = var_v0_2 | 0x30;
    spF6 = 1;
    spFC = 0xFF;
    spFD = 0xFF;
    spFE = 0xFF;
    spFF = 0xFF;
    spF8 = 0xFF;
    sp100 = 0xFF;
    sp101 = 0xFF;
    sp102 = 0xFF;
    sp103 = 0xFF;
    sp104 = 0;
    sp108 = 0x200004;
    sp10C = 0x1F0601;
    sp110 = 8;
    sp114 = 0x13;
    sp118 = 0x80;
    sp11C = 0x20;
    sp120 = 0;
    sp121 = 0;
    sp130 = 0.0f;
    sp134 = 0.0f;
    var_s5 = 0;
    sp128 = 1.0f;
    sp12C = 1.0f;
    spE8 = 35.75f;
    spEC = 16.0f;
    sp124 = (*(s32 *)((char *)(arg0) + 0x23D));
    do {
        var_s0 = 0;
        sp7C = D_8008FC28;
        if (var_s5 != 0) {
            spE4 = 92.0f;
        } else {
            spE4 = -90.0f;
        }
        if (var_s5 != 0) {
            var_v0_3 = 4;
        } else {
            var_v0_3 = 0;
        }
        spF4 |= var_v0_3;
        if (var_s5 != 0) {
            sp91 = 5;
        } else {
            sp91 = 4;
        }
loop_16:
        var_f18 = (f32) var_s0;
        if (var_s0 < 0) {
            var_f18 += 4294967296.0f;
        }
        spE0 = ((var_f18 * 71.5f) + 35.75f) - 143.0f;
        spF0 = *(&sp7C + var_s0);
        temp_v0 = func_1515548C(&spE0, 0xB, 0, 0, 0x58, arg3 & 0xFF, 1);
        if (temp_v0 != 0) {
            memcpy(temp_v0 + 0x70, (f32 *) &sp84, 0x58);
        }
        temp_t3 = (var_s0 + 1) & 0xFF;
        var_s0 = temp_t3;
        if (temp_t3 < 4) {
            goto loop_16;
        }
        temp_t5 = (var_s5 + 1) & 0xFF;
        var_s5 = temp_t5;
    } while (temp_t5 < 2);
}

void func_151CD224(void *arg0) {
    f32 temp_f2;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x70;
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0xD));
    temp_f2 = (1.0f - ((func_151CC1D4(0) - (*(s32 *)((char *)(temp_v0) + 0x18))) * (*(s32 *)((char *)(temp_v0) + 0x20)))) * 75.0f;
    if (temp_v1 == 5) {
        (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (92.0f + temp_f2);
        return;
    }
    if (temp_v1 == 4) {
        (*(f32 *)((char *)(arg0) + 0x14)) = (f32) (-92.0f - temp_f2);
    }
}
