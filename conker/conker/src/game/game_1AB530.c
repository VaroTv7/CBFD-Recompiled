/**
 * Auto-decompiled from asm/1AB530.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *allocate_memory();                  /* extern */
void * func_10004074();                                  /* extern */
void *func_150950D4(); /* extern */
s32 func_1509563C(); /* extern */
void *func_15095A48(); /* extern */
void * func_150A7A00(); /* extern */
void * func_15110360();           /* extern */
void *func_1517E4A8();
void *func_1517EA4C();     /* static */
s32 func_1517EAAC(f32 arg0, f32 arg1, void *arg2, f32 *arg3, f32 *arg4);
s32 func_1517EC1C();           /* static */
extern s32 D_80089630;
extern u16 D_8008D004;
extern u16 D_8008D008;
extern u16 D_8008D00C;
extern s32 D_800903AC;
extern s32 D_800A7250;
extern s8 D_800D2DA8;
extern s8 D_800D2DA9;
extern s8 D_800D2DAA;
extern s8 D_800D2DAB;
extern u8 D_800DDD60;

void *func_1517E080(s32 arg0, s32 arg1) {
    void **sp18;
    void **var_t0;
    void *temp_v0;
    void *var_v0;
    void *var_v1;

    var_v1 = D_800DDD64;
    if (var_v1 != NULL) {
        var_v0 = (*(s32 *)((char *)(var_v1) + 0x24));
        if (var_v0 != NULL) {
            do {
                var_v1 = var_v0;
                var_v0 = (*(s32 *)((char *)(var_v0) + 0x24));
            } while (var_v0 != NULL);
        }
        var_t0 = (char *)(var_v1) + 0x24;
    } else {
        var_t0 = &D_800DDD64;
    }
    sp18 = var_t0;
    temp_v0 = allocate_memory(0x34, 1, 0, 1);
    if (temp_v0 == NULL) {
        return NULL;
    }
    *var_t0 = temp_v0;
    (*(s32 *)((char *)(temp_v0) + 0x24)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x28)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x2E)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x10)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0xC)) = 0.0f;
    (*(s8 *)((char *)(temp_v0) + 0x2F)) = (s8) arg0;
    (*(s8 *)((char *)(temp_v0) + 0x30)) = (s8) arg1;
    return temp_v0;
}

void func_1517E134(void *arg0) {
    void *var_v0;
    void *var_v1;

    if (arg0 == D_800DDD64) {
        D_800DDD64 = (*(s32 *)((char *)(arg0) + 0x24));
        goto block_8;
    }
    var_v1 = D_800DDD64;
    if (D_800DDD64 != NULL) {
        var_v0 = (*(s32 *)((char *)(D_800DDD64) + 0x24));
        if (arg0 != var_v0) {
loop_4:
            var_v1 = var_v0;
            if (var_v0 != NULL) {
                var_v0 = (*(s32 *)((char *)(var_v0) + 0x24));
                if (arg0 != var_v0) {
                    goto loop_4;
                }
            }
        }
    }
    if (var_v1 != NULL) {
        (*(s32 *)((char *)(var_v1) + 0x24)) = (void *) (*(s32 *)((char *)(arg0) + 0x24));
block_8:
        func_10004074();
    }
}

void func_1517E1AC(void) {
    f32 temp_f0;
    f32 temp_f2;
    void *var_v0;

    var_v0 = D_800DDD64;
    if (var_v0 != NULL) {
        do {
            temp_f0 = (*(s32 *)((char *)(var_v0) + 0xC));
            if ((temp_f0 >= 0.0f) && (temp_f0 < (f32) D_800BE620)) {
                temp_f2 = (*(s32 *)((char *)(var_v0) + 0x10));
                if ((temp_f2 >= 0.0f) && (temp_f2 < (f32) D_800BE624)) {
                    (*(u16 *)((char *)(var_v0) + 0x2A)) = (u16) (*(u16 *)((char *)(D_800BE9C4) + ((s32) temp_f0 * 2) + ((s32) temp_f2 * D_800BE620 * 2)));
                }
            }
            var_v0 = (*(s32 *)((char *)(var_v0) + 0x24));
        } while (var_v0 != NULL);
    }
}

