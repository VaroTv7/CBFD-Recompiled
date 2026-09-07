/**
 * Auto-decompiled from asm/133190.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15081690(); /* extern */
u32 random_u32();                                /* extern */
f32 random_float();                /* extern */
s32 func_15130280();        /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();      /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143134();                /* extern */
void * func_15143794();              /* extern */
void * func_15143874();            /* extern */
void *func_15144B34();                           /* extern */
s32 func_15146078();     /* extern */
void * func_1515C244();          /* extern */
void *func_15167A68();      /* extern */
void * func_151C329C();          /* extern */
void * func_151D5D60();    /* extern */
void * func_151D5E30();                    /* extern */
void * memcpy();                         /* extern */
void func_15106214();                     /* static */
f32 func_151064B4(f32 arg0);
f32 func_151064DC(f32 arg0);
f32 func_15106510(f32 arg0);
f32 func_15106540(f32 arg0);
f32 func_15106558(f32 arg0);
f32 func_15106584(f32 arg0);
f32 func_151065BC(f32 arg0);
f32 func_151065EC(f32 arg0);
void func_15106610();                     /* static */
void func_151070F8(s32 arg0, s16 arg1, s16 arg2, f32 arg3);
void func_15107A20();
void func_15107AE0();
void func_15107F54();
extern s32 D_80088C10;
extern s32 D_80088C18;
extern s32 D_80088C28;
extern s32 D_80088C38;
extern s32 D_80090D70;
extern f32 D_800A2410;
extern f32 D_800A2414;
extern f32 D_800A2418;
extern f32 D_800A241C;
extern f32 D_800A2420;
extern f32 D_800A2424;
extern s32 D_800A4AC8;
extern s32 D_800D2C9C;

void *func_15105CE0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 spC4;
    s16 spC0;
    s8 spBE;
    s8 spBD;
    s8 spBC;
    s8 spBB;
    s8 spBA;
    s8 spB9;
    s8 spB8;
    s32 spB4;
    s32 spB0;
    f32 spAC;
    void * spA0;
    void * sp94;
    void * sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    s16 sp7A;
    s16 sp78;
    s16 sp76;
    s8 sp75;
    s8 sp74;
    u8 sp73;
    u8 sp72;
    u8 sp71;
    u8 sp70;
    s8 sp6F;
    s8 sp6E;
    s8 sp6D;
    s8 sp6C;
    s32 sp68;
    s32 sp64;
    s16 sp62;
    s16 sp60;
    s32 sp5C;
    s32 sp58;
    s32 temp_lo;
    s32 temp_s7;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    void *temp_t3;
    void *temp_t6;
    void *temp_v0;

    temp_s7 = arg2 & 0xFF;
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x38));
    temp_lo = (temp_v0_2 + 2) * 0xC;
    temp_v0 = func_15167A68(0x40, arg3, (temp_v0_2 * 0x34) + temp_lo + arg1 + 0x88, 1, temp_s7, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    memcpy((char *)(temp_v0) + 0x10, arg0, 0x50);
    (*(s32 *)((char *)(temp_v0) + 0x60)) = (void *) ((char *)(temp_v0) + (temp_v0_2 * 0x34) + temp_lo + 0x88);
    (*(f32 *)((char *)(temp_v0) + 0x64)) = (f32) (1.0f / (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + 1));
    (*(s16 *)((char *)(temp_v0) + 0x68)) = (s16) ((random_u32() % (u32) ((*(s16 *)((char *)(arg0) + 0x46)) + 1)) + (*(s16 *)((char *)(arg0) + 0x44)));
    func_15106214(temp_v0);
    func_15106610(temp_v0);
    (*(s32 *)((char *)(temp_v0) + 0x6C)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x70)) = 0;
    bzero((char *)(temp_v0) + 0x74, 0x10);
    (*(s32 *)((char *)(temp_v0) + 0x84)) = (s32) (((*(s32 *)((char *)(temp_v0) + 0x48)) * 0x30) + 0x60);
    sp75 = 0x2B;
    sp60 = 0x4404;
    sp58 = 0x200005;
    sp5C = 0;
    sp62 = 0x12C;
    sp64 = 0;
    sp68 = 0;
    sp6C = 0xFF;
    sp6D = 0xFF;
    sp6E = 0xFF;
    sp6F = 0xFF;
    sp70 = (*(s32 *)((char *)(arg0) + 0x48));
    sp71 = (*(s32 *)((char *)(arg0) + 0x49));
    sp72 = (*(s32 *)((char *)(arg0) + 0x4A));
    sp74 = 0xFF;
    sp73 = (*(s32 *)((char *)(arg0) + 0x4B));
    (*(s32 *)((char *)&(sp94) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    (*(s32 *)((char *)&(sp94) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(sp94) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    var_s1 = 0;
    (*(s32 *)((char *)&(spA0) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x0));
    var_v1 = 0;
    (*(s32 *)((char *)&(spA0) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x4));
    (*(s32 *)((char *)&(spA0) + 0x8)) = (s32) (*(s32 *)((char *)&(D_800A5480) + 0x8));
    sp76 = 1;
    sp78 = 0xFF;
    sp7A = 1;
    spB0 = 0xC000;
    spB8 = 6;
    spB9 = 6;
    spBA = -1;
    spBB = -1;
    spBC = -1;
    spBD = 0;
    spB4 = 0;
    spBE = 0xFF;
    spC0 = 0;
    spAC = 0.0f;
    sp7C = 1.0f;
    spC4 = D_800A2410;
    sp84 = (*(s32 *)((char *)(arg0) + 0x40)) * D_800A2414 * 200.0f;
    sp80 = sp84;
    do {
        var_v0 = 3;
        if (var_v1 == 0) {
            var_v0 = 0;
        }
        temp_t6 = arg0 + (var_v0 * 0xC);
        (*(s32 *)((char *)&(sp88) + 0x0)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x4));
        (*(s32 *)((char *)&(sp88) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x8));
        (*(s32 *)((char *)&(sp88) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t6) + 0xC));
        var_s0 = 0;
        if (random_u32() != 0) {
            var_s0 = 0x40;
        }
        if (random_u32() != 0) {
            var_v0_2 = 0x80;
        } else {
            var_v0_2 = 0;
        }
        spB0 = var_v0_2 | var_s0;
        var_v1 = (var_s1 + 1) & 0xFF;
        temp_t3 = (char *)(temp_v0) + (var_s1 * 4);
        var_s1 = var_v1;
        (*(s32 *)((char *)(temp_t3) + 0x6C)) = func_15130280(&sp58, 0, 0, 0, temp_s7, arg3);
    } while (var_v1 < 2);
    return temp_v0;
}

void func_1510608C(void *arg0) {
    u8 sp2B;
    s32 (*temp_v1)(void *, u8 *);
    s8 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    sp2B = 0;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x44));
    if (temp_v0 != -1) {
        temp_v1 = *(&D_80088C10 + (temp_v0 * 4));
        if ((temp_v1 != NULL) && (temp_v1(arg0, &sp2B) == 0)) {
            func_1516972C(arg0);
        }
    }
    if ((*(s32 *)((char *)(arg0) + 0x12)) & 1) {
        (*(s16 *)((char *)(arg0) + 0x10)) = (s16) ((*(s16 *)((char *)(arg0) + 0x10)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x10)) < 0) {
            func_1516972C(arg0);
        }
    }
    if (sp2B != 0) {
        func_15106214(arg0);
    }
    (*(s16 *)((char *)(arg0) + 0x68)) = (s16) ((*(s16 *)((char *)(arg0) + 0x68)) - D_800BE9E4);
    if ((*(s32 *)((char *)(arg0) + 0x68)) < 0) {
        func_15106610(arg0);
        (*(s16 *)((char *)(arg0) + 0x68)) = (s16) ((random_u32() % (u32) ((*(s16 *)((char *)(arg0) + 0x56)) + 1)) + (*(s16 *)((char *)(arg0) + 0x54)));
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x6C));
    if (temp_v0_2 != NULL) {
        (*(s32 *)((char *)(temp_v0_2) + 0x40)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
        (*(s32 *)((char *)(temp_v0_2) + 0x44)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
        (*(s32 *)((char *)(temp_v0_2) + 0x48)) = (s32) (*(s32 *)((char *)(arg0) + 0x1C));
    }
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x70));
    if (temp_v0_3 != NULL) {
        (*(s32 *)((char *)(temp_v0_3) + 0x40)) = (s32) (*(s32 *)((char *)(arg0) + 0x38));
        (*(s32 *)((char *)(temp_v0_3) + 0x44)) = (s32) (*(s32 *)((char *)(arg0) + 0x3C));
        (*(s32 *)((char *)(temp_v0_3) + 0x48)) = (s32) (*(s32 *)((char *)(arg0) + 0x40));
    }
}

