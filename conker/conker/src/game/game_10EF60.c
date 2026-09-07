/**
 * Auto-decompiled from asm/10EF60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15094F70(); /* extern */
void * func_150A7960(); /* extern */
s32 func_150AC9C0(); /* extern */
void * func_150E1570(); /* extern */
void * func_150E4550();   /* extern */
s32 func_1510F8CC();                             /* extern */
void *func_15142FBC();             /* extern */
void *func_15167A68();          /* extern */
s32 func_151EF610();                             /* extern */
extern s32 D_8008CA4C;
extern s32 D_800D2C9C;
extern s32 D_800D9960;

void func_150E1AB0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, s16 arg11, u16 arg12, s8 arg13, s16 arg14, s16 arg15, void *arg16, u8 arg17, u8 arg18, s32 arg19, u8 arg20, u8 arg21, f32 arg22, f32 arg23, f32 arg24, f32 arg25, f32 arg26, f32 arg27) {
    f32 sp30;
    f32 sp2C;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_t0;
    s16 temp_t1;
    s32 var_a3;
    void *temp_v0;
    void *temp_v1;
    void *var_v0;

    temp_v0 = func_15167A68(0xB, 0, 0x100, 1, 0xFF, 1);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x94)) = arg1;
        (*(s32 *)((char *)(temp_v0) + 0x90)) = arg11;
        (*(s32 *)((char *)(temp_v0) + 0x9C)) = arg3;
        (*(s32 *)((char *)(temp_v0) + 0x98)) = arg2;
        temp_f16 = arg6 - arg3;
        temp_f2 = arg4 - arg1;
        sp2C = temp_f16;
        sp30 = temp_f2;
        (*(s32 *)((char *)(temp_v0) + 0xA4)) = func_150484A0(-temp_f2, -temp_f16);
        (*(s32 *)((char *)(temp_v0) + 0xA0)) = func_150484A0(arg5 - arg2, sqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16)));
        (*(s32 *)((char *)(temp_v0) + 0xC4)) = 0.0f;
        (*(s32 *)((char *)(temp_v0) + 0xC8)) = 0.0f;
        (*(s32 *)((char *)(temp_v0) + 0xCC)) = 0.0f;
        (*(s32 *)((char *)(temp_v0) + 0xB0)) = arg4;
        var_a3 = 0;
        (*(s32 *)((char *)(temp_v0) + 0xB4)) = arg5;
        (*(s32 *)((char *)(temp_v0) + 0xB8)) = arg6;
        (*(s32 *)((char *)(temp_v0) + 0xAC)) = arg8;
        (*(s32 *)((char *)(temp_v0) + 0xA8)) = arg7;
        (*(s32 *)((char *)(temp_v0) + 0xBC)) = arg9;
        (*(s32 *)((char *)(temp_v0) + 0xE3)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0xC0)) = arg10;
        (*(s32 *)((char *)(temp_v0) + 0xFD)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0xFC)) = arg20;
        (*(s32 *)((char *)(temp_v0) + 0xDC)) = arg16;
        (*(s32 *)((char *)(temp_v0) + 0xFE)) = arg21;
        (*(s32 *)((char *)(temp_v0) + 0xD8)) = arg12;
        (*(s32 *)((char *)(temp_v0) + 0xD0)) = arg13;
        if ((*(s32 *)((char *)(temp_v0) + 0xD0)) != 0) {
            if (arg16 == NULL) {
                func_1516979C(temp_v0);
                return;
            }
            (*(s32 *)((char *)(temp_v0) + 0xD2)) = arg14;
            (*(s16 *)((char *)(temp_v0) + 0xD6)) = (s16) -arg15;
            (*(s32 *)((char *)(temp_v0) + 0xD4)) = arg15;
            (*(s32 *)((char *)(temp_v0) + 0xDA)) = arg17;
            (*(s32 *)((char *)(temp_v0) + 0xE2)) = arg18;
            (*(s16 *)((char *)(temp_v0) + 0xE0)) = (s16) arg19;
            (*(s32 *)((char *)(temp_v0) + 0xE4)) = arg22;
            (*(s32 *)((char *)(temp_v0) + 0xE8)) = arg23;
            (*(s32 *)((char *)(temp_v0) + 0xEC)) = arg24;
            (*(s32 *)((char *)(temp_v0) + 0xF0)) = arg25;
            (*(s32 *)((char *)(temp_v0) + 0xF4)) = arg26;
            (*(s32 *)((char *)(temp_v0) + 0xF8)) = arg27;
            goto block_6;
        }
        (*(s32 *)((char *)(temp_v0) + 0xD6)) = 1;
        (*(s32 *)((char *)(temp_v0) + 0xE0)) = -1;
