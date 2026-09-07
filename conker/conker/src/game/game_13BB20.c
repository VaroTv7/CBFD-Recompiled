/**
 * Auto-decompiled from asm/13BB20.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_150A3A70();                        /* extern */
s32 func_150A43E0();              /* extern */
void * func_150A44F0();                       /* extern */
void * func_150A49F4();                                  /* extern */
s32 func_150A4FA0();                        /* extern */
void * func_150A64C8();              /* extern */
s32 func_150A6568(); /* extern */
void * func_150A6760();                               /* extern */
void * func_150AD8B0();         /* extern */
void * func_150F33F8();                               /* extern */
void * func_1510E388();                      /* extern */
void func_1510E950(s32 **arg0, void *arg1, void *arg2, f32 *arg3, f32 *arg4, s32 *arg5, s16 *arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, u16 arg11, void *arg12, f32 arg13, f32 arg14, s32 arg15);
void func_1510F800();                       /* static */
void *func_1510FD20();            /* static */
s32 func_1510FE30();                      /* static */
extern u8 D_80089120;
extern f32 D_800A2D50;
extern void *D_800A2D54;
extern f32 D_800A2D58;
extern void *D_800A2D5C;
extern f32 D_800A2D60;
extern f32 D_800A2D64;
extern f32 D_800A2D78;
extern f32 D_800A2D7C;
extern f32 D_800A2D80;
extern f32 D_800A2D84;
extern f32 D_800A2D88;
extern f32 D_800A2D8C;
extern f32 D_800A2D90;
extern f32 D_800A2D94;
extern f32 D_800A2D98;
extern f32 D_800A2D9C;
extern s32 D_800D330C;
extern s32 D_800D37E0;
extern s32 D_800D3830;
extern s32 D_800DBDC0;
extern s32 D_800DBDC4;
extern void *D_800DBDC8;
extern f32 D_800DBDCC;
extern f32 D_800DBDD0;
extern void *D_800DBE48;
extern f32 D_800DBE54;
extern f32 D_800DBE58;
extern u16 D_800DBE60;
extern f32 D_800DBE68;
extern f32 D_800DBE6C;
extern f32 D_800DBE70;
extern s32 D_800DBF94;
s32 func_1510E670();

