/**
 * Auto-decompiled from asm/DAE10.s (non-matching)
 * Renames: gGameState -> gGameState, gObjects -> gObjects
 */

#include <ultra64.h>

#include "functions.h"
#include "variables.h"


/* Warning: missing "jr $ra" in last block of func_150AD960 (.L150AD98C). */

s32 func_150AD990();                        /* static */
s32 func_150AD960();

s32 func_150AD960(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a2;
    s32 var_a3;

    var_a2 = arg2 - arg0;
    var_a3 = arg3 - arg1;
    if (var_a2 < 0) {
        var_a2 = -var_a2;
    }
    if (var_a3 < 0) {
        var_a3 = -var_a3;
    }
    if (var_a3 < var_a2) {
        return func_150AD990(var_a2, var_a3);
    }
    return var_a2 + var_a3;
}

s32 func_150AD990(void) {
    return M2C_ERROR(/* Read from unset register $v0 */) - M2C_ERROR(/* Read from unset register $t0 */);
}
