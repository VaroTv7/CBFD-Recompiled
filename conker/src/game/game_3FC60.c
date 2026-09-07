/**
 * Auto-decompiled from asm/3FC60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 allocate_memory();                  /* extern */
void func_15012C84();             /* static */
void func_15012ED8();                      /* static */
extern s32 D_800B0E10;
extern u8 D_800B0E38;
extern s32 D_800B0E40;
extern s32 D_800B0E44;
extern s32 D_800B0E48;
extern s32 D_800B0E4C;
extern s32 D_800BE510;
extern s32 D_800BE520;
extern s32 D_800BE524;
extern u16 D_800BE528;
extern s32 D_800BE530;
extern s32 D_800BE550;
extern u8 D_800BE564;
extern s8 D_800DF7D0;
extern s8 D_800DF7D1;
extern s8 D_800DF7D2;
extern s32 D_800DF7D3;
extern s32 D_800DF9B3;

void func_150127B0(void) {
    s32 *var_s0;
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s0_2;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    s32 var_s6_2;
    s32 var_s6_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_4;
    u16 temp_t2;
    u16 temp_t3;
    u8 *var_v1_3;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 var_v1_2;
    void *temp_t2_2;
    void *temp_v1_2;
    void *var_s0_3;
    void *var_v1;

    D_800BE520 = 0;
    temp_v1 = D_800B0DF0->unk21;
    if (temp_v1 != 0) {
        var_v0 = 0;
        if (temp_v1 & 1) {
            var_v0 = D_800B0E40 + D_800B0E44 + D_800B0E48 + D_800B0E4C;
        }
        if (temp_v1 & 2) {
            var_s6 = 0;
            if (D_800DBEF0 > 0) {
                var_v1 = D_800DBEF4;
                do {
                    temp_t2 = (*(s32 *)((char *)(var_v1) + 0x16));
                    var_s6 += 1;
                    var_v1 = (char *)(var_v1) + 0xA0;
                    var_v0 += temp_t2;
                } while (var_s6 < D_800DBEF0);
            }
        }
        temp_v0 = allocate_memory(var_v0 * 3, 1, 0, 0);
        (*(s32 *)((char *)&(D_800BE510) + 0x0)) = temp_v0;
        if (temp_v0 == 0) {
            (*(s32 *)((char *)&(D_800BE510) + 0x4)) = 0;
            return;
        }
        D_800BE528 = 0;
        D_800BE564 = 0;
        var_v1_2 = D_800B0DF0->unk21;
        var_s1 = &D_800B0E10;
        var_s3 = 0;
        if (var_v1_2 & 1) {
            var_s0 = &D_800BE510;
            do {
                temp_a0 = *var_s1;
                if (temp_a0 != 0) {
                    *var_s0 = (*(s32 *)((char *)&(D_800BE510) + 0x0)) + (D_800BE528 * 3);
                    func_15012C84(temp_a0, *(&D_800B0E40 + var_s3));
                } else {
                    *var_s0 = 0;
                }
                var_s0 += 4;
                var_s3 += 4;
                var_s1 += 4;
            } while ((char *)(var_s0) != (char *)(&D_800BE520));
            var_v1_2 = D_800B0DF0->unk21;
        }
        if (var_v1_2 & 2) {
            var_s6_2 = 0;
            D_800BE524 = allocate_memory(D_800DBEF0 * 2, 1, 0, 0);
            var_s0_2 = 0;
            var_s1_2 = 0;
            if (D_800DBEF0 > 0) {
                do {
                    if ((*(s32 *)((char *)((D_800DBEF4 + var_s0_2)) + 0x16)) != 0) {
                        (*(s32 *)((char *)(D_800BE524) + var_s1_2)) = D_800BE528;
                        temp_v1_2 = D_800DBEF4 + var_s0_2;
                        func_15012C84((*(s32 *)((char *)(temp_v1_2) + 0x28)), (s32) (*(s32 *)((char *)(temp_v1_2) + 0x16)));
                    } else {
                        (*(s32 *)((char *)(D_800BE524) + var_s1_2)) = 0xFFFF;
                    }
                    var_s6_2 += 1;
                    var_s0_2 += 0xA0;
                    var_s1_2 += 2;
                } while (var_s6_2 < D_800DBEF0);
            }
        }
        if (D_800B0DF0->unk21 & 4) {
            var_s6_3 = 0;
            temp_v0_2 = allocate_memory(D_800B0E38 * 4, 1, 0, 0);
            D_800BE520 = temp_v0_2;
            bzero(temp_v0_2, D_800B0E38 * 4);
            if ((s32) D_800B0E38 > 0) {
                var_v1_3 = D_800B0E34;
                do {
                    temp_v0_3 = *var_v1_3;
                    if (temp_v0_3 != 0) {
                        temp_s3 = var_s6_3 * 4;
                        var_s5 = 0;
                        var_s2 = 0;
                        (*(s32 *)((char *)(D_800BE520) + temp_s3)) = allocate_memory(temp_v0_3 * 4, 1, 0, 0);
                        var_v1_3 = D_800B0E34[var_s6_3];
                        var_s0_3 = (*(s32 *)((char *)(D_800B0E30) + temp_s3));
                        if ((s32) *var_v1_3 > 0) {
                            do {
                                var_s1_3 = 0;
                                (*(s32 *)((char *)((*(s32 *)((char *)(D_800BE520) + temp_s3))) + var_s2)) = allocate_memory((*(s32 *)((char *)(var_s0_3) + 0x8)) * 3, 1, 0, 0);
                                if (var_s6_3 < 4) {
                                    var_a0 = (&D_800B0E10)[var_s6_3];
                                } else {
                                    var_a0 = (*(s32 *)((char *)((D_800DBEF4 + (var_s6_3 * 0xA0))) - 0x258));
                                }
                                var_v0_2 = 0;
                                var_v1_4 = 0;
                                if ((*(s32 *)((char *)(var_s0_3) + 0x8)) > 0) {
                                    do {
                                        var_s1_3 += 1;
                                        (*(s32 *)((char *)((*(s32 *)((char *)((*(s32 *)((char *)(D_800BE520) + temp_s3))) + var_s2))) + var_v0_2)) = (*(s32 *)((char *)((var_a0 + ((*(s32 *)((char *)((*(s32 *)((char *)(var_s0_3) + 0x4))) + var_v1_4)) * 0x10))) + 0xC));
                                        (*(u8 *)((char *)(((*(u8 *)((char *)((*(u8 *)((char *)(D_800BE520) + temp_s3))) + var_s2)) + var_v0_2)) + 0x1)) = (u8) (*(u8 *)((char *)((var_a0 + ((*(u8 *)((char *)((*(u8 *)((char *)(var_s0_3) + 0x4))) + var_v1_4)) * 0x10))) + 0xD));
                                        temp_t3 = (*(s32 *)((char *)((*(s32 *)((char *)(var_s0_3) + 0x4))) + var_v1_4));
                                        var_v1_4 += 2;
                                        temp_t2_2 = (*(s32 *)((char *)((*(s32 *)((char *)(D_800BE520) + temp_s3))) + var_s2)) + var_v0_2;
                                        var_v0_2 += 3;
                                        (*(u8 *)((char *)(temp_t2_2) + 0x2)) = (u8) (*(u8 *)((char *)((var_a0 + (temp_t3 * 0x10))) + 0xE));
                                    } while (var_s1_3 < (*(s32 *)((char *)(var_s0_3) + 0x8)));
                                }
                                var_s5 += 1;
                                var_s0_3 = (char *)(var_s0_3) + 0xC;
                                var_v1_3 = D_800B0E34[var_s6_3];
                                var_s2 += 4;
                            } while (var_s5 < (s32) *var_v1_3);
                        }
                    }
                    var_s6_3 += 1;
                    var_v1_3 += 1;
                } while (var_s6_3 < (s32) D_800B0E38);
            }
        }
        func_15012ED8(D_800B0E00);
    }
}

