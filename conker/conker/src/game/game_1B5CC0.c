/**
 * Auto-decompiled from asm/1B5CC0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *allocate_memory();                /* extern */
void * func_10004074();                            /* extern */
s32 func_1502C974();           /* extern */
s32 func_1502DB20();                              /* extern */
void * func_1503DA9C();               /* extern */
s32 func_150849CC();                   /* extern */
s32 func_151137D4(); /* extern */
void func_15188A58();        /* static */
extern u16 **D_80089240;
extern s32 D_80089250;
extern s32 D_80089470;
extern s32 D_8008D580;
extern s32 D_8008D588;
extern s32 D_8008D590;
extern u16 D_800DBEE8;
extern s32 D_800DF7C0;
extern s8 D_800DF7C4;
extern void *D_800DF7CC;

void func_15188810(void *arg0, s32 arg1, s32 arg2) {
    s32 sp20;
    s32 temp_t0;
    s32 temp_v0_2;
    void *temp_v0;
    void *temp_v0_3;
    void *var_s0;

    var_s0 = D_800DF7C8;
    if (var_s0 != NULL) {
loop_1:
        if ((char *)(arg0) == (char *)(*(s32 *)((char *)(var_s0) + 0x10))) {
            if ((*(s32 *)((char *)(var_s0) + 0x6)) < arg1) {
                (*(s16 *)((char *)(var_s0) + 0x6)) = (s16) arg1;
            }
            (*(s8 *)((char *)(var_s0) + 0x4)) = (s8) arg2;
            return;
        }
        var_s0 = (*(s32 *)((char *)(var_s0) + 0xC));
        if (var_s0 == NULL) {
            goto block_6;
        }
        goto loop_1;
    }
block_6:
    temp_v0 = allocate_memory(0x18, 1, 0, 0);
    if (temp_v0 != NULL) {
        temp_v0_2 = func_1502DB20((*(s32 *)((char *)(arg0) + 0x4)));
        if (temp_v0_2 == 0) {
            func_10004074(temp_v0);
            return;
        }
        temp_t0 = temp_v0_2 * 0x180;
        sp20 = temp_t0;
        temp_v0_3 = allocate_memory(temp_t0, 1, 1, 1);
        if (temp_v0_3 == NULL) {
            func_10004074(temp_v0);
            return;
        }
        (*(s32 *)((char *)(temp_v0) + 0x0)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x1)) = 3;
        (*(s32 *)((char *)(temp_v0) + 0x2)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x3)) = 0x14;
        (*(s8 *)((char *)(temp_v0) + 0x4)) = (s8) arg2;
        (*(s32 *)((char *)(temp_v0) + 0x8)) = temp_v0_3;
        (*(s32 *)((char *)(temp_v0) + 0x10)) = arg0;
        (*(s32 *)((char *)(temp_v0) + 0x14)) = 0;
        (*(s16 *)((char *)(temp_v0) + 0x6)) = (s16) arg1;
        bzero(temp_v0_3, sp20);
        func_15188A58(temp_v0, D_800DF7C8);
    }
}

void func_1518894C(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    var_s0 = D_800DF7CC;
    if (var_s0 != NULL) {
loop_1:
        if (arg0 == (*(s32 *)((char *)(var_s0) + 0x10))) {
            if ((*(s32 *)((char *)(var_s0) + 0x6)) < arg1) {
                (*(s16 *)((char *)(var_s0) + 0x6)) = (s16) arg1;
            }
            (*(s8 *)((char *)(var_s0) + 0x4)) = (s8) arg2;
            return;
        }
        var_s0 = (*(s32 *)((char *)(var_s0) + 0xC));
        if (var_s0 == NULL) {
            goto block_6;
        }
        goto loop_1;
    }
block_6:
    temp_v0 = allocate_memory(0x14, 1, 0, 0);
    if (temp_v0 != NULL) {
        temp_v0_2 = allocate_memory(0x180, 1, 1, 0);
        if (temp_v0_2 == NULL) {
            func_10004074(temp_v0);
            return;
        }
        (*(s32 *)((char *)(temp_v0) + 0x0)) = 1;
        (*(s32 *)((char *)(temp_v0) + 0x1)) = 3;
        (*(s32 *)((char *)(temp_v0) + 0x2)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x3)) = 0x14;
        (*(s8 *)((char *)(temp_v0) + 0x4)) = (s8) arg2;
        (*(s32 *)((char *)(temp_v0) + 0x8)) = temp_v0_2;
        (*(s32 *)((char *)(temp_v0) + 0x10)) = arg0;
        (*(s16 *)((char *)(temp_v0) + 0x6)) = (s16) arg1;
        bzero(temp_v0_2, 0x180);
        func_15188A58(temp_v0, &D_800DF7CC);
    }
}

