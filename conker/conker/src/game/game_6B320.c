/**
 * Auto-decompiled from asm/6B320.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 allocate_memory();                  /* extern */
void * func_10004074();                               /* extern */
void * func_150499A0();                        /* extern */
void * func_150A7A48();               /* extern */
void * func_150A7DA0();              /* extern */
void * func_150AD8B0();                   /* extern */
u32 random_u32();                                /* extern */
void func_1510F800();                                 /* extern */
s32 func_1510F8D8();                /* extern */
void * memcpy();                            /* extern */
void func_1503DF0C();
s32 func_1503E1F4();              /* static */
void func_1503E3C4();
void func_1503E5F8();
void func_1503E82C();                       /* static */
void func_1503EA54();                       /* static */
extern s32 D_80084430;
extern s32 D_8008443C;
extern s32 D_80084448;
extern s32 D_80084454;
extern s32 D_80084460;
extern s32 D_8008446C;
extern s32 D_80098914;
extern f32 D_80098918;
extern f32 D_8009891C;
extern f32 D_80098920;
extern f32 D_80098924;
extern f32 D_80098928;
extern f32 D_8009892C;
extern u8 D_800C3E90;
extern s32 D_800C6664;
extern s32 D_800C6668;
extern s32 D_800C666C;
extern s32 D_800C666E;
extern s32 D_800CC364;
void func_1503EB78(void *arg0, f32 arg1, f32 arg2, s32 arg3);
void func_1503ECA0();

void func_1503DE70(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    if (arg2 != -1) {
        temp_v0 = *(&D_8008446C + (arg1 * 4)) + (arg2 * 8);
        func_1503DF0C((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812, (*(s32 *)((char *)(temp_v0) + 0x0)), (*(s32 *)((char *)(temp_v0) + 0x4)));
        return;
    }
    func_1503DF0C((s32) ((char *)(arg0) - (char *)(&gObjects)) / 812, -1, -1);
}

void func_1503DF0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = (arg0 * 0x10) + &D_800C6660;
    (*(s32 *)((char *)(temp_v0) + 0x4)) = (s32) ((*(s32 *)((char *)(temp_v0) + 0x4)) | arg2);
    (*(s32 *)((char *)(temp_v0) + 0x8)) = (s32) ((*(s32 *)((char *)(temp_v0) + 0x8)) | arg3);
    (*(s32 *)((char *)(temp_v0) + 0xE)) = arg1;
    (*(s32 *)((char *)(temp_v0) + 0xF)) = 2;
}

