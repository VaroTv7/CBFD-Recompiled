/**
 * Auto-decompiled from asm/42DC0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_10004074();                            /* extern */
void func_15015A38();
extern s32 D_80082F80;
extern s32 D_80085990;
extern s32 D_80085994;
extern s8 D_800CBD4C;

void func_15015910(void) {
    D_800CBD4C = 0;
}

void func_15015920( s32 arg0) {
    s32 temp_a0;
    s32 var_s1;
    void *temp_s2;
    void *temp_v0;
    void *var_s0;

    temp_v0 = func_10003C6C(0x2800, 1, 2, 1, 0);
    temp_s2 = (arg0 * 8) + &D_80082F80;
    temp_a0 = (*(s32 *)((char *)(temp_s2) + 0x0));
    func_10004514(temp_a0, temp_v0, (*(s32 *)((char *)(temp_s2) + 0x4)) - temp_a0, 1);
    var_s0 = temp_v0;
    var_s1 = 0;
    if ((u32) ((char *)(temp_v0) + 0xF) < (u32) (((char *)(temp_v0) + (*(u32 *)((char *)(temp_s2) + 0x4))) - (*(u32 *)((char *)(temp_s2) + 0x0)))) {
        do {
            func_15015A38(var_s0, var_s1, arg0);
            var_s0 = (char *)(var_s0) + ((*(s32 *)((char *)(var_s0) + 0x4)) << 0x18) + ((*(s32 *)((char *)(var_s0) + 0x5)) << 0x10) + ((*(s32 *)((char *)(var_s0) + 0x6)) << 8) + (*(s32 *)((char *)(var_s0) + 0x7));
            var_s1 += 1;
        } while ((u32) ((char *)(var_s0) + 0xF) < (u32) (((char *)(temp_v0) + (*(u32 *)((char *)(temp_s2) + 0x4))) - (*(u32 *)((char *)(temp_s2) + 0x0))));
    }
    func_10004074(temp_v0);
}

