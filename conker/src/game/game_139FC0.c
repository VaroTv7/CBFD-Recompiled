/**
 * Auto-decompiled from asm/139FC0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s16 *allocate_memory();                 /* extern */
void * func_10004074();                /* extern */
void * func_10006240();                /* extern */
f32 func_150489B0();                /* extern */
s16 *func_1510D0EC(); /* static */
s32 func_1510D374();                        /* static */
void func_1510D694();                       /* static */
extern s32 D_1A37E0;
extern s32 D_800D9E70;
extern s32 D_800D9E88;
extern s32 D_800D9E98;
extern s32 D_800D9EA8;
extern s32 D_800D9EB4;
extern s32 D_800D9EB8;
extern u8 D_800D9ED0;
extern s32 D_800D9ED8;
extern s32 D_800D9F68;
extern u8 D_800DBDBA;
extern s32 D_800DBDBC;
void func_1510D608();

void func_1510CB10(s32 arg0, void * arg1) {
    s32 sp54;
    u8 *sp44;
    void * var_a1;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_t4;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s4;
    s32 var_v1;
    u16 *var_s1;
    u16 temp_t1;
    u8 *temp_t2;
    u8 *var_fp;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s5;
    u8 *var_s7;
    u8 var_a0;
    u8 var_a3;
    u8 var_s0;

    var_a1 = arg1;
    if ((*(s32 *)((char *)((D_800DBFF0 + (arg0 * 0x9A0))) + 0x5F0)) & 1) {
        temp_t2 = &D_800D9EB8 + (arg0 * 3);
        sp44 = temp_t2;
        var_s5 = (arg0 * 3) + &D_800D9EA8;
        var_a3 = *temp_t2;
        temp_s6 = D_800BE9E4 * 2;
        var_s1 = (arg0 * 6) + &D_800D9E70;
        var_s3 = (arg0 * 3) + &D_800D9B78;
        var_s2 = (arg0 * 3) + &D_800D9B68;
        var_fp = (arg0 * 3) + &D_800D9E88;
        var_s7 = (arg0 * 3) + &D_800D9E98;
        var_s4 = 0;
        do {
            var_s0 = *var_s5;
            if (var_a3 != 0) {
                var_a0 = *(&D_800D9EB8 + (arg0 * 3) + var_s4);
            } else {
                var_a0 = *(&D_800D9EB4 + var_s4);
            }
            temp_v0 = var_a0 - var_s0;
            if (temp_v0 != 0) {
                var_v1 = temp_v0;
                if (temp_v0 < 0) {
                    var_v1 = -temp_v0;
                }
                if (var_v1 < temp_s6) {
                    var_s0 = var_a0;
                } else if (temp_v0 < 0) {
                    var_s0 -= temp_s6;
                } else {
                    var_s0 += temp_s6;
                }
                *var_s5 = var_s0;
            }
            sp54 = (s32) var_a3;
            temp_f0 = func_150489B0(((s32) *var_s1 >> 4) & 0xFF, var_a1, arg0, (s32) var_a3);
            var_a1 = 0x7F;
            temp_f2 = temp_f0 * (f32) *var_s7;
            var_s4 += 1;
            var_s5 += 1;
            var_s7 += 1;
            temp_v0_2 = ((s32) temp_f2 + var_s0) - 0x7F;
            if (temp_v0_2 >= 0) {
                *var_s2 += temp_v0_2;
            } else {
                *var_s3 -= temp_v0_2;
            }
            if ((s32) *var_s2 >= 0x80) {
                *var_s2 = 0x7F;
            }
            var_s2 += 1;
            if ((s32) *var_s3 >= 0x80) {
                *var_s3 = 0x7F;
            }
            temp_t1 = *var_s1;
            var_s1 += 2;
            temp_t4 = temp_t1 + *var_fp;
            (*(s32 *)((char *)(var_s1) - 0x2)) = temp_t4;
            var_s3 += 1;
            var_fp += 1;
            (*(s16 *)((char *)(var_s1) - 0x2)) = (s16) (temp_t4 & 0xFFF);
        } while (var_s4 != 3);
        *sp44 = 0;
    }
}