void func_1503DF48(s32 arg0) {
    f32 *temp_s0;
    s32 temp_a1;
    s32 temp_t8;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s8 *var_s2;
    u8 temp_s4;
    u8 var_v1;
    void *temp_s5;
    void *temp_v0;
    void *var_v1_2;
    void *var_v1_3;

    temp_s5 = (arg0 * 0x10) + &D_800C6660;
    var_v1 = (*(s32 *)((char *)(temp_s5) + 0xF));
    if ((var_v1 != 2) || (temp_v0 = (arg0 * 0x32C) + &gObjects, var_v1 = 3, (*(u8 *)((char *)(temp_v0) + 0x74)) = (u8) ((*(u8 *)((char *)(temp_v0) + 0x74)) | 0x80), ((*(u8 *)((char *)(temp_v0) + 0x1D4)) != 0))) {
        if (var_v1 == 3) {
            temp_s4 = *(&D_80098914 + (*(s32 *)((char *)(temp_s5) + 0xE)));
            if ((*(s32 *)((char *)(temp_s5) + 0x0)) == 0) {
                temp_v0_2 = allocate_memory(temp_s4 * 0x68, 1, 0, 0);
                var_s1 = 0;
                if (temp_v0_2 != 0) {
                    (*(s32 *)((char *)(temp_s5) + 0x0)) = temp_v0_2;
                    if ((s32) temp_s4 > 0) {
                        temp_a1 = temp_s4 & 3;
                        if (temp_a1 != 0) {
                            var_v1_2 = temp_v0_2 + (0 * 0x60);
                            do {
                                var_s1 += 1;
                                (*(s32 *)((char *)(var_v1_2) + 0x64)) = 0;
                                var_v1_2 = (char *)(var_v1_2) + 0x68;
                            } while (temp_a1 != var_s1);
                            if (var_s1 != temp_s4) {
                                goto block_10;
                            }
                        } else {
block_10:
                            var_v1_3 = temp_v0_2 + (var_s1 * 0x68);
                            do {
                                var_v1_3 = (char *)(var_v1_3) + 0x1A0;
                                (*(s32 *)((char *)(var_v1_3) - 0xD4)) = 0;
                                (*(s32 *)((char *)(var_v1_3) - 0x6C)) = 0;
                                (*(s32 *)((char *)(var_v1_3) - 0x4)) = 0;
                                (*(s32 *)((char *)(var_v1_3) - 0x13C)) = 0;
                            } while ((char *)(var_v1_3) != (char *)((temp_s4 * 0x68) + temp_v0_2));
                        }
                    }
                    goto block_12;
                }
            } else {
block_12:
                var_s1_2 = 0;
                temp_t8 = (*(s32 *)((char *)(temp_s5) + 0xE)) * 4;
                var_v0 = temp_t8;
                if ((s32) temp_s4 > 0) {
                    var_s2 = *(&D_80084454 + temp_t8);
                    do {
                        if (*var_s2 != -2) {
                            temp_s0 = (*(s32 *)((char *)(temp_s5) + 0x0)) + (var_s1_2 * 0x68);
                            if ((func_1503E1F4(var_s1_2, arg0) != 0) && ((*(s32 *)((char *)(temp_s0) + 0x64)) == 0)) {
                                func_1503E3C4(arg0, var_s1_2, 0, temp_s0, 0);
                                ((s32 (*)())((char *)(&D_80084430 + ((*(s32 *)((char *)(temp_s5) + 0xE)) * 4))))(temp_s0, arg0);
                                (*(s32 *)((char *)(temp_s0) + 0x64)) = 1U;
                            }
                        }
                        var_s1_2 += 1;
                        var_s2 += 1;
                    } while (var_s1_2 != temp_s4);
                    var_v0 = (*(s32 *)((char *)(temp_s5) + 0xE)) * 4;
                }
                ((s32 (*)())((char *)(&D_8008443C + var_v0)))(arg0);
                var_v1 = 1;
                (*(s32 *)((char *)(temp_s5) + 0xF)) = 1U;
                goto block_21;
            }
        } else {
block_21:
            if (var_v1 == 1) {
                ((s32 (*)())((char *)(&D_80084448 + ((*(s32 *)((char *)(temp_s5) + 0xE)) * 4))))(arg0);
                if ((*(s32 *)((char *)(temp_s5) + 0xF)) != 0) {
                    func_1503EA54(arg0);
                    func_1503E82C(arg0);
                }
            }
        }
    }
}

