/**
 * Auto-decompiled from asm/15F680.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 **allocate_memory();                  /* extern */
void * func_10004074();                            /* extern */
s32 *func_1502B6BC();       /* extern */
s32 func_15044380(); /* extern */
s32 func_15046C80();           /* extern */
u32 random_u32();                                /* extern */
void * func_1510CE60();              /* extern */
s32 func_1510D0EC();              /* extern */
void * func_1510D630();                   /* extern */
void * func_151424F4(); /* extern */
void * func_15142838(); /* extern */
void *func_15142B7C();            /* extern */
s32 func_15142C10();      /* extern */
void *func_151462C8(); /* extern */
s32 func_151464B8();                     /* extern */
s32 func_1514672C();                      /* extern */
s32 func_1515D440();                                /* extern */
s32 func_1515D480();                        /* extern */
s32 **func_15167A68();      /* extern */
void * func_15168A9C();        /* extern */
void * func_15168E54();                        /* extern */
void * func_151B9660();                               /* extern */
void * memcpy();                /* extern */
void func_151325C8();                     /* static */
s32 func_151336A8(); /* static */
void *func_15133EEC();
extern s32 D_80083740;
extern s32 D_800838C0;
extern s32 D_800898B0;
extern s32 D_80089914;
extern s32 D_80089934;
extern s32 D_80089970;
extern s32 D_80089974;
extern s32 D_8008997C;
extern s32 D_80089988;
extern s32 D_8008998C;
extern s32 D_800899A4;
extern s32 D_800899B0;
extern s32 D_800899D4;
extern s32 D_800899F8;
extern s32 D_80090B60;
extern s32 D_800A3860;
extern f32 D_800A3868;
extern f32 D_800A386C;
extern f32 D_800A3870;
extern s32 D_800A3880;
extern u8 D_800C3E90;
extern s32 D_800DC640;
s32 ** func_1513264C();

void func_151321D0(void *arg0) {
    u8 sp23;
    s16 temp_v1;
    s32 temp_lo;
    s32 temp_t7;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 var_a1;

    temp_t7 = (*(s32 *)((char *)(arg0) + 0x60)) & 0xFFDFFFFF;
    var_a1 = 0;
    (*(s32 *)((char *)(arg0) + 0x60)) = temp_t7;
    if ((temp_t7 & 0x10) && ((*(s32 *)((char *)(arg0) + 0x148)) & 0x18)) {
        sp23 = 0;
        var_a1 = sp23;
        if (((s32 (*)())((char *)(&D_80089988 + ((*(s32 *)((char *)(arg0) + 0x77)) * 4))))(arg0, 0) == 0) {
            goto block_6;
        }
    } else {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x71));
        if (temp_v0 != 0) {
            sp23 = 0;
            var_a1 = 0;
            if (((s32 (*)())((char *)(&D_800898B0 + (temp_v0 * 4))))(arg0, 0) == 0) {
block_6:
                var_a1 = 1;
            }
        }
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x72));
    if ((temp_v0_2 != 0) && (var_a1 == 0)) {
        sp23 = var_a1;
        if (((s32 (*)())((char *)(&D_80089914 + (temp_v0_2 * 4))))(arg0, var_a1) == 0) {
            var_a1 = 1;
        }
    }
    if (((*(s32 *)((char *)(arg0) + 0x60)) & 0x80) && (var_a1 == 0)) {
        (*(s16 *)((char *)(arg0) + 0x64)) = (s16) ((*(s16 *)((char *)(arg0) + 0x64)) - D_800BE9E4);
        if ((*(s32 *)((char *)(arg0) + 0x64)) < 0) {
            var_a1 = 1;
        }
    }
    if (((*(s32 *)((char *)(arg0) + 0x60)) & 0x2000) && (var_a1 == 0)) {
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x64));
        if (temp_v1 < (*(s32 *)((char *)(arg0) + 0x82))) {
            temp_lo = temp_v1 * (*(s32 *)((char *)(arg0) + 0x84));
            if (temp_lo < (s32) (*(s32 *)((char *)(arg0) + 0x70))) {
                (*(u8 *)((char *)(arg0) + 0x70)) = (u8) temp_lo;
            }
        }
    }
    if ((var_a1 == 0) && !((*(s32 *)((char *)(arg0) + 0x60)) & 0x80000)) {
        var_a1 = (func_1514672C((char *)(arg0) + 0x38, var_a1) == 0) & 0xFF;
    }
    if (var_a1 != 0) {
        temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x76));
        if (temp_v0_3 != 0) {
            ((s32 (*)())((char *)(&D_8008997C + (temp_v0_3 * 4))))(arg0, var_a1);
        }
        func_1516972C(arg0);
    }
}

void func_151323AC(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x100) {
        var_v0 = (*(s32 *)((char *)(arg0) + 0x68));
    }
    ((s32 (*)())((char *)(&D_800899B0 + (var_v0 * 4))))();
}

void func_151323F8(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x100) {
        var_v0 = (*(s32 *)((char *)(arg0) + 0x68));
    }
    ((s32 (*)())((char *)(&D_800899D4 + (var_v0 * 4))))();
}