void *func_1510CDB8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_t0;
    void *temp_a0;
    void *temp_t1;
    void *temp_t3;

    temp_t0 = arg3 * 3;
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xFA00F200;
    temp_t1 = temp_t0 + &D_800D9B68;
    (*(s32 *)((char *)(arg0) + 0x4)) = (s32) (((*(s32 *)((char *)(temp_t1) + 0x2)) << 8) | ((*(s32 *)((char *)(temp_t1) + 0x0)) << 0x18) | ((*(s32 *)((char *)(temp_t1) + 0x1)) << 0x10) | (arg1 & 0xFF));
    temp_a0 = (char *)(arg0) + 8;
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xFB000000;
    temp_t3 = temp_t0 + &D_800D9B78;
    (*(s32 *)((char *)(temp_a0) + 0x4)) = (s32) (((*(s32 *)((char *)(temp_t3) + 0x2)) << 8) | ((*(s32 *)((char *)(temp_t3) + 0x0)) << 0x18) | ((*(s32 *)((char *)(temp_t3) + 0x1)) << 0x10) | (arg2 & 0xFF));
    return (char *)(temp_a0) + 8;
}

s32 func_1510CE60(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s16 **arg4) {
    s32 sp428;
    s32 sp424;
    s32 sp420;
    s32 sp418;
    s16 *sp414;
    s32 sp40C;
    void * sp3FB;
    void * sp33;
    s8 sp32;
    s8 sp31;
    u8 sp30;
    s8 *sp2C;
    void * *var_v0;
    s16 *temp_v0;
    s16 *temp_v0_3;
    s16 *var_a1;
    s16 var_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 var_t1;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t4;
    s32 var_t5;
    s32 var_v0_3;
    s32 var_v1;
    s8 *var_t0;
    s8 var_v0_2;
    u8 *temp_v1;
    u8 *var_v0_4;
    u8 temp_a0;

    var_t5 = 0;
    var_v0 = &sp33;
    if (arg4 != NULL) {
        sp30 = 0;
        sp31 = 0;
        sp32 = 0;
        do {
            var_v0 = (char *)(var_v0) + 4;
            (*(s32 *)((char *)(var_v0) - 0x3)) = 0;
            (*(s32 *)((char *)(var_v0) - 0x2)) = 0;
            (*(s32 *)((char *)(var_v0) - 0x1)) = 0;
            (*(s32 *)((char *)(var_v0) - 0x4)) = 0;
        } while ((char *)(var_v0) != (char *)(&sp3FB));
        sp40C = 0;
    }
    var_t4 = sp40C;
    var_t2 = 0;
    var_t0 = arg0;
    if (*arg0 != -0x21) {
        var_v0_2 = *arg0;
        var_a1 = sp414;
        do {
            if ((var_v0_2 == -3) && ((temp_s0 = (*(u32 *)((char *)(var_t0) + 0x4)), (arg1 == 0)) || !(temp_s0 & 0xFF000000)) && ((u32) (temp_s0 & 0xFF000000) < 0x06000000U)) {
                temp_t7 = temp_s0 & 0xF03FFFFF;
                if (!(temp_s0 & 0x0F000000)) {
                    sp2C = var_t0;
                    sp420 = temp_s0 >> 0x16;
                    sp428 = var_t2;
                    sp40C = var_t4;
                    sp418 = var_t5;
                    temp_v0 = func_1510D0EC(temp_t7, &sp424, arg3, arg2);
                    var_t0 = sp2C;
                    var_t1 = sp420;
                    var_t2 = sp428;
                    var_t4 = sp40C;
                    var_t5 = sp418;
                    (*(s32 *)((char *)(var_t0) + 0x4)) = temp_v0;
                    var_a1 = temp_v0;
                    if (arg4 != NULL) {
                        temp_v1 = &(&sp30)[temp_t7 >> 3];
                        temp_a0 = *temp_v1;
                        temp_v0_2 = 1 << (temp_t7 & 7);
                        if (!(temp_a0 & temp_v0_2)) {
                            *temp_v1 = temp_a0 | temp_v0_2;
                            var_t4 += 1;
                        }
                    }
                } else {
                    var_t1 = 0;
                }
                if (var_a1 == (s16 *)0x80000000) {
                    var_t5 = 1;
                }
                if (var_t1 != 0) {
                    var_v0_3 = (*(s32 *)((char *)(var_t0) + 0x4));
                    if (var_t1 & 1) {
                        var_v0_3 = (var_v0_3 + sp424) - 0x200;
                        goto block_22;
                    }
                    if (var_t1 & 2) {
                        var_v0_3 = (var_v0_3 + sp424) - 0x20;
block_22:
                        (*(s32 *)((char *)(var_t0) + 0x4)) = var_v0_3;
                    }
                    (*(s32 *)((char *)(var_t0) + 0x4)) = (s32) (var_v0_3 | ((var_t1 & 0x3C) << 0x16));
                }
            }
            var_t2 += 1;
            var_t0 = (var_t2 * 8) + arg0;
            var_v0_2 = *var_t0;
        } while (var_v0_2 != -0x21);
        sp414 = var_a1;
    }
    temp_s0_2 = var_t4 + 1;
    if (arg4 != NULL) {
        sp40C = var_t4;
        sp418 = var_t5;
        temp_v0_3 = allocate_memory(temp_s0_2 * 2, 1, 0, 2);
        *arg4 = temp_v0_3;
        if (temp_v0_3 != NULL) {
            *temp_v0_3 = (s16) var_t4;
            var_v1 = 1;
            var_t2_2 = 0;
            var_a0 = 0;
            if (temp_s0_2 != 1) {
                var_v0_4 = &sp30;
                do {
                    if (*var_v0_4 & var_v1) {
                        (temp_v0_3 + 2)[var_t2_2] = var_a0;
                        var_t2_2 += 1;
                    }
                    if (var_v1 != 0x80) {
                        var_v1 *= 2;
                    } else {
                        var_v1 = 1;
                        var_v0_4 += 1;
                    }
                    var_a0 += 1;
                } while ((var_t2_2 + 1) != temp_s0_2);
            }
        }
    }
    return var_t5 == 0;
}

