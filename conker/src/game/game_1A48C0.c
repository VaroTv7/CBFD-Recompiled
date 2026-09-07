/**
 * Auto-decompiled from asm/1A48C0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u8 *allocate_memory();                  /* extern */
void * func_150A6FA0();     /* extern */
void * func_150A70C0();          /* extern */
void * func_150A71C8();    /* extern */
void * func_150A7360(); /* extern */
void * func_150A751C(); /* extern */
void * func_150A7960(); /* extern */
void * func_1511490C();                       /* extern */
void *func_151149AC();                            /* extern */
extern f32 D_800A71C0;
extern f32 D_800A71C4;
extern f32 D_800A71C8;
extern f32 D_800A71CC;
extern f32 D_800A71D0;

void func_15177410(u8 arg0, u8 arg1, s16 arg2, s16 arg3, s16 arg4, f32 arg5, u16 arg6, f32 arg7, s8 arg8, s8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15) {
    f32 sp88;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    s32 sp6C;
    s32 sp68;
    f32 sp60;
    f32 sp5C;
    u8 sp57;
    s32 sp50;
    s32 sp48;
    s32 sp44;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f6;
    f32 var_f12;
    f32 var_f20;
    f32 var_f22;
    f32 var_f24;
    f32 var_f6;
    s32 temp_a1;
    s32 temp_f10;
    s32 temp_s3;
    s32 temp_t9;
    s32 temp_v0_5;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s8 var_a3;
    u8 **var_a0;
    u8 *temp_v0;
    u8 var_v1;
    void *temp_s2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = allocate_memory(0x2CU, 1, 0, 0);
    if (temp_v0 != NULL) {
        (D_800DD410)[D_800DD418] = temp_v0;
        D_800DD418 += 1;
        temp_v0_2 = func_151149AC(arg1);
        temp_s2 = temp_v0_2;
        (*(s32 *)((char *)(temp_v0) + 0x1)) = arg0;
        (*(s32 *)((char *)(temp_v0) + 0x0)) = arg1;
        var_a3 = 0;
        temp_a1 = D_800DD418 - 1;
        var_s0 = 0;
        if (temp_a1 > 0) {
            var_a0 = D_800DD410;
loop_3:
            var_s0 += 1;
            if (arg1 == **var_a0) {
                var_a3 = 1;
            } else {
                var_a0 += 4;
                if (var_s0 < temp_a1) {
                    goto loop_3;
                }
            }
            var_s0 = 0;
        }
        (*(s32 *)((char *)(temp_v0) + 0x2)) = var_a3;
        temp_s3 = arg0 & 3;
        temp_f6 = (f32) (arg2 - (*(f32 *)((char *)(temp_v0_2) + 0x10)));
        sp74 = temp_f6;
        sp78 = (f32) (arg3 - (*(f32 *)((char *)(temp_v0_2) + 0x12)));
        sp7C = (f32) (arg4 - (*(f32 *)((char *)(temp_v0_2) + 0x14)));
        (*(s16 *)((char *)(temp_v0) + 0xE)) = (s16) (s32) temp_f6;
        (*(s16 *)((char *)(temp_v0) + 0x10)) = (s16) (s32) sp78;
        (*(s32 *)((char *)(temp_v0) + 0xC)) = arg6;
        (*(s16 *)((char *)(temp_v0) + 0x12)) = (s16) (s32) sp7C;
        (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x8)) = arg7;
        (*(s32 *)((char *)(temp_v0) + 0x16)) = arg8;
        (*(s32 *)((char *)(temp_v0) + 0x17)) = arg9;
        if (arg6 != 0) {
            var_f24 = D_800A71C0;
            temp_f0 = (f32) arg6 * var_f24;
            (*(f32 *)((char *)(temp_v0) + 0x4)) = (f32) (1.0f / (temp_f0 * temp_f0));
        } else {
            (*(s32 *)((char *)(temp_v0) + 0x4)) = 0.0f;
            var_f24 = D_800A71C4;
        }
        if (temp_s3 == 1) {
            (*(s32 *)((char *)(temp_v0) + 0x18)) = arg10;
            (*(s32 *)((char *)(temp_v0) + 0x19)) = arg11;
            (*(s32 *)((char *)(temp_v0) + 0x1A)) = arg12;
            (*(s32 *)((char *)(temp_v0) + 0x1B)) = arg13;
            (*(s32 *)((char *)(temp_v0) + 0x1C)) = arg14;
            (*(s32 *)((char *)(temp_v0) + 0x1D)) = arg15;
        }
        sp50 = (s32) arg0;
        var_v1 = arg0;
        (*(s32 *)((char *)(temp_v0) + 0x24)) = allocate_memory((*(s32 *)((char *)(temp_s2) + 0x16)), 1, 0, 0);
        if (temp_s3 == 2) {
            sp50 = (s32) var_v1;
            (*(s32 *)((char *)(temp_v0) + 0x28)) = allocate_memory((*(s32 *)((char *)(temp_s2) + 0x16)), 1, 0, 0);
        }
        temp_t9 = var_v1 & 4;
        sp48 = temp_t9;
        if (temp_t9 == 4) {
            sp50 = (s32) var_v1;
            (*(s32 *)((char *)(temp_v0) + 0x20)) = allocate_memory((*(s32 *)((char *)(temp_s2) + 0x16)) * 4, 1, 0, 0);
        }
        var_a1 = var_v1 & 0x10;
        if (var_a1 == 0x10) {
            sp44 = var_a1;
            temp_f20 = -arg5 * D_800A71C8;
            sp5C = sinf(temp_f20);
            sp60 = cosf(temp_f20);
            sp57 = (u8) (u32) (arg5 * D_800A71CC);
        }
        var_f22 = sp88;
        var_f20 = sp80;
        var_a2 = sp68;
        if ((s32) (*(s32 *)((char *)(temp_s2) + 0x16)) > 0) {
            var_a0_2 = sp6C;
            do {
                if (var_a1 == 0) {
                    temp_v0_3 = (*(s32 *)((char *)(temp_s2) + 0x28)) + (var_s0 * 0x10);
                    temp_f22 = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x0)) - sp74;
                    var_f22 = temp_f22 * temp_f22;
                    temp_f0_2 = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x2)) - sp78;
                    temp_f20_2 = (f32) (*(f32 *)((char *)(temp_v0_3) + 0x4)) - sp7C;
                    var_f20 = temp_f20_2 * temp_f20_2;
                    temp_f2 = var_f22 + (temp_f0_2 * temp_f0_2) + var_f20;
                    var_f12 = temp_f2;
                    if (temp_f2 != 0.0f) {
                        var_f12 = sqrtf(temp_f2);
                    }
                    var_a2 = (s32) (var_f12 * var_f24);
                    var_a0_2 = var_a2;
                } else if (var_a1 == 0x10) {
                    temp_v0_4 = (*(s32 *)((char *)(temp_s2) + 0x28)) + (var_s0 * 0x10);
                    var_f22 = (f32) (*(f32 *)((char *)(temp_v0_4) + 0x0)) - sp74;
                    var_f20 = (-var_f22 * sp5C) + (((f32) (*(f32 *)((char *)(temp_v0_4) + 0x4)) - sp7C) * sp60);
                    temp_f10 = (s32) (var_f20 * var_f24);
                    var_a0_2 = temp_f10;
                    var_a2 = temp_f10;
                    if (temp_f10 < 0) {
                        var_a0_2 = -temp_f10;
                    }
                }
                ((s32 *)((char *)(temp_v0) + 0x24))[var_s0] = arg9 * var_a2;
                if (sp48 == 4) {
                    var_f6 = (f32) arg6;
                    if ((s32) arg6 < 0) {
                        var_f6 += 4294967296.0f;
                    }
                    temp_v0_5 = var_s0 * 4;
                    var_a0_2 = (s32) ((f32) var_a0_2 - (var_f6 * var_f24));
                    if (var_a0_2 >= 0) {
                        (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x20))) + temp_v0_5)) = 0.0f;
                    } else {
                        (*(f32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x20))) + temp_v0_5)) = (*(f32 *)((char *)(temp_v0) + 0x4)) * arg7 * (f32) (var_a0_2 * var_a0_2);
                    }
                }
                if (temp_s3 == 2) {
                    if (var_a1 == 0x10) {
                        ((s32 *)((char *)(temp_v0) + 0x28))[var_s0] = sp57;
                    } else {
                        sp6C = var_a0_2;
                        sp44 = var_a1;
                        sp68 = var_a2;
                        temp_f0_3 = func_150484A0(var_f22, var_f20);
                        ((u8 *)((char *)(temp_v0) + 0x28))[var_s0] = (u8) (u32) (temp_f0_3 * D_800A71D0);
                    }
                }
                var_s0 += 1;
            } while (var_s0 < (s32) (*(s32 *)((char *)(temp_s2) + 0x16)));
            sp88 = var_f22;
            sp80 = var_f20;
            sp68 = var_a2;
            sp6C = var_a0_2;
        }
    }
}

