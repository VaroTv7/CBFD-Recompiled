/**
 * Auto-decompiled from asm/1C2C60.s (non-matching)
 * Suggested renames applied: gGameState -> gGameState, gObjects -> gObjects
 * Object pool stride for gObjects is 812 (0x32C)
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *allocate_memory();                     /* extern */
void * func_1505D024();        /* extern */
void * func_1505D1C4(); /* extern */
s32 func_150A6360(); /* extern */
s32 func_150AC9C0(); /* extern */
u32 random_u32();                        /* extern */
f32 random_float();                          /* extern */
s32 func_1510F8D8();                /* extern */
void * func_15130280();          /* extern */
s32 func_1513F4E4();                    /* extern */
s32 func_15142B7C();                       /* extern */
s32 func_15142C10();      /* extern */
s32 func_15142E24(); /* extern */
void *func_15142FBC();           /* extern */
void * func_15143134();                   /* extern */
void * func_15143794();              /* extern */
void * func_15143874();            /* extern */
f32 func_15143E64();                      /* extern */
f32 func_15144528();                     /* extern */
void *func_15144B34();                           /* extern */
void * func_15145548(); /* extern */
void * func_15145740();        /* extern */
void * func_15145EA4();              /* extern */
s32 func_15146078();             /* extern */
void * func_151478F4();                            /* extern */
void * func_15147928();                            /* extern */
void *func_15147A80(); /* extern */
void * func_15147D64();                /* extern */
void * func_15147DA0(); /* extern */
s32 func_151602C0(); /* extern */
void * func_151617C4();                            /* extern */
void * func_151617E4();                            /* extern */
void * func_15167D84();           /* extern */
void * func_15168B10();                         /* extern */
void * func_15183ACC();                       /* extern */
void * func_1518D1C0();       /* extern */
void * func_151D5D60();   /* extern */
void * func_151D8868();                   /* extern */
void * memcpy();   /* extern */
void func_15198110();
void func_15198D88();
void func_151990AC();
void func_151993B4();                       /* static */
void func_15199980();                     /* static */
void func_1519BE1C(void *arg0, void *arg1, f32 arg2, f32 arg3);
s32 func_1519C09C();
void func_1519C258();                     /* static */
void func_1519CDB0(void *arg0, f32 arg1, void * arg2);
extern s32 D_8008F870;
extern s32 D_8008F87C;
extern s32 D_8008F880;
extern s32 D_8008F88C;
extern s32 D_8008F890;
extern s32 D_8008F894;
extern s32 D_8008F898;
extern s32 D_8008F89C;
extern s32 D_8008F8A0;
extern s32 D_8008F8A4;
extern s32 D_8008F8A8;
extern s32 D_8008F8B4;
extern s32 D_8008F8B8;
extern s32 D_8008F8BC;
extern s32 D_8008F8C0;
extern s32 D_8008F8C4;
extern s32 D_80090514;
extern s32 *D_80091064;
extern s32 D_800915B0;
extern s32 D_800A4AC8;
extern s32 D_800A8710;
extern s32 D_800A8728;
extern s32 D_800A8770;
extern s32 D_800A87A0;
extern s32 D_800A8A40;
extern s32 D_800A8A48;
extern s32 D_800A8A84;
extern u8 D_800A8A9C;
extern f32 D_800A8AA4;
extern f32 D_800A8AA8;
extern f32 D_800A8AAC;
extern f32 D_800A8AB0;
extern f32 D_800A8AB4;
extern f32 D_800A8AB8;
extern f32 D_800A8ABC;
extern f32 D_800A8AC0;
extern f32 D_800A8AC4;
extern f32 D_800A8AC8;
extern f32 D_800A8ACC;
extern f32 D_800A8AD0;
extern f32 D_800A8AD4;
extern f32 D_800A8AD8;
extern f32 D_800A8ADC;
extern f32 D_800A8AE0;
extern f32 D_800A8AE4;
extern f32 D_800A8AE8;
extern f32 D_800A8AEC;
extern f32 D_800A8AF0;
extern f32 D_800A8AF4;
extern f32 D_800A8AF8;
extern void *D_800A8AFC;
extern f32 D_800A8B00;
extern f32 D_800A8B04;
extern f32 D_800A8B08;
extern f32 D_800A8B0C;
extern f32 D_800A8B10;
extern f32 D_800A8B14;
extern f32 D_800A8B18;
extern f32 D_800A8B1C;
extern f32 D_800A8B20;
extern f32 D_800A8B24;
extern f32 D_800A8B28;
extern f32 D_800A8B2C;
extern f32 D_800A8B30;
extern f32 D_800A8B34;
extern f32 D_800A8B38;
extern f32 D_800A8B3C;
extern f32 D_800A8B40;
extern f32 D_800A8B44;
extern f32 D_800A8B48;
extern f32 D_800A8B4C;
extern f32 D_800A8B50;
extern f32 D_800A8B54;
extern f32 D_800A8B58;
extern f32 D_800A8B5C;
extern f32 D_800A8B60;
extern f32 D_800A8B64;
extern f32 D_800A8B68;
extern f32 D_800A8B6C;
extern f32 D_800A8B70;
extern f32 D_800CC2E4;
extern f32 D_800CC2EC;
extern s16 D_800CC3B4;
extern s16 D_800CC3B6;
extern s16 D_800CC3B8;
extern s32 D_800D2C9C;
extern s32 D_800D9C10;
extern s32 D_800DCE50;
extern void *D_800E08E0;
extern s32 D_800E08E4;
extern void *D_800E08E8;
extern s32 D_800E08EC;
extern s32 D_800E08F0;
void * func_151957B0();
void * func_15195DD4();
void * func_151994B8();

void *func_151957B0(void **arg1, void **arg2) {
    void *temp_v0;
    void *temp_v1;

    temp_v0 = allocate_memory(1, 0, 0);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x4)) = 0;
        temp_v1 = *arg2;
        if (temp_v1 != NULL) {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = temp_v1;
            (*(s32 *)((char *)((*arg2)) + 0x4)) = temp_v0;
            *arg2 = temp_v0;
        } else {
            (*(s32 *)((char *)(temp_v0) + 0x0)) = NULL;
            *arg2 = temp_v0;
            *arg1 = temp_v0;
        }
    }
    return temp_v0;
}

void func_1519582C(void) {
    D_800E08E4 = 0;
    D_800E08E0 = NULL;
    D_800E08EC = 0;
    D_800E08E8 = NULL;
    D_800E08F0 = -2;
}

s16 func_15195868(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s16 var_v0_2;
    s16 var_v1;
    s32 temp_v0;
    s32 var_s0;
    s8 temp_a1;
    s8 var_v0;

    var_s0 = arg2;
    *arg3 = 0;
    var_v1 = -1;
loop_1:
    var_v1 += 1;
    var_v0 = (*(s32 *)((var_v1 * 8) + (char *)(arg0)));
    if ((var_v0 != -3) && (var_v0 != -0x21)) {
loop_3:
        var_v1 += 1;
        var_v0 = (*(s32 *)((var_v1 * 8) + (char *)(arg0)));
        if (var_v0 != -3) {
            if (var_v0 != -0x21) {
                goto loop_3;
            }
        }
    }
    if (var_v0 == -0x21) {
        return -1;
    }
    if (((*(s32 *)((char *)((arg0 + (var_v1 * 8))) + 0x4)) == (*(s32 *)((char *)(D_800B0E58) + (arg1 * 4)))) || (arg1 == 0)) {
        var_s0 -= 1;
        if (var_s0 < 1) {
            if (var_v0 != -0xE) {
                do {
                    var_v1 += 1;
                } while ((*(s32 *)((var_v1 * 8) + (char *)(arg0))) != -0xE);
            }
            var_v0_2 = var_v1;
loop_13:
            temp_v0 = var_v0_2 + 1;
            *arg3 += 1;
            temp_a1 = (*(s32 *)((temp_v0 * 8) + (char *)(arg0)));
            var_v0_2 = temp_v0 + 1;
            if (temp_a1 == -0xB) {
                if ((*(s32 *)((var_v0_2 * 8) + (char *)(arg0))) == -0xE) {
                    goto loop_13;
                }
            }
            return var_v1;
        }
    }
    goto loop_1;
}

void *func_15195984(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_a0;
    s16 temp_a2;
    s16 temp_t5;
    s16 temp_t7;
    s16 var_a1_2;
    s16 var_v1_2;
    s32 var_a1;
    void *temp_v0;
    void *temp_v1;
    void *var_v1;

    temp_v0 = func_151957B0(0x3C, &D_800E08E8);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x18)) = 0;
        var_a1 = 0;
        var_v1 = temp_v0;
        do {
            var_a1 += 1;
            var_v1 = (char *)(var_v1) + 2;
            (*(s32 *)((char *)(var_v1) + 0x1A)) = -1;
        } while (var_a1 < 5);
        (*(s32 *)((char *)(temp_v0) + 0x26)) = -1;
        temp_v1 = (char *)(temp_v0) + (1 * 2);
        (*(s32 *)((char *)(temp_v1) + 0x28)) = -1;
        (*(s32 *)((char *)(temp_v1) + 0x2A)) = -1;
        (*(s32 *)((char *)(temp_v1) + 0x2C)) = -1;
        (*(s32 *)((char *)(temp_v1) + 0x26)) = -1;
        (*(s16 *)((char *)(temp_v0) + 0x8)) = (s16) arg0;
        temp_a0 = ((arg1 >> 0xC) & 0xFFF) + 2;
        temp_a2 = (arg1 & 0xFFF) + 2;
        var_v1_2 = temp_a0;
        var_a1_2 = temp_a2;
        if (arg3 != 0) {
            var_v1_2 = temp_a0 * 2;
            var_a1_2 = temp_a2 * 2;
        }
        temp_t5 = (arg2 >> 0xC) & 0xFFF;
        temp_t7 = arg2 & 0xFFF;
        (*(s32 *)((char *)(temp_v0) + 0xE)) = temp_t5;
        (*(s32 *)((char *)(temp_v0) + 0x10)) = temp_t7;
        (*(s32 *)((char *)(temp_v0) + 0xA)) = var_v1_2;
        (*(s32 *)((char *)(temp_v0) + 0xC)) = var_a1_2;
        (*(s16 *)((char *)(temp_v0) + 0xE)) = (s16) (temp_t5 * 8);
        (*(s16 *)((char *)(temp_v0) + 0x10)) = (s16) (temp_t7 * 8);
        (*(s32 *)((char *)(temp_v0) + 0x14)) = 1;
    }
    return temp_v0;
}

s16 func_15195A84( s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    return arg0;
}

void *func_15195AA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 sp50;
    s16 temp_v0;
    s16 var_s3;
    s32 temp_s2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s0;

    var_s4 = arg1;
    var_s7 = arg3;
    var_s5 = var_s7;
    var_s0 = NULL;
    if (arg0 == 0) {
        return NULL;
    }
    var_s6 = arg4;
    if (var_s7 == -1) {
        var_s5 = 0;
    }
loop_4:
    temp_v0 = func_15195868(arg0, var_s4, var_s5, &sp50);
    var_s3 = temp_v0;
    if (temp_v0 == -1) {
        var_s7 = 0;
        goto block_30;
    }
    if (var_s4 == 0) {
        var_s4 = D_800E08F0;
    }
    var_s0 = D_800E08E8;
    temp_v1 = arg0 + (temp_v0 * 8);
    temp_s2 = (*(s32 *)((char *)(temp_v1) + 0x4));
    if ((var_s0 != NULL) && ((*(s32 *)((char *)(var_s0) + 0x8)) != 0)) {
loop_10:
        var_s0 = (*(s32 *)((char *)(var_s0) + 0x4));
        if (var_s0 != NULL) {
            if ((*(s32 *)((char *)(var_s0) + 0x8)) != 0) {
                goto loop_10;
            }
        }
    }
    if (var_s0 == NULL) {
        temp_v0_2 = func_15195984(var_s4, temp_s2, (*(s32 *)((char *)(temp_v1) + 0x0)), arg2);
        var_s0 = temp_v0_2;
        if (temp_v0_2 != NULL) {
            var_s6 = 0;
            (*(s8 *)((char *)(temp_v0_2) + 0x12)) = (s8) arg6;
            (*(s8 *)((char *)(temp_v0_2) + 0x13)) = (s8) arg7;
            goto block_17;
        }
        return NULL;
    }
    var_s6 = 0;
    var_s3 = func_15195A84(var_s3, var_s0, temp_s2, arg2);
block_17:
    var_s5 += 1;
    if ((s32) (*(s32 *)((char *)(var_s0) + 0x14)) < sp50) {
        (*(u8 *)((char *)(var_s0) + 0x14)) = (u8) sp50;
    }
    if (arg5 == 0) {
        var_v0 = 0;
        if ((*(s32 *)((char *)(var_s0) + 0x1C)) != -1) {
loop_21:
            var_v0 += 1;
            if (var_v0 < 5) {
                if ((*(s32 *)((char *)(((char *)(var_s0) + (var_v0 * 2))) + 0x1C)) != -1) {
                    goto loop_21;
                }
            }
        }
        if (var_v0 < 5) {
            (*(s32 *)((char *)(((char *)(var_s0) + (var_v0 * 2))) + 0x1C)) = var_s3;
            (*(s8 *)((char *)(((char *)(var_s0) + var_v0)) + 0x30)) = (s8) sp50;
        }
    } else {
        var_v0_2 = 0;
        if ((*(s32 *)((char *)(var_s0) + 0x26)) != -1) {
loop_26:
            var_v0_2 += 1;
            if (var_v0_2 < 5) {
                if ((*(s32 *)((char *)(((char *)(var_s0) + (var_v0_2 * 2))) + 0x26)) != -1) {
                    goto loop_26;
                }
            }
        }
        if (var_v0_2 < 5) {
            (*(s32 *)((char *)(((char *)(var_s0) + (var_v0_2 * 2))) + 0x26)) = var_s3;
            (*(s8 *)((char *)(((char *)(var_s0) + var_v0_2)) + 0x35)) = (s8) sp50;
        }
    }
block_30:
    if (var_s7 != -1) {
        arg4 = var_s6;
        if (var_s4 == D_800E08F0) {
            D_800E08F0 -= 1;
        }
        return var_s0;
    }
    goto loop_4;
}

void func_15195D00(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp24;
    void *temp_v0;
    void *var_v0;
    void *var_v0_2;
    void *var_v1;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x18));
    var_v1 = temp_v0;
    if (temp_v0 != NULL) {
loop_1:
        if ((arg1 != (*(s32 *)((char *)(var_v1) + 0x8))) || (arg2 != (*(s32 *)((char *)(var_v1) + 0xC)))) {
            var_v0 = (*(s32 *)((char *)(var_v1) + 0x10));
            if (var_v0 != NULL) {
                var_v1 = var_v0;
                var_v0 = (*(s32 *)((char *)(var_v0) + 0x10));
            }
            if (var_v0 == NULL) {
                sp24 = var_v1;
                var_v0_2 = func_151957B0(0x14, &D_800E08E0);
                (*(s32 *)((char *)(var_v1) + 0x10)) = var_v0_2;
                goto block_8;
            }
            goto loop_1;
        }
    } else {
        var_v0_2 = func_151957B0(0x14, &D_800E08E0);
        (*(s32 *)((char *)(arg0) + 0x18)) = var_v0_2;
block_8:
        (*(s32 *)((char *)(var_v0_2) + 0x8)) = arg1;
        (*(s32 *)((char *)(var_v0_2) + 0xC)) = arg2;
        (*(s32 *)((char *)(var_v0_2) + 0x10)) = 0;
        (*(s8 *)((char *)(var_v0_2) + 0xE)) = (s8) arg3;
    }
}

void *func_15195DD4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp50;
    s16 temp_v0;
    s16 var_s2;
    s32 temp_s1;
    s32 var_fp;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_v1;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s0;

    f32 sp44;
    var_s3 = arg1;
    var_fp = arg3;
    var_s5 = var_fp;
    if (arg0 == 0) {
        return NULL;
    }
    var_s4 = arg4;
    (*(void **)&(var_s0)) = (*(void **)&(sp44));
    if (D_800BEAC0 != 0) {
        return NULL;
    }
    if (var_fp == -1) {
        var_s5 = 0;
    }
loop_6:
    temp_v0 = func_15195868(arg0, var_s3, var_s5, &sp50);
    var_s2 = temp_v0;
    if (temp_v0 == -1) {
        var_fp = 0;
        goto block_25;
    }
    if (var_s3 == 0) {
        var_s3 = D_800E08F0;
    }
    if (var_s4 != 0) {
        var_v1 = -1;
    } else {
        var_v1 = var_s3;
    }
    var_s0 = D_800E08E8;
    if ((var_s0 != NULL) && (var_v1 != (*(s32 *)((char *)(var_s0) + 0x8)))) {
loop_15:
        var_s0 = (*(s32 *)((char *)(var_s0) + 0x4));
        if (var_s0 != NULL) {
            if (var_v1 != (*(s32 *)((char *)(var_s0) + 0x8))) {
                goto loop_15;
            }
        }
    }
    temp_v1 = arg0 + (temp_v0 * 8);
    temp_s1 = (*(s32 *)((char *)(temp_v1) + 0x4));
    if (var_s0 == NULL) {
        temp_v0_2 = func_15195984(var_s3, temp_s1, (*(s32 *)((char *)(temp_v1) + 0x0)), arg2);
        var_s0 = temp_v0_2;
        if (temp_v0_2 != NULL) {
            var_s4 = 0;
            (*(s8 *)((char *)(temp_v0_2) + 0x12)) = (s8) arg5;
            (*(s8 *)((char *)(temp_v0_2) + 0x13)) = (s8) arg6;
            goto block_22;
        }
        return NULL;
    }
    var_s4 = 0;
    var_s2 = func_15195A84(var_s2, var_s0, temp_s1, arg2);
block_22:
    if ((s32) (*(s32 *)((char *)(var_s0) + 0x14)) < sp50) {
        (*(u8 *)((char *)(var_s0) + 0x14)) = (u8) sp50;
    }
    func_15195D00(var_s0, arg0, var_s2, sp50);
    var_s5 += 1;
block_25:
    if (var_fp != -1) {
        arg4 = var_s4;
        if (var_s3 == D_800E08F0) {
            D_800E08F0 -= 1;
        }
        return var_s0;
    }
    goto loop_6;
}

void func_15195FB0(void *arg0, s32 arg4, s32 arg5, s32 arg6) {
    func_15195DD4((*(s32 *)((char *)(arg0) + 0x1C)), arg4, arg5, arg6, 0, 0, 0);
}

void func_15195FF0(s32 arg0, s32 arg1) {
    s32 sp5C[64];
    s16 temp_t2;
    s16 temp_t3;
    s16 var_v0_2;
    s16 var_v0_4;
    s32 *var_t5_2;
    s32 *var_t5_3;
    s32 *var_v0;
    s32 *var_v0_3;
    s32 *var_v0_5;
    s32 *var_v0_6;
    s32 temp_s4;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t2_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u16 var_t4;
    u16 var_t5;
    void *temp_v0_2;
    void *var_a2;
    void *var_t3;
    void *var_t3_2;
    void *var_t3_3;
    void *var_t4_2;
    void *var_t4_3;

    var_a2 = D_800E08E8;
    if (var_a2 != NULL) {
        do {
            var_t4 = (*(s32 *)((char *)(var_a2) + 0xE));
            var_t5 = (*(s32 *)((char *)(var_a2) + 0x10));
            temp_t2 = (*(s32 *)((char *)(var_a2) + 0xA));
            temp_t3 = (*(s32 *)((char *)(var_a2) + 0xC));
            temp_v0 = ((s32) var_t4 / 8) + 2;
            var_s2 = temp_v0;
            temp_s4 = ((s32) var_t5 / 8) + 2;
            var_s3 = temp_s4;
            var_v1 = 0;
            if (temp_v0 >= temp_t2) {
                var_s2 = temp_v0 - temp_t2;
            }
            if (temp_s4 >= temp_t3) {
                var_s3 = temp_s4 - temp_t3;
            }
            var_v0 = &(&sp5C[0])[0];
            if ((s32) (*(s32 *)((char *)(var_a2) + 0x14)) > 0) {
loop_7:
                var_v1 += 1;
                var_v0 += 4;
                (*(s32 *)((char *)(var_v0) - 0x4)) = (s32) (((var_s2 & 0xFFF) << 0xC) | 0xF2000000 | (var_s3 & 0xFFF));
                var_s2 = var_s2 / 2;
                var_s3 = var_s3 / 2;
                if (var_v1 < 8) {
                    if (var_v1 < (s32) (*(s32 *)((char *)(var_a2) + 0x14))) {
                        goto loop_7;
                    }
                }
            }
            temp_t9 = temp_t2 * 8;
            temp_t6 = temp_t3 * 8;
            if (D_800BEAC0 == 0) {
                var_t4 += (*(s32 *)((char *)(var_a2) + 0x12)) * D_800BE9E4;
                var_t5 += (*(s32 *)((char *)(var_a2) + 0x13)) * D_800BE9E4;
            }
            if ((s32) var_t4 < 0) {
                var_t4 += temp_t9;
            } else if ((s32) var_t4 >= temp_t9) {
                var_t4 -= temp_t9;
            }
            if ((s32) var_t5 < 0) {
                var_t5 += temp_t6;
            } else if ((s32) var_t5 >= temp_t6) {
                var_t5 -= temp_t6;
            }
            (*(s32 *)((char *)(var_a2) + 0xE)) = var_t4;
            (*(s32 *)((char *)(var_a2) + 0x10)) = var_t5;
            if ((*(s32 *)((char *)(var_a2) + 0x1C)) != -1) {
                var_t2 = 0 * 2;
                var_t3 = (char *)(var_a2) + var_t2;
                var_v0_2 = (*(s32 *)((char *)(var_t3) + 0x1C));
                var_t4_2 = var_a2;
loop_21:
                var_t2 += 2;
                var_v1_2 = 0;
                if ((s32) (*(s32 *)((char *)(var_t4_2) + 0x30)) > 0) {
                    var_t5_2 = arg0 + (var_v0_2 * 8);
                    var_v0_3 = &sp5C[0];
                    do {
                        temp_t7 = *var_v0_3;
                        var_v1_2 += 1;
                        var_v0_3 += 4;
                        *var_t5_2 = temp_t7;
                        var_t5_2 += 0x10;
                    } while (var_v1_2 < (s32) (*(s32 *)((char *)(var_t4_2) + 0x30)));
                }
                var_t3 = (char *)(var_t3) + 2;
                var_t4_2 = (char *)(var_t4_2) + 1;
                if (var_t2 < 0xA) {
                    var_v0_2 = (*(s32 *)((char *)(var_t3) + 0x1C));
                    if (var_v0_2 != -1) {
                        goto loop_21;
                    }
                }
            }
            var_t2_2 = 0 * 2;
            var_t3_2 = (char *)(var_a2) + var_t2_2;
            var_t4_3 = var_a2;
            if ((*(s32 *)((char *)(var_a2) + 0x26)) != -1) {
                var_v0_4 = (*(s32 *)((char *)(var_t3_2) + 0x26));
loop_28:
                var_t2_2 += 2;
                var_v1_3 = 0;
                if ((s32) (*(s32 *)((char *)(var_t4_3) + 0x35)) > 0) {
                    var_t5_3 = arg1 + (var_v0_4 * 8);
                    var_v0_5 = &sp5C[0];
                    do {
                        temp_t8 = *var_v0_5;
                        var_v1_3 += 1;
                        var_v0_5 += 4;
                        *var_t5_3 = temp_t8;
                        var_t5_3 += 0x10;
                    } while (var_v1_3 < (s32) (*(s32 *)((char *)(var_t4_3) + 0x35)));
                }
                var_t3_2 = (char *)(var_t3_2) + 2;
                var_t4_3 = (char *)(var_t4_3) + 1;
                if (var_t2_2 < 0xA) {
                    var_v0_4 = (*(s32 *)((char *)(var_t3_2) + 0x26));
                    if (var_v0_4 != -1) {
                        goto loop_28;
                    }
                }
            }
            var_t3_3 = (*(s32 *)((char *)(var_a2) + 0x18));
            if (var_t3_3 != NULL) {
                do {
                    var_v1_4 = 0;
                    var_v0_6 = &sp5C[0];
                    if ((s32) (*(s32 *)((char *)(var_t3_3) + 0xE)) > 0) {
                        var_t2_3 = (*(s32 *)((char *)(var_t3_3) + 0xC)) * 8;
                        do {
                            var_v1_4 += 1;
                            (*(s32 *)((char *)((*(s32 *)((char *)(var_t3_3) + 0x8))) + var_t2_3)) = *var_v0_6;
                            var_t2_3 += 0x10;
                            var_v0_6 += 4;
                        } while (var_v1_4 < (s32) (*(s32 *)((char *)(var_t3_3) + 0xE)));
                    }
                    temp_v0_2 = (*(s32 *)((char *)(var_t3_3) + 0x10));
                    var_t3_3 = NULL;
                    if (temp_v0_2 != NULL) {
                        var_t3_3 = temp_v0_2;
                    }
                } while (var_t3_3 != NULL);
            }
            var_a2 = (*(s32 *)((char *)(var_a2) + 0x4));
        } while (var_a2 != NULL);
    }
}

