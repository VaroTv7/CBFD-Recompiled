/**
 * Auto-decompiled from asm/50D80.s (non-matching)
 * Suggested renames applied: gGameState -> gGameState, gObjects -> gObjects
 * Object pool stride for gObjects is 812 (0x32C)
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *allocate_memory();                  /* extern */
void * func_10004074();      /* extern */
void * func_1000D96C();                         /* extern */
void * func_1000DE1C();                            /* extern */
s32 func_1000E134();                          /* extern */
void * func_1503DE70();                  /* extern */
void * func_150F5420();                 /* extern */
s32 func_151149AC();                              /* extern */
void * func_151557FC();                      /* extern */
void * func_15155F90();                       /* extern */
void * func_15178EFC();                              /* extern */
void * func_1517EE40();         /* extern */
void * func_15188810();                   /* extern */
void * func_1518894C();                      /* extern */
void * func_15188AD0();                       /* extern */
void * func_151D66F0();                            /* extern */
s32 func_1502460C(); /* static */
s32 func_150265CC(); /* static */
void func_1502A8A0(); /* static */
extern s32 D_80084110;
extern s32 D_800C35B0;
extern s32 D_800C35B8;
extern s32 D_800C35C0;
extern s32 D_800C35D8;
extern s32 D_800C35E8;
extern s32 D_800C35F0;
extern s32 D_800C363A;
extern s32 D_800C3640;
extern s32 D_800C3688;
extern u8 D_800C3C89;
extern s8 D_800C3C8A;
extern u8 D_800C3C8C;
extern u16 D_800C3C8E;
extern u16 D_800C3C9A;
extern void *D_800C3D50;
void func_15024130();
s32 func_15029BB8();

void func_150238D0(void) {

}

s32 func_150238D8(void *arg0, void * arg1, u32 *arg2, void * arg3, s16 *arg6) {
    s32 temp_t7;
    u16 temp_a0;
    u16 temp_a0_2;
    u16 temp_t5;
    u16 temp_v0_3;
    u16 temp_v1;
    u16 temp_v1_2;
    u32 *temp_a3;
    u32 *var_a2;
    u8 temp_v0;
    void *temp_a1;
    void *temp_v0_2;

    var_a2 = arg2;
    temp_a3 = var_a2;
    temp_a1 = (*(s32 *)((char *)(arg0) + 0x18));
    if ((((*(s32 *)((char *)(temp_a1) + 0x2)) != 0) && (temp_t7 = (*(s32 *)((char *)(temp_a1) + 0x0)) * 4, ((*(&D_800C35B0 + temp_t7) < *(&D_800C3640 + temp_t7)) == 0))) || ((*(s32 *)((char *)(arg0) + 0x10)) & 0x80)) {
        *temp_a3 = 0;
        *arg6 = 0;
        func_10004074(temp_a1, temp_a1, temp_a3);
        return 1;
    }
    temp_v0 = (*(s32 *)((char *)(temp_a1) + 0x0));
    if ((*(s32 *)((char *)(temp_a1) + 0xE)) == *(&D_800C35E8 + temp_v0)) {
        var_a2 = *(&D_800C3958 + (temp_v0 * 4));
        if (var_a2 != NULL) {
            (*(s16 *)((char *)(arg0) + 0x2)) = (s16) (s32) (*(s16 *)((char *)(var_a2) + ((*(s16 *)((char *)(temp_a1) + 0x1)) * 0x44)));
            temp_v0_2 = *(&D_800C3958 + ((*(s32 *)((char *)(temp_a1) + 0x0)) * 4)) + ((*(s32 *)((char *)(temp_a1) + 0x1)) * 0x44);
            (*(s16 *)((char *)(arg0) + 0x4)) = (s16) (s32) ((*(s16 *)((char *)(temp_v0_2) + 0x38)) + (*(s16 *)((char *)(temp_v0_2) + 0x4)));
            (*(s16 *)((char *)(arg0) + 0x6)) = (s16) (s32) (*(s16 *)((char *)((*(&D_800C3958 + ((*(s16 *)((char *)(temp_a1) + 0x0)) * 4)) + ((*(s16 *)((char *)(temp_a1) + 0x1)) * 0x44))) + 0x8));
        }
    }
    temp_v0_3 = (*(s32 *)((char *)(temp_a1) + 0x4));
    if (temp_v0_3 != 0xFFFF) {
        if (D_800BE9E4 < (s32) temp_v0_3) {
            (*(u16 *)((char *)(temp_a1) + 0x4)) = (u16) (temp_v0_3 - D_800BE9E4);
            goto block_11;
        }
        *temp_a3 = 0;
        *arg6 = 0;
        func_10004074(temp_a1, temp_a1, var_a2, temp_a3);
        return 1;
    }
block_11:
    temp_t5 = (*(s32 *)((char *)(temp_a1) + 0xC));
    *temp_a3 = (u32) temp_t5;
    temp_a0 = (*(s32 *)((char *)(temp_a1) + 0xA));
    temp_v1 = (*(s32 *)((char *)(temp_a1) + 0x4));
    if ((s32) temp_v1 < (s32) temp_a0) {
        if (temp_v1 != 0) {
            *temp_a3 = (u32) (temp_t5 * temp_v1) / temp_a0;
        }
    } else {
        temp_v1_2 = (*(s32 *)((char *)(temp_a1) + 0x8));
        if (temp_v1_2 != 0) {
            temp_a0_2 = (*(s32 *)((char *)(temp_a1) + 0x6));
            var_a2 = (u32 *) temp_v1_2;
            if ((temp_a0_2 - temp_v1_2) < (s32) temp_v1) {
                *temp_a3 = (u32) (*temp_a3 * (temp_a0_2 - temp_v1)) / temp_v1_2;
            }
        }
    }
    if (((*(s32 *)((char *)(temp_a1) + 0x4)) != 0xFFFF) && (D_800C3C88 != 0)) {
        *temp_a3 = (u32) (*temp_a3 * D_800C3C89) / 30U;
        if (D_800BE9E4 >= (s32) D_800C3C89) {
            *temp_a3 = 0;
            *arg6 = 0;
            func_10004074(temp_a1, temp_a1, var_a2, temp_a3);
            return 1;
        }
    }
    return 0;
}

