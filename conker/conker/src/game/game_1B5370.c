/**
 * Auto-decompiled from asm/1B5370.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_151EF610();                 /* extern */
extern s32 D_800A7390;
extern f32 D_800A7398;
extern s32 D_800DF700;
extern s32 D_800DF70C;
extern s32 D_800DF7B4;

s32 func_15187EC0(s32 arg0, f32 arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7) {
    s32 temp_t1;
    void *temp_v0;

    if (D_800DF7B4 < 5) {
        temp_v0 = (D_800DF7B4 * 0x24) + &D_800DF700;
        (*(f32 *)((char *)(temp_v0) + 0x14)) = arg1;
        (*(u8 *)((char *)(temp_v0) + 0x6)) = arg2;
        (*(u8 *)((char *)(temp_v0) + 0x0)) = arg2;
        (*(u8 *)((char *)(temp_v0) + 0x7)) = arg3;
        (*(u8 *)((char *)(temp_v0) + 0x1)) = arg3;
        (*(u8 *)((char *)(temp_v0) + 0x8)) = arg4;
        (*(u8 *)((char *)(temp_v0) + 0x2)) = arg4;
        (*(s32 *)((char *)(temp_v0) + 0x10)) = arg0;
        (*(u8 *)((char *)(temp_v0) + 0x3)) = arg5;
        (*(u8 *)((char *)(temp_v0) + 0x4)) = arg6;
        bzero((char *)(temp_v0) + 0x18, 0xC);
        (*(u8 *)((char *)(temp_v0) + 0x5)) = arg7;
        temp_t1 = D_800DF7B4 + 1;
        D_800DF7B4 = temp_t1;
        return temp_t1 - 1;
    }
    return -1;
}

void func_15187F90(void) {
    bzero(&D_800DF700, 0xB4);
    D_800DF7B4 = 0;
}

void func_15187FC0(s32 arg0, void *arg1) {
    void *temp_v0;

    if ((arg0 < D_800DF7B4) && (arg0 >= 0)) {
        temp_v0 = (arg0 * 0x24) + &D_800DF700;
        (*(s32 *)((char *)(arg1) + 0x0)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x6));
        (*(s32 *)((char *)(arg1) + 0x4)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x7));
        (*(s32 *)((char *)(arg1) + 0x8)) = (s32) (*(s32 *)((char *)(temp_v0) + 0x8));
    }
}

void func_15188010(s32 arg0, f32 *arg1) {
    if ((arg0 < D_800DF7B4) && (arg0 >= 0)) {
        *arg1 = *(&D_800DF70C + (arg0 * 0x24));
    }
}

void func_1518804C(s32 arg0, f32 arg1) {
    f32 var_f0;
    f32 var_f12;

    var_f12 = arg1;
    if ((arg0 < D_800DF7B4) && (arg0 >= 0)) {
        var_f0 = 1.0f;
        if (var_f12 > 1.0f) {
            goto block_5;
        }
        var_f0 = 0.0f;
        if (var_f12 < 0.0f) {
block_5:
            var_f12 = var_f0;
        }
        *(&D_800DF70C + (arg0 * 0x24)) = var_f12;
    }
}

