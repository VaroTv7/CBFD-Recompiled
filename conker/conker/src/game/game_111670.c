/**
 * Auto-decompiled from asm/111670.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_150440A0(); /* extern */
f32 func_150489B0();                             /* extern */
s32 func_15049350();              /* extern */
s32 func_150A43E0();              /* extern */
void * func_150A44F0();                       /* extern */
s32 func_150A7960(); /* extern */
s32 random_u32();                                /* extern */
f32 random_float();                                /* extern */
void func_1510F800();                                 /* extern */
s32 func_1510F8CC();                             /* extern */
s32 func_1510F8D8();            /* extern */
void * func_1511490C();                       /* extern */
void * func_15132A4C();           /* extern */
s32 func_15167D84();         /* extern */
void * func_1516865C();                /* extern */
void * func_15168800();                        /* extern */
void * func_15171D4C(); /* extern */
void * func_15171F04(); /* extern */
void func_151C329C();                       /* extern */
s32 func_151EF610();                          /* extern */
void func_150E4550(f32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, s16 **arg5, s32 arg6);
s32 func_150E4E04(f32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, s16 **arg5, s32 arg6);
s32 func_150E5558(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6);
extern s32 D_80090520;
extern s32 D_8009187C;
extern s32 D_800918A0;
extern s32 D_800918AC;
extern f32 D_800A1060;
extern s32 D_800A1070;
extern s32 D_800A1110;
extern s32 D_800A1112;
extern s32 D_800A111C;
extern f32 D_800A1128;
extern f32 D_800A112C;
extern f32 D_800A1130;
extern f32 D_800A1134;
extern f32 D_800A1138;
extern f32 D_800A113C;
extern f32 D_800A1140;
extern f32 D_800A1144;
extern s32 D_800A1148;
extern f32 D_800A114C;
extern f32 D_800A1150;
extern f32 D_800A1154;
extern f32 D_800A1158;
extern f32 D_800A115C;
extern f32 D_800A1160;
extern f32 D_800A1164;
extern f32 D_800A1168;
extern s32 D_800D9960;
extern s32 D_800D9963;
extern s32 D_800D99F0;

void func_150E41C0(void) {
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f8;

    sp3C = (s32) D_800DBFF0->unk2F8;
    sp38 = (s32) D_800DBFF0->unk2FC;
    sp34 = (s32) D_800DBFF0->unk300;
    temp_f20 = D_800DBFF0->unk398;
    sp24 = sinf(temp_f20);
    temp_f8 = 500.0f * sp24;
    temp_f16 = -500.0f * cosf(temp_f20);
    sp2C = temp_f8;
    sp28 = temp_f16;
    temp_f20_2 = D_800DBFF0->unk3A0;
    sp24 = sinf(temp_f20_2);
    temp_f10 = (sp28 * cosf(temp_f20_2)) - 0.0f;
    (*(s16 *)((char *)&(D_800D99F0) + 0x0)) = (s16) (s32) ((f32) sp3C + (0.0f + (sp28 * sp24)));
    (*(s16 *)((char *)&(D_800D99F0) + 0x4)) = (s16) (s32) ((f32) sp34 + temp_f10);
    (*(s16 *)((char *)&(D_800D99F0) + 0x2)) = (s16) (s32) ((f32) sp38 + temp_f8);
}

