/**
 * Auto-decompiled from asm/1A20A0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s16 func_10010E78(); /* extern */
s32 func_150490A8();                      /* extern */
s32 func_150A3A70();                        /* extern */
void * func_150A7A48();               /* extern */
s32 func_150AD960();              /* extern */
u32 random_u32();                             /* extern */
s32 func_1510AEE0(); /* extern */
void * func_1510F800();                                 /* extern */
s32 func_1510F8D8();            /* extern */
void *func_15142FBC();            /* extern */
void *func_15167A68();        /* extern */
extern s32 D_8008D0B0;
extern s32 D_800A7170;
extern f32 D_800A7174;
extern f32 D_800A7178;
extern f32 D_800A717C;
extern f32 D_800A7180;
extern f32 D_800A7184;
extern f32 D_800A7188;
extern f32 D_800A718C;
extern f32 D_800A7190;
extern f32 D_800A7194;
extern f32 D_800A7198;
extern f32 D_800A719C;
extern f32 D_800A71A0;
extern f32 D_800A71A4;
extern f32 D_800A71A8;
extern f32 D_800A71AC;
extern f32 D_800A71B0;
extern f32 D_800A71B4;
extern f32 D_800A71B8;
extern s32 D_800C35B0;
extern u8 D_800C35E8;
extern s32 D_800D35E0;
extern s32 D_800D9C10;
extern s32 D_800D9C50;
extern s32 D_800DDE84;
extern s32 D_800DDE88;
extern s32 D_800DDE8C;
extern s32 D_800DDF14;
void func_15175958(f32 arg0, f32 arg1);

void func_15174BF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, s32 arg8) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    s32 sp9C;
    f32 temp_f22;
    f32 temp_f30;
    s32 temp_f16;
    s32 temp_f8;
    s32 temp_f8_2;
    s32 temp_fp;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s4;
    s8 temp_v1_2;
    u32 var_v1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = D_800DBFF0 + (arg5 * 0x9A0);
    temp_f22 = (f32) arg3;
    spA4 = (f32) arg2 - (*(f32 *)((char *)(temp_v0) + 0x2F8));
    spA8 = temp_f22 - (*(s32 *)((char *)(temp_v0) + 0x2FC));
    spAC = (f32) arg4 - (*(f32 *)((char *)(temp_v0) + 0x300));
    var_s4 = 0;
    temp_fp = (s32) func_15048FC8(&spA4);
    if (arg0 > 0) {
        temp_f30 = D_800A7174;
loop_2:
        temp_v0_2 = func_15167A68(0xA, 0, 0xF8, 1, 0xFF, 1);
        if (temp_v0_2 != NULL) {
            temp_s2 = ((random_u32() & 0x7F) + arg2) - 0x3F;
            temp_s3 = ((random_u32() & 0x7F) + arg4) - 0x3F;
            temp_f8 = temp_s3;
            (*(s32 *)((char *)(temp_v0_2) + 0x92)) = 3;
            (*(s32 *)((char *)(temp_v0_2) + 0x9C)) = temp_f22;
            (*(f32 *)((char *)(temp_v0_2) + 0x98)) = (f32) temp_s2;
            (*(s8 *)((char *)(temp_v0_2) + 0x90)) = (s8) arg1;
            (*(f32 *)((char *)(temp_v0_2) + 0xA0)) = (f32) temp_f8;
            (*(s16 *)((char *)(temp_v0_2) + 0xA4)) = (s16) ((random_u32() % 15U) + 0xA);
            (*(s32 *)((char *)(temp_v0_2) + 0xA6)) = 1;
            temp_v1 = ((random_u32() & 0x1F) + temp_fp) - 0xF;
            var_s1 = temp_v1;
            if (temp_v1 < 0) {
                var_s1 = temp_v1 + 0x168;
            } else if (temp_v1 >= 0x168) {
                var_s1 = temp_v1 - 0x168;
            }
            temp_f16 = (random_u32() & 0x1F) - 0xF;
            (*(s32 *)((char *)(temp_v0_2) + 0xB0)) = 0.0f;
            (*(s32 *)((char *)(temp_v0_2) + 0xB4)) = -1.0f;
            (*(f32 *)((char *)(temp_v0_2) + 0xA8)) = (f32) temp_f16;
            (*(f32 *)((char *)(temp_v0_2) + 0xAC)) = (f32) var_s1;
            temp_f8_2 = (random_u32() & 0xFF) - 0x80;
            (*(s32 *)((char *)(temp_v0_2) + 0xBC)) = 0.0f;
            (*(f32 *)((char *)(temp_v0_2) + 0xB8)) = (f32) ((f32) temp_f8_2 * temp_f30);
            (*(f32 *)((char *)(temp_v0_2) + 0xC0)) = (f32) (((f32) (random_u32() & 0xFFFF) * 0.000030517578f * arg7) + arg6);
            temp_v1_2 = random_u32() & 1;
            (*(s32 *)((char *)(temp_v0_2) + 0xED)) = temp_v1_2;
            (*(s32 *)((char *)(temp_v0_2) + 0x94)) = (s32) *(&D_800DDE88 + (temp_v1_2 * 0x14));
            if (var_s4 == 0) {
                (*(s32 *)((char *)(temp_v0_2) + 0xEE)) = func_10010E78(0, 0xA2, 0x7D00, 0, 0, 0, temp_s2, arg3, temp_s3, 0x3E8, 0xFA0);
            } else {
                (*(s32 *)((char *)(temp_v0_2) + 0xEE)) = 0;
            }
            (*(s32 *)((char *)(temp_v0_2) + 0xE8)) = 0U;
            if (arg8 & 1) {
                (*(s16 *)((char *)(temp_v0_2) + 0x92)) = (s16) ((*(s16 *)((char *)(temp_v0_2) + 0x92)) | 0x80);
                var_v1 = 0;
                (*(f32 *)((char *)(temp_v0_2) + 0xC8)) = (f32) func_1510F8D8(temp_s2, arg3, temp_s3, &sp9C);
                if (sp9C != 0) {
                    var_v1 = (*(s32 *)((char *)(D_800DBE5C) + (((s32) (sp9C - D_800DBE3C) / 12) * 4)));
                }
                (*(s32 *)((char *)(temp_v0_2) + 0xE8)) = var_v1;
                (*(u8 *)((char *)(temp_v0_2) + 0xEC)) = (u8) *(&D_800A7170 + ((var_v1 >> 5) & 3));
            } else {
                (*(s32 *)((char *)(temp_v0_2) + 0xEC)) = 0U;
            }
            (*(s32 *)((char *)(temp_v0_2) + 0xF0)) = 0;
            (*(s32 *)((char *)(temp_v0_2) + 0xF1)) = 0;
            var_s4 += 1;
            if (var_s4 != arg0) {
                goto loop_2;
            }
        }
    }
}