void func_151880C0( s32 arg0, void *arg1) {
    void * *var_s0;
    f32 temp_f26;
    f32 var_f16;
    f32 var_f4;
    f32 var_f8;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;
    u32 temp_f2;
    u32 temp_t2_2;
    u32 temp_t4;
    u32 temp_v0_3;
    u32 var_v0;
    u8 temp_v0_4;
    u8 temp_v1;
    u8 var_a0;
    void *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = D_800DF7B4;
    var_s0 = &D_800DF700;
    if (var_a2 > 0) {
        temp_f26 = D_800A7398;
        do {
            temp_v0 = (*(s32 *)((char *)(var_s0) + 0x10));
            switch (temp_v0) {                      /* switch 1; irregular */
            default:                                /* switch 1 */
                var_a1 = (var_a2 * 0x24) + &D_800DF700;
                break;
            case 0:                                 /* switch 1 */
                var_a1 = (var_a2 * 0x24) + &D_800DF700;
                break;
            case 1:                                 /* switch 1 */
                (*(f32 *)((char *)(var_s0) + 0xC)) = (f32) ((sinf((*(f32 *)((char *)(var_s0) + 0x1C))) + 1.0f) * 0.5f);
                (*(u32 *)((char *)(var_s0) + 0x1C)) = (u32) ((f32) (*(u32 *)((char *)(var_s0) + 0x1C)) + ((*(u32 *)((char *)(var_s0) + 0x14)) * D_800BE9A4));
                temp_f2 = (*(s32 *)((char *)(var_s0) + 0x1C));
                if (temp_f26 <= (f32) temp_f2) {
                    (*(u32 *)((char *)(var_s0) + 0x1C)) = (u32) ((f32) temp_f2 - temp_f26);
                }
                var_a2 = D_800DF7B4;
                var_a1 = (var_a2 * 0x24) + &D_800DF700;
                break;
            case 2:                                 /* switch 1 */
                temp_v0_2 = (*(s32 *)((char *)(var_s0) + 0x20));
                var_a1 = (var_a2 * 0x24) + &D_800DF700;
                if (temp_v0_2 == 0) {
                    (*(s32 *)((char *)(var_s0) + 0x20)) = -8;
                    (*(s32 *)((char *)(var_s0) + 0xC)) = 1.0f;
                } else if (temp_v0_2 < 0) {
                    temp_t5 = temp_v0_2 + D_800BE9E4;
                    (*(s32 *)((char *)(var_s0) + 0x20)) = temp_t5;
                    if (temp_t5 >= 0) {
                        (*(s32 *)((char *)(var_s0) + 0xC)) = 0.0f;
                        var_v0 = (*(s32 *)((char *)(var_s0) + 0x1C)) + 1;
                        (*(s32 *)((char *)(var_s0) + 0x1C)) = var_v0;
                        if (var_v0 >= 8U) {
                            (*(s32 *)((char *)(var_s0) + 0x1C)) = 0U;
                            var_v0 = 0;
                        }
                        (*(s32 *)((char *)(var_s0) + 0x20)) = (s32) *(&D_800A7390 + var_v0);
                    }
                } else {
                    temp_t0 = temp_v0_2 - D_800BE9E4;
                    (*(s32 *)((char *)(var_s0) + 0x20)) = temp_t0;
                    if (temp_t0 < 0) {
                        (*(s32 *)((char *)(var_s0) + 0x20)) = 0;
                    }
                }
                break;
            case 3:                                 /* switch 1 */
                temp_v0_3 = (*(s32 *)((char *)(var_s0) + 0x1C));
                switch (temp_v0_3) {                /* switch 2; irregular */
                default:                            /* switch 2 */
                    var_a1 = (var_a2 * 0x24) + &D_800DF700;
                    break;
                case 0:                             /* switch 2 */
                    temp_f0 = (*(s32 *)((char *)(var_s0) + 0x20));
                    (*(f32 *)((char *)(var_s0) + 0xC)) = (f32) ((*(f32 *)((char *)(var_s0) + 0xC)) + ((*(f32 *)((char *)(var_s0) + 0x14)) * (f32) D_800BE9E4));
                    if ((f32) temp_f0 <= (*(f32 *)((char *)(var_s0) + 0xC))) {
                        (*(f32 *)((char *)(var_s0) + 0xC)) = (f32) temp_f0;
                        if ((f32) temp_f0 == 1.0f) {
                            if (!(func_151EF610(var_a0, var_a1, var_a2) & 1)) {
                                (*(s32 *)((char *)(var_s0) + 0x20)) = 0;
                            } else {
                                (*(s32 *)((char *)(var_s0) + 0x20)) = 0x3F000000;
                            }
                            (*(s32 *)((char *)(var_s0) + 0x1C)) = 2U;
                            var_a2 = D_800DF7B4;
                        } else {
                            (*(s32 *)((char *)(var_s0) + 0x1C)) = 1U;
                            (*(s32 *)((char *)(var_s0) + 0x20)) = (s32) ((func_151EF610(var_a0, var_a1, var_a2) % 30) + 0x1E);
                            var_a2 = D_800DF7B4;
                        }
                    }
                    var_a1 = (var_a2 * 0x24) + &D_800DF700;
                    break;
                case 1:                             /* switch 2 */
                    temp_t2 = (*(s32 *)((char *)(var_s0) + 0x20)) - D_800BE9E4;
                    (*(s32 *)((char *)(var_s0) + 0x20)) = temp_t2;
                    if (temp_t2 <= 0) {
                        temp_t4 = (func_151EF610(var_a0, var_a1, var_a2) % 2) * 2;
                        (*(s32 *)((char *)(var_s0) + 0x1C)) = temp_t4;
                        if (temp_t4 == 0) {
                            (*(s32 *)((char *)(var_s0) + 0x20)) = 0x3F800000;
                        } else {
                            (*(s32 *)((char *)(var_s0) + 0x20)) = 0;
                        }
                        var_a2 = D_800DF7B4;
                    }
                    var_a1 = (var_a2 * 0x24) + &D_800DF700;
                    break;
                case 2:                             /* switch 2 */
                    temp_f0_2 = (*(s32 *)((char *)(var_s0) + 0x20));
                    (*(f32 *)((char *)(var_s0) + 0xC)) = (f32) ((*(f32 *)((char *)(var_s0) + 0xC)) - ((*(f32 *)((char *)(var_s0) + 0x14)) * (f32) D_800BE9E4));
                    if ((*(f32 *)((char *)(var_s0) + 0xC)) <= (f32) temp_f0_2) {
                        (*(f32 *)((char *)(var_s0) + 0xC)) = (f32) temp_f0_2;
                        if ((f32) temp_f0_2 == 0.0f) {
                            (*(s32 *)((char *)(var_s0) + 0x1C)) = 3U;
                            (*(s32 *)((char *)(var_s0) + 0x20)) = (s32) ((func_151EF610(var_a0, var_a1, var_a2) % 30) + 0x1E);
                            var_a2 = D_800DF7B4;
                        } else {
                            (*(s32 *)((char *)(var_s0) + 0x1C)) = 1U;
                            (*(s32 *)((char *)(var_s0) + 0x20)) = (s32) ((func_151EF610(var_a0, var_a1, var_a2) % 30) + 0x1E);
                            var_a2 = D_800DF7B4;
                        }
                    }
                    var_a1 = (var_a2 * 0x24) + &D_800DF700;
                    break;
                case 3:                             /* switch 2 */
                    temp_t6 = (*(s32 *)((char *)(var_s0) + 0x20)) - D_800BE9E4;
                    (*(s32 *)((char *)(var_s0) + 0x20)) = temp_t6;
                    if (temp_t6 <= 0) {
                        (*(s32 *)((char *)(var_s0) + 0x1C)) = 0U;
                        if (!(func_151EF610(var_a0, var_a1, var_a2) & 1)) {
                            (*(s32 *)((char *)(var_s0) + 0x20)) = 0x3F000000;
                        } else {
                            (*(s32 *)((char *)(var_s0) + 0x20)) = 0x3F800000;
                        }
                        var_a2 = D_800DF7B4;
                    }
                    var_a1 = (var_a2 * 0x24) + &D_800DF700;
                    break;
                }
                break;
            }
            temp_v0_4 = (*(s32 *)((char *)(var_s0) + 0x0));
            var_f4 = (f32) temp_v0_4;
            if ((s32) temp_v0_4 < 0) {
                var_f4 += 4294967296.0f;
            }
            temp_v1 = (*(s32 *)((char *)(var_s0) + 0x1));
            (*(s8 *)((char *)(var_s0) + 0x6)) = (s8) (u32) (((*(s8 *)((char *)(var_s0) + 0xC)) * (f32) ((*(s8 *)((char *)(var_s0) + 0x3)) - temp_v0_4)) + var_f4);
            var_f8 = (f32) temp_v1;
            if ((s32) temp_v1 < 0) {
                var_f8 += 4294967296.0f;
            }
            var_a0 = (*(s32 *)((char *)(var_s0) + 0x2));
            (*(s8 *)((char *)(var_s0) + 0x7)) = (s8) (u32) (((*(s8 *)((char *)(var_s0) + 0xC)) * (f32) ((*(s8 *)((char *)(var_s0) + 0x4)) - temp_v1)) + var_f8);
            var_f16 = (f32) var_a0;
            if ((s32) var_a0 < 0) {
                var_f16 += 4294967296.0f;
            }
            temp_t2_2 = (u32) (((*(u32 *)((char *)(var_s0) + 0xC)) * (f32) ((*(u32 *)((char *)(var_s0) + 0x5)) - var_a0)) + var_f16);
            var_s0 = (char *)(var_s0) + 0x24;
            (*(s8 *)((char *)(var_s0) - 0x1C)) = (s8) temp_t2_2;
        } while ((u32) var_s0 < (u32) var_a1);
    }
}