void func_150E42F8(s32 arg0) {
    s32 sp70;
    s32 sp68;
    s16 **sp58;
    f32 temp_f20;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s3;

    sp58 = NULL;
    var_s3 = 0;
    sp70 = (s32) (*(s32 *)((char *)&(D_800D99F0) + 0x0));
    sp68 = (s32) (*(s32 *)((char *)&(D_800D99F0) + 0x4));
    if (arg0 > 0) {
        temp_f20 = D_800A1060;
        do {
            temp_s0 = (random_u32() % 500) + sp70;
            temp_a2 = (random_u32() % 500) + sp68;
            temp_v0 = func_1510F8D8(temp_s0, 0x2710, temp_a2, &sp58);
            if ((temp_f20 != (f32) temp_v0) && (sp58 != NULL)) {
                temp_lo = (s32) (sp58 - D_800DBE3C) / 12;
                if ((temp_lo >= 0) && (temp_lo < D_800DBE4C)) {
                    temp_v0_2 = func_1510F8CC((*(s32 *)((char *)(D_800DBE5C) + (temp_lo * 4))));
                    if (temp_v0_2 != 0) {
                        func_150E4550((f32) temp_s0, (f32) temp_v0, (f32) temp_a2, 0, temp_v0_2, sp58, 0xFF);
                    }
                }
            }
            var_s3 += 1;
        } while (var_s3 != arg0);
    }
}

void func_150E4514(s32 arg0) {
    func_150E41C0();
    func_150E42F8(arg0 / 30);
}

void func_150E4550(f32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, s16 **arg5, s32 arg6) {
    s32 sp110;
    s32 sp10C;
    s8 sp104;
    s8 sp102;
    s8 sp100;
    s16 spF8;
    s16 spF4;
    s16 spF2;
    s16 spF0;
    s16 spEE;
    s16 spEC;
    u16 spE6;
    u16 spE4;
    void * *sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    u16 *sp4C;
    s32 sp48;
    s32 temp_f16;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    u16 *var_t0;
    u16 temp_v0;
    u8 temp_v0_2;
    void *temp_v0_3;

    var_a0 = arg4;
    sp10C = 0;
    if (var_a0 & 0x8000) {
        var_a0 ^= 0x8000;
        sp10C = 0x8000;
    }
    var_t0 = (var_a0 * 8) + &D_800A1070;
    if ((*(s32 *)((char *)(var_t0) + 0x2)) != 0) {
        sp110 = 0x78;
        sp4C = var_t0;
        var_a1 = 0x78;
        temp_v1 = (func_151EF610(var_a0, 0x78) % (s32) (*(s32 *)((char *)(var_t0) + 0x7))) + (*(s32 *)((char *)(var_t0) + 0x6)) + 1;
        if (arg3 != 1) {
            var_a1 = 0x1E;
        }
        temp_v0 = (*(s32 *)((char *)(var_t0) + 0x2));
        temp_f16 = (s32) (*(&D_800A111C + (arg3 * 4)) * (f32) temp_v1);
        if (temp_v0 == 0x13) {
            sp4C = var_t0;
            func_15171D4C(arg0, arg1, var_a1, arg2, 0x1E, 0, 0x13, 0.0f, 0, temp_f16, 0xF, 0x55, 0, 0xFF, 0);
        } else if (arg5 != NULL) {
            sp4C = var_t0;
            func_15171F04(arg0, arg1, var_a1, arg2, arg5, var_a1, 0xB5AD, (s32) temp_v0, temp_f16, 0, 0, 0, 0xFF, 0);
        } else {
            sp4C = var_t0;
            func_15171D4C(arg0, arg1, var_a1, arg2, (s16) var_a1, 0xB5AD, (s32) temp_v0, 0.0f, 0, temp_f16, 0, 0, 0, 0xFF, 0);
        }
        var_t0 = sp4C;
    }
    temp_v0_2 = (*(s32 *)((char *)(var_t0) + 0x5));
    if (temp_v0_2 != 0) {
        sp4C = var_t0;
        func_150E4E04(arg0, arg1, arg2, temp_v0_2 | sp10C, arg3, arg5, arg6);
    }
    if ((arg3 != 0) && (sp4C = var_t0, (((func_151EF610() % 100) < (s32) (*(s32 *)((char *)(var_t0) + 0x4))) != 0))) {
        sp54 = arg0;
        sp4C = var_t0;
        sp5C = arg2;
        sp58 = arg1 + 20.0f;
        func_151C329C(&sp54, 0xFF, 1);
        var_t0 = sp4C;
        if (arg6 != 0xFF) {
            *(&D_800D9963 + (arg6 * 0x1C)) = 0x64;
        }
    } else if (arg6 != 0xFF) {
        *(&D_800D9963 + (arg6 * 0x1C)) = 0;
    }
    if (*var_t0 != 0) {
        sp48 = arg3 * 4;
        sp4C = var_t0;
        bzero(&sp60, 0xA8);
        temp_v0_3 = sp48 + &D_800A1110;
        spEC = (s16) (s32) arg0;
        sp102 = 0xD;
        spEE = (s16) (s32) arg1;
        sp100 = (s8) *sp4C;
        spF0 = (s16) (s32) arg2;
        spF8 = 0x2A00;
        spF2 = 1;
        spF4 = 1;
        sp104 = 0xFF;
        spE4 = (*(s32 *)((char *)(temp_v0_3) + 0x0));
        spE6 = (*(s32 *)((char *)(temp_v0_3) + 0x2));
        func_1516865C(&sp60, 0xB4, 0xB4, 0xB4, 0xFF);
        func_15168800(&sp60, 0xFF, 0);
    }
}