void func_15174FA4(s32 arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg7, f32 arg8, f32 arg9) {
    f32 temp_f16;
    f32 temp_f18;
    f32 var_f8;
    s32 *var_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_t1;
    s32 temp_t5;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a1;
    s32 var_s0;
    s32 var_s5;
    u32 temp_hi;
    void *temp_v0;
    void *var_a0_2;

    if (arg7 == 0) {
        func_1510F800(0);
    }
    var_s5 = 0;
    if (arg0 > 0) {
loop_4:
        temp_v0 = func_15167A68(0x13, 0, 0xF8, 1, 0xFF, 1);
        if (temp_v0 != NULL) {
            temp_s3 = arg5 >> 1;
            temp_s0 = ((random_u32() % (u32) arg5) + arg2) - temp_s3;
            temp_v1 = ((random_u32() % (u32) arg5) + arg4) - temp_s3;
            temp_f16 = (f32) temp_v1;
            temp_s2 = temp_v1;
            (*(f32 *)((char *)(temp_v0) + 0x98)) = (f32) temp_s0;
            (*(f32 *)((char *)(temp_v0) + 0x9C)) = (f32) arg3;
            (*(s8 *)((char *)(temp_v0) + 0x90)) = (s8) arg1;
            (*(s32 *)((char *)(temp_v0) + 0xA0)) = temp_f16;
            (*(s16 *)((char *)(temp_v0) + 0xA4)) = (s16) ((random_u32() % 3U) + 4);
            (*(s32 *)((char *)(temp_v0) + 0xA6)) = 0;
            (*(f32 *)((char *)(temp_v0) + 0xA8)) = (f32) ((random_u32() & 0x1F) - 0xF);
            temp_hi = random_u32() % 360U;
            var_f8 = (f32) temp_hi;
            if ((s32) temp_hi < 0) {
                var_f8 += 4294967296.0f;
            }
            (*(s32 *)((char *)(temp_v0) + 0xAC)) = var_f8;
            temp_f18 = (f32) ((random_u32() & 0x1F) - 0xF);
            (*(s32 *)((char *)(temp_v0) + 0xB4)) = 0.0f;
            (*(s32 *)((char *)(temp_v0) + 0xBC)) = 0.0f;
            (*(s32 *)((char *)(temp_v0) + 0xB8)) = 3.0f;
            (*(s32 *)((char *)(temp_v0) + 0xB0)) = temp_f18;
            (*(f32 *)((char *)(temp_v0) + 0xC0)) = (f32) (((f32) (random_u32() & 0xFFFF) * 0.000030517578f * arg9) + arg8);
            (*(s32 *)((char *)(temp_v0) + 0xED)) = 7;
            (*(s32 *)((char *)(temp_v0) + 0x94)) = (s32) D_800DDF14;
            temp_v0_2 = func_150A3A70(temp_s0, temp_s2);
            if (temp_v0_2 == 0) {
                func_1516979C(temp_v0);
            } else {
                var_s0 = D_800D3300;
                var_a1 = 1;
                if (temp_v0_2 >= 2) {
                    temp_t5 = (temp_v0_2 - 1) & 3;
                    if (temp_t5 != 0) {
                        var_a0 = (1 * 0x10) + &D_800D3300;
                        do {
                            temp_v1_2 = *var_a0;
                            var_a1 += 1;
                            if (temp_v1_2 < var_s0) {
                                var_s0 = temp_v1_2;
                            }
                            var_a0 += 0x10;
                        } while ((temp_t5 + 1) != var_a1);
                        if (var_a1 != temp_v0_2) {
                            goto block_16;
                        }
                    } else {
block_16:
                        var_a0_2 = (var_a1 * 0x10) + &D_800D3300;
                        do {
                            temp_v1_3 = (*(s32 *)((char *)(var_a0_2) + 0x0));
                            if (temp_v1_3 < var_s0) {
                                var_s0 = temp_v1_3;
                            }
                            temp_v0_3 = (*(s32 *)((char *)(var_a0_2) + 0x10));
                            if (temp_v0_3 < var_s0) {
                                var_s0 = temp_v0_3;
                            }
                            temp_v0_4 = (*(s32 *)((char *)(var_a0_2) + 0x20));
                            if (temp_v0_4 < var_s0) {
                                var_s0 = temp_v0_4;
                            }
                            temp_v0_5 = (*(s32 *)((char *)(var_a0_2) + 0x30));
                            var_a0_2 = (char *)(var_a0_2) + 0x40;
                            if (temp_v0_5 < var_s0) {
                                var_s0 = temp_v0_5;
                            }
                        } while (var_a0_2 != ((temp_v0_2 * 0x10) + &D_800D3300));
                    }
                }
                temp_t1 = var_s0 >> 8;
                (*(f32 *)((char *)(temp_v0) + 0xC8)) = (f32) temp_t1;
                if (arg7 == 0) {
                    (*(s32 *)((char *)(temp_v0) + 0x91)) = 0;
                    (*(s32 *)((char *)(temp_v0) + 0x92)) = 1;
                    (*(f32 *)((char *)(temp_v0) + 0x9C)) = (f32) (temp_t1 + 0xA);
                } else {
                    (*(s32 *)((char *)(temp_v0) + 0x91)) = 2;
                    (*(s32 *)((char *)(temp_v0) + 0x92)) = 4;
                    (*(f32 *)((char *)(temp_v0) + 0xE4)) = (f32) ((random_u32() & 0x7F) + temp_t1 + 0x12C);
                    (*(f32 *)((char *)(temp_v0) + 0x9C)) = (f32) ((random_u32() & 0x7F) + temp_t1 + 0x12C);
                }
                (*(s32 *)((char *)(temp_v0) + 0xCC)) = 0.0f;
                (*(s32 *)((char *)(temp_v0) + 0xD0)) = arg2;
                (*(s16 *)((char *)(temp_v0) + 0xD4)) = (s16) arg4;
                (*(s16 *)((char *)(temp_v0) + 0xD6)) = (s16) temp_s3;
                (*(s32 *)((char *)(temp_v0) + 0xE0)) = 0.0f;
                (*(s32 *)((char *)(temp_v0) + 0xDC)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0xE8)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0xEC)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0xF0)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0xF1)) = 0;
            }
            var_s5 += 1;
            if (var_s5 != arg0) {
                goto loop_4;
            }
        }
    }
}

