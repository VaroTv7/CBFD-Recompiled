/**
 * Auto-decompiled from asm/6A3D0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 allocate_memory();                  /* extern */
void * func_10004074();                             /* extern */
s32 func_150028BC();                             /* extern */
s32 **func_1502B5C8();                 /* extern */
u16 *func_1502B6BC();         /* extern */
s32 func_15084044();                     /* extern */
void * func_1510CE60();                 /* extern */
s32 func_1510D0EC();                    /* extern */
void * func_1510D7AC();                     /* extern */
void func_1503D368();
void func_1503D438();
s32 func_1503D660();
s32 func_1503D774();                /* static */
s32 func_1503D804();                        /* static */
void func_1503D984();                       /* static */
s32 func_1503DC3C();                        /* static */
void func_1503DD1C();                       /* static */
extern s32 D_80084410;
extern u8 D_80098888;
extern s32 D_800C4020;
extern s32 D_800C4310;
extern s32 D_800C4488;
extern s32 D_800C4778;
extern s32 D_800C48F0;
extern s32 D_800C4BE0;
extern s32 D_800C4ED0;
extern s32 D_800C5048;
extern s32 D_800C5338;
extern s32 D_800C5628;
extern s32 D_800C57A0;
extern s32 D_800C5918;

s32 func_1503CF20(s32 arg0, void * arg1, void *arg2, s32 arg3, s32 arg4) {
    void * sp6C;
    u32 sp68;
    s32 sp5C;
    u16 **sp58;
    s32 sp4C;
    s32 *temp_s4;
    s32 temp_t4;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s6;
    u16 **temp_s0;
    u16 **temp_s0_2;
    u16 **temp_v1;
    u16 *temp_a0_2;
    u16 *temp_s5;
    u16 *temp_v0_2;
    u16 *temp_v0_4;
    u16 *temp_v0_5;
    u16 *temp_v0_6;
    u32 *temp_s3;
    u32 *temp_v1_2;
    u32 temp_a0;
    u32 temp_t2;
    u32 temp_t4_2;

    if (arg0 == 0xFF) {
        return 0;
    }
    temp_v0 = arg0 * 4;
    if (arg0 >= 0xBB) {
        return 0;
    }
    temp_v1 = temp_v0 + &D_800D19A0;
    var_s6 = 0;
    if (*temp_v1 != NULL) {
        return 0;
    }
    sp5C = temp_v0;
    sp58 = temp_v1;
    temp_v0_2 = func_1502B6BC(&sp6C, 7, 0, 2, 1, arg0);
    if (temp_v0_2 == NULL) {
        return 1;
    }
    *sp58 = temp_v0_2 + 0x38;
    temp_v1_2 = sp5C + &D_800C4020;
    *temp_v1_2 = (*(s32 *)((char *)(temp_v0_2) + 0x0));
    temp_s3 = sp5C + &D_800C4488;
    *temp_s3 = (*(s32 *)((char *)(temp_v0_2) + 0x8));
    temp_s4 = sp5C + &D_800C48F0;
    *temp_s4 = (*(s32 *)((char *)(temp_v0_2) + 0x28));
    *(&D_800C4BE0 + sp5C) = (*(s32 *)((char *)(temp_v0_2) + 0x10));
    *(&D_800C5338 + sp5C) = (*(s32 *)((char *)(temp_v0_2) + 0x18));
    *(&D_800C5048 + sp5C) = (*(s32 *)((char *)(temp_v0_2) + 0x20));
    temp_t4 = arg0 * 2;
    *(&D_800C4310 + temp_t4) = (s16) ((u32) (*(s16 *)((char *)(temp_v0_2) + 0x4)) >> 2);
    temp_a0 = *temp_v1_2;
    if (temp_a0 != 0) {
        sp68 = temp_a0;
    } else {
        sp68 = *temp_s3;
    }
    *(&D_800C57A0 + temp_t4) = (s16) ((u32) (((char *)(sp68) - (char *)(temp_v0_2)) - 0x38) >> 4);
    temp_s5 = temp_t4 + &D_800C4778;
    sp4C = temp_t4;
    temp_t4_2 = (u32) (*(u32 *)((char *)(temp_v0_2) + 0xC)) >> 2;
    *temp_s5 = (u16) temp_t4_2;
    var_s1 = 0;
    if ((temp_t4_2 & 0xFFFF) > 0) {
        var_s0 = 0;
        sp4C = temp_t4;
        do {
            func_1503D438(*temp_s3 + (var_s1 * 4), temp_v0_2);
            func_1503D368((*(s32 *)((char *)(*temp_s3) + var_s0)), temp_v0_2);
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < (s32) *temp_s5);
        var_s1 = 0;
    }
    var_s0_2 = 0;
    temp_t2 = (u32) (*(u32 *)((char *)(temp_v0_2) + 0x2C)) >> 2;
    if (temp_t2 != 0) {
        sp68 = temp_t2;
        do {
            func_1503D438(*temp_s4 + (var_s1 * 4), temp_v0_2);
            func_1503D368((*(s32 *)((char *)(*temp_s4) + var_s0_2)), temp_v0_2);
            var_s1 += 1;
            var_s0_2 += 4;
        } while ((u32) var_s1 < sp68);
    }
    *(&D_800C5628 + sp4C) = (s16) ((u32) (*(s16 *)((char *)(temp_v0_2) + 0x1C)) / 12U);
    *(&D_800C4ED0 + sp4C) = (s16) ((u32) (*(s16 *)((char *)(temp_v0_2) + 0x14)) >> 4);
    if (arg3 != 0) {
        temp_v0_3 = func_1503DC3C(arg0);
        var_s6 = temp_v0_3;
        if (temp_v0_3 == 0) {
            var_s1_2 = 0;
            var_s0_3 = 0;
            if ((s32) *temp_s5 > 0) {
                do {
                    func_1510CE60((*(s32 *)((char *)(*temp_s3) + var_s0_3)), 0, 0, 0x3E, 0);
                    var_s1_2 += 1;
                    var_s0_3 += 4;
                } while (var_s1_2 < (s32) *temp_s5);
            }
        }
    }
    if (var_s6 == 0) {
        func_1503D984(arg0);
        var_s6 |= func_1503D804(arg0);
    }
    if ((var_s6 == 0) && (((arg2 != NULL) && ((*(s32 *)((char *)(arg2) + 0x18)) & 0x4000)) || (arg4 & 1)) && (func_150028BC(arg0) != 0)) {
        var_s6 |= 8;
    }
    if (var_s6 == 0) {
        var_s6 |= func_1503D774(arg0, 0);
        if (var_s6 == 0) {
            var_s6 |= func_1503D660(arg0, 0);
        }
    }
    if (var_s6 != 0) {
        temp_a0_2 = (*(s32 *)((char *)(D_800C6360) + sp5C));
        if (temp_a0_2 != NULL) {
            func_10004074(temp_a0_2);
        }
        func_1503DD1C(arg0);
        temp_s0 = sp5C + D_800C5C08;
        temp_v0_4 = *temp_s0;
        if (temp_v0_4 != NULL) {
            func_10004074(temp_v0_4);
            *temp_s0 = NULL;
        }
        temp_s0_2 = sp5C + D_800C6070;
        temp_v0_5 = *temp_s0_2;
        if (temp_v0_5 != NULL) {
            func_10004074(temp_v0_5);
            *temp_s0_2 = NULL;
        }
        temp_v0_6 = *sp58;
        if (temp_v0_6 != NULL) {
            func_10004074(temp_v0_6 - 0x38);
            *sp58 = NULL;
        }
    }
    return var_s6;
}