void func_150E4928(void *arg0) {
    s16 sp11E;
    s32 sp114;
    s32 sp10C;
    s32 sp108;
    s16 *sp104;
    s16 **sp100;
    s32 spFC;
    s32 spF4;
    s32 spEC;
    void * spE8;
    void * spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    void * sp6C;
    void * *var_s0;
    f32 var_f22;
    s16 **var_s1_2;
    s16 **var_s2;
    s16 *temp_v0_2;
    s16 var_s6;
    s16 var_s7;
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s1;
    s32 var_v1;
    u16 temp_s0;
    u16 temp_s0_2;
    void *temp_v1_2;
    void *var_v0;

    var_f22 = D_800A1128;
    temp_lo = (s32) ((char *)(arg0) - (char *)(D_800DBEF4)) / 160;
    var_s1 = 5;
    if ((temp_lo < D_800DBEF0) && (temp_lo >= 0)) {
        sp11E = (s16) temp_lo;
        sp114 = 0;
        func_1510F800(2);
        func_150A44F0(1, &sp11E, 0);
        var_s2 = sp100;
        do {
            var_s6 = (*(s32 *)((char *)(arg0) + 0x10));
            var_s7 = (*(s32 *)((char *)(arg0) + 0x14));
            if ((*(s32 *)((char *)(arg0) + 0x50)) != 0) {
                temp_s0 = (*(s32 *)((char *)(arg0) + 0x50));
                var_s6 = (var_s6 + ((func_151EF610() % (s32) temp_s0) * 2)) - temp_s0;
                temp_s0_2 = (*(s32 *)((char *)(arg0) + 0x50));
                var_s7 = (var_s7 + ((func_151EF610() % (s32) temp_s0_2) * 2)) - temp_s0_2;
            }
            temp_v0 = func_150A43E0((s32) var_s6, (s32) var_s7, 1, &sp11E);
            var_a3 = temp_v0;
            if (temp_v0 != 0) {
                var_v1 = -0x800000;
                var_a3_2 = temp_v0 - 1;
                var_s1 = 0;
                if (temp_v0 != 0) {
                    var_v0 = (var_a3_2 * 0x10) + &D_800D3300;
                    do {
                        temp_a0 = (*(s32 *)((char *)(var_v0) + 0x0));
                        if (var_v1 < temp_a0) {
                            var_v1 = temp_a0;
                            var_s2 = (*(s32 *)((char *)(var_v0) + 0x4));
                            var_f22 = (f32) var_v1 * 0.00390625f;
                        }
                        var_v0 = (char *)(var_v0) - 0x10;
                        var_a3_2 -= 1;
                    } while (var_a3_2 != 0);
                }
                var_a3 = 1;
            } else {
                var_s1 -= 1;
            }
        } while (var_s1 != 0);
        sp100 = var_s2;
        spFC = (s32) var_s6;
        spF4 = (s32) var_s7;
        if (var_a3 != 0) {
            temp_v1 = (*(s32 *)((char *)(arg0) + 0x44));
            if (temp_v1 != 0) {
                spEC = (*(s32 *)((char *)(temp_v1) + (((s32) (var_s2 - D_800DBE3C) / 12) * 4) + -((*(s32 *)((char *)(arg0) + 0x58)) * 4)));
            } else {
                spEC = (*(s32 *)((char *)(arg0) + 0x40));
            }
            func_1511490C(&sp6C, arg0);
            if (var_s2 != NULL) {
                var_s1_2 = &sp104;
                temp_v1_2 = (char *)(arg0) + (D_800BE9C0 * 4);
                var_s0 = &spB8;
                sp104 = (*(s32 *)((char *)(var_s2) + 0x0)) + (*(s32 *)((char *)(temp_v1_2) + 0x20));
                sp108 = (*(s32 *)((char *)(var_s2) + 0x4)) + (*(s32 *)((char *)(temp_v1_2) + 0x20));
                sp10C = (*(s32 *)((char *)(var_s2) + 0x8)) + (*(s32 *)((char *)(temp_v1_2) + 0x20));
                do {
                    temp_v0_2 = *var_s1_2;
                    func_150A7960(&sp6C, (f32) (*(f32 *)((char *)(temp_v0_2) + 0x0)), (f32) (*(f32 *)((char *)(temp_v0_2) + 0x2)), (f32) (*(f32 *)((char *)(temp_v0_2) + 0x4)), &spB4, &spB0, &spAC);
                    var_s1_2 += 4;
                    (*(s16 *)((char *)(var_s0) + 0x0)) = (s16) (s32) spB4;
                    (*(s16 *)((char *)(var_s0) + 0x2)) = (s16) (s32) spB0;
                    (*(s32 *)((char *)(var_s1_2) - 0x4)) = var_s0;
                    var_s0 = (char *)(var_s0) + 0x10;
                    (*(s16 *)((char *)(var_s0) - 0xC)) = (s16) (s32) spAC;
                } while ((char *)(var_s0) != (char *)(&spE8));
                var_s2 = &sp104;
            }
            func_150E4550((f32) var_s6, var_f22, (f32) var_s7, 1, func_1510F8CC(spEC), var_s2, 0);
        }
    }
}