void func_15175390(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, u32 arg11, s32 arg12, s32 arg13, s32 arg14, f32 arg15, f32 arg16, s32 arg17) {
    u32 spA0;
    s32 sp9C;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    s32 sp80;
    s32 sp78;
    f32 temp_f18;
    f32 temp_f4;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_t0;
    s32 temp_t6;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s8 temp_s2;
    u32 var_s2;
    u32 var_v1;
    void *temp_v0;
    void *temp_v0_2;

    if (!(arg9 & 0x40) || (arg7 > 0)) {
        temp_t0 = arg9 & 0x10000;
        sp78 = temp_t0;
        if (temp_t0 != 0) {
            temp_v0 = D_800DBFF0 + (arg6 * 0x9A0);
            sp88 = (f32) arg2 - (*(f32 *)((char *)(temp_v0) + 0x2F8));
            sp8C = (f32) arg3 - (*(f32 *)((char *)(temp_v0) + 0x2FC));
            sp90 = (f32) arg4 - (*(f32 *)((char *)(temp_v0) + 0x300));
            sp9C = (s32) func_15048FC8(&sp88);
        }
        var_s6 = 0;
        if (arg0 > 0) {
loop_6:
            if (arg11 != 0) {
                var_s2 = random_u32() % arg11;
            } else {
                var_s2 = 0;
            }
            temp_v0_2 = func_15167A68(arg10 + var_s2, 0, 0xF8, 1, 0xFF, 1);
            if (temp_v0_2 != NULL) {
                temp_t6 = arg17 & 1;
                var_s4 = arg3;
                temp_s1 = arg5 - arg8;
                temp_hi = random_u32() % temp_s1;
                var_s3 = temp_hi + arg8;
                if (temp_hi < 0) {
                    var_s3 = temp_hi - arg8;
                }
                temp_s3 = var_s3 + arg2;
                temp_hi_2 = random_u32() % temp_s1;
                var_s1 = temp_hi_2 + arg8;
                if (temp_hi_2 < 0) {
                    var_s1 = temp_hi_2 - arg8;
                }
                temp_s1_2 = var_s1 + arg4;
                if ((arg14 == 0) || (temp_t6 != 0)) {
                    (*(f32 *)((char *)(temp_v0_2) + 0xC8)) = (f32) func_1510F8D8(temp_s3, arg3, temp_s1_2, &sp80);
                }
                if (arg14 == 0) {
                    var_s4 = (s32) (*(s32 *)((char *)(temp_v0_2) + 0xC8));
                } else if (arg7 != 0) {
                    var_s4 = arg3 + (random_u32() % (u32) arg7);
                }
                (*(s8 *)((char *)(temp_v0_2) + 0x90)) = (s8) arg1;
                (*(s16 *)((char *)(temp_v0_2) + 0x92)) = (s16) arg9;
                (*(f32 *)((char *)(temp_v0_2) + 0x98)) = (f32) temp_s3;
                (*(s8 *)((char *)(temp_v0_2) + 0x91)) = (s8) arg14;
                (*(f32 *)((char *)(temp_v0_2) + 0x9C)) = (f32) var_s4;
                (*(f32 *)((char *)(temp_v0_2) + 0xA0)) = (f32) temp_s1_2;
                (*(s16 *)((char *)(temp_v0_2) + 0xA4)) = (s16) ((random_u32() % 15U) + 0xA);
                (*(s32 *)((char *)(temp_v0_2) + 0xA6)) = 0;
                if (sp78 != 0) {
                    temp_v1 = ((random_u32() & 0x1F) + sp9C) - 0xF;
                    var_a0 = temp_v1;
                    if (temp_v1 < 0) {
                        var_a0 = temp_v1 + 0x168;
                    } else if (temp_v1 >= 0x168) {
                        var_a0 = temp_v1 - 0x168;
                    }
                } else {
                    var_a0 = (s32) (random_u32() % 360U);
                }
                if (arg9 & 0x20000) {
                    spA0 = (u32) var_a0;
                    temp_f4 = (f32) ((random_u32((u32) var_a0) & 0x1F) - 0xF);
                    (*(s32 *)((char *)(temp_v0_2) + 0xB4)) = -1.0f;
                    (*(s32 *)((char *)(temp_v0_2) + 0xA8)) = temp_f4;
                } else {
                    (*(s32 *)((char *)(temp_v0_2) + 0xA8)) = 0.0f;
                    (*(s32 *)((char *)(temp_v0_2) + 0xB4)) = 0.0f;
                }
                (*(s32 *)((char *)(temp_v0_2) + 0xB0)) = 0.0f;
                (*(f32 *)((char *)(temp_v0_2) + 0xAC)) = (f32) var_a0;
                temp_f18 = (f32) ((random_u32((u32) var_a0) & 0xFF) - 0x80);
                (*(s32 *)((char *)(temp_v0_2) + 0xBC)) = 0.0f;
                (*(f32 *)((char *)(temp_v0_2) + 0xB8)) = (f32) (temp_f18 * D_800A7178);
                (*(f32 *)((char *)(temp_v0_2) + 0xC0)) = (f32) (((f32) (random_u32() & 0xFFFF) * 0.000030517578f * arg16) + arg15);
                if (arg13 != -1) {
                    var_s2 = 0;
                    if (arg13 != 0) {
                        var_s2 = random_u32() & arg13;
                    }
                }
                temp_s2 = var_s2 + arg12;
                (*(s32 *)((char *)(temp_v0_2) + 0xED)) = temp_s2;
                (*(s32 *)((char *)(temp_v0_2) + 0x94)) = (s32) *(&D_800DDE88 + (temp_s2 * 0x14));
                (*(s16 *)((char *)(temp_v0_2) + 0xD0)) = (s16) arg2;
                (*(s16 *)((char *)(temp_v0_2) + 0xD2)) = (s16) arg3;
                (*(s16 *)((char *)(temp_v0_2) + 0xD4)) = (s16) arg4;
                (*(s16 *)((char *)(temp_v0_2) + 0xD8)) = (s16) arg8;
                (*(s16 *)((char *)(temp_v0_2) + 0xD6)) = (s16) arg5;
                (*(s32 *)((char *)(temp_v0_2) + 0xDC)) = 0;
                (*(s32 *)((char *)(temp_v0_2) + 0xDE)) = 0;
                (*(s32 *)((char *)(temp_v0_2) + 0xE8)) = 0U;
                (*(s32 *)((char *)(temp_v0_2) + 0xE0)) = 0.0f;
                (*(s16 *)((char *)(temp_v0_2) + 0xDA)) = (s16) arg7;
                if (var_s6 == 0) {
                    if (arg10 == 0xA) {
                        (*(s32 *)((char *)(temp_v0_2) + 0xEE)) = func_10010E78(0, 0xA2, 0x7D00, 0, 0, 0, temp_s3, var_s4, temp_s1_2, 0x3E8, 0xFA0);
                    }
                } else {
                    (*(s32 *)((char *)(temp_v0_2) + 0xEE)) = 0;
                }
                if (temp_t6 != 0) {
                    (*(s16 *)((char *)(temp_v0_2) + 0x92)) = (s16) ((*(s16 *)((char *)(temp_v0_2) + 0x92)) | 0x80);
                    var_v1 = 0;
                    if (sp80 != 0) {
                        var_v1 = (*(s32 *)((char *)(D_800DBE5C) + (((s32) (sp80 - D_800DBE3C) / 12) * 4)));
                    }
                    (*(s32 *)((char *)(temp_v0_2) + 0xE8)) = var_v1;
                    (*(u8 *)((char *)(temp_v0_2) + 0xEC)) = (u8) *(&D_800A7170 + ((var_v1 >> 5) & 3));
                } else {
                    (*(s32 *)((char *)(temp_v0_2) + 0xEC)) = 0U;
                }
                (*(s32 *)((char *)(temp_v0_2) + 0xF0)) = 0;
                (*(s32 *)((char *)(temp_v0_2) + 0xF1)) = 0;
                var_s6 += 1;
                if (var_s6 != arg0) {
                    goto loop_6;
                }
            }
        }
    }
}