void func_15188A58(void *arg0, void **arg1) {
    void *temp_v0;
    void *var_a1;
    void *var_v1;

    (*(s32 *)((char *)(arg0) + 0xC)) = 0;
    temp_v0 = *arg1;
    if (temp_v0 != NULL) {
        var_a1 = (*(s32 *)((char *)(temp_v0) + 0xC));
        var_v1 = temp_v0;
        if (var_a1 != NULL) {
            do {
                var_v1 = var_a1;
                var_a1 = (*(s32 *)((char *)(var_a1) + 0xC));
            } while (var_a1 != NULL);
        }
        (*(s32 *)((char *)(var_v1) + 0xC)) = arg0;
        return;
    }
    *arg1 = arg0;
}

void func_15188A9C(s32 arg0) {
    void *var_v0;

    var_v0 = D_800DF7C8;
    if (var_v0 != NULL) {
        do {
            if (arg0 == (*(s32 *)((char *)(var_v0) + 0x10))) {
                (*(s32 *)((char *)(var_v0) + 0x6)) = 0;
            }
            var_v0 = (*(s32 *)((char *)(var_v0) + 0xC));
        } while (var_v0 != NULL);
    }
}

void func_15188AD0(s32 arg0) {
    void *temp_s0;
    void *var_s1;
    void *var_s2;

    var_s1 = D_800DF7C8;
    var_s2 = NULL;
    if (var_s1 != NULL) {
        do {
            temp_s0 = (*(s32 *)((char *)(var_s1) + 0xC));
            if (arg0 == (*(s32 *)((char *)(var_s1) + 0x10))) {
                if (var_s2 == NULL) {
                    D_800DF7C8[0] = temp_s0;
                } else {
                    (*(s32 *)((char *)(var_s2) + 0xC)) = temp_s0;
                }
                func_100043B4((*(s32 *)((char *)(var_s1) + 0x8)), 2);
                func_10004074(var_s1);
            } else {
                var_s2 = var_s1;
            }
            var_s1 = temp_s0;
        } while (temp_s0 != NULL);
    }
}

void func_15188B74(s32 arg0) {
    s16 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_v0_2;
    void **temp_s4;
    void *temp_s1;
    void *var_s0;
    void *var_s2;

    temp_s4 = &(D_800DF7C8)[arg0];
    var_s0 = *temp_s4;
    var_s2 = NULL;
    if (var_s0 != NULL) {
        do {
            temp_v0 = (*(s32 *)((char *)(var_s0) + 0x6));
            temp_s1 = (*(s32 *)((char *)(var_s0) + 0xC));
            if (temp_v0 != 0) {
                (*(s16 *)((char *)(var_s0) + 0x6)) = (s16) (temp_v0 - D_800BE9E4);
            }
            if ((*(s32 *)((char *)(var_s0) + 0x6)) < 0) {
                (*(s32 *)((char *)(var_s0) + 0x6)) = 0;
            }
            ((s32 (*)())((char *)(&D_8008D580 + ((*(s32 *)((char *)(var_s0) + 0x0)) * 4))))(var_s0);
            temp_v0_2 = (*(s32 *)((char *)(var_s0) + 0x3));
            if ((*(s32 *)((char *)(var_s0) + 0x6)) != 0) {
                if (temp_v0_2 != 0xFF) {
                    var_v0 = temp_v0_2 + (D_800BE9E4 * 0x10);
                    if (var_v0 >= 0x100) {
                        var_v0 = 0xFF;
                    }
                    (*(u8 *)((char *)(var_s0) + 0x3)) = (u8) var_v0;
                }
                goto block_21;
            }
            if (temp_v0_2 != 0) {
                var_v0_2 = temp_v0_2 - (D_800BE9E4 * 8);
                if (var_v0_2 < 0) {
                    var_v0_2 = 0;
                }
                if (var_v0_2 == 0) {
                    if (var_s2 == NULL) {
                        *temp_s4 = temp_s1;
                    } else {
                        (*(s32 *)((char *)(var_s2) + 0xC)) = temp_s1;
                    }
                    ((s32 (*)())((char *)(&D_8008D588 + ((*(s32 *)((char *)(var_s0) + 0x0)) * 4))))(var_s0);
                    func_10004074(var_s0);
                } else {
                    (*(u8 *)((char *)(var_s0) + 0x3)) = (u8) var_v0_2;
block_21:
                    var_s2 = var_s0;
                }
            }
            var_s0 = temp_s1;
        } while (temp_s1 != NULL);
    }
}