void func_15132444(void *arg0) {
    s16 *temp_v0;
    s16 *temp_v0_2;
    s32 **temp_a0;
    s32 **temp_t8;
    s32 **temp_v1_2;
    u16 temp_v1;
    void *temp_v0_3;
    void *temp_v0_4;

    D_800DC63C -= 1;
    temp_v0 = D_800DC468 + ((*(s32 *)((char *)(arg0) + 0x66)) * 2);
    *temp_v0 -= 1;
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x66));
    temp_v0_2 = D_800DC468 + (temp_v1 * 2);
    if (*temp_v0_2 == 0) {
        if ((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x8C))) + 0xE)) != 0) {
            *temp_v0_2 = 1;
        } else {
            func_1510D630(*(&D_800DC640 + (temp_v1 * 4)), &D_800DC63C, D_800DC468);
            temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x8C));
            temp_v1_2 = (*(s32 *)((char *)(temp_v0_3) + 0x8));
            if (temp_v1_2 == NULL) {
                temp_t8 = (*(s32 *)((char *)(temp_v0_3) + 0x4));
                D_800DC460 = temp_t8;
                if (temp_t8 != NULL) {
                    (*(s32 *)((char *)(temp_t8) + 0x8)) = 0;
                } else {
                    D_800DC464 = NULL;
                }
            } else {
                (*(s32 *)((char *)(temp_v1_2) + 0x4)) = (s32 **) (*(s32 *)((char *)(temp_v0_3) + 0x4));
                temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x8C));
                temp_a0 = (*(s32 *)((char *)(temp_v0_4) + 0x4));
                if (temp_a0 != NULL) {
                    (*(s32 *)((char *)(temp_a0) + 0x8)) = (s32 **) (*(s32 *)((char *)(temp_v0_4) + 0x8));
                } else {
                    D_800DC464 = (*(s32 *)((char *)(temp_v0_4) + 0x8));
                }
            }
            func_100043B4((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x8C))) + 0x0)), 4);
            func_100043B4((*(s32 *)((char *)(arg0) + 0x8C)), 4);
        }
    }
    func_151325C8(arg0);
}

void func_15132570(void *arg0) {
    func_15132444(arg0);
    func_15169804(arg0);
}

void func_1513259C(void *arg0) {
    func_15132444(arg0);
    func_15169824(arg0);
}

void func_151325C8(void *arg0) {
    s32 var_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    if (D_80082FA0 >= 0) {
        do {
            temp_v0 = (*(s32 *)((char *)(var_s0) + 0x154));
            if (temp_v0 != NULL) {
                func_100043B4(temp_v0, 4);
            }
            var_s1 += 1;
            var_s0 = (char *)(var_s0) + 4;
        } while (D_80082FA0 >= var_s1);
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x164));
    if (temp_v0_2 != NULL) {
        func_100043B4(temp_v0_2, 4);
    }
}

s32 **func_1513264C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 **sp40;
    s32 sp3C;
    s32 sp34;
    s32 **sp2C;
    void * var_a0;
    void * var_a3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    s16 *var_t0;
    s16 var_t1;
    s32 **temp_v0;
    s32 **temp_v0_3;
    s32 **var_a3_2;
    s32 **var_v1;
    s32 **var_v1_2;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    u16 temp_a0;

    if (D_800DC63C >= 0x12D) {
        return NULL;
    }
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x50));
    var_a0 = 0x19;
    if (temp_v0_2 & 0x4000) {
        var_a0 = 0x48;
    }
    if (temp_v0_2 & 0x400000) {
        sp34 = 2;
    } else {
        sp34 = 1;
    }
    temp_v0 = func_15167A68(var_a0, arg6, arg4 + 0x170, 1, (s32) arg5, sp34);
    if (temp_v0 == NULL) {
        return NULL;
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0x56));
    var_t0 = (temp_a0 * 2) + D_800DC468;
    var_t1 = *var_t0;
    if (var_t1 == 0) {
        var_a3 = 1;
        if ((*(s32 *)((char *)(arg0) + 0x50)) & 0x400000) {
            var_a3 = 2;
        }
        temp_v0_3 = allocate_memory(0x10, 1, 2, var_a3);
        if (temp_v0_3 == NULL) {
            func_15168A9C(temp_v0);
            func_10004074(temp_v0);
            return NULL;
        }
        sp40 = temp_v0_3;
        var_a3_2 = temp_v0_3;
        if (func_151336A8((*(s32 *)((char *)(arg0) + 0x56)), temp_v0_3, temp_v0, temp_v0_3) != 0) {
            (*(s32 *)((char *)(var_a3_2) + 0x4)) = (s32 **) D_800DC460;
            if (D_800DC460 != NULL) {
                (*(s32 *)((char *)(D_800DC460) + 0x8)) = var_a3_2;
            } else {
                D_800DC464 = var_a3_2;
            }
            D_800DC460 = var_a3_2;
            (*(s32 *)((char *)(var_a3_2) + 0x8)) = 0;
            (*(u16 *)((char *)(var_a3_2) + 0xC)) = (u16) (*(u16 *)((char *)(arg0) + 0x56));
            if ((*(s32 *)((char *)(arg0) + 0x50)) & 0x100000) {
                if ((D_800BE9F0 == 0x3B) || (D_800BE9F0 == 6) || (D_800BE9F0 == 0x13) || (D_800BE616 != 0) || (D_800BE9F0 == 2)) {
                    goto block_26;
                }
                (*(s32 *)((char *)(var_a3_2) + 0xE)) = 1;
            } else {
block_26:
                (*(s32 *)((char *)(var_a3_2) + 0xE)) = 0;
            }
            var_t0 = ((*(s32 *)((char *)(arg0) + 0x56)) * 2) + D_800DC468;
            var_t1 = *var_t0;
            goto block_34;
        }
        sp40 = var_a3_2;
        func_15168A9C(temp_v0);
        func_10004074(temp_v0);
        func_10004074(sp40);
        return NULL;
    }
    var_a3_2 = D_800DC460;
    var_v0 = 0x64;
    if (temp_a0 != (*(s32 *)((char *)(var_a3_2) + 0xC))) {
loop_30:
        var_v0 -= 1;
        var_a3_2 = (*(s32 *)((char *)(var_a3_2) + 0x4));
        if (var_v0 > 0) {
            if (temp_a0 != (*(s32 *)((char *)(var_a3_2) + 0xC))) {
                goto loop_30;
            }
        }
    }
    if (var_v0 <= 0) {
        func_15168A9C(temp_v0, &D_800DC460, 2, var_a3_2);
        func_10004074(temp_v0);
        return NULL;
    }