block_6:
        var_v0 = temp_v0;
        do {
            var_a3 += 1;
            var_v0 = (char *)(var_v0) + 0x40;
            temp_v1 = *(&D_8008CA4C + ((s16) (*(s16 *)((char *)(temp_v0) + 0xD8)) * 4));
            (*(s32 *)((char *)(var_v0) - 0x8)) = 0x2000;
            temp_t0 = (((*(s32 *)((char *)(temp_v1) + 0x6)) - 1) << 5) + 0x2000;
            temp_t1 = (((*(s32 *)((char *)(temp_v1) + 0x8)) - 1) << 5) + 0x2000;
            (*(s32 *)((char *)(var_v0) - 0x6)) = 0x2000;
            (*(s32 *)((char *)(var_v0) - 0xA)) = 0;
            (*(s32 *)((char *)(var_v0) - 0x28)) = temp_t0;
            (*(s32 *)((char *)(var_v0) - 0x26)) = 0x2000;
            (*(s32 *)((char *)(var_v0) - 0x2A)) = 0;
            (*(s32 *)((char *)(var_v0) + 0x8)) = 0x2000;
            (*(s32 *)((char *)(var_v0) + 0xA)) = temp_t1;
            (*(s32 *)((char *)(var_v0) + 0x6)) = 0;
            (*(s32 *)((char *)(var_v0) - 0x18)) = temp_t0;
            (*(s32 *)((char *)(var_v0) - 0x16)) = temp_t1;
            (*(s32 *)((char *)(var_v0) - 0x1A)) = 0;
        } while (var_a3 != 2);
        (*(s32 *)((char *)(temp_v0) + 0xDB)) = 0;
    }
}

