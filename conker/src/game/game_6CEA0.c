/**
 * Auto-decompiled from asm/6CEA0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *func_150417AC(); /* extern */
void * func_150428D4();            /* extern */
void * *func_1509CA10();                              /* extern */
s32 func_1509CA78();                             /* extern */
s32 func_1509CA98();                             /* extern */
s32 func_1509CB68();                                /* extern */
s32 strlen();                                    /* extern */
extern s16 D_80084484;
extern s32 D_80084488;
extern s32 D_8008448C;
extern s8 D_80084490;
extern u8 D_80084494;
extern u8 D_80084498;
extern s32 D_8008449C;
extern s32 D_800859A0;
extern s32 D_80098930;
extern s32 D_80098944;
extern s32 D_80098948;
extern f32 D_800C6850;

void func_1503F9F0( s32 arg0, s16 *arg1, s16 *arg2) {
    s16 temp_v1;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 var_v0;
    s16 var_v0_2;
    s8 temp_a0;
    s8 temp_v1_2;
    u16 *temp_v0;

    temp_v1 = D_80084484 - 1;
    temp_v0 = D_800BE728[arg0];
    if (temp_v1 != 0) {
        D_80084484 = temp_v1;
        *arg1 = 0;
        *arg2 = 0;
        return;
    }
    temp_a0 = (*(s32 *)((char *)(temp_v0) + 0x2));
    D_80084484 = 5;
    if ((temp_a0 < -0x14) || (temp_a0 >= 0x15)) {
        *arg1 = (s16) temp_a0;
    } else {
        *arg1 = 0;
    }
    temp_v1_2 = (*(s32 *)((char *)(temp_v0) + 0x3));
    if ((temp_v1_2 < -0x14) || (temp_v1_2 >= 0x15)) {
        *arg2 = (s16) temp_v1_2;
    } else {
        *arg2 = 0;
    }
    (*(s32 *)((char *)(temp_v0) + 0x2)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x3)) = 0;
    temp_v1_3 = *arg1;
    if (temp_v1_3 < -1) {
        *arg1 = -1;
    } else {
        var_v0 = temp_v1_3;
        if (temp_v1_3 >= 2) {
            var_v0 = 1;
        }
        *arg1 = var_v0;
    }
    temp_v1_4 = *arg2;
    if (temp_v1_4 < -1) {
        *arg2 = -1;
        return;
    }
    var_v0_2 = temp_v1_4;
    if (temp_v1_4 >= 2) {
        var_v0_2 = 1;
    }
    *arg2 = var_v0_2;
}

void func_1503FB08(void) {
    D_80084488 = 0;
    D_800C6850 = 0.0f;
    D_8008448C = 0;
    D_80084490 = 0x1E;
    D_80084494 = 0;
}