s32 func_15023BB0(u32 arg0, s32 arg1, s32 arg2, void **arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    s16 var_v1;
    s32 var_a1;
    u16 temp_a3;
    u8 var_v0;
    void *temp_v0;
    void *var_a0;

    temp_v0 = *(&D_800C3688 + ((arg10 * 0x78) + (arg2 * 4)));
    if (temp_v0 != NULL) {
        var_a0 = (char *)(temp_v0) + 0x20;
        temp_a3 = (*(u16 *)(*(&D_800C35D8 + (arg10 * 4)) + (arg2 * 2)));
        var_a1 = (char *)(var_a0) - (char *)(temp_v0);
        var_v1 = (*(s32 *)((char *)(temp_v0) + 0x2));
        if ((u32) (var_a1 >> 3) < temp_a3) {
loop_3:
            var_v0 = (*(s32 *)((char *)(var_a0) + 0x1));
            if ((var_v0 == 0) && ((*(s32 *)((char *)(var_a0) + 0x0)) == 0)) {
                var_v1 = (*(s32 *)((char *)(var_a0) + 0x2));
                goto block_37;
            }
            if ((arg0 < (u32) var_a0) && (arg1 == (*(u32 *)((char *)(var_a0) + 0x0))) && ((arg4 == 0) || ((arg4 == 1) && (arg5 == (*(u32 *)((char *)(var_a0) + 0x2))))) && ((arg6 == 0) || ((arg6 == 1) && (arg7 == (*(u32 *)((char *)(var_a0) + 0x4))))) && ((arg8 == 0) || ((arg8 == 1) && (arg9 == (*(u32 *)((char *)(var_a0) + 0x5)))))) {
                *arg3 = var_a0;
                return (s32) var_v1;
            }
            if (var_v0 == 0) {
loop_19:
                if ((*(s32 *)((char *)(var_a0) + 0x0)) == 0) {
                    var_v1 = (*(s32 *)((char *)(var_a0) + 0x2));
                    goto block_36;
                }
                var_a1 += 8;
                var_a0 = (char *)(var_a0) + 8;
                if ((u32) (var_a1 >> 3) >= temp_a3) {
                    var_v0 = (*(s32 *)((char *)(var_a0) + 0x1));
                    goto block_36;
                }
                if ((arg0 < (u32) var_a0) && (arg1 == (*(u32 *)((char *)(var_a0) + 0x0))) && ((arg4 == 0) || ((arg4 == 1) && (arg5 == (*(u32 *)((char *)(var_a0) + 0x2))))) && ((arg6 == 0) || ((arg6 == 1) && (arg7 == (*(u32 *)((char *)(var_a0) + 0x4))))) && ((arg8 == 0) || ((arg8 == 1) && (arg9 == (*(u32 *)((char *)(var_a0) + 0x5)))))) {
                    *arg3 = var_a0;
                    return (s32) var_v1;
                }
                var_v0 = (*(s32 *)((char *)(var_a0) + 0x1));
                if (var_v0 != 0) {
                    goto block_36;
                }
                goto loop_19;
            }
block_36:
            var_v1 += var_v0;
block_37:
            var_a1 += 8;
            var_a0 = (char *)(var_a0) + 8;
            if ((u32) (var_a1 >> 3) >= temp_a3) {
                goto block_38;
            }
            goto loop_3;
        }
    }
block_38:
    *arg3 = NULL;
    return *(&D_800C3640 + (arg10 * 4));
}