void *func_1517E28C(void *arg0, void * arg1) {
    s32 sp74;
    u32 sp6C;
    u16 sp60;
    u16 sp5C;
    u16 sp58;
    s32 var_s1;
    s32 var_s2;
    u8 *var_v1;
    u8 temp_v0_2;
    void *temp_v0;
    void *var_s0;
    void *var_s4;

    var_s4 = arg0;
    sp60 = D_8008D004;
    sp5C = D_8008D008;
    sp58 = D_8008D00C;
    var_s0 = D_800DDD64;
    D_800DDD60 = 0;
    if (var_s0 != NULL) {
        var_s2 = sp74;
        do {
            if ((*(s32 *)((char *)(var_s0) + 0x30)) != 0) {
                var_s1 = 0;
                if ((*(s32 *)((char *)(var_s0) + 0x2E)) & 1) {
                    if (D_800DCDD0 == 0) {
                        var_s1 = 1;
                    } else {
                        temp_v0 = (*(s32 *)((char *)(D_8008CFFC) + (D_800B0DF0->unk10 * 4)));
                        var_s2 = 0xFF;
                        if (func_1517EAAC((*(s32 *)((char *)(temp_v0) + 0x0)), (*(s32 *)((char *)(temp_v0) + 0x4)), var_s0, (*(s32 *)((char *)(temp_v0) + 0x8)), (char *)(var_s0) + 0xC) != 1) {
                            var_s1 = 1;
                        }
                        if ((*(s32 *)((char *)(var_s0) + 0x2A)) != 0xFFFC) {
                            var_s2 = -1;
                        }
                    }
                } else {
                    if (func_1517EC1C(var_s0, &sp6C) != 1) {
                        var_s1 = 1;
                    }
                    var_s2 = -1;
                    if (((*(s32 *)((char *)(var_s0) + 0x2C)) - sp6C) < 0x1E) {
                        var_s2 = 0x100;
                    }
                }
                var_v1 = NULL;
                if ((*(s32 *)((char *)(var_s0) + 0x2E)) & 2) {
                    var_v1 = &D_800DD2D0;
                }
                if (var_s1 == 0) {
                    temp_v0_2 = (*(s32 *)((char *)(var_s0) + 0x2F));
                    var_s4 = func_1517E4A8(var_s4, var_s0, *(&sp60 + temp_v0_2), *(&sp5C + temp_v0_2), (s32) *(&sp58 + temp_v0_2), var_s2, var_v1);
                } else if (var_v1 != NULL) {
                    *var_v1 = 0;
                }
            }
            var_s0 = (*(s32 *)((char *)(var_s0) + 0x24));
        } while (var_s0 != NULL);
        sp74 = var_s2;
    }
    return var_s4;
}