void *func_151061E0(void *arg0) {
    return (char *)(arg0) + 0x88;
}

void *func_151061EC(void *arg0) {
    return (char *)(arg0) + ((*(s32 *)((char *)(arg0) + 0x48)) * 0x34) + 0x88;
}

void func_15106214(void *arg0) {
    f32 sp78;
    f32 sp64;
    f32 sp60;
    f32 temp_f0;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    f32 var_f20;
    s32 var_s2;
    void *temp_v0;
    void *var_s1;
    void *var_s3;
    void *var_s4;
    void *var_s5;

    temp_v0 = func_151061E0(arg0);
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x64));
    var_s2 = 0;
    var_f20 = temp_f2;
    if ((*(s32 *)((char *)(arg0) + 0x48)) > 0) {
        var_s1 = temp_v0;
        var_s3 = (char *)(temp_v0) + 0x10;
        var_s4 = (char *)(temp_v0) + 0x1C;
        var_s5 = (char *)(temp_v0) + 0x28;
        sp78 = temp_f2;
        do {
            (*(s32 *)((char *)(var_s1) + 0x0)) = var_f20;
            temp_f30 = func_151064B4(var_f20);
            sp64 = func_151064DC(var_f20);
            sp60 = func_15106510(var_f20);
            temp_f22 = func_15106540(var_f20);
            temp_f24 = func_15106558(var_f20);
            temp_f26 = func_15106584(var_f20);
            temp_f28 = func_151065BC(var_f20);
            temp_f0 = func_151065EC(var_f20);
            (*(f32 *)((char *)(var_s1) + 0x4)) = (f32) (((*(f32 *)((char *)(arg0) + 0x38)) * temp_f22) + (((*(f32 *)((char *)(arg0) + 0x14)) * temp_f30) + ((*(f32 *)((char *)(arg0) + 0x20)) * sp64) + ((*(f32 *)((char *)(arg0) + 0x2C)) * sp60)));
            (*(f32 *)((char *)(var_s1) + 0x8)) = (f32) (((*(f32 *)((char *)(arg0) + 0x3C)) * temp_f22) + (((*(f32 *)((char *)(arg0) + 0x18)) * temp_f30) + ((*(f32 *)((char *)(arg0) + 0x24)) * sp64) + ((*(f32 *)((char *)(arg0) + 0x30)) * sp60)));
            (*(f32 *)((char *)(var_s1) + 0xC)) = (f32) (((*(f32 *)((char *)(arg0) + 0x40)) * temp_f22) + (((*(f32 *)((char *)(arg0) + 0x1C)) * temp_f30) + ((*(f32 *)((char *)(arg0) + 0x28)) * sp64) + ((*(f32 *)((char *)(arg0) + 0x34)) * sp60)));
            (*(f32 *)((char *)(var_s1) + 0x10)) = (f32) (((*(f32 *)((char *)(arg0) + 0x38)) * temp_f0) + (((*(f32 *)((char *)(arg0) + 0x14)) * temp_f24) + ((*(f32 *)((char *)(arg0) + 0x20)) * temp_f26) + ((*(f32 *)((char *)(arg0) + 0x2C)) * temp_f28)));
            (*(f32 *)((char *)(var_s1) + 0x14)) = (f32) (((*(f32 *)((char *)(arg0) + 0x3C)) * temp_f0) + (((*(f32 *)((char *)(arg0) + 0x18)) * temp_f24) + ((*(f32 *)((char *)(arg0) + 0x24)) * temp_f26) + ((*(f32 *)((char *)(arg0) + 0x30)) * temp_f28)));
            (*(f32 *)((char *)(var_s1) + 0x18)) = (f32) (((*(f32 *)((char *)(arg0) + 0x40)) * temp_f0) + (((*(f32 *)((char *)(arg0) + 0x1C)) * temp_f24) + ((*(f32 *)((char *)(arg0) + 0x28)) * temp_f26) + ((*(f32 *)((char *)(arg0) + 0x34)) * temp_f28)));
            var_s2 += 1;
            if (func_15146078(sp64, var_s3, var_s4, var_s5) == 0) {
                (*(s32 *)((char *)(var_s1) + 0x1C)) = 0.0f;
                (*(s32 *)((char *)(var_s1) + 0x20)) = 0.0f;
                (*(s32 *)((char *)(var_s1) + 0x24)) = 0.0f;
                (*(s32 *)((char *)(var_s1) + 0x28)) = 0.0f;
                (*(s32 *)((char *)(var_s1) + 0x2C)) = 0.0f;
                (*(s32 *)((char *)(var_s1) + 0x30)) = 0.0f;
            }
            var_s1 = (char *)(var_s1) + 0x34;
            var_s3 = (char *)(var_s3) + 0x34;
            var_s4 = (char *)(var_s4) + 0x34;
            var_s5 = (char *)(var_s5) + 0x34;
            var_f20 += sp78;
        } while (var_s2 < (*(s32 *)((char *)(arg0) + 0x48)));
    }
}

