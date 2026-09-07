/**
 * Auto-decompiled from asm/19E040.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


f32 func_150489B0();                             /* extern */
s32 random_u32();                        /* extern */
f32 random_float();                                /* extern */
void * func_150AEEB0();                       /* extern */
void * func_150BD740();                    /* extern */
void * func_150C3D5C();                                  /* extern */
void * func_150CDBB0();                    /* extern */
void * func_15168BE4();                   /* extern */
void * func_1516D4E8(); /* extern */
void * func_151700D8(); /* extern */
s32 func_1518C900();                              /* extern */
void func_151717FC(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, u8 arg11, s32 arg12);
void func_151718F0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, f32 arg5, s32 arg6, s32 arg7, u8 arg8, s32 arg9);
extern s32 D_8008CC20;
extern s32 D_800A6E90;
extern s32 D_800A6ED8;
extern s32 D_800A6F80;
extern f32 D_800A6F88;
extern f32 D_800A6F8C;
extern f32 D_800A6F90;
extern f32 D_800A6F94;
extern f32 D_800A6F98;
extern f32 D_800A6F9C;
extern f32 D_800A6FA0;
extern f32 D_800A6FA4;
extern f32 D_800A6FA8;
extern f32 D_800A6FAC;
extern f32 D_800A6FB0;
extern f32 D_800A6FB4;
extern f32 D_800A6FB8;
extern f32 D_800A6FBC;
extern f32 D_800A6FC0;
extern f32 D_800A6FC4;
void func_15170B90();

void func_15170B90(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s8 sp119;
    s8 sp118;
    s8 sp117;
    u8 sp116;
    s8 sp115;
    s8 sp114;
    s8 sp113;
    s8 sp112;
    s8 sp111;
    s8 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    s32 spFC;
    s32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
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
    void * sp9C;
    void * *var_s2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    s32 temp_f18;
    s32 temp_v0;
    s32 var_s1;
    u8 var_s0;

    temp_f26 = (f32) (*(f32 *)((char *)(arg0) + 0x10));
    temp_f28 = (f32) (*(f32 *)((char *)(arg0) + 0x12));
    temp_f30 = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    temp_f20 = D_800A6F94;
    spC8 = 0.0f;
    spCC = 0.0f;
    spD0 = 0.0f;
    spEC = 1.0f;
    spF0 = 1.0f;
    spF4 = 1.0f;
    spF8 = 0x3C;
    sp104 = D_800A6F88;
    sp108 = D_800A6F8C;
    sp110 = 2;
    sp10C = D_800A6F90;
    sp111 = 0xFF;
    sp112 = 0;
    sp113 = 0;
    sp114 = 0;
    sp115 = 0x3C;
    sp117 = arg2;
    sp118 = 0;
    sp119 = 0;
    var_s1 = 0;
    var_s2 = &D_800A6E90;
    do {
        if (arg3 & 2) {
            (*(s32 *)((char *)&(sp9C) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A6F80) + 0x0));
            (*(u16 *)((char *)&(sp9C) + 0x4)) = (u16) (*(u16 *)((char *)&(D_800A6F80) + 0x4));
            var_s0 = *(&sp9C + var_s1);
        } else {
            var_s0 = arg1;
            if (arg3 & 1) {
                var_s0 = arg1 + var_s1;
            }
        }
        temp_v0 = func_1518C900(var_s0);
        temp_f2 = (*(s32 *)((char *)(var_s2) + 0x0));
        temp_f12 = (*(s32 *)((char *)(var_s2) + 0x4));
        temp_f14 = (*(s32 *)((char *)(var_s2) + 0x8));
        temp_f16 = fabsf(temp_f12) * temp_f20;
        spC0 = temp_f12 + temp_f28;
        spBC = temp_f2 + temp_f26;
        sp116 = var_s0;
        spD4 = temp_f2 * temp_f20;
        spDC = temp_f14 * temp_f20;
        spC4 = temp_f14 + temp_f30;
        spD8 = temp_f16 + 7.0f;
        spD4 += (f32) (random_u32(temp_f12, temp_f14) >> 0x10) * 0.000061035156f;
        spD8 += (f32) (random_u32() >> 0x10) * 0.000061035156f;
        spDC += (f32) (random_u32() >> 0x10) * 0.000061035156f;
        spE0 = (f32) (random_u32() >> 0x10) * 0.000076293945f;
        spE4 = (f32) (random_u32() >> 0x10) * 0.000076293945f;
        temp_f18 = random_u32() >> 0x10;
        spFC = temp_v0;
        spE8 = (f32) temp_f18 * 0.000076293945f;
        func_15168BE4(&spBC, arg4 & 0xFF, arg5);
        var_s1 += 1;
        var_s2 = (char *)(var_s2) + 0xC;
    } while (var_s1 != 6);
    func_151718F0(temp_f26, temp_f28 - 80.0f, temp_f30, 70.0f, 0x1F4, 0.0045776367f, 0, 0xA, (s32) arg4, arg5);
    (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
}