void func_15015A38(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_a1;
    s32 *temp_a1_2;
    s32 *temp_t5;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s6;
    s32 temp_t0;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s5_2;
    s32 var_s6;
    s32 var_s7;
    s32 var_t1;
    s32 var_t2;
    s32 var_t4;
    s32 var_v0;
    s8 *temp_t7;
    s8 temp_v1;
    u8 *var_s4;
    u8 temp_a0;
    u8 temp_s5;
    u8 var_s5;
    void *temp_t7_2;

    temp_s1 = arg2 * 4;
    temp_t5 = temp_s1 + &D_80085994;
    temp_s0 = arg1 * 4;
    (*(s32 *)((char *)(*temp_t5) + temp_s0)) = (*(s32 *)((char *)(arg0) + 0x0)) + 1;
    (*(s8 *)((char *)((*temp_t5 + temp_s0)) + 0x1)) = (s8) ((*(s8 *)((char *)(arg0) + 0x1)) + 1);
    var_t2 = 8;
    (*(u8 *)((char *)((*temp_t5 + temp_s0)) + 0x2)) = (u8) (*(u8 *)((char *)(arg0) + 0x2));
    var_t1 = 0;
    (*(u8 *)((char *)((*temp_t5 + temp_s0)) + 0x3)) = (u8) (*(u8 *)((char *)(arg0) + 0x3));
    var_s4 = *temp_t5 + temp_s0;
    temp_s5 = *var_s4;
    temp_t8 = (temp_s5 + 7) & 0xFFF8;
    if ((s32) temp_s5 > 0) {
        do {
            (*(u8 *)((*(temp_s1 + &D_80085990)) + (arg1 * 0xE0) + var_t1)) = 0;
            var_t1 += 1;
            var_s4 = *temp_t5 + temp_s0;
        } while (var_t1 < (s32) *var_s4);
        var_t1 = 0;
    }
    var_t4 = 1;
    if (((*(s32 *)((char *)(var_s4) + 0x1)) + 1) >= 2) {
        do {
            var_s5 = *var_s4;
            if (!(var_t4 & 1)) {
                var_a2 = 0;
            } else {
                var_a2 = 4;
            }
            if ((s32) var_s5 > 0) {
                do {
                    if (var_t1 == 0) {
                        (*(u8 *)((*(&D_80085990 + temp_s1)) + (arg1 * 0xE0) + (var_t1 ^ var_a2) + (var_t4 * temp_t8))) = 0;
                        var_s4 = *temp_t5 + temp_s0;
                        var_s5 = *var_s4;
                    } else {
                        temp_a0 = *((char *)(arg0) + var_t2);
                        var_t2 += 1;
                        var_v0 = 0;
                        temp_t0 = (temp_a0 & 0xF) + 1;
                        temp_v1 = temp_a0 & 0xF0;
                        if (temp_t0 > 0) {
                            temp_lo = var_t4 * temp_t8;
                            temp_s6 = temp_t0 & 3;
                            temp_a1 = &D_80085990 + temp_s1;
                            var_s4_2 = var_t1;
                            if (temp_s6 != 0) {
                                do {
                                    var_v0 += 1;
                                    (*(s32 *)((char *)(*temp_a1) + (arg1 * 0xE0) + (var_s4_2 ^ var_a2) + temp_lo)) = temp_v1;
                                    var_s4_2 += 1;
                                } while (temp_s6 != var_v0);
                                if (var_v0 != temp_t0) {
                                    goto block_14;
                                }
                            } else {
block_14:
                                var_s4_3 = var_t1 + var_v0;
                                var_s5_2 = var_s4_3 + 1;
                                var_s6 = var_s4_3 + 2;
                                var_s7 = var_s4_3 + 3;
                                do {
                                    (*(s32 *)((char *)(*temp_a1) + (arg1 * 0xE0) + (var_s4_3 ^ var_a2) + temp_lo)) = temp_v1;
                                    (*(s32 *)((char *)(*temp_a1) + (arg1 * 0xE0) + (var_s5_2 ^ var_a2) + temp_lo)) = temp_v1;
                                    (*(s32 *)((char *)(*temp_a1) + (arg1 * 0xE0) + (var_s6 ^ var_a2) + temp_lo)) = temp_v1;
                                    var_v0 += 4;
                                    (*(s32 *)((char *)(*temp_a1) + (arg1 * 0xE0) + (var_s7 ^ var_a2) + temp_lo)) = temp_v1;
                                    var_s7 += 4;
                                    var_s6 += 4;
                                    var_s5_2 += 4;
                                    var_s4_3 += 4;
                                } while (var_v0 != temp_t0);
                            }
                            var_s4 = *temp_t5 + temp_s0;
                            var_s5 = *var_s4;
                        }
                        var_t1 = (var_t1 + temp_t0) - 1;
                    }
                    var_t1 += 1;
                } while (var_t1 < (s32) var_s5);
            }
            if (var_t1 < temp_t8) {
                do {
                    temp_t9 = var_t1 ^ var_a2;
                    var_t1 += 1;
                    (*(u8 *)((*(&D_80085990 + temp_s1)) + (arg1 * 0xE0) + temp_t9 + (var_t4 * temp_t8))) = 0;
                } while (var_t1 < temp_t8);
                var_s4 = *temp_t5 + temp_s0;
            }
            var_t4 += 1;
            var_t1 = 0;
        } while (var_t4 < ((*(s32 *)((char *)(var_s4) + 0x1)) + 1));
    }
    if (temp_t8 > 0) {
        temp_lo_2 = var_t4 * temp_t8;
        temp_v1_2 = temp_t8 & 3;
        temp_a1_2 = temp_s1 + &D_80085990;
        if (temp_v1_2 != 0) {
            do {
                temp_t7 = *temp_a1_2 + (arg1 * 0xE0) + var_t1 + temp_lo_2;
                var_t1 += 1;
                *temp_t7 = 0;
            } while (temp_v1_2 != var_t1);
            if (var_t1 != temp_t8) {
                goto loop_28;
            }
        } else {
            do {
loop_28:
                (*(s32 *)((char *)(*temp_a1_2) + (arg1 * 0xE0) + var_t1 + temp_lo_2)) = 0;
                (*(s32 *)((char *)((*temp_a1_2 + (arg1 * 0xE0) + var_t1 + temp_lo_2)) + 0x1)) = 0;
                (*(s32 *)((char *)((*temp_a1_2 + (arg1 * 0xE0) + var_t1 + temp_lo_2)) + 0x2)) = 0;
                temp_t7_2 = *temp_a1_2 + (arg1 * 0xE0) + var_t1 + temp_lo_2;
                var_t1 += 4;
                (*(s32 *)((char *)(temp_t7_2) + 0x3)) = 0;
            } while (var_t1 != temp_t8);
        }
    }
}