void func_1503D368(s8 *arg0, u16 *arg1) {
    s32 var_s0;
    s8 *var_v0;
    s8 var_v1;

    if (arg0 != NULL) {
        var_s0 = 0;
        var_v0 = arg0;
        if (*arg0 != -0x21) {
            var_v1 = *arg0;
            do {
                if (var_v1 != -0x24) {
                    if (var_v1 == 1) {
                        func_1503D438(var_v0 + 4, arg1);
                    }
                } else if ((*(s32 *)((char *)(var_v0) + 0x3)) == 0xE) {
                    func_1503D438(var_v0 + 4, arg1);
                }
                var_s0 += 1;
                var_v0 = (var_s0 * 8) + arg0;
                var_v1 = *var_v0;
            } while (var_v1 != -0x21);
        }
    }
}

void func_1503D438(s32 *arg0, u16 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if ((temp_v0 != 0) && !(temp_v0 & 0x0F000000)) {
        *arg0 = temp_v0 + arg1;
    }
}

void func_1503D45C(s32 *arg0, s32 **arg1) {
    s32 *var_a0;
    s32 temp_t6;
    s32 var_v0;

    var_a0 = arg0;
    var_v0 = *var_a0;
    if (var_v0 != 0) {
        do {
            temp_t6 = var_v0 + arg1;
            var_v0 = (*(s32 *)((char *)(var_a0) + 0x8));
            (*(s32 *)((char *)(var_a0) + 0x0)) = temp_t6;
            var_a0 += 8;
        } while (var_v0 != 0);
    }
}