f32 func_151064B4(f32 arg0) {
    f32 temp_f2;

    temp_f2 = 1.0f - arg0;
    return temp_f2 * temp_f2 * temp_f2;
}

f32 func_151064DC(f32 arg0) {
    f32 temp_f2;

    temp_f2 = 1.0f - arg0;
    return 3.0f * arg0 * temp_f2 * temp_f2;
}

f32 func_15106510(f32 arg0) {
    return 3.0f * arg0 * arg0 * (1.0f - arg0);
}

f32 func_15106540(f32 arg0) {
    return arg0 * arg0 * arg0;
}

f32 func_15106558(f32 arg0) {
    f32 temp_f2;

    temp_f2 = 1.0f - arg0;
    return -3.0f * temp_f2 * temp_f2;
}

f32 func_15106584(f32 arg0) {
    return ((9.0f * arg0 * arg0) - (12.0f * arg0)) + 3.0f;
}

f32 func_151065BC(f32 arg0) {
    return (-9.0f * arg0 * arg0) + (6.0f * arg0);
}

f32 func_151065EC(f32 arg0) {
    return 3.0f * arg0 * arg0;
}

void func_15106610(void *arg0) {
    f32 sp54;
    f32 sp50;
    s32 var_s2;
    u32 temp_s5;
    void *temp_s0;
    void *temp_t1;
    void *temp_v0;
    void *var_s3;
    void *var_s4;

    temp_s0 = func_151061E0(arg0);
    temp_v0 = func_151061EC(arg0);
    var_s2 = 1;
    var_s3 = (char *)(temp_v0) + 0xC;
    (*(s32 *)((char *)(temp_v0) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
    var_s4 = temp_s0;
    (*(s32 *)((char *)(temp_v0) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
    (*(s32 *)((char *)(temp_v0) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x1C));
    temp_t1 = (char *)(temp_v0) + ((*(s32 *)((char *)(arg0) + 0x48)) * 0xC);
    (*(s32 *)((char *)(temp_t1) + 0xC)) = (s32) (*(s32 *)((char *)(arg0) + 0x38));
    (*(s32 *)((char *)(temp_t1) + 0x10)) = (s32) (*(s32 *)((char *)(arg0) + 0x3C));
    (*(s32 *)((char *)(temp_t1) + 0x14)) = (s32) (*(s32 *)((char *)(arg0) + 0x40));
    if (((*(s32 *)((char *)(arg0) + 0x48)) + 1) >= 2) {
        do {
            temp_s5 = random_u32();
            func_15143874((s16) (temp_s5 & 0xFF), random_float() * (*(s16 *)((char *)(arg0) + 0x4C)), &sp50, &sp54);
            (*(f32 *)((char *)(var_s3) + 0x0)) = (f32) (((*(f32 *)((char *)(var_s4) + 0x1C)) * sp50) + ((*(f32 *)((char *)(var_s4) + 0x28)) * sp54) + (*(f32 *)((char *)(var_s4) + 0x4)));
            (*(f32 *)((char *)(var_s3) + 0x4)) = (f32) (((*(f32 *)((char *)(var_s4) + 0x20)) * sp50) + ((*(f32 *)((char *)(var_s4) + 0x2C)) * sp54) + (*(f32 *)((char *)(var_s4) + 0x8)));
            (*(f32 *)((char *)(var_s3) + 0x8)) = (f32) (((*(f32 *)((char *)(var_s4) + 0x24)) * sp50) + ((*(f32 *)((char *)(var_s4) + 0x30)) * sp54) + (*(f32 *)((char *)(var_s4) + 0xC)));
            var_s2 += 1;
            var_s3 = (char *)(var_s3) + 0xC;
            var_s4 = (char *)(var_s4) + 0x34;
        } while ((*(s32 *)((char *)(arg0) + 0x48)) >= var_s2);
    }
}

void *func_151067B8(void *arg0, void *arg1, s32 arg2) {
    void *spF4;
    f32 spCC;
    s8 spCB;
    void *spC4;
    f32 spB4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f22;
    f32 var_f22_2;
    f32 var_f24;
    f32 var_f24_2;
    s32 var_a3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s1;
    void *temp_t7;
    void *temp_t8;
    void *temp_t8_2;
    void *temp_t9;
    void *var_s0;
    void *var_v0;

    f32 spB8;
    f32 spBC;
    var_s0 = arg0;
    func_151D5D60((char *)(arg1) + 0x74, arg2, (*(s32 *)((char *)(arg1) + 0x84)), &spF4, 0);
    if (spF4 == NULL) {

    } else {
        temp_s1 = func_15144B34(arg2);
        spCB = 1;
        spC4 = func_151061EC(arg1);
        temp_f0 = (*(s32 *)((char *)(spC4) + 0x4));
        temp_f18 = (*(s32 *)((char *)(spC4) + 0x0));
        temp_f22 = (*(s32 *)((char *)(spC4) + 0x10)) - temp_f0;
        temp_f2 = (*(s32 *)((char *)(spC4) + 0x8));
        temp_f20 = (*(s32 *)((char *)(spC4) + 0xC)) - temp_f18;
        temp_f30 = temp_f2 - (*(s32 *)((char *)(temp_s1) + 0x8));
        var_s0 = func_15142FBC(func_1513F4E4(func_15142B7C(func_15142C10(func_15142E24(var_s0, &D_80090D70, 0, 0, 0, 0, 0x2C, 0, 0, &spCB, 3), (*(s32 *)((char *)(arg1) + 0x58)), (*(s32 *)((char *)(arg1) + 0x59)), (*(s32 *)((char *)(arg1) + 0x5A)), (s32) (*(s32 *)((char *)(arg1) + 0x5B)), &spCB), 0x200005, 0x1F0600), 0x44, &spCB), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0xC)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x8)), &spCB);
        temp_f24 = (*(s32 *)((char *)(spC4) + 0x14)) - temp_f2;
        temp_f28 = temp_f0 - (*(s32 *)((char *)(temp_s1) + 0x4));
        temp_f26 = temp_f18 - (*(s32 *)((char *)(temp_s1) + 0x0));
        temp_f12 = (temp_f22 * temp_f30) - (temp_f28 * temp_f24);
        var_v0 = (char *)(spC4) + 0xC;
        temp_f14 = (temp_f24 * temp_f26) - (temp_f30 * temp_f20);
        temp_f16 = (temp_f20 * temp_f28) - (temp_f26 * temp_f22);
        temp_f0_2 = (temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16);
        spCC = temp_f0_2;
        if (D_800A2418 < temp_f0_2) {
            temp_f2_2 = (*(s32 *)((char *)(arg1) + 0x50)) / sqrtf(temp_f0_2);
            var_f20 = temp_f12 * temp_f2_2;
            var_f22 = temp_f14 * temp_f2_2;
            var_f24 = temp_f16 * temp_f2_2;
        } else {
            var_f24 = 0.0f;
            var_f20 = 0.0f;
            var_f22 = 0.0f;
        }
        var_a3 = 1;
        (*(s16 *)((char *)(spF4) + 0x0)) = (s16) (s32) (temp_f18 + var_f20);
        (*(s16 *)((char *)(spF4) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(spC4) + 0x4)) + var_f22);
        (*(s16 *)((char *)(spF4) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(spC4) + 0x8)) + var_f24);
        (*(s32 *)((char *)(spF4) + 0x8)) = 0;
        (*(s32 *)((char *)(spF4) + 0xA)) = 0;
        temp_t8 = (char *)(spF4) + 0x10;
        spF4 = temp_t8;
        (*(s16 *)((char *)(spF4) + 0x10)) = (s16) (s32) (*(s16 *)((char *)(spC4) + 0x0));
        (*(s16 *)((char *)(spF4) + 0x2)) = (s16) (s32) (*(s16 *)((char *)(spC4) + 0x4));
        (*(s16 *)((char *)(spF4) + 0x4)) = (s16) (s32) (*(s16 *)((char *)(spC4) + 0x8));
        (*(s32 *)((char *)(spF4) + 0x8)) = 0x200;
        (*(s32 *)((char *)(temp_t8) + 0xA)) = 0;
        temp_t9 = (char *)(spF4) + 0x10;
        spF4 = temp_t9;
        (*(s16 *)((char *)(spF4) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(spC4) + 0x0)) - var_f20);
        (*(s16 *)((char *)(spF4) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(spC4) + 0x4)) - var_f22);
        (*(s16 *)((char *)(spF4) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(spC4) + 0x8)) - var_f24);
        (*(s32 *)((char *)(spF4) + 0x8)) = 0x400;
        (*(s32 *)((char *)(temp_t9) + 0xA)) = 0;
        spF4 = (char *)(spF4) + 0x10;
        (*(s32 *)((char *)&(spB4) + 0x0)) = (*(s32 *)((char *)(spC4) + 0x0));
        (*(f32 *)((char *)&(spB4) + 0x4)) = (f32) (*(f32 *)((char *)(spC4) + 0x4));
        (*(f32 *)((char *)&(spB4) + 0x8)) = (f32) (*(f32 *)((char *)(spC4) + 0x8));
        if (((*(s32 *)((char *)(arg1) + 0x48)) + 2) >= 2) {
            do {
                temp_f0_3 = (*(s32 *)((char *)(var_v0) + 0x4));
                temp_f18_2 = (*(s32 *)((char *)(var_v0) + 0x0));
                temp_f22_2 = spB8 - temp_f0_3;
                temp_f2_3 = (*(s32 *)((char *)(var_v0) + 0x8));
                temp_f20_2 = spB4 - temp_f18_2;
                temp_f30_2 = temp_f2_3 - (*(s32 *)((char *)(temp_s1) + 0x8));
                temp_f24_2 = spBC - temp_f2_3;
                temp_f28_2 = temp_f0_3 - (*(s32 *)((char *)(temp_s1) + 0x4));
                temp_f26_2 = temp_f18_2 - (*(s32 *)((char *)(temp_s1) + 0x0));
                temp_f12_2 = (temp_f22_2 * temp_f30_2) - (temp_f28_2 * temp_f24_2);
                temp_f14_2 = (temp_f24_2 * temp_f26_2) - (temp_f30_2 * temp_f20_2);
                temp_f16_2 = (temp_f20_2 * temp_f28_2) - (temp_f26_2 * temp_f22_2);
                temp_f0_4 = (temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2) + (temp_f16_2 * temp_f16_2);
                spCC = temp_f0_4;
                if (D_800A241C < temp_f0_4) {
                    temp_f2_4 = (*(s32 *)((char *)(arg1) + 0x50)) / sqrtf(temp_f0_4);
                    var_f20_2 = temp_f12_2 * temp_f2_4;
                    var_f22_2 = temp_f14_2 * temp_f2_4;
                    var_f24_2 = temp_f16_2 * temp_f2_4;
                } else {
                    var_f24_2 = 0.0f;
                    var_f20_2 = 0.0f;
                    var_f22_2 = 0.0f;
                }
                (*(s16 *)((char *)(spF4) + 0x0)) = (s16) (s32) (temp_f18_2 - var_f20_2);
                (*(s16 *)((char *)(spF4) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(var_v0) + 0x4)) - var_f22_2);
                (*(s16 *)((char *)(spF4) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(var_v0) + 0x8)) - var_f24_2);
                (*(s32 *)((char *)(spF4) + 0x8)) = 0;
                (*(s32 *)((char *)(spF4) + 0xA)) = 0;
                temp_t8_2 = (char *)(spF4) + 0x10;
                spF4 = temp_t8_2;
                (*(s16 *)((char *)(spF4) + 0x10)) = (s16) (s32) (*(s16 *)((char *)(var_v0) + 0x0));
                (*(s16 *)((char *)(spF4) + 0x2)) = (s16) (s32) (*(s16 *)((char *)(var_v0) + 0x4));
                (*(s16 *)((char *)(spF4) + 0x4)) = (s16) (s32) (*(s16 *)((char *)(var_v0) + 0x8));
                (*(s32 *)((char *)(spF4) + 0x8)) = 0x200;
                (*(s32 *)((char *)(temp_t8_2) + 0xA)) = 0;
                temp_t7 = (char *)(spF4) + 0x10;
                spF4 = temp_t7;
                (*(s16 *)((char *)(spF4) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(var_v0) + 0x0)) + var_f20_2);
                (*(s16 *)((char *)(spF4) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(var_v0) + 0x4)) + var_f22_2);
                (*(s16 *)((char *)(spF4) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(var_v0) + 0x8)) + var_f24_2);
                (*(s32 *)((char *)(spF4) + 0x8)) = 0x400;
                (*(s32 *)((char *)(temp_t7) + 0xA)) = 0;
                spF4 = (char *)(spF4) + 0x10;
                (*(s32 *)((char *)(var_s0) + 0x0)) = 0x0100600C;
                temp_s0 = (char *)(var_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(spF4) - 0x60);
                temp_s0_2 = (char *)(temp_s0) + 8;
                (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000206;
                (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05020806;
                (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                temp_s0_3 = (char *)(temp_s0_2) + 8;
                (*(s32 *)((char *)(temp_s0_2) + 0x8)) = 0x0502040A;
                (*(s32 *)((char *)(temp_s0_3) + 0x4)) = 0;
                temp_s0_4 = (char *)(temp_s0_3) + 8;
                (*(s32 *)((char *)(temp_s0_3) + 0x8)) = 0x05020A08;
                (*(s32 *)((char *)(temp_s0_4) + 0x4)) = 0;
                var_s0 = (char *)(temp_s0_4) + 8;
                (*(s32 *)((char *)&(spB4) + 0x0)) = (*(s32 *)((char *)(var_v0) + 0x0));
                (*(f32 *)((char *)&(spB4) + 0x4)) = (f32) (*(f32 *)((char *)(var_v0) + 0x4));
                (*(f32 *)((char *)&(spB4) + 0x8)) = (f32) (*(f32 *)((char *)(var_v0) + 0x8));
                var_a3 += 1;
                var_v0 = (char *)(var_v0) + 0xC;
            } while (var_a3 < ((*(s32 *)((char *)(arg1) + 0x48)) + 2));
        }
    }
    return var_s0;
}

