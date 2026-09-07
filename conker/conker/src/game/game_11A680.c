/**
 * Auto-decompiled from asm/11A680.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15052590();                            /* extern */
void * func_15052F9C(); /* extern */
void * func_1505327C();              /* extern */
void * func_15062FC0(); /* extern */
s32 func_1507BB28();                /* extern */
void * func_1508DAEC();                 /* extern */
void * func_150A7960(); /* extern */
s32 func_150AC9C0(); /* extern */
void * func_151045E0();                              /* extern */
void * func_151254F4();               /* extern */
f32 func_15144BC8();                             /* extern */
s32 func_151452C4(); /* extern */
void * func_1517F488();              /* extern */
extern f32 D_800A1590;
extern f32 D_800A1594;
extern f32 D_800A1598;
extern f32 D_800A159C;
extern f32 D_800A15A0;
extern f32 D_800A15A4;
extern f32 D_800A15A8;
extern f32 D_800A15AC;
extern f32 D_800A15B0;
extern f32 D_800A15B4;
extern f32 D_800A15B8;
extern f32 D_800A15BC;
extern f32 D_800A15C0;
extern f32 D_800A15C4;
extern f32 D_800A15C8;
extern f32 D_800A15CC;
extern f32 D_800A15D0;
extern f32 D_800A15D4;
extern f32 D_800A15D8;
extern f32 D_800A15DC;
extern f32 D_800A15E0;
extern f32 D_800A15E4;
extern f32 D_800A15E8;
extern f32 D_800A15EC;
extern s32 D_800CC5EC;
extern s32 D_800E0BCE;
f32 func_150ED1D0(f32 arg1, f32 arg0);

f32 func_150ED1D0(f32 arg1, f32 arg0) {
    f32 temp_f0;
    f32 var_f2;

    arg0 = func_15144BC8();
    temp_f0 = func_15144BC8(func_15144BC8(arg1) - arg0);
    var_f2 = temp_f0;
    if (temp_f0 > 180.0f) {
        var_f2 = -360.0f + temp_f0;
    }
    return var_f2;
}

f32 func_150ED234(void *arg0, void * *arg1) {
    return func_150ED1D0((f32) (func_1505A630((*(f32 *)((char *)(arg1) + 0x14)) - (*(f32 *)((char *)(arg0) + 0x14)), (*(f32 *)((char *)(arg0) + 0x1C)) - (*(f32 *)((char *)(arg1) + 0x1C)), 0) + 0x4000) * 0.005493164f, (*(f32 *)((char *)(arg0) + 0x40)));
}

f32 func_150ED298(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp98;
    f32 sp94;
    f32 sp8C;
    f32 sp88;
    f32 sp80;
    void * sp3C;
    f32 sp30;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f12;
    f32 var_f2;
    s32 temp_v1;

    f32 sp6C;
    f32 sp74;
    f32 sp70;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x1D4));
    if (temp_v1 != 0) {
        guMtxL2F(&sp3C, temp_v1 + 0xC0);
        func_150A7960(&sp3C, 0, 0, 0x3F800000, &spA8, &spA4, &spA0);
        temp_f16 = spA8 - sp6C;
        temp_f18 = spA0 - sp74;
        spA8 = temp_f16;
        temp_f12 = spA4 - sp70;
        spA0 = temp_f18;
        spA4 = temp_f12;
        temp_f2 = func_150484A0(temp_f12, sqrtf((temp_f16 * temp_f16) + (temp_f18 * temp_f18))) * D_800A1590;
        var_f12 = temp_f2;
        if (temp_f2 > 180.0f) {
            var_f12 = temp_f2 - 360.0f;
        }
        spA4 = sp70;
        arg1 = var_f12;
        spA8 = sp6C;
        spA0 = sp74;
    } else {
        spA8 = (*(s32 *)((char *)(arg0) + 0x14));
        spA4 = (*(s32 *)((char *)(arg0) + 0x18));
        spA0 = (*(s32 *)((char *)(arg0) + 0x1C));
    }
    temp_f2_2 = arg2 - spA8;
    sp8C = arg3 - spA4;
    temp_f12_2 = arg4 - spA0;
    temp_f14 = sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2)) - arg5;
    sp88 = temp_f14;
    if (temp_f14 < 100.0f) {
        sp88 = 100.0f;
    }
    sp80 = D_800A1594;
    temp_f12_3 = arg1 * D_800A1598;
    sp30 = temp_f12_3;
    sp94 = cosf(temp_f12_3) * D_800A159C;
    temp_f2_3 = sinf(temp_f12_3) * D_800A15A0;
    sp98 = temp_f2_3;
    temp_f12_4 = (temp_f2_3 * temp_f2_3) + (2.0f * (sp8C * -2.5f));
    spAC = temp_f12_4;
    if (temp_f12_4 > 0.0f) {
        temp_f0 = sqrtf(spAC);
        temp_f16_2 = -sp98;
        temp_f14_2 = (temp_f16_2 - temp_f0) / -2.5f;
        var_f2 = temp_f14_2;
        if (temp_f14_2 > 0.0f) {
            temp_f12_5 = (temp_f16_2 + temp_f0) / -2.5f;
            if ((temp_f12_5 > 0.0f) && (temp_f14_2 < temp_f12_5)) {
                var_f2 = temp_f12_5;
            }
        }
        if (var_f2 > 0.0f) {
            sp80 = sp88 - (var_f2 * sp94);
        }
    } else {
        sp80 = ((func_15048408(sqrtf(-2.0f * sp8C * -2.5f) * D_800A15A4) * D_800A15A8) - arg1) * 1000.0f;
    }
    return sp80;
}

