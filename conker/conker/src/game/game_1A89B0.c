/**
 * Auto-decompiled from asm/1A89B0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 *allocate_memory();                 /* extern */
void * func_10004074();                               /* extern */
void * func_10006240();                     /* extern */
s32 func_150AD9A0();                   /* extern */
void *func_1510CDB8();               /* extern */
void * func_15170500();   /* extern */
s32 func_151EF610();                                /* extern */
extern s32 D_8008CEB4;
extern s32 D_8008CEBC;
extern s32 D_8008CF00;
extern s32 D_8008CFA0;
extern s32 D_80095CE0;
extern s32 D_80095CE1;
extern s32 D_80095CE2;
extern f32 D_800A7240;
extern f32 D_800A7244;
extern f32 D_800A7248;
extern s16 D_800DD470;
extern s16 D_800DD472;
extern s16 D_800DD474;
extern s32 D_800DD4E0;
extern s32 D_800DD548;
extern s32 D_800DD5B0;
extern s32 D_800DDA98;
extern u8 D_800DDA9C;
extern s32 D_800DDAA8;
extern u8 D_800DDAAC;
extern s32 D_800DDAB8;
extern u8 D_800DDABC;
extern s32 D_800DDB80;
extern s32 D_800DDBC0;
extern u8 D_800DDBD0;
extern s32 D_800DDBE0;
extern s32 D_800DDBF0;
extern s32 D_800DDC10;
extern s32 D_800DDC40;
extern s32 D_800DDC7C;
extern s32 D_800DDC80;
extern s32 D_800DDC90;
extern s32 D_800DDD18;
extern s32 D_800DDD24;
extern s32 D_800DDD28;
extern u32 D_800DDD58;
void func_1517B89C();

s32 func_1517B500(void *arg0, void *arg1, s32 *arg2, void * arg3) {
    s32 sp2C;
    s32 sp24;
    s32 temp_t1;
    s32 temp_t8;
    s32 temp_v1;

    temp_t8 = (s32) (*arg2 * 3) / 2;
    *arg2 = temp_t8;
    temp_t1 = *(&D_80095CE1 + ((*(s32 *)((char *)(arg0) + 0x8)) * 0xA)) << 8;
    if (temp_t8 >= temp_t1) {
        *arg2 = temp_t8 - temp_t1;
    }
    (*(s16 *)((char *)(arg1) + 0x0)) = (s16) (*(s16 *)((char *)(arg0) + 0x0));
    (*(s16 *)((char *)(arg1) + 0x2)) = (s16) (*(s16 *)((char *)(arg0) + 0x2));
    (*(s16 *)((char *)(arg1) + 0x4)) = (s16) (*(s16 *)((char *)(arg0) + 0x4));
    temp_v1 = 0x29 - (*(s32 *)((char *)(arg0) + 0xD));
    if (temp_v1 == 0) {
        (*(s8 *)((char *)(arg0) + 0xD)) = (s8) (((*(s8 *)((char *)(arg0) + 0xD)) - (func_151EF610() % 8)) + 4);
    } else if (temp_v1 < 0) {
        sp2C = temp_v1;
        sp24 = func_151EF610();
        (*(s8 *)((char *)(arg0) + 0xD)) = (s8) ((((*(s8 *)((char *)(arg0) + 0xD)) - ((s32) (func_151EF610() % (s32) -temp_v1) >> 1)) - (sp24 % 8)) + 4);
    } else {
        sp2C = temp_v1;
        sp24 = func_151EF610();
        (*(s8 *)((char *)(arg0) + 0xD)) = (s8) (((*(s8 *)((char *)(arg0) + 0xD)) + ((s32) (func_151EF610() % temp_v1) >> 1) + (sp24 % 8)) - 4);
    }
    (*(s16 *)((char *)(arg1) + 0x0)) = (s16) (*(s16 *)((char *)(arg0) + 0x0));
    (*(s16 *)((char *)(arg1) + 0x2)) = (s16) (*(s16 *)((char *)(arg0) + 0x2));
    (*(s16 *)((char *)(arg1) + 0x4)) = (s16) (*(s16 *)((char *)(arg0) + 0x4));
    return 0;
}

s32 func_1517B6E8(void *arg0, void *arg1, s32 *arg2, u8 *arg3) {
    s32 temp_t1;
    s32 temp_v0;
    u8 temp_t0;

    temp_v0 = *arg2;
    if (temp_v0 >= 0x600) {
        (*(s16 *)((char *)(arg1) + 0x2)) = (s16) (((temp_v0 >> 6) + (*(s16 *)((char *)(arg0) + 0x2))) - 0x18);
        (*(s16 *)((char *)(arg1) + 0x0)) = (s16) ((((s32) *arg2 >> 8) + (*(s16 *)((char *)(arg0) + 0x0))) - 6);
        temp_t0 = *arg3;
        temp_t1 = (s32) ((s32) (temp_t0 << 7) / (s32) (((s32) *arg2 >> 6) - 0x17)) >> 4;
        if (temp_t1 < (s32) temp_t0) {
            *arg3 = (u8) temp_t1;
        }
        *arg2 = 0x600;
    } else {
        (*(s16 *)((char *)(arg1) + 0x0)) = (s16) (*(s16 *)((char *)(arg0) + 0x0));
        (*(s16 *)((char *)(arg1) + 0x2)) = (s16) (*(s16 *)((char *)(arg0) + 0x2));
    }
    (*(s16 *)((char *)(arg1) + 0x4)) = (s16) (*(s16 *)((char *)(arg0) + 0x4));
    return 0;
}

s32 func_1517B7A8(void *arg0, void *arg1, s32 *arg2, void * arg3) {
    s32 temp_v0;

    temp_v0 = *arg2;
    if (temp_v0 >= 0x300) {
        if (temp_v0 >= 0x501) {
            *arg2 = temp_v0 - 0x200;
        } else {
            *arg2 = 0x300;
        }
    }
    (*(s16 *)((char *)(arg1) + 0x0)) = (s16) (*(s16 *)((char *)(arg0) + 0x0));
    (*(s16 *)((char *)(arg1) + 0x2)) = (s16) (*(s16 *)((char *)(arg0) + 0x2));
    (*(s16 *)((char *)(arg1) + 0x4)) = (s16) (*(s16 *)((char *)(arg0) + 0x4));
    return 0;
}

s32 func_1517B7F8(void *arg0, void *arg1, s32 *arg2, void * arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v0 = *arg2;
    if (temp_v0 >= 0xD00) {
        return 1;
    }
    temp_v1 = temp_v0 - 0x600;
    if (temp_v0 >= 0x100) {
        (*(s16 *)((char *)(arg1) + 0x2)) = (s16) ((*(s16 *)((char *)(arg0) + 0x2)) + ((s32) (0x190000 - (temp_v1 * temp_v1)) / 7680));
        temp_v0_2 = *arg2;
        if (temp_v0_2 >= 0x200) {
            if (temp_v0_2 >= 0xA01) {
                *arg2 = temp_v0_2 - 0x800;
            } else {
                *arg2 = 0x200;
            }
        }
    } else {
        (*(s16 *)((char *)(arg1) + 0x2)) = (s16) (*(s16 *)((char *)(arg0) + 0x2));
    }
    (*(s16 *)((char *)(arg1) + 0x0)) = (s16) (*(s16 *)((char *)(arg0) + 0x0));
    (*(s16 *)((char *)(arg1) + 0x4)) = (s16) (*(s16 *)((char *)(arg0) + 0x4));
    return 0;
}