void func_15106E78(void *arg0) {
    void * (*temp_v0)(void *, void *);
    void *temp_a0;
    void *temp_a0_2;

    temp_v0 = *(&D_80088C18 + ((*(s32 *)((char *)(arg0) + 0x5C)) * 4));
    if (temp_v0 != NULL) {
        temp_v0(arg0, arg0);
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x6C));
    if (temp_a0 != NULL) {
        func_1516972C(temp_a0, arg0);
    }
    temp_a0_2 = (*(s32 *)((char *)(arg0) + 0x70));
    if (temp_a0_2 != NULL) {
        func_1516972C(temp_a0_2, arg0);
    }
    func_151D5E30((char *)(arg0) + 0x74, arg0);
}

void func_15106EF8(void *arg0) {
    func_15106E78(arg0);
    func_15169804(arg0);
}

void func_15106F24(void *arg0) {
    func_15106E78(arg0);
    func_15169824(arg0);
}

void func_15106F50(void *arg0, s32 arg2) {
    void * (*temp_v0)(s32);

    temp_v0 = *(&D_80088C28 + ((*(s32 *)((char *)(arg0) + 0x5C)) * 4));
    if (temp_v0 != NULL) {
        temp_v0(arg2 & 0xFF);
    }
}

s32 func_15106F98(void *arg0, void *arg1, s32 arg2, s32 arg3, f32 arg4, u8 arg5, u8 arg6, s32 arg7) {
    s32 sp84;
    u8 sp80;
    void * sp50;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    s32 temp_v0;
    void *temp_s0;
    void *temp_t7;
    void *temp_v1;

    sp40 = (1 << arg2) + 1;
    sp48 = 0;
    sp44 = 0;
    M2C_MEMCPY_ALIGNED(&sp50, arg3, 0x30);
    sp80 = arg5;
    temp_v0 = func_15149130(0, -1, 0x3E, -1, 0, 0x30, (sp40 * 0xC) + 0x48, (s32) arg6, arg7);
    sp84 = temp_v0;
    if (temp_v0 != 0) {
        temp_s0 = temp_v0 + 0x28;
        memcpy(temp_s0, &sp40, 0x44);
        temp_v1 = (char *)(temp_s0) + 0x48;
        (*(s32 *)((char *)(temp_s0) + 0xC)) = temp_v1;
        (*(s32 *)((char *)(temp_s0) + 0x48)) = (s32) (*(s32 *)((char *)(arg0) + 0x0));
        (*(s32 *)((char *)(temp_v1) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x4));
        (*(s32 *)((char *)(temp_v1) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x8));
        temp_t7 = (*(s32 *)((char *)(temp_s0) + 0xC)) + (sp40 * 0xC);
        (*(s32 *)((char *)(temp_t7) - 0xC)) = (s32) (*(s32 *)((char *)(arg1) + 0x0));
        (*(s32 *)((char *)(temp_t7) - 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
        (*(s32 *)((char *)(temp_t7) - 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
        func_151070F8(sp84, 0, (s16) (sp40 - 1), arg4);
    }
    return sp84;
}

void func_151070F8(s32 arg0, s16 arg1, s16 arg2, f32 arg3) {
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    s16 temp_s5;
    s16 var_s1;
    s16 var_s3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_v0;
    s32 var_a2;
    void *temp_a0;
    void *temp_s0;
    void *temp_s4;
    void *temp_v1;

    var_s1 = arg1;
    var_s3 = arg2;
    var_a2 = var_s3 - var_s1;
    if (var_a2 >= 2) {
        do {
            temp_lo = var_s1 * 0xC;
            temp_s0 = arg0 + 0x28;
            temp_v0 = (*(s32 *)((char *)(temp_s0) + 0xC));
            temp_s5 = var_s1 + (var_a2 >> 1);
            temp_a0 = temp_v0 + temp_lo;
            temp_s4 = temp_v0 + temp_lo;
            temp_v1 = temp_v0 + (var_s3 * 0xC);
            temp_f22 = (*(s32 *)((char *)(temp_v1) + 0x0)) - (*(s32 *)((char *)(temp_a0) + 0x0));
            temp_f24 = (*(s32 *)((char *)(temp_v1) + 0x4)) - (*(s32 *)((char *)(temp_a0) + 0x4));
            temp_f26 = (*(s32 *)((char *)(temp_v1) + 0x8)) - (*(s32 *)((char *)(temp_a0) + 0x8));
            temp_lo_2 = temp_s5 * 0xC;
            temp_f2 = (random_float(temp_a0, temp_lo, var_a2) * (2.0f * arg3)) + (0.5f - arg3);
            (*(s32 *)((char *)((*(s32 *)((char *)(temp_s0) + 0xC))) + temp_lo_2)) = (*(s32 *)((char *)(temp_s4) + 0x0)) + (temp_f22 * temp_f2);
            (*(f32 *)((char *)(((*(s32 *)((char *)(temp_s0) + 0xC)) + temp_lo_2)) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x4)) + (temp_f24 * temp_f2));
            (*(f32 *)((char *)(((*(s32 *)((char *)(temp_s0) + 0xC)) + temp_lo_2)) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x8)) + (temp_f26 * temp_f2));
            func_151070F8(arg0, var_s1, temp_s5, arg3);
            var_s3 = var_s3;
            var_a2 = var_s3 - temp_s5;
            var_s1 = temp_s5;
        } while (var_a2 >= 2);
    }
}

void func_151072BC(void *arg0) {
    s8 spA0;
    s8 sp9F;
    u8 sp9E;
    u8 sp9D;
    u8 sp9C;
    s16 sp9A;
    s16 sp98;
    f32 sp94;
    f32 sp90;
    s32 sp8C;
    s8 sp88;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp58;
    s8 sp56;
    s16 sp54;
    void *sp50;
    f32 sp44;
    u32 sp38;
    u32 sp34;
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_s0;
    void *temp_s1;
    void *temp_t0;
    void *temp_t1;
    void *temp_v0_3;

    f32 sp5C;
    f32 sp60;
    f32 sp80;
    f32 sp84;
    f32 sp48;
    f32 sp4C;
    temp_s1 = (char *)(arg0) + 0x28;
    if ((*(s32 *)((char *)(arg0) + 0x30)) == 0) {
        if ((*(s32 *)((char *)(temp_s1) + 0x4)) >= ((*(s32 *)((char *)(arg0) + 0x28)) - 1)) {
            (*(s32 *)((char *)(arg0) + 0xE)) = -1;
            (*(u8 *)((char *)(arg0) + 0xD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xD)) | 1);
            return;
        }
        sp50 = arg0;
        sp56 = 1;
        sp88 = -1;
        temp_s0 = (char *)(temp_s1) + 0x10;
        sp94 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x4))) + (*(s32 *)((char *)(temp_s1) + 0x10));
        sp90 = (*(s32 *)((char *)(temp_s0) + 0x8));
        sp98 = (*(s32 *)((char *)(temp_s0) + 0x16));
        sp9A = (*(s32 *)((char *)(temp_s0) + 0x18));
        temp_t1 = (*(s32 *)((char *)(temp_s1) + 0xC)) + ((*(s32 *)((char *)(temp_s1) + 0x4)) * 0xC);
        (*(s32 *)((char *)&(sp58) + 0x0)) = (*(s32 *)((char *)(temp_t1) + 0x0));
        (*(s32 *)((char *)&(sp58) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t1) + 0x4));
        (*(s32 *)((char *)&(sp58) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t1) + 0x8));
        temp_t0 = (*(s32 *)((char *)(temp_s1) + 0xC)) + ((*(s32 *)((char *)(temp_s1) + 0x4)) * 0xC);
        (*(s32 *)((char *)&(sp7C) + 0x0)) = (*(s32 *)((char *)(temp_t0) + 0xC));
        (*(s32 *)((char *)&(sp7C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x10));
        (*(s32 *)((char *)&(sp7C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x14));
        sp34 = random_u32();
        sp38 = random_u32();
        temp_v0 = (*(s32 *)((char *)(temp_s0) + 0x14));
        func_15143794((s16) (sp34 & 0xFF), (s16) (((sp38 % (u32) (temp_v0 + 1)) - (temp_v0 >> 1)) - 0x40), (random_float() * (*(s16 *)((char *)(temp_s0) + 0x10))) + (*(s16 *)((char *)(temp_s0) + 0xC)), &sp44);
        sp64 = sp58 + sp44;
        sp68 = sp5C + sp48;
        sp6C = sp60 + sp4C;
        sp34 = random_u32();
        sp38 = random_u32();
        temp_v0_2 = (*(s32 *)((char *)(temp_s0) + 0x14));
        func_15143794((s16) (sp34 & 0xFF), (s16) (((sp38 % (u32) (temp_v0_2 + 1)) - (temp_v0_2 >> 1)) - 0x40), (random_float() * (*(s16 *)((char *)(temp_s0) + 0x10))) + (*(s16 *)((char *)(temp_s0) + 0xC)), &sp44);
        sp70 = sp7C + sp44;
        sp74 = sp80 + sp48;
        sp78 = sp84 + sp4C;
        sp9C = (*(s32 *)((char *)(temp_s0) + 0x28));
        sp9D = (*(s32 *)((char *)(temp_s0) + 0x29));
        sp9E = (*(s32 *)((char *)(temp_s0) + 0x2A));
        sp54 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1C)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x1A));
        sp9F = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x2C)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x2B));
        spA0 = 1;
        sp8C = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x24)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x20));
        temp_v0_3 = func_15105CE0((s32 *) &sp54, 4, (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        (*(s32 *)((char *)(temp_s1) + 0x8)) = temp_v0_3;
        if (temp_v0_3 != NULL) {
            memcpy((*(s32 *)((char *)(temp_v0_3) + 0x60)), (s32 *) &sp50, 4);
        }
        (*(s32 *)((char *)(temp_s1) + 0x4)) = (s32) ((*(s32 *)((char *)(temp_s1) + 0x4)) + 1);
    }
}