void func_150E1D14(void *arg0) {
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    s32 spF8;
    s32 spF4;
    s32 spF0;
    s32 spEC;
    s32 spE8;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    s32 spB0;
    void *sp9C;                                     /* compiler-managed */
    void *sp98;
    void *sp90;                                     /* compiler-managed */
    void *sp8C;
    void *sp88;
    f32 sp80;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f4;
    f32 var_f14;
    f32 var_f14_2;
    f32 var_f16;
    f32 var_f18;
    f32 var_f18_2;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_t0;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_v0;
    u32 temp_lo;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v1_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v1_5;

    spF0 = 0x23;
    sp100 = 0.0f;
    (*(s16 *)((char *)(arg0) + 0x90)) = (s16) ((*(s16 *)((char *)(arg0) + 0x90)) - D_800BE9E4);
    if (((*(s32 *)((char *)(arg0) + 0x90)) < 0) || ((temp_v0 = (*(s32 *)((char *)(arg0) + 0xDC)), (temp_v0 != NULL)) && (temp_v1 = (*(s32 *)((char *)(arg0) + 0xE0)), (temp_v1 != -1)) && (temp_v1 != (*(s32 *)((char *)(temp_v0) + 0x84))))) {
        func_1516972C(arg0);
        return;
    }
    if ((*(s32 *)((char *)(arg0) + 0xD0)) != 0) {
        temp_v1_2 = (*(s32 *)((char *)(arg0) + 0xE3));
        if (temp_v1_2 == 0) {
            if (temp_v0 != NULL) {
                temp_v1_3 = (*(s32 *)((char *)(temp_v0) + 0x1D4));
                if ((temp_v1_3 != 0) && ((*(s32 *)((char *)(arg0) + 0xDA)) == (*(s32 *)((char *)(temp_v0) + 0x3B))) && ((*(s32 *)((char *)(temp_v0) + 0x127)) != 0xFF)) {
                    temp_a0 = temp_v1_3 + ((*(s32 *)((char *)(arg0) + 0xE2)) << 6);
                    spF8 = temp_a0;
                    func_150A7960(temp_a0, (*(s32 *)((char *)(arg0) + 0xE4)), (*(s32 *)((char *)(arg0) + 0xE8)), (*(s32 *)((char *)(arg0) + 0xEC)), (char *)(arg0) + 0x94, (char *)(arg0) + 0x98, (char *)(arg0) + 0x9C);
                    func_150A7960(temp_a0, (*(s32 *)((char *)(arg0) + 0xF0)), (*(s32 *)((char *)(arg0) + 0xF4)), (*(s32 *)((char *)(arg0) + 0xF8)), (char *)(arg0) + 0xB0, (char *)(arg0) + 0xB4, (char *)(arg0) + 0xB8);
                    (*(s32 *)((char *)(arg0) + 0xE3)) = 3U;
                }
            }
        } else {
            (*(u8 *)((char *)(arg0) + 0xE3)) = (u8) (temp_v1_2 - 1);
        }
        (*(s16 *)((char *)(arg0) + 0xD6)) = (s16) ((*(s16 *)((char *)(arg0) + 0xD6)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0xD6)) < -(*(s32 *)((char *)(arg0) + 0xD4))) {
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0xDC));
            (*(s16 *)((char *)(arg0) + 0xD6)) = (s16) (*(s16 *)((char *)(arg0) + 0xD2));
            if (temp_v0_2 != NULL) {
                temp_v1_4 = (*(s32 *)((char *)(temp_v0_2) + 0x1D4));
                if ((temp_v1_4 != 0) && ((*(s32 *)((char *)(arg0) + 0xDA)) == (*(s32 *)((char *)(temp_v0_2) + 0x3B)))) {
                    temp_a0_2 = temp_v1_4 + ((*(s32 *)((char *)(arg0) + 0xE2)) << 6);
                    sp88 = (char *)(arg0) + 0xB4;
                    sp8C = (char *)(arg0) + 0xB8;
                    sp90 = (char *)(arg0) + 0xB0;
                    spF8 = temp_a0_2;
                    func_150A7960(temp_a0_2, (*(s32 *)((char *)(arg0) + 0xE4)), (*(s32 *)((char *)(arg0) + 0xE8)), (*(s32 *)((char *)(arg0) + 0xEC)), (char *)(arg0) + 0x94, (char *)(arg0) + 0x98, (char *)(arg0) + 0x9C);
                    spF4 = (s32) (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0xDC))) + 0x127));
                    func_150A7960(temp_a0_2, (*(s32 *)((char *)(arg0) + 0xF0)), (*(s32 *)((char *)(arg0) + 0xF4)), (*(s32 *)((char *)(arg0) + 0xF8)), sp90, sp88, sp8C);
                    sp104 = 0.0f;
                    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0xFD));
                    (*(u8 *)((char *)(arg0) + 0xFD)) = (u8) (temp_v0_3 - 1);
                    if (temp_v0_3 == 0) {
                        (*(s32 *)((char *)(arg0) + 0xFD)) = 2U;
                        spEC = 1;
                    } else {
                        spEC = 0;
                    }
                    temp_f0 = (*(s32 *)((char *)(arg0) + 0xA8));
                    if (temp_f0 == 0.0f) {
                        spFC = (f32) (func_151EF610() % 70) + 40.0f;
                    } else {
                        spFC = temp_f0;
                    }
                    spE8 = 0;
                    if (spF4 != 0xFF) {
                        temp_v0_4 = (*(s32 *)((char *)(arg0) + 0xDC));
                        temp_v1_5 = (spF4 * 0x1C) + &D_800D9960;
                        temp_t0 = (*(s32 *)((char *)(temp_v0_4) + 0x76)) - (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_4) + 0x31C))) + 0x12));
                        if ((temp_t0 == (*(s32 *)((char *)(temp_v1_5) + 0x0))) && ((*(s32 *)((char *)(temp_v0_4) + 0x1D1)) == (*(s32 *)((char *)(temp_v1_5) + 0x2)))) {
                            (*(f32 *)((char *)(arg0) + 0xB0)) = (f32) (*(f32 *)((char *)(temp_v1_5) + 0x4));
                            (*(f32 *)((char *)(arg0) + 0xB4)) = (f32) (*(f32 *)((char *)(temp_v1_5) + 0x8));
                            (*(f32 *)((char *)(arg0) + 0xB8)) = (f32) (*(f32 *)((char *)(temp_v1_5) + 0xC));
                            if (D_800BE616 == 0) {
                                sp9C = temp_v1_5;
                                if ((func_151EF610(spF4) % 100) < (s32) (*(s32 *)((char *)(temp_v1_5) + 0x3))) {
                                    temp_a0_3 = (char *)(temp_v1_5) + 0x10;
                                    spD8 = (*(s32 *)((char *)(arg0) + 0xB0)) - (*(s32 *)((char *)(arg0) + 0x94));
                                    spDC = (*(s32 *)((char *)(arg0) + 0xB4)) - (*(s32 *)((char *)(arg0) + 0x98));
                                    sp98 = temp_a0_3;
                                    spE0 = (*(s32 *)((char *)(arg0) + 0xB8)) - (*(s32 *)((char *)(arg0) + 0x9C));
                                    func_15049148(sp98, 2.0f * func_150AD900(temp_a0_3, &spD8), &spCC);
                                    func_15048F58(&spD8, &spCC, &spCC);
                                    spCC += (*(s32 *)((char *)(arg0) + 0xB0));
                                    spD0 += (*(s32 *)((char *)(arg0) + 0xB4));
                                    spD4 += (*(s32 *)((char *)(arg0) + 0xB8));
                                    func_150E1AB0(0, (*(f32 *)((char *)(arg0) + 0xB0)), (*(f32 *)((char *)(arg0) + 0xB4)), (*(f32 *)((char *)(arg0) + 0xB8)), spCC, spD0, spD4, (f32) (func_151EF610() % 35) + 20.0f, 0.0f, 8.0f, 320.0f, 0x1E, 0x23U, 0, 0, 0, NULL, 0U, 0U, 0, 0U, 0U, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
                                    func_10010F88((func_151EF610() % 6) + 0x2B, 0x2710, 0, 0, spF4, (s32) (*(s32 *)((char *)(arg0) + 0xB0)), (s32) (*(s32 *)((char *)(arg0) + 0xB4)), (s32) (*(s32 *)((char *)(arg0) + 0xB8)), 0x1F4, 0x7D0);
                                }
                            }
                            sp104 = 1.0f;
                        } else {
                            func_1505A184(temp_t0 & 0xFFFF, 0x44FA0000, (f32) (s16) ((*(f32 *)((char *)(temp_v0_4) + 0x1D1)) * 0xC8) * 0.005493164f, sp90, sp8C, sp88);
                            (*(f32 *)((char *)(arg0) + 0xB0)) = (f32) ((*(f32 *)((char *)(arg0) + 0xB0)) + (*(f32 *)((char *)(arg0) + 0x94)));
                            (*(f32 *)((char *)(arg0) + 0xB4)) = (f32) ((*(f32 *)((char *)(arg0) + 0xB4)) + (*(f32 *)((char *)(arg0) + 0x98)));
                            (*(f32 *)((char *)(arg0) + 0xB8)) = (f32) ((*(f32 *)((char *)(arg0) + 0xB8)) + (*(f32 *)((char *)(arg0) + 0x9C)));
                        }
                        (*(f32 *)((char *)(arg0) + 0xC0)) = (f32) (((f32) (func_151EF610() % 3) * 80.0f) + 80.0f);
                    } else {
                        if (spEC != 0) {
                            spC0 = (*(s32 *)((char *)(arg0) + 0xB0)) - (*(s32 *)((char *)(arg0) + 0x94));
                            spBC = (*(s32 *)((char *)(arg0) + 0xB4)) - (*(s32 *)((char *)(arg0) + 0x98));
                            temp_f10 = (*(s32 *)((char *)(arg0) + 0xB8)) - (*(s32 *)((char *)(arg0) + 0x9C));
                            sp80 = spC0;
                            spB8 = temp_f10;
                            temp_f2 = (75.0f * spFC) / sqrtf((spC0 * spC0) + (spBC * spBC) + (temp_f10 * temp_f10));
                            if (func_150AC9C0((*(s32 *)((char *)(arg0) + 0x94)), (*(s32 *)((char *)(arg0) + 0x98)), spF4, (*(s32 *)((char *)(arg0) + 0x9C)), spC0 * temp_f2, spBC * temp_f2, temp_f10 * temp_f2, &spB0, 0, &spC0, &spBC, &spB8, 0, 0, 0, 0.0f) != 0) {
                                (*(s32 *)((char *)(arg0) + 0xB0)) = spC0;
                                (*(s32 *)((char *)(arg0) + 0xB4)) = spBC;
                                (*(s32 *)((char *)(arg0) + 0xB8)) = spB8;
                                sp104 = 1.0f;
                                temp_lo = (u32) (spB0 - D_800DBE3C) / 12U;
                                if (((s32) temp_lo >= 0) && ((s32) temp_lo < D_800DBE4C) && (D_800DBE5C != 0)) {
                                    spE8 = func_1510F8CC((*(s32 *)((char *)(D_800DBE5C) + (temp_lo * 4))));
                                }
                            }
                        }
                        spF0 = 0x43;
                    }
                    temp_f2_2 = (*(s32 *)((char *)(arg0) + 0xB0)) - (*(s32 *)((char *)(arg0) + 0x94));
                    (*(s32 *)((char *)(arg0) + 0xA4)) = func_150484A0(-((*(s32 *)((char *)(arg0) + 0xB0)) - (*(s32 *)((char *)(arg0) + 0x94))), -((*(s32 *)((char *)(arg0) + 0xB8)) - (*(s32 *)((char *)(arg0) + 0x9C))));
                    temp_f16 = (*(s32 *)((char *)(arg0) + 0xB8)) - (*(s32 *)((char *)(arg0) + 0x9C));
                    (*(s32 *)((char *)(arg0) + 0xA0)) = func_150484A0((*(s32 *)((char *)(arg0) + 0xB4)) - (*(s32 *)((char *)(arg0) + 0x98)), sqrtf((temp_f2_2 * temp_f2_2) + (temp_f16 * temp_f16)));
                    (*(s32 *)((char *)(arg0) + 0xC4)) = 0.0f;
                    (*(s32 *)((char *)(arg0) + 0xC8)) = 0.0f;
                    (*(s32 *)((char *)(arg0) + 0xCC)) = 0.0f;
                    if (spEC != 0) {
                        func_150E1AB0(0, (*(u16 *)((char *)(arg0) + 0x94)), (*(u16 *)((char *)(arg0) + 0x98)), (*(u16 *)((char *)(arg0) + 0x9C)), (*(u16 *)((char *)(arg0) + 0xB0)), (*(u16 *)((char *)(arg0) + 0xB4)), (*(u16 *)((char *)(arg0) + 0xB8)), spFC, sp104, 15.0f, 820.0f, 0x4B, (u16) spF0, 0, 0, 0, (*(u16 *)((char *)(arg0) + 0xDC)), 0U, 0U, 0, (u8) spE8, (u8) (s32) (*(u16 *)((char *)(arg0) + 0xFE)), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
                    }
                    goto block_43;
                }
            }
            func_1516972C(arg0);
            return;
        }
        goto block_44;
    }