block_34:
    *var_t0 = var_t1 + 1;
    (*(s32 *)((char *)(temp_v0) + 0x8C)) = var_a3_2;
    memcpy(temp_v0 + 0x10, arg0, 0x7C, var_a3_2);
    (*(s32 *)((char *)(temp_v0) + 0x149)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x134)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x138)) = 0.0f;
    (*(s32 *)((char *)(temp_v0) + 0x13C)) = 0.0f;
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x34));
    temp_f12 = (*(s32 *)((char *)(arg0) + 0x38));
    temp_f14 = (*(s32 *)((char *)(arg0) + 0x3C));
    (*(s32 *)((char *)(temp_v0) + 0x148)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x144)) = 1.0f;
    (*(s32 *)((char *)(temp_v0) + 0x140)) = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    if (arg3 != 0) {
        M2C_MEMCPY_ALIGNED(temp_v0 + 0x110, arg3, 0x24);
    } else {
        (*(s32 *)((char *)(temp_v0) + 0x130)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x12D)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x12C)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x128)) = 0;
        (*(f32 *)((char *)(temp_v0) + 0x110)) = (f32) D_800A3868;
    }
    var_a1 = 0;
    D_800DC63C += 1;
    (*(s32 *)((char *)(temp_v0) + 0x150)) = 0;
    (*(s32 *)((char *)(temp_v0) + 0x14C)) = arg1;
    var_v1 = temp_v0;
    (*(s32 *)((char *)(temp_v0) + 0x168)) = arg2;
    do {
        var_a1 += 1;
        var_v1 += 4;
        (*(s32 *)((char *)(var_v1) + 0x150)) = 0;
    } while (var_a1 < 4);
    (*(s32 *)((char *)(temp_v0) + 0x164)) = 0;
    if (arg1 != 0) {
        var_a1_2 = 0;
        var_v1_2 = temp_v0;
        if (D_80082FA0 >= 0) {
            do {
                sp2C = var_v1_2;
                sp3C = var_a1_2;
                (*(s32 *)((char *)(var_v1_2) + 0x154)) = func_1515D480(arg1, var_a1_2);
                var_a1_2 += 1;
                var_v1_2 += 4;
            } while (D_80082FA0 >= var_a1_2);
        }
        (*(s32 *)((char *)(temp_v0) + 0x164)) = func_1515D440();
    }
    (*(s32 *)((char *)(temp_v0) + 0x60)) = (s32) ((*(s32 *)((char *)(temp_v0) + 0x60)) & 0xFFDFFFFF);
    return temp_v0;
}

void func_15132A4C(s32 arg3, s32 arg4, s32 arg5) {
    func_1513264C(NULL, arg3, (s32) arg4, arg5, 0, 0, 0);
}

void func_15132A88(void *arg0) {
    s32 temp_a0;
    s32 temp_t7;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_t7 = (*(s32 *)((char *)(arg0) + 0x60)) & 0xFFDFFFFF;
    (*(s32 *)((char *)(arg0) + 0x60)) = temp_t7;
    if (!(temp_t7 & 0x20000) && (!(temp_t7 & 0x400) || (temp_a0 = (*(s32 *)((char *)(arg0) + 0x6C)), (temp_a0 == 0)) || (func_151464B8(temp_a0, arg0) == 0))) {
        temp_v0 = (*(s32 *)((char *)(arg0) + 0x60));
        if (temp_v0 & 0x80000) {
            (*(s32 *)((char *)(arg0) + 0x60)) = (s32) (temp_v0 | 0x200000);
            return;
        }
        temp_v0_2 = ((s32 (*)())((char *)(&D_8008998C + ((*(s32 *)((char *)(arg0) + 0x78)) * 4))))((char *)(arg0) + (D_800BE9C0 << 6) + 0x90, arg0);
        if (temp_v0_2 == -1) {
            func_1516972C(arg0, arg0);
            return;
        }
        if (temp_v0_2 == 0) {
            (*(s32 *)((char *)(arg0) + 0x60)) = (s32) ((*(s32 *)((char *)(arg0) + 0x60)) & 0xFFFBFFFF);
            return;
        }
        (*(s32 *)((char *)(arg0) + 0x60)) = (s32) ((*(s32 *)((char *)(arg0) + 0x60)) | 0x240000);
    }
}