void func_1517B89C(s32 arg0, s32 arg1) {
    s32 sp64;
    void * sp4C;
    void * sp3C;
    s16 *var_t2;
    s16 *var_v0;
    s16 *var_v1;
    s16 temp_a1;
    s16 temp_a1_2;
    s32 temp_t5;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    void *temp_t8;
    void *temp_t9;

    var_a2 = arg0;
    if (arg0 < arg1) {
        var_a0 = arg1;
        temp_t5 = arg1 * 0xE;
        var_t0 = arg0 * 0xE;
        var_a3 = arg1 * 0xE;
loop_2:
        if (D_8008CEB4 == 0) {
            var_t2 = D_800DDD18 + temp_t5;
            var_v1 = D_800DDD18 + var_t0;
            temp_a1 = *var_t2;
            var_v0 = D_800DDD18 + var_a3;
            if ((*var_v1 < temp_a1) && (var_a2 < arg1)) {
loop_5:
                var_a2 += 1;
                var_t0 += 0xE;
                var_v1 += 0xE;
                if ((*(s32 *)((char *)(var_v1) + 0xE)) < temp_a1) {
                    if (var_a2 < arg1) {
                        goto loop_5;
                    }
                }
            }
            if ((temp_a1 < *var_v0) && (arg0 < var_a0)) {
loop_9:
                var_a0 -= 1;
                var_a3 -= 0xE;
                var_v0 -= 0xE;
                if (temp_a1 < (*(s32 *)((char *)(var_v0) - 0xE))) {
                    if (arg0 >= var_a0) {

                    } else {
                        goto loop_9;
                    }
                }
            }
        } else {
            var_t2 = D_800DDD18 + temp_t5;
            var_v1 = D_800DDD18 + var_t0;
            temp_a1_2 = (*(s32 *)((char *)(var_t2) + 0x4));
            var_v0 = D_800DDD18 + var_a3;
            if (((*(s32 *)((char *)(var_v1) + 0x4)) < temp_a1_2) && (var_a2 < arg1)) {
loop_14:
                var_a2 += 1;
                var_t0 += 0xE;
                var_v1 += 0xE;
                if ((*(s32 *)((char *)(var_v1) + 0x12)) < temp_a1_2) {
                    if (var_a2 < arg1) {
                        goto loop_14;
                    }
                }
            }
            if ((temp_a1_2 < (*(s32 *)((char *)(var_v0) + 0x4))) && (arg0 < var_a0)) {
loop_18:
                var_a0 -= 1;
                var_a3 -= 0xE;
                var_v0 -= 0xE;
                if (temp_a1_2 < (*(s32 *)((char *)(var_v0) - 0xA))) {
                    if (arg0 < var_a0) {
                        goto loop_18;
                    }
                }
            }
        }
        var_t0 += 0xE;
        if (var_a2 < var_a0) {
            var_a2 += 1;
            var_a0 -= 1;
            (*(s32 *)((char *)&(sp4C) + 0x0)) = (s32) (s32) (*(s32 *)((char *)(var_v1) + 0x0));
            (*(s32 *)((char *)&(sp4C) + 0x4)) = (s32) (s32) (*(s32 *)((char *)(var_v1) + 0x4));
            (*(s32 *)((char *)&(sp4C) + 0x8)) = (s32) (s32) (*(s32 *)((char *)(var_v1) + 0x8));
            (*(u16 *)((char *)&(sp4C) + 0xC)) = (u16) (*(u16 *)((char *)(var_v1) + 0xC));
            (*(s32 *)((char *)(var_v1) + 0x0)) = (s32) (*(s32 *)((char *)(var_v0) + 0x0));
            (*(s32 *)((char *)(var_v1) + 0x4)) = (s32) (*(s32 *)((char *)(var_v0) + 0x4));
            (*(s32 *)((char *)(var_v1) + 0x8)) = (s32) (*(s32 *)((char *)(var_v0) + 0x8));
            (*(u16 *)((char *)(var_v1) + 0xC)) = (u16) (*(u16 *)((char *)(var_v0) + 0xC));
            temp_t8 = D_800DDD18 + var_a3;
            (*(s32 *)((char *)(temp_t8) + 0x0)) = (s32) (*(s32 *)((char *)&(sp4C) + 0x0));
            (*(s32 *)((char *)(temp_t8) + 0x4)) = (s32) (*(s32 *)((char *)&(sp4C) + 0x4));
            (*(s32 *)((char *)(temp_t8) + 0x8)) = (s32) (*(s32 *)((char *)&(sp4C) + 0x8));
            (*(u16 *)((char *)(temp_t8) + 0xC)) = (u16) (*(u16 *)((char *)&(sp4C) + 0xC));
            var_a3 -= 0xE;
            goto loop_2;
        }
        (*(s32 *)((char *)&(sp3C) + 0x0)) = (s32) (s32) (*(s32 *)((char *)(var_v1) + 0x0));
        (*(s32 *)((char *)&(sp3C) + 0x4)) = (s32) (s32) (*(s32 *)((char *)(var_v1) + 0x4));
        (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (s32) (*(s32 *)((char *)(var_v1) + 0x8));
        (*(u16 *)((char *)&(sp3C) + 0xC)) = (u16) (*(u16 *)((char *)(var_v1) + 0xC));
        (*(s32 *)((char *)(var_v1) + 0x0)) = (s32) (*(s32 *)((char *)(var_t2) + 0x0));
        (*(s32 *)((char *)(var_v1) + 0x4)) = (s32) (*(s32 *)((char *)(var_t2) + 0x4));
        (*(s32 *)((char *)(var_v1) + 0x8)) = (s32) (*(s32 *)((char *)(var_t2) + 0x8));
        (*(u16 *)((char *)(var_v1) + 0xC)) = (u16) (*(u16 *)((char *)(var_t2) + 0xC));
        temp_t9 = D_800DDD18 + temp_t5;
        (*(s32 *)((char *)(temp_t9) + 0x0)) = (s32) (*(s32 *)((char *)&(sp3C) + 0x0));
        (*(s32 *)((char *)(temp_t9) + 0x4)) = (s32) (*(s32 *)((char *)&(sp3C) + 0x4));
        (*(s32 *)((char *)(temp_t9) + 0x8)) = (s32) (*(s32 *)((char *)&(sp3C) + 0x8));
        (*(u16 *)((char *)(temp_t9) + 0xC)) = (u16) (*(u16 *)((char *)&(sp3C) + 0xC));
        sp64 = var_a2;
        func_1517B89C(arg0, var_a2 - 1);
        func_1517B89C(var_a2 + 1, arg1);
    }
}

s32 *func_1517BBAC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 spD4;
    s32 spBC;
    s32 spB8;
    s32 spB4;
    s16 spAE;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    s32 sp90;
    void * **sp6C;
    s32 sp68;                                       /* compiler-managed */
    s32 sp64;
    u8 *sp60;
    s32 sp58;
    s32 sp54;
    void * **temp_v1_4;
    void * **temp_v1_5;
    void * **var_v0_3;
    void * *temp_v0_6;
    void * *temp_v0_8;
    void * *temp_v0_9;
    f32 temp_f12;
    f32 temp_ret;
    s16 *temp_v0_16;
    s16 *var_s0_2;
    s16 *var_v0_4;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s16 temp_a1_3;
    s16 temp_a2_3;
    s16 temp_a3;
    s16 temp_ra;
    s16 temp_s0_10;
    s16 temp_s1_4;
    s16 temp_s2;
    s16 temp_s2_3;
    s16 temp_s3;
    s16 temp_s5;
    s16 temp_t0_2;
    s16 temp_t1;
    s16 temp_t6;
    s16 temp_v0_13;
    s16 temp_v0_14;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1_10;
    s16 temp_v1_11;
    s16 temp_v1_12;
    s16 temp_v1_7;
    s16 temp_v1_8;
    s16 temp_v1_9;
    s16 var_t7;
    s32 (*temp_v0_11)(s32, void *, s32 *, void *);
    s32 *temp_v0;
    s32 *temp_v1_2;
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_hi;
    s32 temp_s0_2;
    s32 temp_s0_9;
    s32 temp_s6;
    s32 temp_t7;
    s32 temp_t7_3;
    s32 temp_t7_4;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_v0_15;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1_3;
    s32 temp_v1_6;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_3;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_t0;
    s32 var_t5;
    s32 var_t5_2;
    s32 var_t5_3;
    s32 var_v0_2;
    s8 temp_t6_2;
    u16 temp_s0_3;
    u16 temp_s2_2;
    u32 temp_hi_2;
    u32 temp_t7_2;
    u32 var_s2_2;
    u32 var_s6_2;
    u32 var_t5_4;
    u8 *temp_a2_2;
    u8 *temp_t0;
    u8 *var_s3_2;
    u8 temp_a0_4;
    u8 temp_v0_10;
    u8 temp_v0_12;
    void *temp_a0_3;
    void *temp_s0;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_v0_17;
    void *temp_v0_18;
    void *temp_v0_19;
    void *temp_v0_7;
    void *temp_v1;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *var_s0_3;

    D_800DDD58 = 0;
    spB8 = 1;
    temp_s2 = arg0 + arg3;
    temp_s3 = arg0 - arg3;
    temp_s5 = arg2 + arg3;
    temp_t1 = arg2 - arg3;
    temp_s6 = D_800DDD20 - 1;
    spB4 = 1;
    spAC = temp_s3;
    spAE = temp_s2;
    spA8 = temp_t1;
    spAA = temp_s5;
    var_s0 = temp_s6;
    var_s1 = 0;
    var_s4 = 0;
    if (((arg4 > 45.0f) && (arg4 < 135.0f)) || ((arg4 > 225.0f) && (arg4 < D_800A7240))) {
        spB4 = 0;
        if (arg4 > 180.0f) {
            spB8 = -1;
        }
    } else if ((arg4 > 90.0f) && (arg4 < 270.0f)) {
        spB8 = -1;
    }
    if (spB4 != D_8008CEB4) {
        D_8008CEB4 = spB4;
        sp64 = (s32) temp_t1;
        func_1517B89C((s32) arg4, 0);
    }
    if (var_s0 >= 0) {
loop_13:
        temp_t7 = (s32) (var_s1 + var_s0) / 2;
        var_s4 = temp_t7;
        temp_v1 = D_800DDD18 + (temp_t7 * 0xE);
        if (spB4 == 0) {
            temp_v0_2 = (*(s32 *)((char *)(temp_v1) + 0x0));
            if (spB8 == 1) {
                if (temp_s3 < temp_v0_2) {
                    var_s0 = temp_t7 - 1;
                    goto block_39;
                }
                if (temp_v0_2 < temp_s3) {
                    var_s1 = var_s4 + 1;
                    goto block_39;
                }
                if (temp_s3 == temp_v0_2) {

                } else {
                    goto block_39;
                }
            } else {
                if (temp_s2 < temp_v0_2) {
                    var_s0 = var_s4 - 1;
                    goto block_39;
                }
                if (temp_v0_2 < temp_s2) {
                    var_s1 = var_s4 + 1;
                    goto block_39;
                }
                if (temp_s2 == temp_v0_2) {

                } else {
                    goto block_39;
                }
            }
        } else {
            temp_v0_3 = (*(s32 *)((char *)(temp_v1) + 0x4));
            if (spB8 == 1) {
                if (temp_t1 < temp_v0_3) {
                    var_s0 = var_s4 - 1;
                    goto block_39;
                }
                if (temp_v0_3 < temp_t1) {
                    var_s1 = var_s4 + 1;
                    goto block_39;
                }
                if (temp_t1 == temp_v0_3) {

                } else {
                    goto block_39;
                }
            } else {
                if (temp_s5 < temp_v0_3) {
                    var_s0 = var_s4 - 1;
                    goto block_39;
                }
                if (temp_v0_3 < temp_s5) {
                    var_s1 = var_s4 + 1;
                    goto block_39;
                }
                if (temp_s5 != temp_v0_3) {
block_39:
                    if (var_s0 >= var_s1) {
                        goto loop_13;
                    }
                }
            }
        }
    }
    var_v0 = &D_800DDC40;
    do {
        var_v0 += 4;
        (*(s32 *)((char *)(var_v0) - 0x4)) = 0x7FFF;
    } while ((u32) var_v0 < (u32) &D_800DDC7C);
    if (((spB4 == 0) && (((spB8 == 1) && (var_s4 < D_800DDD20) && (var_s1_2 = var_s4 * 0xE, (((*(s32 *)((char *)(D_800DDD18) + var_s1_2)) < temp_s2) != 0))) || ((spB8 == -1) && (var_s4 >= 0) && (var_s1_2 = var_s4 * 0xE, ((temp_s3 < (*(s32 *)((char *)(D_800DDD18) + var_s1_2))) != 0))))) || ((spB4 != 0) && (((spB8 == 1) && (var_s4 < D_800DDD20) && (var_s1_2 = var_s4 * 0xE, (((*(s32 *)((char *)((D_800DDD18 + var_s1_2)) + 0x4)) < temp_s5) != 0))) || ((spB8 == -1) && (var_s4 >= 0) && (var_s1_2 = var_s4 * 0xE, var_v0 = &D_800DDD20, ((temp_t1 < (*(s32 *)((char *)((D_800DDD18 + var_s1_2)) + 0x4))) != 0)))))) {
        if ((u32) D_800DDD20 < (u32) D_800DDD0C) {
            var_s2 = D_800DDD20;
        } else {
            var_s2 = (s32) D_800DDD0C;
        }
        sp64 = (s32) temp_t1;
        spD4 = var_s4;
        temp_v0 = allocate_memory(var_s2 << 6, 4, 2, 0);
        (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) = temp_v0;
        var_t5 = var_s4;
        if (temp_v0 == NULL) {
            return temp_v0;
        }
        var_s2_2 = 0;
        if (D_800DDD0C != 0) {
            if ((spB4 != 0) || (((spB8 != 1) || (var_s4 >= D_800DDD20) || (var_s3 = var_t5 * 0xE, var_s0_2 = D_800DDD18 + var_s3, ((*var_s0_2 < spAE) == 0))) && ((spB8 != -1) || (var_s4 < 0) || (var_s3 = var_t5 * 0xE, var_s0_2 = D_800DDD18 + var_s3, ((spAC < *var_s0_2) == 0))))) {
                if (spB4 != 0) {
                    if ((spB8 != 1) || (var_s4 >= D_800DDD20) || (var_s3 = var_t5 * 0xE, var_s0_2 = D_800DDD18 + var_s3, (((*(s32 *)((char *)(var_s0_2) + 0x4)) < spAA) == 0))) {
                        if ((spB8 == -1) && (var_s4 >= 0) && (temp_t1 < (*(s32 *)((char *)((D_800DDD18 + var_s1_2)) + 0x4)))) {
                            var_s3 = var_t5 * 0xE;
                            var_s0_2 = D_800DDD18 + var_s3;
                            goto loop_78;
                        }
                    } else {
                        goto loop_78;
                    }
                }
            } else {
loop_78:
                spD4 = var_t5;
                temp_v0_4 = func_150AD9A0((*(s32 *)((char *)(var_s0_2) + 0x0)) - arg0, (*(s32 *)((char *)(var_s0_2) + 0x2)) - arg1, (*(s32 *)((char *)(var_s0_2) + 0x4)) - arg2);
                var_t5_2 = var_t5;
                var_s6 = temp_v0_4;
                if (temp_v0_4 < arg3) {
                    temp_s0 = D_800DDD18 + var_s3;
                    temp_t8 = (*(s32 *)((char *)(temp_s0) + 0x6)) & 0xF;
                    temp_v1_2 = &(&D_800DDC40)[temp_t8];
                    sp68 = temp_t8 * 4;
                    if ((u32) temp_v0_4 < (u32) *temp_v1_2) {
                        *temp_v1_2 = temp_v0_4;
                    }
                    spD4 = var_t5_2;
                    temp_v0_5 = func_150AD9A0((*(s32 *)((char *)(temp_s0) + 0x0)) - arg5, (*(s32 *)((char *)(temp_s0) + 0x2)) - arg6, (*(s32 *)((char *)(temp_s0) + 0x4)) - arg7);
                    if (temp_v0_5 >= 0x8D) {
                        temp_v1_3 = var_s2_2 * 4;
                        sp54 = temp_v1_3 * 0x10;
                        sp58 = temp_v1_3;
                        if (temp_v0_5 < 0xF0) {
                            var_s6 = arg3 - ((s32) ((arg3 - var_s6) * (temp_v0_5 - 0x8C)) / 100);
                        }
                        temp_a0 = temp_t8 * 0x1A;
                        temp_v1_4 = &(&D_800DD478)[temp_a0];
                        temp_v0_6 = *temp_v1_4;
                        sp64 = temp_a0;
                        if (temp_v0_6 == NULL) {
                            temp_s1 = (temp_t8 * 0x10) + &D_800DDA90;
                            temp_t0 = temp_t8 + &D_800DDBC0;
                            if ((*(s32 *)((char *)(temp_s1) + 0x0)) != 0) {
                                temp_v0_7 = (*temp_t0 * 0xA) + &D_80095CE0;
                                sp6C = temp_v1_4;
                                sp60 = temp_t0;
                                spD4 = var_t5_2;
                                temp_s0_2 = (*(s32 *)((char *)(temp_v0_7) + 0x1)) * (*(s32 *)((char *)(temp_v0_7) + 0x2));
                                temp_v0_8 = func_10003C6C((*(s32 *)((char *)(temp_s1) + 0x4)), 1, 2, 1, 0);
                                (*(s32 *)((char *)(temp_s1) + 0x8)) = temp_v0_8;
                                if (temp_v0_8 != NULL) {
                                    sp6C = temp_v1_4;
                                    spD4 = var_t5_2;
                                    temp_v0_9 = func_10003C6C(temp_s0_2, 4, 1, 0, 0);
                                    *temp_v1_4 = temp_v0_9;
                                    if (temp_v0_9 != NULL) {
                                        spD4 = var_t5_2;
                                        func_10004514((*(s32 *)((char *)(temp_s1) + 0x0)), (*(s32 *)((char *)(temp_s1) + 0x8)), (*(s32 *)((char *)(temp_s1) + 0x4)), 1);
                                        (*(s32 *)((char *)(temp_s1) + 0xC)) = 1;
                                        temp_v1_5 = &(&D_800DD478)[sp64];
                                        temp_s0_3 = *(&D_80095CE2 + (*sp60 * 0xA));
                                        var_v0_3 = (char *)(temp_v1_5) + 8;
                                        (*(s32 *)((char *)(temp_v1_5) + 0x4)) = (s32) ((*(s32 *)((char *)(((char *)(temp_v1_5) + 4)) - 0x4)) + temp_s0_3);
                                        var_t0 = (*(s32 *)((char *)(var_v0_3) - 0x4));
                                        var_a3 = 2;
                                        do {
                                            temp_v1_6 = var_t0 + temp_s0_3;
                                            temp_a0_2 = temp_v1_6 + temp_s0_3;
                                            temp_a1 = temp_a0_2 + temp_s0_3;
                                            var_t0 = temp_a1 + temp_s0_3;
                                            var_a3 += 4;
                                            (*(s32 *)((char *)(var_v0_3) + 0xC)) = var_t0;
                                            (*(s32 *)((char *)(var_v0_3) + 0x8)) = temp_a1;
                                            (*(s32 *)((char *)(var_v0_3) + 0x4)) = temp_a0_2;
                                            var_v0_3 = (char *)(var_v0_3) + 0x10;
                                            (*(s32 *)((char *)(var_v0_3) - 0x10)) = temp_v1_6;
                                        } while (var_a3 != 0x1A);
                                    } else {
                                        spD4 = var_t5_2;
                                        func_10004074((*(s32 *)((char *)(temp_s1) + 0x8)));
                                    }
                                }
                            }
                        } else {
                            temp_s1_2 = (temp_t8 * 0x10) + &D_800DDA90;
                            if ((*(s32 *)((char *)(temp_s1_2) + 0xC)) == 0) {
                                (*(s32 *)((char *)(temp_s1_2) + 0xC)) = 1U;
                                spD4 = var_t5_2;
                                func_100043B4(temp_v0_6, 4);
                            }
                        }
                        temp_s0_4 = D_800DDD18 + var_s3;
                        temp_s1_3 = (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + sp54;
                        temp_t6 = *(&D_800DDC90 + ((*(s32 *)((char *)(temp_s0_4) + 0x7)) * 2));
                        spBC = (s32) temp_t6;
                        if (temp_t6 < 0) {
                            spBC = 0;
                        }
                        if (D_800DD470 != 0) {
                            spD4 = var_t5_2;
                            if ((func_150AD9A0((*(s32 *)((char *)(temp_s0_4) + 0x0)) - D_800DD470, (*(s32 *)((char *)(temp_s0_4) + 0x2)) - D_800DD472, (*(s32 *)((char *)(temp_s0_4) + 0x4)) - D_800DD474) < 0x50) && (*(&D_800DDBC0 + temp_t8) == 0)) {
                                temp_s0_5 = D_800DDD18 + var_s3;
                                if ((*(s32 *)((char *)(temp_s0_5) + 0xB)) != 0x21) {
                                    (*(s32 *)((char *)(temp_s0_5) + 0xB)) = 0x21U;
                                    temp_s0_6 = D_800DDD18 + var_s3;
                                    spD4 = var_t5_2;
                                    func_15170500((*(s32 *)((char *)(temp_s0_6) + 0x0)), (*(s32 *)((char *)(temp_s0_6) + 0x2)) + 0x44, (*(s32 *)((char *)(temp_s0_6) + 0x4)), 0, 0, 0xFF, 0);
                                }
                            }
                        }
                        var_s0_3 = D_800DDD18 + var_s3;
                        temp_v0_10 = (*(s32 *)((char *)(var_s0_3) + 0xB));
                        if ((s32) temp_v0_10 >= 0x21) {
                            if ((s32) temp_v0_10 >= 0x22) {
                                (*(u8 *)((char *)(var_s0_3) + 0xB)) = (u8) (temp_v0_10 - 1);
                                var_s0_3 = D_800DDD18 + var_s3;
                            }
                            (*(s16 *)((char *)(temp_s1_3) + 0x36)) = (s16) (*(s16 *)((char *)(var_s0_3) + 0xD));
                        } else {
                            if ((var_s6 < 0x30) && (*(&D_800DDBC0 + temp_t8) == 0)) {
                                (*(s32 *)((char *)(var_s0_3) + 0xB)) = 0x22U;
                                temp_s0_7 = D_800DDD18 + var_s3;
                                spD4 = var_t5_2;
                                func_15170500((*(s32 *)((char *)(temp_s0_7) + 0x0)), (*(s32 *)((char *)(temp_s0_7) + 0x2)) + 0x44, (*(s32 *)((char *)(temp_s0_7) + 0x4)), 0, 0, 0xFF, 0);
                                var_s0_3 = D_800DDD18 + var_s3;
                            }
                            (*(s16 *)((char *)(temp_s1_3) + 0x36)) = (s16) (*(s16 *)((char *)(var_s0_3) + 0xD));
                        }
                        (*(s16 *)((char *)(temp_s1_3) + 0x26)) = (s16) (*(s16 *)((char *)((D_800DDD18 + var_s3)) + 0xC));
                        temp_t7_2 = (u32) (arg3 - var_s6) >> 1;
                        var_s6_2 = temp_t7_2;
                        if ((s32) temp_t7_2 >= 0x100) {
                            var_s6_2 = 0xFF;
                        }
                        (*(u8 *)((char *)(temp_s1_3) + 0xF)) = (u8) var_s6_2;
                        temp_s0_8 = D_800DDD18 + var_s3;
                        temp_v0_11 = *(&D_8008CEBC + (*(&D_8008CF00 + ((*(&D_800DDC80 + temp_t8) << 5) + ((*(s32 *)((char *)(temp_s0_8) + 0xA)) * 4))) * 0xC));
                        if (temp_v0_11 != NULL) {
                            spD4 = var_t5_2;
                            var_t5_2 = spD4;
                            if (temp_v0_11(var_s3 + D_800DDD18, temp_s1_3, &spBC, (char *)(temp_s1_3) + 0xF) != 0) {

                            } else {
                                goto block_115;
                            }
                        } else {
                            (*(s16 *)((char *)(temp_s1_3) + 0x0)) = (s16) (*(s16 *)((char *)(temp_s0_8) + 0x0));
                            (*(s16 *)((char *)(temp_s1_3) + 0x2)) = (s16) (*(s16 *)((char *)((D_800DDD18 + var_s3)) + 0x2));
                            (*(s16 *)((char *)(temp_s1_3) + 0x4)) = (s16) (*(s16 *)((char *)((D_800DDD18 + var_s3)) + 0x4));
block_115:
                            temp_t6_2 = (*(s32 *)((char *)((D_800DDD18 + var_s3)) + 0x6)) | 0x9F;
                            temp_v0_12 = (*(s32 *)((char *)(temp_s1_3) + 0xF));
                            (*(s32 *)((char *)(temp_s1_3) + 0xE)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0xD)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0xC)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0x1E)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0x1D)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0x1C)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0x2E)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0x2D)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0x2C)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0x3E)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0x3D)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0x3C)) = temp_t6_2;
                            (*(s32 *)((char *)(temp_s1_3) + 0x3F)) = temp_v0_12;
                            (*(s32 *)((char *)(temp_s1_3) + 0x2F)) = temp_v0_12;
                            (*(s32 *)((char *)(temp_s1_3) + 0x1F)) = temp_v0_12;
                            if ((s32) (*(s32 *)((char *)((D_800DDD18 + var_s3)) + 0xB)) >= 0x21) {
                                var_t7 = *(&D_800DDBE0 + temp_t8) + sp64;
                            } else {
                                var_t7 = sp64 + (spBC >> 8);
                            }
                            (*(s32 *)((char *)(temp_s1_3) + 0x6)) = var_t7;
                            (*(s16 *)((char *)(temp_s1_3) + 0x16)) = (s16) *(&D_800DDBF0 + temp_t8);
                            temp_a0_3 = sp68 + &D_800DDB80;
                            temp_t7_3 = sp58 * 0x10;
                            temp_v0_13 = (*(s32 *)((char *)(temp_a0_3) + 0x0));
                            (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t7_3)) + 0x28)) = temp_v0_13;
                            var_s2_2 += 1;
                            (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t7_3)) + 0x18)) = temp_v0_13;
                            temp_v0_14 = (*(s32 *)((char *)(temp_a0_3) + 0x2));
                            (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t7_3)) + 0x3A)) = temp_v0_14;
                            (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t7_3)) + 0x2A)) = temp_v0_14;
                        }
                    }
                }
                var_t5 = var_t5_2 + spB8;
                if ((var_s2_2 < (u32) D_800DDD0C) && (((spB4 == 0) && (((spB8 == 1) && (var_t5 < D_800DDD20) && (var_s3 = var_t5 * 0xE, var_s0_2 = D_800DDD18 + var_s3, ((*var_s0_2 < spAE) != 0))) || ((spB8 == -1) && (var_t5 >= 0) && (var_s3 = var_t5 * 0xE, var_s0_2 = D_800DDD18 + var_s3, ((spAC < *var_s0_2) != 0))))) || ((spB4 != 0) && (((spB8 == 1) && (var_t5 < D_800DDD20) && (var_s3 = var_t5 * 0xE, var_s0_2 = D_800DDD18 + var_s3, (((*(u32 *)((char *)(var_s0_2) + 0x4)) < spAA) != 0))) || ((spB8 == -1) && (var_t5 >= 0) && (var_s3 = var_t5 * 0xE, var_s0_2 = D_800DDD18 + var_s3, ((spA8 < (*(u32 *)((char *)(var_s0_2) + 0x4))) != 0))))))) {
                    goto loop_78;
                }
            }
        }
        D_800DDD58 = var_s2_2;
        if (D_800BEAC0 == 0) {
            var_s3_2 = &D_800DDBD0;
            var_t5_3 = 0;
            do {
                temp_s0_9 = (*var_s3_2 << 8) - 1;
                if (temp_s0_9 >= 0x101) {
                    temp_v0_15 = 1 << var_t5_3;
                    temp_a2 = var_t5_3 * 4;
                    if (temp_v0_15 & D_800DDC04) {
                        temp_a2_2 = var_t5_3 + &D_800DDC10;
                        var_s2_3 = 0;
                        if (temp_v0_15 & D_800DDC08) {
                            sp68 = temp_a2_2;
                            spD4 = var_t5_3;
                            temp_hi = func_151EF610() % 10;
                            if (temp_hi == 0) {
                                sp68 = temp_a2_2;
                                sp90 = temp_hi;
                                spD4 = var_t5_3;
                                var_a3_2 = temp_hi;
                                *temp_a2_2 |= func_151EF610() % 16;
                            } else if (temp_hi == 1) {
                                sp68 = temp_a2_2;
                                sp90 = temp_hi;
                                spD4 = var_t5_3;
                                var_a3_2 = temp_hi;
                                *temp_a2_2 &= func_151EF610() % 16;
                            } else {
                                var_a3_2 = D_800BE9E4 << 5;
                            }
                        } else {
                            var_a3_2 = D_800BE9E4 << 6;
                        }
                        var_v0_4 = &D_800DDC90 + (var_t5_3 * 8);
                        do {
                            temp_a0_4 = *temp_a2_2;
                            temp_a1_2 = 1 << var_s2_3;
                            var_s2_3 += 1;
                            if (temp_a0_4 & temp_a1_2) {
                                *var_v0_4 -= var_a3_2;
                                temp_v1_7 = *var_v0_4;
                                if (temp_v1_7 <= 0) {
                                    *var_v0_4 = -temp_v1_7;
                                    *temp_a2_2 = temp_a0_4 ^ temp_a1_2;
                                }
                            } else {
                                *var_v0_4 += var_a3_2;
                                temp_v1_8 = *var_v0_4;
                                if (temp_v1_8 >= temp_s0_9) {
                                    *var_v0_4 = (temp_s0_9 * 2) - temp_v1_8;
                                    *temp_a2_2 = temp_a0_4 ^ temp_a1_2;
                                }
                            }
                            var_v0_4 += 2;
                        } while (var_s2_3 != 4);
                    } else {
                        temp_v0_16 = &D_800DDC90 + (temp_a2 * 2);
                        temp_a0_5 = D_800BE9E4 * 0x30;
                        *temp_v0_16 += temp_a0_5;
                        temp_v1_9 = *temp_v0_16;
                        if (temp_v1_9 >= temp_s0_9) {
                            *temp_v0_16 = temp_v1_9 - temp_s0_9;
                        }
                        temp_v0_17 = &D_800DDC90 + ((temp_a2 + 1) * 2);
                        (*(s16 *)((char *)(temp_v0_17) + 0x0)) = (s16) ((*(s16 *)((char *)(temp_v0_17) + 0x0)) + temp_a0_5);
                        temp_v1_10 = (*(s32 *)((char *)(temp_v0_17) + 0x0));
                        if (temp_v1_10 >= temp_s0_9) {
                            (*(s16 *)((char *)(temp_v0_17) + 0x0)) = (s16) (temp_v1_10 - temp_s0_9);
                        }
                        temp_v0_18 = (char *)(temp_v0_17) + 2;
                        (*(s16 *)((char *)(temp_v0_17) + 0x2)) = (s16) ((*(s16 *)((char *)(temp_v0_17) + 0x2)) + temp_a0_5);
                        temp_v1_11 = (*(s32 *)((char *)(temp_v0_17) + 0x2));
                        if (temp_v1_11 >= temp_s0_9) {
                            (*(s16 *)((char *)(temp_v0_17) + 0x2)) = (s16) (temp_v1_11 - temp_s0_9);
                        }
                        (*(s16 *)((char *)(temp_v0_18) + 0x2)) = (s16) ((*(s16 *)((char *)(temp_v0_18) + 0x2)) + temp_a0_5);
                        temp_v1_12 = (*(s32 *)((char *)(temp_v0_18) + 0x2));
                        if (temp_v1_12 >= temp_s0_9) {
                            (*(s16 *)((char *)(temp_v0_18) + 0x2)) = (s16) (temp_v1_12 - temp_s0_9);
                        }
                    }
                }
                var_t5_3 += 1;
                var_s3_2 += 1;
            } while (var_t5_3 != 0xF);
        }
        temp_hi_2 = func_151EF610() % (u32) D_800DDD0C;
        if (temp_hi_2 < (u32) D_800DDD58) {
            temp_v0_19 = (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + (temp_hi_2 * 4 * 0x10);
            temp_s2_2 = (*(s32 *)((char *)(temp_v0_19) + 0x6));
            if ((((s32) temp_s2_2 % 26) == 0) && (*(&D_800DDBC0 + ((s32) temp_s2_2 / 26)) == 0)) {
                func_15170500((*(s32 *)((char *)(temp_v0_19) + 0x0)), (*(s32 *)((char *)(temp_v0_19) + 0x2)) + 0x44, (*(s32 *)((char *)(temp_v0_19) + 0x4)), 0, 1, 0xFF, 0);
            }
        }
        temp_f12 = arg4 * D_800A7244;
        arg4 = temp_f12;
        temp_s0_10 = (s16) (s32) (cosf(temp_f12) * 128.0f);
        temp_ret = sinf(arg4);
        var_v0_2 = (s32) temp_ret;
        var_t5_4 = 0;
        if (D_800DDD58 != 0) {
            do {
                var_v0_2 = var_t5_4 << 6;
                var_t5_4 += 1;
                temp_v1_13 = (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2;
                temp_a0_6 = (*(s32 *)((char *)(temp_v1_13) + 0x26));
                temp_s1_4 = (*(s32 *)((char *)(temp_v1_13) + 0x0));
                temp_ra = (*(s32 *)((char *)(temp_v1_13) + 0x2));
                temp_s2_3 = (*(s32 *)((char *)(temp_v1_13) + 0x4));
                temp_t8_2 = (s32) (temp_a0_6 * temp_s0_10) >> 5;
                temp_a2_3 = temp_t8_2 + temp_s1_4;
                (*(s32 *)((char *)(temp_v1_13) + 0x30)) = temp_a2_3;
                temp_t0_2 = temp_s1_4 - temp_t8_2;
                (*(s32 *)((char *)((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4)))) + var_v0_2)) = temp_a2_3;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x12)) = temp_ra;
                temp_t7_4 = (s32) (temp_a0_6 * (s16) (s32) (temp_ret * 128.0f)) >> 5;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x2)) = temp_ra;
                temp_a3 = temp_s2_3 - temp_t7_4;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x34)) = temp_a3;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x4)) = temp_a3;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x20)) = temp_t0_2;
                arg1 = (s32) temp_ra;
                arg2 = (s32) temp_s2_3;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x10)) = temp_t0_2;
                temp_a0_7 = ((*(s32 *)((char *)(temp_v1_13) + 0x36)) * 4) + arg1;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x32)) = temp_a0_7;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x22)) = temp_a0_7;
                temp_a1_3 = temp_t7_4 + arg2;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x24)) = temp_a1_3;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x14)) = temp_a1_3;
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0xA)) = 0;
                temp_v1_14 = (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2;
                (*(s16 *)((char *)(temp_v1_14) + 0x8)) = (s16) (*(s16 *)((char *)(temp_v1_14) + 0xA));
                (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2)) + 0x38)) = 0;
                temp_v1_15 = (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + var_v0_2;
                (*(s16 *)((char *)(temp_v1_15) + 0x1A)) = (s16) (*(s16 *)((char *)(temp_v1_15) + 0x38));
            } while (var_t5_4 < (u32) D_800DDD58);
        }
        D_800DD470 = 0;
        return (s32 *) var_v0_2;
    }
    (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) = 0;
    return var_v0;
}