void func_15023DE0(void **arg0, void **arg1, s32 *arg2, s32 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11) {
    s16 var_a1;
    s32 *temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 var_v1;
    u16 var_a0;
    u8 var_t3;
    void **temp_a3;
    void *temp_t4;
    void *var_v0;

    if (arg0 != NULL) {
        *arg0 = NULL;
    }
    *arg1 = NULL;
    if (arg2 != NULL) {
        *arg2 = 0;
    }
    temp_t2 = arg11 * 4;
    *arg3 = *(&D_800C3640 + temp_t2);
    temp_a3 = (arg11 * 0x78) + (arg4 * 4) + &D_800C3688;
    temp_t4 = *temp_a3;
    temp_t0 = temp_t2 + &D_800C35D8;
    if ((temp_t4 != NULL) && (temp_t1 = arg4 * 2, var_v0 = (char *)(temp_t4) + 0x20, var_a0 = (*(u32 *)((char *)(*temp_t0) + temp_t1)), var_v1 = (char *)(var_v0) - (char *)(temp_t4), var_a1 = (*(u32 *)((char *)(temp_t4) + 0x2)), (((u32) (var_v1 >> 3) < var_a0) != 0))) {
loop_7:
        if (((*(s32 *)((char *)(var_v0) + 0x1)) == 0) && ((*(s32 *)((char *)(var_v0) + 0x0)) == 0)) {
            var_a1 = (*(s32 *)((char *)(var_v0) + 0x2));
            goto block_60;
        }
        if ((arg10 >= var_a1) && (arg5 == (*(s32 *)((char *)(var_v0) + 0x0))) && ((arg6 == 0) || ((arg6 == 1) && (arg7 == (*(s32 *)((char *)(var_v0) + 0x2))))) && ((arg8 == 0) || ((arg8 == 1) && (arg9 == (*(s32 *)((char *)(var_v0) + 0x4)))))) {
            if (arg0 != NULL) {
                *arg0 = var_v0;
            }
            if (arg2 != NULL) {
                *arg2 = (s32) var_a1;
            }
        }
        if ((arg10 < var_a1) && (arg5 == (*(s32 *)((char *)(var_v0) + 0x0))) && ((arg6 == 0) || ((arg6 == 1) && (arg7 == (*(s32 *)((char *)(var_v0) + 0x2))))) && ((arg8 == 0) || ((arg8 == 1) && (arg9 == (*(s32 *)((char *)(var_v0) + 0x4)))))) {
            *arg1 = var_v0;
            *arg3 = (s32) var_a1;
            return;
        }
        var_t3 = (*(s32 *)((char *)(var_v0) + 0x1));
        var_a0 = (*(s32 *)((char *)(*temp_t0) + temp_t1));
        var_v1 = (char *)(var_v0) - (char *)(*temp_a3);
        if (var_t3 == 0) {
loop_32:
            if ((*(s32 *)((char *)(var_v0) + 0x0)) == 0) {
                var_a1 = (*(s32 *)((char *)(var_v0) + 0x2));
                goto block_59;
            }
            var_v1 += 8;
            var_v0 = (char *)(var_v0) + 8;
            if ((u32) (var_v1 >> 3) >= var_a0) {
                var_t3 = (*(s32 *)((char *)(var_v0) + 0x1));
                goto block_59;
            }
            temp_t3 = *(&D_800C35B0 + temp_t2);
            if ((temp_t3 >= var_a1) && (arg5 == (*(s32 *)((char *)(var_v0) + 0x0))) && ((arg6 == 0) || ((arg6 == 1) && (arg7 == (*(s32 *)((char *)(var_v0) + 0x2))))) && ((arg8 == 0) || ((arg8 == 1) && (arg9 == (*(s32 *)((char *)(var_v0) + 0x4)))))) {
                if (arg0 != NULL) {
                    *arg0 = var_v0;
                }
                if (arg2 != NULL) {
                    *arg2 = (s32) var_a1;
                }
                var_a0 = (*(s32 *)((char *)(*temp_t0) + temp_t1));
                var_v1 = (char *)(var_v0) - (char *)(*temp_a3);
                goto block_58;
            }
            if ((temp_t3 < var_a1) && (arg5 == (*(s32 *)((char *)(var_v0) + 0x0))) && ((arg6 == 0) || ((arg6 == 1) && (arg7 == (*(s32 *)((char *)(var_v0) + 0x2))))) && ((arg8 == 0) || ((arg8 == 1) && (arg9 == (*(s32 *)((char *)(var_v0) + 0x4)))))) {
                *arg1 = var_v0;
                *arg3 = (s32) var_a1;
                return;
            }
block_58:
            var_t3 = (*(s32 *)((char *)(var_v0) + 0x1));
            if (var_t3 != 0) {
                goto block_59;
            }
            goto loop_32;
        }
block_59:
        var_a1 += var_t3;
block_60:
        var_v1 += 8;
        var_v0 = (char *)(var_v0) + 8;
        if ((u32) (var_v1 >> 3) >= var_a0) {

        } else {
            goto loop_7;
        }
    }
}

void func_15024130(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;
    void *temp_v0;

    var_s0 = 0;
    if (arg0 > 0) {
        var_s1 = 0;
        do {
            temp_v0 = (char *)(D_800C3D50) + var_s1;
            func_1502A8A0((*(s32 *)((char *)(temp_v0) + 0x0)), (*(s32 *)((char *)(temp_v0) + 0x8)), (*(s32 *)((char *)(temp_v0) + 0xA)), (*(s32 *)((char *)(temp_v0) + 0x4)), arg1);
            var_s0 += 1;
            var_s1 += 0xC;
        } while (var_s0 != arg0);
    }
}