void func_150ED578(void *arg0) {
    u8 var_v0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x31C));
    if ((temp_v0 != NULL) && ((*(s32 *)((char *)(temp_v0) + 0x84)) == 0)) {
        if (D_800BE616 != 0) {
            var_v0 = (*(s32 *)((char *)(arg0) + 0x127));
        } else {
            var_v0 = (*(s32 *)((char *)(arg0) + 0x124));
        }
        if ((*(s32 *)((*(s32 *)((char *)(D_800BE728) + (var_v0 * 4))))) & 0x10) {
            temp_v1 = (var_v0 * 0x32C) + &gObjects;
            if ((*(s32 *)((char *)((*(s32 *)((char *)(temp_v1) + 0x31C))) + 0x197)) != 0) {
                temp_v0_2 = (*(s32 *)((char *)(temp_v1) + 0x318));
                if (temp_v0_2 != NULL) {
                    (*(u8 *)((char *)(arg0) + 0x2FC)) = (u8) ((*(u8 *)((char *)(arg0) + 0x2FC)) | (1 << (*(u8 *)((char *)(temp_v0_2) + 0x23D))));
                }
            }
        }
    }
}

void func_150ED638(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;

    if (arg1 < -0x2D) {
        var_s1 = -0x2D;
    } else {
        var_v0 = arg1;
        if (arg1 >= 0x2E) {
            var_v0 = 0x2D;
        }
        var_s1 = var_v0;
    }
    if (arg2 < -0x2D) {
        var_s2 = -0x2D;
    } else {
        var_v0_2 = arg2;
        if (arg2 >= 0x2E) {
            var_v0_2 = 0x2D;
        }
        var_s2 = var_v0_2;
    }
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x28) {
        var_s0 = 0x7C;
    } else {
        temp_v0 = var_s1;
        var_s1 = var_s2;
        var_s0 = 0x1C;
        var_s2 = temp_v0;
    }
    func_15062FC0(NULL, 0, 0x800, 0x800, var_s0, var_s2 * -7, 0);
    func_15062FC0(arg0, 1, var_s0, 0x800, 0x800, var_s0, var_s1 * -7, 0);
}