void func_15196318(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        (*(s32 *)((char *)(arg0) + 0x12)) = arg1;
        (*(s32 *)((char *)(arg0) + 0x13)) = arg2;
    }
}

void func_15196330(void *arg0) {
    void *sp1C;
    s8 temp_v1;
    s8 temp_v1_2;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x65));
    if (temp_v1 != -1) {
        sp1C = temp_v0;
        ((s32 (*)())((char *)(&D_8008F898 + (temp_v1 * 4))))(arg0);
    }
    temp_v1_2 = (*(s32 *)((char *)(temp_v0) + 0x62));
    if (temp_v1_2 != -1) {
        ((s32 (*)())((char *)(&D_8008F88C + (temp_v1_2 * 4))))(arg0);
    }
    func_151478F4(arg0);
}

void func_151963B4(void *arg0) {
    void *sp1C;
    s8 temp_v1;
    s8 temp_v1_2;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x65));
    if (temp_v1 != -1) {
        sp1C = temp_v0;
        ((s32 (*)())((char *)(&D_8008F898 + (temp_v1 * 4))))(arg0);
    }
    temp_v1_2 = (*(s32 *)((char *)(temp_v0) + 0x62));
    if (temp_v1_2 != -1) {
        ((s32 (*)())((char *)(&D_8008F88C + (temp_v1_2 * 4))))(arg0);
    }
    func_15147928(arg0);
}

void *func_15196438(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s8 spF1;
    s32 spEC;
    u16 spEA;
    s16 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    u8 spDB;
    u8 spDA;
    u8 spD9;
    u8 spD8;
    f32 spD4;
    f32 spD0;
    u8 spCC;
    f32 spC8;
    f32 spC4;
    u8 spC0;
    f32 spBC;
    f32 spB8;
    u8 spB6;
    u8 spB5;
    s8 spB4;
    s16 spB2;
    s8 spB1;
    s8 spB0;
    s8 spAF;
    s8 spAE;
    s8 spAD;
    s8 spAC;
    f32 spA8;
    f32 spA4;
    u8 spA0;
    u8 sp9F;
    u8 sp9E;
    u8 sp9D;
    s8 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp8C;
    f32 sp88;
    f32 sp78;
    f32 sp6C;
    void * sp60;
    void * sp54;
    s8 sp53;
    s8 sp52;
    u8 sp51;
    u8 sp50;
    void *sp4C;
    void *sp48;
    s32 sp44;
    void *sp3C;
    s32 temp_a2;
    s8 temp_a1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;

    f32 sp70;
    f32 sp74;
    if (arg0 == NULL) {
        return NULL;
    }
    if ((*(s32 *)((char *)(arg0) + 0x1D4)) == 0) {
        return NULL;
    }
    sp4C = arg0;
    temp_v0 = (arg1 * 0x60) + &D_800A87A0;
    sp50 = (*(s32 *)((char *)(arg0) + 0x3B));
    sp52 = 2;
    sp9C = 0;
    sp98 = 0.0f;
    spBC = 0.0f;
    spC8 = 0.0f;
    spD4 = 0.0f;
    spAC = (*(s32 *)((char *)(temp_v0) + 0x3C));
    spAD = (*(s32 *)((char *)(temp_v0) + 0x3D));
    spAE = (*(s32 *)((char *)(temp_v0) + 0x3E));
    spE8 = (*(s32 *)((char *)(temp_v0) + 0x0));
    sp8C = (*(s32 *)((char *)(temp_v0) + 0x4));
    sp94 = (*(s32 *)((char *)(temp_v0) + 0x8));
    sp9D = (*(s32 *)((char *)(temp_v0) + 0xC));
    spF1 = (s8) (*(s8 *)((char *)(temp_v0) + 0x10));
    sp51 = (*(s32 *)((char *)(temp_v0) + 0x14));
    (*(s32 *)((char *)&(sp54) + 0x0)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x18));
    (*(s32 *)((char *)&(sp54) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x1C));
    (*(s32 *)((char *)&(sp54) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x20));
    (*(s32 *)((char *)&(sp60) + 0x0)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x24));
    (*(s32 *)((char *)&(sp60) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x28));
    (*(s32 *)((char *)&(sp60) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x2C));
    spCC = (*(s32 *)((char *)(temp_v0) + 0x54));
    spAF = (*(s32 *)((char *)(temp_v0) + 0x3F));
    sp53 = (*(s32 *)((char *)(temp_v0) + 0x30));
    sp9E = (*(s32 *)((char *)(temp_v0) + 0x31));
    sp9F = (*(s32 *)((char *)(temp_v0) + 0x32));
    spA0 = (*(s32 *)((char *)(temp_v0) + 0x33));
    spEA = (*(s32 *)((char *)(temp_v0) + 0x44));
    spB6 = (*(s32 *)((char *)(temp_v0) + 0x47));
    spC0 = (*(s32 *)((char *)(temp_v0) + 0x4C));
    spA4 = (*(s32 *)((char *)(temp_v0) + 0x34));
    spA8 = (*(s32 *)((char *)(temp_v0) + 0x38));
    spB8 = (*(s32 *)((char *)(temp_v0) + 0x48));
    spC4 = (*(s32 *)((char *)(temp_v0) + 0x50));
    spD0 = (*(s32 *)((char *)(temp_v0) + 0x58));
    spB0 = (*(s32 *)((char *)(temp_v0) + 0x40));
    spB1 = (*(s32 *)((char *)(temp_v0) + 0x41));
    spB4 = (*(s32 *)((char *)(temp_v0) + 0x42));
    spB5 = (*(s32 *)((char *)(temp_v0) + 0x46));
    spD8 = (*(s32 *)((char *)(temp_v0) + 0x5C));
    spD9 = (*(s32 *)((char *)(temp_v0) + 0x5D));
    spDA = (*(s32 *)((char *)(temp_v0) + 0x5E));
    spDB = (*(s32 *)((char *)(temp_v0) + 0x5F));
    if (spAF != -1) {
        spB2 = ((s32 (*)())((char *)(&D_8008F890 + (spAF * 4))))();
    } else {
        spB2 = 0;
    }
    temp_a2 = (*(s32 *)((char *)(sp4C) + 0x1D4)) + (sp51 << 6);
    sp44 = temp_a2;
    func_15143134(&sp54, &sp6C, temp_a2);
    func_15143134(&sp60, &sp78, sp44);
    spEC = 3;
    spDC = sp6C;
    spE0 = sp70;
    spE4 = sp74;
    sp88 = 0.0f;
    temp_v0_2 = func_15147A80(&spDC, 0x90, 0x24, 2, 2, 2, 0, 0, 0, (s32) arg2, arg3);
    sp48 = temp_v0_2;
    if (temp_v0_2 != NULL) {
        temp_a0 = (*(s32 *)((char *)(temp_v0_2) + 0x98));
        sp3C = temp_a0;
        memcpy(temp_a0, &sp4C, 0x90);
        temp_a1 = (*(s32 *)((char *)(sp3C) + 0x7));
        if (temp_a1 != -1) {
            (*(s32 *)((char *)(sp3C) + 0x38)) = ((s32 (*)())((char *)(&D_8008F870 + (temp_a1 * 4))))(sp48, temp_a1);
        } else {
            (*(s32 *)((char *)(sp3C) + 0x38)) = 0.0f;
        }
        if (spAC != -1) {
            ((s32 (*)())((char *)(&D_8008F87C + (spAC * 4))))(sp48);
        }
    }
    return sp48;
}