s32 func_1503E1F4(s32 arg0, s32 arg1) {
    if (arg0 < 0x20) {
        if (*(&D_800C6664 + (arg1 * 0x10)) & (1 << arg0)) {
            return 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    if (*(&D_800C6668 + (arg1 * 0x10)) & (1 << arg0)) {
        return 1;
    }
    return 0;
}

void func_1503E260(s32 arg0) {
    void *sp3C;
    s32 temp_v1_2;
    s32 var_s0;
    u8 *temp_v0;
    u8 *var_s1;
    u8 temp_s6;
    u8 temp_v1;
    void *temp_s7;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s7 = (arg0 * 0x10) + &D_800C6660;
    if ((*(s32 *)((char *)(temp_s7) + 0xF)) != 0) {
        temp_v1 = (*(s32 *)((char *)(temp_s7) + 0xE));
        temp_v0 = *(&D_80084460 + (temp_v1 * 4));
        if (temp_v0 != NULL) {
            temp_s6 = *(&D_80098914 + temp_v1);
            var_s0 = 0;
            var_s1 = temp_v0;
            if ((s32) temp_s6 > 0) {
                do {
                    if ((*var_s1 != 0xFF) && (func_1503E1F4(var_s0, arg0) != 0)) {
                        temp_v0_2 = &gObjects + (arg0 * 0x32C);
                        (*(s32 *)((char *)(temp_v0_2) + 0x94)) = (s32) ((*(s32 *)((char *)(temp_v0_2) + 0x94)) | (1 << *var_s1));
                    }
                    var_s0 += 1;
                    var_s1 += 1;
                } while (var_s0 != temp_s6);
            }
        }
        temp_v1_2 = (*(s32 *)((char *)(temp_s7) + 0x0));
        (*(s32 *)((char *)(temp_s7) + 0xF)) = 0U;
        temp_v0_3 = (arg0 * 0x32C) + &gObjects;
        if (temp_v1_2 != 0) {
            sp3C = temp_v0_3;
            func_10004074(temp_v1_2);
        }
        (*(s32 *)((char *)(temp_s7) + 0x0)) = 0;
        (*(u8 *)((char *)(temp_v0_3) + 0x74)) = (u8) ((*(u8 *)((char *)(temp_v0_3) + 0x74)) & 0xFF7F);
    }
}

void func_1503E3C4(s32 arg0, s32 arg1, s32 arg2, f32 *arg3, s32 arg4) {
    f32 spD0;
    f32 spC0;
    f32 spB0;
    f32 spA0;
    f32 sp94;
    f32 sp54;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 var_f2;
    s8 var_v0;
    void *temp_s1;

    temp_s1 = (arg0 * 0x32C) + &gObjects;
    bcopy((*(s32 *)((char *)(temp_s1) + 0x1D4)) + ((arg1 + arg2) << 6), &sp94, 0x40);
    if (arg4 != 0) {
        var_v0 = -1;
    } else {
        var_v0 = (*(s8 *)(*(&D_80084454 + (*(&D_800C666E + (arg0 * 0x10)) * 4)) + arg1));
    }
    if (var_v0 != -1) {
        func_150499A0((*(s32 *)((char *)(temp_s1) + 0x1D4)) + (var_v0 << 6), &sp54);
        spB0 = 0.0f;
        spA0 = 0.0f;
        spC0 = 0.0f;
        spD0 = 1.0f;
        func_150A7A48(&sp94, &sp54, &sp94);
    }
    func_1503E5F8(&sp94, arg3, arg3 + 4, arg3 + 8, arg3 + 0xC, arg3 + 0x10, arg3 + 0x14, arg3 + 0x18, arg3 + 0x1C, arg3 + 0x20);
    (*(f32 *)((char *)(arg3) + 0x28)) = (f32) (*(f32 *)((char *)(arg3) + 0x4));
    (*(f32 *)((char *)(arg3) + 0x2C)) = (f32) (*(f32 *)((char *)(arg3) + 0x8));
    (*(f32 *)((char *)(arg3) + 0x30)) = (f32) (*(f32 *)((char *)(arg3) + 0xC));
    temp_f0 = (*(s32 *)((char *)(arg3) + 0x0));
    (*(f32 *)((char *)(arg3) + 0x38)) = (f32) (*(f32 *)((char *)(arg3) + 0x14));
    (*(s32 *)((char *)(arg3) + 0x24)) = temp_f0;
    (*(f32 *)((char *)(arg3) + 0x34)) = (f32) (*(f32 *)((char *)(arg3) + 0x10));
    (*(f32 *)((char *)(arg3) + 0x3C)) = (f32) (*(f32 *)((char *)(arg3) + 0x18));
    (*(f32 *)((char *)(arg3) + 0x40)) = (f32) (*(f32 *)((char *)(arg3) + 0x1C));
    (*(f32 *)((char *)(arg3) + 0x44)) = (f32) (*(f32 *)((char *)(arg3) + 0x20));
    temp_f12 = temp_f0 - (*(s32 *)((char *)(temp_s1) + 0x14));
    temp_f14 = ((*(s32 *)((char *)(arg3) + 0x28)) - (*(s32 *)((char *)(temp_s1) + 0x18))) - 30.0f;
    temp_f16 = (*(s32 *)((char *)(arg3) + 0x2C)) - (*(s32 *)((char *)(temp_s1) + 0x1C));
    var_f2 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14) + (temp_f16 * temp_f16));
    if (var_f2 == 0.0f) {
        var_f2 = 1.0f;
    }
    temp_f2 = 1.0f / var_f2;
    (*(f32 *)((char *)(arg3) + 0x48)) = (f32) (temp_f12 * temp_f2);
    (*(f32 *)((char *)(arg3) + 0x4C)) = (f32) (temp_f14 * temp_f2);
    (*(f32 *)((char *)(arg3) + 0x50)) = (f32) (temp_f16 * temp_f2);
}