void *func_15188D00(void *arg0, s32 arg1, s32 arg2) {
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s1_5;
    void *temp_v0;
    void *var_s0;
    void *var_s1;

    var_s1 = arg0;
    var_s0 = (D_800DF7C8)[arg1];
    if (var_s0 == NULL) {

    } else {
        (*(s32 *)((char *)(var_s1) + 0x4)) = &D_80089470;
        temp_s1 = (char *)(var_s1) + 8;
        (*(s32 *)((char *)(var_s1) + 0x0)) = 0xDA380003;
        (*(s32 *)((char *)(var_s1) + 0x8)) = 0xD9FFFFFF;
        (*(s32 *)((char *)(temp_s1) + 0x4)) = 0x200004;
        temp_s1_2 = (char *)(temp_s1) + 8;
        (*(s32 *)((char *)(temp_s1) + 0x8)) = 0xD9EEFFFF;
        (*(s32 *)((char *)(temp_s1_2) + 0x4)) = 0;
        temp_s1_3 = (char *)(temp_s1_2) + 8;
        (*(s32 *)((char *)(temp_s1_2) + 0x8)) = 0xE7000000;
        (*(s32 *)((char *)(temp_s1_3) + 0x4)) = 0;
        temp_s1_4 = (char *)(temp_s1_3) + 8;
        (*(s32 *)((char *)(temp_s1_3) + 0x8)) = 0xE2001E01;
        (*(s32 *)((char *)(temp_s1_4) + 0x4)) = 0;
        temp_s1_5 = (char *)(temp_s1_4) + 8;
        (*(s32 *)((char *)(temp_s1_5) + 0x4)) = 0xFF;
        (*(s32 *)((char *)(temp_s1_4) + 0x8)) = 0xEC000000;
        var_s1 = (char *)(temp_s1_5) + 8;
        if (var_s0 != NULL) {
            do {
                temp_v0 = ((s32 (*)())((char *)(&D_8008D590 + ((*(s32 *)((char *)(var_s0) + 0x0)) * 4))))(var_s1, var_s0, arg2);
                var_s0 = (*(s32 *)((char *)(var_s0) + 0xC));
                var_s1 = temp_v0;
            } while (var_s0 != NULL);
        }
    }
    return var_s1;
}

void func_15188E48(void *arg0) {
    s32 temp_a1;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_s1;
    s32 var_v1;
    u8 temp_s3;
    u8 temp_v0_2;

    temp_s3 = (*(s32 *)((char *)(arg0) + 0x1));
    temp_v0 = func_1502DB20((*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x10))) + 0x4)));
    temp_lo = temp_v0 * temp_s3;
    temp_s0 = temp_v0;
    var_a3 = 0;
    var_s1 = 1;
    temp_s4 = D_800BE9C0 * temp_lo;
    temp_s5 = (D_800BE9C0 ^ 1) * temp_lo;
    if ((s32) temp_s3 > 0) {
loop_1:
        if (temp_s3 == var_s1) {
            temp_a1 = (*(s32 *)((char *)((*(s32 *)((char *)(arg0) + 0x10))) + 0x1D4));
            if (temp_a1 == 0) {
                (*(s32 *)((char *)(arg0) + 0x2)) = 0U;
                return;
            }
            var_a0 = temp_a1;
            var_a2 = temp_s0 << 6;
            var_v1 = (var_a3 * temp_s0) + temp_s4;
            goto block_6;
        }
        var_a2 = temp_s0 << 6;
        var_a0 = (*(s32 *)((char *)(arg0) + 0x8)) + (((var_s1 * temp_s0) + temp_s5) << 6);
        var_v1 = (var_a3 * temp_s0) + temp_s4;
block_6:
        bcopy(var_a0, (*(s32 *)((char *)(arg0) + 0x8)) + (var_v1 << 6), var_a2);
        var_a3 = var_s1;
        var_s1 += 1;
        if (var_s1 == temp_s3) {
            goto block_7;
        }
        goto loop_1;
    }
