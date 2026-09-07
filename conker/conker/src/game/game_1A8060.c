/**
 * Auto-decompiled from asm/1A8060.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 allocate_memory();                  /* extern */
void * func_10004074();                           /* extern */
s32 func_1502B5C8();        /* extern */
u8 func_150849A0();                      /* extern */
extern u8 D_800A7230;
extern s32 D_800C4020;
extern s32 D_800C4310;

void func_1517ABB0(void) {
    s32 *var_s4;
    s32 temp_a0;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s5;
    s32 var_s6;
    u16 var_v0;
    u8 temp_v1;
    void *temp_s3;
    void *temp_v0;

    var_s4 = D_800DD460;
    var_s6 = 0;
    do {
        temp_s3 = &D_800A7230 + (var_s6 * 8);
        if (*var_s4 != 0) {
            var_s5 = 0;
            var_v0 = *(&D_800C4310 + ((*(s32 *)((char *)(temp_s3) + 0x0)) * 2));
            if ((s32) var_v0 > 0) {
                do {
                    var_s1 = 0;
                    if ((s32) (*(s32 *)((char *)(temp_s3) + 0x1)) > 0) {
                        temp_s2 = var_s5 * 4;
                        var_s0 = 0;
                        do {
                            temp_v0 = (*(s32 *)((char *)(*var_s4) + temp_s2)) + var_s0;
                            temp_a0 = (*(s32 *)((char *)(temp_v0) + 0x0));
                            if (temp_a0 != 0) {
                                temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x4));
                                if (temp_v1 != 0) {
                                    (*(u8 *)((char *)(temp_v0) + 0x4)) = (u8) (temp_v1 - 1);
                                } else {
                                    func_10004074(temp_a0, (*(s32 *)((char *)(temp_s3) + 0x1)));
                                    (*(s32 *)((char *)((*(s32 *)((char *)(*var_s4) + temp_s2))) + var_s0)) = 0;
                                }
                            }
                            var_s1 += 1;
                            var_s0 += 8;
                        } while (var_s1 < (s32) (*(s32 *)((char *)(temp_s3) + 0x1)));
                        var_v0 = *(&D_800C4310 + ((*(s32 *)((char *)(temp_s3) + 0x0)) * 2));
                    }
                    var_s5 += 1;
                } while (var_s5 < (s32) var_v0);
            }
        }
        var_s6 += 1;
        var_s4 += 4;
    } while (var_s6 != 2);
}