void func_15107604(void *arg0) {
    (*(s32 *)((char *)(((*(s32 *)((*(s32 *)((char *)(arg0) + 0x60)))) + 0x28)) + 0x8)) = 0;
}

void func_1510761C(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x30)) != NULL) {
        func_1516972C((*(s32 *)((char *)(arg0) + 0x30)), arg0);
    }
}

void func_1510764C(void *arg0) {
    func_1510761C(arg0);
    func_1514933C(arg0);
}

void func_15107678(void *arg0) {
    func_1510761C(arg0);
    func_15149368(arg0);
}

void func_151076A4(void *arg0, s32 arg2) {
    if (*(&D_80088C38 + ((*(s32 *)((char *)(arg0) + 0x68)) * 4)) != 0) {
        ((s32 (*)())((char *)(&D_80088C38 + ((*(s32 *)((char *)(arg0) + 0x68)) * 4))))(arg2 & 0xFF);
    }
}

void *func_15107700(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, f32 arg5, f32 arg6, s16 arg7, s16 arg8, void * *arg9, u8 arg10, s32 arg11) {
    s16 sp11C;
    s16 sp11A;
    u8 sp118;
    void *sp114;
    void *sp110;
    s8 sp10C;
    void * sp108;
    s16 sp106;
    s16 sp104;
    f32 sp100;
    f32 spFC;
    s32 spF8;
    s8 spF4;
    f32 spE8;
    void * spDC;
    void * spD0;
    f32 spC4;
    s8 spC2;
    s16 spC0;
    void * sp64;
    void * sp5C;
    f32 sp50;
    s8 var_v0;
    void *temp_v0;
    void *var_v1;

    f32 spCC;
    f32 spC8;
    f32 spB5;
    f32 sp54;
    f32 sp58;
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) == 0) {
        return NULL;
    }
    sp114 = arg0;
    sp11A = arg1;
    sp11C = arg2;
    sp118 = (*(s32 *)((char *)(arg0) + 0x3B));
    if (arg3 == -1) {
        spC0 = 0x12C;
    } else {
        spC0 = arg3;
    }
    if (arg3 == -1) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    spC2 = var_v0;
    spF4 = 0;
    spF8 = arg4;
    spFC = arg5;
    sp100 = arg6;
    sp104 = arg7;
    sp106 = arg8;
    sp108 = (s32) *arg9;
    sp10C = 2;
    func_15107A20(arg1, arg2, &spC4, &sp50);
    func_15081690(spCC, arg0, spC4, spC8, spCC, spC4 - sp50, spC8 - sp54, spCC - sp58, &sp5C, 0, 0, 1, 1, -1, 0, 0);
    if (spB5 == 0) {
        return NULL;
    }
    (*(s32 *)((char *)&(spE8) + 0x0)) = (*(s32 *)((char *)&(sp64) + 0x0));
    (*(s32 *)((char *)&(spE8) + 0x4)) = (s32) (*(s32 *)((char *)&(sp64) + 0x4));
    (*(s32 *)((char *)&(spE8) + 0x8)) = (s32) (*(s32 *)((char *)&(sp64) + 0x8));
    func_15107AE0(&spC4, &spE8, &spD0, &spDC);
    temp_v0 = func_15105CE0((s32 *) &spC0, 0xC, arg10, arg11);
    var_v1 = temp_v0;
    if (temp_v0 != NULL) {
        sp110 = temp_v0;
        memcpy((*(s32 *)((char *)(temp_v0) + 0x60)), (s32 *) &sp114, 0xC);
        var_v1 = sp110;
    }
    return var_v1;
}