void func_15175958(f32 arg0, f32 arg1) {
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp80;
    f32 sp78;
    s32 sp74;
    void *sp70;
    void *sp6C;
    s32 sp68;
    f32 sp64;
    f32 sp60;
    s32 sp58;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 temp_f2_10;
    f32 temp_f2_11;
    f32 temp_f2_12;
    f32 temp_f2_13;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f2_9;
    f32 temp_f4;
    f32 var_f10;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f12_3;
    f32 var_f14;
    f32 var_f14_2;
    s16 temp_v0_2;
    s16 temp_v0_5;
    s16 temp_v1_2;
    s16 var_a0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a1;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u16 temp_a1;
    u32 temp_hi;
    u8 temp_v0;
    u8 temp_v1;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 var_v0;
    void *var_a0;
    void *var_t0;

    var_f12 = arg0;
    var_f14 = arg1;
    temp_v0 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xED));
    if (((*(s32 *)((char *)(D_800DDE80) + (temp_v0 * 0x14))) == 0) || ((*(s32 *)((char *)(D_800DDF78) + (temp_v0 * 4))) == 0)) {
        func_1516972C(arg0);
        return;
    }
    temp_v1 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xF0));
    if (((temp_v0 == 8) || (temp_v0 == 9)) && (D_800BE9F0 == 6) && (D_800C35EA != 0) && (D_800C35E8 == 0xF)) {
        (*(s16 *)((char *)(*(void **)&(arg0)) + 0x92)) = (s16) ((*(s16 *)((char *)(*(void **)&(arg0)) + 0x92)) & 0xFFF7);
        if ((D_800C35EA == 0) || (D_800C35E8 != 0xF)) {
            func_1516972C(arg0);
            return;
        }
        if (D_800C35B0 >= 0x3C) {
            temp_v0_2 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x92));
            if (!(temp_v0_2 & 0x200)) {
                (*(s16 *)((char *)(*(void **)&(arg0)) + 0x92)) = (s16) ((temp_v0_2 & 0xFFB3) | 0x200);
                temp_f12 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x98)) - D_800A717C;
                sp68 = (s32) temp_v1;
                temp_f14 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA0)) - D_800A7180;
                sp64 = temp_f12;
                sp60 = temp_f14;
                var_f12 = temp_f12;
                var_f14 = temp_f14;
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB4)) = (f32) (D_800A7184 - func_150484A0(temp_f12, temp_f14));
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB8)) = (f32) D_800A7188;
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0xBC)) = sqrtf((var_f12 * var_f12) + (var_f14 * var_f14));
            }
        }
        goto block_14;
    }
block_14:
    if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xF1)) == 0) {
        if (((*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 8) && ((*(s32 *)((char *)(D_800DDF5C) + (*(s32 *)((char *)(*(void **)&(arg0)) + 0x90)))) == 0)) {
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0xF1)) = 1U;
        } else if (temp_v1 != 0xFF) {
            var_v1 = temp_v1 + (D_800BE9E4 * 4);
            if (var_v1 >= 0x100) {
                var_v1 = 0xFF;
            }
            (*(u8 *)((char *)(*(void **)&(arg0)) + 0xF0)) = (u8) var_v1;
        }
        var_a0 = ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xED)) * 0x14) + D_800DDE80;
        goto block_28;
    }
    if (temp_v1 == 0) {
        func_1516972C((*(void **)&var_f12), var_f14, arg0);
        return;
    }
    var_v1_2 = temp_v1 - (D_800BE9E4 * 4);
    if (var_v1_2 < 0) {
        var_v1_2 = 0;
    }
    (*(u8 *)((char *)(*(void **)&(arg0)) + 0xF0)) = (u8) var_v1_2;
    var_a0 = ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xED)) * 0x14) + D_800DDE80;