s32 func_15196748(void *arg0) {
    void *sp34;
    s32 sp30;
    void *sp20;
    s16 var_v1;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_a1;
    s32 var_s1_3;
    s32 var_t2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 temp_v0_5;
    s8 temp_v1;
    s8 var_s1;
    s8 var_s1_2;
    s8 var_v1_2;
    u8 var_a0;
    u8 var_a0_2;
    void *temp_t5;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a3;

    var_a3 = (*(s32 *)((char *)(arg0) + 0x98));
    var_t2 = (*(s32 *)((char *)(arg0) + 0x94));
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(var_a3) + 0x6)) & 1)) {
        return 0;
    }
    var_s1 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_s1 -= 1;
            if (var_s1 < 0) {
                var_s1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v0 = var_t2 + (var_s1 * 0x24);
            temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x1E));
            (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x10)) + ((*(f32 *)((char *)(var_a3) + 0x40)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_v0) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x0)) + ((*(f32 *)((char *)(temp_v0) + 0xC)) * D_800BE9A4));
            (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x4)) + ((*(f32 *)((char *)(temp_v0) + 0x10)) * D_800BE9A4));
            (*(s32 *)((char *)(temp_v0) + 0x1F)) = 0xFF;
            (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x8)) + ((*(f32 *)((char *)(temp_v0) + 0x14)) * D_800BE9A4));
            if (temp_v1 > 0) {
                (*(s8 *)((char *)(temp_v0) + 0x1E)) = (s8) (temp_v1 - D_800BE9E4);
            } else {
                (*(s16 *)((char *)(temp_v0) + 0x1C)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x1C)) - ((*(s16 *)((char *)(var_a3) + 0x52)) * D_800BE9E4));
            }
            var_v1 = (*(s32 *)((char *)(temp_v0) + 0x1C));
            if ((var_v1 < (s32) (*(s32 *)((char *)(var_a3) + 0x6A))) && ((*(s32 *)((char *)(temp_v0) + 0x21)) == 0)) {
                sp20 = temp_v0;
                sp34 = var_a3;
                sp30 = var_t2;
                func_15198110(arg0, var_s1, &D_800BE9A4, var_a3);
                var_v1 = (*(s32 *)((char *)(temp_v0) + 0x1C));
            }
            (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x18)) + ((*(f32 *)((char *)(var_a3) + 0x58)) * D_800BE9A4));
            if (var_v1 < 0) {
                (*(u8 *)((char *)(var_a3) + 0x6)) = (u8) ((*(u8 *)((char *)(var_a3) + 0x6)) & 0xFFFD);
                if (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    do {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    } while (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D)));
                }
                (*(s32 *)((char *)((var_t2 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x24))) + 0x1C)) = 0;
            }
        } while (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    var_s1_2 = (*(s32 *)((char *)(arg0) + 0x2D));
    if ((*(s32 *)((char *)(var_a3) + 0x6)) & 2) {
        var_v1_2 = 0;
        var_a0 = (*(s32 *)((char *)(var_a3) + 0x8C));
loop_22:
        temp_lo = var_s1_2 * 0x24;
        var_s1_2 += 1;
        var_a0 = (u8) (s16) (var_a0 - 1);
        (*(s32 *)((char *)((var_t2 + temp_lo)) + 0x1F)) = var_v1_2;
        var_v1_2 = (var_v1_2 + (*(s32 *)((char *)(var_a3) + 0x8D))) & 0xFF;
        if (var_s1_2 == (*(s32 *)((char *)(arg0) + 0x25))) {
            var_s1_2 = 0;
        }
        if ((var_a0 != 0) && (var_s1_2 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
            goto loop_22;
        }
    }
    if ((*(s32 *)((char *)(var_a3) + 0x6)) & 4) {
        var_a1 = 0;
        var_a0_2 = (*(s32 *)((char *)(var_a3) + 0x8E));
        var_s1_3 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
        if (var_s1_3 < 0) {
            var_s1_3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
        }
loop_30:
        temp_lo_2 = var_s1_3 * 0x24;
        var_s1_3 -= 1;
        var_a0_2 = (u8) (s16) (var_a0_2 - 1);
        temp_v0_2 = var_t2 + temp_lo_2;
        (*(u8 *)((char *)(temp_v0_2) + 0x1F)) = (u8) ((s32) ((*(u8 *)((char *)(temp_v0_2) + 0x1F)) * var_a1) >> 8);
        var_a1 = (var_a1 + (*(s32 *)((char *)(var_a3) + 0x8F))) & 0xFF;
        if (var_s1_3 < 0) {
            var_s1_3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
        }
        if ((var_a0_2 != 0) && (var_s1_3 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
            goto loop_30;
        }
    }
    temp_v0_3 = (*(s32 *)((char *)(var_a3) + 0x64));
    if (temp_v0_3 != -1) {
        sp34 = var_a3;
        sp30 = var_t2;
        ((s32 (*)())((char *)(&D_8008F894 + (temp_v0_3 * 4))))(arg0);
    }
    temp_v0_4 = (*(s32 *)((char *)(var_a3) + 0x68));
    if (temp_v0_4 != -1) {
        sp34 = var_a3;
        sp30 = var_t2;
        ((s32 (*)())((char *)(&D_8008F89C + (temp_v0_4 * 4))))(arg0);
    }
    temp_v0_5 = (*(s32 *)((char *)(var_a3) + 0x61));
    if (temp_v0_5 != -1) {
        sp30 = var_t2;
        if (((s32 (*)())((char *)(&D_8008F880 + (temp_v0_5 * 4))))(arg0) == 0) {
            return 0;
        }
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_t5 = var_t2 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x24);
        (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(temp_t5) + 0x8));
        return 1;
    }
    (*(s32 *)((char *)(arg0) + 0x54)) = 0;
    (*(s32 *)((char *)(arg0) + 0x58)) = 0;
    (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
    return 1;
}

s32 func_15196B4C(void *arg0) {
    f32 sp10C;
    f32 spF8;
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
    void *sp90;
    void *sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f20;
    f32 var_f22;
    f32 var_f26;
    s32 temp_s1;
    s32 temp_s3;
    s32 var_v0;
    s8 temp_v1;
    s8 temp_v1_6;
    void *temp_s2;
    void *temp_t2;
    void *temp_t9;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    f32 sp110;
    f32 sp114;
    temp_s2 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s3 = (*(s32 *)((char *)(arg0) + 0x94));
    var_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s2) + 0x0))) + 0x1D4));
    if (var_v0 == 0) {
        return 0;
    }
    temp_v1 = (*(s32 *)((char *)(temp_s2) + 0x7));
    if (temp_v1 != -1) {
        (*(s32 *)((char *)(temp_s2) + 0x44)) = ((s32 (*)())((char *)(&D_8008F870 + (temp_v1 * 4))))(arg0);
        var_v0 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_s2) + 0x0))) + 0x1D4));
    }
    temp_s1 = var_v0 + ((*(s32 *)((char *)(temp_s2) + 0x5)) << 6);
    func_15143134((char *)(temp_s2) + 8, (char *)(arg0) + 0x10, temp_s1);
    func_15143134((char *)(temp_s2) + 0x14, &sp10C, temp_s1);
    temp_t2 = (char *)(temp_s2) + 0x20;
    (*(f32 *)((char *)(temp_s2) + 0x4C)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x4C)) + ((*(f32 *)((char *)(temp_s2) + 0x48)) * D_800BE9A4));
    temp_f2 = (*(s32 *)((char *)(temp_s2) + 0x4C));
    if (temp_f2 > 1.0f) {
        sp90 = temp_t2;
        temp_f0 = 1.0f / temp_f2;
        (*(s32 *)((char *)&(spD0) + 0x0)) = (*(s32 *)((char *)(temp_s2) + 0x20));
        temp_t9 = (char *)(temp_s2) + 0x2C;
        (*(s32 *)((char *)&(spD0) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t2) + 0x4));
        var_f20 = (*(s32 *)((char *)(temp_s2) + 0x3C)) + D_800BE9A4;
        (*(s32 *)((char *)&(spD0) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t2) + 0x8));
        sp8C = temp_t9;
        (*(s32 *)((char *)&(spC4) + 0x0)) = (*(s32 *)((char *)(temp_s2) + 0x2C));
        (*(s32 *)((char *)&(spC4) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t9) + 0x4));
        (*(s32 *)((char *)&(spC4) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t9) + 0x8));
        temp_f28 = var_f20 * temp_f0;
        temp_f12 = (*(s32 *)((char *)(temp_s2) + 0x5C));
        var_f22 = (*(s32 *)((char *)(temp_s2) + 0x38));
        var_f26 = temp_f12 + ((*(s32 *)((char *)(temp_s2) + 0x58)) * var_f20);
        temp_f30 = ((*(s32 *)((char *)(arg0) + 0x10)) - (*(s32 *)((char *)(temp_s2) + 0x20))) * temp_f0;
        temp_f8 = (*(s32 *)((char *)(arg0) + 0x18)) - (*(s32 *)((char *)(temp_s2) + 0x28));
        spF8 = temp_f8;
        temp_f10 = sp10C - (*(s32 *)((char *)(temp_s2) + 0x2C));
        spE4 = temp_f10;
        temp_f6 = sp110 - (*(s32 *)((char *)(temp_s2) + 0x30));
        spE8 = temp_f6;
        temp_f8_2 = temp_f12 - var_f26;
        spE0 = temp_f8_2;
        spDC = (*(s32 *)((char *)(temp_s2) + 0x44)) - var_f22;
        sp88 = ((*(s32 *)((char *)(arg0) + 0x14)) - (*(s32 *)((char *)(temp_s2) + 0x24))) * temp_f0;
        sp84 = temp_f8 * temp_f0;
        sp80 = temp_f10 * temp_f0;
        sp7C = temp_f6 * temp_f0;
        sp78 = (sp114 - (*(s32 *)((char *)(temp_s2) + 0x34))) * temp_f0;
        sp74 = temp_f8_2 * temp_f0;
        sp70 = spDC * temp_f0;
        do {
            (*(f32 *)((char *)(temp_s2) + 0x7C)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x7C)) + (*(f32 *)((char *)(temp_s2) + 0x78)));
            if ((*(s32 *)((char *)(temp_s2) + 0x7C)) > 1.0f) {
                func_15198D88(arg0, &sp10C);
            }
            (*(f32 *)((char *)(temp_s2) + 0x88)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x88)) + (*(f32 *)((char *)(temp_s2) + 0x84)));
            if ((*(s32 *)((char *)(temp_s2) + 0x88)) > 1.0f) {
                func_151990AC(arg0, &sp10C);
            }
            (*(s32 *)((char *)((temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x21)) = 0;
            (*(s32 *)((char *)(temp_s3) + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24))) = spD0;
            (*(s32 *)((char *)((temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x4)) = spD4;
            (*(s32 *)((char *)((temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x8)) = spD8;
            (*(f32 *)((char *)((temp_s3 + ((s32)((*(f32 *)((char *)(arg0) + 0x2E)) * 0x24)))) + 0xC)) = (f32) ((spC4 - spD0) * var_f22);
            (*(f32 *)((char *)((temp_s3 + ((s32)((*(f32 *)((char *)(arg0) + 0x2E)) * 0x24)))) + 0x10)) = (f32) ((spC8 - spD4) * var_f22);
            (*(f32 *)((char *)((temp_s3 + ((s32)((*(f32 *)((char *)(arg0) + 0x2E)) * 0x24)))) + 0x14)) = (f32) ((spCC - spD8) * var_f22);
            (*(s32 *)((char *)((temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x18)) = var_f26;
            (*(s16 *)((char *)((temp_s3 + ((*(s16 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x1C)) = (s16) (*(s16 *)((char *)(temp_s2) + 0x53));
            (*(u8 *)((char *)((temp_s3 + ((*(u8 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x1E)) = (u8) (*(u8 *)((char *)(temp_s2) + 0x54));
            (*(s32 *)((char *)((temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x1F)) = 0xFF;
            (*(u8 *)((char *)((temp_s3 + ((*(u8 *)((char *)(arg0) + 0x2E)) * 0x24))) + 0x20)) = (u8) (*(u8 *)((char *)(temp_s2) + 0x50));
            (*(u8 *)((char *)(temp_s2) + 0x50)) = (u8) ((*(u8 *)((char *)(temp_s2) + 0x50)) + (random_u32() % 6U) + 3);
            temp_v1_2 = temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24);
            (*(f32 *)((char *)(temp_v1_2) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v1_2) + 0x10)) + ((*(f32 *)((char *)(temp_s2) + 0x40)) * var_f20));
            temp_v1_3 = temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24);
            (*(f32 *)((char *)(temp_v1_3) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_v1_3) + 0x0)) + ((*(f32 *)((char *)(temp_v1_3) + 0xC)) * var_f20));
            temp_v1_4 = temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24);
            (*(f32 *)((char *)(temp_v1_4) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v1_4) + 0x4)) + ((*(f32 *)((char *)(temp_v1_4) + 0x10)) * var_f20));
            temp_v1_5 = temp_s3 + ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x24);
            temp_f6_2 = (*(s32 *)((char *)(temp_v1_5) + 0x14)) * var_f20;
            var_f20 -= temp_f28;
            (*(f32 *)((char *)(temp_v1_5) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v1_5) + 0x8)) + temp_f6_2);
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
            }
            temp_v1_6 = (*(s32 *)((char *)(arg0) + 0x2D));
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
            if (temp_v1_6 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v1_6 + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                }
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
            }
            spD0 += temp_f30;
            spD4 += sp88;
            spD8 += sp84;
            spC4 += sp80;
            spC8 += sp7C;
            spCC += sp78;
            var_f22 += sp70;
            var_f26 += sp74;
            (*(f32 *)((char *)(temp_s2) + 0x4C)) = (f32) ((*(f32 *)((char *)(temp_s2) + 0x4C)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s2) + 0x4C)) > 1.0f);
        (*(f32 *)((char *)(sp90) + 0x0)) = (f32) (*(f32 *)((char *)&(spD0) + 0x0));
        (*(s32 *)((char *)(sp90) + 0x4)) = (s32) (*(s32 *)((char *)&(spD0) + 0x4));
        (*(s32 *)((char *)(sp90) + 0x8)) = (s32) (*(s32 *)((char *)&(spD0) + 0x8));
        (*(f32 *)((char *)(sp8C) + 0x0)) = (f32) (*(f32 *)((char *)&(spC4) + 0x0));
        (*(s32 *)((char *)(sp8C) + 0x4)) = (s32) (*(s32 *)((char *)&(spC4) + 0x4));
        (*(s32 *)((char *)(sp8C) + 0x8)) = (s32) (*(s32 *)((char *)&(spC4) + 0x8));
        (*(s32 *)((char *)(temp_s2) + 0x38)) = var_f22;
        (*(s32 *)((char *)(temp_s2) + 0x3C)) = var_f20;
    }
    return 1;
}

void *func_15197148(void *arg0, void *arg1, s32 arg2) {
    void *sp134;
    f32 sp124;
    f32 sp118;
    f32 spEC;
    s8 spDD;
    f32 spD8;
    u8 spD3;
    u8 spD2;
    u16 spD0;
    u16 spCE;
    u8 spCC;
    s32 *spC8;
    s32 spC4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
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
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f30;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f28;
    f32 var_f28_2;
    f32 var_f30;
    f32 var_f30_2;
    s16 temp_t6;
    s16 temp_t7;
    s32 temp_s7;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_v0;
    s32 var_s3;
    s32 var_v0;
    u8 temp_a1;
    u8 temp_a3;
    u8 var_s4;
    u8 var_t0;
    void *temp_fp;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s5;
    void *temp_t2;
    void *temp_t5;
    void *temp_t6_2;
    void *temp_t8;
    void *temp_v1;
    void *var_s0;
    void *var_s2;

    f32 sp11C;
    f32 sp120;
    f32 sp128;
    f32 sp12C;
    var_s2 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &sp134, NULL);
        if (sp134 != NULL) {
            temp_fp = (*(s32 *)((char *)(arg0) + 0x98));
            temp_s7 = (*(s32 *)((char *)(arg0) + 0x94));
            temp_s5 = (arg2 * 0x9A0) + D_800DBFF0 + 0x2F8;
            spDD = 1;
            spC8 = &spC4;
            spC4 = (*(s32 *)((char *)&(D_800915B0) + 0x0));
            spCC = (*(s32 *)((char *)&(D_800915B0) + 0xA));
            spCE = (*(s32 *)((char *)&(D_800915B0) + 0x4));
            spD0 = (*(s32 *)((char *)&(D_800915B0) + 0x6));
            spD2 = (*(s32 *)((char *)&(D_800915B0) + 0x8));
            spD3 = (*(s32 *)((char *)&(D_800915B0) + 0x9));
            temp_a1 = (*(s32 *)((char *)(temp_fp) + 0x51));
            var_s2 = func_15142FBC(func_1513F4E4(func_15142B7C(func_15142C10(func_15142E24(var_s2, &spC8, 0, 0, 0x100, 0x100, 0, 4, 0, &spDD, 3), temp_a1, temp_a1, temp_a1, 0xFF, &spDD), 1, 0x160600), 0xB, &spDD), D_800D2C9C | 0x80000 | 0x2CA0, 0x5049D8, &spDD);
            if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                var_s3 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_s3 < 0) {
                    var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                (*(s32 *)((char *)&(sp118) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                (*(s32 *)((char *)&(sp118) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                var_s0 = temp_s7 + (var_s3 * 0x24);
                (*(s32 *)((char *)&(sp118) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
                (*(s32 *)((char *)&(sp124) + 0x0)) = (*(s32 *)((char *)(var_s0) + 0x0));
                (*(s32 *)((char *)&(sp124) + 0x4)) = (s32) (*(s32 *)((char *)(var_s0) + 0x4));
                (*(s32 *)((char *)&(sp124) + 0x8)) = (s32) (*(s32 *)((char *)(var_s0) + 0x8));
                var_t0 = (*(s32 *)((char *)(var_s0) + 0x20));
                var_s4 = var_t0;
                spD8 = (*(s32 *)((char *)(temp_fp) + 0x5C));
            } else {
                var_v0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                if (var_v0 < 0) {
                    var_v0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                var_s3 = var_v0 - 1;
                if (var_s3 < 0) {
                    var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                }
                temp_v1 = temp_s7 + (var_v0 * 0x24);
                (*(s32 *)((char *)&(sp118) + 0x0)) = (*(s32 *)((char *)(temp_v1) + 0x0));
                (*(s32 *)((char *)&(sp118) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
                var_s0 = temp_s7 + (var_s3 * 0x24);
                (*(s32 *)((char *)&(sp118) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
                (*(s32 *)((char *)&(sp124) + 0x0)) = (*(s32 *)((char *)(var_s0) + 0x0));
                (*(s32 *)((char *)&(sp124) + 0x4)) = (s32) (*(s32 *)((char *)(var_s0) + 0x4));
                (*(s32 *)((char *)&(sp124) + 0x8)) = (s32) (*(s32 *)((char *)(var_s0) + 0x8));
                var_s4 = (*(s32 *)((char *)(temp_v1) + 0x20));
                var_t0 = (*(s32 *)((char *)(var_s0) + 0x20));
                spD8 = (*(s32 *)((char *)(var_s0) + 0x18));
            }
            temp_f22 = sp118 - (*(s32 *)((char *)(temp_s5) + 0x0));
            temp_f24 = sp11C - (*(s32 *)((char *)(temp_s5) + 0x4));
            temp_f26 = sp120 - (*(s32 *)((char *)(temp_s5) + 0x8));
            temp_f18 = sp11C - sp128;
            temp_f20 = sp120 - sp12C;
            temp_f2 = sp118 - sp124;
            temp_f28 = (temp_f18 * temp_f26) - (temp_f24 * temp_f20);
            temp_f30 = (temp_f20 * temp_f22) - (temp_f26 * temp_f2);
            temp_f16 = (temp_f2 * temp_f24) - (temp_f22 * temp_f18);
            spEC = temp_f16;
            temp_f0 = sqrtf((temp_f28 * temp_f28) + (temp_f30 * temp_f30) + (temp_f16 * temp_f16));
            if (temp_f0 == 0.0f) {
                var_f0 = 0.0f;
                var_f28 = 0.0f;
                var_f30 = 0.0f;
            } else {
                temp_f2_2 = spD8 / temp_f0;
                var_f28 = temp_f28 * temp_f2_2;
                var_f30 = temp_f30 * temp_f2_2;
                temp_f4 = spEC * temp_f2_2;
                spEC = temp_f4;
                var_f0 = temp_f4;
            }
            (*(s16 *)((char *)(sp134) + 0x0)) = (s16) (s32) (sp118 + var_f28);
            temp_t6 = (var_s4 + 0x100) << 6;
            temp_t3 = (s32) ((*(s32 *)((char *)(var_s0) + 0x1F)) * (*(s32 *)((char *)(var_s0) + 0x1C))) >> 8;
            (*(s16 *)((char *)(sp134) + 0x2)) = (s16) (s32) (sp11C + var_f30);
            (*(s16 *)((char *)(sp134) + 0x4)) = (s16) (s32) (sp120 + var_f0);
            (*(s32 *)((char *)(sp134) + 0x8)) = temp_t6;
            (*(s32 *)((char *)(sp134) + 0xA)) = 0x47C0;
            (*(s32 *)((char *)(sp134) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(sp134) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(sp134) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(sp134) + 0xF)) = (s8) temp_t3;
            (*(s32 *)((char *)(sp134) + 0x6)) = 0;
            temp_t8 = (char *)(sp134) + 0x10;
            sp134 = temp_t8;
            (*(s16 *)((char *)(sp134) + 0x10)) = (s16) (s32) (sp118 - var_f28);
            (*(s16 *)((char *)(sp134) + 0x2)) = (s16) (s32) (sp11C - var_f30);
            (*(s16 *)((char *)(sp134) + 0x4)) = (s16) (s32) (sp120 - var_f0);
            (*(s32 *)((char *)(sp134) + 0x8)) = temp_t6;
            (*(s32 *)((char *)(temp_t8) + 0xA)) = 0x4000;
            (*(s32 *)((char *)(sp134) + 0xC)) = 0xFF;
            (*(s32 *)((char *)(sp134) + 0xD)) = 0xFF;
            (*(s32 *)((char *)(sp134) + 0xE)) = 0xFF;
            (*(s8 *)((char *)(sp134) + 0xF)) = (s8) temp_t3;
            (*(s32 *)((char *)(sp134) + 0x6)) = 0;
            sp134 = (char *)(sp134) + 0x10;
            do {
                temp_f22_2 = sp124 - (*(s32 *)((char *)(temp_s5) + 0x0));
                temp_a3 = var_s4;
                temp_f24_2 = sp128 - (*(s32 *)((char *)(temp_s5) + 0x4));
                temp_f26_2 = sp12C - (*(s32 *)((char *)(temp_s5) + 0x8));
                temp_f18_2 = sp11C - sp128;
                temp_f20_2 = sp120 - sp12C;
                temp_f2_3 = sp118 - sp124;
                temp_f12 = (temp_f18_2 * temp_f26_2) - (temp_f24_2 * temp_f20_2);
                temp_f14 = (temp_f20_2 * temp_f22_2) - (temp_f26_2 * temp_f2_3);
                temp_f16_2 = (temp_f2_3 * temp_f24_2) - (temp_f22_2 * temp_f18_2);
                temp_f0_2 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16_2 * temp_f16_2));
                if (temp_f0_2 == 0.0f) {
                    var_f0_2 = 0.0f;
                    var_f28_2 = 0.0f;
                    var_f30_2 = 0.0f;
                } else {
                    temp_f2_4 = (*(s32 *)((char *)(var_s0) + 0x18)) / temp_f0_2;
                    var_f28_2 = temp_f12 * temp_f2_4;
                    var_f30_2 = temp_f14 * temp_f2_4;
                    spEC = temp_f16_2 * temp_f2_4;
                    var_f0_2 = spEC;
                }
                (*(s16 *)((char *)(sp134) + 0x0)) = (s16) (s32) (sp124 + var_f28_2);
                temp_t7 = (var_t0 + 0x100) << 6;
                temp_t4 = (s32) ((*(s32 *)((char *)(var_s0) + 0x1F)) * (*(s32 *)((char *)(var_s0) + 0x1C))) >> 8;
                (*(s16 *)((char *)(sp134) + 0x2)) = (s16) (s32) (sp128 + var_f30_2);
                (*(s16 *)((char *)(sp134) + 0x4)) = (s16) (s32) (sp12C + var_f0_2);
                (*(s32 *)((char *)(sp134) + 0x8)) = temp_t7;
                (*(s32 *)((char *)(sp134) + 0xA)) = 0x47C0;
                (*(s32 *)((char *)(sp134) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp134) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp134) + 0xE)) = 0xFF;
                (*(s8 *)((char *)(sp134) + 0xF)) = (s8) temp_t4;
                (*(s32 *)((char *)(sp134) + 0x6)) = 0;
                temp_t2 = (char *)(sp134) + 0x10;
                sp134 = temp_t2;
                (*(s16 *)((char *)(sp134) + 0x10)) = (s16) (s32) (sp124 - var_f28_2);
                (*(s16 *)((char *)(sp134) + 0x2)) = (s16) (s32) (sp128 - var_f30_2);
                (*(s16 *)((char *)(sp134) + 0x4)) = (s16) (s32) (sp12C - var_f0_2);
                (*(s32 *)((char *)(sp134) + 0x8)) = temp_t7;
                (*(s32 *)((char *)(temp_t2) + 0xA)) = 0x4000;
                (*(s32 *)((char *)(sp134) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(sp134) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(sp134) + 0xE)) = 0xFF;
                (*(s8 *)((char *)(sp134) + 0xF)) = (s8) temp_t4;
                (*(s32 *)((char *)(sp134) + 0x6)) = 0;
                sp134 = (char *)(sp134) + 0x10;
                (*(s32 *)((char *)(var_s2) + 0x0)) = 0x01004008;
                temp_s2 = (char *)(var_s2) + 8;
                (*(s32 *)((char *)(var_s2) + 0x4)) = (void *) ((char *)(sp134) - 0x40);
                temp_s2_2 = (char *)(temp_s2) + 8;
                (*(s32 *)((char *)(var_s2) + 0x8)) = 0x05000204;
                (*(s32 *)((char *)(temp_s2) + 0x4)) = 0;
                (*(s32 *)((char *)(temp_s2) + 0x8)) = 0x05020604;
                (*(s32 *)((char *)(temp_s2_2) + 0x4)) = 0;
                var_s2 = (char *)(temp_s2_2) + 8;
                var_s4 = var_t0 & 0xFF;
                if ((s32) temp_a3 < (s32) var_t0) {
                    memcpy((*(void **)&temp_f12), (*(void ** *)&temp_f14), sp134, (char *)(sp134) - 0x20, 0x20, (s8) temp_a3);
                    (*(s16 *)((char *)(sp134) - 0x18)) = (s16) ((*(s16 *)((char *)(sp134) - 0x18)) - 0x4000);
                    temp_t5 = (char *)(sp134) + 0x10;
                    sp134 = temp_t5;
                    (*(s16 *)((char *)(temp_t5) - 0x18)) = (s16) ((*(s16 *)((char *)(temp_t5) - 0x18)) - 0x4000);
                    sp134 = (char *)(sp134) + 0x10;
                }
                temp_v0 = var_s3;
                var_s3 -= 1;
                var_s0 = (char *)(var_s0) - 0x24;
                if (var_s3 < 0) {
                    var_s3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    var_s0 = temp_s7 + (var_s3 * 0x24);
                }
                temp_t6_2 = temp_s7 + (temp_v0 * 0x24);
                (*(s32 *)((char *)&(sp118) + 0x0)) = (*(s32 *)((char *)(temp_t6_2) + 0x0));
                (*(s32 *)((char *)&(sp118) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t6_2) + 0x4));
                (*(s32 *)((char *)&(sp118) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t6_2) + 0x8));
                (*(s32 *)((char *)&(sp124) + 0x0)) = (*(s32 *)((char *)(var_s0) + 0x0));
                (*(s32 *)((char *)&(sp124) + 0x4)) = (s32) (*(s32 *)((char *)(var_s0) + 0x4));
                (*(s32 *)((char *)&(sp124) + 0x8)) = (s32) (*(s32 *)((char *)(var_s0) + 0x8));
                var_t0 = (*(s32 *)((char *)(var_s0) + 0x20));
            } while (temp_v0 != (*(s32 *)((char *)(arg0) + 0x2D)));
        }
    }
    return var_s2;
}

f32 func_151979F8(s32 arg0) {
    return D_800A8AA4;
}

f32 func_15197A0C(s32 arg0) {
    return (f32) func_151422C0(0xA, &D_800A8A40, 1, 0x1F4, &D_800A8A48, 0x8CC) * D_800A8AA8;
}

f32 func_15197A68(s32 arg0) {
    return D_800A8AAC;
}

void func_15197A7C(void *arg0) {
    u8 sp1C;
    void *sp18;

    if (arg0 != NULL) {
        sp18 = arg0;
        sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
        func_15147D64(&sp18, 8, arg0);
    }
}

s32 func_15197AB4(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x15C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x158));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x160));
    (*(f32 *)((char *)(arg0) + 0x140)) = (f32) ((*(f32 *)((char *)(arg0) + 0x140)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x148)) = (f32) ((*(f32 *)((char *)(arg0) + 0x148)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x144)) = (f32) ((*(f32 *)((char *)(arg0) + 0x144)) + (temp_f2 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x14C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x14C)) * temp_f12);
    (*(f32 *)((char *)(arg0) + 0x154)) = (f32) ((*(f32 *)((char *)(arg0) + 0x154)) * temp_f12);
    (*(f32 *)((char *)(arg0) + 0x150)) = (f32) ((*(f32 *)((char *)(arg0) + 0x150)) + (temp_f2 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + ((*(f32 *)((char *)(arg0) + 0x140)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x144)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x148)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(arg0) + 0x14C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) + ((*(f32 *)((char *)(arg0) + 0x150)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) + ((*(f32 *)((char *)(arg0) + 0x154)) * D_800BE9A4));
    return 1;
}

s32 func_15197BBC(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x30));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x164));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x2C));
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x1C));
    (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f0 - (temp_f0 * temp_f2));
    (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f12 - (temp_f12 * temp_f2));
    if (temp_v0 < (*(s32 *)((char *)(arg0) + 0x168))) {
        (*(s8 *)((char *)(arg0) + 0x5C)) = (s8) (temp_v0 * (*(s8 *)((char *)(arg0) + 0x16A)));
    }
    return 1;
}

void *func_15197C10(void *arg0, s32 arg1) {
    void *spB4;
    void *spB0;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp78;
    u8 sp77;
    void *sp68;                                     /* compiler-managed */
    void **sp64;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f16_5;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f24;
    f32 var_f24_2;
    f32 var_f26;
    f32 var_f26_2;
    f32 var_f28;
    f32 var_f28_2;
    void **temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &spB4, &sp77);
    spB0 = spB4;
    if (spB4 != NULL) {
        if (sp77 != 0) {
            temp_v0 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp64 = temp_a1;
            sp68 = temp_v0;
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v0) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_f14 = (*(s32 *)((char *)(arg0) + 0x34));
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x38));
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x30));
        temp_f12 = (*(s32 *)((char *)(arg0) + 0x3C));
        temp_f16 = temp_f14 + (((*(s32 *)((char *)(arg0) + 0x40)) - temp_f14) * temp_f0);
        temp_f24 = temp_f2 + (((*(s32 *)((char *)(arg0) + 0x44)) - temp_f2) * temp_f0);
        spA4 = temp_f24;
        spA8 = temp_f12 + (((*(s32 *)((char *)(arg0) + 0x48)) - temp_f12) * temp_f0);
        spA0 = temp_f16;
        (*(void **)&(sp68)) = (*(void **)&(temp_f14));
        temp_f22 = spA8 - temp_f12;
        temp_v0_2 = (arg1 * 0x9A0) + D_800DBFF0;
        temp_f20 = temp_f24 - temp_f2;
        temp_f24_2 = temp_f12 - (*(s32 *)((char *)(temp_v0_2) + 0x300));
        temp_f18 = temp_f16 - temp_f14;
        temp_v0_3 = (char *)(temp_v0_2) + 0x2F8;
        temp_f0_2 = (*(f32 *)&(sp68)) - (*(s32 *)((char *)(temp_v0_2) + 0x2F8));
        temp_f16_2 = temp_f2 - (*(s32 *)((char *)(temp_v0_2) + 0x2FC));
        temp_f2_2 = (temp_f20 * temp_f24_2) - (temp_f16_2 * temp_f22);
        temp_f12_2 = (temp_f22 * temp_f0_2) - (temp_f24_2 * temp_f18);
        temp_f14_2 = (temp_f18 * temp_f16_2) - (temp_f0_2 * temp_f20);
        temp_f26 = (temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2);
        sp78 = temp_f26;
        if (temp_f26 == 0.0f) {
            var_f24 = 0.0f;
            var_f26 = 0.0f;
            var_f28 = 0.0f;
        } else {
            temp_f16_3 = (*(s32 *)((char *)(arg0) + 0x2C)) / sqrtf(sp78);
            var_f24 = temp_f2_2 * temp_f16_3;
            var_f26 = temp_f12_2 * temp_f16_3;
            var_f28 = temp_f14_2 * temp_f16_3;
        }
        temp_f20_2 = -temp_f20;
        temp_f22_2 = -temp_f22;
        temp_f18_2 = -temp_f18;
        (*(s16 *)((char *)(spB4) + 0x0)) = (s16) (s32) ((char *)(sp68) + (s32)(var_f24));
        (*(s16 *)((char *)(spB4) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) + var_f26);
        (*(s16 *)((char *)(spB4) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) + var_f28);
        (*(s32 *)((char *)(spB4) + 0x6)) = 0;
        spB4 = (char *)(spB4) + 0x10;
        (*(s16 *)((char *)(spB4) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) - var_f24);
        (*(s16 *)((char *)(spB4) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) - var_f26);
        (*(s16 *)((char *)(spB4) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - var_f28);
        (*(s32 *)((char *)(spB4) + 0x6)) = 0;
        spB4 = (char *)(spB4) + 0x10;
        temp_f0_3 = spA0 - (*(s32 *)((char *)(temp_v0_2) + 0x2F8));
        temp_f16_4 = spA4 - (*(s32 *)((char *)(temp_v0_3) + 0x4));
        temp_f24_3 = spA8 - (*(s32 *)((char *)(temp_v0_3) + 0x8));
        temp_f2_3 = (temp_f20_2 * temp_f24_3) - (temp_f16_4 * temp_f22_2);
        temp_f12_3 = (temp_f22_2 * temp_f0_3) - (temp_f24_3 * temp_f18_2);
        temp_f14_3 = (temp_f18_2 * temp_f16_4) - (temp_f0_3 * temp_f20_2);
        temp_f26_2 = (temp_f2_3 * temp_f2_3) + (temp_f12_3 * temp_f12_3) + (temp_f14_3 * temp_f14_3);
        sp78 = temp_f26_2;
        if (temp_f26_2 == 0.0f) {
            var_f24_2 = 0.0f;
            var_f26_2 = 0.0f;
            var_f28_2 = 0.0f;
        } else {
            temp_f16_5 = (*(s32 *)((char *)(arg0) + 0x2C)) / sqrtf(sp78);
            var_f24_2 = temp_f2_3 * temp_f16_5;
            var_f26_2 = temp_f12_3 * temp_f16_5;
            var_f28_2 = temp_f14_3 * temp_f16_5;
        }
        (*(s16 *)((char *)(spB4) + 0x0)) = (s16) (s32) (spA0 + var_f24_2);
        (*(s16 *)((char *)(spB4) + 0x2)) = (s16) (s32) (spA4 + var_f26_2);
        (*(s16 *)((char *)(spB4) + 0x4)) = (s16) (s32) (spA8 + var_f28_2);
        (*(s32 *)((char *)(spB4) + 0x6)) = 0;
        spB4 = (char *)(spB4) + 0x10;
        (*(s16 *)((char *)(spB4) + 0x10)) = (s16) (s32) (spA0 - var_f24_2);
        (*(s16 *)((char *)(spB4) + 0x2)) = (s16) (s32) (spA4 - var_f26_2);
        (*(s16 *)((char *)(spB4) + 0x4)) = (s16) (s32) (spA8 - var_f28_2);
        (*(s32 *)((char *)(spB4) + 0x6)) = 0;
        return spB0;
    }
    return NULL;
}