void func_1503D484(u16 *arg0, s32 arg1) {
    u16 *temp_s1;
    u16 *var_s0;
    u16 temp_t8;

    var_s0 = arg0;
    temp_s1 = var_s0;
    if (*var_s0 != 0x3E7) {
        do {
            if ((*(s32 *)((char *)(var_s0) + 0x4)) != 0) {
                func_1503D438(var_s0 + 4, temp_s1);
            }
            temp_t8 = (*(s32 *)((char *)(var_s0) + 0x8));
            var_s0 += 8;
        } while (temp_t8 != 0x3E7);
    }
    (*(s16 *)((char *)(D_800C5A90) + (arg1 * 2))) = (s16) ((s32) (var_s0 - temp_s1) >> 3);
}

void func_1503D510( s32 arg0) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 *temp_t3;
    u8 *temp_a3;
    u8 *var_a1;
    u8 *var_t0;
    u8 *var_v1_2;
    u8 temp_a0;

    var_a1 = &D_80098888;
    var_v0 = 0;
loop_1:
    temp_a0 = *var_a1;
    var_v1 = 0;
    if ((s32) temp_a0 > 0) {
        temp_a3 = *(&D_80084410 + (var_v0 * 4));
        var_t0 = temp_a3;
loop_3:
        var_v1 += 1;
        if (arg0 == *var_t0) {
            var_v0_2 = 0;
            if ((s32) temp_a0 > 0) {
                var_v1_2 = temp_a3;
                do {
                    var_v0_2 += 1;
                    (*(s32 *)((char *)(D_800D1588) + (*var_v1_2 * 4))) = (*(s32 *)((arg0 * 4) + (char *)(D_800D1588)));
                    temp_t3 = D_800C5A90 + (*var_v1_2 * 2);
                    var_v1_2 += 1;
                    *temp_t3 = (*(s32 *)((arg0 * 2) + (char *)(D_800C5A90)));
                } while (var_v0_2 < (s32) temp_a0);
            }
        } else {
            var_t0 += 1;
            if (var_v1 >= (s32) temp_a0) {
                goto block_9;
            }
            goto loop_3;
        }
    } else {
block_9:
        var_v0 += 1;
        var_a1 += 1;
        if (var_v0 == 5) {
            return;
        }
        goto loop_1;
    }
}

u8 func_1503D5F0( s32 arg0) {
    s32 var_v0;
    s32 var_v1;
    u8 *temp_a3;
    u8 *var_a1;
    u8 *var_t0;
    u8 temp_a0;

    var_a1 = &D_80098888;
    var_v0 = 0;
loop_1:
    temp_a0 = *var_a1;
    var_v1 = 0;
    if ((s32) temp_a0 > 0) {
        temp_a3 = *(&D_80084410 + (var_v0 * 4));
        var_t0 = temp_a3;
loop_3:
        var_v1 += 1;
        if (arg0 == *var_t0) {
            return *temp_a3;
        }
        var_t0 += 1;
        if (var_v1 >= (s32) temp_a0) {
            goto block_6;
        }
        goto loop_3;
    }
block_6:
    var_v0 += 1;
    var_a1 += 1;
    if (var_v0 == 5) {
        return arg0;
    }
    goto loop_1;
}