void func_1503E5F8(f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6, f32 *arg7, f32 *arg8, f32 *arg9) {
    f32 spB0;
    void * spA0;
    f32 sp90;
    f32 sp80;
    void * sp70;
    f32 *var_s0;
    f32 *var_s0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f6;
    f32 var_f20;
    f32 var_f2;
    f32 var_f2_2;

    f32 spB4;
    f32 spB8;
    f32 sp88;
    f32 sp98;
    f32 spA8;
    f32 sp84;
    f32 sp94;
    bcopy(&gObjects, &sp80, 0x40);
    *arg1 = spB0;
    *arg2 = spB4;
    *arg3 = spB8;
    temp_f20 = D_80098918;
    var_s0 = &sp80;
    do {
        temp_f0 = func_150AD930((u32) var_s0);
        var_f2 = temp_f0;
        if (temp_f0 == 0.0f) {
            var_f2 = temp_f20;
        }
        if ((char *)(var_s0) == (char *)(&sp80)) {
            *arg7 = var_f2;
        } else if ((char *)(var_s0) == (char *)(&sp90)) {
            *arg8 = var_f2;
        } else {
            *arg9 = var_f2;
        }
        func_15049148((u32) var_s0, 1.0f / var_f2, (u32) var_s0);
        var_s0 += 0x10;
    } while ((u32) var_s0 < (u32) &spB0);
    func_150AD8B0(&sp90, &spA0, &sp70);
    if (func_150AD900(&sp80, &sp70) < 0.0f) {
        var_s0_2 = &sp80;
        *arg7 = -*arg7;
        *arg8 = -*arg8;
        *arg9 = -*arg9;
        do {
            temp_f18 = -(*(s32 *)((char *)(var_s0_2) + 0x0));
            temp_f6 = -(*(s32 *)((char *)(var_s0_2) + 0x4));
            temp_f10 = -(*(s32 *)((char *)(var_s0_2) + 0x8));
            var_s0_2 += 0x10;
            (*(s32 *)((char *)(var_s0_2) - 0x10)) = temp_f18;
            (*(s32 *)((char *)(var_s0_2) - 0xC)) = temp_f6;
            (*(s32 *)((char *)(var_s0_2) - 0x8)) = temp_f10;
        } while ((char *)(var_s0_2) != (char *)(&spB0));
    }
    temp_f0_2 = func_150487E0(-sp88);
    if (func_150AD780(temp_f0_2) != 0.0f) {
        var_f20 = func_150484A0(sp98, spA8);
        var_f2_2 = func_150484A0(sp84, sp80);
    } else {
        var_f20 = func_150484A0(sp90, sp94);
        var_f2_2 = 0.0f;
    }
    *arg4 = var_f20 * D_8009891C;
    *arg5 = temp_f0_2 * D_8009891C;
    *arg6 = var_f2_2 * D_8009891C;
}