void func_15198054(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v0;
    void *temp_v1;

    temp_t6 = arg2 & 0xFF;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x98));
    if ((temp_t6 == 0) || (temp_t6 == 2) || (temp_t6 == 8)) {
        if (((*(u8 *)((char *)(temp_v1) + 0x0)) == (*(u8 *)((char *)(arg1) + 0x0))) || ((*(u8 *)((char *)(temp_v1) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4)))) {
            func_151993B4(temp_t6);
        }
    } else if (temp_t6 == 0x2D) {
        temp_a0 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x0));
        if (temp_a0 == temp_v0) {
            (*(s32 *)((char *)(temp_v1) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v1) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_v0) {
            (*(s32 *)((char *)(temp_v1) + 0x0)) = temp_a0;
            (*(u8 *)((char *)(temp_v1) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

void func_15198110(void *arg0, s32 arg1) {
    s8 sp15D;
    s8 sp15C;
    s32 sp158;
    f32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    s8 sp12B;
    s8 sp12A;
    s8 sp129;
    s8 sp128;
    s32 sp124;
    s32 sp120;
    s16 sp11C;
    s16 sp11A;
    s8 sp118;
    s16 sp116;
    s16 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    void * spF8;
    void * spEC;
    s16 spE8;
    f32 spE0;
    f32 spDC;
    s16 spDA;
    s16 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    void *temp_s2;
    void *temp_s3;
    void *temp_s4;
    void *temp_s5;

    temp_s3 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s1 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_s4 = temp_s1 + (arg1 * 0x24);
    (*(f32 *)((char *)(temp_s3) + 0x70)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x70)) + (*(f32 *)((char *)(temp_s3) + 0x6C)));
    (*(s32 *)((char *)(temp_s4) + 0x21)) = 1;
    temp_s5 = ((*(s32 *)((char *)(temp_s3) + 0x69)) * 0xC) + &D_800A8710;
    var_s0 = arg1 + 1;
    if ((arg1 + 1) == (*(s32 *)((char *)(arg0) + 0x25))) {
        var_s0 = 0;
    }
    if (((*(s32 *)((char *)(temp_s3) + 0x70)) > 1.0f) && (var_s0 != (*(s32 *)((char *)(arg0) + 0x2E)))) {
        sp120 = 0;
        spDC = D_800A8AB0;
        spE0 = D_800A8AB4;
        spE8 = 0;
        sp124 = (s32) ((D_800A8AB0 + D_800A8AB4) * 0.5f);
        sp114 = 8;
        sp116 = 0x20;
        sp108 = D_800A8AB8;
        sp10C = D_800A8ABC;
        sp110 = D_800A8AC0;
        sp104 = (*(s32 *)((char *)(temp_s3) + 0x40));
        spBC = (*(s32 *)((char *)(temp_s5) + 0x0)) * D_800A8AC4;
        spD8 = 0;
        spC0 = (*(s32 *)((char *)(temp_s5) + 0x0)) * D_800A8AC8;
        sp12C = (spBC + spC0) * 0.5f;
        spC4 = sp12C;
        spC8 = (*(s32 *)((char *)(temp_s5) + 0x4)) * D_800A8ACC;
        spCC = (*(s32 *)((char *)(temp_s5) + 0x4)) * D_800A8AD0;
        spDA = 0;
        sp14C = 1.0f;
        sp154 = 1.0f;
        sp158 = 0x40000001;
        sp15C = 0xFF;
        sp15D = 0xFF;
        spD0 = (*(s32 *)((char *)(temp_s5) + 0x4)) * D_800A8AD4;
        sp130 = (spC8 + spCC) * 0.5f;
        sp150 = 0.0f;
        spD4 = sp130;
        if (random_u32(D_800A8AB4) & 1) {
            sp118 = 0x13;
        } else {
            sp118 = 0x14;
        }
        sp128 = 0;
        sp129 = 0;
        sp12A = 0;
        sp12B = 0x68;
        sp11A = 0x301;
        temp_s2 = temp_s1 + (var_s0 * 0x24);
        (*(s32 *)((char *)&(spEC) + 0x0)) = (s32) (*(s32 *)((char *)(temp_s2) + 0xC));
        (*(s32 *)((char *)&(spEC) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s2) + 0x10));
        (*(s32 *)((char *)&(spEC) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s2) + 0x14));
        (*(s32 *)((char *)&(spF8) + 0x0)) = (s32) (*(s32 *)((char *)(temp_s4) + 0xC));
        (*(s32 *)((char *)&(spF8) + 0x4)) = (s32) (*(s32 *)((char *)(temp_s4) + 0x10));
        (*(s32 *)((char *)&(spF8) + 0x8)) = (s32) (*(s32 *)((char *)(temp_s4) + 0x14));
        do {
            temp_s0 = random_u32() & 0xFF;
            temp_s1_2 = random_u32() & 0xFF;
            temp_f22 = func_151423D8((temp_s0 - 0x40) & 0xFF);
            temp_f24 = func_151423D8(temp_s0 & 0xFF);
            temp_f26 = func_151423D8((temp_s1_2 - 0x40) & 0xFF);
            temp_f28 = func_151423D8(temp_s1_2 & 0xFF);
            temp_f20 = (*(s32 *)((char *)(temp_s2) + 0x18)) * D_800A8AD8;
            temp_f0 = temp_f20 * temp_f28;
            temp_f2 = temp_f0 * temp_f22;
            sp11C = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s5) + 0xA)) + 1)) + (*(u32 *)((char *)(temp_s5) + 0x8));
            temp_f12 = -temp_f20 * temp_f26;
            sp134 = (*(s32 *)((char *)(temp_s2) + 0x0)) + temp_f2;
            temp_f14 = temp_f0 * temp_f24;
            sp138 = (*(s32 *)((char *)(temp_s2) + 0x4)) + temp_f12;
            sp13C = (*(s32 *)((char *)(temp_s2) + 0x8)) + temp_f14;
            sp140 = (*(s32 *)((char *)(temp_s4) + 0x0)) + temp_f2;
            sp144 = (*(s32 *)((char *)(temp_s4) + 0x4)) + temp_f12;
            sp148 = (*(s32 *)((char *)(temp_s4) + 0x8)) + temp_f14;
            if (random_u32(temp_f12, temp_f14) & 1) {
                var_v0 = 1;
            } else {
                var_v0 = 0;
            }
            temp_v0 = func_1513D524(&sp118, 0xA, 0xB, 0, 9, var_v0 | 2, 0x5C, 0xFF, 0);
            if (temp_v0 != 0) {
                memcpy(temp_v0 + 0x110, (void **) &spBC, 0x5C);
            }
            (*(f32 *)((char *)(temp_s3) + 0x70)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x70)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s3) + 0x70)) > 1.0f);
    }
}

s32 func_15198570(void *arg0) {
    s32 sp98;
    f32 sp84;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    s32 *temp_fp;
    s8 var_s1;
    void *temp_t0;

    f32 sp8C;
    f32 sp88;
    temp_fp = (*(s32 *)((char *)(arg0) + 0x98));
    sp98 = (*(s32 *)((char *)(arg0) + 0x94));
    var_s1 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_s1 -= 1;
            if (var_s1 < 0) {
                var_s1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_t0 = sp98 + (var_s1 * 0x24);
            (*(s32 *)((char *)&(sp84) + 0x0)) = (*(s32 *)((char *)(temp_t0) + 0x0));
            (*(s32 *)((char *)&(sp84) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x4));
            (*(s32 *)((char *)&(sp84) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x8));
            temp_f2 = (f32) D_800CC3B4;
            temp_f12 = (f32) D_800CC3B6;
            temp_f14 = sp84 - D_800CC2E4;
            temp_f16 = sp8C - D_800CC2EC;
            temp_f0 = (sp88 - (((*(f32 *)((D_800CC2E8)))) + (f32) D_800CC3B8)) * ((1.0f + (temp_f2 / temp_f12)) * 0.5f);
            if (((temp_f14 * temp_f14) + (temp_f0 * temp_f0) + (temp_f16 * temp_f16)) < (temp_f2 * temp_f2)) {
                func_1505D024(temp_f12, temp_f14, &gObjects, 0x60006, D_800CC34A, (s32) ((char *)(temp_fp) - (char *)(&gObjects)) / 812);
                func_1518D1C0(&gObjects, 0xB, 0, 1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)), &D_800A8A84);
                if (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    do {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    } while (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D)));
                }
            }
        } while (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    return 1;
}

s32 func_151987CC(void *arg0) {
    f32 sp40;
    void * *var_a2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    s8 var_a1;
    void *temp_t6;

    f32 sp48;
    f32 sp44;
    var_a2 = &gObjects;
    do {
        if (((*(s32 *)((char *)(var_a2) + 0x0)) != 0) && ((*(s32 *)((char *)(var_a2) + 0x65)) == 0) && ((*(s32 *)((char *)(var_a2) + 0x3B)) != (*(s32 *)((char *)(((*(s32 *)((*(s32 *)((char *)(arg0) + 0x98)))))) + 0x3B)))) {
            var_a1 = (*(s32 *)((char *)(arg0) + 0x2E));
            if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                do {
                    var_a1 -= 1;
                    if (var_a1 < 0) {
                        var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    }
                    temp_f0 = (f32) (*(f32 *)((char *)(var_a2) + 0xE4));
                    temp_t6 = (*(s32 *)((char *)(arg0) + 0x94)) + (var_a1 * 0x24);
                    (*(s32 *)((char *)&(sp40) + 0x0)) = (*(s32 *)((char *)(temp_t6) + 0x0));
                    (*(s32 *)((char *)&(sp40) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x4));
                    (*(s32 *)((char *)&(sp40) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t6) + 0x8));
                    temp_f12 = sp40 - (*(s32 *)((char *)(var_a2) + 0x14));
                    temp_f14 = sp48 - (*(s32 *)((char *)(var_a2) + 0x1C));
                    temp_f16 = (sp44 - ((*(f32 *)((char *)(var_a2) + 0x18)) + (f32) (*(f32 *)((char *)(var_a2) + 0xE8)))) * ((1.0f + (temp_f0 / (f32) (*(f32 *)((char *)(var_a2) + 0xE6)))) * 0.5f);
                    if ((((temp_f12 * temp_f12) + (temp_f16 * temp_f16) + (temp_f14 * temp_f14)) < ((temp_f0 * temp_f0) + D_800A8ADC)) && (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)))) {
                        do {
                            (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                                (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                            }
                            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                        } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
                    }
                } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
            }
        }
        var_a2 = (char *)(var_a2) + 0x32C;
    } while ((char *)(var_a2) != (char *)(&D_800D121C));
    return 1;
}

s32 func_1519897C(void *arg0) {
    s32 spC0;
    void * sp8B;
    u8 sp88;
    f32 sp7C;
    u8 *sp78;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    s32 temp_f16;
    s8 temp_t8;
    s8 var_s1;
    u8 *temp_t2;
    void **var_v0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s0;

    f32 sp80;
    f32 sp84;
    spC0 = (*(s32 *)((char *)(arg0) + 0x94));
    sp88 = D_8008F8A0;
    temp_v1 = (*(s32 *)((*(s32 *)((char *)(arg0) + 0x98))));
    temp_a1 = (*(s32 *)((char *)(temp_v1) + 0x31C));
    if (temp_a1 == NULL) {
        return 0;
    }
    if ((*(s32 *)((char *)(temp_a1) + 0x58)) != 1) {
        (*(u16 *)((char *)(temp_v1) + 0x2F8)) = (u16) ((*(u16 *)((char *)(temp_v1) + 0x2F8)) & 0xFEFF);
        return 0;
    }
    sp78 = &sp88;
    do {
        temp_v0 = *(&D_800DCE50 + (*sp78 * 4));
        var_s0 = temp_v0;
        if (temp_v0 != NULL) {
            var_s1 = (*(s32 *)((char *)(arg0) + 0x2E));
            temp_t8 = D_800DD190 + 1;
            D_800DD190 = temp_t8;
            if (temp_v0 != NULL) {
                var_v0 = (temp_t8 * 4) + D_800DD198;
                do {
                    *var_v0 = (*(s32 *)((char *)(var_s0) + 0x8));
                    temp_f22 = (*(s32 *)((char *)(var_s0) + 0x98));
                    temp_f24 = (*(s32 *)((char *)(var_s0) + 0x9C));
                    temp_f26 = (*(s32 *)((char *)(var_s0) + 0xA0));
                    if (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                        do {
                            var_s1 -= 1;
                            if (var_s1 < 0) {
                                var_s1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                            }
                            temp_v0_2 = spC0 + (var_s1 * 0x24);
                            (*(s32 *)((char *)&(sp7C) + 0x0)) = (*(s32 *)((char *)(temp_v0_2) + 0x0));
                            (*(s32 *)((char *)&(sp7C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x4));
                            (*(s32 *)((char *)&(sp7C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_2) + 0x8));
                            temp_f2 = sp7C - temp_f22;
                            temp_f0 = (*(s32 *)((char *)(temp_v0_2) + 0x18));
                            temp_f12 = sp80 - temp_f24;
                            temp_f14 = sp84 - temp_f26;
                            if (((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14)) < ((temp_f0 * temp_f0) + 900.0f)) {
                                func_15183ACC(temp_f12, temp_f14, 5);
                                func_15168B10(var_s0, 0x18);
                                (*(s32 *)((char *)(var_s0) + 0xED)) = 5;
                                (*(s32 *)((char *)(var_s0) + 0x92)) = 9;
                                (*(s32 *)((char *)(var_s0) + 0xB8)) = 40.0f;
                                (*(s32 *)((char *)(var_s0) + 0xA8)) = 40.0f;
                                (*(s32 *)((char *)(var_s0) + 0xB4)) = 0.0f;
                                (*(s32 *)((char *)(var_s0) + 0x94)) = (s32) (*(s32 *)((char *)&(D_800DDE80) + 0x6C));
                                temp_f16 = func_1510F8D8((s32) (*(s32 *)((char *)(var_s0) + 0x98)), (s32) (*(s32 *)((char *)(var_s0) + 0x9C)), (s32) (*(s32 *)((char *)(var_s0) + 0xA0)), 0);
                                (*(s32 *)((char *)(var_s0) + 0x91)) = 4;
                                (*(f32 *)((char *)(var_s0) + 0xC8)) = (f32) temp_f16;
                            }
                        } while (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D)));
                        var_v0 = (D_800DD190 * 4) + D_800DD198;
                    }
                    var_s0 = *var_v0;
                } while (var_s0 != NULL);
            }
            D_800DD190 -= 1;
        }
        temp_t2 = sp78 + 1;
        sp78 = temp_t2;
    } while ((char *)(temp_t2) != (char *)(&sp8B));
    return 1;
}

void func_15198C60(void) {
    func_10010F30(0x1AA, 0x7FFF, 0x40, 0, 0);
}

void func_15198C90(void *arg0) {
    u16 temp_a0;
    void *temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x2C)) != 0) {
        temp_a0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x66));
        if (temp_a0 != 0) {
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x94)) + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x24);
            func_1000F91C(temp_a0, 0x7FFF, 0, 0, 0, (s32) (*(s32 *)((char *)(temp_v0) + 0x0)), (s32) (*(s32 *)((char *)(temp_v0) + 0x4)), (s32) (*(s32 *)((char *)(temp_v0) + 0x8)), 0x1F4, 0x1388);
        }
    }
}

void func_15198D40(void *arg0) {
    u16 temp_a0;

    if ((*(s32 *)((char *)(arg0) + 0x2C)) != 0) {
        temp_a0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x66));
        if (temp_a0 != 0) {
            func_100111C8(temp_a0);
        }
    }
}

void func_15198D7C(s32 arg0) {

}

void func_15198D88(void *arg0, f32 *arg1) {
    s8 sp125;
    s8 sp124;
    s32 sp120;
    s32 sp11C;
    s32 sp118;
    s32 sp114;
    s32 sp110;
    s32 sp10C;
    s32 sp108;
    s8 spFD;
    s16 spF6;
    s16 spF4;
    f32 spE8;
    s8 spE3;
    s8 spE2;
    s8 spE1;
    s8 spE0;
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spBC;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    s32 temp_s1;
    s32 temp_s2;
    void *temp_s0;
    void *temp_s4;

    temp_s4 = (*(s32 *)((char *)(arg0) + 0x98));
    spF6 = 1;
    spE1 = 0xA;
    spE2 = 0xFF;
    spE0 = 0x28;
    spE3 = 0x82;
    (*(s32 *)((char *)&(spE8) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
    (*(f32 *)((char *)&(spE8) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x14));
    temp_s0 = ((*(s32 *)((char *)(temp_s4) + 0x74)) * 0x24) + &D_800A8728;
    (*(f32 *)((char *)&(spE8) + 0x8)) = (f32) (*(f32 *)((char *)(arg0) + 0x18));
    sp108 = 0;
    sp10C = 1;
    sp110 = 0x160600;
    sp114 = 3;
    sp118 = 0x10;
    sp11C = 0x80;
    sp120 = 0x20;
    sp124 = 0;
    sp125 = 9;
    do {
        temp_f20 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x8))) + (*(s32 *)((char *)(temp_s0) + 0x4));
        temp_s1 = random_u32() & 0xFF;
        temp_s2 = random_u32() & 0xFF;
        temp_f22 = func_151423D8((temp_s1 - 0x40) & 0xFF);
        temp_f24 = func_151423D8(temp_s1 & 0xFF);
        temp_f26 = func_151423D8((temp_s2 - 0x40) & 0xFF);
        temp_f2 = (*(s32 *)((char *)(temp_s0) + 0x0));
        temp_f12 = temp_f2 * func_151423D8(temp_s2 & 0xFF);
        temp_f28 = (*(s32 *)((char *)(arg1) + 0x0)) + (temp_f12 * temp_f22);
        temp_f30 = (*(s32 *)((char *)(arg1) + 0x4)) - (temp_f2 * temp_f26);
        spBC = (*(s32 *)((char *)(arg1) + 0x8)) + (temp_f12 * temp_f24);
        spFD = (random_u32(temp_f12) % (u32) ((*(u32 *)((char *)(temp_s0) + 0x22)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x20));
        spF4 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x1E)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x1C));
        spC8 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x10))) + (*(s32 *)((char *)(temp_s0) + 0xC));
        spD8 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x18))) + (*(s32 *)((char *)(temp_s0) + 0x14));
        spCC = (temp_f28 - (*(s32 *)((char *)(arg0) + 0x10))) * temp_f20;
        spD0 = (temp_f30 - (*(s32 *)((char *)(arg0) + 0x14))) * temp_f20;
        spD4 = (spBC - (*(s32 *)((char *)(arg0) + 0x18))) * temp_f20;
        func_15147DA0(&spE8, &spC8, 0, 1, 0, 0, 0, 0, 0, 0, 0, &sp108, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        (*(f32 *)((char *)(temp_s4) + 0x7C)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x7C)) - 1.0f);
    } while ((*(s32 *)((char *)(temp_s4) + 0x7C)) > 1.0f);
}

void func_151990AC(void *arg0, f32 *arg1) {
    s16 spC8;
    s8 spC6;
    s8 spC5;
    s8 spC4;
    s8 spC3;
    s8 spC2;
    s8 spC1;
    s8 spC0;
    s8 spBE;
    s16 spBC;
    s16 spBA;
    s16 spB8;
    s16 spB6;
    s16 spB4;
    s8 spB3;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s16 spAC;
    s16 spAA;
    s16 spA8;
    s16 spA6;
    s16 spA4;
    s16 spA2;
    s16 spA0;
    void * *sp94;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    s16 temp_t9;
    s32 temp_s1;
    s32 temp_s2;
    void *temp_s0;
    void *temp_s4;

    temp_s4 = (*(s32 *)((char *)(arg0) + 0x98));
    spA4 = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x10));
    temp_s0 = ((*(s32 *)((char *)(temp_s4) + 0x80)) * 0x18) + &D_800A8770;
    spA6 = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x14));
    spB0 = 0;
    spB2 = 0;
    spB1 = 0;
    spC0 = 0xFF;
    spC1 = 0xFF;
    spC2 = 0xFF;
    spC4 = 0;
    spC5 = 0;
    spC6 = 0;
    spC3 = 0xFF;
    spB3 = -1;
    spC8 = 0x12;
    spA0 = 0;
    spA2 = 0;
    sp94 = &D_80090514;
    spBC = 0x12C;
    spA8 = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x18));
    do {
        temp_f20 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x8))) + (*(s32 *)((char *)(temp_s0) + 0x4));
        temp_s1 = random_u32() & 0xFF;
        temp_s2 = random_u32() & 0xFF;
        temp_f22 = func_151423D8((temp_s1 - 0x40) & 0xFF);
        temp_f24 = func_151423D8(temp_s1 & 0xFF);
        temp_f26 = func_151423D8((temp_s2 - 0x40) & 0xFF);
        temp_f2 = (*(s32 *)((char *)(temp_s0) + 0x0));
        temp_f12 = temp_f2 * func_151423D8(temp_s2 & 0xFF);
        temp_f14 = (*(s32 *)((char *)(arg1) + 0x0)) + (temp_f12 * temp_f22);
        spAA = (s16) (s32) ((temp_f14 - (*(s16 *)((char *)(arg0) + 0x10))) * temp_f20);
        spB4 = (s16) (s32) ((((*(s16 *)((char *)(arg1) + 0x4)) - (temp_f2 * temp_f26)) - (*(s16 *)((char *)(arg0) + 0x14))) * temp_f20);
        spAC = (s16) (s32) ((((*(s16 *)((char *)(arg1) + 0x8)) + (temp_f12 * temp_f24)) - (*(s16 *)((char *)(arg0) + 0x18))) * temp_f20);
        spB6 = (random_u32(temp_f12, temp_f14) % (u32) ((*(u32 *)((char *)(temp_s0) + 0xE)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0xC));
        spBE = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x12)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x10));
        temp_t9 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0x16)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0x14));
        spBA = temp_t9;
        spB8 = temp_t9;
        func_15167D84(&sp94, 0, 0, -1, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
        (*(f32 *)((char *)(temp_s4) + 0x88)) = (f32) ((*(f32 *)((char *)(temp_s4) + 0x88)) - 1.0f);
    } while ((*(s32 *)((char *)(temp_s4) + 0x88)) > 1.0f);
}