block_28:
    sp6C = var_a0;
    (*(s32 *)((char *)(D_800DDF68) + (*(s32 *)((char *)(*(void **)&(arg0)) + 0xED)))) = 1;
    temp_a1 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xEE));
    var_t0 = ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xED)) * 0x38) + &D_8008D0B0;
    if (temp_a1 != 0) {
        sp70 = var_t0;
        if (func_1000F3D0((*(void **)&var_f12), var_f14, temp_a1 & 0xFFFF, temp_a1) != 0) {
            sp70 = var_t0;
            func_1000F91C((*(s32 *)((char *)(*(void **)&(arg0)) + 0xEE)), 0x7D00, 0, 0, 0, (s32) (*(s32 *)((char *)(*(void **)&(arg0)) + 0x98)), (s32) (*(s32 *)((char *)(*(void **)&(arg0)) + 0x9C)), (s32) (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA0)), 0x3E8, 0xFA0);
        } else {
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0xEE)) = 0U;
        }
    }
    if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 4) {
        sp70 = var_t0;
        temp_v0_3 = func_150AD960((s32) (*(s32 *)((char *)(*(void **)&(arg0)) + 0x98)), (s32) (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA0)), (*(s32 *)((char *)(*(void **)&(arg0)) + 0xD0)), (*(s32 *)((char *)(*(void **)&(arg0)) + 0xD4)));
        var_a1 = 0;
        if (((*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 0x10) && (temp_v0_3 < (*(s32 *)((char *)(*(void **)&(arg0)) + 0xD8)))) {
            var_a1 = 1;
        }
        if (((*(s32 *)((char *)(*(void **)&(arg0)) + 0xD6)) < temp_v0_3) || (var_a1 != 0)) {
            sp78 = (f32) (*(f32 *)((char *)(*(void **)&(arg0)) + 0xD0)) - (*(f32 *)((char *)(*(void **)&(arg0)) + 0x98));
            sp70 = var_t0;
            sp58 = var_a1;
            sp80 = (*(f32 *)((char *)(*(void **)&(arg0)) + 0xA0)) - (f32) (*(f32 *)((char *)(*(void **)&(arg0)) + 0xD4));
            temp_v0_4 = func_150490A8(&sp78, var_a1);
            var_t0 = sp70;
            var_v1_3 = temp_v0_4;
            if (sp58 != 0) {
                var_v1_3 = temp_v0_4 + 0x80;
            }
            if (var_v1_3 >= 0x100) {
                var_v1_3 -= 0x100;
            }
            (*(f32 *)((char *)(*(void **)&(arg0)) + 0xE0)) = (f32) ((f32) var_v1_3 * 1.40625f);
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0x91)) = 3U;
            (*(s16 *)((char *)(*(void **)&(arg0)) + 0xDC)) = (s16) (*(s16 *)((char *)(var_t0) + 0x3));
        }
        var_v0 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x91));
        if (var_v0 == 3) {
            temp_f2 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xE0));
            temp_f12_2 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xAC));
            var_f14_2 = (f32) D_800BE9E4 * 0.5f;
            if (temp_f2 < temp_f12_2) {
                var_f14_2 = -var_f14_2;
            }
            if (fabsf(temp_f2 - temp_f12_2) >= 180.0f) {
                var_f14_2 = -var_f14_2;
            }
            if (((var_f14_2 > 0.0f) && ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8)) < 0.0f)) || ((temp_f2_2 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8)), (var_f14_2 < 0.0f)) && (temp_f2_2 > 0.0f))) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x91)) = 2U;
                var_v0 = 2 & 0xFF;
            } else {
                var_v0 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x91));
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB8)) = (f32) (temp_f2_2 + var_f14_2);
            }
        }
        if (var_v0 == 2) {
            temp_f2_3 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8));
            if (temp_f2_3 != 0.0f) {
                if (temp_f2_3 > 0.0f) {
                    (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB8)) = (f32) (temp_f2_3 - ((f32) D_800BE9E4 * 0.5f));
                    if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8)) < 0.0f) {
                        goto block_60;
                    }
                } else {
                    (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB8)) = (f32) (temp_f2_3 + ((f32) D_800BE9E4 * 0.5f));
                    if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8)) > 0.0f) {
block_60:
                        (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8)) = 0.0f;
                    }
                }
            }
            (*(s16 *)((char *)(*(void **)&(arg0)) + 0xDC)) = (s16) ((*(s16 *)((char *)(*(void **)&(arg0)) + 0xDC)) - D_800BE9E4);
            if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xDC)) <= 0) {
                sp70 = var_t0;
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0xE0)) = (f32) (random_u32() % 360U);
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x91)) = 3U;
                (*(s16 *)((char *)(*(void **)&(arg0)) + 0xDC)) = (s16) (*(s16 *)((char *)(var_t0) + 0x2));
            }
        }
        temp_f2_4 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8));
        temp_f12_3 = (*(s32 *)((char *)(var_t0) + 0x10));
        if (temp_f12_3 < fabsf(temp_f2_4)) {
            if (temp_f2_4 > 0.0f) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8)) = temp_f12_3;
            } else {
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB8)) = (f32) -temp_f12_3;
            }
        }
    }
    if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 0x80) {
        sp70 = var_t0;
        var_t0 = sp70;
        var_v1_4 = 0;
        (*(f32 *)((char *)(*(void **)&(arg0)) + 0xC8)) = (f32) func_1510F8D8((s32) (*(f32 *)((char *)(*(void **)&(arg0)) + 0x98)), (s32) (*(f32 *)((char *)(*(void **)&(arg0)) + 0x9C)), (s32) (*(f32 *)((char *)(*(void **)&(arg0)) + 0xA0)), &sp74);
        if (sp74 != 0) {
            var_v1_4 = (*(s32 *)((char *)(D_800DBE5C) + (((s32) (sp74 - D_800DBE3C) / 12) * 4)));
        }
        (*(s32 *)((char *)(*(void **)&(arg0)) + 0xE8)) = var_v1_4;
    }
    if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 0x40) {
        temp_v1_2 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xDE));
        if (temp_v1_2 >= 0) {
            (*(s16 *)((char *)(*(void **)&(arg0)) + 0xDE)) = (s16) (temp_v1_2 - D_800BE9E4);
            if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xDE)) <= 0) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0xDE)) = -1;
                sp70 = var_t0;
                temp_hi = random_u32() % (u32) (*(u32 *)((char *)(*(void **)&(arg0)) + 0xDA));
                var_f10 = (f32) temp_hi;
                if ((s32) temp_hi < 0) {
                    var_f10 += 4294967296.0f;
                }
                temp_f0 = var_f10 + (f32) (*(f32 *)((char *)(*(void **)&(arg0)) + 0xD2));
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0xE4)) = temp_f0;
                if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x9C)) < temp_f0) {
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB4)) = -1.0f;
                } else {
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB4)) = 1.0f;
                }
            } else {
                temp_f0_2 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA8));
                if (temp_f0_2 > 0.0f) {
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB4)) = -1.0f;
                } else if (temp_f0_2 < 0.0f) {
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB4)) = 1.0f;
                }
            }
        } else {
            temp_f0_3 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB4));
            if (((temp_f0_3 > 0.0f) && ((*(s32 *)((char *)(*(void **)&(arg0)) + 0x9C)) < (*(s32 *)((char *)(*(void **)&(arg0)) + 0xE4)))) || ((temp_f0_3 < 0.0f) && ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xE4)) < (*(s32 *)((char *)(*(void **)&(arg0)) + 0x9C))))) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0xDE)) = 0x78;
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB4)) = (f32) -temp_f0_3;
            }
        }
    }
    if (!((*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 0x200)) {
        (*(f32 *)((char *)(*(void **)&(arg0)) + 0xA8)) = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0xA8)) + (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB4)));
        temp_f2_5 = (*(s32 *)((char *)(var_t0) + 0x8));
        temp_f0_4 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA8));
        var_f12_2 = -temp_f2_5;
        if (temp_f0_4 < var_f12_2) {

        } else if (temp_f2_5 < temp_f0_4) {
            var_f12_2 = temp_f2_5;
        } else {
            var_f12_2 = temp_f0_4;
        }
        (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA8)) = var_f12_2;
        temp_f2_6 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8));
        if (D_800A718C < fabsf(temp_f2_6)) {
            (*(f32 *)((char *)(*(void **)&(arg0)) + 0xAC)) = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0xAC)) + temp_f2_6);
            temp_f12_4 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xAC));
            if (temp_f12_4 < 0.0f) {
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0xAC)) = (f32) (temp_f12_4 + 360.0f);
            } else if (temp_f12_4 >= 360.0f) {
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0xAC)) = (f32) (temp_f12_4 - 360.0f);
            }
            if (!((*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 0x20)) {
                temp_f0_5 = -(*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8));
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0xBC)) = temp_f0_5;
                (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB0)) = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0xB0)) + temp_f0_5);
                temp_f14_2 = (*(s32 *)((char *)(var_t0) + 0x4));
                temp_f2_7 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB0));
                temp_f12_5 = -temp_f14_2;
                if (temp_f2_7 < temp_f12_5) {
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB0)) = temp_f12_5;
                } else {
                    if (temp_f14_2 < temp_f2_7) {
                        var_f12_3 = temp_f14_2;
                    } else {
                        var_f12_3 = temp_f2_7;
                    }
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB0)) = var_f12_3;
                }
            }
        } else {
            temp_f2_8 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB0));
            if (temp_f2_8 > 0.0f) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0xBC)) = -1.0f;
            } else if (temp_f2_8 < 0.0f) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0xBC)) = 1.0f;
            }
            (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB0)) = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0xB0)) + (*(f32 *)((char *)(*(void **)&(arg0)) + 0xBC)));
            if (fabsf((*(s32 *)((char *)(*(void **)&(arg0)) + 0xB0))) < D_800A718C) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB0)) = 0.0f;
            }
        }
        (*(s16 *)((char *)(*(void **)&(arg0)) + 0xA4)) = (s16) ((*(s16 *)((char *)(*(void **)&(arg0)) + 0xA4)) + (*(s16 *)((char *)(*(void **)&(arg0)) + 0xA6)));
        temp_v1_3 = (*(s32 *)((char *)(var_t0) + 0x1));
        temp_v0_5 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA4));
        if (temp_v0_5 < (s32) temp_v1_3) {
            (*(s16 *)((char *)(*(void **)&(arg0)) + 0xA4)) = (s16) temp_v1_3;
        } else {
            temp_v1_4 = (*(s32 *)((char *)(var_t0) + 0x0));
            var_a0_2 = temp_v0_5;
            if ((s32) temp_v1_4 < temp_v0_5) {
                var_a0_2 = (s16) temp_v1_4;
            }
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA4)) = var_a0_2;
        }
    }
    var_v1_5 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 0x200;
    if (!((*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 1)) {
        if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xA8)) >= 0.0f) {
            temp_f2_9 = (*(s32 *)((char *)(var_t0) + 0x20));
            if (((*(s32 *)((char *)(sp6C) + 0x4)) == (*(s32 *)((char *)(*(void **)&(arg0)) + 0x94))) && (temp_f0_6 = (*(s32 *)((char *)(var_t0) + 0x18)), (temp_f0_6 < temp_f2_9)) && (-temp_f2_9 < temp_f0_6)) {
                (*(s32 *)((char *)(*(void **)&(arg0)) + 0x94)) = (s32) (*(s32 *)((char *)(sp6C) + 0x8));
                var_v1_5 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 0x200;
            } else {
                goto block_132;
            }
        } else {
            temp_f2_10 = (*(s32 *)((char *)(var_t0) + 0x20));
            if ((*(s32 *)((char *)(sp6C) + 0x8)) == (*(s32 *)((char *)(*(void **)&(arg0)) + 0x94))) {
                temp_f0_7 = (*(s32 *)((char *)(var_t0) + 0x18));
                if ((temp_f0_7 < temp_f2_10) && (-temp_f2_10 < temp_f0_7)) {
                    (*(s32 *)((char *)(*(void **)&(arg0)) + 0x94)) = (s32) (*(s32 *)((char *)(sp6C) + 0x4));
                }
            }
block_132:
            var_v1_5 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 0x200;
        }
    }
    if (var_v1_5 != 0) {
        temp_f2_11 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8));
        temp_f0_8 = (f32) D_800BE9E4;
        (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB4)) = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0xB4)) + (temp_f2_11 * temp_f0_8));
        (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB8)) = (f32) (temp_f2_11 + D_800A7194);
        if (D_800A7190 < (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB8))) {
            (*(f32 *)((char *)(*(void **)&(arg0)) + 0xB8)) = (f32) D_800A7190;
        }
        (*(f32 *)((char *)(*(void **)&(arg0)) + 0xBC)) = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0xBC)) - (D_800A7198 * temp_f0_8));
        if ((*(s32 *)((char *)(*(void **)&(arg0)) + 0xBC)) < 60.0f) {
            (*(s32 *)((char *)(*(void **)&(arg0)) + 0xBC)) = 60.0f;
        }
        spA8 = func_150AD78C((*(s32 *)((char *)(*(void **)&(arg0)) + 0xB4)), 0);
        temp_f2_12 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xBC));
        (*(f32 *)((char *)(*(void **)&(arg0)) + 0x98)) = (f32) ((temp_f2_12 * func_150AD780((*(f32 *)((char *)(*(void **)&(arg0)) + 0xB4)))) + D_800A719C);
        (*(f32 *)((char *)(*(void **)&(arg0)) + 0xA0)) = (f32) ((temp_f2_12 * spA8) + D_800A71A0);
        (*(f32 *)((char *)(*(void **)&(arg0)) + 0x9C)) = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0x9C)) - (100.0f / ((temp_f2_12 - 60.0f) + 4.0f)));
        if (((*(s32 *)((char *)(*(void **)&(arg0)) + 0x9C)) < D_800A71A4) || (D_800C35EA == 0) || (D_800C35E8 != 0xF)) {
            func_1516972C(arg0);
            return;
        }
        goto block_143;
    }
    spAC = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA8)) * D_800A71A8;
    spB0 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xAC)) * D_800A71A8;
    spB4 = (*(s32 *)((char *)(*(void **)&(arg0)) + 0xB0)) * D_800A71A8;
    spA8 = func_150AD78C(spAC, 0);
    spA4 = func_150AD78C(spB0);
    spA0 = func_150AD780(spAC);
    temp_f4 = spA0 * func_150AD780(spB0);
    spBC = -spA8;
    spB8 = spA0 * spA4;
    spC0 = temp_f4;
    temp_f2_13 = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0xA4)) * D_800BE9E4);
    (*(f32 *)((char *)(*(void **)&(arg0)) + 0x98)) = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0x98)) + (spB8 * temp_f2_13));
    (*(f32 *)((char *)(*(void **)&(arg0)) + 0x9C)) = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0x9C)) + (spBC * temp_f2_13));
    (*(f32 *)((char *)(*(void **)&(arg0)) + 0xA0)) = (f32) ((*(f32 *)((char *)(*(void **)&(arg0)) + 0xA0)) + (spC0 * temp_f2_13));