void *func_15132B80(void *arg0, void *arg1, s32 arg2) {
    s8 sp6B;
    s32 temp_a0;
    s32 temp_s1_2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a3;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s8 temp_v0;
    void *temp_s1;
    void *var_s1;
    void *var_s1_2;

    temp_v1 = (*(s32 *)((char *)(arg1) + 0x60));
    if (!(temp_v1 & 0x200000)) {
        return arg0;
    }
    if (temp_v1 & 0x20000) {
        return arg0;
    }
    if (!(temp_v1 & 0x40000)) {
        return arg0;
    }
    sp6B = 1;
    if ((s32) (*(s32 *)((char *)(arg1) + 0x70)) < 0xFF) {
        (*(s32 *)((char *)(arg0) + 0x0)) = 0xDB060020;
        (*(s32 *)((char *)(arg0) + 0x4)) = &D_80083740;
        var_s1 = (char *)(arg0) + 8;
    } else {
        (*(s32 *)((char *)(arg0) + 0x0)) = 0xDB060020;
        (*(s32 *)((char *)(arg0) + 0x4)) = &D_800838C0;
        var_s1 = (char *)(arg0) + 8;
    }
    if ((*(s32 *)((char *)(arg1) + 0x60)) & 0x10000) {
        temp_v0 = (*(s32 *)((char *)(arg1) + 0x79));
        if (temp_v0 != -1) {
            var_s1 = ((s32 (*)())((char *)(&D_800899A4 + (temp_v0 * 4))))(var_s1, arg1, arg2);
        }
    }
    temp_v1_2 = (*(s32 *)((char *)(arg1) + 0x60));
    temp_s1_2 = func_15142C10(var_s1, 0, 0, 0, (s32) (*(s32 *)((char *)(arg1) + 0x70)), &sp6B);
    temp_a0 = temp_v1_2 & 0x800;
    temp_v0_2 = temp_v1_2 & 0x1000;
    if (temp_a0 != 0) {
        var_t0 = 0x20000;
    } else {
        var_t0 = 0;
    }
    var_v1 = 0;
    if (temp_v0_2 != 0) {
        var_v1 = 0x400000;
    }
    if (temp_a0 != 0) {
        var_a3 = 0;
    } else {
        var_a3 = 0x20000;
    }
    if (temp_v0_2 != 0) {
        var_v0 = 0;
    } else {
        var_v0 = 0x400000;
    }
    temp_v1_3 = (*(s32 *)((char *)(arg1) + 0x60));
    var_s1_2 = func_15142B7C(temp_s1_2, var_v1 | var_t0 | 5 | 0x200000, var_v0 | var_a3 | 0x600 | 0x10000 | 0x40000 | 0x80000, var_a3);
    if (temp_v1_3 & 0x800) {
        if (temp_v1_3 & 0x1000) {
            var_v0_2 = 1;
        } else {
            var_v0_2 = 0;
        }
        var_s1_2 = func_151462C8(var_s1_2, (char *)(arg1) + 0x14C, (*(s32 *)((char *)(arg1) + 0x7A)), (*(s32 *)((char *)(arg1) + 0x7C)), (s32) (*(s32 *)((char *)(arg1) + 0x80)), (s32) arg2, (char *)(arg1) + 0x38, var_v0_2, (*(s32 *)((char *)(arg1) + 0x128)));
    }
    (*(s32 *)((char *)(var_s1_2) + 0x0)) = 0xDA380003;
    temp_s1 = (char *)(var_s1_2) + 8;
    (*(s32 *)((char *)(var_s1_2) + 0x4)) = (void *) ((char *)(arg1) + (D_800BE9C0 << 6) + 0x90);
    (*(s32 *)((char *)(var_s1_2) + 0x8)) = 0xDE000000;
    (*(s32 *)((char *)(temp_s1) + 0x4)) = (s32) (*(s32 *)((*(s32 *)((*(s32 *)((char *)(arg1) + 0x8C))))));
    return (char *)(temp_s1) + 8;
}

s32 func_15132DDC(void *arg0) {
    s32 *sp374;
    f32 sp370;
    s32 sp36C;
    f32 sp368;
    void * sp1C4;
    s32 sp1C0;
    f32 sp1B8;
    f32 sp188;
    f32 sp184;
    s32 sp130;
    s16 sp11E;
    s16 sp11C;
    f32 sp60;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    s32 sp38;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f2;
    f32 temp_f2_2;
    u8 temp_t2;
    u8 temp_t4;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;

    f32 sp378;
    f32 sp37C;
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 7) {
        memcpy(&sp374, (char *)(arg0) + 0x38, 0xC);
    }
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 8) {
        (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) + ((*(f32 *)((char *)(arg0) + 0x5C)) * D_800BE9A4));
    }
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x20) {
        (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x44)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((*(f32 *)((char *)(arg0) + 0x48)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    }
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x40) {
        (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x58)) * D_800BE9A4));
    }
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 7) {
        sp368 = (*(s32 *)((char *)(arg0) + 0x38));
        sp36C = sp378;
        sp370 = (*(s32 *)((char *)(arg0) + 0x40));
        if (func_15046C80(&sp368, 0, (*(s32 *)((char *)(arg0) + 0x3C)) - (*(s32 *)((char *)(arg0) + 0x10)), (char *)(arg0) + 0x110) != 0) {
            temp_v0 = (*(s32 *)((char *)(arg0) + 0x12D));
            if ((temp_v0 == 1) || ((temp_v0 == 2) && ((*(s32 *)((char *)(arg0) + 0x12C)) & 1))) {
                temp_t4 = (*(s32 *)((char *)(arg0) + 0x148)) | 1;
                (*(s32 *)((char *)(arg0) + 0x148)) = temp_t4;
                if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x10) {
                    temp_f12 = (*(s32 *)((char *)(arg0) + 0x44));
                    temp_f2 = (*(s32 *)((char *)(arg0) + 0x48));
                    temp_f14 = (*(s32 *)((char *)(arg0) + 0x4C));
                    temp_f0 = sqrtf((temp_f12 * temp_f12) + (temp_f2 * temp_f2) + (temp_f14 * temp_f14));
                    if (temp_f0 > 1.0f) {
                        (*(u8 *)((char *)(arg0) + 0x148)) = (u8) (temp_t4 | 8);
                        (*(s32 *)((char *)(arg0) + 0x140)) = temp_f0;
                        (*(f32 *)((char *)(arg0) + 0x144)) = (f32) (1.0f / temp_f0);
                    }
                }
                temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x73));
                if ((temp_v0_2 != 0) && (((s32 (*)())((char *)(&D_80089934 + (temp_v0_2 * 4))))(arg0, sp374, sp378, sp37C, (*(s32 *)((char *)(arg0) + 0x110)), (char *)(arg0) + 0x114) == 0)) {
                    return 0;
                }
                if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x10) {
                    memcpy((char *)(arg0) + 0x134, (char *)(arg0) + 0x38, 0xC);
                }
                goto block_21;
            }
