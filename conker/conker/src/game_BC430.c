#include <ultra64.h>

#include "functions.h"
#include "variables.h"


// NON-MATCHING: full semantics recovered and verified via isolated
// harness, including matching all four library call ORDERS exactly
// (cosf, sinf, sinf, cosf - target genuinely calls both twice rather
// than caching either result, matching the "redundant recompute"
// pattern seen elsewhere this session; getting the call order right
// required writing each output line as `cosf(angle)*dx +
// sinf(angle)*dz + ...` rather than the arithmetically-equivalent
// sin-first ordering, which reversed call order entirely). Rotates
// the (arg0-arg1) offset in the XZ plane by arg2 degrees and adds it
// back onto arg1, writing the result into arg3's x/z fields (y/unk4
// untouched) - a "predict position after turning" helper.
//
// Remaining gap: target's stack frame is 0x40 bytes (one 4-byte spill
// slot more than this reconstruction's 0x30), and it defers writing
// arg3->unk0 until after computing most of the second output line's
// ingredients, rather than writing it right after the first line's
// arithmetic completes - a call-spill-scheduling difference across
// the four library calls, not reproduced by any source-level
// reordering tried this round.
#pragma GLOBAL_ASM("asm/nonmatchings/game_BC430/func_1508EF80.s")
// void func_1508EF80(struct17 *arg0, struct17 *arg1, f32 arg2, struct17 *arg3) {
//     f32 dx;
//     f32 dz;
//     f32 angle;
//
//     dx = arg0->unk0 - arg1->unk0;
//     dz = arg0->unk8 - arg1->unk8;
//     angle = arg2 * D_8009DC80;
//     arg3->unk0 = cosf(angle) * dx + sinf(angle) * dz + arg1->unk0;
//     arg3->unk8 = -(sinf(angle) * dx) + cosf(angle) * dz + arg1->unk8;
// }
