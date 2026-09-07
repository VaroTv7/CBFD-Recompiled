/**
 * Auto-decompiled from asm/1312F0.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


s32 func_15046C80();            /* extern */
void * func_1504715C();                        /* extern */
void * func_15055A2C();             /* extern */
u32 random_u32();                             /* extern */
f32 random_float();                                /* extern */
void * func_150E7FEC(); /* extern */
void * func_150E83AC();                 /* extern */
void * func_151541B8(); /* extern */
void * func_151D3FF4();                    /* extern */
void * func_151D40D4(); /* extern */
void * func_151D5334();     /* extern */
void * func_151D5514();                    /* extern */

void func_15103E40(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp94;
    f32 sp90;
    s32 sp8C;
    u8 sp8B;
    s32 sp84;
    f32 sp80;
    s32 sp7C;
    void * sp5C;
    f32 sp58;
    u32 sp48;                                       /* compiler-managed */
    f32 sp44;
    s32 *var_a0;
    f32 var_f8;
    s32 temp_t8;
    s32 var_v0;
    s32 var_v1;

    s32 sp74;
    if (arg0 != 0) {
        sp8B = 0;
        func_151D3FF4(arg2, arg5, arg6);
        sp7C = (*(s32 *)((char *)(arg2) + 0x0));
        sp80 = (*(s32 *)((char *)(arg2) + 0x4)) + 100.0f;
        sp84 = (*(s32 *)((char *)(arg2) + 0x8));
        func_1504715C(&sp58, arg1);
        if ((func_15046C80(&sp7C, 0, (*(s32 *)((char *)(arg2) + 0x4)) - 100.0f, &sp58) != 0) && (sp74 & 1)) {
            sp8C = sp7C;
            sp8B = 1;
            sp90 = sp58;
            sp94 = sp84;
            sp44 = random_float();
            sp48 = random_u32();
            func_150E7FEC((sp44 * 125.0f) + 204.0f, sp48, ((sp48 % 101U) + 0x9B) & 0xFF, &sp5C, &sp8C, (random_u32() % 302U) + 0x1F4, 0, 1, 0, 0, 0, (s32) arg5, 0);
        }
        if (sp8B != 0) {
            var_a0 = &sp8C;
        } else {
            var_a0 = arg2;
        }
        sp48 = var_a0;
        func_150E83AC((u32) var_a0, (s16) ((random_u32((u32) var_a0) % 62U) + 0x78), arg5, arg6);
        func_151D5404(arg2, 0x43FD0000, 0x447D4000, 0x3A8163D3, 0xF, 0x14, (s32) arg5, arg6);
        func_151D5334(arg2, 0x43FD0000, 0x447D4000, 0x3A8163D3, 5, (s32) arg5, arg6);
        func_151D5514(arg2, arg5, arg6);
        if (arg3 != 0) {
            if (arg3 == 2) {
                var_v0 = 0x42;
                var_v1 = 0x41;
            } else {
                var_v0 = 0x2B;
                var_v1 = 0x2A;
            }
            func_151D40D4(arg2, 0, arg0, arg1, 0, var_v0, var_v1, arg4);
        }
        func_15055A2C(0, (*(s32 *)((char *)(arg2) + 0x0)), (*(s32 *)((char *)(arg2) + 0x4)), (*(s32 *)((char *)(arg2) + 0x8)), 1);
        sp44 = random_float();
        temp_t8 = (random_u32() % 56U) + 0xC8;
        var_f8 = (f32) temp_t8;
        if (temp_t8 < 0) {
            var_f8 += 4294967296.0f;
        }
        func_151541B8(arg2, (sp44 * 4.0f) + 12.0f, 0x3FD20C49, var_f8, 0.0f, (s32) arg5, arg6);
    }
}