block_21:
            if ((*(s32 *)((char *)(arg0) + 0x12D)) == 3) {
                temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x74));
                (*(u8 *)((char *)(arg0) + 0x148)) = (u8) ((*(u8 *)((char *)(arg0) + 0x148)) | 2);
                if ((temp_v0_3 != 0) && (((s32 (*)())((char *)(&D_80089970 + (temp_v0_3 * 4))))(arg0, sp374, sp378, sp37C, (*(s32 *)((char *)(arg0) + 0x110))) == 0)) {
                    return 0;
                }
            }
            goto block_25;
        }
block_25:
        if ((*(s32 *)((char *)(arg0) + 0x60)) & 4) {
            sp38 = 4;
            sp4C = (*(s32 *)((char *)(arg0) + 0x38));
            sp50 = (*(s32 *)((char *)(arg0) + 0x3C));
            sp1C0 = 0;
            sp54 = (*(s32 *)((char *)(arg0) + 0x40));
            (*(s32 *)((char *)&(sp1C4) + 0x0)) = (s32) (*(s32 *)((char *)(arg0) + 0x114));
            (*(s32 *)((char *)&(sp1C4) + 0x4)) = (s32) (*(s32 *)((char *)(arg0) + 0x118));
            (*(s32 *)((char *)&(sp1C4) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x11C));
            (*(s32 *)((char *)&(sp1C4) + 0xC)) = (s32) (*(s32 *)((char *)(arg0) + 0x120));
            (*(u16 *)((char *)&(sp1C4) + 0x10)) = (u16) (*(u16 *)((char *)(arg0) + 0x124));
            sp60 = 1.0f;
            sp184 = 1.0f;
            sp188 = 1.0f;
            sp11C = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x10));
            sp11E = (s16) (s32) (*(s16 *)((char *)(arg0) + 0x10));
            if ((*(s32 *)((char *)(arg0) + 0x12C)) & 2) {
                sp1B8 = (*(s32 *)((char *)(arg0) + 0x110));
            } else {
                sp1B8 = D_800A386C;
            }
            sp130 = 0;
            if (func_15044380(sp374, sp378, sp37C, &sp38, 0, 0) != 0) {
                temp_t2 = (*(s32 *)((char *)(arg0) + 0x148)) | 4;
                (*(s32 *)((char *)(arg0) + 0x148)) = temp_t2;
                if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x10) {
                    temp_f12_2 = (*(s32 *)((char *)(arg0) + 0x44));
                    temp_f2_2 = (*(s32 *)((char *)(arg0) + 0x48));
                    temp_f14_2 = (*(s32 *)((char *)(arg0) + 0x4C));
                    temp_f0_2 = sqrtf((temp_f12_2 * temp_f12_2) + (temp_f2_2 * temp_f2_2) + (temp_f14_2 * temp_f14_2));
                    if (temp_f0_2 > 1.0f) {
                        (*(u8 *)((char *)(arg0) + 0x148)) = (u8) (temp_t2 | 0x10);
                        (*(s32 *)((char *)(arg0) + 0x140)) = temp_f0_2;
                        (*(f32 *)((char *)(arg0) + 0x144)) = (f32) (1.0f / temp_f0_2);
                        (*(s8 *)((char *)(arg0) + 0x14A)) = (s8) (s32) (func_150484A0(sp4C - (*(s8 *)((char *)(arg0) + 0x38)), sp54 - (*(s8 *)((char *)(arg0) + 0x40))) * D_800A3870);
                    }
                }
                temp_v0_4 = (*(s32 *)((char *)(arg0) + 0x75));
                if ((temp_v0_4 != 0) && (((s32 (*)())((char *)(&D_80089974 + (temp_v0_4 * 4))))(arg0, &sp38, sp374, sp378, sp37C) == 0)) {
                    return 0;
                }
                if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x10) {
                    memcpy((char *)(arg0) + 0x134, (char *)(arg0) + 0x38, 0xC);
                }
                goto block_38;
            }
            goto block_38;
        }
        goto block_38;
    }
block_38:
    return 1;
}

s32 func_151332DC(void *arg0) {
    f32 sp30;
    f32 sp2C;
    f32 sp24;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f2;
    s32 temp_v0;
    u8 temp_t3;
    void *temp_a1;

    (*(s32 *)((char *)(arg0) + 0x2C)) = 1.0f;
    (*(s32 *)((char *)(arg0) + 0x30)) = 1.0f;
    (*(s32 *)((char *)(arg0) + 0x34)) = 1.0f;
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x40) {
        (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
        (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x58)) * D_800BE9A4));
    }
    temp_a1 = (char *)(arg0) + 0x134;
    temp_t3 = (*(s32 *)((char *)(arg0) + 0x149)) + ((s32) (576.0f * (*(s32 *)((char *)(arg0) + 0x144))) * D_800BE9E4);
    temp_v0 = temp_t3 & 0xFF;
    (*(s32 *)((char *)(arg0) + 0x149)) = temp_t3;
    if (temp_v0 < 0x80) {
        temp_f14 = (1.0f - (*(s32 *)((char *)(arg0) + 0x14))) * (1.0f - (*(s32 *)((char *)(arg0) + 0x144))) * func_151423D8((temp_v0 - 0x40) & 0xFF);
        if ((*(s32 *)((char *)(arg0) + 0x148)) & 8) {
            temp_f12 = 1.0f + temp_f14;
            (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) * temp_f12);
            (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) * (1.0f - temp_f14));
            (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) * temp_f12);
            (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x138)) - (temp_f14 * (*(f32 *)((char *)(arg0) + 0x10))));
        }
        if ((*(s32 *)((char *)(arg0) + 0x148)) & 0x10) {
            temp_f12_2 = 1.0f + temp_f14;
            sp30 = temp_f14;
            sp24 = temp_f12_2;
            sp20 = 1.0f - temp_f14;
            sp2C = func_151423D8((u8) temp_f12_2);
            temp_f0 = func_151423D8((u8) (*(u8 *)((char *)(arg0) + 0x14A)));
            (*(f32 *)((char *)(arg0) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x2C)) * sp20);
            (*(f32 *)((char *)(arg0) + 0x30)) = (f32) ((*(f32 *)((char *)(arg0) + 0x30)) * temp_f12_2);
            temp_f2 = temp_f14 * (*(s32 *)((char *)(arg0) + 0x10));
            (*(f32 *)((char *)(arg0) + 0x34)) = (f32) ((*(f32 *)((char *)(arg0) + 0x34)) * sp20);
            (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x134)) - (temp_f2 * temp_f0));
            (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x13C)) + (temp_f2 * sp2C));
        }
    } else {
        memcpy((char *)(arg0) + 0x38, temp_a1, 0xC);
        (*(s32 *)((char *)(arg0) + 0x149)) = 0U;
        (*(u8 *)((char *)(arg0) + 0x148)) = (u8) ((*(u8 *)((char *)(arg0) + 0x148)) & 0xFFE7);
    }
    return 1;
}