s32 func_1517AD00(s32 arg0, s32 arg1, s32 arg2) {
    void * sp88;
    s32 sp70;
    s32 sp64;
    s32 sp5C;
    void *sp50;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    s16 *temp_a3;
    s16 *var_a0_2;
    s16 *var_v1_3;
    s16 temp_f4;
    s32 *temp_s5;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_t1;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s5;
    s32 var_v1_2;
    u16 var_v0;
    u8 *var_s6;
    u8 *var_v1;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t0_3;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 var_a0;
    u8 var_s3;
    void *temp_a1;
    void *temp_s1;
    void *temp_s2;
    void *temp_s4;
    void *temp_t8;
    void *var_v0_2;

    var_s5 = arg1;
    temp_s2 = (arg2 * 0x32C) + &gObjects;
    var_s3 = (*(s32 *)((char *)(temp_s2) + 0x4));
    temp_v0 = func_150849A0(temp_s2, arg0);
    var_a0 = (*(s32 *)((char *)(temp_s2) + 0x1C8));
    var_s6 = NULL;
    var_v1 = &D_800A7230;
    var_s0 = 0;
loop_1:
    if (temp_v0 == *var_v1) {
        var_s6 = var_v1;
        sp70 = var_s0;
    } else {
        var_s0 += 1;
        var_v1 += 8;
        if (var_s0 < 2) {
            goto loop_1;
        }
    }
    if (var_s6 == NULL) {
        return -1;
    }
    temp_s1 = (*(s32 *)((char *)(temp_s2) + 0x260));
    if ((var_a0 != 0) && ((var_a0 = 0, var_s3 = temp_v0, ((*(s32 *)((char *)((&gObjects + (arg2 * 0x32C) + (D_800BE9C0 * 4))) + 0x28C)) == 0)) || (*(&D_800D19A0 + (temp_v0 * 4)) == 0))) {
        temp_t0 = (*(s32 *)((char *)(temp_s1) + 0x9));
        if (arg0 == temp_t0) {
            if (D_800BEAC0 == 0) {
                (*(f32 *)((char *)(temp_s1) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x0)) + ((*(f32 *)((char *)(temp_s1) + 0x4)) * (f32) D_800BE9E4));
            }
            if ((*(s32 *)((char *)(temp_s1) + 0x0)) > 1.0f) {
                (*(s32 *)((char *)(temp_s1) + 0x0)) = 1.0f;
            }
        } else {
            if (temp_t0 != 0xFF) {
                (*(s32 *)((char *)(temp_s1) + 0x8)) = temp_t0;
            }
            (*(u8 *)((char *)(temp_s1) + 0x9)) = (u8) arg0;
            (*(s32 *)((char *)(temp_s1) + 0x0)) = 0.0f;
            if (var_s5 <= 0) {
                var_s5 = 1;
            }
            (*(f32 *)((char *)(temp_s1) + 0x4)) = (f32) (1.0f / (f32) var_s5);
        }
        (*(s32 *)((char *)(temp_s1) + 0xA)) = 3U;
        return -1;
    }
    temp_t1 = var_s3 * 4;
    sp5C = temp_t1;
    if (*(&D_800D19A0 + temp_t1) == 0) {
        return -1;
    }
    temp_t8 = &gObjects + (arg2 * 0x32C) + (var_a0 * 8);
    sp50 = temp_t8;
    if ((*(s32 *)((char *)(((char *)(temp_t8) + (D_800BE9C0 * 4))) + 0x28C)) == 0) {
        return -1;
    }
    temp_t0_2 = (*(s32 *)((char *)(temp_s1) + 0x9));
    if ((arg0 == temp_t0_2) && ((*(s32 *)((char *)(temp_s1) + 0xA)) == 0)) {
        (*(s32 *)((char *)(temp_s1) + 0x8)) = temp_t0_2;
        return 0;
    }
    if (arg0 != temp_t0_2) {
        if (temp_t0_2 != 0xFF) {
            (*(s32 *)((char *)(temp_s1) + 0x8)) = temp_t0_2;
        }
        (*(u8 *)((char *)(temp_s1) + 0x9)) = (u8) arg0;
        (*(s32 *)((char *)(temp_s1) + 0x0)) = 0.0f;
        if (var_s5 <= 0) {
            var_s5 = 1;
        }
        (*(s32 *)((char *)(temp_s1) + 0xA)) = 3U;
        (*(f32 *)((char *)(temp_s1) + 0x4)) = (f32) (1.0f / (f32) var_s5);
    }
    temp_s5 = &(D_800DD460)[sp70];
    if (*temp_s5 == 0) {
        temp_v0_2 = allocate_memory(*(&D_800C4310 + ((*(s32 *)((char *)(var_s6) + 0x0)) * 2)) * 4, 1, 0, 2);
        *temp_s5 = temp_v0_2;
        if (temp_v0_2 == 0) {
            return -1;
        }
        var_s3_2 = 0;
        var_v0 = *(&D_800C4310 + ((*(s32 *)((char *)(var_s6) + 0x0)) * 2));
        var_s0_2 = 0;
        var_s2 = 0;
        if ((s32) var_v0 > 0) {
            do {
                (*(s32 *)((char *)(*temp_s5) + var_s2)) = allocate_memory((*(s32 *)((char *)(var_s6) + 0x1)) * 8, 1, 0, 2);
                temp_a2 = (*(s32 *)((char *)(*temp_s5) + var_s2));
                if (temp_a2 != 0) {
                    bzero(temp_a2, (*(s32 *)((char *)(var_s6) + 0x1)) * 8);
                } else {
                    var_s3_2 = 1;
                }
                var_s0_2 += 1;
                var_v0 = *(&D_800C4310 + ((*(s32 *)((char *)(var_s6) + 0x0)) * 2));
                var_s2 += 4;
            } while (var_s0_2 < (s32) var_v0);
        }
        if (var_s3_2 != 0) {
            var_s0_3 = 0;
            if ((s32) var_v0 > 0) {
                var_s2_2 = 0;
                do {
                    temp_a2_2 = (*(s32 *)((char *)(*temp_s5) + var_s2_2));
                    if (temp_a2_2 != 0) {
                        func_10004074(temp_a2_2);
                        var_v0 = *(&D_800C4310 + ((*(s32 *)((char *)(var_s6) + 0x0)) * 2));
                    }
                    var_s0_3 += 1;
                    var_s2_2 += 4;
                } while (var_s0_3 < (s32) var_v0);
            }
            return -1;
        }
        goto block_48;
    }