void func_151993B4(void *arg0) {
    u8 temp_t0;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    (*(s32 *)((char *)(arg0) + 0x30)) = 0;
    (*(u16 *)((char *)(arg0) + 0x1E)) = (u16) ((*(u16 *)((char *)(arg0) + 0x1E)) & 0xFFFD);
    temp_t0 = (*(s32 *)((char *)(temp_v0) + 0x6)) | 1;
    (*(s32 *)((char *)(temp_v0) + 0x6)) = temp_t0;
    (*(u8 *)((char *)(temp_v0) + 0x6)) = (u8) (temp_t0 | 4);
}

void func_151993E4(void *arg0) {
    s32 var_a1;
    s32 var_a2;
    u8 *var_t0;

    var_a1 = 0;
    var_a2 = 0;
    var_t0 = &D_800A8A9C;
loop_1:
    if ((*(s32 *)((char *)(((*(s32 *)((*(s32 *)((char *)(arg0) + 0x98)))))) + 0x3B)) == *var_t0) {
        var_a2 = 1;
    } else {
        var_a1 += 1;
        var_t0 += 1;
    }
    if ((var_a2 == 0) && (var_a1 < 6)) {
        goto loop_1;
    }
    if (var_a2 != 0) {
        (*(s32 *)((char *)((*(&D_800E0900 + (var_a1 * 4)))) + 0x14)) = 0;
    }
}

void func_1519944C(void *arg0) {
    s32 var_a1;
    s32 var_a2;
    u8 *var_t0;

    var_a1 = 0;
    var_a2 = 0;
    var_t0 = &D_800A8A9C;
loop_1:
    if ((*(s32 *)((char *)(((*(s32 *)((*(s32 *)((char *)(arg0) + 0x98)))))) + 0x3B)) == *var_t0) {
        var_a2 = 1;
    } else {
        var_a1 += 1;
        var_t0 += 1;
    }
    if ((var_a2 == 0) && (var_a1 < 6)) {
        goto loop_1;
    }
    if (var_a2 != 0) {
        (*(s32 *)((char *)((*(&D_800E0900 + (var_a1 * 4)))) + 0x14)) = 1;
    }
}

void *func_151994B8(s32 arg0, void *arg1, s32 arg2, s32 *arg3) {
    void *sp1DC;
    s8 sp1D5;
    s8 sp1D4;
    s32 sp1D0;
    s16 sp1CE;
    s16 sp1CC;
    f32 sp1C0;
    s16 sp1BE;
    s8 sp1BD;
    s8 sp1BC;
    f32 sp1B8;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    f32 sp1A4;
    f32 sp1A0;
    f32 sp198;
    f32 sp194;
    void * sp188;
    f32 sp17C;
    void * sp140;
    void * spFC;
    void * spB8;
    void * sp80;
    void * sp74;
    void *sp6C;
    void * *sp64;
    void * *sp60;
    void * *sp5C;
    f32 *sp58;
    void *sp54;
    void * *var_t6;
    s32 temp_at;
    s32 var_t0;
    s32 var_t1;
    s32 var_v0;
    s32 var_v1;
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_t4;
    void *temp_v0;
    void *temp_v0_3;
    void *var_t8;

    s32 sp71;
    f32 spA6;
    s32 spA3;
    s32 spA0;
    temp_v0 = (*(s32 *)((char *)(arg1) + 0x4));
    if ((*(s32 *)((char *)(temp_v0) + 0x1D4)) == 0) {
        return NULL;
    }
    sp1CC = 0x12C;
    sp1CE = 0x12;
    sp1D5 = (s8) (*(s8 *)((char *)(arg1) + 0x0));
    sp1D0 = 0xE;
    sp1D4 = 0;
    M2C_MEMCPY_ALIGNED(&sp6C, (char *)(arg1) + 4, 0x48);
    (*(s32 *)((char *)&(sp6C) + 0x48)) = (s32) (*(s32 *)((char *)(((char *)(arg1) + 0x48)) + 0x4));
    sp60 = &sp74;
    sp64 = &sp80;
    sp58 = &sp17C;
    sp5C = &sp188;
    func_15145EA4(&sp60, &sp58, (*(s32 *)((char *)(temp_v0) + 0x1D4)) + (sp71 << 6), 2);
    var_t6 = &spB8;
    var_t8 = arg1;
    (*(s32 *)((char *)&(sp1C0) + 0x0)) = (*(s32 *)((char *)&(sp17C) + 0x0));
    (*(s32 *)((char *)&(sp1C0) + 0x4)) = (s32) (*(s32 *)((char *)&(sp17C) + 0x4));
    (*(s32 *)((char *)&(sp1C0) + 0x8)) = (s32) (*(s32 *)((char *)&(sp17C) + 0x8));
    sp194 = 0.0f;
    sp198 = 0.0f;
    sp1AC = (f32) spA6;
    sp1B0 = -16384.0f;
    do {
        temp_at = (*(s32 *)((char *)(var_t8) + 0x58));
        var_t8 = (char *)(var_t8) + 0xC;
        var_t6 = (char *)(var_t6) + 0xC;
        (*(s32 *)((char *)(var_t6) - 0xC)) = temp_at;
        (*(s32 *)((char *)(var_t6) - 0x8)) = (s32) (*(s32 *)((char *)(var_t8) + 0x50));
        (*(s32 *)((char *)(var_t6) - 0x4)) = (s32) (*(s32 *)((char *)(var_t8) + 0x54));
    } while (var_t8 != ((char *)(arg1) + 0x3C));
    (*(s32 *)((char *)(var_t6) + 0x0)) = (s32) (*(s32 *)((char *)(var_t8) + 0x58));
    var_t1 = 0;
    (*(s32 *)((char *)(var_t6) + 0x4)) = (s32) (*(s32 *)((char *)(var_t8) + 0x5C));
    sp1A0 = 0.0f;
    M2C_MEMCPY_ALIGNED(&spFC, (char *)(arg1) + 0x9C, 0x3C);
    temp_t4 = (char *)(arg1) + 0x3C;
    (*(s32 *)((char *)&(spFC) + 0x3C)) = (s32) (*(s32 *)((char *)(temp_t4) + 0x9C));
    var_v1 = 0;
    (*(s32 *)((char *)((&spFC + 0x3C)) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t4) + 0xA0));
    sp1A4 = 0.0f;
    M2C_MEMCPY_ALIGNED(&sp140, (char *)(arg1) + 0xE0, 0x3C);
    sp1A8 = 0.0f;
    sp1B8 = 0.0f;
    temp_v0_2 = (*(s32 *)((char *)(arg1) + 0x54));
    if (temp_v0_2 & 8) {
        var_t1 = 8;
    }
    if (temp_v0_2 & 4) {
        var_v1 = 4;
    }
    if (temp_v0_2 & 2) {
        var_t0 = 2;
    } else {
        var_t0 = 0;
    }
    if (temp_v0_2 & 0x10) {
        var_v0 = 0x20;
    } else {
        var_v0 = 0;
    }
    sp1BC = var_v0 | var_t0 | var_v1 | var_t1;
    sp1BE = 0;
    sp1BD = 0;
    temp_v0_3 = func_15147A80(&sp1C0, arg0 + 0x158, 0x28, 0xC, 0xC, 0xC, 0, 0, 0, (s32) arg2, arg3);
    sp1DC = temp_v0_3;
    if (temp_v0_3 != NULL) {
        temp_a0 = (*(s32 *)((char *)(temp_v0_3) + 0x98));
        sp54 = temp_a0;
        memcpy(temp_a0, &sp6C, 0x154);
        if (spA3 != -1) {
            (*(s32 *)((char *)(sp54) + 0x130)) = ((s32 (*)())((char *)(&D_8008F8B8 + (spA3 * 4))))();
        } else {
            (*(s32 *)((char *)(sp54) + 0x130)) = 0;
        }
        if (spA0 != -1) {
            ((s32 (*)())((char *)(&D_8008F8A4 + (spA0 * 4))))(sp1DC);
        }
        if ((*(s32 *)((char *)(arg1) + 0x54)) & 1) {
            (*(s32 *)((char *)(sp54) + 0x148)) = func_1519C09C(sp1DC, &sp1C0, (*(s32 *)((char *)(arg1) + 0x50)), (*(s32 *)((char *)(arg1) + 0x51)), (s32) (*(s32 *)((char *)(arg1) + 0x52)), (s32) (*(s32 *)((char *)(arg1) + 0x53)), (s32) arg2, arg3);
        } else {
            (*(s32 *)((char *)(sp54) + 0x148)) = 0;
        }
    }
    return sp1DC;
}

void func_15199834(void *arg0) {
    u8 sp1C;
    void *sp18;

    if (arg0 != NULL) {
        sp18 = arg0;
        sp1C = (*(s32 *)((char *)(arg0) + 0x3B));
        func_15147D64(&sp18, 0x26, arg0);
    }
}

void func_1519986C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_t6;
    s32 temp_v0;
    void *temp_v1;

    temp_t6 = arg2 & 0xFF;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x98));
    if ((temp_t6 == 0) || (temp_t6 == 2) || (temp_t6 == 0x26)) {
        if (((*(u8 *)((char *)(temp_v1) + 0x0)) == (*(u8 *)((char *)(arg1) + 0x0))) || ((*(u8 *)((char *)(temp_v1) + 0x4)) == (u8) (*(u8 *)((char *)(arg1) + 0x4)))) {
            func_1516972C(temp_t6);
        }
    } else if (temp_t6 == 0x2D) {
        temp_a0 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x0));
        if (temp_a0 == temp_v0) {
            (*(s32 *)((char *)(temp_v1) + 0x0)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(temp_v1) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
            return;
        }
        if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_v0) {
            (*(s32 *)((char *)(temp_v1) + 0x0)) = temp_a0;
            (*(u8 *)((char *)(temp_v1) + 0x4)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    }
}

void func_15199928(void *arg0) {
    func_15199980(arg0);
    func_151478F4(arg0);
}

void func_15199954(void *arg0) {
    func_15199980(arg0);
    func_15147928(arg0);
}

void func_15199980(void *arg0) {
    void *sp1C;
    s32 temp_a0;
    s8 temp_v0;
    s8 temp_v0_2;
    void *var_v1;

    var_v1 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_v0 = (*(s32 *)((char *)(var_v1) + 0x39));
    if (temp_v0 != -1) {
        sp1C = var_v1;
        ((s32 (*)())((char *)(&D_8008F8C0 + (temp_v0 * 4))))();
    }
    temp_v0_2 = (*(s32 *)((char *)(var_v1) + 0x36));
    if (temp_v0_2 != -1) {
        sp1C = var_v1;
        ((s32 (*)())((char *)(&D_8008F8B4 + (temp_v0_2 * 4))))(arg0);
    }
    temp_a0 = (*(s32 *)((char *)(var_v1) + 0x148));
    if (temp_a0 != 0) {
        func_1516972C(temp_a0);
    }
}

s32 func_15199A10(void *arg0) {
    s32 temp_s6;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 var_s1;
    void *temp_a0;
    void *temp_a2;
    void *temp_s0;
    void *temp_s4;
    void *temp_t7;
    void *temp_v1;

    temp_s4 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s6 = (*(s32 *)((char *)(arg0) + 0x94));
    (*(u8 *)((char *)(temp_s4) + 0x150)) = (u8) ((*(u8 *)((char *)(temp_s4) + 0x150)) & 0xFFEF);
    if (((*(s32 *)((char *)(arg0) + 0x2C)) < 2) && ((*(s32 *)((char *)(arg0) + 0x1E)) & 8)) {
        return 0;
    }
    temp_v0 = (*(s32 *)((char *)(temp_s4) + 0x48));
    if ((temp_v0 != -1) && (((s32 (*)())((char *)(&D_8008F8C4 + (temp_v0 * 4))))(arg0) == 0)) {
        return 0;
    }
    var_s1 = (*(s32 *)((char *)(arg0) + 0x2E));
    if (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
        do {
            var_s1 -= 1;
            if (var_s1 < 0) {
                var_s1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_s0 = (var_s1 * 0x28) + temp_s6;
            func_1519BE1C(temp_s0, (char *)(temp_s0) + 0xC, (*(s32 *)((char *)(temp_s4) + 0x20)), D_800BE9A4);
            (*(f32 *)((char *)(temp_s0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x18)) + ((*(f32 *)((char *)(temp_s4) + 0x30)) * D_800BE9A4));
        } while (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    temp_a2 = (*(s32 *)((char *)(temp_s4) + 0x148));
    if ((temp_a2 != NULL) && ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2)) {
        temp_v1 = (*(s32 *)((char *)(temp_a2) + 0x14));
        temp_a0 = ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x28) + temp_s6;
        (*(s16 *)((char *)(temp_v1) + 0xE)) = (s16) (s32) (*(s16 *)((char *)(temp_a0) + 0x0));
        (*(s16 *)((char *)(temp_v1) + 0x10)) = (s16) (s32) (*(s16 *)((char *)(temp_a0) + 0x4));
        (*(s16 *)((char *)(temp_v1) + 0x12)) = (s16) (s32) (*(s16 *)((char *)(temp_a0) + 0x8));
    }
    temp_v0_2 = (*(s32 *)((char *)(temp_s4) + 0x38));
    if (temp_v0_2 != -1) {
        ((s32 (*)())((char *)(&D_8008F8BC + (temp_v0_2 * 4))))(arg0);
    }
    (*(u8 *)((char *)(temp_s4) + 0x150)) = (u8) ((*(u8 *)((char *)(temp_s4) + 0x150)) & 0xFFFE);
    if ((*(s32 *)((char *)(arg0) + 0x2C)) > 0) {
        temp_t7 = temp_s6 + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x28);
        (*(s32 *)((char *)(arg0) + 0x54)) = (s32) (*(s32 *)((char *)(temp_t7) + 0x0));
        (*(s32 *)((char *)(arg0) + 0x58)) = (s32) (*(s32 *)((char *)(temp_t7) + 0x4));
        (*(s32 *)((char *)(arg0) + 0x5C)) = (s32) (*(s32 *)((char *)(temp_t7) + 0x8));
        return 1;
    }
    (*(s32 *)((char *)(arg0) + 0x54)) = 0;
    (*(s32 *)((char *)(arg0) + 0x58)) = 0;
    (*(s32 *)((char *)(arg0) + 0x5C)) = 0;
    return 1;
}

