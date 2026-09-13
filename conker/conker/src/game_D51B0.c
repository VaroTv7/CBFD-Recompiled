#include <ultra64.h>
#include "functions.h"
#include "variables.h"


// NON-MATCHING: another confirmed instance of the 64-bit-instruction
// family already ruled out this session (func_150ADACC/func_150ADA20/
// func_150ADA68) - target zeroes 0x40 bytes via eight genuine `sd
// $zero` (MIPS III store-doubleword) instructions, but under this
// project's -mips2 flag, IDO always decomposes ANY 64-bit C operation
// into 32-bit register-pair code, even for the trivial case of storing
// a compile-time constant zero (confirmed: `*(s64*)ptr = 0;` compiles
// to two `li`+`sw` pairs, not `sd`; `bzero(ptr, 0x40)` compiles to a
// real function call, not inlined `sd`s either). The rest of the
// function (three angle args scaled by 65536.0f, truncated, split into
// high/low 16-bit halves) is straightforward and not blocked - only
// the zeroing prologue is unreachable via plain C here.
// s16 / f32 matrix
// void func_150A7D00(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
//     u32 v1 = (s32) (arg1 * 65536.0f);
//     u32 v2 = (s32) (arg2 * 65536.0f);
//     u32 v3 = (s32) (arg3 * 65536.0f);
//
//     // zero 0x40 bytes at arg0 (unreachable via plain C, see above)
//     *(s16 *) ((char *) arg0 + 0x0) = 1;
//     *(s16 *) ((char *) arg0 + 0xA) = 1;
//     *(s16 *) ((char *) arg0 + 0x14) = 1;
//     *(s16 *) ((char *) arg0 + 0x1E) = 1;
//     *(s16 *) ((char *) arg0 + 0x18) = v1 >> 16;
//     *(s16 *) ((char *) arg0 + 0x1A) = v2 >> 16;
//     *(s16 *) ((char *) arg0 + 0x1C) = v3 >> 16;
//     *(s16 *) ((char *) arg0 + 0x38) = v1;
//     *(s16 *) ((char *) arg0 + 0x3A) = v2;
//     *(s16 *) ((char *) arg0 + 0x3C) = v3;
// }
#pragma GLOBAL_ASM("asm/nonmatchings/game_D51B0/func_150A7D00.s")