void func_1503E82C(s32 arg0) {
    s32 spB4;
    f32 sp64;
    f32 *temp_s1;
    s32 temp_s2;
    s32 var_s5;
    s8 *var_s7;
    s8 temp_s3;
    u8 temp_t1;
    u8 temp_v0;
    void *temp_fp;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s6;

    temp_fp = (arg0 * 0x32C) + &gObjects;
    if ((*(s32 *)((char *)(temp_fp) + 0x1D4)) != 0) {
        temp_s6 = (arg0 * 0x10) + &D_800C6660;
        temp_v0 = (*(s32 *)((char *)(temp_s6) + 0xE));
        temp_t1 = *(&D_80098914 + temp_v0);
        var_s5 = 0;
        spB4 = (s32) temp_t1;
        if ((s32) temp_t1 > 0) {
            var_s7 = *(&D_80084454 + (temp_v0 * 4));
            do {
                if (*var_s7 != -2) {
                    temp_s2 = var_s5 * 0x68;
                    temp_s0 = (*(s32 *)((char *)(temp_s6) + 0x0)) + temp_s2;
                    if ((*(s32 *)((char *)(temp_s0) + 0x64)) != 0) {
                        temp_s3 = (*(s8 *)(*(&D_80084454 + ((*(s32 *)((char *)(temp_s6) + 0xE)) * 4)) + var_s5));
                        temp_s1 = (*(s32 *)((char *)(temp_fp) + 0x1D4)) + (var_s5 << 6);
                        if (temp_s3 != -1) {
                            func_150A7DA0(&sp64, (*(s32 *)((char *)(temp_s0) + 0x24)), (*(s32 *)((char *)(temp_s0) + 0x28)), (*(s32 *)((char *)(temp_s0) + 0x2C)));
                            func_150A7A48(&sp64, (*(s32 *)((char *)(temp_fp) + 0x1D4)) + (temp_s3 << 6), &sp64);
                            temp_s0_2 = (*(s32 *)((char *)(temp_s6) + 0x0)) + temp_s2;
                            func_150A8050(temp_s1, (*(f32 *)((char *)(temp_s0_2) + 0x30)), (*(f32 *)((char *)(temp_s0_2) + 0x34)), (*(f32 *)((char *)(temp_s0_2) + 0x38)));
                            func_150A7A48(temp_s1, &sp64, temp_s1);
                            temp_s0_3 = (*(s32 *)((char *)(temp_s6) + 0x0)) + temp_s2;
                            func_150A7CB0(&sp64, (*(s32 *)((char *)(temp_s0_3) + 0x3C)), (*(s32 *)((char *)(temp_s0_3) + 0x40)), (*(s32 *)((char *)(temp_s0_3) + 0x44)));
                            func_150A7A48(&sp64, temp_s1, temp_s1);
                        } else {
                            func_150A8050(temp_s1, (*(f32 *)((char *)(temp_s0) + 0x30)), (*(f32 *)((char *)(temp_s0) + 0x34)), (*(f32 *)((char *)(temp_s0) + 0x38)));
                            temp_s0_4 = (*(s32 *)((char *)(temp_s6) + 0x0)) + temp_s2;
                            func_15043EC8(temp_s1, (*(s32 *)((char *)(temp_s0_4) + 0x3C)), (*(s32 *)((char *)(temp_s0_4) + 0x40)), (*(s32 *)((char *)(temp_s0_4) + 0x44)), (*(s32 *)((char *)(temp_s0_4) + 0x24)), (*(s32 *)((char *)(temp_s0_4) + 0x28)), (*(s32 *)((char *)(temp_s0_4) + 0x2C)));
                        }
                    }
                }
                var_s5 += 1;
                var_s7 += 1;
            } while (var_s5 != spB4);
        }
    }
}