void func_15170EC4( s32 arg1, s32 arg2) {
    switch (D_800BE9F0) {                           /* irregular */
    case 2:
        func_15170B90(1, 1U, 1, (s32) arg1, (u8) arg2, 0);
        return;
    case 16:
        func_15170B90(0xA9, 8U, 0, (s32) arg1, (u8) arg2, 0);
        return;
    }
}

void func_15170F4C(void *arg0, s32 arg1, s32 arg2) {
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
    f32 spD4;
    f32 spD0;
    f32 spCC;
    s32 spC4;
    s32 spC0;
    f32 spBC;
    f32 spB8;
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
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    void * *var_s0;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f6;
    s32 temp_v0;
    s32 var_s1;

    spE0 = 2;
    spE1 = 1;
    spDF = 6;
    spDD = 0;
    var_s0 = &D_800A6ED8;
    sp7C = (f32) (*(f32 *)((char *)(arg0) + 0x10));
    var_s1 = 0;
    sp78 = (f32) (*(f32 *)((char *)(arg0) + 0x12));
    temp_f24 = D_800A6FA4;
    temp_f22 = D_800A6FA8;
    sp90 = 0.0f;
    sp94 = 0.0f;
    sp74 = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    sp98 = 0.0f;
    spB4 = 2.0f;
    spB8 = 2.0f;
    spBC = 2.0f;
    spC0 = 0x3C;
    spD8 = 2;
    spD9 = 0xFF;
    spDA = 0;
    spDB = 0;
    spDC = 0;
    temp_f20 = D_800A6FAC;
    spCC = D_800A6F98;
    spD0 = D_800A6F9C;
    spD4 = D_800A6FA0;
    do {
        temp_v0 = func_1518C900((u8) (*(u8 *)((char *)(var_s0) + 0x0)));
        spDE = (s8) (*(s8 *)((char *)(var_s0) + 0x0));
        sp84 = (*(s32 *)((char *)(var_s0) + 0x4)) + sp7C;
        sp88 = (*(s32 *)((char *)(var_s0) + 0x8)) + sp78;
        sp8C = (*(s32 *)((char *)(var_s0) + 0xC)) + sp74;
        sp9C = (*(s32 *)((char *)(var_s0) + 0x4)) * temp_f20;
        spA0 = fabsf((*(s32 *)((char *)(var_s0) + 0x8))) * temp_f22;
        spA4 = (*(s32 *)((char *)(var_s0) + 0xC)) * temp_f20;
        sp90 = (*(s32 *)((char *)(var_s0) + 0x10));
        sp94 = (*(s32 *)((char *)(var_s0) + 0x14));
        sp98 = (*(s32 *)((char *)(var_s0) + 0x18));
        spA8 = sp90 * temp_f24;
        spAC = (random_float() * 4.0f) - 2.0f;
        temp_f6 = random_float() * 10.0f;
        spC4 = temp_v0;
        spB0 = temp_f6 - 5.0f;
        func_15168BE4(&sp84, arg1 & 0xFF & 0xFF, arg2);
        var_s1 += 1;
        var_s0 = (char *)(var_s0) + 0x1C;
    } while (var_s1 < 6);
    (*(s32 *)((char *)(arg0) + 0x6E)) = 1;
}

void func_151711C4(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x33) {
        func_150C3D5C();
    }
    func_15060F28(arg0, 1);
}