block_43:
block_44:
    if ((*(s32 *)((char *)(arg0) + 0xD6)) > 0) {
        sp10C = func_150AD78C((*(s32 *)((char *)(arg0) + 0xA0)));
        temp_f0_2 = func_150AD780((*(s32 *)((char *)(arg0) + 0xA0)));
        sp118 = 0.0f;
        sp114 = 0.0f - (sp10C * -1.0f);
        sp110 = 0.0f + (temp_f0_2 * -1.0f);
        sp10C = func_150AD78C((*(s32 *)((char *)(arg0) + 0xA4)));
        temp_f0_3 = func_150AD780((*(s32 *)((char *)(arg0) + 0xA4)));
        temp_f4 = temp_f0_3 * sp118;
        sp120 = sp114;
        var_f14 = temp_f4 + (sp10C * sp110);
        var_f18 = (-sp10C * sp118) + (temp_f0_3 * sp110);
        if ((*(s32 *)((char *)(arg0) + 0xAC)) != 0.0f) {
            temp_f2_3 = (*(s32 *)((char *)(arg0) + 0xB0)) - (*(s32 *)((char *)(arg0) + 0x94));
            temp_f12 = (*(s32 *)((char *)(arg0) + 0xB4)) - (*(s32 *)((char *)(arg0) + 0x98));
            temp_f16_2 = (*(s32 *)((char *)(arg0) + 0xB8)) - (*(s32 *)((char *)(arg0) + 0x9C));
            sp100 = sqrtf((temp_f2_3 * temp_f2_3) + (temp_f12 * temp_f12) + (temp_f16_2 * temp_f16_2));
        }
        if ((*(s32 *)((char *)(arg0) + 0xDB)) == 0) {
            var_f14 *= 0.5f;
            sp120 = sp114 * 0.5f;
            var_f18 *= 0.5f;
        }
        (*(s32 *)((char *)(arg0) + 0xC4)) = var_f14;
        (*(s32 *)((char *)(arg0) + 0xCC)) = var_f18;
        (*(s32 *)((char *)(arg0) + 0xC8)) = sp120;
        temp_f0_4 = (*(f32 *)((char *)(arg0) + 0xA8)) * (f32) D_800BE9E4;
        if ((sp100 < temp_f0_4) && ((*(s32 *)((char *)(arg0) + 0xAC)) != 0.0f)) {
            var_f14_2 = var_f14 * sp100;
            (*(s32 *)((char *)(arg0) + 0xC0)) = sp100;
            var_f16 = sp120 * sp100;
            var_f18_2 = var_f18 * sp100;
        } else {
            var_f14_2 = var_f14 * temp_f0_4;
            var_f16 = sp120 * temp_f0_4;
            var_f18_2 = var_f18 * temp_f0_4;
        }
        if ((*(s32 *)((char *)(arg0) + 0xFE)) == 1) {
            temp_a0_4 = (*(s32 *)((char *)(arg0) + 0xDC));
            var_v0 = 0;
            if (temp_a0_4 != NULL) {
                var_v0 = (s32) ((char *)(temp_a0_4) - (char *)(&gObjects)) / 812;
            }
            temp_f0_5 = (*(s32 *)((char *)(arg0) + 0x94));
            temp_f2_4 = (*(s32 *)((char *)(arg0) + 0x98));
            temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x9C));
            sp11C = var_f18_2;
            sp120 = var_f16;
            sp124 = var_f14_2;
            func_150E1570(temp_f12_2, var_f14_2, temp_a0_4, temp_f0_5, temp_f2_4, temp_f12_2, temp_f0_5 + var_f14_2, temp_f2_4 + var_f16, temp_f12_2 + var_f18_2, var_v0, 0);
        }
        (*(f32 *)((char *)(arg0) + 0x94)) = (f32) ((*(f32 *)((char *)(arg0) + 0x94)) + var_f14_2);
        (*(f32 *)((char *)(arg0) + 0x98)) = (f32) ((*(f32 *)((char *)(arg0) + 0x98)) + var_f16);
        (*(f32 *)((char *)(arg0) + 0x9C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x9C)) + var_f18_2);
        sp90 = (*(s32 *)((char *)(arg0) + 0xAC));
        if (sp90 != 0) {
            sp9C = (*(s32 *)((char *)(arg0) + 0xB0));
            temp_f14 = (*(s32 *)((char *)(arg0) + 0xB4));
            temp_f2_5 = (s32)(sp9C) - (*(s32 *)((char *)(arg0) + 0x94));
            temp_f18 = (*(s32 *)((char *)(arg0) + 0xB8));
            temp_f12_3 = temp_f14 - (*(s32 *)((char *)(arg0) + 0x98));
            temp_f16_3 = temp_f18 - (*(s32 *)((char *)(arg0) + 0x9C));
            temp_f0_6 = sqrtf((temp_f2_5 * temp_f2_5) + (temp_f12_3 * temp_f12_3) + (temp_f16_3 * temp_f16_3));
            if ((temp_f0_6 < (s32)(sp90)) || (sp100 < temp_f0_6)) {
                temp_v0_5 = (*(s32 *)((char *)(arg0) + 0xFC));
                if (temp_v0_5 != 0) {
                    func_150E4550(sp9C, temp_f14, temp_f18, 1, (s32) temp_v0_5, 0, 0xFF);
                }
                func_1516972C(arg0);
                return;
            }
            if (temp_f0_6 < (*(s32 *)((char *)(arg0) + 0xC0))) {
                (*(s32 *)((char *)(arg0) + 0xC0)) = temp_f0_6;
            }
        }
    }
}