void func_1503EA54(s32 arg0) {
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_a0;
    s32 var_a1;
    s32 var_a2;
    u8 temp_v0;
    void *temp_a3;
    void *temp_v1;

    temp_v1 = (arg0 * 0x10) + &D_800C6660;
    temp_v0 = *(&D_80098914 + (*(s32 *)((char *)(temp_v1) + 0xE)));
    var_a1 = 0;
    temp_f0 = (f32) D_800BE9E4;
    if ((s32) temp_v0 > 0) {
        var_a2 = 0;
        do {
            temp_a0 = (*(s32 *)((char *)(temp_v1) + 0x0));
            if ((*(s32 *)((char *)((temp_a0 + var_a2)) + 0x64)) != 0) {
                temp_a3 = temp_a0 + var_a2;
                if ((*(s8 *)(*(&D_80084454 + ((*(s32 *)((char *)(temp_v1) + 0xE)) * 4)) + var_a1)) == -1) {
                    temp_f2 = (*(s32 *)((char *)(temp_a3) + 0x4C));
                    (*(f32 *)((char *)(temp_a3) + 0x24)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x24)) + ((*(f32 *)((char *)(temp_a3) + 0x48)) * temp_f0));
                    (*(f32 *)((char *)(temp_a3) + 0x28)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x28)) + (temp_f2 * temp_f0));
                    (*(f32 *)((char *)(temp_a3) + 0x2C)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x2C)) + ((*(f32 *)((char *)(temp_a3) + 0x50)) * temp_f0));
                    (*(f32 *)((char *)(temp_a3) + 0x30)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x30)) + ((*(f32 *)((char *)(temp_a3) + 0x54)) * temp_f0));
                    (*(f32 *)((char *)(temp_a3) + 0x34)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x34)) + ((*(f32 *)((char *)(temp_a3) + 0x58)) * temp_f0));
                    (*(f32 *)((char *)(temp_a3) + 0x38)) = (f32) ((*(f32 *)((char *)(temp_a3) + 0x38)) + ((*(f32 *)((char *)(temp_a3) + 0x5C)) * temp_f0));
                    (*(f32 *)((char *)(temp_a3) + 0x4C)) = (f32) (temp_f2 + ((*(f32 *)((char *)(temp_a3) + 0x60)) * temp_f0));
                }
            }
            var_a1 += 1;
            var_a2 += 0x68;
        } while (var_a1 != temp_v0);
    }
}

void func_1503EB78(void *arg0, f32 arg1, f32 arg2, s32 arg3) {
    void * sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 *var_s1;
    f32 temp_f0;
    f32 temp_f18;
    f32 temp_f8;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    void *var_s0;
    void *var_s0_2;

    if (arg3 != 0) {
        var_s3 = 0x80;
        var_s4 = 0x7F;
    } else {
        var_s3 = 0xFF;
        var_s4 = 0;
    }
    temp_f0 = arg1 * D_80098920;
    var_s0 = arg0;
    var_s1 = &sp50;
    sp50 = temp_f0;
    sp58 = temp_f0;
    sp54 = arg2 * D_80098920;
    do {
        temp_f8 = *var_s1;
        temp_f18 = (*(s32 *)((char *)(var_s0) + 0x48));
        var_s1 += 4;
        var_s0 = (char *)(var_s0) + 4;
        (*(f32 *)((char *)(var_s0) + 0x44)) = (f32) (temp_f18 * (((f32) ((random_u32() & var_s3) + var_s4) * temp_f8) + 2.0f));
    } while ((u32) var_s1 < (u32) &sp5C);
    var_s2 = 0;
    var_s0_2 = arg0;
    do {
        var_s2 += 1;
        var_s0_2 = (char *)(var_s0_2) + 4;
        (*(f32 *)((char *)(var_s0_2) + 0x50)) = (f32) ((f32) ((random_u32() & 0xFF) - 0x80) * 0.03125f);
    } while (var_s2 != 3);
    (*(f32 *)((char *)(arg0) + 0x60)) = (f32) D_80098924;
}