void func_1517CFC4(void) {
    void * *temp_a0;
    void * *temp_a1;
    void * *var_s0;
    s32 var_s1;

    var_s0 = &D_800DDA90;
    var_s1 = 0;
    do {
        temp_a0 = (*(s32 *)((char *)(var_s0) + 0x8));
        if (temp_a0 != NULL) {
            temp_a1 = (&D_800DD478)[var_s1 * 0x1A];
            if (temp_a1 != NULL) {
                func_10006240(temp_a0, temp_a1, D_8003809C);
                func_10004074((*(s32 *)((char *)(var_s0) + 0x8)));
            }
            (*(s32 *)((char *)(var_s0) + 0x8)) = NULL;
        }
        var_s1 += 1;
        var_s0 = (char *)(var_s0) + 0x10;
    } while (var_s1 != 0xF);
}

void *func_1517D074(void *arg0, s16 arg1, s16 arg2, s16 arg3, f32 arg4, s32 arg5, s32 arg6, u8 arg7, u8 arg8, s32 arg9) {
    s16 sp8A;
    void *sp84;
    s32 sp28;
    s32 sp24;
    f32 sp20;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_t0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a1_3;
    s32 temp_a3_2;
    s32 temp_f18;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_t2;
    s32 var_t4;
    u16 temp_v1_3;
    void *temp_a0;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_12;
    void *temp_a0_13;
    void *temp_a0_14;
    void *temp_a0_15;
    void *temp_a0_16;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_a2_2;
    void *temp_v0;

    temp_t1 = D_800DDD58 * 4;
    temp_t2 = temp_t1 * 0x10;
    temp_v0 = (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t2;
    if ((u32) D_800DDD58 >= (u32) D_800DDD0C) {
        return arg0;
    }
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDE000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = &D_8008CFA0;
    temp_a0_2 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFCFFFFFF;
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = 0xFFFCF438;
    temp_a0_3 = (char *)(temp_a0_2) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xD9FFFBFF;
    (*(s32 *)((char *)(temp_a0_3) + 0x4)) = 0;
    temp_a0_4 = (char *)(temp_a0_3) + 8;
    (*(s32 *)((char *)(temp_a0_3) + 0x8)) = 0xEF182C3F;
    (*(s32 *)((char *)(temp_a0_4) + 0x4)) = 0x0C184B50;
    temp_a0_5 = (char *)(temp_a0_4) + 8;
    sp84 = temp_v0;
    arg0 = temp_a0_5;
    temp_f12 = arg4 * D_800A7248;
    sp28 = temp_t1;
    sp24 = temp_t2;
    arg4 = temp_f12;
    temp_f2 = (f32) arg5;
    temp_f8 = cosf(temp_f12) * temp_f2;
    sp20 = temp_f2;
    sp8A = (s16) (s32) temp_f8;
    temp_f16 = sinf(arg4) * temp_f2;
    temp_v1 = arg1 + sp8A;
    (*(s32 *)((char *)(temp_v0) + 0x30)) = temp_v1;
    (*(s32 *)((char *)(temp_v0) + 0x0)) = temp_v1;
    temp_f18 = (s32) temp_f16;
    temp_a2 = arg1 - sp8A;
    (*(s32 *)((char *)(temp_v0) + 0x12)) = arg2;
    (*(s16 *)((char *)(temp_v0) + 0x2)) = (s16) (*(s16 *)((char *)(temp_v0) + 0x12));
    temp_a1 = arg3 - (s16) temp_f18;
    (*(s32 *)((char *)(temp_v0) + 0x34)) = temp_a1;
    (*(s32 *)((char *)(temp_v0) + 0x4)) = temp_a1;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = temp_a2;
    (*(s32 *)((char *)(temp_v0) + 0x20)) = temp_a2;
    temp_a3 = arg2 + arg6 + arg6;
    (*(s32 *)((char *)(temp_v0) + 0x32)) = temp_a3;
    (*(s32 *)((char *)(temp_v0) + 0x22)) = temp_a3;
    temp_t0 = arg3 + (s16) temp_f18;
    (*(s32 *)((char *)(temp_v0) + 0x24)) = temp_t0;
    (*(s32 *)((char *)(temp_v0) + 0x14)) = temp_t0;
    temp_v1_2 = (arg7 << 5) - 1;
    (*(s32 *)((char *)(temp_v0) + 0x28)) = temp_v1_2;
    (*(s32 *)((char *)(temp_v0) + 0x18)) = temp_v1_2;
    temp_t3 = arg7 * 2;
    temp_a1_2 = (arg8 << 5) - 1;
    (*(s32 *)((char *)(temp_v0) + 0x3A)) = temp_a1_2;
    (*(s32 *)((char *)(temp_v0) + 0x2A)) = temp_a1_2;
    (*(s32 *)((char *)(arg0) + 0x0)) = 0x01004008;
    temp_a0_6 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x4)) = (void * *) ((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t2);
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFD100000;
    temp_a0_7 = (char *)(temp_a0_6) + 8;
    (*(s32 *)((char *)(temp_a0_6) + 0x4)) = arg9;
    (*(s32 *)((char *)(temp_a0_6) + 0x8)) = 0xF5100000;
    (*(s32 *)((char *)(temp_a0_7) + 0x4)) = 0x07080200;
    temp_a0_8 = (char *)(temp_a0_7) + 8;
    (*(s32 *)((char *)(temp_a0_7) + 0x8)) = 0xE6000000;
    (*(s32 *)((char *)(temp_a0_8) + 0x4)) = 0;
    temp_a0_9 = (char *)(temp_a0_8) + 8;
    temp_t7 = (s32) ((arg8 * 5) + 3) >> 2;
    (*(s32 *)((char *)(temp_a0_8) + 0x8)) = 0xF3000000;
    sp24 = temp_t7;
    temp_a0_10 = (char *)(temp_a0_9) + 8;
    temp_a1_3 = (arg7 * temp_t7) - 1;
    if (temp_a1_3 < 0x7FF) {
        var_t2 = temp_a1_3;
    } else {
        var_t2 = 0x7FF;
    }
    temp_v0_2 = temp_t3 / 8;
    if (temp_v0_2 <= 0) {
        var_t4 = 1;
    } else {
        var_t4 = temp_v0_2;
    }
    if (temp_v0_2 <= 0) {
        var_a2 = 1;
    } else {
        var_a2 = temp_v0_2;
    }
    (*(s32 *)((char *)(temp_a0_9) + 0x4)) = (s32) ((((s32) (var_t4 + 0x7FF) / var_a2) & 0xFFF) | 0x07000000 | ((var_t2 & 0xFFF) << 0xC));
    (*(s32 *)((char *)(temp_a0_9) + 0x8)) = 0xE7000000;
    (*(s32 *)((char *)(temp_a0_10) + 0x4)) = 0;
    temp_a0_11 = (char *)(temp_a0_10) + 8;
    (*(s32 *)((char *)(temp_a0_11) + 0x4)) = 0x80200;
    (*(s32 *)((char *)(temp_a0_10) + 0x8)) = (s32) (((((s32) (temp_t3 + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
    temp_a0_12 = (char *)(temp_a0_11) + 8;
    (*(s32 *)((char *)(temp_a0_11) + 0x8)) = 0xF2000000;
    temp_a3_2 = (((arg7 - 1) * 4) & 0xFFF) << 0xC;
    (*(s32 *)((char *)(temp_a0_12) + 0x4)) = (s32) (temp_a3_2 | (((sp24 - 1) * 4) & 0xFFF));
    temp_a0_13 = (char *)(temp_a0_12) + 8;
    temp_a0_14 = (char *)(temp_a0_13) + 8;
    (*(s32 *)((char *)(temp_a0_12) + 0x8)) = (s32) (((((s32) (((s32) arg7 >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5800000 | (((s32) (arg7 * arg8) >> 2) & 0x1FF));
    (*(s32 *)((char *)(temp_a0_13) + 0x4)) = 0x01080200;
    (*(s32 *)((char *)(temp_a0_13) + 0x8)) = 0xF2000000;
    (*(s32 *)((char *)(temp_a0_14) + 0x4)) = (s32) (temp_a3_2 | 0x01000000 | (((arg8 - 1) * 4) & 0xFFF));
    temp_a0_15 = (char *)(temp_a0_14) + 8;
    temp_t6 = sp28 * 0x10;
    temp_a0_16 = (char *)(temp_a0_15) + 8;
    (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t6)) + 0x36)) = 0;
    temp_a2_2 = (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t6;
    temp_v1_3 = (*(s32 *)((char *)(temp_a2_2) + 0x36));
    (*(s32 *)((char *)(temp_a2_2) + 0x26)) = temp_v1_3;
    (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t6)) + 0x16)) = temp_v1_3;
    (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t6)) + 0x6)) = temp_v1_3;
    (*(s32 *)((char *)(temp_a0_14) + 0x8)) = 0x05000402;
    (*(s32 *)((char *)(temp_a0_15) + 0x4)) = 0;
    (*(s32 *)((char *)(temp_a0_15) + 0x8)) = 0x05000604;
    (*(s32 *)((char *)(temp_a0_16) + 0x4)) = 0;
    temp_a0 = (char *)(temp_a0_16) + 8;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = 0x200000;
    (*(s32 *)((char *)(temp_a0_16) + 0x8)) = 0xD9FFFFFF;
    D_800DDD58 += 1;
    return (char *)(temp_a0) + 8;
}

void func_1517D578( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    void *temp_v1;

    if ((s32) D_8008CEB0 < 3) {
        temp_v1 = (D_8008CEB0 * 0x10) + &D_800DDD28;
        (*(s32 *)((char *)(temp_v1) + 0x0)) = arg0;
        (*(s32 *)((char *)(temp_v1) + 0x2)) = arg1;
        (*(s32 *)((char *)(temp_v1) + 0x4)) = arg2;
        (*(s32 *)((char *)(temp_v1) + 0xC)) = arg3;
        D_8008CEB0 += 1;
        (*(s16 *)((char *)(temp_v1) + 0x8)) = (s16) arg4;
        (*(s16 *)((char *)(temp_v1) + 0xA)) = (s16) arg5;
        (*(s32 *)((char *)(temp_v1) + 0x6)) = arg6;
    }
}

void func_1517D5FC( s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_1517D578(arg0, arg1, arg2, (*(u8 *)((char *)((D_800DBFF0 + (arg3 * 0x9A0))) + 0x380)), arg4, arg5, (u8) ((s32) D_800DDD1C >> 3));
}

void *func_1517D690(void *arg0, s32 arg1) {
    u32 sp4C;
    s32 temp_v0;
    u8 temp_t0;
    u8 temp_t8;
    u8 temp_v0_2;
    void *temp_v0_3;
    void *var_s2;

    var_s2 = arg0;
    temp_t8 = D_800DDD1C + 5;
    temp_v0 = temp_t8 & 0xFF;
    D_800DDD1C = temp_t8;
    sp4C = D_800DDD58;
    if (temp_v0 >= 0xC8) {
        D_800DDD1C = temp_v0 - 0xC8;
    }
    temp_v0_2 = D_8008CEB0;
    if (temp_v0_2 != 0) {
        do {
            temp_t0 = temp_v0_2 - 1;
            D_8008CEB0 = temp_t0;
            if (arg1 != 0) {
                temp_v0_3 = &D_800DDD28 + ((temp_t0 & 0xFF) * 0x10);
                var_s2 = func_1517D074(var_s2, (*(s32 *)((char *)(temp_v0_3) + 0x0)), (*(s32 *)((char *)(temp_v0_3) + 0x2)), (*(s32 *)((char *)(temp_v0_3) + 0x4)), (*(s32 *)((char *)(temp_v0_3) + 0xC)), (s32) (*(s32 *)((char *)(temp_v0_3) + 0x8)), (s32) (*(s32 *)((char *)(temp_v0_3) + 0xA)), 0x10U, 0x20U, ((*(s32 *)((char *)(temp_v0_3) + 0x6)) * 0x280 * 2) + arg1);
            }
        } while (D_8008CEB0 != 0);
    }
    D_800DDD58 = sp4C;
    return var_s2;
}

void func_1517D7B0(void **arg0, s32 arg1) {
    u32 sp48;
    u32 sp44;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1_2;
    s32 temp_ra;
    s32 temp_t1_2;
    s32 temp_t4;
    s32 temp_t6;
    s32 temp_t7_2;
    s32 temp_t7_3;
    s32 temp_t8;
    s32 temp_t8_2;
    s32 temp_t8_3;
    s32 temp_t9;
    s32 temp_v0_5;
    s32 var_a3;
    s32 var_s1;
    s32 var_t3;
    s32 var_t4;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_a2_2;
    u16 temp_a3;
    u16 var_s2;
    u32 temp_t7;
    u32 temp_v0_2;
    u32 var_s5;
    u32 var_s5_2;
    u32 var_t5;
    u32 var_v1;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3_2;
    void *temp_s3;
    void *temp_t1;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    var_s2 = 0xFFFF;
    if ((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) != 0) {
        *arg0 = func_1517D690(*arg0, D_800DDD24);
        if ((D_800DDD20 != 0) && (D_800DDD58 != 0)) {
            temp_v0 = *arg0;
            *arg0 = (char *)(temp_v0) + 8;
            (*(s32 *)((char *)(temp_v0) + 0x4)) = &D_8008CFA0;
            (*(s32 *)((char *)(temp_v0) + 0x0)) = 0xDE000000;
            sp44 = 0;
            var_v1 = 0;
            *arg0 = func_1510CDB8(*arg0, 0xFF, 0xFF, 0);
            sp48 = 0;
            if (D_800DDD58 != 0) {
                do {
                    var_t3 = 0;
                    var_s5 = 0;
                    temp_v0_2 = D_800DDD58 - sp48;
                    var_t5 = temp_v0_2 * 4;
                    if (temp_v0_2 >= 5U) {
                        var_t5 = 0x10;
                    }
                    if (var_t5 != 0) {
                        var_v0 = 0;
                        do {
                            if (arg1 != (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + (sp48 << 6) + var_v0)) + 0x16))) {
                                var_t3 |= 1 << var_s5;
                            }
                            var_s5 += 4;
                            var_v0 += 0x40;
                        } while (var_s5 < var_t5);
                    }
                    if (var_t3 != 0x1111) {
                        temp_v0_3 = *arg0;
                        *arg0 = (char *)(temp_v0_3) + 8;
                        (*(s32 *)((char *)(temp_v0_3) + 0x0)) = (s32) (((var_t5 & 0xFF) << 0xC) | 0x01000000 | ((var_t5 & 0x7F) * 2));
                        temp_t8 = sp48 * 4;
                        (*(s32 *)((char *)(temp_v0_3) + 0x4)) = (void * *) ((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + (temp_t8 * 0x10));
                        var_s5_2 = 0;
                        if (var_t5 != 0) {
                            do {
                                var_s5_2 += 4;
                                if ((var_v1 < var_t5) && ((var_v0_2 = var_v1 * 0x10, temp_a0 = (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + (temp_t8 * 0x10), (var_s2 != (*(s32 *)((char *)((temp_a0 + var_v0_2)) + 0x6)))) || ((1 << var_v1) & var_t3))) {
loop_16:
                                    var_v1 += 4;
                                    var_v0_2 += 0x40;
                                    if (var_v1 < var_t5) {
                                        if ((var_s2 != (*(s32 *)((char *)((temp_a0 + var_v0_2)) + 0x6))) || ((1 << var_v1) & var_t3)) {
                                            goto loop_16;
                                        }
                                    }
                                }
                                if ((var_v1 >= var_t5) && (var_t3 != 0x1111)) {
                                    var_v1 = 0;
                                    if (var_t3 & 1) {
                                        do {
                                            var_v1 += 4;
                                        } while ((1 << var_v1) & var_t3);
                                    }
                                    temp_a2 = (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + (temp_t8 * 0x10) + (var_v1 * 0x10);
                                    temp_a3 = (*(s32 *)((char *)(temp_a2) + 0x6));
                                    if ((var_s2 != temp_a3) && (var_v1 < var_t5)) {
                                        var_s2 = temp_a3;
                                        temp_t8_2 = (s32) ((*(s32 *)((char *)(temp_a2) + 0x28)) + 1) >> 5;
                                        temp_t7_2 = (s32) ((*(s32 *)((char *)(temp_a2) + 0x2A)) + 1) >> 5;
                                        temp_v0_4 = *arg0;
                                        *arg0 = (char *)(temp_v0_4) + 8;
                                        (*(s32 *)((char *)(temp_v0_4) + 0x0)) = 0xFD100000;
                                        (*(s32 *)((char *)(temp_v0_4) + 0x4)) = (void * *) (&D_800DD478)[var_s2];
                                        temp_a1 = *arg0;
                                        *arg0 = (char *)(temp_a1) + 8;
                                        (*(s32 *)((char *)(temp_a1) + 0x4)) = 0x07080200;
                                        (*(s32 *)((char *)(temp_a1) + 0x0)) = 0xF5100000;
                                        temp_t1 = *arg0;
                                        *arg0 = (char *)(temp_t1) + 8;
                                        (*(s32 *)((char *)(temp_t1) + 0x4)) = NULL;
                                        (*(s32 *)((char *)(temp_t1) + 0x0)) = 0xE6000000;
                                        temp_t6 = (s32) (((s16) temp_t7_2 * 5) + 3) >> 2;
                                        temp_s3 = *arg0;
                                        *arg0 = (char *)(temp_s3) + 8;
                                        temp_ra = (s16) temp_t8_2 * 2;
                                        var_t4 = 0x7FF;
                                        (*(s32 *)((char *)(temp_s3) + 0x0)) = 0xF3000000;
                                        temp_a0_2 = ((s16) temp_t8_2 * temp_t6) - 1;
                                        if (temp_a0_2 < 0x7FF) {
                                            var_t4 = temp_a0_2;
                                        }
                                        temp_v0_5 = temp_ra / 8;
                                        var_s1 = temp_v0_5;
                                        if (temp_v0_5 <= 0) {
                                            var_s1 = 1;
                                        }
                                        if (temp_v0_5 <= 0) {
                                            var_a3 = 1;
                                        } else {
                                            var_a3 = temp_v0_5;
                                        }
                                        (*(s32 *)((char *)(temp_s3) + 0x4)) = (void * *) ((((s32) (var_s1 + 0x7FF) / var_a3) & 0xFFF) | 0x07000000 | ((var_t4 & 0xFFF) << 0xC));
                                        temp_v0_6 = *arg0;
                                        *arg0 = (char *)(temp_v0_6) + 8;
                                        (*(s32 *)((char *)(temp_v0_6) + 0x4)) = NULL;
                                        (*(s32 *)((char *)(temp_v0_6) + 0x0)) = 0xE7000000;
                                        temp_v0_7 = *arg0;
                                        *arg0 = (char *)(temp_v0_7) + 8;
                                        (*(s32 *)((char *)(temp_v0_7) + 0x4)) = 0x80200;
                                        (*(s32 *)((char *)(temp_v0_7) + 0x0)) = (s32) (((((s32) (temp_ra + 7) >> 3) & 0x1FF) << 9) | 0xF5100000);
                                        temp_v0_8 = *arg0;
                                        *arg0 = (char *)(temp_v0_8) + 8;
                                        (*(s32 *)((char *)(temp_v0_8) + 0x0)) = 0xF2000000;
                                        temp_t1_2 = ((((s16) temp_t8_2 - 1) * 4) & 0xFFF) << 0xC;
                                        (*(s32 *)((char *)(temp_v0_8) + 0x4)) = (void * *) (temp_t1_2 | (((temp_t6 - 1) * 4) & 0xFFF));
                                        temp_v0_9 = *arg0;
                                        *arg0 = (char *)(temp_v0_9) + 8;
                                        (*(s32 *)((char *)(temp_v0_9) + 0x0)) = (s32) (((((s32) (((s16) temp_t8_2 >> 1) + 7) >> 3) & 0x1FF) << 9) | 0xF5800000 | (((s32) ((s16) temp_t8_2 * (s16) temp_t7_2) >> 2) & 0x1FF));
                                        (*(s32 *)((char *)(temp_v0_9) + 0x4)) = 0x01080200;
                                        temp_v0_10 = *arg0;
                                        *arg0 = (char *)(temp_v0_10) + 8;
                                        (*(s32 *)((char *)(temp_v0_10) + 0x0)) = 0xF2000000;
                                        (*(s16 *)((char *)(temp_v0_10) + 0x4)) = (void * *) (temp_t1_2 | 0x01000000 | ((((s16) temp_t7_2 - 1) * 4) & 0xFFF));
                                    }
                                }
                                if (var_v1 < var_t5) {
                                    temp_t4 = 1 << var_v1;
                                    if (!(temp_t4 & var_t3)) {
                                        temp_t8_3 = (temp_t8 + var_v1) * 0x10;
                                        temp_a1_2 = var_v1 * 2;
                                        (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t8_3)) + 0x36)) = 0;
                                        var_t3 |= temp_t4;
                                        temp_a3_2 = (*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t8_3;
                                        temp_a2_2 = (*(s32 *)((char *)(temp_a3_2) + 0x36));
                                        (*(s32 *)((char *)(temp_a3_2) + 0x26)) = temp_a2_2;
                                        (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t8_3)) + 0x16)) = temp_a2_2;
                                        temp_t7_3 = (temp_a1_2 & 0xFF) << 0x10;
                                        (*(s32 *)((char *)(((*(s32 *)((char *)(D_800DDD10) + (D_800BE9C0 * 4))) + temp_t8_3)) + 0x6)) = temp_a2_2;
                                        temp_v0_11 = *arg0;
                                        temp_t9 = (temp_a1_2 + 4) & 0xFF;
                                        *arg0 = (char *)(temp_v0_11) + 8;
                                        (*(s32 *)((char *)(temp_v0_11) + 0x0)) = (s32) (temp_t7_3 | (temp_t9 << 8) | ((temp_a1_2 + 2) & 0xFF) | 0x05000000);
                                        (*(s32 *)((char *)(temp_v0_11) + 0x4)) = NULL;
                                        temp_v0_12 = *arg0;
                                        *arg0 = (char *)(temp_v0_12) + 8;
                                        (*(s32 *)((char *)(temp_v0_12) + 0x4)) = NULL;
                                        (*(s32 *)((char *)(temp_v0_12) + 0x0)) = (s32) (temp_t7_3 | (((temp_a1_2 + 6) & 0xFF) << 8) | temp_t9 | 0x05000000);
                                    }
                                }
                            } while (var_s5_2 < var_t5);
                        }
                    }
                    temp_t7 = sp48 + 4;
                    sp48 = temp_t7;
                } while (temp_t7 < (u32) D_800DDD58);
            }
            temp_v0_13 = *arg0;
            *arg0 = (char *)(temp_v0_13) + 8;
            (*(s32 *)((char *)(temp_v0_13) + 0x4)) = 0x200000;
            (*(s32 *)((char *)(temp_v0_13) + 0x0)) = 0xD9FFFFFF;
            temp_v0_14 = *arg0;
            *arg0 = (char *)(temp_v0_14) + 8;
            (*(s32 *)((char *)(temp_v0_14) + 0x4)) = NULL;
            (*(s32 *)((char *)(temp_v0_14) + 0x0)) = 0xE7000000;
        }
    }
}