void func_150E4CBC(void *arg0) {
    s32 temp_t0;
    s32 temp_v0;
    u8 temp_a1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x90));
    if (temp_v0 < 9) {
        (*(s16 *)((char *)(arg0) + 0xA4)) = (s16) (s32) ((f32) (((s32) (temp_v0 * 0x5A) / 9) * (*(s16 *)((char *)(arg0) + 0x96))) * 0.00390625f);
    } else {
        temp_a1 = (*(s32 *)((char *)(arg0) + 0xB4));
        (*(s16 *)((char *)(arg0) + 0xA4)) = (s16) (s32) ((f32) ((0x5A - ((s32) ((temp_v0 * 0x5A) - 0x32A) / 600)) * (*(s16 *)((char *)(arg0) + 0x96))) * 0.00390625f);
        temp_t0 = D_800BE9E4 * 0x11;
        if (temp_t0 < (s32) temp_a1) {
            (*(u8 *)((char *)(arg0) + 0xB4)) = (u8) (temp_a1 - temp_t0);
        } else {
            (*(s32 *)((char *)(arg0) + 0x98)) = -1;
        }
    }
    (*(s16 *)((char *)(arg0) + 0xA2)) = (s16) ((s32) ((f32) (*(s16 *)((char *)(arg0) + 0x94)) * 14.0f) >> 8);
    if ((*(s32 *)((char *)(arg0) + 0x90)) >= 0x261) {
        (*(s32 *)((char *)(arg0) + 0x98)) = -1;
    }
    (*(s32 *)((char *)(arg0) + 0x90)) = (s32) ((*(s32 *)((char *)(arg0) + 0x90)) + D_800BE9E4);
}