void func_1503ECA0(s32 arg0) {
    f32 temp_f0;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f30;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    u8 temp_s6;
    void *temp_s0;
    void *temp_s3;

    func_1510F800(0);
    temp_s3 = (arg0 * 0x10) + &D_800C6660;
    var_s1 = 0;
    temp_s6 = *(&D_80098914 + (*(s32 *)((char *)(temp_s3) + 0xE)));
    var_s2 = 0;
    if ((s32) temp_s6 > 0) {
        temp_f30 = D_80098928;
        temp_f22 = D_8009892C;
        do {
            temp_v0 = (*(s32 *)((char *)(temp_s3) + 0x0));
            if ((*(s32 *)((char *)((temp_v0 + var_s2)) + 0x64)) != 0) {
                temp_s0 = temp_v0 + var_s2;
                if (((*(s8 *)(*(&D_80084454 + ((*(s32 *)((char *)(temp_s3) + 0xE)) * 4)) + var_s1)) == -1) && ((*(s32 *)((char *)(temp_s0) + 0x60)) != 0.0f)) {
                    temp_f0 = (f32) (func_1510F8D8((s32) (*(f32 *)((char *)(temp_s0) + 0x24)), (s32) (*(f32 *)((char *)(temp_s0) + 0x28)), (s32) (*(f32 *)((char *)(temp_s0) + 0x2C)), 0) + 5);
                    if ((*(s32 *)((char *)(temp_s0) + 0x28)) < temp_f0) {
                        temp_f2 = (*(s32 *)((char *)(temp_s0) + 0x4C));
                        (*(s32 *)((char *)(temp_s0) + 0x28)) = temp_f0;
                        if (temp_f2 < -4.0f) {
                            (*(f32 *)((char *)(temp_s0) + 0x48)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x48)) * temp_f22);
                            (*(f32 *)((char *)(temp_s0) + 0x4C)) = (f32) (temp_f2 * -0.5f);
                            (*(f32 *)((char *)(temp_s0) + 0x50)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x50)) * temp_f22);
                            (*(f32 *)((char *)(temp_s0) + 0x54)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x54)) * -1.0f);
                            (*(f32 *)((char *)(temp_s0) + 0x58)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x58)) * temp_f30);
                            (*(f32 *)((char *)(temp_s0) + 0x5C)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x5C)) * -1.0f);
                        } else {
                            (*(s32 *)((char *)(temp_s0) + 0x5C)) = 0.0f;
                            (*(s32 *)((char *)(temp_s0) + 0x58)) = 0.0f;
                            (*(s32 *)((char *)(temp_s0) + 0x54)) = 0.0f;
                            (*(s32 *)((char *)(temp_s0) + 0x60)) = 0.0f;
                            (*(s32 *)((char *)(temp_s0) + 0x50)) = 0.0f;
                            (*(s32 *)((char *)(temp_s0) + 0x4C)) = 0.0f;
                            (*(s32 *)((char *)(temp_s0) + 0x48)) = 0.0f;
                        }
                    }
                }
            }
            var_s1 += 1;
            var_s2 += 0x68;
        } while (var_s1 != temp_s6);
    }
}

void func_1503EEB8(void) {

}

void func_1503EEC0(s32 arg0) {
    s16 temp_v0;
    void *temp_v1;

    func_1503ECA0(arg0);
    temp_v1 = (arg0 * 0x10) + &D_800C6660;
    temp_v0 = (*(s32 *)((char *)(temp_v1) + 0xC)) - D_800BE9E4;
    (*(s32 *)((char *)(temp_v1) + 0xC)) = temp_v0;
    if (temp_v0 <= 0) {
        func_15060F28((arg0 * 0x32C) + &gObjects, 1, arg0);
    }
}

s32 func_1503EF4C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a3;
    s32 temp_v0;
    void *temp_v1;

    temp_v1 = *(&D_8008446C + (arg0 * 4)) + (arg1 * 8);
    temp_a3 = (*(s32 *)((char *)(temp_v1) + 0x0));
    if (((temp_a3 == 0) || (temp_a3 & *(&D_800C6664 + (arg2 * 0x10)))) && ((temp_v0 = (*(s32 *)((char *)(temp_v1) + 0x4)), (temp_v0 == 0)) || (temp_v0 & *(&D_800C6668 + (arg2 * 0x10))))) {
        return 1;
    }
    return 0;
}

void func_1503EFC4(s32 arg0) {
    s32 var_s0;
    s32 var_s1;
    u8 temp_s3;
    void *temp_s2;
    void *temp_t3;

    temp_s2 = (arg0 * 0x10) + &D_800C6660;
    (*(s32 *)((char *)(temp_s2) + 0xC)) = 0x78;
    temp_s3 = *(&D_80098914 + (*(s32 *)((char *)(temp_s2) + 0xE)));
    var_s0 = 0;
    var_s1 = 0;
    if ((s32) temp_s3 > 0) {
        do {
            var_s0 += 1;
            temp_t3 = (*(s32 *)((char *)(temp_s2) + 0x0)) + var_s1;
            var_s1 += 0x68;
            (*(f32 *)((char *)(temp_t3) + 0x4C)) = (f32) ((random_u32() % 20U) - 5);
        } while (var_s0 != temp_s3);
    }
}

