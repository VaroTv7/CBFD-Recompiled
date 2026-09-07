/**
 * Auto-decompiled from asm/EB020.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void * func_15052590();               /* extern */
void * func_15052F9C(); /* extern */
void * func_1505327C();            /* extern */
extern f32 D_8009FFF0;

void func_150BDB70(void *arg0) {
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    void *sp38;
    f32 var_f0;
    s32 temp_f10;
    s32 temp_v0;
    s32 temp_v1_3;
    s32 var_a1;
    s32 var_t0;
    s8 var_v0;
    u8 temp_v0_3;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_t0;
    void *temp_v0_2;
    void *temp_v1_2;

    var_a1 = 1;
    if ((*(s32 *)((char *)(arg0) + 0x4)) == 0x23) {
        var_a1 = 0xA;
        sp58 = 0xB;
        var_t0 = 0xC;
        sp50 = 1;
    } else {
        sp58 = 2;
        var_t0 = 3;
        sp50 = 3;
    }
    temp_v0 = (*(s32 *)((char *)(arg0) + 0x2E4));
    (*(s32 *)((char *)(arg0) + 0x2E8)) = 0;
    (*(s32 *)((char *)(arg0) + 0x2FC)) = 0;
    (*(s32 *)((char *)(arg0) + 0x2E4)) = (s32) (temp_v0 - (temp_v0 >> 3));
    if (D_800BE616 != 0) {
        (*(u8 *)((char *)(arg0) + 0x66)) = (u8) ((*(u8 *)((char *)(arg0) + 0x66)) & 0xFFDF);
    }
    temp_v1 = (*(s32 *)((char *)(arg0) + 0x13C));
    if (temp_v1 != 0) {
        temp_v0_2 = &gObjects + (temp_v1 * 0x32C) + 0xFFFEC2D0;
        temp_a0 = (*(s32 *)((char *)(temp_v0_2) + 0x318));
        if (temp_a0 != NULL) {
            (*(s8 *)((char *)(arg0) + 0x2FC)) = (s8) (1 << (*(s8 *)((char *)(temp_a0) + 0x23D)));
        }
        temp_v1_2 = (*(s32 *)((char *)(temp_v0_2) + 0x31C));
        if ((temp_v1_2 != NULL) && ((*(s32 *)((char *)(temp_v1_2) + 0x197)) != 0)) {
            temp_f10 = (s32) ((*(s32 *)((char *)(temp_v1_2) + 0x16C)) * D_8009FFF0);
            (*(s16 *)((char *)(arg0) + 0x7A)) = (s16) temp_f10;
            (*(s16 *)((char *)(arg0) + 0x76)) = (s16) temp_f10;
            var_f0 = (*(s32 *)((char *)((*(s32 *)((char *)(temp_v0_2) + 0x31C))) + 0x170));
            if (var_f0 > 180.0f) {
                var_f0 -= 360.0f;
            }
            (*(s32 *)((char *)(arg0) + 0x2E8)) = 1;
            (*(u8 *)((char *)(arg0) + 0x66)) = (u8) ((*(u8 *)((char *)(arg0) + 0x66)) | 0x20);
            (*(s32 *)((char *)(arg0) + 0x2E4)) = (s32) (var_f0 * 10.0f);
        }
    }
    sp5C = var_a1;
    sp54 = var_t0;
    func_15052590(arg0, var_a1, &gObjects, 0x32C);
    temp_v0_3 = (*(s32 *)((char *)(arg0) + 0x232));
    if (sp58 == temp_v0_3) {
        func_15052F9C(arg0, 0x42C80000, sp50, 4, 0, var_t0, 0, 0, 0, 0);
        return;
    }
    if ((var_a1 == temp_v0_3) && (~D_800D18A0 & D_800CC268) && (func_15072208(arg0, 0) == 0)) {
        var_v0 = 0;
        temp_v1_3 = ~D_800D18A0 & D_800CC268;
loop_19:
        if (!((1 << var_v0) & temp_v1_3) && (var_v0 < 0x19)) {
loop_21:
            var_v0 += 1;
            if (!((1 << var_v0) & temp_v1_3)) {
                if (var_v0 < 0x19) {
                    goto loop_21;
                }
            }
        }
        if (var_v0 < 0x19) {
            temp_t0 = &gObjects + (var_v0 * 0x32C);
            if (((*(s32 *)((char *)(temp_t0) + 0x127)) != 0xFF) && ((*(s32 *)((char *)(temp_t0) + 0x65)) == 0)) {
                temp_a0_2 = (*(s32 *)((char *)(temp_t0) + 0x31C));
                if (((*(s32 *)((char *)(temp_a0_2) + 0x19B)) == 0) && ((*(s32 *)((char *)(temp_a0_2) + 0x197)) == 0) && ((*(s32 *)((char *)(temp_t0) + 0x13C)) == 0)) {
                    (*(s32 *)((char *)(arg0) + 0x124)) = var_v0;
                    sp38 = temp_t0;
                    func_1505327C(arg0, 0x42300000, 0x404CCCCD, sp58, sp50);
                    (*(s32 *)((char *)((*(s32 *)((char *)(temp_t0) + 0x31C))) + 0x24)) = 0x258;
                    (*(s32 *)((char *)((*(s32 *)((char *)(temp_t0) + 0x31C))) + 0x19E)) = 0;
                    return;
                }
            }
            var_v0 += 1;
            if (var_v0 >= 0x19) {

            } else {
                goto loop_19;
            }
        }
    }
}