void func_150241B4(void *arg0, s32 *arg1, void *arg2, s32 arg3, u32 arg4, s32 arg5, s32 arg6) {
    s32 *var_v0_2;
    s32 temp_a0;
    s32 temp_at;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a2;
    void *temp_v0;
    void *var_v0;
    void *var_v1;

    temp_s0 = *arg1;
    var_a2 = temp_s0;
    if (temp_s0 >= (s32) D_800C3C9A) {
        func_15024130(temp_s0, arg6);
        *arg1 = 0;
        return;
    }
    var_a0 = 0;
    if (temp_s0 > 0) {
        var_v0 = arg0;
loop_4:
        if ((*(s32 *)((char *)(var_v0) + 0x4)) >= arg5) {
            var_a2 = var_a0;
        } else {
            var_a0 += 1;
            var_v0 = (char *)(var_v0) + 0xC;
            if (var_a0 < temp_s0) {
                goto loop_4;
            }
        }
    }
    temp_a0 = temp_s0 - 1;
    if (temp_a0 >= var_a2) {
        var_v0_2 = (char *)(arg0) + (temp_a0 * 0xC);
        var_v1 = var_v0_2 + 0xC;
        do {
            temp_at = *var_v0_2;
            var_v1 = (char *)(var_v1) - 0xC;
            var_v0_2 -= 0xC;
            (*(s32 *)((char *)(var_v1) + 0xC)) = temp_at;
            (*(s32 *)((char *)(var_v1) + 0x10)) = (s32) (*(s32 *)((char *)(var_v0_2) + 0x10));
            (*(s32 *)((char *)(var_v1) + 0x14)) = (s32) (*(s32 *)((char *)(var_v0_2) + 0x14));
        } while ((u32) var_v1 >= (u32) ((var_a2 * 0xC) + (char *)(arg0) + 0xC));
    }
    temp_v0 = (char *)(arg0) + (var_a2 * 0xC);
    (*(s32 *)((char *)(temp_v0) + 0x0)) = arg2;
    (*(s8 *)((char *)(temp_v0) + 0x8)) = (s8) arg3;
    (*(s32 *)((char *)(temp_v0) + 0x4)) = arg5;
    (*(s16 *)((char *)(temp_v0) + 0xA)) = (s16) arg4;
    *arg1 += 1;
}

void func_150242F8(s32 arg0, s32 arg1) {
    s32 sp88;
    u8 *sp84;
    s32 *sp70;
    s32 *sp6C;
    s16 var_s1;
    s32 *temp_s4;
    s32 *temp_v0;
    s32 *temp_v1;
    s32 temp_s5;
    s32 temp_t7;
    s32 var_a1;
    s32 var_s7;
    s32 var_v0;
    s32 var_v1;
    u16 var_a0;
    u8 *temp_t4;
    u8 temp_v0_2;
    u8 var_t1;
    u8 var_v0_2;
    void **var_s6;
    void *temp_a2;
    void *var_s0;

    if ((D_800C3C8C != 2) && (*(&D_800C35EA + arg1) == 1) && (D_800C3C9A != 0)) {
        D_800C3638 = 0;
        sp88 = 0;
        temp_t4 = arg1 + &D_800C363A;
        sp84 = temp_t4;
        var_t1 = *temp_t4;
        var_s7 = 0;
        if ((s32) var_t1 > 0) {
            var_s6 = (arg1 * 0x78) + &D_800C3688;
            do {
                temp_a2 = *var_s6;
                temp_t7 = arg1 * 4;
                if (temp_a2 != NULL) {
                    temp_v0 = temp_t7 + &D_800C35B8;
                    temp_v1 = temp_t7 + &D_800C35B0;
                    var_a1 = *temp_v1;
                    sp6C = temp_v1;
                    sp70 = temp_v0;
                    if (*temp_v0 != var_a1) {
                        temp_s4 = temp_t7 + &D_800C35D8;
                        temp_s5 = var_s7 * 2;
                        var_s0 = (char *)(temp_a2) + 0x20;
                        var_a0 = (*(s32 *)((char *)(*temp_s4) + temp_s5));
                        var_v1 = (char *)(var_s0) - (char *)(temp_a2);
                        var_v0 = var_v1 >> 3;
                        var_s1 = (*(s32 *)((char *)(temp_a2) + 0x2));
                        if ((u32) var_v0 < var_a0) {
loop_8:
                            if (((*(s32 *)((char *)(var_s0) + 0x1)) == 0) && ((*(s32 *)((char *)(var_s0) + 0x0)) == 0)) {
                                var_s1 = (*(s32 *)((char *)(var_s0) + 0x2));
                                goto block_34;
                            }
                            if ((var_a1 >= var_s1) && (*sp70 < var_s1)) {
loop_13:
                                if ((u32) var_v0 >= var_a0) {
                                    var_a1 = *sp6C;
                                } else {
                                    if (((arg0 == 0) && ((*(s32 *)((char *)(var_s0) + 0x0)) != 0x11)) || ((arg0 == 1) && ((*(s32 *)((char *)(var_s0) + 0x0)) == 0x11))) {
                                        func_150241B4(D_800C3D50, &sp88, var_s0, var_s7, (u32) var_v0, (s32) var_s1, arg1);
                                    }
                                    temp_v0_2 = (*(s32 *)((char *)(var_s0) + 0x1));
                                    if ((temp_v0_2 != 0) || ((temp_v0_2 == 0) && ((*(s32 *)((char *)(var_s0) + 0x0)) == 0))) {
                                        var_a1 = *sp6C;
                                    } else {
                                        var_s0 = (char *)(var_s0) + 8;
                                        var_a0 = (*(s32 *)((char *)(*temp_s4) + temp_s5));
                                        var_v0 = (s32) ((char *)(var_s0) - (char *)(*var_s6)) >> 3;
                                        goto loop_13;
                                    }
                                }
                            }
                            if (var_a1 < var_s1) {
                                var_t1 = *sp84;
                            } else {
                                var_v0_2 = (*(s32 *)((char *)(var_s0) + 0x1));
                                var_a0 = (*(s32 *)((char *)(*temp_s4) + temp_s5));
                                var_v1 = (char *)(var_s0) - (char *)(*var_s6);
                                if (var_v0_2 == 0) {
loop_28:
                                    if ((*(s32 *)((char *)(var_s0) + 0x0)) == 0) {
                                        var_s1 = (*(s32 *)((char *)(var_s0) + 0x2));
                                    } else {
                                        var_v1 += 8;
                                        var_s0 = (char *)(var_s0) + 8;
                                        if ((u32) (var_v1 >> 3) >= var_a0) {
                                            var_v0_2 = (*(s32 *)((char *)(var_s0) + 0x1));
                                        } else {
                                            var_v0_2 = (*(s32 *)((char *)(var_s0) + 0x1));
                                            if (var_v0_2 == 0) {
                                                goto loop_28;
                                            }
                                        }
                                    }
                                }
                                var_s1 += var_v0_2;
block_34:
                                var_v1 += 8;
                                var_v0 = var_v1 >> 3;
                                var_s0 = (char *)(var_s0) + 8;
                                if ((u32) var_v0 >= var_a0) {
                                    var_t1 = *sp84;
                                } else {
                                    goto loop_8;
                                }
                            }
                        }
                    }
                }
                var_s7 += 1;
                var_s6 = (char *)(var_s6) + 4;
            } while (var_s7 < (s32) var_t1);
        }
        func_15024130(sp88, arg1);
        D_800C3638 = 1;
        if (arg0 == 0) {
            *(&D_800C35C0 + arg1) = 1;
        }
    }
}

