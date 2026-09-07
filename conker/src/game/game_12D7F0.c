/**
 * Auto-decompiled from asm/12D7F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


u32 random_u32();                                /* extern */
s32 func_1510D0EC();                  /* extern */
void * func_151616D0();                          /* extern */
extern s32 D_80088BC0;
extern s32 D_80090324;

void func_15100340(s32 arg0) {
    void * sp44;
    s32 var_s2;
    u32 var_s0;
    u8 *temp_s0;
    u8 *var_s1;
    u8 temp_t9;

    (*(s32 *)((char *)&(sp44) + 0x0)) = (s32) (*(s32 *)((char *)&(D_80088BC0) + 0x0));
    (*(u8 *)((char *)&(sp44) + 0x4)) = (u8) (*(u8 *)((char *)&(D_80088BC0) + 0x4));
    if (arg0 == 0) {
        var_s1 = D_800BE500;
        D_800DD405 += 1;
        var_s2 = 0;
        do {
            var_s0 = 0x23;
            if (*var_s1 != 0) {
                var_s0 = 0x46;
            }
            if ((u32) (random_u32() % 1000U) < var_s0) {
                temp_s0 = var_s2 + &sp44;
                temp_t9 = *var_s1 ^ 1;
                *var_s1 = temp_t9;
                if (temp_t9 & 0xFF) {
                    func_151616D0(*temp_s0, 0x18, 0);
                } else {
                    func_151616D0(*temp_s0, 0x1C, 0);
                    func_151616D0(*temp_s0, 0x17, 0);
                }
            }
            var_s2 += 1;
            var_s1 += 1;
        } while (var_s2 != 5);
    }
}

void *func_15100464(void *arg0) {
    void * sp58;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    u8 *var_s1;
    void *temp_s2;
    void *var_s2;

    temp_t6 = (s32) D_800DD405 >> 2;
    temp_v0 = func_1510D0EC(*(&D_80090324 + ((temp_t6 % 3) * 4)), &sp58, 3, 0);
    (*(s32 *)((char *)(arg0) + 0x0)) = 0xDB060008;
    (*(s32 *)((char *)(arg0) + 0x4)) = temp_v0;
    temp_s2 = (char *)(arg0) + 8;
    temp_v0_2 = func_1510D0EC(*(&D_80090324 + (((s32) (temp_t6 + 1) % 3) * 4)), &sp58, 3, 0);
    (*(s32 *)((char *)(arg0) + 0x8)) = 0xDB06000C;
    (*(s32 *)((char *)(temp_s2) + 0x4)) = temp_v0_2;
    var_s2 = (char *)(temp_s2) + 8;
    var_s1 = D_800BE500;
    var_s0 = 0x10;
    do {
        temp_v0_3 = func_1510D0EC((*(s32 *)((char *)((&D_80090324 + (*var_s1 * 4))) + 0xC)), &sp58, 3, 0);
        (*(s32 *)((char *)(var_s2) + 0x0)) = (s32) ((var_s0 & 0xFFFF) | 0xDB060000);
        (*(s32 *)((char *)(var_s2) + 0x4)) = temp_v0_3;
        var_s2 = (char *)(var_s2) + 8;
        var_s0 += 4;
        var_s1 += 1;
    } while (var_s0 != 0x24);
    return var_s2;
}