block_7:
    temp_v0_2 = (*(s32 *)((char *)(arg0) + 0x2));
    if ((*(s32 *)((char *)(arg0) + 0x1)) != temp_v0_2) {
        (*(u8 *)((char *)(arg0) + 0x2)) = (u8) (temp_v0_2 + 1);
    }
}

void func_15188F84(void *arg0) {
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_s5;
    s32 var_a0;
    s32 var_s1;
    s32 var_v1;
    s32 var_v1_2;
    u16 *var_v0;
    u8 temp_t1;
    u8 temp_v0;

    temp_t1 = (*(s32 *)((char *)(arg0) + 0x1));
    var_v1 = 0;
    temp_s5 = (D_800BE9C0 ^ 1) * temp_t1;
    if ((s32) D_800DBEE8 > 0) {
        var_v0 = *D_80089240;
loop_2:
        if ((char *)(*(s32 *)((char *)(arg0) + 0x10)) != (char *)((*var_v0 * 0xA0) + D_800DBEF4)) {
            var_v1 += 1;
            var_v0 += 4;
            if (var_v1 < (s32) (&D_800DBEE8)[0]) {
                goto loop_2;
            }
        }
    }
    if (var_v1 == D_800DBEE8) {
        (*(s32 *)((char *)(arg0) + 0x2)) = 0U;
        return;
    }
    var_v1_2 = 0;
    var_s1 = D_800BE9C0 * temp_t1;
    temp_s4 = (*(*D_80089240 + (var_v1 * 4)) << 6) + (*(s32 *)(*(&D_80089250 + (D_800BE9C0 * 4))));
    if ((s32) temp_t1 > 0) {
        do {
            temp_s0 = var_v1_2 + 1;
            if (temp_t1 == temp_s0) {
                var_a0 = temp_s4;
            } else {
                var_a0 = (*(s32 *)((char *)(arg0) + 0x8)) + ((var_v1_2 + temp_s5 + 1) << 6);
            }
            bcopy(var_a0, (*(s32 *)((char *)(arg0) + 0x8)) + (var_s1 << 6), 0x40);
            var_v1_2 = temp_s0;
            var_s1 += 1;
        } while (temp_s0 != temp_t1);
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x2));
    if ((*(s32 *)((char *)(arg0) + 0x1)) != temp_v0) {
        (*(u8 *)((char *)(arg0) + 0x2)) = (u8) (temp_v0 + 1);
    }
}