void *func_150E28DC(void *arg0, void *arg1, s32 arg2) {
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spB4;
    void * spA0;
    void * sp88;
    s8 sp87;
    f32 sp58;
    void * *var_v0;
    f32 *var_a2;
    f32 *var_v1;
    f32 *var_v1_2;
    f32 *var_v1_3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f10_4;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 var_f20;
    f32 var_f22;
    f32 var_f24;
    s32 temp_lo;
    s32 temp_t8;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0_2;
    void *temp_a1;
    void *temp_t5;
    void *temp_v0;
    void *temp_v0_3;

    if ((*(s32 *)((char *)(arg1) + 0xD6)) > 0) {
        sp110 = (*(s32 *)((char *)(arg1) + 0x94));
        sp114 = (*(s32 *)((char *)(arg1) + 0x98));
        sp118 = (*(s32 *)((char *)(arg1) + 0x9C));
        temp_a1 = D_800DBFF0 + (arg2 * 0x9A0);
        var_v0 = &spA0;
        sp11C = (*(s32 *)((char *)(arg1) + 0x94)) + ((*(s32 *)((char *)(arg1) + 0xC0)) * (*(s32 *)((char *)(arg1) + 0xC4)));
        sp120 = (*(s32 *)((char *)(arg1) + 0x98)) + ((*(s32 *)((char *)(arg1) + 0xC0)) * (*(s32 *)((char *)(arg1) + 0xC8)));
        sp124 = (*(s32 *)((char *)(arg1) + 0x9C)) + ((*(s32 *)((char *)(arg1) + 0xC0)) * (*(s32 *)((char *)(arg1) + 0xCC)));
        sp104 = (*(s32 *)((char *)(temp_a1) + 0x2F8));
        sp108 = (*(s32 *)((char *)(temp_a1) + 0x2FC));
        sp10C = (*(s32 *)((char *)(temp_a1) + 0x300));
        temp_f10 = (*(s32 *)((char *)&(sp110) + 0x0)) - sp104;
        var_v1 = &sp110 + 0xC;
        var_f24 = (*(s32 *)((char *)&(sp110) + 0x8)) - sp10C;
        var_f22 = temp_f10 * temp_f10;
        var_f20 = (*(s32 *)((char *)&(sp110) + 0x4)) - sp108;
        if ((u32) var_v1 < (u32) &arg0) {
            do {
                temp_f8 = (*(s32 *)((char *)(var_v1) + 0x8));
                temp_f6 = var_f24 * var_f24;
                temp_f4 = (*(s32 *)((char *)(var_v1) + 0x4));
                temp_f10_2 = (*(s32 *)((char *)(var_v1) + 0x0)) - sp104;
                var_v1 += 0xC;
                var_v0 = (char *)(var_v0) + 4;
                var_f24 = temp_f8 - sp10C;
                temp_f12 = temp_f6 + (var_f22 + (var_f20 * var_f20));
                var_f22 = temp_f10_2 * temp_f10_2;
                var_f20 = temp_f4 - sp108;
                (*(s32 *)((char *)(var_v0) - 0x4)) = temp_f12;
            } while ((u32) var_v1 < (u32) &arg0);
        }
        (*(f32 *)((char *)(((char *)(var_v0) + 4)) - 0x4)) = (f32) ((var_f24 * var_f24) + (var_f22 + (var_f20 * var_f20)));
        temp_f4_2 = sp110;
        temp_f8_2 = sp114;
        sp110 = sp11C;
        sp11C = temp_f4_2;
        sp114 = sp120;
        temp_f0 = sp124;
        sp120 = temp_f8_2;
        sp124 = sp118;
        sp118 = temp_f0;
        temp_f8_3 = sp104 - (*(s32 *)((char *)(arg1) + 0x94));
        var_a0 = 0;
        var_v1_2 = &sp110;
        spEC = temp_f8_3;
        temp_f4_3 = sp108 - (*(s32 *)((char *)(arg1) + 0x98));
        spF0 = temp_f4_3;
        temp_f6_2 = sp10C - (*(s32 *)((char *)(arg1) + 0x9C));
        spF4 = temp_f6_2;
        sp58 = temp_f8_3;
        spF8 = (temp_f4_3 * (*(s32 *)((char *)(arg1) + 0xCC))) - (temp_f6_2 * (*(s32 *)((char *)(arg1) + 0xC8)));
        spFC = (temp_f6_2 * (*(s32 *)((char *)(arg1) + 0xC4))) - (sp58 * (*(s32 *)((char *)(arg1) + 0xCC)));
        sp100 = (sp58 * (*(s32 *)((char *)(arg1) + 0xC8))) - (temp_f4_3 * (*(s32 *)((char *)(arg1) + 0xC4)));
loop_4:
        temp_f14 = (*(s32 *)((char *)(var_v1_2) + 0x0));
        spEC = temp_f14 - sp104;
        temp_f16 = (*(s32 *)((char *)(var_v1_2) + 0x4));
        spF0 = temp_f16 - sp108;
        temp_f12_2 = (*(s32 *)((char *)(var_v1_2) + 0x8));
        temp_f10_3 = temp_f12_2 - sp10C;
        spF4 = temp_f10_3;
        temp_f6_3 = (spF0 * (*(s32 *)((char *)(arg1) + 0xCC))) - (temp_f10_3 * (*(s32 *)((char *)(arg1) + 0xC8)));
        spF8 = temp_f6_3;
        sp58 = spF0;
        temp_f10_4 = (temp_f10_3 * (*(s32 *)((char *)(arg1) + 0xC4))) - (spEC * (*(s32 *)((char *)(arg1) + 0xCC)));
        spFC = temp_f10_4;
        sp58 = temp_f6_3;
        temp_f6_4 = (spEC * (*(s32 *)((char *)(arg1) + 0xC8))) - (spF0 * (*(s32 *)((char *)(arg1) + 0xC4)));
        sp100 = temp_f6_4;
        temp_f0_2 = sqrtf((temp_f6_4 * temp_f6_4) + ((sp58 * sp58) + (temp_f10_4 * temp_f10_4)));
        if (temp_f0_2 == 0.0f) {

        } else {
            temp_f2 = (*(s32 *)((char *)(arg1) + 0xBC)) / temp_f0_2;
            temp_lo = var_a0 * 2 * 0xC;
            var_a0 += 1;
            var_v1_2 += 0xC;
            temp_v0 = &spB4 + temp_lo;
            temp_f18 = spF8 * temp_f2;
            temp_f20 = spFC * temp_f2;
            temp_f22 = sp100 * temp_f2;
            (*(f32 *)((char *)(temp_v0) + 0x0)) = (f32) (temp_f18 + temp_f14);
            (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) (temp_f20 + temp_f16);
            (*(f32 *)((char *)(temp_v0) + 0xC)) = (f32) (temp_f14 - temp_f18);
            (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) (temp_f22 + temp_f12_2);
            (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) (temp_f16 - temp_f20);
            (*(f32 *)((char *)(temp_v0) + 0x14)) = (f32) (temp_f12_2 - temp_f22);
            sp100 = temp_f22;
            spFC = temp_f20;
            spF8 = temp_f18;
            if (var_a0 >= 2) {
                var_a0_2 = 0;
                var_a2 = &spB4;
                do {
                    var_v0_2 = 0;
                    var_v1_3 = var_a2;
loop_9:
                    temp_t8 = (s32) *var_v1_3;
                    temp_t5 = (char *)(arg1) + (D_800BE9C0 << 6) + (var_a0_2 * 0x10) + var_v0_2;
                    var_v0_2 += 2;
                    var_v1_3 += 4;
                    (*(s16 *)((char *)(temp_t5) + 0x10)) = (s16) temp_t8;
                    if (var_v0_2 != 6) {
                        goto loop_9;
                    }
                    var_a0_2 += 1;
                    var_a2 += 0xC;
                } while (var_a0_2 != 4);
                temp_v0_2 = func_15094F70(temp_f12_2, temp_f14, arg0, *(&D_8008CA4C + ((*(s32 *)((char *)(arg1) + 0xD8)) * 4)), 0, &sp88, 0, 0, 0, 2, 3);
                sp87 = 0;
                temp_v0_3 = func_15142FBC(temp_v0_2, D_800D2C9C | 0x80000 | 0x2CA0, 0x504A50, &sp87);
                (*(s32 *)((char *)(temp_v0_3) + 0x0)) = 0x01004008;
                (*(s32 *)((char *)(temp_v0_3) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x10);
                (*(s32 *)((char *)(temp_v0_3) + 0x8)) = 0x05000206;
                (*(s32 *)((char *)(temp_v0_3) + 0xC)) = 0;
                arg0 = (char *)(temp_v0_3) + 0x18;
                (*(s32 *)((char *)(temp_v0_3) + 0x10)) = 0x05000604;
                (*(s32 *)((char *)(temp_v0_3) + 0x14)) = 0;
                goto block_12;
            }
            goto loop_4;
        }
    } else {
block_12:
        (*(s32 *)((char *)(arg1) + 0xDB)) = 1;
    }
    return arg0;
}

s16 func_150E2DA4( s32 arg0, s32 arg1) {
    return arg0;
}

void func_150E2DB4(void *arg0, u8 arg1, s16 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, s16 arg10, s16 arg11, u16 arg12, u8 arg13) {
    func_150E1AB0(0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 40.0f, 400.0f, (s16) (s32) arg12, 0x27U, 1, (s16) (s32) arg10, (s16) (s32) arg11, arg0, (u8) (s32) arg1, (u8) (s32) arg2, arg3, 0U, (u8) (s32) arg13, arg4, arg5, arg6, arg7, arg8, arg9);
}

void func_150E2EA4(void *arg0, u8 arg1, s16 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, s16 arg10, s16 arg11, u16 arg12, f32 arg13, f32 arg14, u8 arg15, f32 arg16) {
    func_150E1AB0(0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, arg16, 0.0f, arg13, arg14, (s16) (s32) arg12, 0x27U, 1, (s16) (s32) arg10, (s16) (s32) arg11, arg0, (u8) (s32) arg1, (u8) (s32) arg2, arg3, 0U, (u8) (s32) arg15, arg4, arg5, arg6, arg7, arg8, arg9);
}

void func_150E2F90(void * arg1, s32 arg2) {
    func_150E2DA4(arg2, arg2);
}

void func_150E2FC0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    if ((arg2 & 0xFF) == 0x2D) {
        temp_v0 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_v1 = (*(s32 *)((char *)(arg0) + 0xDC));
        if (temp_v0 == temp_v1) {
            (*(s32 *)((char *)(arg0) + 0xDC)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(arg0) + 0xDA)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_v1) {
            (*(s32 *)((char *)(arg0) + 0xDC)) = temp_v0;
            (*(u8 *)((char *)(arg0) + 0xDA)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}