void func_1517DE5C(void) {
    void * *var_v0;
    void * *var_v1;
    s32 temp_t2;
    s32 temp_t9;
    s32 var_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    var_v0 = &D_800DDA90;
    if (D_800DDD20 != 0) {
        do {
            var_v0 = (char *)(var_v0) + 0x10;
            (*(s32 *)((char *)(var_v0) - 0x4)) = 0;
        } while ((u32) var_v0 < (u32) &D_800DDB80);
        func_1517BBAC((s32) gObjects[0].x_position, (s32) gObjects[0].y_position, (s32) gObjects[0].z_position, 0x5DC, D_800DBFF0->unk380, (s32) D_800DBFF0->unk2F8, (s32) D_800DBFF0->unk2FC, (s32) D_800DBFF0->unk300);
        var_a0 = 3;
        if ((D_800DD478 != NULL) && (D_800DDA9C == 0)) {
            D_800DD478 = NULL;
            D_800DDA98 = 0;
        }
        var_v1 = &D_800DD5B0;
        if ((D_800DD4E0 != 0) && (D_800DDAAC == 0)) {
            D_800DD4E0 = 0;
            D_800DDAA8 = 0;
        }
        if ((D_800DD548 != 0) && (D_800DDABC == 0)) {
            D_800DD548 = 0;
            D_800DDAB8 = 0;
        }
        do {
            temp_v0 = &D_800DDA90 + (var_a0 * 0x10);
            if (((*(s32 *)((char *)(var_v1) + 0x0)) != 0) && ((*(s32 *)((char *)(temp_v0) + 0xC)) == 0)) {
                (*(s32 *)((char *)(var_v1) + 0x0)) = 0;
                (*(s32 *)((char *)(temp_v0) + 0x8)) = 0;
            }
            temp_v0_2 = &D_800DDA90 + (var_a0 * 0x10);
            temp_t9 = var_a0 * 0x10;
            temp_t2 = var_a0 * 0x10;
            if (((*(s32 *)((char *)(var_v1) + 0x68)) != 0) && ((*(s32 *)((char *)(temp_v0_2) + 0x1C)) == 0)) {
                (*(s32 *)((char *)(var_v1) + 0x68)) = 0;
                (*(s32 *)((char *)(temp_v0_2) + 0x18)) = 0;
            }
            var_a0 += 4;
            temp_v0_3 = &D_800DDA90 + temp_t9;
            if (((*(s32 *)((char *)(var_v1) + 0xD0)) != 0) && ((*(s32 *)((char *)(temp_v0_3) + 0x2C)) == 0)) {
                (*(s32 *)((char *)(var_v1) + 0xD0)) = 0;
                (*(s32 *)((char *)(temp_v0_3) + 0x28)) = 0;
            }
            temp_v0_4 = &D_800DDA90 + temp_t2;
            if (((*(s32 *)((char *)(var_v1) + 0x138)) != 0) && ((*(s32 *)((char *)(temp_v0_4) + 0x3C)) == 0)) {
                (*(s32 *)((char *)(var_v1) + 0x138)) = 0;
                (*(s32 *)((char *)(temp_v0_4) + 0x38)) = 0;
            }
            var_v1 = (char *)(var_v1) + 0x1A0;
        } while (var_a0 != 0xF);
    }
}

void func_1517E05C( s32 arg0, s32 arg1, s32 arg2) {
    (*(s32 *)((char *)&(D_800DD470) + 0x0)) = arg0;
    (*(s32 *)((char *)&(D_800DD470) + 0x2)) = arg1;
    (*(s32 *)((char *)&(D_800DD470) + 0x4)) = arg2;
}