block_143:
    if (((*(s32 *)((char *)(*(void **)&(arg0)) + 0x0)) == 0x13) && ((*(s32 *)((char *)(D_800DDF60) + (*(s32 *)((char *)(*(void **)&(arg0)) + 0x90)))) == 0)) {
        func_10010F88(0x10, 0x7FFF, (s16) (random_u32() & 0x7F), 0, 0, (s32) (*(s16 *)((char *)(*(void **)&(arg0)) + 0x98)), (s32) (*(s16 *)((char *)(*(void **)&(arg0)) + 0x9C)), (s32) (*(s16 *)((char *)(*(void **)&(arg0)) + 0xA0)), 0x1F4, 0xFA0);
        (*(s32 *)((char *)(D_800DDF60) + (*(s32 *)((char *)(*(void **)&(arg0)) + 0x90)))) = (random_u32() & 0x3F) + 0x1E;
    }
    if (((*(s32 *)((char *)(*(void **)&(arg0)) + 0x92)) & 2) && (func_1510AEE0(&D_800D9C10, (*(s32 *)((char *)(*(void **)&(arg0)) + 0x98)), (*(s32 *)((char *)(*(void **)&(arg0)) + 0x9C)), (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA0)), D_800D9B20, D_800D9B1C, (*(s32 *)((char *)&(D_800D35E0) + 0x0)), (*(s32 *)((char *)&(D_800D35E0) + 0x4)), 0, 0) != 0) && ((D_800D2138 != 1) || (func_1510AEE0(&D_800D9C50, (*(s32 *)((char *)(*(void **)&(arg0)) + 0x98)), (*(s32 *)((char *)(*(void **)&(arg0)) + 0x9C)), (*(s32 *)((char *)(*(void **)&(arg0)) + 0xA0)), D_800D9B20, D_800D9B1C, (*(s32 *)((char *)&(D_800D35E0) + 0x0)), (*(s32 *)((char *)&(D_800D35E0) + 0x4)), 0, 0) != 0))) {
        func_1516972C(arg0);
    }
}

void func_1517685C(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    s32 temp_v1;
    u8 temp_v0;

    if ((*(s32 *)((char *)(D_800DDF5C) + (*(s32 *)((char *)(arg0) + 0x90)))) != 0) {
        (*(s32 *)((char *)(D_800DDF68) + (*(s32 *)((char *)(arg0) + 0xED)))) = 1;
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x91));
        switch (temp_v0) {                          /* irregular */
        case 0:
            if (func_150AD960((s32) gObjects[0].x_position, (s32) gObjects[0].z_position, (s16) (s32) (*(s32 *)((char *)(arg0) + 0x98)), (s16) (s32) (*(s32 *)((char *)(arg0) + 0xA0))) < 0x190) {
                (*(s32 *)((char *)(arg0) + 0x91)) = 1U;
                temp_f10 = (f32) (-1 - (random_u32() & 3));
                (*(s32 *)((char *)(arg0) + 0xA8)) = -8.0f;
                (*(s32 *)((char *)(arg0) + 0xB4)) = temp_f10;
                return;
            }
            temp_f0 = (*(s32 *)((char *)(arg0) + 0xCC));
            if (temp_f0 != 0.0f) {
                (*(f32 *)((char *)(arg0) + 0xA8)) = (f32) ((*(f32 *)((char *)(arg0) + 0xA8)) + temp_f0);
                if (temp_f0 < 0.0f) {
                    (*(f32 *)((char *)(arg0) + 0xAC)) = (f32) ((*(f32 *)((char *)(arg0) + 0xAC)) + (*(f32 *)((char *)(arg0) + 0xB8)));
                }
                temp_f0_2 = (*(s32 *)((char *)(arg0) + 0xA8));
                if (temp_f0_2 > 45.0f) {
                    (*(s32 *)((char *)(arg0) + 0xCC)) = -5.0f;
                } else if (((*(s32 *)((char *)(arg0) + 0xCC)) < 0.0f) && (temp_f0_2 > 25.0f) && ((random_u32() & 0xFF) < 0x33)) {
                    (*(s32 *)((char *)(arg0) + 0xCC)) = 5.0f;
                }
                if ((*(s32 *)((char *)(arg0) + 0xA8)) <= 10.0f) {
                    (*(s32 *)((char *)(arg0) + 0xCC)) = 0.0f;
                    return;
                }
            } else {
                temp_v1 = random_u32() & 0xFF;
                if (temp_v1 < 0x19) {
                    (*(s32 *)((char *)(arg0) + 0xCC)) = 5.0f;
                    if (temp_v1 < 0xD) {
                        (*(f32 *)((char *)(arg0) + 0xB8)) = (f32) ((random_u32() % 6U) - 3);
                        return;
                    }
                    (*(s32 *)((char *)(arg0) + 0xB8)) = 0.0f;
                    return;
                }
            }
            break;
        case 1:
            if ((300.0f + (*(s32 *)((char *)(arg0) + 0xC8))) <= (*(s32 *)((char *)(arg0) + 0x9C))) {
                (*(s32 *)((char *)(arg0) + 0x91)) = 2U;
                (*(s16 *)((char *)(arg0) + 0x92)) = (s16) ((*(s16 *)((char *)(arg0) + 0x92)) & 0xFFFE);
                (*(s16 *)((char *)(arg0) + 0x92)) = (s16) ((*(s16 *)((char *)(arg0) + 0x92)) | 4);
                (*(f32 *)((char *)(arg0) + 0xE4)) = (f32) ((f32) (random_u32() & 0x7F) + (300.0f + (*(f32 *)((char *)(arg0) + 0xC8))));
            }
            func_15175958((f32)(s32)(arg0), 0);
            return;
        default:
        case 2:
        case 3:
            if ((*(s32 *)((char *)(arg0) + 0x9C)) < (*(s32 *)((char *)(arg0) + 0xE4))) {
                (*(s32 *)((char *)(arg0) + 0xB4)) = -1.5f;
            } else if ((*(s32 *)((char *)(arg0) + 0xA8)) < 0.0f) {
                (*(s32 *)((char *)(arg0) + 0xB4)) = 1.5f;
            }
            func_15175958((f32)(s32)(arg0), 0);
            return;
        }
    } else {
        func_1516972C(arg0);
    }
}