s32 func_150E4E04(f32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, s16 **arg5, s32 arg6) {
    void *sp;
    s32 subroutine_arg0;
    s32 subroutine_arg1;
    s32 subroutine_arg2;
    s32 subroutine_arg3;
    f32 sp164;
    f32 sp160;
    s32 sp150;
    s32 sp14C;
    void * sp148;
    void * sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp110;
    void * spD0;
    s16 spCC;
    s8 spC7;
    s8 spC6;
    s8 spC5;
    s8 spC4;
    s8 spC2;
    s16 spC0;
    s16 spBE;
    s16 spBC;
    s16 spBA;
    s16 spB8;
    s8 spB7;
    s16 spB0;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    s16 spA6;
    s16 spA4;
    void * *sp98;
    void * *var_s1;
    void * *var_s1_2;
    void * *var_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f20;
    s16 **var_v1;
    s16 var_t0;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s2;
    void *temp_v0;
    void *temp_v1;
    void *var_v0_2;

    temp_f22 = D_800A112C;
    var_s2 = 1;
    var_s1 = 1;
    sp150 = 0;
    sp14C = 0;
    var_s0 = 0;
    sp110 = temp_f22;
    bzero(&sp98, 0x38);
    var_v0 = &sp124;
    if (arg3 & 0x8000) {
        var_s0 = 1;
        arg3 ^= 0x8000;
    }
    var_v1 = arg5;
    if (arg5 != NULL) {
        var_v0_2 = (char *)(var_v0) + 0xC;
        var_t0 = **var_v1;
        if ((char *)(var_v0_2) != (char *)(&sp148)) {
            do {
                var_v0_2 = (char *)(var_v0_2) + 0xC;
                var_v1 += 4;
                (*(f32 *)((char *)(var_v0_2) - 0x18)) = (f32) var_t0;
                (*(f32 *)((char *)(var_v0_2) - 0x14)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(var_v1) - 0x4))) + 0x2));
                (*(f32 *)((char *)(var_v0_2) - 0x10)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(var_v1) - 0x4))) + 0x4));
                var_t0 = (*(s32 *)((*(s32 *)((char *)(var_v1) + 0x0))));
            } while ((char *)(var_v0_2) != (char *)(&sp148));
        }
        temp_v1 = var_v1 + 4;
        (*(f32 *)((char *)(var_v0_2) - 0xC)) = (f32) var_t0;
        (*(f32 *)((char *)(var_v0_2) - 0x8)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(temp_v1) - 0x4))) + 0x2));
        (*(f32 *)((char *)(var_v0_2) - 0x4)) = (f32) (*(f32 *)((char *)((*(s32 *)((char *)(temp_v1) - 0x4))) + 0x4));
        M2C_MEMCPY_ALIGNED(sp, &sp124, 0x24);
        var_v0 = func_15049350(subroutine_arg0, subroutine_arg1, subroutine_arg2, subroutine_arg3);
        temp_f16 = -D_800CC210;
        temp_f2 = -D_800CC214;
        temp_f18 = -D_800CC218;
        temp_f0 = sqrtf((temp_f16 * temp_f16) + (temp_f2 * temp_f2) + (temp_f18 * temp_f18));
        if (!(temp_f0 < D_800A1130)) {
            temp_f16_2 = temp_f16 / temp_f0;
            temp_f2_2 = temp_f2 / temp_f0;
            sp120 = temp_f16_2;
            temp_f18_2 = temp_f18 / temp_f0;
            sp11C = temp_f2_2;
            sp118 = temp_f18_2;
            if ((arg6 != 0xFF) && (temp_f0_2 = fabsf(temp_f2_2), sp11C = temp_f2_2, sp120 = temp_f16_2, sp118 = temp_f18_2, (temp_f0_2 < D_800A1134))) {
                sp11C = temp_f2_2;
                sp120 = temp_f16_2;
                sp118 = temp_f18_2;
                func_150440A0(&spD0, 0, 0, 0, temp_f16_2, temp_f2_2, temp_f18_2, 0.0f, 1.0f, 0.0f);
                temp_v0 = (arg6 * 0x1C) + &D_800D9960;
                var_v0 = func_150A7960(&spD0, 0.0f, 0.0f, 1.0f, (char *)(temp_v0) + 0x10, (char *)(temp_v0) + 0x14, (char *)(temp_v0) + 0x18);
            } else {
                sp150 = 1;
            }
            goto block_11;
        }
    } else {
        sp150 = 1;
block_11:
        if ((arg6 != 0xFF) && (sp150 != 0)) {
            *(&D_800D9963 + (arg6 * 0x1C)) = 0;
        }
        if (var_s0 == 0) {
            spA8 = (s16) (s32) arg0;
            spAA = (s16) (s32) arg1;
            spC4 = 0xB4;
            spC5 = 0xB4;
            spC6 = 0xB4;
            spC7 = 0xFF;
            spB7 = -1;
            spCC = 0;
            spA4 = 0;
            spA6 = 0;
            spAC = (s16) (s32) arg2;
            temp_f0_3 = (f32)(s32)*(&D_800A1112 + (arg4 * 4));
            sp164 = temp_f0_3 * 95.0f * 0.00390625f;
            sp160 = temp_f0_3 * 130.0f * 0.00390625f;
            if (arg3 == 0x11) {
                sp98 = &D_8009187C;
            } else if (arg3 == 0xA) {
                sp98 = &D_800918A0;
            } else if ((arg3 == 4) || (arg3 == 9)) {
                sp98 = &D_800918A0;
            } else if (arg3 == 8) {
                sp98 = &D_80090520;
                sp164 = 180.0f;
                sp160 = 200.0f;
            } else {
                sp98 = &D_800918AC;
            }
            if (arg4 == 2) {
                sp14C = 1;
                spBA = -0x175;
                var_s1 = 0xC;
                sp110 = temp_f22 * (0.5f * (f32) ((func_151EF610() % 3) + 1));
            } else if (arg4 == 0) {
                spBA = -0xDA;
                var_s1 = 0xC;
                sp110 = temp_f22 * 0.5f;
            } else {
                spBA = -0xDA;
            }
            var_v0 = var_s1;
            var_s1_2 = (char *)(var_s1) - 1;
            if (var_s1 != NULL) {
                temp_f28 = D_800A1138;
loop_32:
                var_f20 = (random_float() * D_800A113C) + sp110;
                temp_s0 = (func_151EF610() % 256) & 0xFF;
                if (sp14C != 0) {
                    var_f20 *= 2.0f;
                }
                if (sp150 != 0) {
                    sp120 = func_15048A40(temp_s0 & 0xFF);
                    sp11C = 1.0f;
                    sp118 = func_150489B0(temp_s0 & 0xFF);
                } else {
                    temp_f22_2 = func_15048A40(temp_s0 & 0xFF);
                    func_150A7960(&spD0, temp_f22_2 * 0.5f, func_150489B0(temp_s0 & 0xFF) * 0.5f, 1.0f, &sp120, &sp11C, &sp118);
                }
                spC0 = (func_151EF610() % 2) + 0x182;
                spAE = (s16) (s32) (var_f20 * (temp_f28 * sp120));
                spB8 = (s16) (s32) (var_f20 * sp11C);
                spB0 = (s16) (s32) (var_f20 * (temp_f28 * sp118));
                func_151EF610();
                spC2 = 0xA;
                spBC = (s16) (s32) ((random_float() * sp160) + sp164);
                spBE = (s16) (s32) ((random_float() * sp160) + sp164);
                if (func_15167D84(&sp98, 0, 0, -1, 0xFF, 0) == 0) {
                    var_s2 = 0;
                }
                var_v0 = var_s1_2;
                var_s1_2 = (char *)(var_s1_2) - 1;
                if ((var_s1_2 != NULL) && (var_s2 != 0)) {
                    goto loop_32;
                }
            }
            if ((arg3 == 4) || (arg3 == 9) || (arg3 == 5)) {
                var_v0 = func_151EF610();
                if (((s32) var_v0 % 5) == 0) {
                    var_v0 = func_150E5558(arg0, arg1, arg2, sp120, sp11C, sp118, arg3);
                }
            }
        }
    }
    return (s32) var_v0;
}