s32 func_1510E670(s32 arg0) {
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    void * sp20;
    s32 temp_t1;
    s32 var_v0;
    void *temp_a3;
    void *temp_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    f32 sp24;
    temp_v0 = (arg0 * 0x10) + &D_800D3300;
    temp_t0 = (*(s32 *)((char *)(temp_v0) + 0x4));
    temp_t1 = (*(s32 *)((char *)(temp_v0) + 0x8));
    var_v0 = 0;
    if (temp_t0 != NULL) {
        temp_v0_2 = (*(s32 *)((char *)(temp_t0) + 0x0)) + temp_t1;
        temp_v1 = (*(s32 *)((char *)(temp_t0) + 0x4)) + temp_t1;
        temp_a3 = (*(s32 *)((char *)(temp_t0) + 0x8)) + temp_t1;
        sp38 = (f32) ((*(f32 *)((char *)(temp_v1) + 0x0)) - (*(f32 *)((char *)(temp_v0_2) + 0x0)));
        sp3C = (f32) ((*(f32 *)((char *)(temp_v1) + 0x2)) - (*(f32 *)((char *)(temp_v0_2) + 0x2)));
        sp40 = (f32) ((*(f32 *)((char *)(temp_v1) + 0x4)) - (*(f32 *)((char *)(temp_v0_2) + 0x4)));
        sp2C = (f32) ((*(f32 *)((char *)(temp_a3) + 0x0)) - (*(f32 *)((char *)(temp_v0_2) + 0x0)));
        sp30 = (f32) ((*(f32 *)((char *)(temp_a3) + 0x2)) - (*(f32 *)((char *)(temp_v0_2) + 0x2)));
        sp34 = (f32) ((*(f32 *)((char *)(temp_a3) + 0x4)) - (*(f32 *)((char *)(temp_v0_2) + 0x4)));
        func_150AD8B0(&sp38, &sp2C, &sp20, temp_a3);
        if (sp24 < 0.0f) {
            return 0;
        }
        var_v0 = 1;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

void func_1510E7A4(void *arg2, void *arg3, f32 *arg4, f32 *arg5, s32 *arg6, s16 *arg7, f32 arg8, f32 arg9, u16 arg10, f32 arg11, f32 arg12, void *arg13) {
    func_1510E950(NULL, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, (f32) arg10, arg11, arg12, arg13, 0.0f, 0, 0);
}

void func_1510E82C(void *arg2, void *arg3, f32 *arg4, f32 *arg5, s32 *arg6, s16 *arg7, f32 arg8, f32 arg9, u16 arg10, f32 arg11) {
    func_1510E950(NULL, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, (f32) arg10, arg11, D_800A2D50, D_800A2D54, 0.0f, 0, 0);
}

void func_1510E8BC(void *arg2, void *arg3, f32 *arg4, f32 *arg5, s32 *arg6, s16 *arg7, f32 arg8, f32 arg9, u16 arg10, f32 arg11, f32 arg14) {
    func_1510E950(NULL, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, (f32) arg10, arg11, D_800A2D58, D_800A2D5C, arg14, 0, 0);
}

void func_1510E950(s32 **arg0, void *arg1, void *arg2, f32 *arg3, f32 *arg4, s32 *arg5, s16 *arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, u16 arg11, void *arg12, f32 arg13, f32 arg14, s32 arg15) {
    s32 sp140;
    s32 sp138;
    s32 sp12C;
    s32 sp124;
    f32 sp11C;
    s32 *sp114;
    s32 sp10C;
    s32 sp108;
    s32 spF4;
    s32 spF0;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    s32 spC8;
    f32 spC0;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    u8 *sp90;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f20_5;
    f32 temp_f4_2;
    f32 var_f12;
    f32 var_f22;
    f32 var_f24;
    f32 var_f26;
    f32 var_f2;
    s32 *temp_v1;
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_s1;
    s32 *var_s1_3;
    s32 *var_s1_4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_f4;
    s32 temp_f8;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_fp;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_t0;
    s32 var_v0;
    u16 temp_t5;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_s1_2;
    void *var_v1;
    void *var_v1_2;

    sp124 = 0;
    sp114 = NULL;
    var_s4 = 0;
    var_s2 = 0;
    if (arg0 != NULL) {
        *arg0 = NULL;
    }
    if (arg12 != NULL) {
        spC0 = D_800DBE64;
    } else {
        spC0 = 50.0f;
    }
    var_f12 = D_800A2D60;
    D_800DBE68 = arg7;
    D_800DBE6C = arg8;
    spCC = 0;
    D_800DBE70 = arg9;
    *arg3 = var_f12;
    var_s3 = 0;
    if (arg5 == NULL) {
        spF0 = 0;
        arg5 = &spF0;
    }
    var_f24 = D_800A2D64;
    D_800DBE54 = var_f12;
    spF4 = 0;
    D_800DBE60 = 0;
    if (arg12 != NULL) {
        (*(s32 *)((char *)(arg12) + 0x19E)) = 0;
    }
    sp108 = 4;
    sp138 = 1;
    spC8 = 1;
    if (arg4 != NULL) {
        *arg4 = var_f12;
    }
    sp90 = &D_80089120;
    var_f26 = sp11C;
    do {
        if (*sp90 == 1) {
            if ((var_s3 != 3) || (arg12 == NULL) || !((*(s32 *)((char *)(arg12) + 0xF8)) & 0x200)) {
                temp_f4 = (s32) arg7;
                var_s0 = 0;
                temp_f8 = (s32) arg9;
                var_fp = 0;
                func_1510F800(var_f12, var_s3);
                if (var_s3 == 2) {
                    temp_v0 = func_150A6568((s16) temp_f4, (s16) temp_f8, &spB8, arg11, temp_f4, temp_f8, (s32) arg13, (s32) arg14);
                    spBC = temp_v0;
                    func_150A44F0(temp_v0, &D_800D37E0, 0);
                    if (arg4 != NULL) {
                        spB4 = 0;
                        func_150A44F0(spB8, &D_800D3830, 0);
                        temp_v0_2 = func_150A43E0(temp_f4, temp_f8, spB8, &D_800D3830);
                        var_t0 = spB4;
                        if (temp_v0_2 != 0) {
                            var_f2 = D_800A2D78;
                            if (temp_v0_2 > 0) {
                                temp_a0 = temp_v0_2 & 3;
                                if (temp_a0 != 0) {
                                    var_s1 = (0 * 0x10) + &D_800D3300;
                                    do {
                                        temp_f0 = (f32) *var_s1 * 0.00390625f;
                                        if ((var_f2 < temp_f0) && (temp_f0 < var_f24)) {
                                            var_t0 = var_s0;
                                            var_f2 = temp_f0;
                                        }
                                        var_s0 += 1;
                                        var_s1 += 0x10;
                                    } while (temp_a0 != var_s0);
                                    if (var_s0 != temp_v0_2) {
                                        goto block_27;
                                    }
                                } else {
block_27:
                                    var_s1_2 = (var_s0 * 0x10) + &D_800D3300;
                                    do {
                                        temp_f0_2 = (f32) (*(f32 *)((char *)(var_s1_2) + 0x0)) * 0.00390625f;
                                        if ((var_f2 < temp_f0_2) && (temp_f0_2 < var_f24)) {
                                            var_t0 = var_s0;
                                            var_f2 = temp_f0_2;
                                        }
                                        temp_f20 = (f32) (*(f32 *)((char *)(var_s1_2) + 0x10)) * 0.00390625f;
                                        if ((var_f2 < temp_f20) && (temp_f20 < var_f24)) {
                                            var_t0 = var_s0 + 1;
                                            var_f2 = temp_f20;
                                        }
                                        temp_f20_2 = (f32) (*(f32 *)((char *)(var_s1_2) + 0x20)) * 0.00390625f;
                                        if ((var_f2 < temp_f20_2) && (temp_f20_2 < var_f24)) {
                                            var_t0 = var_s0 + 2;
                                            var_f2 = temp_f20_2;
                                        }
                                        temp_f20_3 = (f32) (*(f32 *)((char *)(var_s1_2) + 0x30)) * 0.00390625f;
                                        if ((var_f2 < temp_f20_3) && (temp_f20_3 < var_f24)) {
                                            var_t0 = var_s0 + 3;
                                            var_f2 = temp_f20_3;
                                        }
                                        var_s0 += 4;
                                        var_s1_2 = (char *)(var_s1_2) + 0x40;
                                    } while (var_s0 != temp_v0_2);
                                }
                                var_s0 = 0;
                            }
                            *arg4 = var_f2;
                        }
                        if ((D_800A2D78 != *arg4) && (arg2 != NULL)) {
                            temp_v0_3 = (var_t0 * 0x10) + &D_800D3300;
                            var_a0 = (*(s32 *)((char *)(temp_v0_3) + 0x4));
                            var_v1 = arg2;
                            do {
                                temp_t6 = *var_a0;
                                var_s0 += 1;
                                var_a0 += 4;
                                temp_v0_4 = temp_t6 + (*(s32 *)((char *)(temp_v0_3) + 0x8));
                                var_v1 = (char *)(var_v1) + 6;
                                (*(s16 *)((char *)(var_v1) - 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_4) + 0x0));
                                (*(s16 *)((char *)(var_v1) - 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_4) + 0x2));
                                (*(s16 *)((char *)(var_v1) - 0x2)) = (s16) (*(s16 *)((char *)(temp_v0_4) + 0x4));
                            } while (var_s0 != 3);
                            var_s0 = 0;
                        }
                    }
                    var_v0 = func_150A43E0(temp_f4, temp_f8, spBC, &D_800D37E0);
                    var_f12 = D_800A2D7C;
                    var_s5 = var_v0;
                } else {
                    if (var_s3 == 3) {
                        var_v0 = func_150A4FA0(temp_f4, temp_f8);
                        var_f12 = D_800A2D80;
                    } else {
                        var_v0 = func_150A3A70(temp_f4, temp_f8);
                        var_f12 = D_800A2D84;
                    }
                    var_s5 = var_v0;
                }
                sp124 += var_v0;
                if (sp138 != 0) {
                    var_f26 = var_f12;
                    sp140 = -1;
                    sp12C = var_s3;
                    sp138 = 0;
                }
                if (var_v0 > 0) {
                    var_s1_3 = &D_800D3300;
                    do {
                        temp_f20_4 = (f32) *var_s1_3 * 0.00390625f;
                        if ((arg15 == 0) && (spC8 != 0) && (var_f12 == *arg3) && ((var_f12 == var_f12) || (temp_f20_4 < var_f12))) {
                            var_f12 = D_800A2D88;
                            if (func_1510E670((s32) var_f12) != 0) {
                                spCC = 1;
                                spD4 = var_s0;
                                spD0 = var_s3;
                            }
                        }
                        if (D_800DBE54 < temp_f20_4) {
                            D_800DBE54 = temp_f20_4;
                        }
                        if (arg8 < arg10) {
                            if ((temp_f20_4 < (arg10 + spC0)) && (var_f26 < temp_f20_4)) {
                                goto block_77;
                            }
                        } else if (temp_f20_4 < (arg8 + spC0)) {
                            if (temp_f20_4 < arg10) {
                                if (var_f26 < temp_f20_4) {
                                    goto block_77;
                                }
                            } else {
                                if (var_f26 < arg10) {
                                    goto block_77;
                                }
                                if (temp_f20_4 < var_f26) {
block_77:
                                    var_s2 = 1;
                                }
                            }
                        }
                        if (var_s2 != 0) {
                            var_s2 = 0;
                            var_f12 = D_800A2D8C;
                            if (func_1510E670((s32) var_f12) != 0) {
                                sp12C = var_s3;
                                var_fp = 1;
                                var_f26 = temp_f20_4;
                                sp140 = var_s0;
                            }
                        }
                        var_s0 += 1;
                        var_s1_3 += 0x10;
                    } while (var_s0 != var_s5);
                }
                if ((var_fp != 0) || (spCC != 0)) {
                    if ((var_fp == 0) && (spCC != 0)) {
                        sp140 = spD4;
                        sp12C = spD0;
                    }
                    spCC = 0;
                    if (arg6 != NULL) {
                        *arg6 = (s16) sp12C;
                    }
                    if (sp140 != -1) {
                        temp_v0_5 = (sp140 * 0x10) + &D_800D3300;
                        spC8 = 0;
                        temp_f4_2 = (f32) (*(f32 *)((char *)(temp_v0_5) + 0x0)) * 0.00390625f;
                        *arg3 = temp_f4_2;
                        if (temp_f4_2 < var_f12) {
                            *arg3 = var_f12;
                        }
                        temp_v1 = (*(s32 *)((char *)(temp_v0_5) + 0x4));
                        temp_a0_2 = (*(s32 *)((char *)(temp_v0_5) + 0x8));
                        sp114 = temp_v1;
                        if (var_s3 != 3) {
                            if ((arg12 != NULL) && (temp_a0_2 == 0)) {
                                (*(s16 *)((char *)(arg12) + 0x19E)) = (s16) ((s32) (temp_v1 - D_800DBE3C) / 12);
                            }
                        } else if (arg12 != NULL) {
                            (*(s16 *)((char *)(arg12) + 0x19E)) = (s16) ((s32) (temp_v1 - (*(s16 *)((char *)(D_800C6070) + ((*(s16 *)((char *)(D_800CC2D4) + ((*(s16 *)((char *)(temp_v0_5) + 0xC)) * 0x32C))) * 4)))) / 12);
                        }
                        if ((temp_a0_2 == 0) && (arg0 != NULL)) {
                            *arg0 = (*(s32 *)((char *)(temp_v0_5) + 0x4));
                        }
                        sp10C = temp_a0_2;
                    } else {
                        *arg3 = var_f12;
                        sp10C = 0;
                        if (arg0 != NULL) {
                            *arg0 = D_800DBE3C;
                        }
                        sp114 = D_800DBE3C;
                    }
                    temp_lo = (s32) (sp114 - D_800DBE3C) / 12;
                    if ((var_s3 == 0) && (arg5 != NULL)) {
                        if (D_800DBE5C != 0) {
                            *arg5 = (*(s32 *)((char *)(D_800DBE5C) + (temp_lo * 4)));
                        } else {
                            goto block_117;
                        }
                    } else if ((var_s3 == 2) && (arg5 != NULL)) {
                        temp_t5 = *(&D_800D330C + (sp140 * 0x10)) + 1;
                        D_800DBE60 = temp_t5;
                        temp_v0_6 = D_800DBEF4 + ((temp_t5 & 0xFFFF) * 0xA0);
                        temp_v1_2 = (*(s32 *)((char *)(temp_v0_6) - 0x5C));
                        if (temp_v1_2 != 0) {
                            *arg5 = (*(s32 *)((char *)(temp_v1_2) + (temp_lo * 4) + -((*(s32 *)((char *)(temp_v0_6) - 0x48)) * 4)));
                        } else {
                            *arg5 = (*(s32 *)((char *)(temp_v0_6) - 0x60));
                        }
                    } else if (arg5 != NULL) {
block_117:
                        *arg5 = 0;
                    }
                    if (var_s3 == 3) {
                        spF4 = *(&D_800D330C + (sp140 * 0x10)) + 1;
                    }
                }
                if (var_s5 >= 2) {
                    temp_f0_3 = *arg3;
                    var_s0_2 = 0;
                    var_s1_4 = &D_800D3300;
                    if (temp_f0_3 < arg8) {
                        var_f22 = arg8;
                    } else {
                        var_f22 = temp_f0_3;
                    }
                    if (var_s5 > 0) {
                        do {
                            temp_f20_5 = (f32) (*(f32 *)((char *)(var_s1_4) + 0x0)) * 0.00390625f;
                            if ((var_f22 < temp_f20_5) && (temp_f20_5 < var_f24)) {
                                var_f12 = D_800A2D90;
                                if (func_1510E670((s32) var_f12) == 0) {
                                    var_f24 = temp_f20_5;
                                    temp_lo_2 = (s32) ((*(s32 *)((char *)(var_s1_4) + 0x4)) - D_800DBE3C) / 12;
                                    if (var_s3 == 0) {
                                        if (D_800DBE5C != 0) {
                                            var_s4 = (*(s32 *)((char *)(D_800DBE5C) + (temp_lo_2 * 4)));
                                        } else {
                                            var_s4 = 0;
                                        }
                                    } else {
                                        var_s4 = 0;
                                        if (var_s3 == 2) {
                                            temp_v1_3 = D_800DBEF4 + (((*(s32 *)((char *)(var_s1_4) + 0xC)) + 1) * 0xA0);
                                            temp_a0_3 = (*(s32 *)((char *)(temp_v1_3) - 0x5C));
                                            if (temp_a0_3 != 0) {
                                                var_s4 = (*(s32 *)((char *)(temp_a0_3) + (temp_lo_2 * 4) + -((*(s32 *)((char *)(temp_v1_3) - 0x48)) * 4)));
                                            } else {
                                                var_s4 = (*(s32 *)((char *)(temp_v1_3) - 0x60));
                                            }
                                        }
                                    }
                                }
                            }
                            var_s0_2 += 1;
                            var_s1_4 += 0x10;
                        } while (var_s0_2 != var_s5);
                    }
                }
            }
        }
        var_s3 += 1;
        sp90 += 1;
    } while (var_s3 != sp108);
    sp11C = var_f26;
    if (arg4 != NULL) {
        if ((var_f24 != D_800A2D94) && ((var_s4 & 0x1F) == 8)) {
            *arg4 = D_800A2D94;
        }
        if ((var_f12 == *arg4) && ((*arg5 & 0x1F) == 8)) {
            *arg4 = *arg3;
        }
    }
    if (sp114 != NULL) {
        var_s0_3 = 0;
        if (arg1 != NULL) {
            var_a0_2 = sp114;
            var_v1_2 = arg1;
            do {
                temp_t6_2 = *var_a0_2;
                var_s0_3 += 1;
                var_a0_2 += 4;
                temp_v0_7 = temp_t6_2 + sp10C;
                var_v1_2 = (char *)(var_v1_2) + 6;
                (*(s16 *)((char *)(var_v1_2) - 0x6)) = (s16) (*(s16 *)((char *)(temp_v0_7) + 0x0));
                (*(s16 *)((char *)(var_v1_2) - 0x4)) = (s16) (*(s16 *)((char *)(temp_v0_7) + 0x2));
                (*(s16 *)((char *)(var_v1_2) - 0x2)) = (s16) (*(s16 *)((char *)(temp_v0_7) + 0x4));
            } while (var_s0_3 != 3);
            if (arg0 != NULL) {
                *arg0 = NULL;
            }
        }
    }
    if (arg12 != NULL) {
        (*(u16 *)((char *)(arg12) + 0x1A0)) = (u16) D_800DBE60;
        if ((D_800DBE60 != 0) && ((arg8 - *arg3) < 10.0f)) {
            temp_v0_8 = D_800DBEF4 + (D_800DBE60 * 0xA0);
            (*(u8 *)((char *)(temp_v0_8) - 0x51)) = (u8) ((*(u8 *)((char *)(temp_v0_8) - 0x51)) | 0x84);
            temp_v1_4 = D_800DBF94 + (D_800DBE60 * 4);
            (*(s32 *)((char *)(temp_v1_4) - 0x4)) = (s32) ((*(s32 *)((char *)(temp_v1_4) - 0x4)) | (1 << ((s32) ((char *)(arg12) - (char *)(&gObjects)) / 812)));
        }
        if ((spF4 != 0) && ((arg8 - *arg3) < 10.0f)) {
            (*(s8 *)((char *)(arg12) + 0x274)) = (s8) spF4;
        } else {
            (*(s32 *)((char *)(arg12) + 0x274)) = 0;
        }
    }
    if (sp124 == 0) {
        *arg3 = var_f12;
        if (arg5 != NULL) {
            *arg5 = 0;
        }
    }
    if (arg12 != NULL) {
        (*(s32 *)((char *)(arg12) + 0x17C)) = var_f24;
    }
    D_800DBE58 = var_f24;
}