void func_15012C84(s32 arg0, s32 arg1) {
    s32 temp_a3;
    s32 var_v0;
    u16 temp_t2;
    u16 temp_t4;
    u16 temp_t8;
    u8 temp_t7;
    u8 temp_t7_2;
    void *var_v1;
    void *var_v1_2;

    var_v0 = 0;
    if (arg1 != 0) {
        temp_a3 = arg1 & 3;
        if (temp_a3 != 0) {
            var_v1 = arg0 + (0 * 0x10);
            do {
                temp_t7 = (*(s32 *)((char *)(var_v1) + 0xC));
                var_v0 += 1;
                var_v1 = (char *)(var_v1) + 0x10;
                (*(s32 *)((char *)(D_800BE510) + (D_800BE528 * 3))) = temp_t7;
                (*(u8 *)((char *)((D_800BE510 + (D_800BE528 * 3))) + 0x1)) = (u8) (*(u8 *)((char *)(var_v1) - 0x3));
                (*(u8 *)((char *)((D_800BE510 + (D_800BE528 * 3))) + 0x2)) = (u8) (*(u8 *)((char *)(var_v1) - 0x2));
                D_800BE528 += 1;
            } while (temp_a3 != var_v0);
            if (var_v0 != arg1) {
                goto block_5;
            }
        } else {
block_5:
            var_v1_2 = arg0 + (var_v0 * 0x10);
            do {
                temp_t7_2 = (*(s32 *)((char *)(var_v1_2) + 0xC));
                var_v1_2 = (char *)(var_v1_2) + 0x40;
                (*(s32 *)((char *)(D_800BE510) + (D_800BE528 * 3))) = temp_t7_2;
                (*(u8 *)((char *)((D_800BE510 + (D_800BE528 * 3))) + 0x1)) = (u8) (*(u8 *)((char *)(var_v1_2) - 0x33));
                (*(u8 *)((char *)((D_800BE510 + (D_800BE528 * 3))) + 0x2)) = (u8) (*(u8 *)((char *)(var_v1_2) - 0x32));
                temp_t4 = D_800BE528 + 1;
                D_800BE528 = temp_t4;
                (*(s32 *)((char *)(D_800BE510) + ((temp_t4 & 0xFFFF) * 3))) = (*(s32 *)((char *)(var_v1_2) - 0x24));
                (*(u8 *)((char *)((D_800BE510 + (D_800BE528 * 3))) + 0x1)) = (u8) (*(u8 *)((char *)(var_v1_2) - 0x23));
                (*(u8 *)((char *)((D_800BE510 + (D_800BE528 * 3))) + 0x2)) = (u8) (*(u8 *)((char *)(var_v1_2) - 0x22));
                temp_t8 = D_800BE528 + 1;
                D_800BE528 = temp_t8;
                (*(s32 *)((char *)(D_800BE510) + ((temp_t8 & 0xFFFF) * 3))) = (*(s32 *)((char *)(var_v1_2) - 0x14));
                (*(u8 *)((char *)((D_800BE510 + (D_800BE528 * 3))) + 0x1)) = (u8) (*(u8 *)((char *)(var_v1_2) - 0x13));
                (*(u8 *)((char *)((D_800BE510 + (D_800BE528 * 3))) + 0x2)) = (u8) (*(u8 *)((char *)(var_v1_2) - 0x12));
                temp_t2 = D_800BE528 + 1;
                D_800BE528 = temp_t2;
                (*(s32 *)((char *)(D_800BE510) + ((temp_t2 & 0xFFFF) * 3))) = (*(s32 *)((char *)(var_v1_2) - 0x4));
                (*(u8 *)((char *)((D_800BE510 + (D_800BE528 * 3))) + 0x1)) = (u8) (*(u8 *)((char *)(var_v1_2) - 0x3));
                (*(u8 *)((char *)((D_800BE510 + (D_800BE528 * 3))) + 0x2)) = (u8) (*(u8 *)((char *)(var_v1_2) - 0x2));
                D_800BE528 += 1;
            } while ((char *)(var_v1_2) != (char *)((arg1 * 0x10) + arg0));
        }
    }
}