void func_151078E4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x60));
    func_15169850(arg1, arg2, temp_a2, temp_a2 + 4, arg0);
}

s32 func_15107924(void *arg0, s8 *arg1) {
    void *sp38;
    f32 sp2C;
    f32 *sp28;
    f32 *temp_a3;
    void *temp_t6;
    void *temp_v0;

    f32 sp30;
    f32 sp34;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x60));
    temp_t6 = (*(s32 *)((char *)(temp_v0) + 0x0));
    sp38 = temp_t6;
    if (((*(s32 *)((char *)(temp_t6) + 0x0)) == 0) || (temp_a3 = (char *)(arg0) + 0x14, ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_t6) + 0x3B))))) {
        return 0;
    }
    *arg1 = 0;
    (*(s32 *)((char *)&(sp2C) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x14));
    (*(s32 *)((char *)&(sp2C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a3) + 0x4));
    (*(s32 *)((char *)&(sp2C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_a3) + 0x8));
    sp28 = temp_a3;
    func_15107A20((s16) sp38, (*(s16 *)((char *)(temp_v0) + 0x6)), (f32 *) (*(s16 *)((char *)(temp_v0) + 0x8)), temp_a3, NULL);
    if ((sp2C != (*(s32 *)((char *)(arg0) + 0x14))) || (sp30 != (*(s32 *)((char *)(arg0) + 0x18))) || (sp34 != (*(s32 *)((char *)(arg0) + 0x1C)))) {
        *arg1 = 1;
        func_15107AE0(sp28, (char *)(arg0) + 0x38, (char *)(arg0) + 0x20, (char *)(arg0) + 0x2C);
    }
    return 1;
}