f32 func_1510F648(f32 arg0, f32 arg1, f32 arg2) {
    s32 sp28;
    s32 sp20;
    s32 sp1C;
    f32 var_f2;
    s32 temp_f10;
    s32 temp_f6;

    func_1510F800(3e-45f);
    temp_f6 = (s32) arg0;
    temp_f10 = (s32) arg2;
    sp20 = temp_f6;
    sp1C = temp_f10;
    func_150A64C8((s16) temp_f6, (s16) temp_f10, &sp28, (s32) arg1);
    func_150A44F0(sp28, &D_800D3830, 0);
    if (func_150A43E0(sp20, sp1C, sp28, &D_800D3830) != 0) {
        var_f2 = (f32)(s32)D_800D3300 * 0.00390625f;
    } else {
        var_f2 = D_800A2D98;
    }
    return var_f2;
}

s32 func_1510F720(s32 arg0, s32 arg1, s32 arg2, void **arg3) {
    s16 temp_a1_3;
    s16 var_a2_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1;
    void **var_s2;
    void *var_v0;

    var_s2 = arg3;
    var_v0 = D_800DBE48;
    var_v1 = 0;
    if (var_v0 != NULL) {
        do {
            temp_a1 = (*(s32 *)((char *)(var_v0) + 0x8)) - arg0;
            var_a2 = temp_a1;
            if (temp_a1 < 0) {
                var_a2 = -temp_a1;
            }
            temp_a1_2 = arg2 + (*(s32 *)((char *)(var_v0) + 0x6));
            if (var_a2 < temp_a1_2) {
                temp_a2 = (*(s32 *)((char *)(var_v0) + 0xA)) - arg1;
                var_a3 = temp_a2;
                if (temp_a2 < 0) {
                    var_a3 = -temp_a2;
                }
                if (var_a3 < temp_a1_2) {
                    temp_a1_3 = (*(s32 *)((char *)(var_v0) + 0xC));
                    if (temp_a1_3 != 0) {
                        var_a2_2 = temp_a1_3;
                    } else {
                        *var_s2 = var_v0;
                        var_s2 = (char *)(var_s2) + 4;
                        var_v1 += 1;
                        goto block_10;
                    }
                } else {
                    goto block_10;
                }
            } else {
block_10:
                var_a2_2 = (*(s32 *)((char *)(var_v0) + 0x4));
            }
            if (var_a2_2 != 0) {
                var_v0 = (char *)(var_v0) + var_a2_2;
            } else {
                var_v0 = NULL;
            }
        } while (var_v0 != NULL);
    }
    return var_v1;
}