void func_15171200(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, s32 arg9, s32 arg10, f32 arg11, u8 arg12, s32 arg13) {
    s8 spD9;
    s8 spD8;
    s8 spD7;
    u8 spD6;
    s8 spD5;
    s8 spD4;
    s8 spD3;
    s8 spD2;
    s8 spD1;
    s8 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    s32 spBC;
    s32 spB8;
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
    f32 sp60;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 var_f16;
    f32 var_f8;
    s32 temp_t1;
    s32 temp_t2;
    s32 var_s0;

    temp_f22 = arg8 * 0.000015258789f;
    temp_f20 = arg7 - arg6;
    sp88 = 0.0f;
    sp8C = 0.0f;
    sp90 = 0.0f;
    spC4 = arg11 * -0.75f;
    spC8 = arg11;
    spD0 = 2;
    spD1 = 0xFF;
    spD2 = 0;
    spD3 = 0;
    spD4 = 0;
    spD6 = arg1;
    spD8 = 1;
    spD9 = 1;
    sp60 = arg5 * D_800A6FB4;
    var_s0 = 0;
    spCC = D_800A6FB0;
    spB8 = arg10;
    spD7 = (s8) arg9;
    if (arg0 > 0) {
        arg5 *= D_800A6FB8;
        do {
            sp7C = ((f32) (random_u32() >> 0x10) * temp_f22) + arg2;
            sp80 = ((f32) (random_u32() >> 0x10) * temp_f22) + arg3;
            sp84 = ((f32) (random_u32() >> 0x10) * temp_f22) + arg4;
            spBC = func_1518C900(arg1);
            sp94 = (f32) (random_u32() >> 0x10) * 0.00022888184f;
            sp98 = ((f32) (random_u32() & 0xFFFF) * sp60) + arg5;
            sp9C = (f32) (random_u32() >> 0x10) * 0.00022888184f;
            spA0 = (f32) (random_u32() >> 0x10) * 0.00015258789f;
            spA4 = (f32) (random_u32() >> 0x10) * 0.00015258789f;
            spA8 = (f32) (random_u32() >> 0x10) * 0.00015258789f;
            temp_t1 = random_u32() & 0xFFFF;
            var_f8 = (f32) temp_t1;
            if (temp_t1 < 0) {
                var_f8 += 4294967296.0f;
            }
            spAC = (var_f8 * 0.000015258789f * temp_f20) + arg6;
            temp_t2 = random_u32() & 0xFFFF;
            var_f16 = (f32) temp_t2;
            if (temp_t2 < 0) {
                var_f16 += 4294967296.0f;
            }
            spB0 = (var_f16 * 0.000015258789f * temp_f20) + arg6;
            temp_f0 = ((f32) (random_u32() & 0xFFFF) * 0.000015258789f * temp_f20) + arg6;
            spD5 = (s8) (u32) (((spAC + spB0 + temp_f0) * D_800A6FBC) + 20.0f);
            spB4 = temp_f0;
            func_15168BE4(&sp7C, arg12 & 0xFF, arg13);
            var_s0 += 1;
        } while (var_s0 != arg0);
    }
}

void func_15171600(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x72));
    switch (temp_v0) {                              /* irregular */
    case 0xEB:
        func_151717FC(0x43C80000, 500.0f, 0.0f, D_800A6FC0, 0.0f, 3e-45f, 5, 0x14, 0x14, 0x3F800000, (s32) arg1, arg2, 0);
        return;
    case 0xF6:
        func_151717FC(0x43480000, 400.0f, -1800.0f, -1000.0f, -1200.0f, 3e-45f, 5, 4, 0xA, 0x3F800000, (s32) arg1, arg2, 0);
        return;
    case 0xF8:
        func_151717FC(0x42C80000, 160.0f, -2500.0f, D_800A6FC4, 0.0f, 3e-45f, 5, 4, 4, 0x3F000000, (s32) arg1, arg2, 0);
        return;
    case 0xF9:
        func_151717FC(0x43480000, 100.0f, 100.0f, -300.0f, 0.0f, 1e-45f, 5, 4, 4, 0x3F800000, (s32) arg1, arg2, 0);
        return;
    }
}