void func_15189118(s32 arg0) {
    f32 temp_f0;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f26_3;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f28_3;
    f32 var_f30;
    s16 var_t5;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_f14;
    s32 temp_f16;
    s32 temp_t1;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a3;
    s32 var_t0;
    u8 temp_s1;
    u8 temp_t4;
    void *temp_a1_2;
    void *temp_v1;
    void *var_a0;
    void *var_s0;
    void *var_v1;

    var_s0 = (D_800DF7C8)[arg0];
    if (var_s0 != NULL) {
        do {
            if ((*(s32 *)((char *)(var_s0) + 0x4)) != 0) {
                temp_s1 = (*(s32 *)((char *)(var_s0) + 0x1));
                temp_v0 = func_1502DB20((*(s32 *)((char *)((*(s32 *)((char *)(var_s0) + 0x10))) + 0x4)));
                temp_t4 = (*(s32 *)((char *)(var_s0) + 0x4));
                temp_a2 = temp_v0;
                var_f30 = (f32) temp_t4;
                temp_t1 = D_800BE9C0 * temp_v0 * temp_s1;
                if ((s32) temp_t4 < 0) {
                    var_f30 += 4294967296.0f;
                }
                var_a3 = (*(s32 *)((char *)(var_s0) + 0x2)) - 1;
                if (var_a3 >= 0) {
                    var_t0 = (var_a3 * temp_v0) + temp_t1;
loop_7:
                    temp_a1 = (*(s32 *)((char *)(var_s0) + 0x8));
                    var_v1 = temp_a1 + (var_t0 << 6);
                    if ((var_a3 + 1) == (*(s32 *)((char *)(var_s0) + 0x2))) {
                        temp_a1_2 = (*(s32 *)((char *)((*(s32 *)((char *)(var_s0) + 0x10))) + 0x1D4));
                        if (temp_a1_2 == NULL) {
                            (*(s32 *)((char *)(var_s0) + 0x2)) = 0U;
                        } else {
                            var_a0 = temp_a1_2;
                            goto block_12;
                        }
                    } else {
                        var_a0 = temp_a1 + ((((var_a3 + 1) * temp_v0) + temp_t1) << 6);
block_12:
                        temp_f22 = ((f32) ((*(f32 *)((char *)(var_v1) + 0x38)) + ((s32)((*(f32 *)((char *)(var_v1) + 0x18))) << 0x10)) * 0.000015258789f) - ((f32) ((*(f32 *)((char *)(var_a0) + 0x38)) + ((s32)((*(f32 *)((char *)(var_a0) + 0x18))) << 0x10)) * 0.000015258789f);
                        temp_f26 = ((f32) ((*(f32 *)((char *)(var_v1) + 0x3A)) + ((s32)((*(f32 *)((char *)(var_v1) + 0x1A))) << 0x10)) * 0.000015258789f) - ((f32) ((*(f32 *)((char *)(var_a0) + 0x3A)) + ((s32)((*(f32 *)((char *)(var_a0) + 0x1A))) << 0x10)) * 0.000015258789f);
                        temp_f28 = ((f32) ((*(f32 *)((char *)(var_v1) + 0x3C)) + ((s32)((*(f32 *)((char *)(var_v1) + 0x1C))) << 0x10)) * 0.000015258789f) - ((f32) ((*(f32 *)((char *)(var_a0) + 0x3C)) + ((s32)((*(f32 *)((char *)(var_a0) + 0x1C))) << 0x10)) * 0.000015258789f);
                        temp_f0 = sqrtf((temp_f22 * temp_f22) + (temp_f26 * temp_f26) + (temp_f28 * temp_f28));
                        if ((var_f30 < temp_f0) && (temp_f0 != 0.0f)) {
                            temp_f22_2 = var_f30 / temp_f0;
                            if (temp_v0 > 0) {
                                var_a1 = 1;
                                var_t5 = (*(s32 *)((char *)(var_v1) + 0x18));
                                if (temp_a2 != 1) {
                                    do {
                                        temp_f28_2 = (f32) ((*(f32 *)((char *)(var_v1) + 0x38)) + (var_t5 << 0x10)) * 0.000015258789f;
                                        temp_f26_2 = (f32) ((*(f32 *)((char *)(var_v1) + 0x3A)) + ((s32)((*(f32 *)((char *)(var_v1) + 0x1A))) << 0x10)) * 0.000015258789f;
                                        temp_f16 = (*(s32 *)((char *)(var_a0) + 0x3A)) + ((*(s32 *)((char *)(var_a0) + 0x1A)) << 0x10);
                                        temp_f20 = (f32) ((*(f32 *)((char *)(var_v1) + 0x3C)) + ((s32)((*(f32 *)((char *)(var_v1) + 0x1C))) << 0x10)) * 0.000015258789f;
                                        temp_f14 = (*(s32 *)((char *)(var_a0) + 0x3C)) + ((*(s32 *)((char *)(var_a0) + 0x1C)) << 0x10);
                                        var_a1 += 1;
                                        (*(s32 *)((char *)(var_v1) + 0x38)) = 0;
                                        temp_f18 = (f32) ((*(f32 *)((char *)(var_a0) + 0x38)) + ((s32)((*(f32 *)((char *)(var_a0) + 0x18))) << 0x10));
                                        (*(s32 *)((char *)(var_v1) + 0x3A)) = 0;
                                        (*(s32 *)((char *)(var_v1) + 0x3C)) = 0;
                                        var_v1 = (char *)(var_v1) + 0x40;
                                        var_a0 = (char *)(var_a0) + 0x40;
                                        temp_f18_2 = temp_f18 * 0.000015258789f;
                                        temp_f16_2 = (f32) temp_f16 * 0.000015258789f;
                                        temp_f14_2 = (f32) temp_f14 * 0.000015258789f;
                                        (*(s16 *)((char *)(var_v1) - 0x26)) = (s16) (s32) (((temp_f26_2 - temp_f16_2) * temp_f22_2) + temp_f16_2);
                                        var_t5 = (*(s32 *)((char *)(var_v1) + 0x18));
                                        (*(s16 *)((char *)(var_v1) - 0x28)) = (s16) (s32) (((temp_f28_2 - temp_f18_2) * temp_f22_2) + temp_f18_2);
                                        (*(s16 *)((char *)(var_v1) - 0x24)) = (s16) (s32) (((temp_f20 - temp_f14_2) * temp_f22_2) + temp_f14_2);
                                    } while (var_a1 != temp_a2);
                                }
                                temp_f28_3 = (f32) ((*(f32 *)((char *)(var_v1) + 0x38)) + (var_t5 << 0x10)) * 0.000015258789f;
                                temp_f26_3 = (f32) ((*(f32 *)((char *)(var_v1) + 0x3A)) + ((s32)((*(f32 *)((char *)(var_v1) + 0x1A))) << 0x10)) * 0.000015258789f;
                                (*(s32 *)((char *)(var_v1) + 0x38)) = 0;
                                temp_f20_2 = (f32) ((*(f32 *)((char *)(var_v1) + 0x3C)) + ((s32)((*(f32 *)((char *)(var_v1) + 0x1C))) << 0x10));
                                (*(s32 *)((char *)(var_v1) + 0x3A)) = 0;
                                (*(s32 *)((char *)(var_v1) + 0x3C)) = 0;
                                temp_v1 = (char *)(var_v1) + 0x40;
                                temp_f18_3 = (f32) ((*(f32 *)((char *)(var_a0) + 0x38)) + ((s32)((*(f32 *)((char *)(var_a0) + 0x18))) << 0x10)) * 0.000015258789f;
                                temp_f16_3 = (f32) ((*(f32 *)((char *)(var_a0) + 0x3A)) + ((s32)((*(f32 *)((char *)(var_a0) + 0x1A))) << 0x10)) * 0.000015258789f;
                                temp_f14_3 = (f32) ((*(f32 *)((char *)(var_a0) + 0x3C)) + ((s32)((*(f32 *)((char *)(var_a0) + 0x1C))) << 0x10)) * 0.000015258789f;
                                (*(s16 *)((char *)(temp_v1) - 0x28)) = (s16) (s32) (((temp_f28_3 - temp_f18_3) * temp_f22_2) + temp_f18_3);
                                (*(s16 *)((char *)(temp_v1) - 0x26)) = (s16) (s32) (((temp_f26_3 - temp_f16_3) * temp_f22_2) + temp_f16_3);
                                (*(s16 *)((char *)(temp_v1) - 0x24)) = (s16) (s32) ((((temp_f20_2 * 0.000015258789f) - temp_f14_3) * temp_f22_2) + temp_f14_3);
                            }
                        }
                        var_a3 -= 1;
                        var_t0 += -temp_v0;
                        if (var_a3 >= 0) {
                            goto loop_7;
                        }
                    }
                }
            }
            var_s0 = (*(s32 *)((char *)(var_s0) + 0xC));
        } while (var_s0 != NULL);
    }
}