void func_1503F078(void * arg1) {
    func_1503EB78(0x40000000, 2.0f, 0.0f, 0);
}

void func_1503F0AC(void * arg1) {
    func_1503EB78(0x3F800000, 2.0f, 1e-45f, 0);
}

void func_1503F0D8(void * arg1) {
    func_1503EB78(0x4003D70A, 3.0f, 1e-45f, 0);
}

void func_1503F108(s32 arg0) {
    void *temp_v0;

    temp_v0 = (arg0 * 0x10) + &D_800C6660;
    (*(s32 *)((char *)(temp_v0) + 0xC)) = 0x8C;
    *(&D_800CC364 + (arg0 * 0x32C)) = 6;
    (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0) + 0x0))) + 0x1EC)) = 10.0f;
}

void func_1503F16C(s32 arg0) {
    s32 temp_t1;
    s32 temp_t7;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    *(&D_800C666C + (arg0 * 0x10)) = 0x12C;
    if (func_1503EF4C(2, 0, arg0) != 0) {
        temp_v0 = (arg0 * 0x32C) + &gObjects;
        temp_t1 = (*(s32 *)((char *)(temp_v0) + 0x94)) | 0x40;
        (*(s32 *)((char *)(temp_v0) + 0x94)) = temp_t1;
        (*(s32 *)((char *)(temp_v0) + 0x94)) = (s32) (temp_t1 & ~0x200);
    }
    if (func_1503EF4C(2, 1, arg0) != 0) {
        temp_v0_2 = (arg0 * 0x32C) + &gObjects;
        temp_t7 = (*(s32 *)((char *)(temp_v0_2) + 0x94)) | 0x80;
        (*(s32 *)((char *)(temp_v0_2) + 0x94)) = temp_t7;
        (*(s32 *)((char *)(temp_v0_2) + 0x94)) = (s32) (temp_t7 & ~0x100);
    }
    if (func_1503EF4C(2, 2, arg0) != 0) {
        temp_v0_3 = (arg0 * 0x32C) + &gObjects;
        (*(s32 *)((char *)(temp_v0_3) + 0x94)) = (s32) ((*(s32 *)((char *)(temp_v0_3) + 0x94)) & ~0x400);
    }
}

void func_1503F2B0(s32 arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    func_1503ECA0(arg0);
    temp_v0 = (arg0 * 0x10) + &D_800C6660;
    (*(s16 *)((char *)(temp_v0) + 0xC)) = (s16) ((*(s16 *)((char *)(temp_v0) + 0xC)) - D_800BE9E4);
    if ((*(s32 *)((char *)(temp_v0) + 0xC)) <= 0) {
        func_1503E260(arg0);
        if (func_1503EF4C(2, 0, arg0) != 0) {
            temp_v0_2 = (arg0 * 0x32C) + &gObjects;
            (*(s32 *)((char *)(temp_v0_2) + 0x94)) = (s32) ((*(s32 *)((char *)(temp_v0_2) + 0x94)) | 8);
        }
        if (func_1503EF4C(2, 1, arg0) != 0) {
            temp_v0_3 = (arg0 * 0x32C) + &gObjects;
            (*(s32 *)((char *)(temp_v0_3) + 0x94)) = (s32) ((*(s32 *)((char *)(temp_v0_3) + 0x94)) | 4);
        }
        if (func_1503EF4C(2, 2, arg0) != 0) {
            temp_v0_4 = (arg0 * 0x32C) + &gObjects;
            (*(s32 *)((char *)(temp_v0_4) + 0x94)) = (s32) ((*(s32 *)((char *)(temp_v0_4) + 0x94)) | 2);
        }
    }
}

void func_1503F404(s32 arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6, f32 *arg7, f32 *arg8, s32 arg9) {
    f32 sp30;

    if (D_800C3E90 != 0) {
        guMtxL2F(&sp30, arg0);
    } else {
        memcpy(&sp30, arg0, 0x40);
    }
    func_1503E5F8(&sp30, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