void *func_1517E4A8(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 *arg6) {
    s32 spB0;
    void * *sp8C;
    s8 sp89;
    s8 sp88;
    s8 sp87;
    s8 sp86;
    s16 sp84;
    s16 sp82;
    void * sp7C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    s16 temp_v1_2;
    s32 temp_a1;
    s32 temp_f6;
    s32 temp_f8;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s2_2;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    s32 var_v1;
    u8 *var_s1;
    u8 temp_s2;
    u8 temp_v0_2;
    void *temp_v0_3;
    void *var_s4;

    var_s4 = arg0;
    temp_f24 = (*(f32 *)((char *)(arg1) + 0xC)) - ((f32) D_800BE620 * 0.5f);
    temp_f26 = (*(f32 *)((char *)(arg1) + 0x10)) - ((f32) D_800BE624 * 0.5f);
    if (arg6 != NULL) {
        if (arg5 == -1) {
            goto block_5;
        }
        temp_f6 = (s32) temp_f24;
        temp_f8 = (s32) temp_f26;
        temp_lo = (s32) (((temp_f6 * temp_f6) + (temp_f8 * temp_f8)) * arg4) / 10;
        if (temp_lo < 0x78) {
            var_v0 = (s32) ((0x78 - temp_lo) * 0xB0) / 120;
        } else {
block_5:
            var_v0 = 0;
        }
        temp_s2 = *arg6;
        temp_t9 = D_800BE9E4 * 5;
        temp_v1 = var_v0 - temp_s2;
        if (temp_v1 < 0) {
            var_a0 = -temp_v1;
        } else {
            var_a0 = temp_v1;
        }
        if (var_a0 < temp_t9) {
            var_s2 = var_v0;
        } else if ((s32) temp_s2 < var_v0) {
            var_s2 = temp_s2 + temp_t9;
        } else {
            var_s2 = temp_s2 - temp_t9;
        }
        *arg6 = (u8) var_s2;
    }
    temp_lo_2 = (s32) ((((s32) temp_f24 * (s32) temp_f24) + ((s32) temp_f26 * (s32) temp_f26)) * arg4) / 10;
    if (((*(f32 *)((char *)(arg1) + 0xC)) < 2.0f) || ((f32) (D_800BE620 - 2) <= (*(f32 *)((char *)(arg1) + 0xC))) || (temp_f0 = (*(f32 *)((char *)(arg1) + 0x10)), (temp_f0 < 0.0f)) || ((f32) D_800BE624 <= temp_f0)) {
        var_s2_2 = 0;
    } else if (arg5 == -1) {
        var_s2_2 = 0;
    } else {
        var_s2_2 = (s32) ((0x1ADB00 / (s32) (temp_lo_2 + 0x2710)) * arg5) / 256;
    }
    temp_v1_2 = (*(s32 *)((char *)(arg1) + 0x28));
    temp_v0 = var_s2_2 - temp_v1_2;
    temp_a1 = D_800BE9E4 * 0xA;
    if (temp_v0 < 0) {
        var_a0_2 = -temp_v0;
    } else {
        var_a0_2 = temp_v0;
    }
    if (var_a0_2 < temp_a1) {
        (*(s16 *)((char *)(arg1) + 0x28)) = (s16) var_s2_2;
    } else if (var_s2_2 < temp_v1_2) {
        (*(s16 *)((char *)(arg1) + 0x28)) = (s16) (temp_v1_2 - temp_a1);
    } else {
        (*(s16 *)((char *)(arg1) + 0x28)) = (s16) (temp_v1_2 + temp_a1);
    }
    if ((temp_lo_2 < 0x30D40) && ((*(s32 *)((char *)(arg1) + 0x28)) > 0) && (fabsf((*(s32 *)((char *)(arg1) + 0xC))) < 2000.0f) && (fabsf((*(s32 *)((char *)(arg1) + 0x10))) < 2000.0f)) {
        D_800D2DA8 = 0xFF;
        D_800D2DA9 = 0xFF;
        D_800D2DAA = 0xFF;
        sp8C = &D_800903AC;
        sp87 = 0;
        sp88 = 0;
        sp89 = 0;
        if (D_800DDD60 == 0) {
            var_s4 = func_150950D4(func_1517EA4C(var_s4, temp_a1, temp_lo_2, arg5), &D_800903AC, 0, 0, 0, 0, 2, 0x100, 0x100, 3);
            D_800DDD60 = 1;
        }
        var_v1 = 0;
        var_s0 = 2;
        temp_s2_2 = (s32) ((*(s32 *)((char *)(arg1) + 0x28)) * (*(s32 *)((char *)(arg1) + 0x30))) >> 8;
        if (arg3 > 0) {
            var_s1 = (arg2 * 7) + &D_800A7250;
            do {
                temp_v0_2 = *var_s1;
                temp_f2 = (f32) var_s0;
                sp86 = (s8) temp_s2_2;
                spB0 = var_v1;
                temp_f14 = (*(s32 *)((char *)(arg1) + 0xC)) - ((temp_f24 * temp_f2) / 5.0f);
                temp_f12 = (f32) (temp_v0_2 << 0xC);
                D_800D2DAB = 0;
                sp82 = (s16) (s32) ((temp_f12 * D_800380A0) / 255.0f);
                sp84 = (s16) (s32) ((temp_f12 * D_800380A4) / 255.0f);
                temp_v0_3 = func_15095A48(temp_f12, temp_f14, var_s4, &sp7C, temp_f14, ((*(f32 *)((char *)(arg1) + 0x10)) - ((temp_f26 * temp_f2) / 5.0f)) + ((f32) temp_v0_2 * 0.015625f));
                (*(s32 *)((char *)(temp_v0_3) + 0x0)) = 0xE7000000;
                var_s4 = (char *)(temp_v0_3) + 8;
                (*(s32 *)((char *)(temp_v0_3) + 0x4)) = 0;
                var_v1 = spB0 + 1;
                var_s0 += 2;
                var_s1 += 1;
            } while (var_v1 != arg3);
        }
    }
    return var_s4;
}

