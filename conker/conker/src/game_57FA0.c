#include <ultra64.h>

#include "functions.h"
#include "variables.h"

#include "macros.h"

void func_1502AAF0(void) {
}

void func_1502AAF8(s32 arg0) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502AB04.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502AC88.s")
// NON-MATCHING: 70 vs target's 71 instructions. Target keeps the loop's
// base pointer in a callee-saved $s2 (extra save/restore pair) and caches
// arg2<<3 back to its own stack slot after the func_10004514 call, where
// this reconstruction keeps the base pointer in a temp register and never
// needs to re-derive arg2<<3; also a stable beqz-vs-blez branch-type
// difference on the initial zero-trip-count guard for the loop IDO
// generates from the single `for` loop below (both correct, no reachable
// source phrasing changed it). Semantics confirmed identical.
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502AF04.s")
// void *func_1502AF04(void *arg0, void *arg1, s32 arg2, s32 arg3) {
//     void *base;
//     void *p;
//     s32 i;
//
//     base = (void *) (((s32) arg0 + (arg2 << 3)) & ~0xF);
//     p = (void *) ((((s32) arg1 + 8) & ~0xF) + (((s32) arg0 + (arg2 << 3)) & 0xF));
//
//     func_10004514(base,
//                   (void *) (((s32) arg1 + 8) & ~0xF),
//                   ((((s32) arg0 + (arg2 << 3)) & 0xE) + (arg3 << 3) + 0xF) & ~0xF,
//                   1);
//
//     for (i = 0; i < arg3; i++) {
//         *(s32 *) ((char *) p + i * 8) += (s32) arg0;
//     }
//
//     return p;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B020.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B110.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B224.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B350.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B4A8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B5C8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B6BC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B7F0.s")
// void func_1502B7F0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
//     s32 sp38;
//     s32 sp34;
//     s32 temp_s1;
//     s32 offset;
//     s32 i;
//
//     sp38 = 1;
//     offset = &D_00AB1950; // 0xAB1950 - assets offsets table
//     temp_s1 = &arg2;
//
//     i = arg1;
//     if (i != 0) {
//         do {
//             temp_s1 = ALIGN4(temp_s1);
//             if (sp38 != 0) {
//                 offset += func_1502AC88(offset, temp_s1, &sp34);
//             }
//             sp38 = sp34 & 0xFFFFFFF;
//             temp_s1 += 1;
//         } while (i-- != 0);
//     }
//
//     if (sp38 != 0) {
//         *arg0 = func_1502B350(offset, sp34, &sp38);
//     } else {
//         *arg0 = 0;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B8E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_57FA0/func_1502B9B4.s")
// NON-MATCHING: maybe 50% there?
// s32 func_1502B9B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
//
//     s32 stack2[2];
//     s32 stack1[2];
//     s32 stack0[5];
//
//     s32 more;
//     s32 offset;
//     s32 *tmp;
//     s32 i;
//
//     more = 1;
//     offset = &D_00AB1950;
//     tmp = &arg1;
//
//     for (i = arg0; i != 0; i--) {
//         tmp = ALIGN4(tmp) + 4;
//         if (more != 0) {
//             offset += func_1502AC88(offset, tmp - 4, &stack0);
//         }
//         more = *stack0 & 0xFFFFFFF;
//     }
//
//     if (more != 0) {
//         more = ALIGN2(stack0[0] & 0xFFFFFFF);
//         if ((*stack0 & 0x70000000) == 0x10000000) {
//             if (((s32) &stack1 & 8) != 0) {
//                 *stack1 = &stack2;
//             }
//             func_10004514(offset, stack1, 0x10, 1); // decompress?
//             more = *stack1;
//         }
//     }
//
//     return more;
// }