void func_150ED748(void *arg0) {
    s32 sp174;
    s32 sp16C;
    u8 sp16B;
    u8 sp16A;
    u16 sp168;
    s32 sp15C;
    f32 sp154;
    s8 sp153;
    s32 sp130;
    void * *sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 spEC;
    s32 spE8;
    s32 spE4;
    s32 spE0;
    s32 spD0;
    s32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spAC;
    void * spA0;
    void * sp94;
    f32 sp90;
    void * sp8C;
    void *sp88;
    void *sp84;
    f32 sp74;
    void * *sp70;
    void *sp6C;
    s32 sp60;
    f32 sp50;
    void * *temp_a1_2;
    void * *temp_v0_12;
    void * *var_v1_4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f10_4;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f12;
    f32 var_f14;
    f32 var_f14_2;
    f32 var_f14_3;
    f32 var_f16;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f2_4;
    s16 var_v1;
    s32 temp_f4;
    s32 temp_lo;
    s32 temp_v0_23;
    s32 temp_v0_24;
    s32 temp_v0_8;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 temp_v0_17;
    s8 temp_v0_6;
    s8 temp_v0_7;
    s8 temp_v1_2;
    s8 temp_v1_3;
    s8 var_a1_2;
    s8 var_a3;
    u16 *temp_a0_4;
    u16 temp_a0;
    u16 temp_a0_2;
    u8 temp_t7;
    u8 temp_t8;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_9;
    u8 temp_v1;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_a2;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_v0_11;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_16;
    void *temp_v0_18;
    void *temp_v0_19;
    void *temp_v0_20;
    void *temp_v0_21;
    void *temp_v0_22;
    void *temp_v0_25;
    void *temp_v0_26;
    void *temp_v0_27;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *var_a2;
    void *var_v0_3;

    sp16C = 1;
    if (D_800BE616 != 0) {
        sp174 = (s32) (*(s32 *)((char *)(arg0) + 0x127));
    } else {
        sp174 = 0;
    }
    (*(s32 *)((char *)(arg0) + 0x2FC)) = 0;
    (*(s32 *)((char *)(arg0) + 0x124)) = 0U;
    sp16B = 0;
    sp16A = (*(s32 *)((char *)(arg0) + 0x124));
    sp168 = (*(s32 *)((char *)(arg0) + 0x7A));
    (*(s32 *)((char *)(arg0) + 0x247)) = 0x10;
    (*(s32 *)((char *)(arg0) + 0x248)) = 8;
    if (D_800BE616 == 0) {
        if ((*(s32 *)((char *)(arg0) + 0x13C)) != 0) {
            sp16B = 1;
            temp_f2 = (*(s32 *)((char *)(arg0) + 0x3C));
            if (fabsf(temp_f2) > 5.0f) {
                (*(s32 *)((char *)(arg0) + 0xD0)) = 1;
                (*(s32 *)((char *)(arg0) + 0x114)) = 2.0f;
                if (temp_f2 < 0.0f) {
                    (*(s32 *)((char *)(arg0) + 0xD0)) = 2;
                }
            }
        }
    } else {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x127));
        sp16A = temp_v0;
        if (temp_v0 != 0xFF) {
            if ((*(s32 *)((char *)((*(&D_800CC5EC + (temp_v0 * 0x32C)))) + 0x84)) == 0) {
                sp16B = 1;
            }
            temp_a2 = (sp16A * 0x32C) + &gObjects;
            if ((*(s32 *)((char *)(temp_a2) + 0x1CA)) != 0) {
                temp_v0_2 = (*(s32 *)((char *)(temp_a2) + 0x31C));
                temp_v1 = (*(s32 *)((char *)(temp_v0_2) + 0x128));
                if (temp_v1 & 0x80) {
                    if ((*(s32 *)((char *)(temp_v0_2) + 0x12C)) != 0) {
                        (*(s32 *)((char *)(arg0) + 0x125)) = 0xFF;
                        temp_v0_3 = (*(s32 *)((char *)(temp_a2) + 0x31C));
                        temp_a0 = (*(s32 *)((char *)(temp_v0_3) + 0x12C));
                        if (D_800BE9E4 < (s32) temp_a0) {
                            (*(u16 *)((char *)(temp_v0_3) + 0x12C)) = (u16) (temp_a0 - D_800BE9E4);
                        } else {
                            (*(s32 *)((char *)(temp_v0_3) + 0x12C)) = 0U;
                            func_1508DAEC(sp16A, 0, temp_a2);
                            (*(s32 *)((char *)(arg0) + 0x125)) = 0;
                        }
                    }
                } else if ((temp_v1 & 0x10) && ((*(s32 *)((char *)(temp_v0_2) + 0x12C)) == 0)) {
                    func_1508DAEC(sp16A, 0, temp_a2);
                }
            }
        }
    }
    if (sp16B != 0) {
        var_a2 = (sp16A * 0x32C) + &gObjects;
        temp_t8 = (*(s32 *)((char *)(var_a2) + 0x1CA));
        var_f2 = 0.0f;
        var_t1 = 0;
        sp16C = (s32) temp_t8;
        if (temp_t8 != 0) {
            temp_a1 = (sp16A * 6) + D_800BE748;
            var_a3 = (*(s32 *)((char *)(temp_a1) + 0x2));
            (*(s32 *)((char *)(arg0) + 0x247)) = 0x32;
            (*(s32 *)((char *)(arg0) + 0x248)) = 0x32;
            temp_v0_4 = (*(s32 *)((char *)(var_a2) + 0x31C));
            var_f2 = D_800A15AC;
            sp60 = (s32) sp16A;
            if (((*(s32 *)((char *)(temp_v0_4) + 0x128)) & 1) && ((*(s32 *)((*(s32 *)((char *)(D_800BE728) + (sp16A * 4))))) & 0x8000) && ((*(s32 *)((char *)(temp_v0_4) + 0x12C)) != 0)) {
                (*(s32 *)((char *)(arg0) + 0x247)) = 0x1C;
                (*(s32 *)((char *)(arg0) + 0x248)) = 0x1C;
                temp_v0_5 = (*(s32 *)((char *)(var_a2) + 0x31C));
                (*(s32 *)((char *)(temp_a1) + 0x3)) = 0x50;
                temp_a0_2 = (*(s32 *)((char *)(temp_v0_5) + 0x12C));
                var_f2 = 2.0f * D_800A15AC;
                if (D_800BE9E4 < (s32) temp_a0_2) {
                    (*(u16 *)((char *)(temp_v0_5) + 0x12C)) = (u16) (temp_a0_2 - D_800BE9E4);
                } else {
                    (*(s32 *)((char *)(temp_v0_5) + 0x12C)) = 0U;
                    sp154 = var_f2;
                    sp15C = 0;
                    sp153 = var_a3;
                    sp6C = var_a2;
                    func_1508DAEC((u8) sp60, 0, var_a2, var_a3);
                    var_t1 = 0;
                }
            }
            var_v1 = (s16) (s32) ((((f32) (s16) (s32) (18.0f - ((*(s16 *)((char *)(arg0) + 0x3C)) * (D_800A15B0 / var_f2))) * 0.5f) + 9.0f) * D_800BE9A4);
            if (var_v1 < 0xA) {
                var_v1 = 0xA;
            }
            if (((*(s32 *)((*(s32 *)((char *)(D_800BE728) + (sp16A * 4))))) & 0x10) && (((*(s32 *)((char *)((*(s32 *)((char *)(var_a2) + 0x31C))) + 0x128)) & 2) || (D_800BE616 == 0))) {
                var_f2 = 0.0f;
                var_t1 = 0x1F;
                var_a3 = 0;
                (*(s32 *)((char *)(arg0) + 0x22B)) = 0;
                (*(s32 *)((char *)(arg0) + 0x3C)) = 0.0f;
            }
            temp_v0_6 = (*(s32 *)((char *)(arg0) + 0x22B));
            (*(s8 *)((char *)(arg0) + 0x22B)) = (s8) (temp_v0_6 + ((s32) (var_a3 - temp_v0_6) / 4));
            if (D_800BE616 != 0) {
                (*(s32 *)((char *)(arg0) + 0x22B)) = var_a3;
            }
            if (var_a3 == 0) {
                temp_v0_7 = (*(s32 *)((char *)(arg0) + 0x22B));
                if ((temp_v0_7 >= -4) && (temp_v0_7 < 5)) {
                    (*(s32 *)((char *)(arg0) + 0x22B)) = 0;
                }
            }
            (*(s32 *)((char *)(arg0) + 0xF4)) = (s32) ((*(s32 *)((char *)(arg0) + 0xF4)) | 0x40);
            (*(s16 *)((char *)(arg0) + 0x78)) = (s16) ((*(s16 *)((char *)(arg0) + 0x7A)) - ((*(s16 *)((char *)(arg0) + 0x22B)) * var_v1));
            var_v0 = sp60;
            if ((D_800BE616 != 0) && (sp60 < 2)) {
                temp_v1_2 = *(&D_800E0BCE + sp16A);
                if (temp_v1_2 != 0) {
                    var_v0 = (s32) temp_v1_2;
                }
            }
            if ((*(s32 *)((char *)(D_800BE710) + (var_v0 * 2))) & 0x2000) {
                (*(s32 *)((char *)(arg0) + 0x21C)) = 0;
                sp154 = var_f2;
                sp15C = var_t1;
                sp6C = var_a2;
                temp_v0_8 = func_1507BB28(0, 2, var_a2, var_a3);
                (*(s32 *)((char *)(arg0) + 0x218)) = temp_v0_8;
            }
        }
        temp_v0_9 = (*(s32 *)((char *)(arg0) + 0x89));
        if (temp_v0_9 != 0) {
            var_f2 = 0.0f;
            (*(u8 *)((char *)(arg0) + 0x89)) = (u8) (temp_v0_9 - 1);
        }
        (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((f32) (*(f32 *)((char *)(((sp16A * 6) + D_800BE748)) + 0x3)) * var_f2);
        (*(s8 *)((char *)((*(s8 *)((char *)(var_a2) + 0x31C))) + 0x75)) = (s8) var_t1;
        (*(s8 *)((char *)((*(s8 *)((char *)(var_a2) + 0x31C))) + 0x78)) = (s8) var_t1;
    } else if ((s32) gCurrentObjectIndex < D_8008FD8C) {
        sp60 = (s32) sp16A;
        func_1504C854(arg0);
        if ((sp60 < 4) && ((*(s32 *)((*(s32 *)((char *)(D_800BE728) + (sp16A * 4))))) & 0x2000)) {
            D_800CC288 = 0x2000;
        }
        if (D_800CC288 & 0x2000) {
            (*(s32 *)((char *)(arg0) + 0x244)) = 1;
        }
    }
    (*(s32 *)((char *)(arg0) + 0x247)) = 0x32;
    (*(s32 *)((char *)(arg0) + 0x248)) = 0x32;
    if ((D_800BE616 == 0) || ((s32) gCurrentObjectIndex >= D_8008FD8C) || ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x120)) == 0)) {
        func_15052590(arg0);
    }
    if ((*(s32 *)((char *)(arg0) + 0x0)) != 0) {
        if ((*(s32 *)((char *)(arg0) + 0x232)) == 0xD) {
            func_15052F9C(arg0, 0x43340000, 5, 0x44, 1, 0x10, 0xFF, 0, 0, 0);
        } else if ((D_800BE616 == 0) && (D_800CC268 & 1)) {
            temp_a0_3 = ((*(s32 *)((char *)(arg0) + 0x124)) * 0x32C) + &gObjects;
            if (((*(s32 *)((char *)(temp_a0_3) + 0x65)) == 0) && ((*(s32 *)((char *)((*(s32 *)((char *)(temp_a0_3) + 0x31C))) + 0x78)) == 0) && ((*(s32 *)((char *)(arg0) + 0x25C)) & 0x400)) {
                if (((*(s32 *)((char *)(temp_a0_3) + 0x44)) > 15.0f) && ((*(s32 *)((char *)(temp_a0_3) + 0x20)) > 10.0f)) {
                    func_1505327C(arg0, 0x42880000, 0x40800000, 0xD, 5);
                } else if (((*(s32 *)((char *)(temp_a0_3) + 0x89)) == 0) && ((*(s32 *)((char *)(temp_a0_3) + 0x28)) > 70.0f) && ((*(s32 *)((char *)(temp_a0_3) + 0x104)) == 0) && (func_1505A6F8(temp_a0_3, arg0) < 100.0f)) {
                    func_15052F9C(arg0, 0x43340000, 5, 0x44, 1, 0x10, 0xFF, 0, 1, 0);
                }
            }
        }
        var_a2_2 = 0;
        var_a1 = 0;
        if ((*(s32 *)((char *)(arg0) + 0x1CA)) != 0) {
            temp_f12 = (*(s32 *)((char *)(arg0) + 0x44));
            var_f2_2 = (*(s32 *)((char *)(arg0) + 0x3C));
            temp_lo = (s16) ((*(s16 *)((char *)(arg0) + 0x7A)) - sp168) / 70;
            if (fabsf(temp_f12) > 4.0f) {
                var_f2_2 = (var_f2_2 * D_800A15B8) + (temp_f12 * (D_800A15B4 * 1.0f));
            }
            temp_f4 = (s32) var_f2_2;
            var_a1 = temp_f4 + (s16) temp_lo;
            var_a2_2 = temp_f4 - (s16) temp_lo;
        }
        func_150ED638(arg0, var_a1, var_a2_2);
        temp_v0_10 = (*(s32 *)((char *)(arg0) + 0x4));
        if ((temp_v0_10 == 0x77) || (temp_v0_10 == 0x28)) {
            temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x3C));
            if ((temp_f2_2 > 5.0f) && ((*(s32 *)((char *)(arg0) + 0x44)) <= 0.0f)) {
                var_v1_2 = 1;
            } else {
                var_v1_2 = 0;
                if ((temp_f2_2 < -5.0f) && ((*(s32 *)((char *)(arg0) + 0x44)) >= 0.0f)) {
                    var_v1_2 = 1;
                }
            }
            if (var_v1_2 != 0) {
                sp130 = var_v1_2;
                func_1514D3B0(arg0, 0x19, 0xD, 0);
            } else {
                sp130 = var_v1_2;
                func_1514D3B0(arg0, 0x19, 0xE, 0);
            }
            if (sp130 != 0) {
                var_v1_3 = 0xC;
            } else {
                var_v1_3 = 0xF;
            }
            (*(s8 *)((char *)(arg0) + 0x6C)) = (s8) (var_v1_3 + 0xA);
            (*(s32 *)((char *)(arg0) + 0x6D)) = 0x13;
        }
        if ((*(s32 *)((char *)((*(s32 *)((char *)(((sp174 * 0x32C) + &gObjects)) + 0x31C))) + 0x84)) != 0) {
            temp_v0_11 = (*(s32 *)((char *)(arg0) + 0x31C));
            temp_v1_3 = (*(s32 *)((char *)(temp_v0_11) + 0x129));
            if (temp_v1_3 >= 0) {
                temp_v0_12 = (temp_v1_3 * 0x32C) + &gObjects;
                temp_f2_3 = (*(s32 *)((char *)(temp_v0_12) + 0x14)) - (*(s32 *)((char *)(arg0) + 0x14));
                temp_f14 = (*(s32 *)((char *)(temp_v0_12) + 0x1C)) - (*(s32 *)((char *)(arg0) + 0x1C));
                sp108 = (*(s32 *)((char *)(temp_v0_12) + 0x3C)) * (sqrtf((temp_f2_3 * temp_f2_3) + (temp_f14 * temp_f14)) / 200.0f);
                sp124 = temp_v0_12;
                temp_f12_2 = (*(s32 *)((char *)(temp_v0_12) + 0x40)) * D_800A15BC;
                sp11C = temp_f12_2;
                temp_f4_2 = sinf(temp_f12_2) * sp108;
                sp118 = temp_f4_2;
                temp_f2_4 = cosf(temp_f12_2) * sp108;
                sp114 = temp_f2_4;
                (*(f32 *)((char *)(sp124) + 0x14)) = (f32) ((*(f32 *)((char *)(sp124) + 0x14)) + sp118);
                (*(f32 *)((char *)(sp124) + 0x1C)) = (f32) ((*(f32 *)((char *)(sp124) + 0x1C)) + temp_f2_4);
                temp_f12_3 = (f32) func_150ED234(arg0, sp124) * D_800A15C0;
                sp10C = temp_f12_3;
                sp74 = sinf(temp_f12_3);
                sp104 = cosf((*(s32 *)((char *)(arg0) + 0xC4)) * D_800A15C4) * sp74;
                sp74 = cosf(temp_f12_3);
                temp_v0_13 = (*(s32 *)((char *)(arg0) + 0x31C));
                temp_f2_5 = (f32) (*(f32 *)((char *)(temp_v0_13) + 0x12A));
                temp_f10 = func_150484A0(sp104 * 1000.0f, cosf((*(s32 *)((char *)(arg0) + 0xB8)) * D_800A15C8) * sp74 * 1000.0f) * D_800A15CC;
                sp120 = temp_f2_5 * 400.0f;
                temp_v0_14 = (*(s32 *)((char *)(arg0) + 0x31C));
                (*(f32 *)((char *)(temp_v0_14) + 0x1BC)) = (f32) ((*(f32 *)((char *)(temp_v0_14) + 0x1BC)) - (func_150ED1D0(temp_f10 + (temp_f2_5 * 10.0f), (*(f32 *)((char *)(temp_v0_13) + 0x1BC))) * 0.125f));
                temp_v0_15 = (*(s32 *)((char *)(arg0) + 0x31C));
                (*(f32 *)((char *)(temp_v0_15) + 0x1B8)) = (f32) ((*(f32 *)((char *)(temp_v0_15) + 0x1B8)) + (func_150ED298(arg0, (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1B8)) - (*(f32 *)((char *)(arg0) + 0xB8)), (*(f32 *)((char *)(sp124) + 0x14)), (*(f32 *)((char *)(sp124) + 0x18)), (*(f32 *)((char *)(sp124) + 0x1C)), sp120) * D_800A15D0));
                (*(f32 *)((char *)(sp124) + 0x14)) = (f32) ((*(f32 *)((char *)(sp124) + 0x14)) - temp_f4_2);
                (*(f32 *)((char *)(sp124) + 0x1C)) = (f32) ((*(f32 *)((char *)(sp124) + 0x1C)) - sp114);
            } else {
                (*(f32 *)((char *)(temp_v0_11) + 0x1BC)) = (f32) ((*(f32 *)((char *)(temp_v0_11) + 0x1BC)) * D_800A15D4);
                temp_v0_16 = (*(s32 *)((char *)(arg0) + 0x31C));
                (*(f32 *)((char *)(temp_v0_16) + 0x1B8)) = (f32) ((*(f32 *)((char *)(temp_v0_16) + 0x1B8)) * D_800A15D4);
            }
        } else if ((sp16B != 0) && (sp16C != 0)) {
            var_f16 = 0.0f;
            temp_f0 = 3.0f * D_800BE9A4;
            spE4 = -1;
            var_a1_2 = 0;
            spE0 = (s32) D_8008FD8C;
            if ((D_800BE616 != 0) && (sp174 < 2) && (temp_v0_17 = *(&D_800E0BCE + sp174), (temp_v0_17 != 0))) {
                var_a1_2 = temp_v0_17 + 1;
            } else {
                temp_a0_4 = (sp174 * 6) + D_800BE748;
                if (*temp_a0_4 & 1) {
                    temp_v0_18 = (*(s32 *)((char *)(arg0) + 0x31C));
                    (*(f32 *)((char *)(temp_v0_18) + 0x1BC)) = (f32) ((*(f32 *)((char *)(temp_v0_18) + 0x1BC)) + temp_f0);
                }
                if (*temp_a0_4 & 2) {
                    temp_v0_19 = (*(s32 *)((char *)(arg0) + 0x31C));
                    (*(f32 *)((char *)(temp_v0_19) + 0x1BC)) = (f32) ((*(f32 *)((char *)(temp_v0_19) + 0x1BC)) - temp_f0);
                }
            }
            if ((*(s32 *)((char *)((*(s32 *)((char *)(((sp16A * 0x32C) + &gObjects)) + 0x31C))) + 0x197)) != 0) {
                var_a1_2 = sp174 + 1;
            }
            if (D_800BE616 == 0) {
                spE0 = 0x19;
            }
            if (var_a1_2 == 0) {
                var_v0_2 = 0;
                if (spE0 > 0) {
                    do {
                        if (var_v0_2 != sp174) {
                            temp_a1_2 = (var_v0_2 * 0x32C) + &gObjects;
                            if ((D_800BE616 != 0) || ((*(s32 *)((char *)(temp_a1_2) + 0xF8)) & 0x40)) {
                                spE8 = var_v0_2;
                                sp70 = temp_a1_2;
                                spEC = var_f16;
                                temp_f0_2 = func_150ED1D0((f32) func_150ED234(arg0, temp_a1_2), (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1BC)));
                                var_f14 = temp_f0_2;
                                if (temp_f0_2 < 0.0f) {
                                    var_f14 = -temp_f0_2;
                                }
                                var_f14_2 = 35.0f - var_f14;
                                if (var_f14_2 < 0.0f) {
                                    var_f14_2 = 0.0f;
                                }
                                if (var_f14_2 > 0.0f) {
                                    temp_f2_6 = (*(s32 *)((char *)(arg0) + 0x14)) - (*(s32 *)((char *)(temp_a1_2) + 0x14));
                                    temp_f12_4 = (*(s32 *)((char *)(arg0) + 0x1C)) - (*(s32 *)((char *)(temp_a1_2) + 0x1C));
                                    temp_f0_3 = sqrtf((temp_f2_6 * temp_f2_6) + (temp_f12_4 * temp_f12_4));
                                    var_f2_3 = temp_f0_3;
                                    if (temp_f0_3 < D_800A15D8) {
                                        if (temp_f0_3 < 1.0f) {
                                            var_f2_3 = 1.0f;
                                        }
                                        temp_f14_2 = var_f14_2 / var_f2_3;
                                        if (var_f16 < temp_f14_2) {
                                            var_f16 = temp_f14_2;
                                            spE4 = var_v0_2;
                                        }
                                    }
                                }
                            }
                        }
                        var_v0_2 += 1;
                    } while (var_v0_2 != spE0);
                }
                if (spE4 != -1) {
                    if (D_800BE616 != 0) {
                        var_v0_3 = (spE4 * 0x32C) + &gObjects;
                        var_f14_3 = (*(s32 *)((char *)(var_v0_3) + 0x18)) + 40.0f;
                    } else {
                        var_v0_3 = (spE4 * 0x32C) + &gObjects;
                        var_f14_3 = (f32) (*(f32 *)((char *)(var_v0_3) + 0x1AA));
                    }
                    var_f12 = func_150ED298(arg0, 0.0f, (*(s32 *)((char *)(var_v0_3) + 0x14)), var_f14_3, (*(s32 *)((char *)(var_v0_3) + 0x1C)), 0.0f) * D_800A15DC;
                    temp_f14_3 = 4.0f * D_800BE9A4;
                    temp_f0_4 = -temp_f14_3;
                    if (temp_f14_3 < var_f12) {
                        var_f12 = temp_f14_3;
                    }
                    if (var_f12 < temp_f0_4) {
                        var_f12 = temp_f0_4;
                    }
                    temp_v0_20 = (*(s32 *)((char *)(arg0) + 0x31C));
                    (*(f32 *)((char *)(temp_v0_20) + 0x1B8)) = (f32) ((*(f32 *)((char *)(temp_v0_20) + 0x1B8)) + var_f12);
                } else {
                    temp_v0_21 = (*(s32 *)((char *)(arg0) + 0x31C));
                    (*(f32 *)((char *)(temp_v0_21) + 0x1B8)) = (f32) ((*(f32 *)((char *)(temp_v0_21) + 0x1B8)) * D_800A15E0);
                }
            } else {
                temp_t1 = (var_a1_2 * 0x9A0) + D_800DBFF0;
                temp_v0_22 = (*(s32 *)((char *)(temp_t1) - 0x5CC));
                temp_t1_2 = (char *)(temp_t1) - 0x9A0;
                if ((*(s32 *)((char *)(temp_v0_22) + 0x197)) != 0) {
                    var_f0 = -(*(s32 *)((char *)(temp_v0_22) + 0x170)) - (*(s32 *)((char *)(arg0) + 0xB8));
                    var_f2_4 = ((*(s32 *)((char *)(arg0) + 0x40)) - 90.0f) - (*(s32 *)((char *)(temp_v0_22) + 0x16C));
                    if (var_f0 > 180.0f) {
                        do {
                            var_f0 -= 360.0f;
                        } while (var_f0 > 180.0f);
                    }
                    if (var_f0 < -180.0f) {
                        do {
                            var_f0 += 360.0f;
                        } while (var_f0 < -180.0f);
                    }
                    if (var_f2_4 > 180.0f) {
                        do {
                            var_f2_4 -= 360.0f;
                        } while (var_f2_4 > 180.0f);
                    }
                    if (var_f2_4 < -180.0f) {
                        do {
                            var_f2_4 += 360.0f;
                        } while (var_f2_4 < -180.0f);
                    }
                    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1B8)) = var_f0;
                    (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1BC)) = var_f2_4;
                } else {
                    spB4 = (*(s32 *)((char *)(temp_t1_2) + 0x2BC)) - (*(s32 *)((char *)(temp_t1_2) + 0x2F8));
                    spB8 = (*(s32 *)((char *)(temp_t1_2) + 0x2C0)) - (*(s32 *)((char *)(temp_t1_2) + 0x2FC));
                    temp_f4_3 = (*(s32 *)((char *)(temp_t1_2) + 0x2C4)) - (*(s32 *)((char *)(temp_t1_2) + 0x300));
                    sp50 = spB4;
                    spBC = temp_f4_3;
                    temp_f2_7 = 1.0f / sqrtf((temp_f4_3 * temp_f4_3) + ((spB4 * spB4) + (spB8 * spB8)));
                    temp_f6 = sp50 * temp_f2_7;
                    temp_f8 = spB8 * temp_f2_7;
                    temp_f10_2 = temp_f4_3 * temp_f2_7;
                    spB4 = temp_f6;
                    spB8 = temp_f8;
                    spAC = D_800A15E4;
                    spBC = temp_f10_2;
                    sp88 = temp_t1_2;
                    sp84 = temp_v0_22;
                    temp_v0_23 = func_150AC9C0((*(s32 *)((char *)(temp_t1_2) + 0x2F8)), (*(s32 *)((char *)(temp_t1_2) + 0x2FC)), var_a1_2, (*(s32 *)((char *)(temp_t1_2) + 0x300)), temp_f6, temp_f8, temp_f10_2, 0, 0, &spC8, &spC4, &spC0, &spAC, 0, 0, 0.0f);
                    var_t2 = temp_v0_23;
                    if (temp_v0_23 != 0) {
                        var_t2 = 1;
                    }
                    var_v1_4 = &gObjects;
                    var_t0 = 0;
                    if (D_8008FD8C > 0) {
                        do {
                            if ((*(s32 *)((char *)(arg0) + 0x128)) != (*(s32 *)((char *)(var_v1_4) + 0x128))) {
                                temp_f10_3 = (*(s32 *)((char *)(var_v1_4) + 0x14)) - (*(s32 *)((char *)(sp88) + 0x2F8));
                                spC8 = temp_f10_3;
                                spC0 = (*(s32 *)((char *)(var_v1_4) + 0x1C)) - (*(s32 *)((char *)(sp88) + 0x300));
                                if ((sqrtf((temp_f10_3 * temp_f10_3) + (spC0 * spC0)) + 200.0f) < spAC) {
                                    sp70 = var_v1_4;
                                    spD0 = var_t0;
                                    spCC = var_t2;
                                    temp_v0_24 = func_151452C4((char *)(sp88) + 0x2F8, &spB4, (char *)(var_v1_4) + 0x14, 0x43160000, &spA0, &sp94, &sp90, &sp8C);
                                    var_v1_4 = sp70;
                                    var_t0 = spD0;
                                    var_t2 = spCC;
                                    if ((temp_v0_24 != 0) && (sp90 < spAC)) {
                                        spAC = sp90;
                                        var_t2 = 2;
                                    }
                                }
                            }
                            var_t0 += 1;
                            var_v1_4 = (char *)(var_v1_4) + 0x32C;
                        } while (var_t0 < D_8008FD8C);
                    }
                    temp_t7 = (*(s32 *)((char *)(sp84) + 0x128)) & ~0x40;
                    (*(s32 *)((char *)(sp84) + 0x128)) = temp_t7;
                    if (var_t2 != 0) {
                        if (var_t2 == 2) {
                            (*(u8 *)((char *)(sp84) + 0x128)) = (u8) (temp_t7 | 0x40);
                        }
                        temp_f10_4 = (spB4 * spAC) + (*(s32 *)((char *)(sp88) + 0x2F8));
                        spC8 = temp_f10_4;
                        temp_f8_2 = (spB8 * spAC) + (*(s32 *)((char *)(sp88) + 0x2FC));
                        spC4 = temp_f8_2;
                        temp_f4_4 = (spBC * spAC) + (*(s32 *)((char *)(sp88) + 0x300));
                        spC0 = temp_f4_4;
                        temp_v0_25 = (*(s32 *)((char *)(arg0) + 0x31C));
                        (*(f32 *)((char *)(temp_v0_25) + 0x1B8)) = (f32) ((*(f32 *)((char *)(temp_v0_25) + 0x1B8)) + (func_150ED298(arg0, 0.0f, temp_f10_4, temp_f8_2, temp_f4_4, 0.0f) * D_800A15E8));
                    } else {
                        temp_v0_26 = (*(s32 *)((char *)(arg0) + 0x31C));
                        (*(f32 *)((char *)(temp_v0_26) + 0x1B8)) = (f32) ((*(f32 *)((char *)(temp_v0_26) + 0x1B8)) * D_800A15EC);
                    }
                }
            }
        }
        temp_v0_27 = (*(s32 *)((char *)(arg0) + 0x31C));
        var_f0_2 = (*(s32 *)((char *)(temp_v0_27) + 0x1B8));
        if (var_f0_2 < -20.0f) {
            (*(s32 *)((char *)(temp_v0_27) + 0x1B8)) = -20.0f;
            var_f0_2 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1B8));
        }
        if (var_f0_2 > 80.0f) {
            (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1B8)) = 80.0f;
        }
        var_f0_3 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1BC));
        if (var_f0_3 > 360.0f) {
            (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1BC)) = (f32) (var_f0_3 - 360.0f);
            var_f0_3 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1BC));
        }
        if (var_f0_3 < 0.0f) {
            (*(f32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1BC)) = (f32) (var_f0_3 + 360.0f);
            var_f0_3 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x1BC));
        }
        (*(s16 *)((char *)(arg0) + 0x2E4)) = (s16) (s32) (var_f0_3 * 50.0f);
        (*(s16 *)((char *)(arg0) + 0x2E6)) = (s16) -(s32) ((*(s16 *)((char *)((*(s16 *)((char *)(arg0) + 0x31C))) + 0x1B8)) * 50.0f);
    }
}