void func_15176B84(void *arg0) {
    f32 var_f10;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_hi;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0xED));
    if (((*(s32 *)((char *)(D_800DDE80) + (temp_v1 * 0x14))) == 0) || ((*(s32 *)((char *)(D_800DDF78) + (temp_v1 * 4))) == 0)) {
        func_1516972C(arg0);
        return;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0xF0));
    if ((*(s32 *)((char *)(arg0) + 0xF1)) == 0) {
        if ((*(s32 *)((char *)(D_800DDF5C) + (*(s32 *)((char *)(arg0) + 0x90)))) == 0) {
            (*(s32 *)((char *)(arg0) + 0xF1)) = 1U;
        } else if (temp_v0 != 0xFF) {
            var_v0 = temp_v0 + (D_800BE9E4 * 4);
            if (var_v0 >= 0x100) {
                var_v0 = 0xFF;
            }
            (*(u8 *)((char *)(arg0) + 0xF0)) = (u8) var_v0;
        }
        goto block_16;
    }
    if (temp_v0 == 0) {
        func_1516972C(arg0);
        return;
    }
    var_v0_2 = temp_v0 - (D_800BE9E4 * 4);
    if (var_v0_2 < 0) {
        var_v0_2 = 0;
    }
    (*(u8 *)((char *)(arg0) + 0xF0)) = (u8) var_v0_2;
block_16:
    (*(s32 *)((char *)(D_800DDF68) + (*(s32 *)((char *)(arg0) + 0xED)))) = 1;
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x91));
    switch (temp_v0_2) {                            /* irregular */
    case 0:
        if (func_150AD960((s32) gObjects[0].x_position, (s32) gObjects[0].z_position, (s16) (s32) (*(s32 *)((char *)(arg0) + 0x98)), (s16) (s32) (*(s32 *)((char *)(arg0) + 0xA0))) < 0xC8) {
            (*(s32 *)((char *)(arg0) + 0x91)) = 2U;
            temp_hi = random_u32() % (u32) (*(u32 *)((char *)(arg0) + 0xDA));
            var_f10 = (f32) temp_hi;
            if ((s32) temp_hi < 0) {
                var_f10 += 4294967296.0f;
            }
            (*(f32 *)((char *)(arg0) + 0xE4)) = (f32) (var_f10 + (f32) (*(f32 *)((char *)(arg0) + 0xD2)));
            (*(s32 *)((char *)(arg0) + 0x94)) = (s32) *(&D_800DDE88 + ((*(s32 *)((char *)(arg0) + 0xED)) * 0x14));
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x94)) = (s32) *(&D_800DDE84 + ((*(s32 *)((char *)(arg0) + 0xED)) * 0x14));
        return;
    case 4:
        if ((*(s32 *)((char *)(arg0) + 0x9C)) < (*(s32 *)((char *)(arg0) + 0xC8))) {
            func_1516972C(arg0);
            return;
        }
    default:
    case 2:
    case 3:
        func_15175958((f32)(s32)(arg0), 0);
        return;
    }
}

void *func_15176DF0(void *arg0, void *arg1, s32 arg2) {
    f32 sp94;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s8 sp33;
    u8 temp_a2;
    u8 temp_v0_2;
    u8 var_v0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;
    void *temp_v0_3;

    temp_v0_2 = (*(s32 *)((char *)(arg1) + 0xED));
    if (((*(s32 *)((char *)(D_800DDE80) + (temp_v0_2 * 0x14))) == 0) || ((*(s32 *)((char *)(D_800DDF78) + (temp_v0_2 * 4))) == 0)) {
        return arg0;
    }
    func_150A8050(&sp54, 0, (*(s32 *)((char *)(arg1) + 0xAC)), 0);
    func_150A8050(&sp94, (*(s32 *)((char *)(arg1) + 0xA8)), 0, (*(s32 *)((char *)(arg1) + 0xB0)));
    func_150A7A48(&sp94, &sp54, &sp54);
    sp84 = (*(s32 *)((char *)(arg1) + 0x98));
    sp88 = (*(s32 *)((char *)(arg1) + 0x9C));
    sp8C = (*(s32 *)((char *)(arg1) + 0xA0));
    sp54 *= (*(s32 *)((char *)(arg1) + 0xC0));
    sp58 *= (*(s32 *)((char *)(arg1) + 0xC0));
    sp5C *= (*(s32 *)((char *)(arg1) + 0xC0));
    sp64 *= (*(s32 *)((char *)(arg1) + 0xC0));
    sp68 *= (*(s32 *)((char *)(arg1) + 0xC0));
    sp6C *= (*(s32 *)((char *)(arg1) + 0xC0));
    sp74 *= (*(s32 *)((char *)(arg1) + 0xC0));
    sp78 *= (*(s32 *)((char *)(arg1) + 0xC0));
    sp7C *= (*(s32 *)((char *)(arg1) + 0xC0));
    guMtxF2L(&sp54, (char *)(arg1) + (D_800BE9C0 << 6) + 0x10);
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDA380003;
    temp_s1 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x10);
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xDB060004;
    temp_s1_2 = (char *)(temp_s1) + 8;
    (*(s32 *)((char *)(temp_s1) + 0x4)) = (s32) (*(s32 *)((char *)(arg1) + 0x94));
    (*(s32 *)((char *)(temp_s1) + 0x8)) = 0xE7000000;
    (*(s32 *)((char *)(temp_s1_2) + 0x4)) = 0;
    var_v0 = (*(s32 *)((char *)(arg1) + 0xEC));
    temp_a2 = *(&D_800A7170 + (((u32) (*(u32 *)((char *)(arg1) + 0xE8)) >> 5) & 3));
    if (var_v0 != temp_a2) {
        if ((s32) var_v0 < (s32) temp_a2) {
            var_v0 += D_800BE9E4 * 4;
            if ((s32) temp_a2 < (s32) var_v0) {
                var_v0 = temp_a2;
            }
        } else {
            var_v0 -= D_800BE9E4 * 4;
            if ((s32) var_v0 < 0) {
                var_v0 = 0;
            }
        }
        (*(s32 *)((char *)(arg1) + 0xEC)) = var_v0;
    }
    sp4C = (s32) var_v0;
    sp48 = (s32) var_v0;
    sp33 = 0;
    sp50 = (s32) var_v0;
    temp_v0_3 = func_15142FBC((char *)(temp_s1_2) + 8, 0x82CA0, 0x504A50, &sp33);
    (*(s32 *)((char *)(temp_v0_3) + 0x0)) = 0xFB000000;
    (*(s32 *)((char *)(temp_v0_3) + 0x4)) = (s32) (((sp50 & 0xFF) << 8) | (sp48 << 0x18) | ((sp4C & 0xFF) << 0x10) | (*(s32 *)((char *)(arg1) + 0xF0)));
    (*(s32 *)((char *)(temp_v0_3) + 0x8)) = 0xDE000000;
    temp_v0 = (char *)(temp_v0_3) + 0x10;
    (*(s32 *)((char *)(temp_v0) - 0x4)) = (s32) *(&D_800DDE8C + ((*(s32 *)((char *)(arg1) + 0xED)) * 0x14));
    return temp_v0;
}