s32 func_150E5558(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    s16 spA8;
    s16 spA6;
    s8 spA4;
    s32 spA0;
    s8 sp9E;
    s8 sp9C;
    s8 sp9B;
    s8 sp9A;
    s8 sp99;
    s8 sp98;
    s8 sp97;
    s8 sp96;
    s8 sp95;
    s8 sp94;
    s32 sp90;
    s8 sp8C;
    s16 sp8A;
    s16 sp88;
    s32 sp84;
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
    f32 sp44;
    s32 sp40;
    s32 sp3C;
    f32 sp38;
    void * *sp34;
    f32 sp30;
    f32 temp_f2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 var_f16;
    f32 var_f2;

    bzero(&sp34, 0x7C);
    if (arg4 != 0.0f) {
        var_f16 = func_150484A0(arg3, arg4) * D_800A1140;
    } else {
        var_f16 = 90.0f;
    }
    if (arg5 != 0.0f) {
        sp30 = var_f16;
        var_f2 = func_150484A0(arg3, arg5) * D_800A1144;
    } else {
        var_f2 = 90.0f;
    }
    sp48 = var_f2;
    sp4C = var_f16;
    sp50 = 1.0f;
    sp54 = 1.0f;
    sp58 = 1.0f;
    sp34 = 0x3F800000;
    sp3C = D_800A1148;
    sp40 = D_800A1148;
    sp5C = arg0;
    sp60 = arg1;
    sp64 = arg2;
    sp44 = 0.0f;
    if (arg6 == 4) {
        sp8A = 6;
        sp38 = D_800A114C;
    } else if (arg6 == 9) {
        sp8A = 8;
        sp38 = D_800A1150;
    } else {
        sp8A = 7;
        sp38 = D_800A1154;
    }
    sp88 = (func_151EF610(D_800A1148) % 60) + 0x3C;
    sp84 = 0x29E9;
    temp_f6 = random_float() * D_800A115C;
    sp80 = D_800A1158;
    temp_f2 = temp_f6 + 1.5f;
    sp68 = temp_f2 * arg3;
    sp6C = -temp_f2 * arg4;
    sp70 = temp_f2 * arg5;
    sp74 = (random_float() * 6.0f) + -3.0f;
    sp7C = (random_float() * 6.0f) + -3.0f;
    temp_f6_2 = (random_float() * 6.0f) + -3.0f;
    sp8C = 0;
    sp90 = 0;
    sp78 = temp_f6_2;
    sp94 = 0xFF;
    sp95 = 1;
    sp96 = 0;
    sp97 = 3;
    sp98 = 0;
    sp99 = 0;
    sp9A = 0;
    sp9B = 0;
    sp9C = 0;
    sp9E = 2;
    spA0 = 0;
    spA4 = 0;
    spA6 = 0x20;
    spA8 = 7;
    func_15132A4C(&sp34, 3, 0xFF, 0, 0xFF, 0);
    return 0;
}