s16 *func_1510D0EC(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 sp4C;
    s32 sp48;
    s16 *sp44;
    s32 sp40;
    s16 *sp3C;
    s32 sp34;
    s16 **sp30;
    s32 sp28;
    s16 **temp_t6;
    s16 **temp_v1_2;
    s16 *temp_v0_2;
    s16 *temp_v0_3;
    s32 temp_t4;
    s32 temp_t8;
    s32 temp_v0;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1;
    s8 *temp_v0_4;
    u16 temp_v1;
    u8 *temp_v0_5;
    u8 temp_v1_3;

    if (arg0 < D_800D9F58) {
        D_800D9F58 = arg0;
    }
    if (D_800D9F5C < arg0) {
        D_800D9F5C = arg0;
    }
    if ((arg0 >= 0x1E52) || (temp_t8 = arg0 * 2, (arg0 < 0))) {
        return (s16 *)0x80000000;
    }
    temp_v1 = (*(s32 *)((char *)(D_80091D20) + temp_t8));
    sp34 = temp_t8;
    if (temp_v1 == 0) {
        temp_v1_2 = (arg0 * 4) + D_800B0E58;
        *temp_v1_2 = (s16 *)0x80000000;
        sp30 = temp_v1_2;
        goto block_22;
    }
    temp_t6 = (arg0 * 4) + D_800B0E58;
    sp30 = temp_t6;
    if (*temp_t6 == (s16 *)-1) {
        D_800DBDBA = 5;
        if (arg2 == 0x3F) {
            arg2 = 0x3E;
        }
        sp4C = (s32) temp_v1;
        temp_v0 = func_1510D374(arg0);
        var_t0 = temp_v0;
        if (temp_v0 & 1) {
            var_t0 = temp_v0 - 1;
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
        var_v0 = sp4C + var_v1;
        if (var_v0 & 1) {
            var_v0 += 1;
        }
        temp_t4 = (var_v0 + 0xF) & ~0xF;
        sp28 = temp_t4;
        sp40 = var_v1;
        sp48 = var_t0;
        temp_v0_2 = func_10003C6C(temp_t4, 1, 2, 1, 2);
        if (temp_v0_2 == NULL) {
            return (s16 *)0x80000000;
        }
        sp40 = var_v1;
        sp3C = temp_v0_2;
        func_10004514(sp48, temp_v0_2, sp28, 1);
        temp_v0_3 = func_10003C6C((s32) (*(s32 *)((char *)(D_800B87A0) + sp34)), 1, 1, 0, 2);
        sp44 = temp_v0_3;
        if (temp_v0_3 == NULL) {
            func_10004074(sp3C);
            return (s16 *)0x80000000;
        }
        func_10006240(sp3C + var_v1, sp44, D_8003809C);
        func_10004074(sp3C);
        *sp30 = sp44;
        *(&D_800D9F68 + arg0) = 0;
        goto block_22;
    }
block_22:
    if (arg1 != NULL) {
        *arg1 = (s32) (*(s32 *)((char *)(D_800B87A0) + sp34));
    }
    temp_v0_4 = arg0 + D_800BC448;
    if (*temp_v0_4 < arg2) {
        *temp_v0_4 = (s8) arg2;
    }
    temp_v0_5 = arg0 + &D_800D9F68;
    if (arg3 != 0) {
        temp_v1_3 = *temp_v0_5;
        if ((s32) temp_v1_3 < 0xFF) {
            *temp_v0_5 = temp_v1_3 + 1;
        }
    }
    return *sp30;
}

s32 func_1510D374(s32 arg0) {
    void * *var_v1;
    s32 temp_a3;
    s32 var_v0;
    u16 *var_a1;
    u16 temp_t4;
    u16 temp_t5;
    u16 temp_t8;
    void *temp_v1;
    void *var_a1_2;

    var_v1 = &D_1A37E0;
    var_v0 = 0;
    if (arg0 > 0) {
        temp_a3 = arg0 & 3;
        if (temp_a3 != 0) {
            var_a1 = (0 * 2) + D_80091D20;
            do {
                temp_t8 = *var_a1;
                var_v0 += 1;
                var_a1 += 2;
                var_v1 = (char *)(var_v1) + temp_t8;
            } while (temp_a3 != var_v0);
            if (var_v0 != arg0) {
                goto block_5;
            }
        } else {
block_5:
            var_a1_2 = (var_v0 * 2) + D_80091D20;
            do {
                temp_t4 = (*(s32 *)((char *)(var_a1_2) + 0x4));
                temp_t5 = (*(s32 *)((char *)(var_a1_2) + 0x6));
                temp_v1 = (char *)(var_v1) + (*(s32 *)((char *)(var_a1_2) + 0x0)) + (*(s32 *)((char *)(var_a1_2) + 0x2));
                var_a1_2 = (char *)(var_a1_2) + 8;
                var_v1 = (char *)(temp_v1) + temp_t4 + temp_t5;
            } while (var_a1_2 != ((arg0 * 2) + D_80091D20));
        }
    }
    return (s32) var_v1;
}

void func_1510D404(void) {
    s32 sp40;
    s16 **temp_s1_2;
    s16 *temp_a1;
    s16 *temp_s1_3;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_v0;
    s32 var_s0;
    s8 *var_s2;
    s8 temp_v0_2;

    temp_v0 = D_800D9F5C;
    if ((temp_v0 != -1) && ((D_800DBDBA != 0) || (D_800D9F60 == 0))) {
        temp_s5 = temp_v0;
        if (D_800DBDBA != 0) {
            D_800DBDBA -= 1;
        }
        temp_s1 = D_800D9F58;
        D_800D9F58 = 0xFFFF;
        D_800D9F5C = -1;
        if ((temp_s1 < 0) || (temp_v0 >= 0x1E53)) {
            D_8003C8E0 = 0x0C000046;
            func_150AD770(&D_800DBDBA);
        }
        D_800DBDBC = -1;
        var_s0 = temp_s1;
        if (temp_s5 >= temp_s1) {
            var_s2 = temp_s1 + D_800BC448;
            sp40 = temp_s5 + 1;
            do {
                temp_v0_2 = *var_s2;
                if (temp_v0_2 != 0) {
                    if (temp_v0_2 < 4) {
                        *var_s2 = temp_v0_2 - 1;
                        temp_s1_2 = D_800B0E58 + (var_s0 * 4);
                        if (*var_s2 == 0) {
                            D_800DBDBC = var_s0;
                            func_10004074(*temp_s1_2);
                            *temp_s1_2 = (s16 *)-1;
                        } else {
                            if (var_s0 < D_800D9F58) {
                                D_800D9F58 = var_s0;
                            }
                            if (D_800D9F5C < var_s0) {
                                goto block_22;
                            }
                        }
                    } else if (temp_v0_2 & 0x40) {
                        temp_a1 = (*(s32 *)((char *)(D_800B0E58) + (var_s0 * 4)));
                        temp_s1_3 = (*(s32 *)((char *)(temp_a1) + 0x0));
                        func_10006240(temp_s1_3 + (*(s32 *)((char *)(temp_a1) + 0x4)), temp_a1, D_8003809C);
                        func_10004074(temp_s1_3);
                        *var_s2 &= ~0x40;
                        if (var_s0 < D_800D9F58) {
                            D_800D9F58 = var_s0;
                        }
                        if (D_800D9F5C < var_s0) {
block_22:
                            D_800D9F5C = var_s0;
                        }
                    }
                }
                var_s0 += 1;
                var_s2 += 1;
            } while (sp40 != var_s0);
        }
        D_800DBDBC = -2;
    }
}

void func_1510D608(s32 arg0, s32 arg1) {
    s8 *temp_v0;
    s8 temp_v1;

    temp_v0 = arg0 + D_800BC448;
    temp_v1 = *temp_v0;
    if (temp_v1 != 0) {
        *temp_v0 = (temp_v1 & 0x40) | arg1;
    }
}

void func_1510D630(s16 *arg0) {
    s16 *var_s0;
    s16 temp_v0;

    temp_v0 = *arg0;
    var_s0 = arg0 + 2;
    if (temp_v0 > 0) {
        do {
            func_1510D694(*var_s0);
            var_s0 += 2;
        } while (((temp_v0 * 2) + arg0 + 2) != var_s0);
    }
    func_10004074(arg0, arg0);
}

void func_1510D694(s32 arg0) {
    u8 *temp_v0;
    u8 temp_t8;
    u8 temp_v1;

    temp_v0 = arg0 + &D_800D9F68;
    if ((*(s32 *)((char *)(D_800BC448) + arg0)) != 0) {
        temp_v1 = *temp_v0;
        temp_t8 = temp_v1 - 1;
        if (temp_v1 != 0) {
            *temp_v0 = temp_t8;
            if (!(temp_t8 & 0xFF)) {
                if (arg0 < D_800D9F58) {
                    D_800D9F58 = arg0;
                }
                if (D_800D9F5C < arg0) {
                    D_800D9F5C = arg0;
                }
                func_1510D608(3, 0);
            }
        }
    }
}

void func_1510D720(s32 arg0) {
    u8 *temp_v0;
    u8 temp_t8;
    u8 temp_v1;

    temp_v0 = arg0 + &D_800D9F68;
    if ((*(s32 *)((char *)(D_800BC448) + arg0)) != 0) {
        temp_v1 = *temp_v0;
        temp_t8 = temp_v1 - 1;
        if (temp_v1 != 0) {
            *temp_v0 = temp_t8;
            if (!(temp_t8 & 0xFF)) {
                if (arg0 < D_800D9F58) {
                    D_800D9F58 = arg0;
                }
                if (D_800D9F5C < arg0) {
                    D_800D9F5C = arg0;
                }
                func_1510D608(2, 0);
            }
        }
    }
}

void func_1510D7AC(s32 arg0) {
    s8 *sp20;
    s16 **sp1C;
    s16 **temp_v0_2;
    s8 *temp_a2;
    s8 temp_v1;
    u8 *temp_v0;
    u8 temp_a0;
    u8 temp_t8;

    temp_a2 = arg0 + D_800BC448;
    temp_v1 = *temp_a2;
    temp_v0 = arg0 + &D_800D9F68;
    if (temp_v1 != 0) {
        temp_a0 = *temp_v0;
        temp_t8 = temp_a0 - 1;
        if (temp_a0 != 0) {
            *temp_v0 = temp_t8;
            if (!(temp_t8 & 0xFF)) {
                if (temp_v1 & 0x40) {
                    sp20 = temp_a2;
                    func_10004074((*(s32 *)((*(s32 *)((char *)(D_800B0E58) + (arg0 * 4))))), (s16 *) arg0, temp_a2);
                }
                temp_v0_2 = (arg0 * 4) + D_800B0E58;
                sp1C = temp_v0_2;
                sp20 = temp_a2;
                func_10004074(*temp_v0_2, (s16 *) arg0, temp_a2);
                *temp_v0_2 = (s16 *)-1;
                *temp_a2 = 0;
            }
        }
    }
}

void func_1510D864(void) {
    D_800D9ED0 = 0;
}

void func_1510D874(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v1;

    if ((s32) D_800D9ED0 < 8) {
        temp_v1 = (D_800D9ED0 * 0x10) + &D_800D9ED8;
        (*(s32 *)((char *)(temp_v1) + 0x0)) = arg0;
        (*(s32 *)((char *)(temp_v1) + 0x4)) = arg1;
        (*(s32 *)((char *)(temp_v1) + 0x8)) = arg2;
        (*(s32 *)((char *)(temp_v1) + 0xC)) = arg3;
        D_800D9ED0 += 1;
        (*(s8 *)((char *)(temp_v1) + 0xD)) = (s8) arg4;
    }
}

void *func_1510D8C0(void *arg0, s32 arg1) {
    void * *var_a0;
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a2;

    var_a2 = arg0;
    var_a0 = &D_800D9ED8;
    var_v0 = 0;
    if ((s32) D_800D9ED0 > 0) {
        do {
            var_v0 += 1;
            if (arg1 == (*(s32 *)((char *)(var_a0) + 0x0))) {
                temp_v1 = var_a2;
                var_a2 = (char *)(var_a2) + 8;
                (*(s32 *)((char *)(temp_v1) + 0x0)) = (s32) ((((*(s32 *)((char *)(var_a0) + 0xC)) * 4) & 0xFFFF) | 0xDB060000);
                (*(s32 *)((char *)(temp_v1) + 0x4)) = (s32) (*(s32 *)((char *)(var_a0) + 0x4));
                if ((*(s32 *)((char *)(var_a0) + 0x8)) != 0) {
                    temp_v1_2 = var_a2;
                    var_a2 = (char *)(var_a2) + 8;
                    (*(s32 *)((char *)(temp_v1_2) + 0x0)) = (s32) ((((*(s32 *)((char *)(var_a0) + 0xD)) * 4) & 0xFFFF) | 0xDB060000);
                    (*(s32 *)((char *)(temp_v1_2) + 0x4)) = (s32) (*(s32 *)((char *)(var_a0) + 0x8));
                }
            }
            var_a0 = (char *)(var_a0) + 0x10;
        } while (var_v0 < (s32) D_800D9ED0);
    }
    return var_a2;
}