s32 func_15199C34(void *arg0) {
    s32 sp2A8;
    void *sp2A4;
    f32 sp2A0;
    f32 sp29C;
    f32 sp298;
    f32 sp294;
    f32 sp290;
    f32 sp28C;
    void * sp280;
    void * sp274;
    void *sp270;
    void *sp26C;
    void *sp268;
    void * *sp264;
    void * *sp260;
    void * *sp25C;
    f32 *sp258;
    f32 *sp254;
    f32 sp248;
    void * sp23C;
    f32 sp230;
    f32 sp22C;
    f32 sp228;
    f32 sp224;
    f32 sp220;
    f32 sp21C;
    f32 sp218;
    f32 sp214;
    f32 sp210;
    f32 sp20C;
    f32 sp208;
    f32 sp204;
    f32 sp200;
    void *sp1E4;
    s8 sp1DD;
    s8 sp1DC;
    s32 sp1D8;
    s16 sp1D6;
    s16 sp1D4;
    f32 sp1C8;
    s16 sp1C6;
    s16 sp1C4;
    s8 sp1C3;
    s8 sp1C2;
    s8 sp1C1;
    s8 sp1C0;
    f32 sp1BC;
    f32 sp1B8;
    f32 sp1B4;
    f32 sp1B0;
    f32 sp1AC;
    f32 sp1A8;
    s8 sp1A5;
    s8 sp1A4;
    s32 sp1A0;
    s32 sp19C;
    s32 sp198;
    s32 sp194;
    s32 sp190;
    s32 sp18C;
    s32 sp188;
    f32 sp184;
    f32 sp180;
    f32 sp17C;
    f32 sp170;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    s8 sp14D;
    s8 sp14C;
    s8 sp14B;
    s8 sp14A;
    s8 sp149;
    s8 sp148;
    s32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    s16 sp10A;
    s16 sp108;
    s16 sp106;
    s8 sp105;
    s8 sp103;
    s8 sp102;
    s8 sp101;
    s8 sp100;
    s8 spFF;
    s8 spFE;
    s8 spFD;
    s8 spFC;
    s32 spF8;
    s32 spF4;
    s16 spF2;
    s16 spF0;
    s32 spEC;
    s32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD0;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    s8 spB2;
    s8 spB1;
    s8 spB0;
    s16 spAE;
    s8 spAC;
    f32 spA0;
    void *sp9C;
    void *sp98;
    void *sp94;
    void *sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    f32 var_f18;
    f32 var_f20;
    f32 var_f2;
    s8 temp_v1_2;
    u32 temp_s1_2;
    u32 temp_s1_3;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_t0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_3;

    f32 sp24C;
    f32 sp250;
    f32 sp1CC;
    f32 sp1D0;
    f32 sp174;
    f32 sp178;
    f32 sp11C;
    f32 sp120;
    f32 spD4;
    f32 spD8;
    f32 sp168;
    f32 sp16C;
    f32 spC8;
    f32 spCC;
    temp_s0 = (*(s32 *)((char *)(arg0) + 0x98));
    sp2A8 = (*(s32 *)((char *)(arg0) + 0x94));
    temp_s1 = (*(s32 *)((char *)(temp_s0) + 0x0));
    if (((*(s32 *)((char *)(temp_s1) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_s0) + 0x4)) != (*(s32 *)((char *)(temp_s1) + 0x3B)))) {
        return 0;
    }
    if (((*(s32 *)((char *)(temp_s1) + 0x74)) & 0xF) == 0xF) {
        (*(u8 *)((char *)(temp_s0) + 0x150)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0x150)) | 0x10);
    } else {
        (*(u8 *)((char *)(temp_s0) + 0x150)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0x150)) & 0xFFEF);
    }
    if ((*(s32 *)((char *)(temp_s1) + 0x1D4)) != 0) {
        sp264 = (char *)(temp_s0) + 8;
        sp268 = (char *)(temp_s0) + 0x14;
        sp26C = (char *)(temp_s0) + 0x90;
        sp270 = (char *)(temp_s0) + 0xD4;
        sp254 = &sp298;
        sp258 = &sp28C;
        sp25C = &sp280;
        sp260 = &sp274;
        sp2A4 = temp_s1;
        func_15145EA4(&sp264, &sp254, (*(s32 *)((char *)(temp_s1) + 0x1D4)) + ((*(s32 *)((char *)(temp_s0) + 0x5)) << 6), 4);
        (*(u8 *)((char *)(temp_s0) + 0x150)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0x150)) & 0xFFFE);
    } else {
        sp2A4 = temp_s1;
        func_15145740(temp_s1, &sp248, &sp23C, 0, 0.0f);
        temp_f6 = (*(s32 *)((char *)(sp2A4) + 0x14));
        sp298 = temp_f6;
        temp_f4 = (*(s32 *)((char *)(sp2A4) + 0x18)) + 33.0f;
        sp29C = temp_f4;
        temp_f8 = (*(s32 *)((char *)(sp2A4) + 0x1C));
        sp2A0 = temp_f8;
        sp28C = (sp248 * D_800A8AE0) + temp_f6;
        sp290 = (sp24C * D_800A8AE0) + temp_f4;
        sp294 = (sp250 * D_800A8AE0) + temp_f8;
        (*(u8 *)((char *)(temp_s0) + 0x150)) = (u8) ((*(u8 *)((char *)(temp_s0) + 0x150)) | 1);
    }
    (*(f32 *)((char *)(arg0) + 0x10)) = (f32) (*(f32 *)((char *)&(sp298) + 0x0));
    (*(s32 *)((char *)(arg0) + 0x14)) = (s32) (*(s32 *)((char *)&(sp298) + 0x4));
    (*(s32 *)((char *)(arg0) + 0x18)) = (s32) (*(s32 *)((char *)&(sp298) + 0x8));
    (*(f32 *)((char *)(temp_s0) + 0x12C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x12C)) + ((*(f32 *)((char *)(temp_s0) + 0x24)) * D_800BE9A4));
    temp_f2 = (*(s32 *)((char *)(temp_s0) + 0x12C));
    if (temp_f2 > 1.0f) {
        temp_f0 = 1.0f / temp_f2;
        temp_v1 = (char *)(temp_s0) + 0x110;
        temp_t0 = (char *)(temp_s0) + 0x11C;
        var_f20 = (*(s32 *)((char *)(temp_s0) + 0x128)) + D_800BE9A4;
        sp230 = var_f20 * temp_f0;
        (*(s32 *)((char *)&(sp20C) + 0x0)) = (*(s32 *)((char *)(temp_s0) + 0x110));
        (*(s32 *)((char *)&(sp20C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x4));
        (*(s32 *)((char *)&(sp20C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v1) + 0x8));
        (*(s32 *)((char *)&(sp200) + 0x0)) = (*(s32 *)((char *)(temp_s0) + 0x11C));
        (*(s32 *)((char *)&(sp200) + 0x4)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x4));
        (*(s32 *)((char *)&(sp200) + 0x8)) = (s32) (*(s32 *)((char *)(temp_t0) + 0x8));
        temp_f6_2 = sp298 - (*(s32 *)((char *)(temp_s0) + 0x110));
        sp224 = temp_f6_2;
        temp_f4_2 = sp29C - (*(s32 *)((char *)(temp_s0) + 0x114));
        sp228 = temp_f4_2;
        sp68 = temp_f6_2;
        temp_f8_2 = sp2A0 - (*(s32 *)((char *)(temp_s0) + 0x118));
        sp22C = temp_f8_2;
        sp6C = temp_f4_2;
        temp_f10 = sp28C - (*(s32 *)((char *)(temp_s0) + 0x11C));
        sp218 = temp_f10;
        sp70 = temp_f8_2;
        temp_f6_3 = sp290 - (*(s32 *)((char *)(temp_s0) + 0x120));
        sp21C = temp_f6_3;
        sp98 = temp_t0;
        sp9C = temp_v1;
        temp_f4_3 = sp294 - (*(s32 *)((char *)(temp_s0) + 0x124));
        sp220 = temp_f4_3;
        var_f2 = sp68 * temp_f0;
        var_f12 = temp_f4_2 * temp_f0;
        var_f14 = temp_f8_2 * temp_f0;
        var_f16 = temp_f10 * temp_f0;
        var_f18 = temp_f6_3 * temp_f0;
        sp84 = temp_f4_3 * temp_f0;
        do {
            temp_a0 = ((*(s32 *)((char *)(arg0) + 0x2E)) * 0x28) + sp2A8;
            (*(f32 *)((char *)(temp_a0) + 0x0)) = (f32) (*(f32 *)((char *)&(sp20C) + 0x0));
            (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) (*(s32 *)((char *)&(sp20C) + 0x4));
            (*(s32 *)((char *)(temp_a0) + 0x8)) = (s32) (*(s32 *)((char *)&(sp20C) + 0x8));
            (*(f32 *)((char *)(temp_a0) + 0xC)) = (f32) (sp200 - sp20C);
            (*(f32 *)((char *)(temp_a0) + 0x10)) = (f32) (sp204 - sp210);
            (*(f32 *)((char *)(temp_a0) + 0x14)) = (f32) (sp208 - sp214);
            (*(s32 *)((char *)(temp_a0) + 0x1C)) = 0.0f;
            (*(f32 *)((char *)(temp_a0) + 0x18)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x2C));
            (*(u8 *)((char *)(temp_a0) + 0x20)) = (u8) (*(u8 *)((char *)(temp_s0) + 0x3A));
            (*(f32 *)((char *)(temp_a0) + 0x24)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x144));
            sp88 = var_f18;
            sp8C = var_f16;
            sp90 = (*(void **)&var_f14);
            sp94 = (*(void **)&var_f12);
            spA0 = var_f2;
            sp1E4 = temp_a0;
            func_1519BE1C((*(void **)&var_f12), (*(void **)&var_f14), (f32)(s32)(temp_a0), (f32)(s32)((char *)(temp_a0) + 0xC));
            (*(f32 *)((char *)(temp_a0) + 0x18)) = (f32) ((*(f32 *)((char *)(temp_a0) + 0x18)) + ((*(f32 *)((char *)(temp_s0) + 0x30)) * var_f20));
            (*(s8 *)((char *)(arg0) + 0x2E)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2E)) + 1);
            if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s32 *)((char *)(arg0) + 0x2E)) = 0;
            }
            temp_v1_2 = (*(s32 *)((char *)(arg0) + 0x2D));
            (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) + 1);
            if (temp_v1_2 == (*(s32 *)((char *)(arg0) + 0x2E))) {
                (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) (temp_v1_2 + 1);
                if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                    (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                }
                (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
            }
            sp210 += var_f12;
            sp20C += var_f2;
            sp200 += var_f16;
            sp214 += var_f14;
            sp204 += var_f18;
            sp208 += sp84;
            var_f20 -= sp230;
            (*(f32 *)((char *)(temp_s0) + 0x12C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x12C)) - 1.0f);
        } while ((*(s32 *)((char *)(temp_s0) + 0x12C)) > 1.0f);
        (*(f32 *)((char *)(sp9C) + 0x0)) = (f32) (*(f32 *)((char *)&(sp20C) + 0x0));
        (*(s32 *)((char *)(sp9C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp20C) + 0x4));
        (*(s32 *)((char *)(sp9C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp20C) + 0x8));
        (*(f32 *)((char *)(sp98) + 0x0)) = (f32) (*(f32 *)((char *)&(sp200) + 0x0));
        (*(s32 *)((char *)(sp98) + 0x4)) = (s32) (*(s32 *)((char *)&(sp200) + 0x4));
        (*(s32 *)((char *)(sp98) + 0x8)) = (s32) (*(s32 *)((char *)&(sp200) + 0x8));
        (*(s32 *)((char *)(temp_s0) + 0x128)) = var_f20;
    }
    if (((*(s32 *)((char *)(sp2A4) + 0x1D4)) != 0) && (((*(s32 *)((char *)(sp2A4) + 0x74)) & 0xF) != 0xF)) {
        (*(f32 *)((char *)(temp_s0) + 0x138)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x138)) + (((*(f32 *)((char *)(temp_s0) + 0x9C)) + (random_float(sp2A4) * (*(f32 *)((char *)(temp_s0) + 0xA0)))) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s0) + 0x138)) > 1.0f) {
            sp18C = 0x200005;
            sp190 = 0x1F0600;
            sp194 = 3;
            sp198 = 0x22;
            sp188 = 0;
            sp19C = 0x80;
            sp1A0 = 0x20;
            sp1A4 = 0;
            sp1A5 = 7;
            sp1D6 = 0x15;
            sp1D8 = 1;
            sp1DC = -1;
            sp1C0 = 0x68;
            sp1C1 = 0xA;
            sp1C2 = 0xFF;
            sp1BC = D_800A8AE4;
            sp1C4 = (*(s32 *)((char *)(temp_s0) + 0xD0));
            sp1C6 = (*(s32 *)((char *)(temp_s0) + 0xD2));
            do {
                sp1DD = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0xA8)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0xA4));
                sp1D4 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0xAE)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0xAC));
                sp1A8 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0xB4))) + (*(s32 *)((char *)(temp_s0) + 0xB0));
                (*(s32 *)((char *)&(sp1C8) + 0x0)) = (*(s32 *)((char *)&(sp298) + 0x0));
                (*(s32 *)((char *)&(sp1C8) + 0x4)) = (s32) (*(s32 *)((char *)&(sp298) + 0x4));
                (*(s32 *)((char *)&(sp1C8) + 0x8)) = (s32) (*(s32 *)((char *)&(sp298) + 0x8));
                (*(s32 *)((char *)&(sp17C) + 0x0)) = (*(s32 *)((char *)&(sp280) + 0x0));
                (*(s32 *)((char *)&(sp17C) + 0x4)) = (s32) (*(s32 *)((char *)&(sp280) + 0x4));
                (*(s32 *)((char *)&(sp17C) + 0x8)) = (s32) (*(s32 *)((char *)&(sp280) + 0x8));
                sp17C -= sp1C8;
                sp180 -= sp1CC;
                sp184 -= sp1D0;
                if (func_15146078(&sp17C, &sp170, &sp164) != 0) {
                    temp_f20 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0xBC))) + (*(s32 *)((char *)(temp_s0) + 0xB8));
                    temp_s1_2 = random_u32();
                    func_15143874((s16) (temp_s1_2 & 0xFF), random_float() * (*(s16 *)((char *)(temp_s0) + 0xC0)), &sp15C, &sp160);
                    sp1AC = ((sp170 * sp15C) + (sp164 * sp160) + sp17C) * temp_f20;
                    sp1B0 = ((sp174 * sp15C) + (sp168 * sp160) + sp180) * temp_f20;
                    sp1B4 = ((sp178 * sp15C) + (sp16C * sp160) + sp184) * temp_f20;
                    sp1B8 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0xC8))) + (*(s32 *)((char *)(temp_s0) + 0xC4));
                    sp1C3 = (s8) (u32) ((random_float() * (f32) (*(s8 *)((char *)(temp_s0) + 0xCE))) + (f32) (*(s8 *)((char *)(temp_s0) + 0xCC)));
                    func_15147DA0(&sp1C8, &sp1A8, 0, 1, 0, 0, 0, 0, 0, 0, 0, &sp188, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                }
                (*(f32 *)((char *)(temp_s0) + 0x138)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x138)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s0) + 0x138)) > 1.0f);
        }
    }
    if (((*(s32 *)((char *)(sp2A4) + 0x1D4)) != 0) && (((*(s32 *)((char *)(sp2A4) + 0x74)) & 0xF) != 0xF)) {
        (*(f32 *)((char *)(temp_s0) + 0x13C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x13C)) + (((*(f32 *)((char *)(temp_s0) + 0xE0)) + (random_float(sp2A4) * (*(f32 *)((char *)(temp_s0) + 0xE4)))) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s0) + 0x13C)) > 1.0f) {
            sp105 = 0x28;
            spF0 = 0x2203;
            spEC = 0x1F0600;
            spE8 = 0x200005;
            spF4 = 0;
            spF8 = 0;
            spFC = 0xFF;
            spFD = 0xFF;
            spFE = 0xFF;
            spFF = 0xFF;
            sp100 = 0xFF;
            sp101 = 0xFF;
            sp102 = 0xFF;
            (*(s32 *)((char *)&(sp118) + 0x0)) = (*(s32 *)((char *)&(sp298) + 0x0));
            (*(s32 *)((char *)&(sp118) + 0x4)) = (s32) (*(s32 *)((char *)&(sp298) + 0x4));
            (*(s32 *)((char *)&(sp118) + 0x8)) = (s32) (*(s32 *)((char *)&(sp298) + 0x8));
            sp124 = 0.0f;
            sp128 = 0.0f;
            sp12C = 0.0f;
            sp106 = (*(s32 *)((char *)(temp_s0) + 0x10C));
            sp10A = 1;
            sp10C = 1.0f;
            sp140 = 0xC207;
            sp148 = 6;
            sp149 = 8;
            sp14A = -1;
            sp14B = -1;
            sp14C = -1;
            sp14D = 0;
            sp108 = (*(s32 *)((char *)(temp_s0) + 0x10E));
            do {
                spF2 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0xEA)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0xE8));
                sp103 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s0) + 0xEE)) + 1)) + (*(u32 *)((char *)(temp_s0) + 0xEC));
                temp_f10_2 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0xF4))) + (*(s32 *)((char *)(temp_s0) + 0xF0));
                sp114 = temp_f10_2;
                sp110 = temp_f10_2;
                (*(s32 *)((char *)&(spDC) + 0x0)) = (*(s32 *)((char *)&(sp274) + 0x0));
                (*(s32 *)((char *)&(spDC) + 0x4)) = (s32) (*(s32 *)((char *)&(sp274) + 0x4));
                (*(s32 *)((char *)&(spDC) + 0x8)) = (s32) (*(s32 *)((char *)&(sp274) + 0x8));
                spDC -= sp118;
                spE0 -= sp11C;
                spE4 -= sp120;
                if (func_15146078(&spDC, &spD0, &spC4) != 0) {
                    temp_f20_2 = (random_float() * (*(s32 *)((char *)(temp_s0) + 0xFC))) + (*(s32 *)((char *)(temp_s0) + 0xF8));
                    temp_s1_3 = random_u32();
                    func_15143874((s16) (temp_s1_3 & 0xFF), random_float() * (*(s16 *)((char *)(temp_s0) + 0x100)), &spBC, &spC0);
                    sp130 = ((spD0 * spBC) + (spC4 * spC0) + spDC) * temp_f20_2;
                    sp134 = ((spD4 * spBC) + (spC8 * spC0) + spE0) * temp_f20_2;
                    sp138 = ((spD8 * spBC) + (spCC * spC0) + spE4) * temp_f20_2;
                    sp13C = (random_float() * (*(s32 *)((char *)(temp_s0) + 0x108))) + (*(s32 *)((char *)(temp_s0) + 0x104));
                    func_15130280(&spE8, 1, 0, 0, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                }
                (*(f32 *)((char *)(temp_s0) + 0x13C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x13C)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s0) + 0x13C)) > 1.0f);
        }
    }
    (*(s8 *)((char *)(temp_s0) + 0x151)) = (s8) ((*(s8 *)((char *)(temp_s0) + 0x151)) + D_800BE9E4);
    if ((*(s32 *)((char *)(temp_s0) + 0x151)) >= 0x3D) {
        temp_v1_3 = (*(s32 *)((char *)(temp_s0) + 0x0));
        if (temp_v1_3 != NULL) {
            temp_v0 = (*(s32 *)((char *)(temp_v1_3) + 0x31C));
            if (temp_v0 != NULL) {
                (*(s16 *)((char *)(temp_v0) + 0x1AA)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0x1AA)) + 1);
            }
        }
        (*(s32 *)((char *)(temp_s0) + 0x151)) = 0;
    }
    if (((*(s32 *)((char *)(temp_s0) + 0x150)) & 8) && ((*(s32 *)((char *)(sp2A4) + 0x318)) != NULL)) {
        (*(s16 *)((char *)(temp_s0) + 0x152)) = (s16) ((*(s16 *)((char *)(temp_s0) + 0x152)) - D_800BE9E4);
        if ((*(s32 *)((char *)(temp_s0) + 0x152)) < 0) {
            spAC = 1;
            spAE = (random_u32((f32)(s32)(sp2A4), (f32)(s32)&D_800BE9E4) % 21U) + 0x14;
            spB1 = 1 << (*(s32 *)((char *)((*(s32 *)((char *)(sp2A4) + 0x318))) + 0x23D));
            spB0 = (random_u32() % 7U) + 2;
            spB2 = -1;
            func_151D8868(&spAC, 0, (*(s32 *)((char *)(arg0) + 0xC)), (*(s32 *)((char *)(arg0) + 0x1)));
            (*(s16 *)((char *)(temp_s0) + 0x152)) = (s16) ((random_u32() % 21U) + 0x78);
        }
    }
    return 1;
}

s32 func_1519A9A4(void *arg0) {
    void * sp1F4;
    void * sp1F0;
    void * sp1EC;
    f32 sp1D4;
    s32 sp1C8;
    f32 sp1C4;
    f32 sp1C0;
    f32 sp1BC;
    s32 sp194;
    f32 sp190;
    s32 sp17C;
    s8 sp17B;
    s8 sp17A;
    s8 sp179;
    s8 sp178;
    s32 sp174;
    f32 sp170;
    f32 sp16C;
    f32 sp168;
    f32 sp164;
    f32 sp160;
    f32 sp15C;
    f32 sp158;
    f32 sp154;
    f32 sp150;
    f32 sp14C;
    f32 sp148;
    s8 sp147;
    s8 sp146;
    s8 sp145;
    s8 sp144;
    s32 sp140;
    s32 sp13C;
    s16 sp138;
    s16 sp136;
    s8 sp135;
    s8 sp134;
    s16 sp132;
    s16 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD4;
    f32 spBC;
    f32 spA8;
    u32 sp8C;
    void *sp88;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 var_f0;
    f32 var_f20;
    f32 var_f22;
    f32 var_f22_2;
    f32 var_f2;
    s32 temp_s4;
    s32 temp_v0_3;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1_2;
    s8 temp_v0_2;
    s8 temp_v0_4;
    s8 var_a1;
    s8 var_a1_3;
    s8 var_v0_3;
    s8 var_v0_4;
    u8 temp_v0;
    void *temp_a0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *var_a0;
    void *var_a0_2;
    void *var_v0_2;
    void *var_v1;

    f32 spAC;
    f32 spB0;
    temp_s1 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s4 = (*(s32 *)((char *)(arg0) + 0x94));
    var_f22 = (*(s32 *)((char *)(temp_s1) + 0x28));
    if (((*(s32 *)((char *)(temp_s1) + 0x150)) & 4) && ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2)) {
        temp_a0 = (*(s32 *)((char *)(temp_s1) + 0x0));
        if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
            var_v1 = (char *)(arg0) + 0x10;
        } else {
            var_v0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
            if (var_v0 < 0) {
                var_v0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_v1 = (var_v0 * 0x28) + temp_s4;
        }
        temp_f0 = (*(s32 *)((char *)(temp_a0) + 0x1C));
        temp_f12 = (*(s32 *)((char *)(temp_a0) + 0x14));
        temp_f14 = (*(s32 *)((char *)(temp_a0) + 0x18)) + 48.0f;
        if ((func_150AC9C0(temp_f12, temp_f14, temp_a0, temp_f0, (*(s32 *)((char *)(var_v1) + 0x0)) - temp_f12, (*(s32 *)((char *)(var_v1) + 0x4)) - temp_f14, (*(s32 *)((char *)(var_v1) + 0x8)) - temp_f0, 0, 0, &sp1EC, &sp1F0, &sp1F4, &sp1D4, 0, 0, 0.0f) != 0) && (sp1D4 < var_f22)) {
            var_f22 = sp1D4;
        }
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_a1 = (*(s32 *)((char *)(arg0) + 0x2E));
        (*(s32 *)((char *)(temp_s1) + 0x14C)) = 0.0f;
        if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
            var_v0_2 = (char *)(arg0) + 0x10;
        } else {
            var_a1 -= 1;
            if (var_a1 < 0) {
                var_a1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_v0_2 = (var_a1 * 0x28) + temp_s4;
        }
        do {
            var_a1_2 = var_a1 - 1;
            if (var_a1_2 < 0) {
                var_a1_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1 = (var_a1_2 * 0x28) + temp_s4;
            sp1BC = (*(s32 *)((char *)(temp_v1) + 0x0)) - (*(s32 *)((char *)(var_v0_2) + 0x0));
            sp1C0 = (*(s32 *)((char *)(temp_v1) + 0x4)) - (*(s32 *)((char *)(var_v0_2) + 0x4));
            sp1C8 = var_a1_2;
            sp88 = temp_v1;
            sp1C4 = (*(s32 *)((char *)(temp_v1) + 0x8)) - (*(s32 *)((char *)(var_v0_2) + 0x8));
            temp_f0_2 = func_15143E64(&sp1BC, var_a1_2);
            var_a1 = (s8) sp1C8;
            (*(s32 *)((char *)(sp88) + 0x1C)) = temp_f0_2;
            (*(f32 *)((char *)(temp_s1) + 0x14C)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x14C)) + temp_f0_2);
            temp_f16 = (*(s32 *)((char *)(temp_s1) + 0x14C));
            if (var_f22 < temp_f16) {
                temp_f2 = (*(s32 *)((char *)(sp88) + 0x1C));
                if (temp_f2 != 0.0f) {
                    temp_f0_3 = (temp_f16 - var_f22) / temp_f2;
                    (*(f32 *)((char *)(sp88) + 0x0)) = (f32) ((*(f32 *)((char *)(sp88) + 0x0)) - (sp1BC * temp_f0_3));
                    (*(f32 *)((char *)(sp88) + 0x4)) = (f32) ((*(f32 *)((char *)(sp88) + 0x4)) - (sp1C0 * temp_f0_3));
                    (*(f32 *)((char *)(sp88) + 0x8)) = (f32) ((*(f32 *)((char *)(sp88) + 0x8)) - (sp1C4 * temp_f0_3));
                    (*(f32 *)((char *)(sp88) + 0x1C)) = (f32) (temp_f2 * (1.0f - temp_f0_3));
                }
                if (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D))) {
                    do {
                        (*(s8 *)((char *)(arg0) + 0x2D)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2D)) + 1);
                        if ((*(s32 *)((char *)(arg0) + 0x25)) == (*(s32 *)((char *)(arg0) + 0x2D))) {
                            (*(s32 *)((char *)(arg0) + 0x2D)) = 0;
                        }
                        (*(s8 *)((char *)(arg0) + 0x2C)) = (s8) ((*(s8 *)((char *)(arg0) + 0x2C)) - 1);
                    } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
                }
                (*(s32 *)((char *)(temp_s1) + 0x14C)) = var_f22;
            }
            var_v0_2 = sp88;
        } while (var_a1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        temp_f16_2 = (*(s32 *)((char *)(temp_s1) + 0x14C));
        var_f0 = 0.0f;
        var_v0_3 = (*(s32 *)((char *)(arg0) + 0x2E));
        temp_f2_2 = temp_f16_2 * (*(s32 *)((char *)(temp_s1) + 0x3C));
        temp_f12_2 = temp_f16_2 - temp_f2_2;
        do {
            var_v0_3 -= 1;
            if (var_v0_3 < 0) {
                var_v0_3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1_2 = (var_v0_3 * 0x28) + temp_s4;
            var_f0 += (*(s32 *)((char *)(temp_v1_2) + 0x1C));
            if (temp_f2_2 < var_f0) {
                (*(u8 *)((char *)(temp_v1_2) + 0x20)) = (u8) (u32) ((*(u8 *)((char *)(temp_s1) + 0x140)) * ((temp_f12_2 - (var_f0 - temp_f2_2)) * (1.0f / temp_f12_2)));
            } else {
                (*(u8 *)((char *)(temp_v1_2) + 0x20)) = (u8) (*(u8 *)((char *)(temp_s1) + 0x3A));
            }
        } while (var_v0_3 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        temp_f20 = D_800A8AE8;
        (*(f32 *)((char *)(temp_s1) + 0x144)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x144)) + ((*(f32 *)((char *)(temp_s1) + 0x40)) * D_800BE9A4));
        (*(s32 *)((char *)(temp_s1) + 0x144)) = func_15144528((*(s32 *)((char *)(temp_s1) + 0x144)), temp_f20, 0xC6800000);
        var_v0_4 = (*(s32 *)((char *)(arg0) + 0x2E));
        var_f2 = 0.0f;
        do {
            var_v0_5 = var_v0_4 - 1;
            if (var_v0_5 < 0) {
                var_v0_5 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1_3 = (var_v0_5 * 0x28) + temp_s4;
            sp88 = temp_v1_3;
            sp194 = var_v0_5;
            temp_f2_3 = var_f2 + (*(s32 *)((char *)(temp_v1_3) + 0x1C));
            sp190 = temp_f2_3;
            var_v0_4 = (s8) var_v0_5;
            var_f2 = temp_f2_3;
            (*(s32 *)((char *)(temp_v1_3) + 0x24)) = func_15144528((*(s32 *)((char *)(temp_s1) + 0x144)) + (temp_f2_3 * (*(s32 *)((char *)(temp_s1) + 0x44))), temp_f20, 0xC6800000);
        } while (var_v0_4 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
    if (((*(s32 *)((char *)(arg0) + 0x2C)) >= 3) && ((temp_v0 = (*(s32 *)((char *)(temp_s1) + 0x150)), ((temp_v0 & 0x20) == 0)) || !(temp_v0 & 0x10)) && (var_f22 <= (*(s32 *)((char *)(temp_s1) + 0x14C)))) {
        (*(f32 *)((char *)(temp_s1) + 0x134)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x134)) + (((*(f32 *)((char *)(temp_s1) + 0x4C)) + (random_float() * (*(f32 *)((char *)(temp_s1) + 0x50)))) * (*(f32 *)((char *)((temp_s4 + ((s32)((*(f32 *)((char *)(arg0) + 0x2D)) * 0x28)))) + 0x18)) * D_800BE9A4));
        if ((*(s32 *)((char *)(temp_s1) + 0x134)) > 1.0f) {
            temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x2D));
            var_f22_2 = 0.0f;
            var_t1 = temp_v0_2 + 1;
            if (var_t1 == (*(s32 *)((char *)(arg0) + 0x25))) {
                var_t1 = 0;
            }
            var_f20 = 0.0f;
            var_a2 = 0;
            var_a0 = NULL;
            spD4 = (*(s32 *)((char *)(temp_s1) + 0x14C)) * (*(s32 *)((char *)(temp_s1) + 0x84));
            var_a1_3 = (*(s32 *)((char *)(arg0) + 0x2E));
loop_51:
            var_a1_3 -= 1;
            if (var_a1_3 < 0) {
                var_a1_3 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1_4 = (var_a1_3 * 0x28) + temp_s4;
            temp_f18 = (*(s32 *)((char *)(temp_v1_4) + 0x1C));
            var_f20 += temp_f18;
            if (spD4 <= var_f20) {
                var_a2 = 1;
                if ((var_a0 != NULL) && (temp_f18 != 0.0f)) {
                    temp_f16_3 = (*(s32 *)((char *)(temp_v1_4) + 0x0));
                    temp_f0_4 = (var_f20 - spD4) / temp_f18;
                    spEC = temp_f16_3 + (((*(s32 *)((char *)(var_a0) + 0x0)) - temp_f16_3) * temp_f0_4);
                    temp_f12_3 = (*(s32 *)((char *)(temp_v1_4) + 0x4));
                    spF0 = temp_f12_3 + (((*(s32 *)((char *)(var_a0) + 0x4)) - temp_f12_3) * temp_f0_4);
                    temp_f14_2 = (*(s32 *)((char *)(temp_v1_4) + 0x8));
                    spF4 = temp_f14_2 + (((*(s32 *)((char *)(var_a0) + 0x8)) - temp_f14_2) * temp_f0_4);
                    temp_f2_4 = (*(s32 *)((char *)(temp_v1_4) + 0x18));
                    spDC = (*(s32 *)((char *)(temp_v1_4) + 0x0)) - (*(s32 *)((char *)(var_a0) + 0x0));
                    var_f22_2 = temp_f2_4 + (((*(s32 *)((char *)(var_a0) + 0x18)) - temp_f2_4) * temp_f0_4);
                    spE0 = (*(s32 *)((char *)(temp_v1_4) + 0x4)) - (*(s32 *)((char *)(var_a0) + 0x4));
                    spE4 = (*(s32 *)((char *)(temp_v1_4) + 0x8)) - (*(s32 *)((char *)(var_a0) + 0x8));
                } else {
                    (*(s32 *)((char *)&(spEC) + 0x0)) = (*(s32 *)((char *)(temp_v1_4) + 0x0));
                    (*(f32 *)((char *)&(spEC) + 0x4)) = (f32) (*(f32 *)((char *)(temp_v1_4) + 0x4));
                    (*(f32 *)((char *)&(spEC) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v1_4) + 0x8));
                    var_f22_2 = (*(s32 *)((char *)(temp_v1_4) + 0x18));
                    spDC = 0.0f;
                    spE0 = 0.0f;
                    spE4 = 0.0f;
                }
            }
            var_a0 = temp_v1_4;
            if ((var_a1_3 != (*(s32 *)((char *)(arg0) + 0x2D))) && (var_a2 == 0)) {
                goto loop_51;
            }
            sp13C = 0;
            sp140 = 0;
            sp124 = (*(s32 *)((char *)(temp_s1) + 0x78));
            sp128 = (*(s32 *)((char *)(temp_s1) + 0x7C));
            sp12C = (*(s32 *)((char *)(temp_s1) + 0x8C));
            sp130 = (*(s32 *)((char *)(temp_s1) + 0x80));
            sp136 = 0x2203;
            sp144 = 0xFF;
            sp132 = (*(s32 *)((char *)(temp_s1) + 0x82));
            sp16C = 0.0f;
            sp135 = 0;
            sp145 = 0xFF;
            sp146 = 0xFF;
            sp147 = 0xFF;
            sp168 = 1.0f;
            sp170 = 1.0f;
            sp174 = 0x40CC05E1;
            sp179 = 0xFF;
            sp17A = 0;
            sp17B = 7;
            sp17C = 0;
            temp_s2 = (temp_v0_2 * 0x28) + temp_s4;
            temp_s3 = (var_t1 * 0x28) + temp_s4;
            temp_f24 = D_800A8AEC;
            do {
                temp_f20_2 = (random_float() * (*(s32 *)((char *)(temp_s1) + 0x60))) + (*(s32 *)((char *)(temp_s1) + 0x58));
                spBC = (random_float() * (*(s32 *)((char *)(temp_s1) + 0x64))) + (*(s32 *)((char *)(temp_s1) + 0x5C));
                temp_f2_5 = (random_float() * (*(s32 *)((char *)(temp_s1) + 0x6C))) + (*(s32 *)((char *)(temp_s1) + 0x68));
                sp148 = temp_f24 * temp_f20_2;
                sp14C = D_800A8AF0 * spBC;
                sp108 = (*(s32 *)((char *)(temp_s3) + 0xC)) * temp_f2_5;
                sp10C = (*(s32 *)((char *)(temp_s3) + 0x10)) * temp_f2_5;
                sp110 = (*(s32 *)((char *)(temp_s3) + 0x14)) * temp_f2_5;
                sp114 = (*(s32 *)((char *)(temp_s2) + 0xC)) * temp_f2_5;
                sp118 = (*(s32 *)((char *)(temp_s2) + 0x10)) * temp_f2_5;
                sp11C = (*(s32 *)((char *)(temp_s2) + 0x14)) * temp_f2_5;
                sp120 = (random_float() * (*(s32 *)((char *)(temp_s1) + 0x74))) + (*(s32 *)((char *)(temp_s1) + 0x70));
                if (random_u32() & 1) {
                    sp134 = 0x13;
                } else {
                    sp134 = 0x14;
                }
                sp138 = (random_u32() % (u32) ((*(u32 *)((char *)(temp_s1) + 0x56)) + 1)) + (*(u32 *)((char *)(temp_s1) + 0x54));
                sp8C = random_u32();
                func_15143794((s16) (sp8C & 0xFF), (s16) ((random_u32() & 0x7F) - 0x3F), var_f22_2, &spA8);
                temp_f0_5 = spEC + spA8;
                temp_f2_6 = spF0 + spAC;
                sp150 = temp_f0_5;
                temp_f12_4 = spF4 + spB0;
                sp154 = temp_f2_6;
                sp158 = temp_f12_4;
                sp15C = temp_f0_5 + spDC;
                sp160 = temp_f2_6 + spE0;
                sp164 = temp_f12_4 + spE4;
                sp178 = (random_u32(temp_f12_4) % (u32) ((*(u32 *)((char *)(temp_s1) + 0x89)) + 1)) + (*(u32 *)((char *)(temp_s1) + 0x88));
                if (random_u32() & 1) {
                    var_v0_6 = 1;
                } else {
                    var_v0_6 = 0;
                }
                temp_v0_3 = func_1513D2F0(&sp134, &D_800A4AA0, 0x1F, 0x22, 0, 0x1A, var_v0_6 | 2, 0, 0, 0x2C, (s32) (*(s32 *)((char *)(arg0) + 0xC)), (s32) (*(s32 *)((char *)(arg0) + 0x1)));
                if (temp_v0_3 != 0) {
                    memcpy(temp_v0_3 + 0x110, (void **) &sp108, 0x2C);
                }
                (*(f32 *)((char *)(temp_s1) + 0x134)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x134)) - 1.0f);
            } while ((*(s32 *)((char *)(temp_s1) + 0x134)) > 1.0f);
        }
    }
    temp_v0_4 = (*(s32 *)((char *)(temp_s1) + 0x35));
    if (temp_v0_4 != -1) {
        ((s32 (*)())((char *)(&D_8008F8A8 + (temp_v0_4 * 4))))(arg0);
    }
    if (((*(s32 *)((char *)(temp_s1) + 0x150)) & 2) && ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2)) {
        if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
            var_a0_2 = (char *)(arg0) + 0x10;
        } else {
            var_v1_2 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
            if (var_v1_2 < 0) {
                var_v1_2 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            var_a0_2 = (var_v1_2 * 0x28) + temp_s4;
        }
        temp_v1_5 = ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x28) + temp_s4;
        func_1508B20C(((*(s32 *)((char *)(temp_v1_5) + 0x0)) + (*(s32 *)((char *)(var_a0_2) + 0x0))) * 0.5f, ((*(s32 *)((char *)(temp_v1_5) + 0x4)) + (*(s32 *)((char *)(var_a0_2) + 0x4))) * 0.5f, (f32)(s32)(var_a0_2), ((*(s32 *)((char *)(temp_v1_5) + 0x8)) + (*(s32 *)((char *)(var_a0_2) + 0x8))) * 0.5f);
    }
    return 1;
}