void *func_151770C8(void *arg0, void *arg1, s32 arg2) {
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp50;
    u8 temp_v0;
    void *temp_s1;
    void *temp_s1_2;
    void *var_s1;

    var_s1 = arg0;
    if (func_1510AEE0((arg2 << 6) + &D_800D9C10, (*(s32 *)((char *)(arg1) + 0x98)), (*(s32 *)((char *)(arg1) + 0x9C)), (*(s32 *)((char *)(arg1) + 0xA0)), D_800D9B20, 4000.0f, (*(s32 *)((char *)&(D_800D35E0) + 0x0)), (*(s32 *)((char *)&(D_800D35E0) + 0x4)), 0, 0) == 0) {
        temp_v0 = (*(s32 *)((char *)(arg1) + 0x91));
        switch (temp_v0) {                          /* irregular */
        case 0:
            func_150A8050(&sp50, (*(s32 *)((char *)(arg1) + 0xA8)), (*(s32 *)((char *)(arg1) + 0xAC)), (*(s32 *)((char *)(arg1) + 0xB0)));
            sp80 = (*(s32 *)((char *)(arg1) + 0x98));
            sp84 = (*(s32 *)((char *)(arg1) + 0x9C));
            sp88 = (*(s32 *)((char *)(arg1) + 0xA0));
            guMtxF2L(&sp50, (char *)(arg1) + (D_800BE9C0 << 6) + 0x10);
            (*(s32 *)((char *)(var_s1) + 0x0)) = 0xDA380003;
            temp_s1 = (char *)(var_s1) + 8;
            (*(s32 *)((char *)(var_s1) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x10);
            (*(s32 *)((char *)(var_s1) + 0x8)) = 0xDB060004;
            temp_s1_2 = (char *)(temp_s1) + 8;
            (*(s32 *)((char *)(temp_s1) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800DDE80) + 0xCC));
            (*(s32 *)((char *)(temp_s1) + 0x8)) = 0xDE000000;
            var_s1 = (char *)(temp_s1_2) + 8;
            (*(s32 *)((char *)(temp_s1_2) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800DDE80) + 0xD4));
            break;
        default:
        case 1:
        case 2:
        case 3:
            var_s1 = func_15176DF0(var_s1, arg1, arg2);
            break;
        }
    }
    return var_s1;
}

void func_1517725C(s32 arg0) {
    f32 sp28;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_a0;
    s32 temp_f16;
    s32 temp_f18;
    s32 temp_f6;
    s32 temp_f8;
    s32 temp_t6;
    void *temp_s0;
    void *temp_s1;

    temp_t6 = arg0 & 0xFF;
    temp_s0 = (temp_t6 * 0x38) + &D_8008D0B0;
    temp_s1 = *(&D_800DDE88 + (temp_t6 * 0x14));
    temp_f2 = func_150AD78C((*(s32 *)((char *)(temp_s0) + 0x24)) * D_800A71AC, temp_t6) * (*(s32 *)((char *)(temp_s0) + 0x28));
    (*(s32 *)((char *)(temp_s0) + 0x18)) = temp_f2;
    temp_f20 = temp_f2 * D_800A71B0;
    sp28 = func_150AD78C(temp_f20);
    temp_f2_2 = (*(s32 *)((char *)(temp_s0) + 0x30));
    temp_f18 = (s32) (temp_f2_2 * func_150AD780(temp_f20));
    temp_f8 = (s32) (temp_f2_2 * sp28);
    temp_a0 = -temp_f18;
    (*(s16 *)((char *)(temp_s1) + 0xA0)) = (s16) temp_a0;
    (*(s16 *)((char *)(temp_s1) + 0xB0)) = (s16) temp_a0;
    (*(s16 *)((char *)(temp_s1) + 0x110)) = (s16) temp_f18;
    (*(s16 *)((char *)(temp_s1) + 0x120)) = (s16) temp_f18;
    (*(s16 *)((char *)(temp_s1) + 0x112)) = (s16) temp_f8;
    (*(s16 *)((char *)(temp_s1) + 0x122)) = (s16) temp_f8;
    (*(s16 *)((char *)(temp_s1) + 0xA2)) = (s16) temp_f8;
    (*(s16 *)((char *)(temp_s1) + 0xB2)) = (s16) temp_f8;
    temp_f2_3 = func_150AD78C(((*(s32 *)((char *)(temp_s0) + 0x24)) - 30.0f) * D_800A71B4, temp_a0) * (*(s32 *)((char *)(temp_s0) + 0x28));
    (*(s32 *)((char *)(temp_s0) + 0x18)) = temp_f2_3;
    temp_f20_2 = temp_f2_3 * D_800A71B8;
    sp28 = func_150AD78C(temp_f20_2);
    temp_f2_4 = (*(s32 *)((char *)(temp_s0) + 0x34));
    temp_f16 = (s32) (temp_f2_4 * func_150AD780(temp_f20_2));
    temp_f6 = (s32) (temp_f2_4 * sp28);
    (*(s16 *)((char *)(temp_s1) + 0xE0)) = (s16) -temp_f16;
    (*(s16 *)((char *)(temp_s1) + 0x130)) = (s16) temp_f16;
    (*(s16 *)((char *)(temp_s1) + 0xE2)) = (s16) temp_f6;
    (*(s16 *)((char *)(temp_s1) + 0x132)) = (s16) temp_f6;
    (*(f32 *)((char *)(temp_s0) + 0x24)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x24)) + (*(f32 *)((char *)(temp_s0) + 0x1C)));
    temp_f12 = (*(s32 *)((char *)(temp_s0) + 0x24));
    if (temp_f12 >= 360.0f) {
        (*(f32 *)((char *)(temp_s0) + 0x24)) = (f32) (temp_f12 - 360.0f);
    }
}