s32 func_1503D660( s32 arg0, void * arg1) {
    void * sp34;
    s32 ***sp28;
    s32 ***temp_v1;
    s32 **temp_a0_3;
    s32 **temp_v0;
    s32 **temp_v0_2;
    s32 **temp_v0_3;
    void *temp_a0;
    void *temp_a0_2;

    temp_v1 = (arg0 * 4) + D_800D1588;
    if (*temp_v1 != NULL) {
        goto block_11;
    }
    sp28 = temp_v1;
    temp_v0 = func_1502B5C8(&sp34, 2, 0xF, func_1503D5F0(arg0));
    if (temp_v0 == NULL) {
        *sp28 = NULL;
        (*(s32 *)((char *)(D_800C5A90) + (arg0 * 2))) = 0;
        func_1503D510(arg0);
        return 4;
    }
    *sp28 = temp_v0;
    if (*temp_v0 != NULL) {
        *temp_v0 += (s32)(temp_v0);
        temp_v0_2 = *sp28;
        func_1503D45C((*(s32 *)((char *)(temp_v0_2) + 0x0)), temp_v0_2 + 0x10);
    }
    temp_v0_3 = *sp28;
    temp_a0 = (*(s32 *)((char *)(temp_v0_3) + 0x4));
    if (temp_a0 != NULL) {
        (*(s32 *)((char *)(temp_v0_3) + 0x4)) = (void *) ((char *)(temp_v0_3) + (s32)(temp_a0));
    }
    temp_a0_2 = (*(s32 *)((char *)((*sp28)) + 0x8));
    if (temp_a0_2 != NULL) {
        (*(s32 *)((char *)((*sp28)) + 0x8)) = (void *) ((char *)(*sp28) + (s32)(temp_a0_2));
    }
    temp_a0_3 = *sp28 + 0x10;
    *sp28 = temp_a0_3;
    func_1503D484((u16 *) temp_a0_3, (s32) arg0);
    func_1503D510(arg0);
block_11:
    return 0;
}

s32 func_1503D774(s32 arg0, void * arg1) {
    void * sp2C;
    u16 **sp24;
    u16 **temp_v1;
    u16 *temp_v0;

    temp_v1 = (arg0 * 4) + &D_800D1C90;
    if (*temp_v1 != NULL) {
        return 0;
    }
    sp24 = temp_v1;
    temp_v0 = func_1502B6BC(&sp2C, 2, 0, 2, 0x11, arg0);
    if (temp_v0 == NULL) {
        *sp24 = NULL;
        return 2;
    }
    *sp24 = temp_v0;
    *sp24 = *temp_v0;
    return 0;
}