void func_151895A4(void *arg0) {
    func_100043B4((*(s32 *)((char *)(arg0) + 0x8)), 2, arg0);
}

void func_151895CC(void *arg0) {
    func_100043B4((*(s32 *)((char *)(arg0) + 0x8)), 2, arg0);
}

s32 func_151895F4(s32 arg0, void *arg1, s32 arg2) {
    s32 sp84;
    s32 sp64;
    s32 sp58;
    s32 temp_a1;
    s32 temp_fp;
    s32 temp_lo;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s6;
    u8 temp_s0;
    u8 temp_s5;
    u8 var_v1;
    void *temp_a0;

    var_s6 = arg0;
    if ((*(s32 *)((char *)(arg1) + 0x2)) == 0) {
        return var_s6;
    }
    func_1503DA9C((*(s32 *)((char *)(arg1) + 0x10)), func_150849CC((*(s32 *)((char *)(arg1) + 0x10)), &sp64), sp64, 1);
    temp_s0 = (*(s32 *)((char *)(arg1) + 0x1));
    temp_s5 = (*(s32 *)((char *)(arg1) + 0x3));
    temp_v0 = func_1502DB20((*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x10))) + 0x4)));
    temp_a0 = (*(s32 *)((char *)(arg1) + 0x10));
    temp_fp = temp_v0;
    var_v1 = (*(s32 *)((char *)(arg1) + 0x2));
    temp_a1 = D_800BE9C0 * temp_v0 * temp_s0;
    temp_lo = (s32) ((char *)(temp_a0) - (char *)(&gObjects)) / 812;
    if ((temp_lo < 0) || (temp_lo >= 0x19)) {
        return var_s6;
    }
    sp58 = (*(s32 *)((char *)(temp_a0) + 0x94));
    var_s0 = 0;
    (*(s32 *)((char *)(temp_a0) + 0x94)) = (s32) (*(s32 *)((char *)(arg1) + 0x14));
    if ((s32) var_v1 > 0) {
        var_s1 = temp_s5 * 0x60;
        var_s2 = temp_a1;
        do {
            D_800DF7C0 = (*(s32 *)((char *)(arg1) + 0x8)) + (var_s2 << 6);
            D_800DF7C4 = (s8) (var_s1 >> 8);
            sp84 = (s32) var_v1;
            var_s0 += 1;
            var_s1 += temp_s5 << 5;
            var_s2 += temp_fp;
            var_s6 = func_1502C974(var_s6, temp_lo, arg2, 4, 1);
        } while (var_s0 != var_v1);
    }
    (*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x10))) + 0x94)) = sp58;
    return var_s6;
}