s32 func_1503FB40(void **arg0, s32 arg1, s32 arg2) {
    s16 spE2;
    s16 spE0;
    u8 spDE;                                        /* compiler-managed */
    s32 spD8;
    s32 spD4;
    s32 spD0;
    s32 spCC;
    void * spC8;
    s32 spC4;
    s32 spA8;
    s32 spA0;
    s32 sp9C;
    f32 sp98;
    f32 sp94;
    s32 sp88;
    void * *var_s1_2;
    void * *var_v0;
    f32 temp_f20;
    f32 temp_f24;
    f32 var_f22;
    f32 var_f2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_t4;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_v1;
    s8 temp_t0;
    u16 var_s1;
    u8 temp_t4_2;
    void *temp_a0;
    void *var_v0_2;

    var_s5 = 0;
    var_s1 = D_800BE710;
    spDE = 0;
    spD4 = 0;
    spD0 = 0;
    spCC = 0;
    temp_v0 = func_1509CB68();
    spC4 = temp_v0;
    temp_a0 = *arg0;
    *arg0 = (char *)(temp_a0) + 8;
    (*(s32 *)((char *)(temp_a0) + 0x0)) = 0xDE000000;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = &D_800859A0;
    if (temp_v0 < 0x13) {
        var_s4 = temp_v0 & 0xFF;
    } else {
        var_s4 = 0x13;
    }
    temp_v0_2 = D_8008448C;
    spD8 = 1;
    if ((temp_v0_2 == 0) && (var_s1 & 0x20) && (var_s1 & 0x10)) {
        D_8008448C = 0x3C;
        func_15017790(temp_a0);
        func_150177F8();
    }
    if (temp_v0_2 != 0) {
        var_s1 = 0;
        temp_t4 = temp_v0_2 - D_800BE9E4;
        D_8008448C = temp_t4;
        if (temp_t4 <= 0) {
            D_8008448C = 0;
        }
    }
    if (var_s1 & (arg2 & 0xFFFF)) {
        temp_s1 = func_1509CA98(D_80084498 + 1);
        if (!((1 << (func_1509CA98(D_80084498 + 1) & 7)) & *((u8 *)(D_800D2E4C) + (temp_s1 >> 3)))) {
            return func_1509CA98(D_80084498 + 1);
        }
    }
    if ((var_s1 & (arg1 & 0xFFFF)) || (var_s1 & 0x4000)) {
        return -1;
    }
    func_1503F9F0(0, &spE2, &spE0);
    if (D_80084488 != 0) {
        var_f2 = -11.0f;
        D_800C6850 += 1.25f * (f32) (D_80084488 * D_800BE9E4);
        if (D_800C6850 < -11.0f) {

        } else if (D_800C6850 > 11.0f) {
            var_f2 = 11.0f;
        } else {
            var_f2 = D_800C6850;
        }
        D_800C6850 = var_f2;
        if (fabsf(D_800C6850) >= 11.0f) {
            var_v1 = 1;
            if ((*(s32 *)((*(s32 *)((D_800BE728))))) & 0x2000) {
                var_v1 = 3;
            }
            if (D_80084488 == 1) {
                temp_t4_2 = D_80084498 - var_v1;
                temp_v0_3 = temp_t4_2 & 0xFF;
                D_80084498 = temp_t4_2;
                if (spC4 < temp_v0_3) {
                    D_80084498 = temp_v0_3 + spC4;
                }
            } else if (D_80084488 == -1) {
                D_80084498 = (u8) ((s32) (D_80084498 + var_v1) % spC4);
            }
            D_80084488 = 0;
            D_800C6850 = 0.0f;
        }
    } else if ((var_s1 & 4) || (spE0 == -1)) {
        D_80084488 = -1;
        D_800C6850 = 0.0f;
    } else if ((var_s1 & 8) || (spE0 == 1)) {
        D_80084488 = 1;
        D_800C6850 = 0.0f;
    }
    temp_t9 = (D_80084498 - ((s32) (var_s4 - 1) >> 1)) & 0xFF;
    var_s3 = temp_t9;
    if (spC4 < temp_t9) {
        var_s3 = (temp_t9 + spC4) & 0xFF;
    }
    D_80084490 -= D_800BE9E4;
    if (D_80084490 <= 0) {
        D_80084490 = 0x1E;
        D_80084494 ^= 1;
    }
    sp88 = var_s4;
    do {
        temp_s0 = func_1509CA98(var_s3 + 1);
        if (D_8008448C != 0) {
            var_s1_2 = &D_80098930;
            func_150428D4(&D_80098930, &spD0, &spCC, &spC8);
        } else {
            func_150428D4(func_1509CA10(temp_s0), &spD0, &spCC, &spC8);
            if (*((temp_s0 >> 3) + (u8 *)(D_800D2E4C)) & (1 << (temp_s0 & 7))) {
                if (D_80084498 == var_s3) {
                    if (D_80084494 != 0) {
                        var_s1_2 = &D_80098948;
                    } else {
                        var_s1_2 = func_1509CA10(temp_s0);
                    }
                    func_150428D4(var_s1_2, &spD0, &spA8, &spC8);
                } else {
                    var_v0 = func_1509CA10(temp_s0);
                    goto block_53;
                }
            } else {
                var_v0 = func_1509CA10(temp_s0);
block_53:
                var_s1_2 = var_v0;
            }
        }
        temp_f20 = (f32) spD8 + 1.0f;
        temp_f24 = ((f32) D_800BE620 * 0.5f) - (f32) (spD0 >> 1);
        var_f22 = temp_f20 + D_800C6850;
        if (func_1509CA78(temp_s0) & 0x80000000) {
            func_150428D4(&D_80098944, &spA0, &sp9C, &spC8);
            sp94 = temp_f20 + D_800C6850;
            sp98 = ((f32) D_800BE620 * 0.5f) - (f32) (spA0 >> 1);
            *arg0 = func_150417AC(*arg0, sp98, sp94, &D_80098944, 0xFF, 0xFF, 0xFF, var_s5, 4096.0f, 4096.0f, strlen(&D_80098944));
            spD8 += sp9C;
            var_f22 += (f32) sp9C;
        }
        if (spD4 < 3) {
            var_s5 = ((spD4 << 6) + 0x40) & 0xFF;
        } else {
            var_s5 = 0xFF;
            if ((sp88 - 3) < spD4) {
                var_s5 = ((sp88 - spD4) << 6) & 0xFF;
            }
        }
        if (var_s1_2 == NULL) {
            var_s1_2 = &D_8008449C;
        }
        if ((D_8008448C == 0) && ((D_80084498 != var_s3) || (D_80084488 != 0))) {
            var_v0_2 = func_150417AC(*arg0, temp_f24, var_f22, var_s1_2, 0xFF, 0xFF, 0xFF, var_s5, 4096.0f, 4096.0f, strlen(var_s1_2));
        } else {
            var_v0_2 = func_150417AC(*arg0, temp_f24, var_f22, var_s1_2, 0xFF, 0, 0, var_s5, 4096.0f, 4096.0f, strlen(var_s1_2));
        }
        *arg0 = var_v0_2;
        spD8 += spCC;
        spD4 += 1;
        var_s3 = ((s32) ((var_s3 + 1) & 0xFF) % spC4) & 0xFF;
        temp_t0 = (spDE + 1) & 0xFF;
        spDE = temp_t0;
    } while (temp_t0 < sp88);
    return -2;
}
