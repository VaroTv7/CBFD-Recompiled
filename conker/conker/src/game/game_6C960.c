/**
 * Auto-decompiled from asm/6C960.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


void *allocate_memory();                /* extern */
void * func_10004074();                            /* extern */
void * func_1502D824();                 /* extern */
void * func_1502FE10(); /* extern */
void * func_1505E0C4(); /* extern */
void * func_1507BDB0();                 /* extern */
void * func_150A81D0(); /* extern */
void * func_150A9984();                           /* extern */

void func_1503F4B0(void *arg0) {
    void *sp44;
    s16 sp40;
    s32 sp38;
    void *temp_v0;
    void *temp_v0_2;

    sp44 = NULL;
    if ((*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x3E0)) != 0) {
        temp_v0 = allocate_memory(0x320, 1, 2, 2);
        sp44 = temp_v0;
        func_1502D824(arg0, 0, temp_v0);
        sp40 = 0x1000;
        temp_v0_2 = (char *)(arg0) + (D_800BE9C0 * 4);
        sp38 = (*(s32 *)((char *)(temp_v0_2) + 0x3E8));
        func_150A81D0(&sp38, (*(s32 *)((char *)(temp_v0_2) + 0x3E0)), arg0, (*(s32 *)((char *)(arg0) + 0x3F0)), (s32) (*(s32 *)((char *)(arg0) + 0x3F4)), &sp40, 0, 0);
        func_150A9984((*(s32 *)((char *)(((char *)(arg0) + (D_800BE9C0 * 4))) + 0x3E8)), (*(s32 *)((char *)(arg0) + 0x3F4)));
        (*(s32 *)((char *)(arg0) + 0x3F6)) = 1;
    }
    func_1507BDB0(arg0, D_800BE9A4, 0, 0);
    if (sp44 != NULL) {
        func_10004074(sp44);
    }
}

void func_1503F5B8(void *arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    func_1505E0C4(arg3, 0, 0, arg0, 0, arg1, arg2, (s32) (*(s32 *)((char *)(arg0) + 0x3F5)), arg3, arg4, 0.0f, 0.0f, arg5);
}

s32 func_1503F62C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void **arg6) {
    s32 sp3C;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_v0;

    temp_v0 = allocate_memory(0x3F8, 1, 2, 2);
    *arg6 = temp_v0;
    if (temp_v0 == NULL) {
        return 1;
    }
    bzero(*arg6, 0x40);
    (*(s32 *)((char *)((*arg6)) + 0x215)) = 1;
    (*(s32 *)((char *)((*arg6)) + 0x45)) = 1;
    func_1502FE10(arg0, arg2, arg3, arg4, arg5, *(char *)(arg6) + 0x3F0, &sp3C);
    (*(s8 *)((char *)((*arg6)) + 0x3F4)) = (s8) sp3C;
    (*(s8 *)((char *)((*arg6)) + 0x3F5)) = (s8) arg1;
    (*(s32 *)((char *)((*arg6)) + 0x3F6)) = 0;
    (*(s32 *)((char *)((*arg6)) + 0x3E8)) = allocate_memory(sp3C << 6, 1, 2, 2);
    (*(s32 *)((char *)((*arg6)) + 0x3EC)) = allocate_memory(sp3C << 6, 1, 2, 2);
    temp_s0 = *arg6;
    temp_a0 = (*(s32 *)((char *)(temp_s0) + 0x3E8));
    if ((temp_a0 == NULL) || ((*(s32 *)((char *)(temp_s0) + 0x3EC)) == NULL)) {
        if (temp_a0 == NULL) {
            func_10004074(temp_a0);
        }
        temp_a0_2 = (*(s32 *)((char *)((*arg6)) + 0x3EC));
        if (temp_a0_2 == NULL) {
            func_10004074(temp_a0_2);
        }
        func_10004074(*arg6);
        return 1;
    }
    func_1503F5B8(temp_s0, 1, 0, 1.0f, 0.0f, 0);
    return 0;
}

void func_1503F7B8(void *arg0) {
    func_100043B4((*(s32 *)((char *)(arg0) + 0x3E8)), 4);
    func_100043B4((*(s32 *)((char *)(arg0) + 0x3EC)), 4);
    func_10004074(arg0);
}