s32 func_15133510(void *arg1) {
    func_151424F4((*(s32 *)((char *)(arg1) + 0x18)), (*(s32 *)((char *)(arg1) + 0x1C)), (*(s32 *)((char *)(arg1) + 0x20)), (*(s32 *)((char *)(arg1) + 0x24)), (*(s32 *)((char *)(arg1) + 0x28)), (*(s32 *)((char *)(arg1) + 0x2C)), (*(s32 *)((char *)(arg1) + 0x30)), (*(s32 *)((char *)(arg1) + 0x34)), (*(s32 *)((char *)(arg1) + 0x38)), (*(s32 *)((char *)(arg1) + 0x3C)), (*(s32 *)((char *)(arg1) + 0x40)));
    return 1;
}

void func_15133588(void *arg0, void *arg1, s32 arg2) {
    s32 sp18;
    void * (*temp_v1_2)(void *, void *, s32);
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a2;
    u8 var_v0;

    var_a2 = arg2 & 0xFF;
    temp_v0 = var_a2;
    if ((var_a2 == 0x1B) && ((*(s32 *)((char *)(arg0) + 0x66)) == 0x22)) {
        sp18 = temp_v0;
        arg2 = (u8) var_a2;
        func_151B9660(var_a2);
        var_a2 = (s32) arg2;
    }
    if (temp_v0 == 0x2D) {
        temp_v0_2 = (*(s32 *)((char *)(arg1) + 0x0));
        temp_v1 = (*(s32 *)((char *)(arg0) + 0x7C));
        if (temp_v0_2 == temp_v1) {
            (*(s32 *)((char *)(arg0) + 0x7C)) = (s32) (*(s32 *)((char *)(arg1) + 0x4));
            (*(u8 *)((char *)(arg0) + 0x80)) = (u8) (*(u8 *)((char *)(arg1) + 0x9));
        } else if ((*(s32 *)((char *)(arg1) + 0x4)) == temp_v1) {
            (*(s32 *)((char *)(arg0) + 0x7C)) = temp_v0_2;
            (*(u8 *)((char *)(arg0) + 0x80)) = (u8) (*(u8 *)((char *)(arg1) + 0x8));
        }
    } else if ((temp_v0 == 0) && (((*(u8 *)((char *)(arg1) + 0x0)) == (*(u8 *)((char *)(arg0) + 0x7C))) || ((*(u8 *)((char *)(arg0) + 0x80)) == (u8) (*(u8 *)((char *)(arg1) + 0x4))))) {
        (*(s32 *)((char *)(arg0) + 0x7C)) = 0;
        (*(s32 *)((char *)(arg0) + 0x80)) = 0U;
    }
    var_v0 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x60)) & 0x100) {
        var_v0 = (*(s32 *)((char *)(arg0) + 0x68));
    }
    temp_v1_2 = *(&D_800899F8 + (var_v0 * 4));
    if (temp_v1_2 != NULL) {
        temp_v1_2(arg0, arg1, var_a2);
    }
}

s32 func_151336A8(s32 arg0, s32 **arg1, s32 **arg2) {
    void * sp2C;
    void * sp28;
    s32 sp24;
    s32 *temp_v0;
    s32 *temp_v1;
    s32 temp_t7;

    temp_t7 = arg0 * 4;
    sp24 = temp_t7;
    temp_v0 = func_1502B6BC(&sp2C, 0, &sp28, 2, 9, *(&D_800A3880 + temp_t7));
    *arg1 = temp_v0;
    if (temp_v0 == NULL) {
        return 0;
    }
    func_1510CE60(**arg1, 0, 1, 0x3E, sp24 + &D_800DC640);
    temp_v1 = *arg1;
    func_15168E54(*temp_v1, temp_v1);
    return 1;
}

s32 func_15133760(void *arg1) {
    func_15142838((*(s32 *)((char *)(arg1) + 0x18)), (*(s32 *)((char *)(arg1) + 0x1C)), (*(s32 *)((char *)(arg1) + 0x20)), (*(s32 *)((char *)(arg1) + 0x24)), (*(s32 *)((char *)(arg1) + 0x28)), (*(s32 *)((char *)(arg1) + 0x38)), (*(s32 *)((char *)(arg1) + 0x3C)), (*(s32 *)((char *)(arg1) + 0x40)));
    return 1;
}

