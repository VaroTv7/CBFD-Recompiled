/**
 * Auto-decompiled from asm/14CE30.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


extern void *D_800CC5EC;
extern s32 D_800DBFC0;
extern s32 D_800DBFC8;

void func_1511F980(void) {
    D_800DBFC0 = 0;
}

void func_1511F990(void *arg0, s32 arg1) {
    s32 *var_a1;
    s32 temp_t4;
    s32 temp_t7;
    s32 temp_v1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_t1;
    s32 var_v0;
    u8 temp_t0;
    u8 temp_t3;
    u8 temp_t7_2;
    void *temp_a1;
    void *temp_a3;
    void *temp_t0_2;
    void *temp_t0_3;

    temp_t0 = (*(s32 *)((char *)(arg0) + 0x73));
    temp_t7 = (s32) (*(s32 *)((char *)(arg0) + 0x3C)) >> 0x10;
    var_a3 = 0;
    var_t1 = 0;
    var_v0 = temp_t0 & 3;
    temp_v1 = temp_t0 & 4;
    if (D_800DBFC0 > 0) {
        var_a1 = &D_800DBFC8;
loop_2:
        if ((char *)(arg0) != (char *)(*var_a1)) {
            var_t1 += 1;
            var_a1 += 8;
            if (var_t1 < D_800DBFC0) {
                goto loop_2;
            }
        }
    }
    if (var_t1 == D_800DBFC0) {
        if (var_t1 < 4) {
            temp_a1 = &D_800DBFC8 + (var_t1 * 8);
            (*(s32 *)((char *)(temp_a1) + 0x0)) = arg0;
            (*(s32 *)((char *)(temp_a1) + 0x4)) = (s32) (s8) temp_t7;
            D_800DBFC0 += 1;
            var_a3 = 1;
            goto block_7;
        }
    } else {
block_7:
        if ((s8) temp_t7 >= 0) {
            if (var_a3 != 0) {
                if ((s8) temp_t7 == (*(s8 *)((char *)(D_800CC5EC) + 0x11B))) {
                    if (arg1 == 0) {
                        if ((var_v0 != 0) && (var_v0 != 1)) {
                            var_v0 = 1;
                        }
                        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((s32) ((s32)((*(f32 *)((char *)(arg0) + 0x3C))) << 0x16) >> 0x16);
                    } else if (arg1 == 1) {
                        var_v0 = 3;
                    } else if (arg1 == 2) {
                        var_v0 = 2;
                    } else if (arg1 == 3) {
                        if ((var_v0 != 0) && (var_v0 != 1)) {
                            if (temp_v1 != 0) {
                                var_v0 = 1;
                            }
                        } else if (temp_v1 == 0) {
                            var_v0 = 3;
                        }
                        (*(f32 *)((char *)(arg0) + 0x4)) = (f32) ((s32) ((s32)((*(f32 *)((char *)(arg0) + 0x3C))) << 0x16) >> 0x16);
                    }
                } else if ((arg1 == 0) || (arg1 == 2) || (arg1 == 3)) {
                    if ((arg1 != 3) || (temp_v1 != 0)) {
                        var_v0 = 0;
                    } else {
                        var_v0 = 3;
                    }
                }
            } else if ((var_v0 == 1) || (var_v0 == 2)) {
                var_a1_2 = 0;
                if (D_800DBFC0 > 0) {
                    do {
                        if (var_a1_2 != var_t1) {
                            temp_a3 = &D_800DBFC8 + (var_a1_2 * 8);
                            if (((s8) temp_t7 == (*(s8 *)((char *)(temp_a3) + 0x4))) && ((temp_v1 != 0) || !((*(s8 *)((char *)((*(s8 *)((char *)(temp_a3) + 0x0))) + 0x73)) & 4)) && ((temp_t0_2 = (*(s8 *)((char *)(temp_a3) + 0x0)), temp_t3 = (*(s8 *)((char *)(temp_t0_2) + 0x73)), temp_t4 = temp_t3 & 3, (temp_t4 != 3)) || (var_v0 != 2)) && ((temp_t4 != 0) || (var_v0 != 1))) {
                                (*(u8 *)((char *)(temp_t0_2) + 0x73)) = (u8) (temp_t3 & 0xFFFC);
                                temp_t0_3 = (*(s32 *)((char *)(temp_a3) + 0x0));
                                (*(u8 *)((char *)(temp_t0_3) + 0x73)) = (u8) ((*(u8 *)((char *)(temp_t0_3) + 0x73)) | var_v0);
                            }
                        }
                        var_a1_2 += 1;
                    } while (var_a1_2 < D_800DBFC0);
                }
            }
        }
        temp_t7_2 = (*(s32 *)((char *)(arg0) + 0x73)) & 0xFFFC;
        (*(s32 *)((char *)(arg0) + 0x73)) = temp_t7_2;
        (*(u8 *)((char *)(arg0) + 0x73)) = (u8) (temp_t7_2 | var_v0);
    }
}