s32 func_151897A4(s32 arg0, void *arg1, s32 arg2) {
    s32 sp44;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    u8 temp_a0;
    u8 temp_a3;

    var_s4 = arg0;
    temp_a3 = (*(s32 *)((char *)(arg1) + 0x2));
    if (temp_a3 == 0) {
        return var_s4;
    }
    temp_a0 = (*(s32 *)((char *)(arg1) + 0x3));
    var_s1 = temp_a0 * 0x60;
    var_s0 = 0;
    sp44 = (s32) (*(s32 *)((char *)((*(s32 *)((char *)(arg1) + 0x10))) + 0x8A));
    var_s2 = D_800BE9C0 * (*(s32 *)((char *)(arg1) + 0x1));
    if ((s32) temp_a3 > 0) {
        do {
            (*(u8 *)((char *)((*(u8 *)((char *)(arg1) + 0x10))) + 0x8A)) = (u8) (var_s1 >> 8);
            temp_v0 = func_151137D4(var_s4, (*(s32 *)((char *)(arg1) + 0x10)), (*(s32 *)((char *)(arg1) + 0x8)) + (var_s2 << 6), arg2, 0, 0);
            var_s0 += 1;
            var_s1 += temp_a0 << 5;
            var_s2 += 1;
            var_s4 = temp_v0;
        } while (var_s0 != temp_a3);
    }
    (*(s8 *)((char *)((*(s8 *)((char *)(arg1) + 0x10))) + 0x8A)) = (s8) sp44;
    return var_s4;
}

void func_151898C0(s32 arg0, s32 arg1) {
    void *var_v0;

    var_v0 = D_800DF7C8;
    if (var_v0 != NULL) {
loop_1:
        if (arg0 == (*(s32 *)((char *)(var_v0) + 0x10))) {
            (*(s32 *)((char *)(var_v0) + 0x14)) = arg1;
            return;
        }
        var_v0 = (*(s32 *)((char *)(var_v0) + 0xC));
        if (var_v0 == NULL) {

        } else {
            goto loop_1;
        }
    }
}