s32 func_1503D804(s32 arg0) {
    s32 sp34;
    s32 sp2C;
    s32 *sp18;
    s16 temp_t6;
    s16 temp_t9;
    s32 *temp_t1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_t0;
    s32 var_t2;
    s32 var_v1;
    void *var_v0;
    void *var_v0_2;
    void *var_v1_2;
    void *var_v1_3;

    var_v1 = -1;
    if (arg0 == 0x24) {
        var_t0 = 0x5E;
        var_v1 = 0;
    } else {
        var_t0 = 0;
    }
    temp_v0 = arg0 * 4;
    if (var_t0 == 0) {
        goto block_18;
    }
    temp_t1 = temp_v0 + D_800C6360;
    if (*temp_t1 != 0) {
        goto block_18;
    }
    var_t2 = *(&D_800D19A0 + temp_v0);
    if (var_v1 != -1) {
        var_t2 += (*(s32 *)(*(&D_800C4020 + temp_v0) + (var_v1 * 4))) * 0x10;
    }
    sp34 = var_t0;
    sp18 = temp_t1;
    sp2C = var_t2;
    temp_v0_2 = allocate_memory(var_t0 * 4, 1, 0, 2);
    *temp_t1 = temp_v0_2;
    if (temp_v0_2 == 0) {
        return 1;
    }
    temp_a3 = *temp_t1;
    var_a0 = 0;
    if (var_t0 > 0) {
        temp_a2 = var_t0 & 3;
        if (temp_a2 != 0) {
            var_v1_2 = var_t2 + (0 * 0x10);
            var_v0 = temp_a3 + (0 * 4);
            do {
                var_a0 += 1;
                var_v0 = (char *)(var_v0) + 4;
                (*(s16 *)((char *)(var_v0) - 0x4)) = (s16) (*(s16 *)((char *)(var_v1_2) + 0x8));
                temp_t9 = (*(s32 *)((char *)(var_v1_2) + 0xA));
                var_v1_2 = (char *)(var_v1_2) + 0x10;
                (*(s32 *)((char *)(var_v0) - 0x2)) = temp_t9;
            } while (temp_a2 != var_a0);
            if (var_a0 != var_t0) {
                goto block_16;
            }
        } else {
block_16:
            var_v1_3 = var_t2 + (var_a0 * 0x10);
            var_v0_2 = temp_a3 + (var_a0 * 4);
            do {
                var_a0 += 4;
                var_v0_2 = (char *)(var_v0_2) + 0x10;
                (*(s16 *)((char *)(var_v0_2) - 0x10)) = (s16) (*(s16 *)((char *)(var_v1_3) + 0x8));
                temp_t6 = (*(s32 *)((char *)(var_v1_3) + 0xA));
                var_v1_3 = (char *)(var_v1_3) + 0x40;
                (*(s32 *)((char *)(var_v0_2) - 0xE)) = temp_t6;
                (*(s16 *)((char *)(var_v0_2) - 0xC)) = (s16) (*(s16 *)((char *)(var_v1_3) - 0x28));
                (*(s16 *)((char *)(var_v0_2) - 0xA)) = (s16) (*(s16 *)((char *)(var_v1_3) - 0x26));
                (*(s16 *)((char *)(var_v0_2) - 0x8)) = (s16) (*(s16 *)((char *)(var_v1_3) - 0x18));
                (*(s16 *)((char *)(var_v0_2) - 0x6)) = (s16) (*(s16 *)((char *)(var_v1_3) - 0x16));
                (*(s16 *)((char *)(var_v0_2) - 0x4)) = (s16) (*(s16 *)((char *)(var_v1_3) - 0x8));
                (*(s16 *)((char *)(var_v0_2) - 0x2)) = (s16) (*(s16 *)((char *)(var_v1_3) - 0x6));
            } while (var_a0 != var_t0);
        }
    }
block_18:
    return 0;
}

void func_1503D984(s32 arg0) {
    s16 var_v0;
    s32 var_a1;
    s8 var_t0;
    u32 **var_a2;
    u32 *temp_v1;
    u32 *var_a3;
    u32 temp_t0;

    var_v0 = 0;
    var_a2 = *(&D_800C4488 + (arg0 * 4));
    var_a1 = 0;
    do {
        temp_v1 = *var_a2;
        var_a1 += 4;
        var_a3 = temp_v1;
        var_t0 = (s8) ((u32) *temp_v1 >> 0x18);
        if (var_t0 != -0x21) {
            do {
                if (var_t0 == 5) {
                    var_v0 += 1;
                } else if (var_t0 == 6) {
                    var_v0 += 2;
                } else if ((var_t0 >> 4) == 1) {
                    var_v0 += 4;
                }
                temp_t0 = (*(s32 *)((char *)(var_a3) + 0x8));
                var_a3 += 8;
                var_t0 = (s8) (temp_t0 >> 0x18);
            } while (var_t0 != -0x21);
        }
        var_a2 += 4;
    } while (var_a1 != 4);
    *(&D_800C5918 + (arg0 * 2)) = var_v0;
}