block_48:
    if (D_800BEAC0 == 0) {
        (*(f32 *)((char *)(temp_s1) + 0x0)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x0)) + ((*(f32 *)((char *)(temp_s1) + 0x4)) * (f32) D_800BE9E4));
    }
    if ((*(s32 *)((char *)(temp_s1) + 0x0)) > 1.0f) {
        (*(s32 *)((char *)(temp_s1) + 0x0)) = 1.0f;
    }
    var_s3_3 = 0;
    sp64 = (*(s32 *)((char *)(((char *)(sp50) + (D_800BE9C0 * 4))) + 0x28C));
    var_s2_3 = 0;
    if ((s32) *(&D_800C4310 + ((*(s32 *)((char *)(var_s6) + 0x0)) * 2)) > 0) {
loop_53:
        temp_t0_3 = (*(s32 *)((char *)(temp_s1) + 0x9));
        var_v1_2 = (*(s32 *)((char *)(*temp_s5) + var_s2_3));
        if ((*(s32 *)((char *)(var_v1_2) + (temp_t0_3 * 8))) == 0) {
            (*(s32 *)((char *)((*(s32 *)((char *)(*temp_s5) + var_s2_3))) + ((*(s32 *)((char *)(temp_s1) + 0x9)) * 8))) = func_1502B5C8(&sp88, 4, 0x13, sp70, var_s3_3, (s32) temp_t0_3);
            var_v1_2 = (*(s32 *)((char *)(*temp_s5) + var_s2_3));
            if ((*(s32 *)((char *)(var_v1_2) + ((*(s32 *)((char *)(temp_s1) + 0x9)) * 8))) == 0) {
                return -1;
            }
        }
        temp_v0_3 = (*(s32 *)((char *)(temp_s1) + 0x8));
        if ((*(s32 *)((char *)(var_v1_2) + (temp_v0_3 * 8))) == 0) {
            (*(s32 *)((char *)((*(s32 *)((char *)(*temp_s5) + var_s2_3))) + ((*(s32 *)((char *)(temp_s1) + 0x8)) * 8))) = func_1502B5C8(&sp88, 4, 0x13, sp70, var_s3_3, (s32) temp_v0_3);
            var_v1_2 = (*(s32 *)((char *)(*temp_s5) + var_s2_3));
            if ((*(s32 *)((char *)(var_v1_2) + ((*(s32 *)((char *)(temp_s1) + 0x8)) * 8))) == 0) {
                func_10004074((*(s32 *)((char *)(var_v1_2) + ((*(s32 *)((char *)(temp_s1) + 0x9)) * 8))));
                (*(s32 *)((char *)((*(s32 *)((char *)(*temp_s5) + var_s2_3))) + ((*(s32 *)((char *)(temp_s1) + 0x9)) * 8))) = 0;
                return -1;
            }
        }
        (*(s32 *)((char *)((var_v1_2 + ((*(s32 *)((char *)(temp_s1) + 0x9)) * 8))) + 0x4)) = 3;
        var_s0_4 = 0;
        (*(s32 *)((char *)(((*(s32 *)((char *)(*temp_s5) + var_s2_3)) + ((*(s32 *)((char *)(temp_s1) + 0x8)) * 8))) + 0x4)) = 3;
        temp_v1 = (*(s32 *)((char *)(*temp_s5) + var_s2_3));
        temp_a1 = var_s6 + (var_s3_3 * 2);
        temp_a3 = (*(s32 *)((char *)(temp_v1) + ((*(s32 *)((char *)(temp_s1) + 0x8)) * 8)));
        temp_s4 = ((*(s32 *)(*(&D_800C4020 + sp5C) + var_s2_3)) * 0x10) + sp64;
        if ((s32) (*(s32 *)((char *)(temp_a1) + 0x2)) > 0) {
            var_v0_2 = temp_s4;
            var_v1_3 = (*(s32 *)((char *)(temp_v1) + ((*(s32 *)((char *)(temp_s1) + 0x9)) * 8)));
            var_a0_2 = temp_a3;
            do {
                temp_f4 = *var_v1_3;
                var_s0_4 += 1;
                temp_f0 = (f32) *var_a0_2;
                var_v0_2 = (char *)(var_v0_2) + 0x10;
                var_v1_3 += 6;
                var_a0_2 += 6;
                (*(s16 *)((char *)(var_v0_2) - 0x10)) = (s16) (s32) ((((f32) temp_f4 - temp_f0) * (*(s16 *)((char *)(temp_s1) + 0x0))) + temp_f0);
                temp_f2 = (f32) (*(f32 *)((char *)(var_a0_2) - 0x4));
                (*(s16 *)((char *)(var_v0_2) - 0xE)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(var_v1_3) - 0x4)) - temp_f2) * (*(s16 *)((char *)(temp_s1) + 0x0))) + temp_f2);
                temp_f12 = (f32) (*(f32 *)((char *)(var_a0_2) - 0x2));
                (*(s16 *)((char *)(var_v0_2) - 0xC)) = (s16) (s32) ((((f32) (*(s16 *)((char *)(var_v1_3) - 0x2)) - temp_f12) * (*(s16 *)((char *)(temp_s1) + 0x0))) + temp_f12);
            } while (var_s0_4 < (s32) (*(s32 *)((char *)(temp_a1) + 0x2)));
        }
        osWritebackDCache(temp_s4, (*(s32 *)((char *)(temp_a1) + 0x2)) * 0x10);
        var_s3_3 += 1;
        var_s2_3 += 4;
        if (var_s3_3 >= (s32) *(&D_800C4310 + ((*(s32 *)((char *)(var_s6) + 0x0)) * 2))) {
            goto block_63;
        }
        goto loop_53;
    }
block_63:
    if ((*(s32 *)((char *)(temp_s1) + 0x0)) == 1.0f) {
        (*(u8 *)((char *)(temp_s1) + 0xA)) = (u8) ((*(u8 *)((char *)(temp_s1) + 0xA)) - 1);
        return 0;
    }
    (*(s32 *)((char *)(temp_s1) + 0xA)) = 3U;
    return 0;
}