void *func_1519B4B8(void *arg0, void *arg1, s32 arg2) {
    void *sp134;
    f32 sp128;
    f32 sp11C;
    s32 sp118;
    f32 spE4;
    s8 spE3;
    f32 spDC;
    f32 spD8;
    f32 spD0;
    f32 spCC;
    void *spC8;
    void *sp8C;
    f32 sp88;
    f32 temp_f10;
    f32 temp_f10_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f28;
    f32 var_f28_2;
    f32 var_f30;
    f32 var_f30_2;
    s32 temp_f10_2;
    s32 temp_f4;
    s32 temp_s3;
    s32 temp_v1_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_v1;
    u8 temp_v0;
    u8 var_a0;
    u8 var_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_t4;
    void *temp_t4_2;
    void *temp_t6;
    void *temp_t8;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *var_s0;
    void *var_t0_2;

    f32 sp120;
    f32 sp124;
    f32 sp12C;
    f32 sp130;
    var_s0 = arg1;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) < 2) {

    } else {
        temp_t8 = (*(s32 *)((char *)(arg0) + 0x98));
        sp134 = temp_t8;
        temp_v0 = (*(s32 *)((char *)(temp_t8) + 0x150));
        temp_s3 = (*(s32 *)((char *)(arg0) + 0x94));
        if ((temp_v0 & 0x20) && (D_800BE616 == 0) && (temp_v0 & 0x10)) {

        } else if (temp_v0 & 1) {
            var_t0 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
            if (var_t0 < 0) {
                var_t0 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_v1 = (var_t0 * 0x28) + temp_s3;
            temp_f12 = (*(s32 *)((char *)(temp_v1) + 0x0));
            temp_f22 = (*(s32 *)((char *)(temp_v1) + 0x8));
            temp_f16 = (*(s32 *)((char *)(temp_v1) + 0x4));
            temp_v0_2 = ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x28) + temp_s3;
            temp_f14 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
            temp_f24 = (*(s32 *)((char *)(temp_v0_2) + 0x8));
            temp_f18 = (*(s32 *)((char *)(temp_v0_2) + 0x4));
            temp_f2 = temp_f12 - temp_f14;
            temp_f20 = temp_f22 - temp_f24;
            if (func_150A6360(temp_f12, temp_f14, (arg2 * 0x180) + D_800BE628, (arg2 << 6) + &D_800D9C10, (temp_f14 + temp_f12) * 0.5f, (temp_f18 + temp_f16) * 0.5f, (temp_f24 + temp_f22) * 0.5f, sqrtf((temp_f2 * temp_f2) + (temp_f20 * temp_f20)), fabsf(temp_f16 - temp_f18) + (2.0f * (*(s32 *)((char *)(sp134) + 0x2C))), D_800A8AF4) == 0) {

            } else {
                goto block_11;
            }
        } else {
block_11:
            func_151D5D60((char *)(arg0) + 0x84, arg2, ((*(s32 *)((char *)(arg0) + 0x25)) << 5) + 0xA0, &spC8, NULL);
            if (spC8 == NULL) {

            } else {
                temp_s1 = func_15144B34(arg2);
                spE3 = 1;
                var_s0 = func_15142FBC(func_1513F4E4(func_15142B7C(func_15142E24(var_s0, &D_80091064, 0, 0, 0, 0, 0x6B, 0, 0, &spE3, 3), 0x200005, 0x1F0600), 0x4C, &spE3), D_800D2C9C | 0x80000 | 0x2CA0, (*(s32 *)((char *)&(D_800A4AC8) + 0x1C)) | (*(s32 *)((char *)&(D_800A4AC8) + 0x18)), &spE3);
                if ((*(s32 *)((char *)(arg0) + 0x1E)) & 2) {
                    var_t1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                    if (var_t1 < 0) {
                        var_t1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    }
                    (*(s32 *)((char *)&(sp11C) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x10));
                    (*(s32 *)((char *)&(sp11C) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x14));
                    (*(s32 *)((char *)&(sp11C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x18));
                    spD8 = (*(s32 *)((char *)(sp134) + 0x2C));
                    var_a1 = (*(s32 *)((char *)(sp134) + 0x3A));
                    spCC = (*(s32 *)((char *)(sp134) + 0x144));
                } else {
                    var_v1 = (*(s32 *)((char *)(arg0) + 0x2E)) - 1;
                    if (var_v1 < 0) {
                        var_v1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    }
                    var_t1 = var_v1 - 1;
                    if (var_t1 < 0) {
                        var_t1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                    }
                    temp_v0_3 = temp_s3 + (var_v1 * 0x28);
                    (*(s32 *)((char *)&(sp11C) + 0x0)) = (*(s32 *)((char *)(temp_v0_3) + 0x0));
                    (*(s32 *)((char *)&(sp11C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x4));
                    (*(s32 *)((char *)&(sp11C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_3) + 0x8));
                    spD8 = (*(s32 *)((char *)(temp_v0_3) + 0x18));
                    var_a1 = (*(s32 *)((char *)(temp_v0_3) + 0x20));
                    spCC = (*(s32 *)((char *)(temp_v0_3) + 0x24));
                }
                var_t0_2 = temp_s3 + (var_t1 * 0x28);
                (*(s32 *)((char *)&(sp128) + 0x0)) = (*(s32 *)((char *)(var_t0_2) + 0x0));
                (*(s32 *)((char *)&(sp128) + 0x4)) = (s32) (*(s32 *)((char *)(var_t0_2) + 0x4));
                (*(s32 *)((char *)&(sp128) + 0x8)) = (s32) (*(s32 *)((char *)(var_t0_2) + 0x8));
                spDC = (*(s32 *)((char *)(var_t0_2) + 0x18));
                var_a0 = (*(s32 *)((char *)(var_t0_2) + 0x20));
                spD0 = (*(s32 *)((char *)(var_t0_2) + 0x24));
                temp_f22_2 = sp11C - (*(s32 *)((char *)(temp_s1) + 0x0));
                temp_f24_2 = sp120 - (*(s32 *)((char *)(temp_s1) + 0x4));
                temp_f26 = sp124 - (*(s32 *)((char *)(temp_s1) + 0x8));
                temp_f18_2 = sp120 - sp12C;
                temp_f20_2 = sp124 - sp130;
                temp_f16_2 = sp11C - sp128;
                temp_f12_2 = (temp_f18_2 * temp_f26) - (temp_f24_2 * temp_f20_2);
                temp_f28 = (temp_f20_2 * temp_f22_2) - (temp_f26 * temp_f16_2);
                temp_f14_2 = (temp_f16_2 * temp_f24_2) - (temp_f22_2 * temp_f18_2);
                temp_f10 = (temp_f12_2 * temp_f12_2) + (temp_f28 * temp_f28) + (temp_f14_2 * temp_f14_2);
                sp88 = temp_f10;
                spE4 = temp_f10;
                if (temp_f10 != 0.0f) {
                    temp_f2_2 = spD8 / sqrtf(temp_f10);
                    var_f12 = temp_f12_2 * temp_f2_2;
                    var_f28 = temp_f28 * temp_f2_2;
                    var_f30 = temp_f14_2 * temp_f2_2;
                } else {
                    var_f30 = 0.0f;
                    var_f12 = 0.0f;
                    var_f28 = 0.0f;
                }
                (*(s16 *)((char *)(spC8) + 0x0)) = (s16) (s32) (sp11C + var_f12);
                (*(s16 *)((char *)(spC8) + 0x2)) = (s16) (s32) (sp120 + var_f28);
                (*(s16 *)((char *)(spC8) + 0x4)) = (s16) (s32) (sp124 + var_f30);
                temp_f10_2 = (s32) spCC;
                (*(s16 *)((char *)(spC8) + 0x8)) = (s16) temp_f10_2;
                (*(s32 *)((char *)(spC8) + 0xA)) = 0x47C0;
                (*(s32 *)((char *)(spC8) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spC8) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spC8) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(spC8) + 0xF)) = var_a1;
                (*(s32 *)((char *)(spC8) + 0x6)) = 0;
                temp_t4 = (char *)(spC8) + 0x10;
                spC8 = temp_t4;
                (*(s16 *)((char *)(spC8) + 0x10)) = (s16) (s32) (sp11C - var_f12);
                (*(s16 *)((char *)(spC8) + 0x2)) = (s16) (s32) (sp120 - var_f28);
                (*(s16 *)((char *)(spC8) + 0x4)) = (s16) (s32) (sp124 - var_f30);
                (*(s16 *)((char *)(temp_t4) + 0x8)) = (s16) temp_f10_2;
                (*(s32 *)((char *)(spC8) + 0xA)) = 0x4000;
                (*(s32 *)((char *)(spC8) + 0xC)) = 0xFF;
                (*(s32 *)((char *)(spC8) + 0xD)) = 0xFF;
                (*(s32 *)((char *)(spC8) + 0xE)) = 0xFF;
                (*(s32 *)((char *)(spC8) + 0xF)) = var_a1;
                (*(s32 *)((char *)(temp_t4) + 0x6)) = 0;
                spC8 = (char *)(spC8) + 0x10;
                do {
                    temp_f22_3 = sp128 - (*(s32 *)((char *)(temp_s1) + 0x0));
                    temp_f24_3 = sp12C - (*(s32 *)((char *)(temp_s1) + 0x4));
                    temp_f26_2 = sp130 - (*(s32 *)((char *)(temp_s1) + 0x8));
                    temp_f18_3 = sp120 - sp12C;
                    temp_f20_3 = sp124 - sp130;
                    temp_f16_3 = sp11C - sp128;
                    temp_f12_3 = (temp_f18_3 * temp_f26_2) - (temp_f24_3 * temp_f20_3);
                    temp_f28_2 = (temp_f20_3 * temp_f22_3) - (temp_f26_2 * temp_f16_3);
                    temp_f14_3 = (temp_f16_3 * temp_f24_3) - (temp_f22_3 * temp_f18_3);
                    temp_f10_3 = (temp_f12_3 * temp_f12_3) + (temp_f28_2 * temp_f28_2) + (temp_f14_3 * temp_f14_3);
                    sp88 = temp_f10_3;
                    spE4 = temp_f10_3;
                    if (temp_f10_3 != 0.0f) {
                        temp_f2_3 = spDC / sqrtf(temp_f10_3);
                        var_f12_2 = temp_f12_3 * temp_f2_3;
                        var_f28_2 = temp_f28_2 * temp_f2_3;
                        var_f30_2 = temp_f14_3 * temp_f2_3;
                    } else {
                        var_f30_2 = 0.0f;
                        var_f12_2 = 0.0f;
                        var_f28_2 = 0.0f;
                    }
                    (*(s16 *)((char *)(spC8) + 0x0)) = (s16) (s32) (sp128 + var_f12_2);
                    temp_f4 = (s32) spD0;
                    (*(s16 *)((char *)(spC8) + 0x2)) = (s16) (s32) (sp12C + var_f28_2);
                    (*(s16 *)((char *)(spC8) + 0x4)) = (s16) (s32) (sp130 + var_f30_2);
                    (*(s16 *)((char *)(spC8) + 0x8)) = (s16) temp_f4;
                    (*(s32 *)((char *)(spC8) + 0xA)) = 0x47C0;
                    (*(s32 *)((char *)(spC8) + 0xC)) = 0xFF;
                    (*(s32 *)((char *)(spC8) + 0xD)) = 0xFF;
                    (*(s32 *)((char *)(spC8) + 0xE)) = 0xFF;
                    (*(s32 *)((char *)(spC8) + 0xF)) = var_a0;
                    (*(s32 *)((char *)(spC8) + 0x6)) = 0;
                    temp_t4_2 = (char *)(spC8) + 0x10;
                    spC8 = temp_t4_2;
                    (*(s16 *)((char *)(spC8) + 0x10)) = (s16) (s32) (sp128 - var_f12_2);
                    (*(s16 *)((char *)(spC8) + 0x2)) = (s16) (s32) (sp12C - var_f28_2);
                    (*(s16 *)((char *)(spC8) + 0x4)) = (s16) (s32) (sp130 - var_f30_2);
                    (*(s16 *)((char *)(temp_t4_2) + 0x8)) = (s16) temp_f4;
                    (*(s32 *)((char *)(spC8) + 0xA)) = 0x4000;
                    (*(s32 *)((char *)(spC8) + 0xC)) = 0xFF;
                    (*(s32 *)((char *)(spC8) + 0xD)) = 0xFF;
                    (*(s32 *)((char *)(spC8) + 0xE)) = 0xFF;
                    (*(s32 *)((char *)(spC8) + 0xF)) = var_a0;
                    (*(s32 *)((char *)(temp_t4_2) + 0x6)) = 0;
                    spC8 = (char *)(spC8) + 0x10;
                    (*(s32 *)((char *)(var_s0) + 0x0)) = 0x01004008;
                    temp_s0 = (char *)(var_s0) + 8;
                    (*(s32 *)((char *)(var_s0) + 0x4)) = (void *) ((char *)(spC8) - 0x40);
                    (*(s32 *)((char *)(var_s0) + 0x8)) = 0x05000204;
                    (*(s32 *)((char *)(temp_s0) + 0x4)) = 0;
                    temp_s0_2 = (char *)(temp_s0) + 8;
                    (*(s32 *)((char *)(temp_s0) + 0x8)) = 0x05020604;
                    (*(s32 *)((char *)(temp_s0_2) + 0x4)) = 0;
                    var_s0 = (char *)(temp_s0_2) + 8;
                    if (spD0 < spCC) {
                        sp8C = var_t0_2;
                        sp118 = var_t1;
                        memcpy((*(void **)&var_f12_2), (*(void ** *)&temp_f14_3), spC8, (char *)(spC8) - 0x20, 0x20, -1);
                        (*(s16 *)((char *)(spC8) - 0x18)) = (s16) ((*(s16 *)((char *)(spC8) - 0x18)) - 0x8000);
                        temp_t6 = (char *)(spC8) + 0x10;
                        spC8 = temp_t6;
                        (*(s16 *)((char *)(temp_t6) - 0x18)) = (s16) ((*(s16 *)((char *)(temp_t6) - 0x18)) - 0x8000);
                        spC8 = (char *)(spC8) + 0x10;
                    }
                    temp_v1_2 = var_t1;
                    var_t1 -= 1;
                    var_t0_2 = (char *)(var_t0_2) - 0x28;
                    if (var_t1 < 0) {
                        var_t1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
                        var_t0_2 = temp_s3 + (var_t1 * 0x28);
                    }
                    temp_v0_4 = temp_s3 + (temp_v1_2 * 0x28);
                    (*(s32 *)((char *)&(sp11C) + 0x0)) = (*(s32 *)((char *)(temp_v0_4) + 0x0));
                    (*(s32 *)((char *)&(sp11C) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x4));
                    (*(s32 *)((char *)&(sp11C) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0_4) + 0x8));
                    (*(s32 *)((char *)&(sp128) + 0x0)) = (*(s32 *)((char *)(var_t0_2) + 0x0));
                    (*(s32 *)((char *)&(sp128) + 0x4)) = (s32) (*(s32 *)((char *)(var_t0_2) + 0x4));
                    (*(s32 *)((char *)&(sp128) + 0x8)) = (s32) (*(s32 *)((char *)(var_t0_2) + 0x8));
                    spDC = (*(s32 *)((char *)(var_t0_2) + 0x18));
                    var_a0 = (*(s32 *)((char *)(var_t0_2) + 0x20));
                    spCC = (*(s32 *)((char *)(temp_v0_4) + 0x24));
                    spD0 = (*(s32 *)((char *)(var_t0_2) + 0x24));
                } while (temp_v1_2 != (*(s32 *)((char *)(arg0) + 0x2D)));
            }
        }
    }
    return var_s0;
}

