/**
 * Auto-decompiled from asm/1A0E60.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *func_151149AC();                           /* extern */
extern s32 D_800B0E10;
extern s32 D_800BE510;
extern s32 D_800BE520;
extern s32 D_800BE524;

void func_151739B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp30;
    s32 temp_lo;
    s32 temp_s3;
    s32 var_s2;
    s32 var_s6;
    s32 var_t1;
    s32 var_t3;
    s32 var_v1;
    u16 *var_t2;
    u16 temp_t0;
    u8 *var_a3;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_v0_2;
    void *var_s0;
    void *var_v1_2;

    temp_v0 = (*(s32 *)((char *)(D_800B0E34) + arg0));
    if ((temp_v0 != 0) && ((temp_s3 = arg0 * 4, temp_v1 = D_800B0DF0->unk21, ((temp_v1 & 4) != 0)) || (((arg1 != 0) || (temp_v1 & 1)) && ((arg1 != 1) || (temp_v1 & 2))))) {
        var_v1 = 0;
        if (arg3 == 0xFF) {
            sp30 = (s32) temp_v0;
            goto block_10;
        }
        var_v1 = arg3;
        if (arg3 < (s32) temp_v0) {
            sp30 = arg3 + 1;
block_10:
            if (arg1 == 0) {
                var_s6 = D_800B0E10;
            } else {
                var_s6 = (*(s32 *)((char *)((D_800DBEF4 + (arg4 * 0xA0) + (D_800BE9C0 * 4))) + 0x20));
            }
            var_s2 = var_v1;
            if (var_v1 < sp30) {
                var_s0 = (*(s32 *)((char *)(D_800B0E30) + temp_s3)) + (var_v1 * 0xC);
                do {
                    var_t1 = 0;
                    if ((*(s32 *)((char *)(var_s0) + 0x8)) > 0) {
                        var_t2 = (*(s32 *)((char *)(var_s0) + 0x4));
                        var_t3 = 0;
                        var_a3 = (*(s32 *)((char *)(var_s0) + 0x0));
                        do {
                            temp_t0 = *var_t2;
                            if (!(D_800B0DF0->unk21 & 4)) {
                                if (arg1 == 0) {
                                    var_v1_2 = D_800BE510 + (temp_t0 * 3);
                                } else {
                                    var_v1_2 = D_800BE510 + ((*(s32 *)((char *)(D_800BE524) + (arg4 * 2))) * 3) + (temp_t0 * 3);
                                }
                            } else {
                                var_v1_2 = (*(s32 *)((char *)((*(s32 *)((char *)(D_800BE520) + temp_s3))) + (var_s2 * 4))) + var_t3;
                            }
                            temp_a0 = (*(s32 *)((char *)(var_v1_2) + 0x0));
                            temp_v0_2 = (temp_t0 * 0x10) + var_s6;
                            temp_lo = (*var_a3 - temp_a0) * arg2;
                            var_t1 += 1;
                            var_t2 += 2;
                            var_t3 += 3;
                            var_a3 += 3;
                            (*(s8 *)((char *)(temp_v0_2) + 0xC)) = (s8) ((temp_lo >> 8) + temp_a0);
                            temp_a1 = (*(s32 *)((char *)(var_v1_2) + 0x1));
                            (*(s8 *)((char *)(temp_v0_2) + 0xD)) = (s8) (((s32) (((*(s8 *)((char *)(var_a3) - 0x2)) - temp_a1) * arg2) >> 8) + temp_a1);
                            temp_a2 = (*(s32 *)((char *)(var_v1_2) + 0x2));
                            (*(s8 *)((char *)(temp_v0_2) + 0xE)) = (s8) (((s32) (((*(s8 *)((char *)(var_a3) - 0x1)) - temp_a2) * arg2) >> 8) + temp_a2);
                        } while (var_t1 < (*(s32 *)((char *)(var_s0) + 0x8)));
                    }
                    var_s2 += 1;
                    var_s0 = (char *)(var_s0) + 0xC;
                } while (var_s2 != sp30);
            }
        }
    }
}

void func_15173C60(s32 arg0, s32 arg1) {
    func_151739B0(0, 0, arg0, arg1, 0);
}

void func_15173C90(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = func_151149AC(arg2 & 0xFF);
    if (temp_v0 != NULL) {
        func_151739B0((*(s32 *)((char *)(temp_v0) + 0x54)) & 0xFFFF7FFF, 1, arg0, arg1, (s32) ((char *)(temp_v0) - (char *)(D_800DBEF4)) / 160);
    }
}