void func_15177A94(void) {
    void * sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    u8 **sp68;
    s32 temp_t2;
    s32 temp_t9;
    s32 temp_v0_3;
    s32 var_fp;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v1;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 temp_a0;
    u8 temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;

    temp_v0 = D_800DD418;
    var_fp = 0;
    if ((s32) temp_v0 > 0) {
        sp68 = D_800DD410;
        do {
            temp_s0 = *sp68;
            temp_v0_2 = func_151149AC((*(s32 *)((char *)(temp_s0) + 0x0)));
            if ((*(s32 *)((char *)(temp_v0_2) + 0x6F)) & 0xF) {
                if ((*(s32 *)((char *)(temp_s0) + 0x2)) == 0) {
                    var_v1 = (*(s32 *)((char *)(temp_v0_2) + 0x28));
                } else {
                    var_v1 = (*(s32 *)((char *)(((char *)(temp_v0_2) + (D_800BE9C0 * 4))) + 0x20));
                }
                temp_a0 = (*(s32 *)((char *)(temp_s0) + 0x1));
                temp_v0_3 = temp_a0 & 3;
                if (temp_v0_3 == 1) {
                    temp_t2 = D_800BE9C0 * 4;
                    if ((temp_a0 & 4) == 4) {
                        func_150A7360((*(s32 *)((char *)(((char *)(temp_v0_2) + temp_t2)) + 0x20)), (*(s32 *)((char *)(temp_v0_2) + 0x16)), temp_s0 + 4, temp_s0 + 0x18, (*(s32 *)((char *)(temp_s0) + 0x24)), (*(s32 *)((char *)(temp_s0) + 0x20)), var_v1);
                    } else {
                        func_150A71C8((*(s32 *)((char *)(((char *)(temp_v0_2) + temp_t2)) + 0x20)), (*(s32 *)((char *)(temp_v0_2) + 0x16)), temp_s0 + 4, temp_s0 + 0x18, (*(s32 *)((char *)(temp_s0) + 0x24)), var_v1);
                    }
                } else if (temp_v0_3 == 0) {
                    temp_t9 = D_800BE9C0 * 4;
                    if ((temp_a0 & 4) == 4) {
                        func_150A6FA0((*(s32 *)((char *)(((char *)(temp_v0_2) + temp_t9)) + 0x20)), (*(s32 *)((char *)(temp_v0_2) + 0x16)), temp_s0 + 4, (*(s32 *)((char *)(temp_s0) + 0x24)), (*(s32 *)((char *)(temp_s0) + 0x20)), var_v1);
                    } else {
                        func_150A70C0((*(s32 *)((char *)(((char *)(temp_v0_2) + temp_t9)) + 0x20)), (*(s32 *)((char *)(temp_v0_2) + 0x16)), temp_s0 + 4, (*(s32 *)((char *)(temp_s0) + 0x24)), var_v1);
                    }
                } else if ((temp_v0_3 == 2) && ((temp_a0 & 4) == 4)) {
                    func_150A751C((*(s32 *)((char *)(((char *)(temp_v0_2) + (D_800BE9C0 * 4))) + 0x20)), (*(s32 *)((char *)(temp_v0_2) + 0x16)), temp_s0 + 4, (*(s32 *)((char *)(temp_s0) + 0x28)), (*(s32 *)((char *)(temp_s0) + 0x24)), (*(s32 *)((char *)(temp_s0) + 0x20)), var_v1);
                }
            }
            var_fp += 1;
            sp68 += 4;
        } while (var_fp < (s32) D_800DD418);
        var_fp = 0;
    }
    if ((s32) temp_v0 > 0) {
        sp68 = D_800DD410;
        do {
            temp_s0_2 = *sp68;
            if ((s32)(func_151149AC(*(s32 *)((char *)(((*(s32 *)((char *)(temp_s0_2) + 0x0)))) + 0x6F))) & 0xF) {
                var_s1 = 0;
                if ((*(s32 *)((char *)(temp_s0_2) + 0x2)) == 0) {
                    temp_v0_4 = func_151149AC((*(s32 *)((char *)(temp_s0_2) + 0x0)));
                    if (((*(s32 *)((char *)(temp_v0_4) + 0x0)) == 0.0f) && ((*(s32 *)((char *)(temp_v0_4) + 0x4)) == 0.0f) && ((*(s32 *)((char *)(temp_v0_4) + 0x8)) == 0.0f) && ((*(s32 *)((char *)(temp_v0_4) + 0x2C)) == 1.0f) && ((*(s32 *)((char *)(temp_v0_4) + 0x30)) == 1.0f) && ((*(s32 *)((char *)(temp_v0_4) + 0x34)) == 1.0f)) {
                        var_s0 = 0;
                        if ((s32) (*(s32 *)((char *)(temp_v0_4) + 0x16)) > 0) {
                            do {
                                var_s1 += 1;
                                (*(s32 *)((char *)((*(s32 *)((char *)(((char *)(temp_v0_4) + (D_800BE9C0 * 4))) + 0x20))) + var_s0)) = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_4) + 0x28))) + var_s0)) + (*(s32 *)((char *)(temp_v0_4) + 0x10));
                                temp_v1 = (*(s32 *)((char *)(((char *)(temp_v0_4) + (D_800BE9C0 * 4))) + 0x20)) + var_s0;
                                (*(s16 *)((char *)(temp_v1) + 0x2)) = (s16) ((*(s16 *)((char *)(temp_v1) + 0x2)) + (*(s16 *)((char *)(temp_v0_4) + 0x12)));
                                (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(temp_v0_4) + (D_800BE9C0 * 4))) + 0x20)) + var_s0)) + 0x4)) = (s16) ((*(s16 *)((char *)(((*(s16 *)((char *)(temp_v0_4) + 0x28)) + var_s0)) + 0x4)) + (*(s16 *)((char *)(temp_v0_4) + 0x14)));
                                var_s0 += 0x10;
                            } while (var_s1 < (s32) (*(s32 *)((char *)(temp_v0_4) + 0x16)));
                        }
                    } else {
                        func_1511490C(&sp80, temp_v0_4);
                        var_s0_2 = 0;
                        if ((s32) (*(s32 *)((char *)(temp_v0_4) + 0x16)) > 0) {
                            do {
                                temp_v0_5 = (*(s32 *)((char *)(temp_v0_4) + 0x28)) + var_s0_2;
                                func_150A7960(&sp80, (f32) (*(f32 *)((char *)(temp_v0_5) + 0x0)), (f32) (*(f32 *)((char *)(((*(s16 *)((char *)(((char *)(temp_v0_4) + (D_800BE9C0 * 4))) + 0x20)) + var_s0_2)) + 0x2)), (f32) (*(f32 *)((char *)(temp_v0_5) + 0x4)), &sp7C, &sp78, &sp74);
                                var_s1 += 1;
                                (*(s16 *)((char *)((*(s16 *)((char *)(((char *)(temp_v0_4) + (D_800BE9C0 * 4))) + 0x20))) + var_s0_2)) = (s16) (s32) sp7C;
                                (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(temp_v0_4) + (D_800BE9C0 * 4))) + 0x20)) + var_s0_2)) + 0x2)) = (s16) (s32) sp78;
                                (*(s16 *)((char *)(((*(s16 *)((char *)(((char *)(temp_v0_4) + (D_800BE9C0 * 4))) + 0x20)) + var_s0_2)) + 0x4)) = (s16) (s32) sp74;
                                var_s0_2 += 0x10;
                            } while (var_s1 < (s32) (*(s32 *)((char *)(temp_v0_4) + 0x16)));
                        }
                    }
                }
            }
            var_fp += 1;
            sp68 += 4;
        } while (var_fp < (s32) D_800DD418);
    }
}