void func_1519BE1C(void *arg0, void *arg1, f32 arg2, f32 arg3) {
    f32 sp8;
    f32 spC;
    f32 sp4;

    (*(s32 *)((char *)&(sp4) + 0x0)) = (*(s32 *)((char *)(arg1) + 0x0));
    (*(f32 *)((char *)&(sp4) + 0x4)) = (f32) (*(f32 *)((char *)(arg1) + 0x4));
    (*(s32 *)((char *)&(sp4) + 0x8)) = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    (*(f32 *)((char *)(arg1) + 0x4)) = (f32) ((*(f32 *)((char *)(arg1) + 0x4)) + (arg2 * arg3));
    (*(f32 *)((char *)(arg0) + 0x0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x0)) + (sp4 * arg3));
    (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4)) + ((sp8 * arg3) + (0.5f * arg2 * arg3 * arg3)));
    (*(f32 *)((char *)(arg0) + 0x8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8)) + (spC * arg3));
}

void func_1519BEB8(void *arg0) {
    s32 var_a1;
    s32 var_a2;
    u8 *var_t0;

    var_a1 = 0;
    var_a2 = 0;
    var_t0 = &D_800A8A9C;
loop_1:
    if ((*(s32 *)((char *)(((*(s32 *)((*(s32 *)((char *)(arg0) + 0x98)))))) + 0x3B)) == *var_t0) {
        var_a2 = 1;
    } else {
        var_a1 += 1;
        var_t0 += 1;
    }
    if ((var_a2 == 0) && (var_a1 < 6)) {
        goto loop_1;
    }
    if (var_a2 != 0) {
        (*(s32 *)((char *)((*(&D_800E0900 + (var_a1 * 4)))) + 0x14)) = 0;
    }
}

void func_1519BF20(void *arg0) {
    s32 var_a1;
    s32 var_a2;
    u8 *var_t0;

    var_a1 = 0;
    var_a2 = 0;
    var_t0 = &D_800A8A9C;
loop_1:
    if ((*(s32 *)((char *)(((*(s32 *)((*(s32 *)((char *)(arg0) + 0x98)))))) + 0x3B)) == *var_t0) {
        var_a2 = 1;
    } else {
        var_a1 += 1;
        var_t0 += 1;
    }
    if ((var_a2 == 0) && (var_a1 < 6)) {
        goto loop_1;
    }
    if (var_a2 != 0) {
        (*(s32 *)((char *)((*(&D_800E0900 + (var_a1 * 4)))) + 0x14)) = 1;
    }
}

void func_1519BF8C(void) {
    func_10010F30(0x1AA, 0x7FFF, 0x40, 0, 0);
}

void func_1519BFBC(void *arg0) {
    u16 temp_a0;
    void *temp_v0;

    if ((*(s32 *)((char *)(arg0) + 0x2C)) != 0) {
        temp_a0 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x130));
        if (temp_a0 != 0) {
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x94)) + ((*(s32 *)((char *)(arg0) + 0x2D)) * 0x28);
            func_1000F91C(temp_a0, 0x7FFF, 0, 0, 0, (s32) (*(s32 *)((char *)(temp_v0) + 0x0)), (s32) (*(s32 *)((char *)(temp_v0) + 0x4)), (s32) (*(s32 *)((char *)(temp_v0) + 0x8)), 0x1F4, 0x1388);
        }
    }
}

void func_1519C06C(void *arg0) {
    u16 temp_a1;

    temp_a1 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x98))) + 0x130));
    if (temp_a1 != 0) {
        func_100111C8(temp_a1 & 0xFFFF);
    }
}

s32 func_1519C09C(void *arg0, f32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7) {
    s32 sp74;
    s8 sp70;
    s16 sp6E;
    s8 sp6D;
    s8 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    void *sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    void *sp3C;
    s32 temp_v0;

    sp3C = 0x420C0000;
    sp40 = 5.0f;
    sp6C = 2;
    sp6D = 2;
    sp6E = 0x12C;
    sp70 = 0x22;
    sp44 = 110.0f;
    sp48 = 1.0f;
    sp50 = 7.0f;
    sp54 = D_800A8AF8;
    sp5C = arg0;
    sp4C = 0.0f;
    sp58 = 127.0f;
    sp60 = (s32) (*(s32 *)((char *)(arg1) + 0x0));
    sp64 = (s32) (*(s32 *)((char *)(arg1) + 0x4));
    sp68 = (s32) (*(s32 *)((char *)(arg1) + 0x8));
    temp_v0 = func_151602C0(&sp6C, &sp60, arg2, arg3, (s32) arg4, (s32) arg5, 0xFF, 0, 0x24, (s32) arg6, arg7);
    sp74 = temp_v0;
    if (temp_v0 != 0) {
        memcpy(temp_v0 + 0x18, &sp3C, 0x20);
        memcpy(sp74 + 0x38, &sp5C, 4);
    }
    return sp74;
}

void func_1519C200(void *arg0) {
    func_1519C258(arg0);
    func_151617C4(arg0);
}

void func_1519C22C(void *arg0) {
    func_1519C258(arg0);
    func_151617E4(arg0);
}

void func_1519C258(void *arg0) {
    (*(s32 *)((char *)((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x38))) + 0x98))) + 0x148)) = 0;
}

s32 func_1519C26C(void *arg0) {
    f32 sp50;
    f32 sp4C;
    f32 sp44;
    f32 sp40;
    f32 sp48;
    f32 sp3C;
    f32 sp2C;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f8;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = (char *)(arg0) + 0x110;
    (*(s32 *)((char *)&(sp48) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x110));
    temp_f0 = D_800BE9A4 * D_800BE9A4;
    (*(f32 *)((char *)&(sp48) + 0x4)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x4));
    (*(f32 *)((char *)&(sp48) + 0x8)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x8));
    (*(s32 *)((char *)&(sp3C) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x11C));
    (*(f32 *)((char *)&(sp3C) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x120));
    (*(s32 *)((char *)&(sp3C) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x124));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x128));
    (*(f32 *)((char *)(arg0) + 0x114)) = (f32) ((*(f32 *)((char *)(arg0) + 0x114)) + (temp_f12 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x120)) = (f32) ((*(f32 *)((char *)(arg0) + 0x120)) + (temp_f12 * D_800BE9A4));
    var_v1 = D_800BE9E4;
    if (var_v1 > 0) {
        temp_f2 = (*(s32 *)((char *)(temp_v0) + 0x1C));
        temp_f12_2 = (*(s32 *)((char *)(temp_v0) + 0x20));
        do {
            var_v1 -= 1;
            (*(f32 *)((char *)(arg0) + 0x110)) = (f32) ((*(f32 *)((char *)(arg0) + 0x110)) * temp_f2);
            (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x4)) * temp_f2);
            (*(f32 *)((char *)(temp_v0) + 0x8)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x8)) * temp_f2);
            (*(f32 *)((char *)(temp_v0) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0xC)) * temp_f12_2);
            (*(f32 *)((char *)(temp_v0) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x10)) * temp_f12_2);
            (*(f32 *)((char *)(temp_v0) + 0x14)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0x14)) * temp_f12_2);
        } while (var_v1 > 0);
    }
    temp_f8 = ((*(s32 *)((char *)(temp_v0) + 0x10)) - sp40) * D_800BE9A8;
    sp28 = temp_f8;
    sp2C = ((*(s32 *)((char *)(temp_v0) + 0x14)) - sp44) * D_800BE9A8;
    (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) + ((sp48 * D_800BE9A4) + (0.5f * (((*(f32 *)((char *)(arg0) + 0x110)) - sp48) * D_800BE9A8) * temp_f0)));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((sp4C * D_800BE9A4) + (0.5f * (((*(f32 *)((char *)(temp_v0) + 0x4)) - sp4C) * D_800BE9A8) * temp_f0)));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((sp50 * D_800BE9A4) + (0.5f * (((*(f32 *)((char *)(temp_v0) + 0x8)) - sp50) * D_800BE9A8) * temp_f0)));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((sp3C * D_800BE9A4) + (0.5f * (((*(f32 *)((char *)(temp_v0) + 0xC)) - sp3C) * D_800BE9A8) * temp_f0)));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) + ((sp40 * D_800BE9A4) + (0.5f * temp_f8 * temp_f0)));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) + ((sp44 * D_800BE9A4) + (0.5f * sp2C * temp_f0)));
    return 1;
}

s32 func_1519C4E4(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v1;
    s32 temp_lo;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;

    var_v1 = D_800BE9E4;
    temp_v0 = (char *)(arg0) + 0x110;
    if (var_v1 > 0) {
        do {
            temp_f0 = (*(s32 *)((char *)(arg0) + 0x2C));
            temp_f2 = (*(s32 *)((char *)(arg0) + 0x30));
            var_v1 -= 1;
            (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) (temp_f0 - (temp_f0 * (*(f32 *)((char *)(temp_v0) + 0x24))));
            (*(f32 *)((char *)(arg0) + 0x30)) = (f32) (temp_f2 - (temp_f2 * (*(f32 *)((char *)(temp_v0) + 0x24))));
        } while (var_v1 > 0);
    }
    temp_v0_2 = (char *)(arg0) + 0x110;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x1C));
    if (temp_v1 < (*(s32 *)((char *)(temp_v0_2) + 0x28))) {
        temp_lo = temp_v1 * (*(s32 *)((char *)(temp_v0_2) + 0x2A));
        if (temp_lo < (s32) (*(s32 *)((char *)(arg0) + 0x5C))) {
            (*(u8 *)((char *)(arg0) + 0x5C)) = (u8) temp_lo;
        }
    }
    return 1;
}

void *func_1519C56C(void *arg0, s32 arg1) {
    void *sp8C;
    void *sp88;
    void *sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    void * sp44;
    f32 sp40;
    u8 sp3F;
    void *sp34;
    void **sp30_ptr;
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 temp_f8;
    f32 var_f12;
    f32 var_f14;
    f32 var_f16;
    void **temp_a1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;

    func_151D5D60((char *)(arg0) + 0x100, arg1, 0x40, &sp8C, &sp3F);
    sp88 = sp8C;
    if (sp8C != NULL) {
        if (sp3F != 0) {
            temp_v1 = (char *)(arg0) + (arg1 * 4);
            temp_a1 = (char *)(arg0) + 0xC0;
            sp30_ptr = temp_a1;
            sp34 = temp_v1;
            memcpy((*(s32 *)((char *)(temp_v1) + 0x100)), temp_a1, 0x40);
            memcpy((*(s32 *)((char *)(temp_v1) + 0x100)) + 0x40, temp_a1, 0x40);
        }
        temp_v0 = func_15144B34(arg1);
        temp_a2 = temp_v0;
        sp78 = (*(s32 *)((char *)(arg0) + 0x40)) - (*(s32 *)((char *)(arg0) + 0x34));
        sp7C = (*(s32 *)((char *)(arg0) + 0x44)) - (*(s32 *)((char *)(arg0) + 0x38));
        temp_f4 = (*(s32 *)((char *)(arg0) + 0x48)) - (*(s32 *)((char *)(arg0) + 0x3C));
        sp80 = temp_f4;
        temp_f0 = (*(s32 *)((char *)(arg0) + 0x30));
        temp_f2 = (*(s32 *)((char *)(arg0) + 0x34));
        temp_f12 = temp_f2 + (sp78 * temp_f0);
        temp_f14 = (*(s32 *)((char *)(arg0) + 0x38)) + (sp7C * temp_f0);
        sp78 = temp_f12 - temp_f2;
        temp_f16 = (*(s32 *)((char *)(arg0) + 0x3C)) + (temp_f4 * temp_f0);
        sp7C = temp_f14 - (*(s32 *)((char *)(arg0) + 0x38));
        sp74 = temp_f16;
        sp70 = temp_f14;
        sp6C = temp_f12;
        sp84 = temp_v0;
        sp80 = temp_f16 - (*(s32 *)((char *)(arg0) + 0x3C));
        func_15145548(temp_f12, temp_f14, (char *)(arg0) + 0x34, &sp78, temp_a2, &sp48, &sp44);
        temp_f0_2 = sp48 - (*(s32 *)((char *)(sp84) + 0x0));
        temp_f2_2 = sp4C - (*(s32 *)((char *)(sp84) + 0x4));
        temp_f12_2 = sp50 - (*(s32 *)((char *)(sp84) + 0x8));
        temp_f18 = (sp7C * temp_f12_2) - (temp_f2_2 * sp80);
        temp_f16_2 = (sp80 * temp_f0_2) - (temp_f12_2 * sp78);
        sp30 = temp_f16_2;
        temp_f8 = (sp78 * temp_f2_2) - (temp_f0_2 * sp7C);
        sp2C = temp_f8;
        temp_f14_2 = (temp_f18 * temp_f18) + (temp_f16_2 * temp_f16_2) + (temp_f8 * temp_f8);
        sp40 = temp_f14_2;
        if (temp_f14_2 != 0.0f) {
            temp_f2_3 = (*(s32 *)((char *)(arg0) + 0x2C)) / sqrtf(sp40);
            var_f12 = temp_f18 * temp_f2_3;
            var_f14 = sp30 * temp_f2_3;
            var_f16 = temp_f8 * temp_f2_3;
        } else {
            var_f16 = 0.0f;
            var_f12 = 0.0f;
            var_f14 = 0.0f;
        }
        (*(s16 *)((char *)(sp8C) + 0x0)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) + var_f12);
        (*(s16 *)((char *)(sp8C) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) + var_f14);
        (*(s16 *)((char *)(sp8C) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) + var_f16);
        (*(s32 *)((char *)(sp8C) + 0x6)) = 0;
        sp8C = (char *)(sp8C) + 0x10;
        (*(s16 *)((char *)(sp8C) + 0x10)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x34)) - var_f12);
        (*(s16 *)((char *)(sp8C) + 0x2)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x38)) - var_f14);
        (*(s16 *)((char *)(sp8C) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(arg0) + 0x3C)) - var_f16);
        (*(s32 *)((char *)(sp8C) + 0x6)) = 0;
        sp8C = (char *)(sp8C) + 0x10;
        (*(s16 *)((char *)(sp8C) + 0x10)) = (s16) (s32) (sp6C - var_f12);
        (*(s16 *)((char *)(sp8C) + 0x2)) = (s16) (s32) (sp70 - var_f14);
        (*(s16 *)((char *)(sp8C) + 0x4)) = (s16) (s32) (sp74 - var_f16);
        (*(s32 *)((char *)(sp8C) + 0x6)) = 0;
        sp8C = (char *)(sp8C) + 0x10;
        (*(s16 *)((char *)(sp8C) + 0x10)) = (s16) (s32) (sp6C + var_f12);
        (*(s16 *)((char *)(sp8C) + 0x2)) = (s16) (s32) (sp70 + var_f14);
        (*(s16 *)((char *)(sp8C) + 0x4)) = (s16) (s32) (sp74 + var_f16);
        (*(s32 *)((char *)(sp8C) + 0x6)) = 0;
        return sp88;
    }
    return NULL;
}

s32 func_1519C910(void *arg0) {
    u16 temp_a1;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_a1 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x0))) + 0x84));
    if (((*(s32 *)((char *)(temp_v0) + 0x158)) != temp_a1) && ((*(s32 *)((char *)(temp_v0) + 0x15C)) != temp_a1)) {
        return 0;
    }
    return 1;
}

s32 func_1519C948(void) {
    func_1519CDB0(0x3E800000, 3.9e-44f, 0);
    return 0;
}

s32 func_1519C970(void) {
    func_1519CDB0(0x3F000000, 4e-44f, 0);
    return 0;
}

s32 func_1519C998(void) {
    func_1519CDB0(0x3E4CCCCD, 4e-44f, 0);
    return 0;
}

void func_1519C9C4(void *arg0) {
    s16 sp142;
    s16 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    s16 sp122;
    s16 sp120;
    s16 sp11E;
    s16 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    s16 sp106;
    s16 sp104;
    s16 sp102;
    s16 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    void *spF0;
    void *spEC;
    f32 spE8;
    f32 spE4;
    s16 spE2;
    s16 spE0;
    s32 spDC;
    s32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    s8 spBD;
    s8 spBC;
    f32 spB8;
    s16 spB6;
    s16 spB4;
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
    s16 sp8A;
    s16 sp88;
    f32 sp84;
    f32 sp80;
    s8 sp7C;
    s8 sp7B;
    s8 sp7A;
    s8 sp79;
    s8 sp78;
    s8 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    s8 sp66;
    s8 sp65;
    s8 sp64;
    s8 sp63;
    s8 sp62;
    s8 sp61;
    s8 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s8 sp31;
    u8 sp30;
    void *sp2C;
    s32 sp28;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    sp2C = temp_v0;
    sp38 = -147.0f;
    sp3C = 54.0f;
    sp44 = -228.0f;
    sp48 = 80.0f;
    sp4C = D_800A8B04;
    sp50 = D_800A8B08;
    sp54 = D_800A8B0C;
    sp68 = D_800A8B10;
    sp58 = D_800A8B14;
    sp5C = D_800A8B18;
    sp6C = -234.0f;
    sp70 = D_800A8B1C;
    sp80 = D_800A8B20;
    sp84 = D_800A8B24;
    sp8C = D_800A8B28;
    sp94 = D_800A8B2C;
    sp90 = D_800A8B30;
    sp98 = D_800A8B34;
    sp9C = D_800A8B38;
    spA0 = D_800A8B3C;
    spA4 = D_800A8B40;
    spA8 = D_800A8B44;
    spAC = D_800A8B48;
    spB0 = D_800A8B4C;
    spB8 = D_800A8B50;
    spC0 = D_800A8B54;
    spD0 = D_800A8B58;
    spD4 = D_800A8B5C;
    spE4 = 4.0f;
    spE8 = 6.0f;
    spF4 = 50.0f;
    spF8 = D_800A8B60;
    spFC = D_800A8B64;
    sp31 = 9;
    sp30 = (*(s32 *)((char *)(temp_v0) + 0x3B));
    sp118 = D_800A8B68;
    sp88 = 0x14;
    sp66 = 0xC8;
    sp60 = -1;
    sp62 = -1;
    sp28 = 0xF;
    sp7C = 0xF;
    sp78 = 0x3C;
    sp79 = 0xFF;
    sp7A = 0xEB;
    sp7B = 0x52;
    sp124 = 134.0f;
    sp100 = 0x50;
    sp8A = 0xD;
    spB4 = 0xC;
    spB6 = 0x15;
    spBC = 0x64;
    spBD = 0x50;
    spD8 = 4;
    spDC = 3;
    spE0 = 0x32;
    spE2 = 0x15;
    sp34 = 7.0f;
    sp40 = 7.0f;
    sp61 = 0;
    sp63 = 0;
    sp64 = 0;
    sp65 = 0;
    sp74 = 0;
    spC4 = 7.0f;
    spC8 = -218.0f;
    spCC = 150.0f;
    spEC = D_800A8AFC;
    spF0 = D_800A8AFC;
    sp102 = 0xAF;
    sp104 = 0x16;
    sp106 = 0xB;
    sp108 = 7.0f;
    sp10C = -218.0f;
    sp110 = 150.0f;
    sp114 = D_800A8B00;
    sp11C = 0x3C;
    sp11E = 0x14;
    sp120 = 0x9B;
    sp122 = 0x64;
    sp12C = D_800A8B00;
    sp140 = 0x17;
    sp142 = 0xB;
    sp128 = 120.0f;
    sp130 = D_800A8B6C;
    sp134 = 43.0f;
    sp138 = -0.25f;
    sp13C = D_800A8B70;
    temp_v0_2 = func_151994B8(0x43160000, D_800A8AFC, 8U, &sp28);
    if (temp_v0_2 != NULL) {
        memcpy((*(s32 *)((char *)(temp_v0_2) + 0x98)) + 0x158, (char *)(arg0) + 0x30, 8);
    }
}

void func_1519CD64(void *arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg0) + 0x28));
    if (((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v0) + 0x4)) == 0xFF) || ((*(s32 *)((char *)(arg0) + 0x2C)) != (*(s32 *)((char *)(temp_v0) + 0x3B)))) {
        (*(s32 *)((char *)(arg0) + 0xE)) = -1;
        (*(u8 *)((char *)(arg0) + 0xD)) = (u8) ((*(u8 *)((char *)(arg0) + 0xD)) | 1);
    }
}

void func_1519CDB0(void *arg0, f32 arg1, void * arg2) {
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f22;
    f32 temp_f28;
    f32 temp_f2;
    f32 var_f24;
    f32 var_f26;
    s32 temp_s4;
    s8 var_s1;
    void **temp_s3;
    void *temp_s0;
    void *temp_v0;
    void *var_v1;

    temp_s3 = (*(s32 *)((char *)(arg0) + 0x98));
    temp_s4 = (*(s32 *)((char *)(arg0) + 0x94));
    var_v1 = (char *)(arg0) + 0x10;
    if ((*(s32 *)((char *)(arg0) + 0x2C)) >= 2) {
        var_f24 = 0.0f;
        temp_f28 = (*(s32 *)((char *)(temp_s3) + 0x14C)) * arg1;
        var_s1 = (*(s32 *)((char *)(arg0) + 0x2E));
        var_f26 = 0.0f;
        do {
            var_s1 -= 1;
            if (var_s1 < 0) {
                var_s1 = (*(s32 *)((char *)(arg0) + 0x25)) - 1;
            }
            temp_s0 = (var_s1 * 0x28) + temp_s4;
            temp_f22 = (*(s32 *)((char *)(temp_s0) + 0x1C));
            var_f24 += temp_f22;
            if (var_f26 <= var_f24) {
                temp_v0 = (*(s32 *)((char *)(temp_s3) + 0x0));
                temp_f2 = (*(s32 *)((char *)(temp_s0) + 0x0));
                temp_f0 = (var_f24 - var_f26) / temp_f22;
                temp_f16 = (*(s32 *)((char *)(temp_s0) + 0x4));
                temp_f18 = (*(s32 *)((char *)(temp_s0) + 0x8));
                func_1505D1C4(temp_f2 + (((*(s32 *)((char *)(var_v1) + 0x0)) - temp_f2) * temp_f0), temp_f16 + (((*(s32 *)((char *)(var_v1) + 0x4)) - temp_f16) * temp_f0), temp_f18 + (((*(s32 *)((char *)(var_v1) + 0x8)) - temp_f18) * temp_f0), arg2, (s32) ((char *)(temp_v0) - (char *)(&gObjects)) / 812, (s32) (*(s32 *)((char *)(temp_v0) + 0x76)), 0, 0);
                var_f26 += temp_f28;
            }
            var_v1 = temp_s0;
        } while (var_s1 != (*(s32 *)((char *)(arg0) + 0x2D)));
    }
}