void *func_1517EA4C(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;

    (*(s32 *)((char *)(arg0) + 0x0)) = 0xE7000000;
    (*(s32 *)((char *)(arg0) + 0x4)) = 0;
    temp_a0_2 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFCFFB3FF;
    (*(s32 *)((char *)(temp_a0_2) + 0x4)) = 0xFF65FEFF;
    temp_a0 = (char *)(temp_a0_2) + 8;
    (*(s32 *)((char *)(temp_a0_2) + 0x8)) = 0xEF002C0F;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = 0x504344;
    return (char *)(temp_a0) + 8;
}

s32 func_1517EAAC(f32 arg0, f32 arg1, void *arg2, f32 *arg3, f32 *arg4) {
    f32 sp84;
    f32 sp80;
    void * sp7C;
    f32 sp78;
    void * sp38;
    f32 sp34;
    f32 sp30;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f4;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = D_800DBFF0 + (D_80082FA4 * 0x9A0);
    func_15110360(D_80082FA4, &sp38, -(*(s32 *)((char *)(temp_v0) + 0x388)), -(*(s32 *)((char *)(temp_v0) + 0x380)), (*(s32 *)((char *)(temp_v0) + 0x5EC)));
    temp_v0_2 = D_800BE628 + (D_80082FA4 * 0x180);
    temp_f12 = (*(s32 *)((char *)(temp_v0_2) + 0x10));
    sp34 = (*(s32 *)((char *)(temp_v0_2) + 0xC));
    sp30 = temp_f12;
    func_150A7A00(temp_f12, &sp38, arg0, arg1, arg2, &sp84, &sp80, &sp7C, &sp78);
    if (sp78 > 10.0f) {
        temp_f0 = 1.0f / sp78;
        temp_f4 = sp84 * sp34 * temp_f0;
        sp84 = temp_f4;
        temp_f10 = sp80 * sp30 * temp_f0;
        sp80 = temp_f10;
        *arg3 = sp34 + temp_f4;
        *arg4 = sp30 - temp_f10;
        return 1;
    }
    *arg3 = 0.0f;
    *arg4 = 0.0f;
    return 0;
}

s32 func_1517EC1C(void *arg0, u32 *arg1) {
    f32 sp2C;
    f32 sp28;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    u16 temp_a3;
    void *temp_a1;
    void *temp_a2;

    if (func_1509563C((*(s32 *)((char *)(arg0) + 0x0)), (*(s32 *)((char *)(arg0) + 0x4)), (*(s32 *)((char *)(arg0) + 0x8)), (char *)(arg0) + 0xC, (char *)(arg0) + 0x10, &sp2C, &sp28, 4000.0f) == 1) {
        if ((*(s32 *)((char *)(arg0) + 0x2E)) & 4) {
            temp_f2 = (char *)((*(s32 *)((char *)(arg0) + 0x0))) - (char *)(*(s32 *)((char *)((D_800DBFF0)) + 0x2F8));
            temp_f12 = (char *)((*(s32 *)((char *)(arg0) + 0x4))) - (char *)(*(s32 *)((char *)((D_800DBFF0)) + 0x2FC));
            temp_f14 = (char *)((*(s32 *)((char *)(arg0) + 0x8))) - (char *)(*(s32 *)((char *)((D_800DBFF0)) + 0x300));
            if ((((temp_f2 * (*(s32 *)((char *)(arg0) + 0x14))) + (temp_f12 * (*(s32 *)((char *)(arg0) + 0x18))) + (temp_f14 * (*(s32 *)((char *)(arg0) + 0x1C)))) / sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14))) < (*(s32 *)((char *)(arg0) + 0x20))) {
                return 1;
            }
        }
        temp_a3 = (*(s32 *)((char *)(arg0) + 0x2A));
        temp_a1 = (((s32) temp_a3 >> 0xD) * 8) + &D_80089630;
        *arg1 = (u32) ((*(u32 *)((char *)(temp_a1) + 0x4)) + ((((s32) temp_a3 >> 2) & 0x7FF) << (*(u32 *)((char *)(temp_a1) + 0x0)))) >> 3;
        temp_a2 = D_800BE628 + (D_800BE9C0 * 0x10);
        (*(s16 *)((char *)(arg0) + 0x2C)) = (s16) (u32) (((f32) (*(s16 *)((char *)(temp_a2) + 0x4C)) + ((sp2C / sp28) * (f32) (*(s16 *)((char *)(temp_a2) + 0x44)))) * 32.0f);
        return 1;
    }
    return 0;
}