s32 func_151337C0(void *arg0) {
    f32 temp_f12;
    f32 temp_f2;

    temp_f12 = (*(s32 *)((char *)(arg0) + 0x5C));
    temp_f2 = (*(s32 *)((char *)(arg0) + 0x48));
    (*(f32 *)((char *)(arg0) + 0x38)) = (f32) ((*(f32 *)((char *)(arg0) + 0x38)) + ((*(f32 *)((char *)(arg0) + 0x44)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x3C)) + ((temp_f2 * D_800BE9A4) + (temp_f12 * D_800BE9A4 * D_800BE9A4 * 0.5f)));
    (*(f32 *)((char *)(arg0) + 0x40)) = (f32) ((*(f32 *)((char *)(arg0) + 0x40)) + ((*(f32 *)((char *)(arg0) + 0x4C)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) (temp_f2 + (temp_f12 * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x20)) = (f32) ((*(f32 *)((char *)(arg0) + 0x20)) + ((*(f32 *)((char *)(arg0) + 0x50)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x24)) = (f32) ((*(f32 *)((char *)(arg0) + 0x24)) + ((*(f32 *)((char *)(arg0) + 0x54)) * D_800BE9A4));
    (*(f32 *)((char *)(arg0) + 0x28)) = (f32) ((*(f32 *)((char *)(arg0) + 0x28)) + ((*(f32 *)((char *)(arg0) + 0x58)) * D_800BE9A4));
    return 1;
}

s8 func_15133894(void *arg0) {
    s8 sp4F;
    f32 sp40;
    s32 sp3C;
    f32 sp38;
    f32 sp34;
    s32 var_v1;
    void *temp_a0;

    f32 sp44;
    f32 sp48;
    sp4F = 1;
    (*(s32 *)((char *)&(sp40) + 0x0)) = (*(s32 *)((char *)(arg0) + 0x38));
    (*(f32 *)((char *)&(sp40) + 0x4)) = (f32) (*(f32 *)((char *)(arg0) + 0x3C));
    (*(s32 *)((char *)&(sp40) + 0x8)) = (s32) (*(s32 *)((char *)(arg0) + 0x40));
    func_151337C0(arg0);
    if (((*(s32 *)((char *)(arg0) + 0x60)) & 1) && ((*(s32 *)((char *)(arg0) + 0x73)) != 0) && ((*(s32 *)((char *)(arg0) + 0x3C)) < sp44)) {
        sp34 = (*(s32 *)((char *)(arg0) + 0x38));
        sp38 = (*(s32 *)((char *)(arg0) + 0x10)) + sp44;
        sp3C = (*(s32 *)((char *)(arg0) + 0x40));
        if (func_15046C80(&sp34, 0, (*(s32 *)((char *)(arg0) + 0x3C)) - (*(s32 *)((char *)(arg0) + 0x10)), (char *)(arg0) + 0x110) != 0) {
            temp_a0 = (*(s32 *)((char *)(arg0) + 0x130));
            var_v1 = 0;
            if ((temp_a0 != NULL) && (((*(s32 *)((char *)(temp_a0) + 0x4F)) & 0x60) == 0x40)) {
                var_v1 = 1;
            }
            if (var_v1 == 0) {
                sp4F = ((s32 (*)())((char *)(&D_80089934 + ((*(s32 *)((char *)(arg0) + 0x73)) * 4))))(arg0, sp40, sp44, sp48, (*(s32 *)((char *)(arg0) + 0x110)), (char *)(arg0) + 0x114);
            }
        }
    }
    return sp4F;
}

s32 func_151339D4(void *arg0, void * arg1, void * arg2, void * arg3, f32 arg4) {
    f32 temp_f0;

    temp_f0 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) + arg4);
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) * -temp_f0);
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(arg0) + 0x54)) * temp_f0);
    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * temp_f0);
    return 1;
}

s32 func_15133A50(void *arg0, void * arg1, void * arg2, void * arg3, f32 arg4) {
    (*(s32 *)((char *)(arg0) + 0x44)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x48)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x4C)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x50)) = 0.0f;
    (*(s32 *)((char *)(arg0) + 0x54)) = 0.0f;
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) + arg4);
    (*(s32 *)((char *)(arg0) + 0x58)) = 0.0f;
    return 1;
}

s32 func_15133A94(s32 **arg0, s32 **arg1) {
    f32 sp5C;
    f32 sp4C;
    f32 sp3C;
    f32 sp2C;
    s32 *sp20;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = (*(s32 *)((char *)(arg1) + 0x7C));
    if ((temp_v0 == NULL) || ((*(s32 *)((char *)(temp_v0) + 0x0)) == 0) || ((*(s32 *)((char *)(temp_v0) + 0x4)) == 0xFF) || ((*(s32 *)((char *)(arg1) + 0x80)) != (*(s32 *)((char *)(temp_v0) + 0x3B)))) {
        return -1;
    }
    temp_v1 = (*(s32 *)((char *)(temp_v0) + 0x1D4));
    if (temp_v1 == 0) {
        return 0;
    }
    if (((*(s32 *)((char *)(temp_v0) + 0x74)) & 0xF) == 0xF) {
        return 0;
    }
    if (D_800C3E90 != 0) {
        memcpy(arg0, temp_v1 + ((*(s32 *)((char *)(arg1) + 0x170)) << 6), 0x40, arg1);
    } else {
        memcpy(&sp20, temp_v1 + ((*(s32 *)((char *)(arg1) + 0x170)) << 6), 0x40, arg1);
        sp2C = 0.0f;
        sp3C = 0.0f;
        sp4C = 0.0f;
        sp5C = 1.0f;
        guMtxF2L(&sp20, arg0);
    }
    return 1;
}