void func_1510F800(void) {
    func_150A49F4();
}

void func_1510F820(f32 *arg2, f32 *arg3, f32 *arg5, f32 *arg6) {
    f32 sp24;
    f32 sp20;
    f32 temp_f2;

    func_1510E388(&sp24, &sp20);
    *arg5 = sp24;
    *arg6 = sp20;
    temp_f2 = sqrtf((sp24 * sp24) + (sp20 * sp20)) * D_800A2D9C;
    if (temp_f2 == 0.0f) {
        *arg2 = 1.0f;
        *arg3 = 0.0f;
        return;
    }
    *arg2 = sp24 / temp_f2;
    *arg3 = sp20 / temp_f2;
}

s32 func_1510F8CC(s32 arg0) {
    return arg0 & 0x1F;
}

s32 func_1510F8D8(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f14;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f2;
    s32 temp_t8;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v1;
    void *var_v0;

    func_1510F800();
    temp_v0 = func_150A3A70(arg0, arg2);
    if (temp_v0 == 0) {
        return -0x2710;
    }
    var_a0 = 0;
    temp_t8 = (temp_v0 - 1) & 3;
    temp_f14 = (f32) arg1;
    var_v1 = 1;
    var_f2 = temp_f14 - ((f32)(s32)D_800D3300 * 0.00390625f);
    if (temp_v0 >= 2) {
        if (temp_t8 != 0) {
            do {
                if (((var_f2 >= 0.0f) && (var_f0 = temp_f14 - ((f32)(s32)*(&D_800D3300 + (var_v1 * 0x10)) * 0.00390625f), (var_f0 < var_f2)) && (var_f0 >= 0.0f)) || ((var_f2 < 0.0f) && (var_f0 = temp_f14 - ((f32)(s32)*(&D_800D3300 + (var_v1 * 0x10)) * 0.00390625f), (var_f2 < var_f0)))) {
                    var_f2 = var_f0;
                    var_a0 = var_v1;
                }
                var_v1 += 1;
            } while ((temp_t8 + 1) != var_v1);
            if (var_v1 != temp_v0) {
                goto block_13;
            }
        } else {
block_13:
            var_v0 = &D_800D3300 + (var_v1 * 0x10);
            do {
                if (((var_f2 >= 0.0f) && (var_f0_2 = temp_f14 - ((f32) (*(f32 *)((char *)(var_v0) + 0x0)) * 0.00390625f), (var_f0_2 < var_f2)) && (var_f0_2 >= 0.0f)) || ((var_f2 < 0.0f) && (var_f0_2 = temp_f14 - ((f32) (*(f32 *)((char *)(var_v0) + 0x0)) * 0.00390625f), (var_f2 < var_f0_2)))) {
                    var_f2 = var_f0_2;
                    var_a0 = var_v1;
                }
                temp_f0 = temp_f14 - ((f32) (*(f32 *)((char *)(var_v0) + 0x10)) * 0.00390625f);
                if (((var_f2 >= 0.0f) && (temp_f0 < var_f2) && (temp_f0 >= 0.0f)) || ((var_f2 < 0.0f) && (var_f2 < temp_f0))) {
                    var_f2 = temp_f0;
                    var_a0 = var_v1 + 1;
                }
                temp_f0_2 = temp_f14 - ((f32) (*(f32 *)((char *)(var_v0) + 0x20)) * 0.00390625f);
                if (((var_f2 >= 0.0f) && (temp_f0_2 < var_f2) && (temp_f0_2 >= 0.0f)) || ((var_f2 < 0.0f) && (var_f2 < temp_f0_2))) {
                    var_f2 = temp_f0_2;
                    var_a0 = var_v1 + 2;
                }
                temp_f0_3 = temp_f14 - ((f32) (*(f32 *)((char *)(var_v0) + 0x30)) * 0.00390625f);
                if (((var_f2 >= 0.0f) && (temp_f0_3 < var_f2) && (temp_f0_3 >= 0.0f)) || ((var_f2 < 0.0f) && (var_f2 < temp_f0_3))) {
                    var_f2 = temp_f0_3;
                    var_a0 = var_v1 + 3;
                }
                var_v1 += 4;
                var_v0 = (char *)(var_v0) + 0x40;
            } while (var_v1 != temp_v0);
        }
    }
    if (arg3 != NULL) {
        *arg3 = (*(s32 *)((char *)((&D_800D3300 + (var_a0 * 0x10))) + 0x4));
    }
    return (s32) ((f32)(s32)*(&D_800D3300 + (var_a0 * 0x10)) * 0.00390625f);
}