void func_151717FC(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, u8 arg11, s32 arg12) {
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
    f32 sp3C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    temp_f14 = (f32) (*(f32 *)((char *)(arg0) + 0x10)) + arg3;
    temp_f12 = (f32) (*(f32 *)((char *)(arg0) + 0x12)) + arg4;
    temp_f16 = (f32) (*(f32 *)((char *)(arg0) + 0x14)) + arg5;
    sp54 = temp_f12;
    sp60 = temp_f12;
    temp_f18 = arg1 + temp_f14;
    sp6C = temp_f12;
    sp50 = temp_f18;
    sp74 = temp_f18;
    temp_f2 = temp_f14 - arg1;
    sp3C = temp_f16 - arg2;
    temp_f0 = arg2 + temp_f16;
    sp5C = temp_f2;
    sp68 = temp_f2;
    sp58 = temp_f0;
    sp64 = temp_f0;
    sp78 = temp_f12;
    sp70 = sp3C;
    sp7C = sp3C;
    func_151700D8(temp_f12, temp_f14, &sp50, temp_f14, temp_f16, arg7, arg10, arg6, arg8, arg9, (s32) arg11, arg12);
}

void func_151718F0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, f32 arg5, s32 arg6, s32 arg7, u8 arg8, s32 arg9) {
    void * spF4;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;
    f32 var_f6;
    s32 temp_f18;
    s32 temp_f6;
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_t1;
    s32 temp_t4;
    s32 var_s1;
    s32 var_s2;
    void *temp_s3;

    spF4 = D_8008CC20;
    if (arg7 != 0) {
        var_s1 = 0;
        var_s2 = 0;
        if (arg7 > 0) {
            temp_s3 = (arg6 * 3) + &spF4;
            do {
                temp_t1 = (var_s1 >> 8) & 0xFF;
                temp_f20 = func_15048A40(temp_t1 & 0xFF);
                temp_f0 = func_150489B0(temp_t1 & 0xFF);
                temp_f22 = (arg3 * temp_f0) + arg2;
                temp_f18 = (s32) (200.0f * temp_f0);
                temp_s0 = (temp_f18 >> 8) & 0xFF;
                temp_s4 = temp_f18 & 0xFF;
                temp_t4 = random_u32() & 0xFFFF;
                var_f6 = (f32) temp_t4;
                if (temp_t4 < 0) {
                    var_f6 += 4294967296.0f;
                }
                temp_s5 = (s32) (((f32) (random_u32() & 0xFFFF) * arg5) + (f32) arg4);
                temp_f6 = (s32) (200.0f * temp_f20);
                func_1516D4E8((s16) (s32) ((arg3 * temp_f20) + arg0), (s16) (s32) arg1, (s16) (s32) temp_f22, 0xD, 0, (s32) (*(s16 *)((char *)(temp_s3) + 0x0)), (s32) (*(s16 *)((char *)(temp_s3) + 0x1)), (s32) (*(s16 *)((char *)(temp_s3) + 0x2)), 0, 0, 0, 0, 2, (temp_f6 >> 8) & 0xFF, temp_f6 & 0xFF, temp_s0, temp_s4, 0, 0, 5, 0, 0, 0, (s32) (s16) temp_s5, (s32) (s16) temp_s5, (random_u32() & 0xF) + 0xA, (s32) ((var_f6 * 0.000015258789f) + 100.0f), 0, 0, (s32) arg8, arg9);
                var_s2 += 1;
                var_s1 += 0xFFFF / arg7;
            } while (var_s2 != arg7);
        }
    }
}

void func_15171BF4(void *arg0, s32 arg1) {
    s32 temp_t6;
    u8 temp_v0;

    temp_t6 = arg1 & 0xFF;
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x4));
    switch (temp_v0) {                              /* irregular */
    case 0x13:
    case 0x23:
        func_150AEEB0(arg0, temp_t6);
        func_10010154(0x69, arg0, 0x7D00, 0xC8, 0x7D0);
        return;
    case 0x1E:
        func_150BD740(arg0, temp_t6, 1);
        return;
    case 0x54:
        func_150CDBB0(arg0, temp_t6, 1);
        return;
    }
}