s32 func_15133B98(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp_f18;
    f32 temp_f6;

    temp_f18 = (*(s32 *)((char *)(arg0) + 0x14));
    (*(f32 *)((char *)(arg0) + 0x48)) = (f32) ((*(f32 *)((char *)(arg0) + 0x48)) * -temp_f18);
    (*(f32 *)((char *)(arg0) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x10)) + arg4);
    temp_f6 = fabsf((*(s32 *)((char *)(arg0) + 0x48)));
    (*(f32 *)((char *)(arg0) + 0x44)) = (f32) ((*(f32 *)((char *)(arg0) + 0x44)) * temp_f18);
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) * temp_f18);
    (*(f32 *)((char *)(arg0) + 0x50)) = (f32) ((*(f32 *)((char *)(arg0) + 0x50)) * temp_f18);
    (*(f32 *)((char *)(arg0) + 0x54)) = (f32) ((*(f32 *)((char *)(arg0) + 0x54)) * temp_f18);
    (*(f32 *)((char *)(arg0) + 0x58)) = (f32) ((*(f32 *)((char *)(arg0) + 0x58)) * temp_f18);
    if (temp_f6 < 4.0f) {
        (*(s32 *)((char *)(arg0) + 0x44)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x60)) = (s32) ((*(s32 *)((char *)(arg0) + 0x60)) & ~0x69);
        (*(s32 *)((char *)(arg0) + 0x48)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x4C)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x50)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x54)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x58)) = 0.0f;
        (*(s32 *)((char *)(arg0) + 0x5C)) = 0.0f;
    }
    return 1;
}

s32 func_15133C58(void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    func_15133B98(arg1, arg2, arg3, arg4, arg5);
    if (random_u32() & 1) {
        func_10010F88((random_u32() % 9U) + 0x2DE, 0x2EE0, 0, 0, 0, (s32) arg1, (s32) arg2, (s32) arg3, 0x1F4, 0x3E8);
    }
    return 1;
}

s32 func_15133D20(void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    func_15133B98(arg1, arg2, arg3, arg4, arg5);
    if (random_u32() & 1) {
        func_10010F88((random_u32() % 10U) + 0x1B8, 0x5DC0, 0, 0, 0, (s32) arg1, (s32) arg2, (s32) arg3, 0x1F4, 0x3E8);
    }
    return 1;
}

void func_15133DE8(void *arg0, void *arg1, s32 arg2) {
    s32 temp_t6;

    temp_t6 = arg2 & 0xFF;
    if ((temp_t6 == 0) && (((*(s32 *)((char *)(arg1) + 0x0)) == (*(s32 *)((char *)(arg0) + 0x7C))) || ((*(s32 *)((char *)(arg1) + 0x4)) == (*(s32 *)((char *)(arg0) + 0x80))))) {
        func_1516972C((void *) temp_t6);
    }
}

void func_15133E3C(s32 arg0, s32 arg1) {
    void * sp18;

    (*(s32 *)((char *)&(sp18) + 0x0)) = (s32) (*(s32 *)((char *)&(D_800A3860) + 0x0));
    (*(s32 *)((char *)&(sp18) + 0x4)) = (s32) (*(s32 *)((char *)&(D_800A3860) + 0x4));
    func_15169260(&sp18, 2, arg0, arg1 & 0xFF);
}

void func_15133E84(void *arg1, void * arg2) {
    func_15133EEC((*(s32 *)((char *)(arg1) + 0x170)), (*(s32 *)((char *)(arg1) + 0x172)), (*(s32 *)((char *)(arg1) + 0x174)));
}

void func_15133EB8(void *arg1, void * arg2) {
    func_15133EEC((*(s32 *)((char *)(arg1) + 0x174)), (*(s32 *)((char *)(arg1) + 0x176)), (*(s32 *)((char *)(arg1) + 0x178)));
}

void *func_15133EEC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp3B;
    u8 sp3A;
    s32 sp30;
    s32 temp_t2;
    s32 temp_v0_2;
    s32 var_a0;
    void *temp_v0;
    void *temp_v1;
    void *var_s0;

    temp_v0 = (arg1 * 0xC) + &D_80090B60;
    sp3B = (*(s32 *)((char *)(temp_v0) + 0xA));
    sp3A = (*(s32 *)((char *)(temp_v0) + 0xB));
    temp_v0_2 = func_1510D0EC((*(s32 *)((*(s32 *)((char *)(temp_v0) + 0x0)))), &sp30, arg3, 0);
    (*(s32 *)((char *)(arg0) + 0x4)) = temp_v0_2;
    temp_t2 = arg2 * 4;
    (*(s32 *)((char *)(arg0) + 0x0)) = (s32) ((temp_t2 & 0xFFFF) | 0xDB060000);
    var_s0 = (char *)(arg0) + 8;
    temp_v1 = var_s0;
    if (sp3B == 2) {
        (*(s32 *)((char *)(arg0) + 0x8)) = (s32) (((temp_t2 + 4) & 0xFFFF) | 0xDB060000);
        var_s0 = (char *)(var_s0) + 8;
        if (sp3A == 1) {
            var_a0 = 0x200;
        } else {
            var_a0 = 0x20;
        }
        (*(s32 *)((char *)(temp_v1) + 0x4)) = (s32) ((temp_v0_2 + sp30) - var_a0);
    }
    return var_s0;
}

u16 func_15133FD8( s32 arg0, void *arg1, void * arg2) {
    s32 temp_at;
    s32 temp_t8;
    s32 var_s0;
    u16 var_s1;
    void *temp_v0;

    var_s1 = arg0;
    var_s0 = 0;
    if ((s32) (*(s32 *)((char *)(arg1) + 0x170)) > 0) {
        do {
            temp_v0 = (char *)(arg1) + 0x170 + (var_s0 * 8);
            temp_t8 = (var_s0 + 1) & 0xFF;
            temp_at = temp_t8 < (s32) (*(s32 *)((char *)(arg1) + 0x170));
            var_s0 = temp_t8;
            var_s1 = func_15133EEC(var_s1, (u8) (*(u8 *)((char *)(temp_v0) + 0x4)), (s32) (*(u8 *)((char *)(temp_v0) + 0x6)), (*(u8 *)((char *)(temp_v0) + 0x8)));
        } while (temp_at != 0);
    }
    return var_s1;
}