void func_1510FC34(s32 arg0) {
    s16 *temp_v1;
    s32 temp_f10;
    s32 temp_f6;
    s32 temp_v0_3;
    void *temp_v0;
    void *temp_v0_2;

    D_800DBDC0 = arg0;
    temp_v0 = D_800DBFF0 + (arg0 * 0x9A0);
    temp_f6 = (s32) (*(s32 *)((char *)(temp_v0) + 0x2F8));
    temp_f10 = (s32) (*(s32 *)((char *)(temp_v0) + 0x300));
    D_800DBDCC = (f32) temp_f6;
    D_800DBDD0 = (f32) temp_f10;
    temp_v0_2 = func_1510FD20(temp_f6, temp_f10);
    D_800DBDC8 = temp_v0_2;
    temp_v0_3 = func_1510FE30(temp_v0_2);
    D_800DBDC4 = temp_v0_3;
    temp_v1 = (arg0 * 2) + &D_800DBE30;
    if (temp_v0_3 != *temp_v1) {
        *temp_v1 = (s16) temp_v0_3;
        func_150A6760(arg0);
    }
    if (D_800BE9F0 == 0x3C) {
        func_150F33F8(arg0);
    }
}

void *func_1510FD20(s32 arg0, s32 arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a1;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_t0;
    s32 var_t0_2;
    u16 temp_a1_2;
    u16 temp_a1_4;
    void *var_v1;

    var_v1 = D_800DBE48;
    if (var_v1 != NULL) {
loop_1:
        temp_v0 = (*(s32 *)((char *)(var_v1) + 0xC));
        if (temp_v0 != 0) {
            temp_a1 = arg0 - (*(s32 *)((char *)(var_v1) + 0x8));
            var_a2 = temp_a1;
            if (temp_a1 < 0) {
                var_a2 = -temp_a1;
            }
            temp_a1_2 = (*(s32 *)((char *)(var_v1) + 0x6));
            if ((s32) temp_a1_2 >= var_a2) {
                temp_a2 = arg1 - (*(s32 *)((char *)(var_v1) + 0xA));
                var_t0 = temp_a2;
                if (temp_a2 < 0) {
                    var_t0 = -temp_a2;
                }
                if ((s32) temp_a1_2 >= var_t0) {
                    var_v1 = (char *)(var_v1) + temp_v0;
                } else {
                    goto block_9;
                }
            } else {
block_9:
                temp_v0_2 = (*(s32 *)((char *)(var_v1) + 0x4));
                if (temp_v0_2 != 0) {
                    var_v1 = (char *)(var_v1) + temp_v0_2;
                } else {
                    goto block_21;
                }
            }
            goto block_22;
        }
        temp_a1_3 = arg0 - (*(s32 *)((char *)(var_v1) + 0x8));
        var_a2_2 = temp_a1_3;
        if (temp_a1_3 < 0) {
            var_a2_2 = -temp_a1_3;
        }
        temp_a1_4 = (*(s32 *)((char *)(var_v1) + 0x6));
        if ((s32) temp_a1_4 >= var_a2_2) {
            temp_a2_2 = arg1 - (*(s32 *)((char *)(var_v1) + 0xA));
            var_t0_2 = temp_a2_2;
            if (temp_a2_2 < 0) {
                var_t0_2 = -temp_a2_2;
            }
            if ((s32) temp_a1_4 >= var_t0_2) {
                return var_v1;
            }
            goto block_19;
        }
block_19:
        temp_v0_3 = (*(s32 *)((char *)(var_v1) + 0x4));
        if (temp_v0_3 != 0) {
            var_v1 = (char *)(var_v1) + temp_v0_3;
        } else {
block_21:
            var_v1 = NULL;
        }
block_22:
        if (var_v1 == NULL) {
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

s32 func_1510FE30(void *arg0) {
    s16 temp_a1;
    s16 temp_a1_2;
    s32 var_v1;
    void *var_v0;

    var_v0 = D_800DBE48;
    var_v1 = 0;
    if (var_v0 != NULL) {
loop_1:
        if (var_v0 == arg0) {
            return var_v1;
        }
        temp_a1 = (*(s32 *)((char *)(var_v0) + 0xC));
        if (temp_a1 != 0) {
            var_v0 = (char *)(var_v0) + temp_a1;
        } else {
            temp_a1_2 = (*(s32 *)((char *)(var_v0) + 0x4));
            var_v0 = (char *)(var_v0) + temp_a1_2;
            if (temp_a1_2 != 0) {
                var_v1 += 1;
            } else {
                var_v0 = NULL;
            }
        }
        if (var_v0 == NULL) {
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_1;
    }
    return 0;
}