/*
Decompilation failure in function func_1502460C:

Found jr instruction at 50D80.s line 1750, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function func_150265CC:

Found jr instruction at 50D80.s line 5463, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

s32 func_15029BB8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5, s32 arg6, void *arg7, s32 arg9) {
    s32 spCC;
    s32 spC8;
    void *spBC;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spAC;
    void *spA0;
    f32 sp98;
    f32 sp94;
    void *sp90;
    s32 sp8C;
    s32 sp88;
    void *sp84;
    void *sp7C;
    s32 sp78;
    void *sp70;
    s32 sp6C;
    s32 sp64;
    void *sp58;
    void *sp50;
    s32 sp48;
    void * var_a1_2;
    f32 temp_f16;
    f32 var_f14;
    f32 var_f2;
    s16 temp_t1_2;
    s16 temp_v0;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_v0;
    s32 var_v1;
    s8 temp_a1;
    s8 temp_t6;
    s8 temp_v0_5;
    s8 temp_v0_8;
    s8 temp_v1_3;
    void *temp_v0_4;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_t6 = (*(s32 *)((char *)(arg0) + 0x0));
    sp48 = (s32) temp_t6;
    if ((temp_t6 == 6) || (temp_t6 == 0xA)) {
        spBC = NULL;
        spAC = 0;
        if (((*(s32 *)((char *)(arg0) + 0x4)) == 0) || ((*(s32 *)((char *)(arg0) + 0x0)) == 6)) {
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x6));
            if (temp_v0 == 0) {
                var_t1 = 0xFF;
            } else {
                temp_t1 = temp_v0 & 0xFF;
                if (temp_t1 < 0) {
                    var_t1 = 0;
                } else {
                    var_v0 = temp_t1;
                    if (temp_t1 >= 0x100) {
                        var_v0 = 0xFF;
                    }
                    var_t1 = var_v0;
                }
            }
            spCC = var_t1;
            temp_a1 = (*(s32 *)((char *)(arg0) + 0x0));
            var_t0 = func_15023BB0((u32) arg0, (s32) (*(u32 *)((char *)(arg0) + 0x0)), arg1, &spBC, 1, (s32) (*(u32 *)((char *)(arg0) + 0x2)), 1, 1, 0, 0, arg4) - arg3;
            if (temp_a1 == 6) {
                goto block_14;
            }
            if (spBC == NULL) {
block_14:
                var_t0 = 0xFFFF;
            }
            if ((arg9 != 0) && ((temp_a1 != 0xA) || (spBC != NULL))) {

            } else {
                spB4 = 0;
                spB8 = (*(s32 *)((char *)(arg0) + 0x5)) * 0x32;
                spB0 = 0;
                if (temp_a1 == 0xA) {
                    spC8 = var_t0;
                    temp_v0_2 = func_15023BB0((u32) arg0, (s32) temp_a1, arg1, &spBC, 1, (s32) (*(u32 *)((char *)(arg0) + 0x2)), 1, 2, 0, 0, arg4);
                    if (spBC != NULL) {
                        temp_v1 = temp_v0_2 - arg3;
                        if (temp_v1 < spC8) {
                            spB0 = temp_v1;
                        }
                    }
                    temp_v0_3 = func_15023BB0((u32) arg0, (s32) (*(u32 *)((char *)(arg0) + 0x0)), arg1, &spBC, 1, (s32) (*(u32 *)((char *)(arg0) + 0x2)), 1, 3, 0, 0, arg4);
                    var_t0 = spC8;
                    if (spBC != NULL) {
                        temp_v1_2 = temp_v0_3 - arg3;
                        if (temp_v1_2 < var_t0) {
                            spB4 = var_t0 - temp_v1_2;
                        }
                    }
                } else if ((*(s32 *)((char *)(arg0) + 0x4)) == 2) {
                    spAC = 0x800;
                } else {
                    spAC = 0x400;
                }
                spC8 = var_t0;
                temp_v0_4 = allocate_memory(0x10, 1, 0, 0);
                if (temp_v0_4 != NULL) {
                    (*(s8 *)((char *)(temp_v0_4) + 0x0)) = (s8) arg4;
                    (*(u8 *)((char *)(temp_v0_4) + 0xE)) = (u8) *(&D_800C35E8 + arg4);
                    (*(s16 *)((char *)(temp_v0_4) + 0x4)) = (s16) var_t0;
                    (*(s16 *)((char *)(temp_v0_4) + 0x6)) = (s16) var_t0;
                    (*(s8 *)((char *)(temp_v0_4) + 0x1)) = (s8) arg1;
                    (*(s16 *)((char *)(temp_v0_4) + 0x8)) = (s16) spB0;
                    (*(u16 *)((char *)(temp_v0_4) + 0xC)) = (u16) ((s32) (spCC * 0x7FFF) >> 8);
                    (*(s16 *)((char *)(temp_v0_4) + 0xA)) = (s16) spB4;
                    (*(s8 *)((char *)(temp_v0_4) + 0x2)) = (s8) ((*(s8 *)((char *)(arg0) + 0x0)) == 0xA);
                    func_1000FA64((u16) (*(u16 *)((char *)(arg0) + 0x2)), (s16) (s32) (*(u16 *)((char *)(arg7) + 0x0)), (s16) (s32) (*(u16 *)((char *)(arg7) + 0x4)), (s16) (s32) (*(u16 *)((char *)(arg7) + 0x8)), (s32) (*(u16 *)((char *)(temp_v0_4) + 0xC)), 0x7D00, 0x7918, func_150238D8, temp_v0_4, 0, spAC, spB8);
                }
            }
        }
        goto block_139;
    }
    if (sp48 == 8) {
        temp_v0_5 = (*(s32 *)((char *)(arg0) + 0x4));
        if (temp_v0_5 == 0) {
            if ((arg9 != 0) && (func_1000E134((*(s32 *)((char *)(arg0) + 0x2)), 1) != 0)) {

            } else {
                func_1000D96C((*(s32 *)((char *)(arg0) + 0x2)), 0, 0);
                if ((*(s32 *)((char *)(arg0) + 0x6)) != 0) {

                }
            }
        } else if (temp_v0_5 == 1) {
            func_1000E588((*(s32 *)((char *)(arg0) + 0x2)), (*(s32 *)((char *)(arg0) + 0x6)) * 0x64, 1 << ((*(s32 *)((char *)(arg0) + 0x5)) + 0x1F));
        } else if (temp_v0_5 == 2) {
            func_1000DF68((*(s32 *)((char *)(arg0) + 0x2)), (*(s32 *)((char *)(arg0) + 0x6)) * 0x148, 1);
        } else if (temp_v0_5 != 3) {
            if (temp_v0_5 == 4) {
                temp_a3 = func_15023BB0((u32) arg0, sp48, arg1, &spA0, 1, (s32) (*(u32 *)((char *)(arg0) + 0x2)), 1, 5, 1, (s32) (*(u32 *)((char *)(arg0) + 0x5)), arg4) - arg3;
                if (arg9 != 0) {
                    func_1000E588((*(s32 *)((char *)(arg0) + 0x2)), (*(s32 *)((char *)(arg0) + 0x6)), 1 << ((*(s32 *)((char *)(arg0) + 0x5)) + 0x1F), temp_a3);
                } else {
                    func_1000E46C((*(s32 *)((char *)(arg0) + 0x2)), (*(s32 *)((char *)(arg0) + 0x6)), 1 << ((*(s32 *)((char *)(arg0) + 0x5)) + 0x1F), temp_a3);
                }
            } else if (temp_v0_5 == 6) {
                var_a3 = func_15023BB0((u32) arg0, sp48, arg1, &spA0, 1, (s32) (*(u32 *)((char *)(arg0) + 0x2)), 1, 7, 0, 0, arg4) - arg3;
                if (var_a3 < 2) {
                    var_a3 = 1;
                }
                func_1000DF68((*(s32 *)((char *)(arg0) + 0x2)), (*(s32 *)((char *)(arg0) + 0x6)) * 0x148, var_a3, var_a3);
            } else if (temp_v0_5 == 8) {
                func_1000E654((*(s32 *)((char *)(arg0) + 0x2)), (*(s32 *)((char *)(arg0) + 0x6)) + 1, 0, -1);
            } else if (temp_v0_5 == 9) {
                func_1000DE1C((*(s32 *)((char *)(arg0) + 0x2)), 0);
            }
        }
        goto block_139;
    }
    if (sp48 == 2) {
        if (arg5 == NULL) {

        } else {
            temp_f16 = (f32) (func_15023BB0((u32) arg0, sp48, arg1, &sp90, 0, 0, 0, 0, 0, 0, arg4) - arg3);
            if ((*(s32 *)((char *)(arg0) + 0x4)) == 0) {
                if ((*(s32 *)((char *)(arg5) + 0x2D0)) == NULL) {

                } else {
                    temp_v0_6 = (*(s32 *)((char *)(arg0) + 0x6));
                    var_f14 = 5.0f;
                    temp_t1_2 = (*(s32 *)((char *)(arg0) + 0x2));
                    if (temp_v0_6 > 0) {
                        var_f14 = (f32) (temp_v0_6 - 1);
                    }
                    var_t0_2 = 1;
                    if (arg3 == D_800C3C8E) {
                        var_f14 = 0.0f;
                    }
                    if (arg9 != 0) {
                        var_f14 = 0.0f;
                    }
                    if (sp90 != NULL) {
                        temp_v1_3 = (*(s32 *)((char *)(sp90) + 0x4));
                        var_t0_2 = temp_v1_3 == 0;
                        if ((temp_v1_3 == 1) && ((*(s32 *)((char *)(sp90) + 0x5)) == 1)) {
                            var_t0_2 = 1;
                        }
                    }
                    if (temp_t1_2 != (*(s32 *)((char *)(arg5) + 0x84))) {
                        sp8C = var_t0_2;
                        sp88 = (s32) temp_t1_2;
                        sp98 = var_f14;
                        sp94 = temp_f16;
                        func_1505E650(arg5, temp_t1_2 & 0xFFFF, 1.0f, var_f14, 0.0f, 0.0f, var_t0_2);
                    }
                    if (temp_f16 > 0.0f) {
                        var_f2 = 2.0f * ((*(s32 *)((char *)((*(s32 *)((char *)(arg5) + 0x2D0))) + 0x18)) / temp_f16);
                    } else {
                        var_f2 = 0.0f;
                    }
                    if ((*(s32 *)((char *)(arg0) + 0x5)) != 0) {
                        var_f2 = 0.0f;
                    }
                    func_1505E650(arg5, temp_t1_2 & 0xFFFF, var_f2, var_f14, 0.0f, 0.0f, var_t0_2);
                }
            }
        }
        goto block_139;
    }
    if (sp48 == 5) {
        temp_v0_7 = (*(s32 *)((char *)(arg0) + 0x2));
        if (temp_v0_7 == 1) {
            if ((*(s32 *)((char *)(arg0) + 0x4)) == 0) {
                var_a3_2 = func_15023BB0((u32) arg0, sp48, arg1, &sp84, 1, (s32) temp_v0_7, 0, 0, 0, 0, arg4) - arg3;
                if (arg9 != 0) {
                    var_a3_2 = 0;
                }
                temp_v1_4 = ((*(s32 *)((char *)(arg0) + 0x5)) * 3) + &D_80084110;
                func_1517EE40((*(s32 *)((char *)(temp_v1_4) + 0x0)), (*(s32 *)((char *)(temp_v1_4) + 0x1)), (*(s32 *)((char *)(temp_v1_4) + 0x2)), var_a3_2, (*(s32 *)((char *)(arg0) + 0x6)) == 0, 0);
                D_800C3C8A = (*(s32 *)((char *)(arg0) + 0x6)) == 0;
            } else if (arg9 != 0) {
                func_15023DE0(&sp7C, &sp84, NULL, &sp78, arg1, sp48, 1, (s32) temp_v0_7, 1, 0, *(&D_800C35B0 + (arg4 * 4)), arg4);
                if (sp7C != NULL) {
                    temp_v1_5 = ((*(s32 *)((char *)(sp7C) + 0x5)) * 3) + &D_80084110;
                    func_1517EE40((*(s32 *)((char *)(temp_v1_5) + 0x0)), (*(s32 *)((char *)(temp_v1_5) + 0x1)), (*(s32 *)((char *)(temp_v1_5) + 0x2)), 0, (*(s32 *)((char *)(sp7C) + 0x6)) == 0, 0);
                    D_800C3C8A = (*(s32 *)((char *)(sp7C) + 0x6)) == 0;
                }
            }
        } else if (temp_v0_7 == 4) {
            if (arg5 != NULL) {
                if (arg9 == 0) {
                    var_a1 = -1;
                    if ((*(s32 *)((char *)(arg5) + 0x4)) == 0x4B) {
                        var_a1 = 2;
                    }
                    if (var_a1 != -1) {
                        temp_v0_8 = (*(s32 *)((char *)(arg0) + 0x4));
                        var_a2 = temp_v0_8 - 1;
                        if (temp_v0_8 == 0) {
                            var_a2 = -1;
                        }
                        func_1503DE70(arg5, var_a1, var_a2);
                    }
                } else {
                    func_15060F28(arg5, 1);
                }
            }
        } else if (temp_v0_7 == 0x5C) {
            if (((*(s32 *)((char *)(arg0) + 0x4)) == 0) && (arg9 == 0)) {
                sp64 = func_15023BB0((u32) arg0, sp48, arg1, &sp70, 1, (s32) temp_v0_7, 1, 1, 1, (s32) (*(u32 *)((char *)(arg0) + 0x5)), arg4);
                var_v1 = func_15023BB0((u32) arg0, (s32) (*(u32 *)((char *)(arg0) + 0x0)), arg1, &sp70, 1, (s32) (*(u32 *)((char *)(arg0) + 0x2)), 1, 2, 1, (s32) (*(u32 *)((char *)(arg0) + 0x5)), arg4) - arg3;
                if (sp70 == NULL) {
                    var_v1 = 0;
                }
                sp6C = var_v1;
                var_a2_2 = sp64 - func_15023BB0((u32) arg0, (s32) (*(u32 *)((char *)(arg0) + 0x0)), arg1, &sp70, 1, (s32) (*(u32 *)((char *)(arg0) + 0x2)), 1, 3, 1, (s32) (*(u32 *)((char *)(arg0) + 0x5)), arg4);
                if (sp70 == NULL) {
                    var_a2_2 = 0;
                }
                func_150F5420(sp6C, ((sp64 - arg3) - var_a2_2) - sp6C, var_a2_2, (*(s32 *)((char *)(arg0) + 0x5)));
            }
        } else if (temp_v0_7 == 0x56) {
            if ((*(s32 *)((char *)(arg0) + 0x4)) == 0) {
                if (arg9 == 0) {
                    func_15178EFC(3, 1);
                }
            } else if (arg9 != 0) {
                func_15178EFC(2, 1);
            } else if ((*(s32 *)((char *)(arg0) + 0x5)) == 0) {
                func_15178EFC(0, 1);
            } else {
                func_15178EFC(1, 1);
            }
        } else if (temp_v0_7 == 0x76) {
            if ((*(s32 *)((char *)(arg0) + 0x4)) == 1) {
                var_a1_2 = 0;
            } else if ((*(s32 *)((char *)(arg0) + 0x5)) == 1) {
                var_a1_2 = 2;
            } else {
                var_a1_2 = 1;
            }
            func_151D66F0((*(s32 *)((char *)(arg0) + 0x6)), var_a1_2);
        } else if (temp_v0_7 == 0x2D) {
            temp_a1_2 = func_15023BB0((u32) arg0, sp48, arg1, &sp58, 1, (s32) temp_v0_7, 0, 0, 0, 0, arg4) - arg3;
            if (arg6 != 0) {
                if ((*(s32 *)((char *)(arg0) + 0x4)) == 0) {
                    func_1518894C(arg6, temp_a1_2, (*(s32 *)((char *)(arg0) + 0x5)));
                } else if (arg9 != 0) {

                }
            } else if (arg5 != NULL) {
                if ((*(s32 *)((char *)(arg0) + 0x4)) == 0) {
                    func_15188810(arg5, temp_a1_2, (*(s32 *)((char *)(arg0) + 0x5)));
                } else if (arg9 != 0) {
                    func_15188AD0(arg5, temp_a1_2);
                }
            }
        } else if (temp_v0_7 == 0x57) {
            if ((*(s32 *)((char *)(arg0) + 0x4)) == 0) {
                func_151557FC(0, 0, func_15023BB0((u32) arg0, sp48, arg1, &sp50, 1, (s32) temp_v0_7, 0, 0, 0, 0, arg4) - arg3, 0);
            } else if (arg9 != 0) {
                gCurrentObjectIndex = 0;
                func_15155F90(arg0, sp48);
            }
        }
block_139:
        return 1;
    }
    return 0;
}

void func_1502A8A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *sp44;
    s32 sp40;
    void *sp3C;
    s32 sp34;
    s32 sp30;
    s32 temp_t1;
    s32 temp_v0_3;
    u16 temp_t0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;

    temp_t1 = arg4 * 4;
    sp44 = NULL;
    sp40 = 0;
    sp34 = (s32) *(&D_800C35E8 + arg4);
    temp_v0 = *(&D_800C35F0 + temp_t1) + (arg1 * 8);
    temp_t0 = (*(s32 *)((char *)(temp_v0) + 0x0));
    var_v1 = NULL;
    if (temp_t0 == 2) {
        sp30 = temp_t1;
        temp_v0_2 = func_15083E90((*(s32 *)((char *)(temp_v0) + 0x2)));
        sp44 = temp_v0_2;
        if (temp_v0_2 != NULL) {
            var_v1 = (char *)(temp_v0_2) + 0x14;
            goto block_5;
        }
    } else if ((temp_t0 != 3) || (sp30 = temp_t1, sp3C = NULL, temp_v0_3 = func_151149AC((*(s32 *)((char *)(temp_v0) + 0x2))), var_v1 = NULL, sp40 = temp_v0_3, (temp_v0_3 != 0))) {
block_5:
        if (var_v1 == NULL) {
            var_v1 = *(&D_800C3958 + temp_t1) + (arg1 * 0x44);
        }
        if (D_800C3C88 != 2) {
            sp3C = var_v1;
            if (func_1502460C(arg0, arg1, arg2, arg3, arg4, sp44, sp40, var_v1, sp34) == 0) {
                sp3C = var_v1;
                if ((func_150265CC(arg0, arg1, arg2, arg3, arg4, sp44, sp40, var_v1, sp34) == 0) && (func_15029BB8(arg0, arg1, arg2, arg3, arg4, sp44, sp40, var_v1, sp34) != 0)) {

                }
            }
        } else {
            sp3C = var_v1;
            if (func_1502460C(arg0, arg1, arg2, arg3, arg4, sp44, sp40, var_v1, sp34) == 0) {
                func_15029BB8(arg0, arg1, arg2, arg3, arg4, sp44, sp40, var_v1, sp34);
            }
        }
    }
}