void func_15012ED8(u32 *arg0) {
    s16 var_v0;
    s8 var_v1;
    u32 *var_a1;
    u32 temp_v1;
    void *temp_a0;

    var_v0 = 0;
    var_a1 = arg0;
    var_v1 = (s8) ((u32) *arg0 >> 0x18);
    if (var_v1 != -0x21) {
        do {
            if (var_v1 == -5) {
                *(&D_800BE550 + (D_800BE564 * 2)) = var_v0;
                temp_a0 = &D_800BE530 + (D_800BE564 * 3);
                (*(s8 *)((char *)(temp_a0) + 0x0)) = (s8) ((u32) (*(s8 *)((char *)(var_a1) + 0x4)) >> 0x18);
                (*(s8 *)((char *)(temp_a0) + 0x1)) = (s8) ((u32) (*(s8 *)((char *)(var_a1) + 0x4)) >> 0x10);
                D_800BE564 += 1;
                (*(s8 *)((char *)(temp_a0) + 0x2)) = (s8) ((u32) (*(s8 *)((char *)(var_a1) + 0x4)) >> 8);
            }
            temp_v1 = (*(s32 *)((char *)(var_a1) + 0x8));
            var_v0 += 1;
            var_a1 += 8;
            var_v1 = (s8) (temp_v1 >> 0x18);
        } while (var_v1 != -0x21);
    }
}

void func_15012F90(void) {
    void * *var_v1;

    D_800DF7D0 = 0;
    D_800DF7D1 = 0;
    var_v1 = &D_800DF7D3;
    D_800DF7D2 = 0;
    do {
        var_v1 = (char *)(var_v1) + 4;
        (*(s32 *)((char *)(var_v1) - 0x3)) = 0;
        (*(s32 *)((char *)(var_v1) - 0x2)) = 0;
        (*(s32 *)((char *)(var_v1) - 0x1)) = 0;
        (*(s32 *)((char *)(var_v1) - 0x4)) = 0;
    } while ((char *)(var_v1) != (char *)(&D_800DF9B3));
}