void func_150EEC84(void *arg0) {
    s32 sp2C;
    void *sp28;
    s32 var_a1;
    u16 *temp_v0_2;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x318));
    (*(s32 *)((char *)(arg0) + 0x5)) = 3;
    (*(s32 *)((char *)(arg0) + 0xE4)) = 0;
    (*(s32 *)((char *)(arg0) + 0x125)) = 0xFF;
    (*(s32 *)((char *)(arg0) + 0x328)) = 0;
    if (temp_v0 != NULL) {
        var_a1 = 0;
        if ((*(s32 *)((char *)(temp_v0) + 0x23D)) == 3) {
            var_a1 = 1;
        }
        sp2C = var_a1;
        func_151254F4(temp_v0, var_a1, arg0);
        temp_v0_2 = (var_a1 * 6) + D_800BE748;
        (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x31C))) + 0x78)) = 0x29;
        *temp_v0_2 &= 0xFFEF;
        temp_v1 = (var_a1 * 0x32C) + &gObjects;
        (*(u8 *)((char *)(temp_v1) + 0x2FC)) = (u8) ((*(u8 *)((char *)(temp_v1) + 0x2FC)) | (1 << (*(u8 *)((char *)(temp_v0) + 0x23D))));
        if ((*(s32 *)((char *)(temp_v1) + 0x10A)) != 0) {
            sp28 = temp_v1;
            func_1517F488(0xFF, 0, 0, 0xB4, 0x14, (s32) (*(s32 *)((char *)(temp_v0) + 0x23D)));
            (*(s32 *)((char *)(temp_v1) + 0x10A)) = 0U;
        }
    }
}

void func_150EEDA8(void *arg0) {
    if ((*(s32 *)((char *)(arg0) + 0x5)) != 3) {
        func_151045E0(0xF, 0x437A0000);
        (*(s32 *)((char *)(arg0) + 0x5)) = 3U;
        (*(s32 *)((char *)(arg0) + 0xE4)) = 0;
        (*(s32 *)((char *)(arg0) + 0x125)) = 0xFF;
    }
    func_15052590(arg0);
}
