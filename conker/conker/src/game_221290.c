#include <ultra64.h>

#include "functions.h"
#include "variables.h"



#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F3DE0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F42E8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F4F38.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F578C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F63C4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F6970.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F6B28.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F6FD0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F78B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F7F60.s")
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F8088.s")
// NON-MATCHING: init function for the fixed-address global buffer
// D_800E1880 (not yet declared anywhere - see extern below). Sets
// unkC/unk10/unk14 to -1, copies the 3 args into unk0/unk4/unk8,
// zeroes unk201C/unk2020/unk3BA0, bails if func_151F8088(ptr, 0)
// fails, then zeroes unk8474 and bzero's a 0x900-byte region at
// +0x6A64.
// extern u8 D_800E1880[];
//
// void *func_151F85C4(s32 arg0, s32 arg1, s32 arg2) {
//     void *volatile obj = D_800E1880;
//
//     if (obj == 0) {
//         return 0;
//     }
//
//     *(s32 *) ((char *) obj + 0xC) = -1;
//     *(s32 *) ((char *) obj + 0x10) = -1;
//     *(s32 *) ((char *) obj + 0x14) = -1;
//     *(s32 *) ((char *) obj + 0x0) = arg0;
//     *(s32 *) ((char *) obj + 0x4) = arg1;
//     *(s32 *) ((char *) obj + 0x8) = arg2;
//     *(s32 *) ((char *) obj + 0x201C) = 0;
//     *(s32 *) ((char *) obj + 0x2020) = 0;
//     *(s32 *) ((char *) obj + 0x3BA0) = 0;
//
//     if (func_151F8088(obj, 0) == 0) {
//         return 0;
//     }
//
//     *(s32 *) ((char *) obj + 0x8474) = 0;
//     bzero((char *) obj + 0x6A64, 0x900);
//
//     return obj;
// }
// 51 vs target's 59 instructions. Target reloads the D_800E1880
// pointer from its stack home slot before EVERY single field write
// (not just around the two calls), the signature of a genuinely
// volatile-like local in the original source - marking `obj` itself
// `volatile` was necessary just to get target's basic shape (a plain
// pointer left the null check, and everything else, optimized away
// entirely to ~45 instructions, since IDO can prove the address is a
// compile-time-constant non-null value). Even fully volatile falls 8
// short of target's reload density; a narrower fix forcing the reload
// only for the null check (via a volatile-qualified access, or via
// `&obj` used through a second pointer variable) came out worse (48
// instructions) since it left most later field writes register-
// resident instead of matching target's per-write reload pattern.
#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F85C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/game_221290/func_151F86B0.s")