u8 func_1503DA3C(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    u8 var_v1;
    void *temp_v1;

    temp_v0 = *(&D_800D19A0 + (arg0 * 4));
    temp_v1 = temp_v0 - 0x38;
    if (temp_v0 == 0) {
        return 0xFFU;
    }
    if ((u32) (*(u32 *)((char *)(temp_v1) + 0x34)) < (u32) (arg1 + 1)) {
        return 0xFFU;
    }
    temp_v0_2 = (*(s32 *)((char *)(temp_v1) + 0x30));
    var_v1 = 0xFF;
    if (temp_v0_2 != 0) {
        var_v1 = (*(s32 *)((char *)(temp_v0_2) + arg1));
    }
    return var_v1;
}

s32 func_1503DA9C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp3C;
    s32 sp34;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    u16 *temp_s2;
    void *temp_s0;

    temp_v1 = arg1 * 4;
    temp_s0 = (*(s32 *)((char *)(arg0) + 0x144));
    if (*(&D_800D19A0 + temp_v1) == 0) {
        sp3C = func_1503CF20(arg1, 0, temp_s0, arg3, (s32) (*(s32 *)((char *)(arg0) + 0xAC)));
    } else {
        sp3C = 0;
        if ((((temp_s0 != NULL) && ((*(s32 *)((char *)(temp_s0) + 0x18)) & 0x4000)) || ((*(s32 *)((char *)(arg0) + 0xAC)) & 1)) && ((*(s32 *)((char *)(D_800C5C08) + temp_v1)) == 0)) {
            sp34 = temp_v1;
            func_150028BC(arg1);
        }
        if (arg3 != 0) {
            temp_s1 = arg1 * 2;
            if ((*(&D_800C5628 + temp_s1) != 0) && ((u32) (*(s32 *)(*(&D_800C5338 + temp_v1))) < 0x10000000U)) {
                sp34 = temp_v1;
                temp_s2 = temp_s1 + &D_800C4778;
                sp3C = func_1503DC3C(arg1);
                var_s0 = 0;
                if ((s32) *temp_s2 > 0) {
                    var_s1 = 0;
                    do {
                        func_1510CE60((*(s32 *)(*(temp_v1 + &D_800C4488) + var_s1)), 0, 0, 0x3E, 0);
                        var_s0 += 1;
                        var_s1 += 4;
                    } while (var_s0 < (s32) *temp_s2);
                }
            }
        }
    }
    if (sp3C == 0) {
        sp3C = func_15084044(arg0, arg2);
    }
    return sp3C;
}

s32 func_1503DC3C(s32 arg0) {
    s32 *temp_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    u16 *temp_s6;
    void **temp_s2;
    void *var_s0;

    temp_s6 = (arg0 * 2) + &D_800C5628;
    var_s4 = 0;
    var_s3 = 0;
    if ((s32) *temp_s6 > 0) {
        temp_s2 = (arg0 * 4) + &D_800C5338;
        var_s0 = *temp_s2;
        var_s1 = 0;
        do {
            (*(s32 *)(*(char *)(temp_s2) + var_s1)) = func_1510D0EC((*(s32 *)((char *)(var_s0) + 0x4)), 0, 0x3E, 1);
            temp_s0 = *(char *)(temp_s2) + var_s1;
            if (*temp_s0 == 0x80000000) {
                var_s4 |= 0x10;
            }
            var_s3 += 1;
            var_s1 += 0xC;
            var_s0 = temp_s0 + 0xC;
        } while (var_s3 < (s32) *temp_s6);
    }
    return var_s4;
}

void func_1503DD1C(s32 arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    u16 *temp_s3;
    void *temp_v0;

    temp_s3 = (arg0 * 2) + &D_800C5628;
    var_s0 = 0;
    if ((s32) *temp_s3 > 0) {
        var_s1 = 0;
        do {
            temp_v0 = (*(s32 *)((arg0 * 4) + (char *)(D_800C5338))) + var_s1;
            temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x0));
            if (temp_v1 != 0x80000000) {
                temp_a1 = (*(s32 *)((char *)(temp_v0) + 0x4));
                if (temp_v1 != temp_a1) {
                    func_1510D7AC(temp_a1, temp_a1, *temp_s3);
                }
            }
            var_s0 += 1;
            var_s1 += 0xC;
        } while (var_s0 < (s32) *temp_s3);
    }
}