void func_15107A20(f32 *arg0, s32 arg1, s32 arg2, f32 *arg3, void *arg4) {
    f32 sp2C;
    f32 sp28;
    void * sp24;

    f32 sp30;
    f32 sp34;
    func_1515C244(arg0, &sp2C, &sp28, &sp24);
    func_15143794(arg1, arg2, sp28, arg3);
    (*(f32 *)((char *)(arg3) + 0x4)) = (f32) ((*(f32 *)((char *)(arg3) + 0x4)) * (*(f32 *)((char *)(arg0) + 0xF0)));
    (*(s32 *)((char *)(arg3) + 0x0)) += sp2C;
    (*(f32 *)((char *)(arg3) + 0x4)) = (f32) ((*(f32 *)((char *)(arg3) + 0x4)) + sp30);
    (*(f32 *)((char *)(arg3) + 0x8)) = (f32) ((*(f32 *)((char *)(arg3) + 0x8)) + sp34);
    if (arg4 != NULL) {
        (*(f32 *)((char *)(arg4) + 0x0)) = (f32) (*(f32 *)((char *)&(sp2C) + 0x0));
        (*(s32 *)((char *)(arg4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp2C) + 0x4));
        (*(s32 *)((char *)(arg4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp2C) + 0x8));
    }
}

void func_15107AE0(f32 *arg0, f32 *arg1, void * *arg2, void * *arg3) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x0));
    temp_f0 = (*(s32 *)((char *)(arg1) + 0x0)) - temp_f2;
    temp_f12 = (*(s32 *)((char *)(arg1) + 0x4)) - (*(s32 *)((char *)(arg0) + 0x4));
    temp_f14 = (*(s32 *)((char *)(arg1) + 0x8)) - (*(s32 *)((char *)(arg0) + 0x8));
    (*(f32 *)((char *)(arg2) + 0x0)) = (f32) (temp_f2 + (temp_f0 * D_800A2420));
    (*(f32 *)((char *)(arg2) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + (temp_f12 * D_800A2420));
    (*(f32 *)((char *)(arg2) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) + (temp_f14 * D_800A2420));
    (*(f32 *)((char *)(arg3) + 0x0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x0)) + (temp_f0 * D_800A2424));
    (*(f32 *)((char *)(arg3) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + (temp_f12 * D_800A2424));
    (*(f32 *)((char *)(arg3) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) + (temp_f14 * D_800A2424));
}