s32 func_150E5810(void *arg0, void * arg1, void * arg2, void * arg3, f32 arg4, s16 *arg5) {
    void *sp;
    s32 subroutine_arg0;
    s32 subroutine_arg1;
    s32 subroutine_arg2;
    s32 subroutine_arg3;
    void * sp74;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;
    s16 *var_v1;
    s16 var_t8;
    void *temp_v1;
    void *var_v0;

    temp_f2 = (*(s32 *)((char *)(arg0) + 0x48));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) (((*(f32 *)((char *)(arg0) + 0x10)) * D_800A1160) + arg4);
    if (temp_f2 > -2.0f) {
        (*(s32 *)((char *)(arg0) + 0x44)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x60)) = (s32) ((*(s32 *)((char *)(arg0) + 0x60)) & ~0x6F);
        (*(s32 *)((char *)(arg0) + 0x48)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x4C)) = 0.0f;
    } else {
        if (arg5 != NULL) {
            var_v1 = arg5;
            var_v0 = &sp74 + 0xC;
            var_t8 = *var_v1;
            if ((char *)(var_v0) != (char *)(&arg0)) {
                do {
                    var_v0 = (char *)(var_v0) + 0xC;
                    var_v1 += 6;
                    (*(f32 *)((char *)(var_v0) - 0x18)) = (f32) var_t8;
                    (*(f32 *)((char *)(var_v0) - 0x14)) = (f32) (*(f32 *)((char *)(var_v1) - 0x4));
                    (*(f32 *)((char *)(var_v0) - 0x10)) = (f32) (*(f32 *)((char *)(var_v1) - 0x2));
                    var_t8 = (*(s32 *)((char *)(var_v1) + 0x0));
                } while ((char *)(var_v0) != (char *)(&arg0));
            }
            temp_v1 = var_v1 + 6;
            (*(f32 *)((char *)(var_v0) - 0xC)) = (f32) var_t8;
            (*(f32 *)((char *)(var_v0) - 0x8)) = (f32) (*(f32 *)((char *)(temp_v1) - 0x4));
            (*(f32 *)((char *)(var_v0) - 0x4)) = (f32) (*(f32 *)((char *)(temp_v1) - 0x2));
            M2C_MEMCPY_ALIGNED(sp, &sp74, 0x24);
            func_15049350(subroutine_arg0, subroutine_arg1, subroutine_arg2, subroutine_arg3);
            sp4C = -D_800CC210;
            sp50 = -D_800CC214;
            sp54 = -D_800CC218;
            temp_f0 = func_150AD930(&sp4C);
            if (D_800A1164 < temp_f0) {
                func_15049148(&sp4C, 1.0f / temp_f0, &sp40);
                sp58 = (*(s32 *)((char *)(arg0) + 0x44));
                sp5C = (*(s32 *)((char *)(arg0) + 0x48));
                sp60 = (*(s32 *)((char *)(arg0) + 0x4C));
                func_15049148(&sp40, 2.0f * func_150AD900(&sp40, &sp58), &sp4C);
                func_15048F58(&sp58, &sp4C, &sp4C);
                temp_f0_2 = (*(s32 *)((char *)(arg0) + 0x14));
                (*(f32 *)((char *)(arg0) + 0x44)) = (f32) (temp_f0_2 * sp4C * D_800A1168);
                (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (temp_f0_2 * sp50);
                (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) (temp_f0_2 * sp54 * D_800A1168);
            }
        } else {
            temp_f0_3 = (*(s32 *)((char *)(arg0) + 0x14));
            (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) * temp_f0_3);
            (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (-temp_f2 * temp_f0_3);
            (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) * temp_f0_3);
        }
        (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) * (*(f32 *)((char *)(arg0) + 0x14)));
        (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(arg0) + 0x54)) * (*(f32 *)((char *)(arg0) + 0x14)));
        (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * (*(f32 *)((char *)(arg0) + 0x14)));
    }
    return 1;
}