void func_15107B78(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 temp_f12;
    f32 temp_f14;

    f32 sp28;
    f32 sp24;
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) != 0) {
        func_1515C244(&sp20, &sp1C, &sp18);
        func_15143794(arg1, arg2, sp1C, &sp2C);
        temp_f14 = sp30 * (*(s32 *)((char *)(arg0) + 0xF0));
        temp_f12 = sp2C + sp20;
        sp2C = temp_f12;
        sp30 = temp_f14;
        sp34 += sp28;
        sp30 = temp_f14 + sp24;
        func_151C329C(temp_f12, temp_f14, &sp2C, arg3, arg4);
    }
}

void *func_15107C1C(void *arg0, s32 arg1, void *arg2, s16 arg3, s16 arg4, s16 arg5, s32 arg6, f32 arg7, f32 arg8, s16 arg9, s16 arg10, void * *arg11, u8 arg12, s32 arg13) {
    s8 sp124;
    void * sp118;
    u8 sp114;
    void *sp110;
    void *sp10C;
    s8 sp108;
    void * sp104;
    s16 sp102;
    s16 sp100;
    f32 spFC;
    f32 spF8;
    s32 spF4;
    s8 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    void * spD8;
    void * spCC;
    void *spC0;
    s8 spBE;
    s16 spBC;
    void * sp60;
    void * sp58;
    f32 sp4C;
    s8 temp_t6;
    s8 var_v0;
    void *temp_v0;
    void *var_v1;

    f32 spC4;
    f32 spC8;
    f32 sp50;
    f32 sp54;
    f32 spB1;
    temp_t6 = arg1 & 0xFF;
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) == 0) {
        return NULL;
    }
    sp110 = arg0;
    sp114 = (*(s32 *)((char *)(arg0) + 0x3B));
    (*(s32 *)((char *)&(sp118) + 0x0)) = (s32) (*(s32 *)((char *)(arg2) + 0x0));
    (*(s32 *)((char *)&(sp118) + 0x4)) = (s32) (*(s32 *)((char *)(arg2) + 0x4));
    (*(s32 *)((char *)&(sp118) + 0x8)) = (s32) (*(s32 *)((char *)(arg2) + 0x8));
    sp124 = temp_t6;
    if (arg5 == -1) {
        spBC = 0x12C;
    } else {
        spBC = arg5;
    }
    if (arg5 == -1) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    spBE = var_v0;
    spF0 = 1;
    spF4 = arg6;
    spF8 = arg7;
    spFC = arg8;
    sp100 = arg9;
    sp102 = arg10;
    sp104 = (s32) *arg11;
    sp108 = 3;
    func_15107F54(temp_t6, &spC0);
    func_15143794(arg3, arg4, 1.0f, &sp4C);
    func_15081690((f32)(s32)(arg0), spC0, spC4, spC8, sp4C, sp50, sp54, (f32)(s32)&sp58, 0x43960000, 0, 1, 1, -1, 0, 0);
    if (spB1 == 0) {
        spE4 = (f32)(s32)(char *)(spC0) + (sp4C * 300.0f);
        spE8 = spC4 + (sp50 * 300.0f);
        spEC = spC8 + (sp54 * 300.0f);
    } else {
        (*(s32 *)((char *)&(spE4) + 0x0)) = (*(s32 *)((char *)&(sp60) + 0x0));
        (*(s32 *)((char *)&(spE4) + 0x4)) = (s32) (*(s32 *)((char *)&(sp60) + 0x4));
        (*(s32 *)((char *)&(spE4) + 0x8)) = (s32) (*(s32 *)((char *)&(sp60) + 0x8));
    }
    func_15107AE0((f32 *) &spC0, &spE4, &spCC, &spD8);
    temp_v0 = func_15105CE0((s32 *) &spBC, 0x18, arg12, arg13);
    var_v1 = temp_v0;
    if (temp_v0 != NULL) {
        sp10C = temp_v0;
        memcpy((*(s32 *)((char *)(temp_v0) + 0x60)), (s32 *) &sp110, 0x18);
        var_v1 = sp10C;
    }
    return var_v1;
}

s32 func_15107E48(void *arg0, s8 *arg1) {
    f32 sp24;
    f32 *sp20;
    f32 *temp_a3;
    void *temp_s1;
    void *temp_v0;

    f32 sp28;
    f32 sp2C;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x60));
    temp_s1 = (*(s32 *)((char *)(temp_v0) + 0x0));
    if (((*(s32 *)((char *)(temp_s1) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v0) + 0x4)) != (*(s32 *)((char *)(temp_s1) + 0x3B)))) {
        return 0;
    }
    temp_a3 = (char *)(arg0) + 0x14;
    if ((*(s32 *)((char *)(temp_s1) + 0x1D4)) == 0) {
        return 0;
    }
    *arg1 = 0;
    (*(s32 *)((char *)&(sp24) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x14));
    (*(s32 *)((char *)&(sp24) + 0x4)) = (s32) (*(s32 *)((char *)(temp_a3) + 0x4));
    (*(s32 *)((char *)&(sp24) + 0x8)) = (s32) (*(s32 *)((char *)(temp_a3) + 0x8));
    sp20 = temp_a3;
    func_15107F54((s8) temp_s1, (void **) (*(s8 *)((char *)(temp_v0) + 0x14)), (char *)(temp_v0) + 8, temp_a3);
    if ((sp24 != (*(s32 *)((char *)(arg0) + 0x14))) || (sp28 != (*(s32 *)((char *)(arg0) + 0x18))) || (sp2C != (*(s32 *)((char *)(arg0) + 0x1C)))) {
        *arg1 = 1;
        func_15107AE0(sp20, (char *)(arg0) + 0x38, (char *)(arg0) + 0x20, (char *)(arg0) + 0x2C);
    }
    return 1;
}

void func_15107F54(void *arg0, s32 arg1, void *arg2, f32 *arg3) {
    func_15143134(arg2, arg3, (*(s32 *)((char *)(arg0) + 0x1D4)) + (arg1 << 6));
}

void func_15107F98(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0x60));
    func_15169850(arg1, arg2, temp_a2, temp_a2 + 4, arg0);
}
