# Conker's Bad Fur Day N64 decomp — build-fixing handoff

## Goal
Get `conker/conker` (a splat-based N64 decompilation of Conker's Bad Fur
Day, using IDO 5.3 via `mips-linux-gnu-as`/`ido5.3_recomp/cc` in WSL) to
build successfully with `make -j$(nproc)` — not byte-perfect matching,
just a successful compile+link. Bugs at runtime are fine; the goal is a
buildable/linkable ROM, as a step toward eventually running natively.

## IMPORTANT: an earlier version of this file was wrong about scope
It once claimed the build was down to "a persistent set of ~4 files."
That was based on incomplete information: `make -j4` **without `-k`**
stops scheduling new compile jobs as soon as any job fails, so once 4
files hit early errors, most of the other ~550 files in the tree were
**never actually compiled at all** in that session — their apparent
"success" was really "never attempted." A full `make -j$(nproc) -k`
(keep going past errors) revealed the real picture: **270 of 558
files** had genuine compile errors, for a mix of reasons described
below. Always use `-k` for any build whose purpose is to survey the
current error picture — a non-`-k` build tells you almost nothing once
more than a handful of files are broken.

**Always write the build log somewhere OUTSIDE `wsl.exe`'s own `/tmp`.**
WSL2's lightweight VM can shut down after periods of idle host activity
between separate `wsl.exe -e ...` invocations, and `/tmp` (tmpfs) is
wiped on that restart — this cost real time when several
multi-hundred-thousand-line logs vanished between one command and the
next. Write to a file inside the repo itself (e.g. `build_log.txt` at
the repo root, as this handoff's own workflow does) so it survives.

## Current status (as of this handoff)
Started at 3847 errors across 270 files (after discovering the true
scope above). After 21 mechanical fixer scripts (below) plus targeted
hand fixes, check `build_log.txt` from a fresh
`rm -rf build && make -j$(nproc) -k > build_log.txt 2>&1` for the exact
current number — this file goes stale fast, work continues across
sessions.

**Session note**: three genuine, previously-undiscovered bugs were
found and fixed in the fixer scripts themselves this session (not in
the target codebase) — see the three new trap sections below
(whitespace-separated stars, unbounded-file-scan, and
trailing-comment-breaks-declaration-scan) — plus one new fixer script
(#14c, trim_overcounted_same_file_calls.py). Progression this session:
1329/196 (regressed, entering this session) → 1334/196 (flat, after
fixing only the star-whitespace + unbounded-file-scan bugs — fixing
those let the compiler parse deeper into already-broken files and
expose new-looking errors that were always there but previously hidden
behind an earlier hard stop, the same "cascading exposure" effect
documented throughout this file) → 1186/196 (after fixing the
trailing-comment-truncation bug: "Selector requires struct/union
pointer as left hand side" collapsed from 167→39) → 1145/191 (after
adding #14c, trim_overcounted_same_file_calls.py: "number of arguments
doesn't agree" dropped 93→52) → 1102/187 (after adding #10c,
fix_bare_scalar_dereference.py: "Dereferenced a non-pointer" dropped
91→43) → 1064/186 (after adding #7b, fix_dot_on_struct_pointer_global.py
+ the array-global extension to #7: "Selector requires struct/union"
dropped 90→52, most of the remainder being the deliberately-unfixed
`gObjects.unkXX` cases) → 1067/187 (a REGRESSION: #10d's first version
only cast one side of a pointer subtraction, still leaving it illegal —
caught by comparing the error category count against expectation
rather than trusting the reported fix count; see #10d's "Bug history"
below) → 1028/186 (after fixing #10d to cast both operands:
"Unacceptable operand of '-'" dropped 70→31) → 1014/186 (after fixing
#14b's zero-argument-call gap: "number of arguments doesn't agree"
dropped 55→41) → 964/180 (after a batch of manual fixes to ~12
"void-returning function whose result is actually used" cases — see
below — "Reference of an expression of void type" dropped clean off
the top-25 list from 51) → 946/176 (after adding #10e,
fix_pointer_comparison.py: "Unacceptable operand of == or !=" dropped
48→29) → 885/171 (after the structs.h pad-block expansions +
`gCurrentObject->unk3B`→`unique_id` fix: "member of structure or union
required" dropped 49→12, no new errors introduced, confirming the
struct sizes were preserved correctly) → 853/171 (after fixing the
single-star-only trap in 4 scripts' scalar-pointer detection: "Selector
requires struct/union pointer" dropped clean off the top-25 list from
39 — fully resolved) → 837/171 (after finding/reverting the
fix_trailing_dereference.py "blanket scan" bug and shipping its
narrowed replacement: "Dereferenced a non-pointer" dropped 43→27, no
other category regressed, confirming the revert+narrow-rewrite was
correct) → 825/171 (after extending fix_pointer_to_float_cast.py with
two more unambiguous shapes: "Cast a pointer into a non-integral type"
dropped 27→15) → 816/173 (a REGRESSION: fix_float_times_int_addend.py's
number regex didn't consume full float literals, corrupting 6 lines
with dangling fragments; fix_pointer_subtraction_index.py separately
corrupted one already-valid line by matching identifiers that were
actually field-access components — both caught via the file-count
ticking up and a brand-new "Syntax Error" category, then fully
diagnosed, hand-repaired, and fixed at the regex level — see both new
trap write-ups above) → 806/170 (both bugs confirmed fixed: "Syntax
Error" category gone entirely, file count improved to 170, better than
the pre-regression 825/171 since the 37 genuine float*int-addend fixes
are now correctly applied without corruption) → 788/169 (after fixing
fix_void_pointer_arithmetic.py's `&IDENT + REST` bug: "Unacceptable
operand of '&'" dropped 22→8 residual, file count improved again) →
**785/168 (after adding #7c, fix_address_of_array_global.py:
"Unacceptable operand of a multiplicative operator" dropped 20→9)** —
this build's "Selector requires struct/union" count went UP (52→59)
and a new "Constants must have arithmetic type" (9) category appeared,
both investigated and confirmed to be ordinary cascading exposure of
PRE-EXISTING, unrelated bugs in the same files (a scalar global
`D_8008FE54` being array-indexed then dot-accessed — nothing to do
with the array-global fix; `(void *)0xHEXCONST`-style casts unrelated
to `&ARRAYNAME` patterns), not a regression — net totals genuinely
improved (785<788 errors, 168<169 files) → 771/168 (after adding #8e,
fix_float_shift_operand.py: "Unacceptable operand of shift operator"
dropped clean off the top-25 list from 14 — fully resolved) →
762/167 (after adding #8d2, fix_pointer_cast_constant.py: "Constants
must have arithmetic type" dropped clean off the top-25 list from 9 —
fully resolved) → 754/167 (after 6 manual fixes to "Type void * of this
argument is incompatible with type float" call sites — see "Manual
fixes" below; category dropped 12→6, the remaining 6 being genuinely
ambiguous arg-count-mismatched calls left for manual reconstruction) →
736/166 (after extending pad_undercounted_same_file_calls.py and
trim_overcounted_same_file_calls.py to also start their search at a
STRICT local forward declaration (not just the definition) when one
precedes the definition — previously both scripts only scanned calls
occurring AFTER the definition line, missing same-file calls that occur
between an existing full/strict prototype and the (later) definition;
add_relaxed_self_declarations.py deliberately skips adding a relaxed
declaration whenever a strict one already exists locally, so those
calls were governed by the strict signature with nothing to pad/trim
them — this extension closes that gap. Caught 11 more pad cases (4
files) and 12 more trim cases (10 files), including 2 of the 4
call-count-mismatched sites flagged manual-only just one round earlier
(`game_1B81D0.c:254`, `game_1D6E80.c:658` — both turned out to be
ordinary same-file overcounted calls, not genuinely ambiguous; the
"manual-only" flag was premature — the real gap was in the scripts, not
in the data). This rebuild also revealed those same two lines still
had a SEPARATE, purely-type-level "void* into float slot" mismatch
their trim alone didn't touch — fixed by hand with the usual
`(f32)(s32)(EXPR)` convention) → **rebuild in progress after adding
#15, fix_cross_file_arg_counts.py: a new, larger-scope gap in the same
family — `restore_promotion_safe_signatures.py` MUST restore a strict,
full prototype in `functions.h` for any function whose real definition
uses a promotion-risky parameter type directly (`f32`/`s8`/`u8`/`s16`/
`u16`, not behind a pointer — a K&R empty-parens declaration implies
default argument promotion, which such a definition's own unpromoted
parameter doesn't satisfy). Once that prototype is strict, EVERY
cross-file call site is checked against its real argument count again —
but pad/trim_..._same_file_calls.py are (correctly) scoped to same-file
calls only, so any OTHER file calling one of these ~52 promotion-risky
functions with the wrong argument count had nothing to fix it. Script
#15 reads every currently-strict prototype straight out of
`functions.h` and pads/trims matching call sites tree-wide, exactly
like the same-file scripts but cross-file and functions.h-sourced.
Caught 40 call sites across 23 files (many being repeat callers of a
small set of common math helpers — `func_15048A70`, `func_150484A0`,
`func_15048360`, `func_1505A630`, `func_1513C5B0`, etc. — called
inconsistently from many different files); every trim/pad verified by
diff against its real `functions.h` param count before applying,
confirmed idempotent, 0 CRLF corruption) → 716/162 (that rebuild
resolved most of the arg-count and void*/float categories but
re-exposed 2 pre-existing, unrelated bugs in `game_1D6E80.c` behind the
now-fixed call — a SECOND illegal `(f32) arg0` direct pointer-to-float
cast at line 650, and two missing local declarations, `f32 spC0; f32
spC4;`, whose write came from an out-param call the compiler couldn't
previously reach) → **715/161 (final for this round — fixed both, plus
one more `(f32) arg0` cast revealed one file-compile-error deeper at
line 890 inside a `random_u32(...)` call carrying spurious extra
arguments its real zero-arg signature ignores; `game_1D6E80.c` is now
fully clean, file count improved to 161)**. This round's total: 12
manual call-site fixes across 6 files, 1 pad/trim script-scope
extension (11+12 more calls fixed), 1 new script (`fix_cross_file_arg_
counts.py`, 40 more calls fixed), for a combined 762→715 (47 errors,
6 files) → **707/160 (confirmed — after 8 manual fixes to "Unacceptable
operand of == or !=", which dropped exactly 28→20 as expected, file
count improved 161→160, no new/spiking category, and the `D_800DDD64`
retype produced only the expected tolerated "illegal combination of
pointer and integer" WARNINGS at its two remaining `s32`-style
assignment/read sites in `game_1AB530.c`, never a hard error).
Investigated whether
`fix_pointer_comparison.py`'s narrow `IDENT (==|!=) &TARGET` shape
could be safely widened to also cover `IDENT1 (==|!=) IDENT2` — two
BARE identifiers, neither with `&` — since the exact same "cast both
sides identically is always safe" argument applies unconditionally to
that shape too. Did NOT extend the script to scan tree-wide for it,
though, since bare `IDENT == IDENT2` is an extremely common,
overwhelmingly-already-valid shape throughout normal C code (plain int
comparisons) — blindly rewriting all of those into pointer comparisons
would be needless scope creep with no benefit. Instead handled the 8
bare-bare instances actually in this build's error list individually,
each via the fix that best matched its OWN context (checked first,
consistent with how the void*/float category was handled this round):
  - `game_FA360.c` (4 of the 8: lines 201, 209, 259, 265, all
    `var_a0 != var_v0`/`var_a0 != var_v0_3`): `var_a0` is declared
    `void *` but its FIRST use (`var_a0 = arg0; temp_s0 = var_a0;`)
    already captures the real pointer value into `temp_s0` before
    `var_a0` gets REUSED later purely as an integer loop counter
    (`var_a0 = var_a1 + var_v0;`, then compared against the real `s32
    var_v0`) — a classic register-reuse decompilation artifact.
    Retyped the declaration `void *var_a0;` → `s32 var_a0;` (safe: the
    earlier `var_a0 = arg0;`/`temp_s0 = var_a0;` assignments become
    ordinary tolerated pointer↔int implicit conversions, matching the
    `var_f0`/`D_8009F8BC` precedent from earlier this round).
  - `game_1AB530.c:75` (`arg0 == D_800DDD64`): `D_800DDD64` is declared
    `extern s32` in the SHARED `variables.h` (governs every file), but
    used unambiguously as a real pointer throughout `game_1AB530.c`
    (compared to `NULL`, assigned to/from `void *` locals, dereferenced
    with `(char *)(D_800DDD64) + offset`). Checked the other 2 files
    that reference it tree-wide first (`game_36600.c`,`game_34F20.c`)
    — both only ever do `D_800DDD64 = 0;`, compatible with either type
    — so retyped the shared declaration itself to `extern void *
    D_800DDD64;`, the root-cause fix, safe because no OTHER file's
    usage conflicts.
  - `game_119370.c:135`, `game_1EF500.c:547`, `game_1EF500.c:560` (3 of
    the 8, all `arg0 == arg1` inside `FUNC(void *arg0, s32 arg1)`):
    checked whether `arg1` was used anywhere else in its function first
    — in all 3 cases it is NOT (a leftover, otherwise-unused parameter,
    likely an original NULL-sentinel comparison the decompiler
    stranded) — so did NOT retype the parameter (would touch the
    function's own ABI-visible signature for no reason); applied the
    same local `(char *)(X) == (char *)(Y)` cast-both-sides fix
    `fix_pointer_comparison.py` already uses for the `&TARGET` shape.
  - 0 CRLF corruption, all edits verified individually (no blind
    tree-wide script for this batch, per the reasoning above)

**14 more manual fixes to "Cast a pointer into a non-integral type" (15
total in the 707/160 build)**, same established `(f32)(s32)(EXPR)`
convention throughout, checked individually against each call's real
signature (or lack of one) before editing:
  - `game_105FC0.c:368`, `game_1368C0.c:161/163`, `game_14F130.c:63`,
    `game_1A20A0.c:891/901/971` (×3, same call site pattern),
    `game_21CCB0.c:75`, `game_DE5A0.c:180/301`: straightforward
    `(f32) PTR_EXPR` → `(f32)(s32)(PTR_EXPR)` at a call argument, each
    confirmed against the real callee signature (or, where the callee
    has no strict prototype anywhere in the tree — `func_1508EF80`,
    `func_15059140` — confirmed the fix is still correct regardless
    since K&R-relaxed declarations don't type-check arguments; only the
    cast expression itself needs to be legal).
  - `game_15A840.c:64`: same line ALSO had a sibling "Cast a
    non-integral type into a pointer" error (`(void *) (FLOAT_EXPR)`)
    — fixed both together since `func_1508EF80` has no strict
    prototype anywhere (relaxed-only), so the `(void *)` wrapper served
    no purpose; dropped it, matching the OTHER call site to the same
    function earlier in the file which already passes a bare float
    with no cast at all.
  - `game_142560.c:593/594`: a stranger case — `(f32) (char *)(temp_f0)`
    (an erroneous, spurious `(char *)` cast injected between a `(f32)`
    cast and its operand, for a plain `s32`-read temp that's already
    correctly cast to `(f32)` elsewhere on the SAME line) wrapped in an
    outer `(void *) (...)` around the whole arithmetic expression being
    stored into an `f32` lvalue (a second, sibling "Cast a non-integral
    into a pointer" error on the same line). Dropped both the spurious
    `(char *)` and the outer `(void *)` wrapper, since the surviving
    `(f32) temp_f0 + (...)` expression already numerically matches the
    `f32`-typed destination with no cast needed at the top level.
  - `game_DE5A0.c:172`: **this is the exact line flagged manual-only
    (as "genuinely ambiguous," arg-count-mismatched) two rounds ago** —
    by this build its argument count had ALREADY been silently fixed by
    one of the pipeline scripts in a later run (`func_15058EA4` is
    cross-file, so `fix_cross_file_arg_counts.py` — added after the
    manual-only flag was written — caught it), leaving only a
    leftover, now-unambiguous, purely-type-level bug: `(f32) arg0`
    (fixed to `(f32)(s32)(arg0)`) and two `(*(void **)&var_f12)`
    pointer-reinterpret wrappers passed into `f32` parameter slots
    where the plain float `var_f12` was actually wanted (replaced both
    with bare `var_f12`, exactly the fix originally reasoned out when
    this line was first investigated, before the arg-count ambiguity
    made it look unsafe to touch). **Second confirmed instance this
    session of a "manual-only" flag turning out to be premature** — see
    the `game_1B81D0.c`/`game_1D6E80.c` note above for the first.
  - Re-ran the full pipeline afterward: `fix_void_pointer_arithmetic.py`
    picked up 2 more legalizations (unrelated pre-existing void*-global
    arithmetic, exposed now that the tree changed shape slightly —
    verified idempotent on a second pass, not a regression). 0 CRLF
    corruption.

**691/159 confirmed** — the "Cast a pointer into a non-integral type"
fixes above landed cleanly: that category dropped clean off the top-25
list from 15 (fully resolved), its sibling "Cast a non-integral type
into a pointer" dropped 11→10 too (from the `game_15A840.c`/
`game_142560.c` shared-line fixes), no new/spiking category, file count
improved 160→159.

→ **673/159 confirmed — after extending `fix_void_pointer_arithmetic.py`
with a THIRD rewrite rule (binary '-' against a bare numeric constant
only): "Unacceptable operand of '-'" dropped 31→13 (roughly matching
the 38 script fixes, since several lines held more than one occurrence
per error), no new/spiking category, file count held steady at 159**.
That fix turned out to be
dominated by a single, extremely regular shape appearing near-
identically across ~13 files: `(*(s32 *)((char *)(VAR) + 0x4)) = (void
*) (IDENT - 0x60);` (also a handful of bare `memcpy(IDENT, IDENT -
0x20, ...)` calls) — an untyped (`void *`) local/param minus a plain
integer LITERAL, the "walk back N bytes" byte-offset idiom, exactly as
mechanically unambiguous as the existing binary-'+' rule this script
already handles, just for '-'. Deliberately scoped narrowly: only
fires when the right operand is a bare hex/decimal literal (never
another identifier or `&GLOBAL`), keeping it fully disjoint from
`fix_pointer_subtraction_index.py`'s job (pointer-vs-pointer
subtraction, which needs to cast BOTH sides and verify the other
operand really is pointer-shaped — a different, less mechanical
judgment call this script still does not attempt). A negative lookahead
excludes a literal immediately followed by `.` (a float constant like
`4.0f` would mean something else entirely — never observed in this
codebase's byte-offset idiom, but excluded defensively anyway). Found
38 instances across 22 files; every diff spot-checked (`game_100810.c`,
`game_105FC0.c`, `game_1FA770.c`, `game_1C2C60.c`), confirmed idempotent
on a second pass, 0 CRLF corruption, full 34-script pipeline reran
clean (only the expected 132↔132 relax/restore oscillation)**.

**673/159 confirmed.**

→ **661/153 confirmed — after 13 more manual fixes to "Unacceptable
operand of == or !=" (down to 20 after the earlier bare-identifier
round; the remaining shapes here are mostly "IDENT (==|!=)
DEREF_EXPR" — a pointer-typed variable/param compared against a
byte-offset macro read or another dereference, evaluating to a plain
scalar VALUE)**. Same `(char *)(X) OP (char *)(Y)` cast-both-sides
convention throughout, each verified against the actual declared type
of the non-literal operand before editing:
  - `game_1B5CC0.c:42` (`arg0 == (*(s32*)...)`, `arg0` void*) — **note**:
    the exact same source line ALSO appears verbatim at line 92, in a
    DIFFERENT function (`func_1518894C`) where `arg0` is declared
    `s32` — that occurrence was untouched (already valid, not in the
    error list) — a reminder that textually-identical lines can need
    opposite treatment depending on which function they're in; always
    resolve the enclosing function before assuming a fix applies.
  - `game_1B5CC0.c:364`: a two-sided type mismatch, not the usual
    one-sided case — LHS a plain `s32` macro read, RHS `(*var_v0 *
    0xA0) + D_800DBEF4` where `var_v0` is a real `u16 *` and
    `D_800DBEF4` a real `struct131 *` global, so the RHS is genuinely
    POINTER-typed (int + pointer = pointer) while the LHS is a plain
    int value — cast both sides to `(char *)` as usual.
  - `game_1ED0F0.c:305`, `game_EDE60.c:327`, `game_FF0E0.c:111`,
    `game_100810.c:967`, `game_1104D0.c:163`, `game_14CE30.c:46`: the
    standard one-sided fix (`void *` / typed-pointer variable vs. a
    plain scalar read).
  - `game_21CE70.c:37` (`*D_8002BD70 == arg0`): `D_8002BD70` is a real
    `s32 *` global, so `*D_8002BD70` is a plain `s32` value; `arg0` is
    `void *` — standard fix.
  - `game_EB340.c:153` (`(*(s32*)(...)) == *arg1`): `arg1` is `void
    **`, so `*arg1` is already genuinely `void *` — standard fix, just
    with a real pointer on one side instead of a plain identifier.
  - `game_1CC440.c:984`, `game_1E73B0.c:376`: each a `||`-joined
    COMPOUND condition with two `==`/`!=` sub-expressions on the same
    line, but the build log reported only ONE error per line — checked
    which sub-expression was actually the mismatch (`void *
    temp_v0`/`temp_v1` vs. a scalar read) before touching only that
    one; the sibling sub-expression (a plain `s32`-vs-`s32` macro-read
    comparison) was confirmed already valid and left untouched.
  - `game_1E73B0.c:386` (`(s32) (*(s32*)(...)) == temp_v1`): an
    existing `(s32)` cast on the macro-read side didn't help — the
    mismatch is against `temp_v1` (`void *`) on the other side; wrapped
    the whole existing `(s32) (...)` sub-expression in an outer
    `(char *)(...)` rather than removing the pre-existing cast.
  - `game_3FC60.c:239`, `game_6B320.c:118`, `game_C1D70.c:112`: three
    `do { ... } while (IDENT != EXPR);` loop-termination comparisons,
    same standard fix (`void *` loop pointer vs. a computed `s32`
    address expression on the RHS).
  - `game_10EF60.c:372` (`sp90 != 0.0f`): a DIFFERENT root cause than
    every other fix in this round — `sp90` is declared `void *` and is
    a genuine real pointer EARLIER in the same function (`sp90 =
    (char *)(arg0) + 0xB0;`, passed as a pointer argument), so
    retyping the declaration (this round's usual move for a
    single-purpose mistyped variable) would have broken that earlier,
    legitimate use. By the time of this comparison it's been REUSED
    (classic register-reuse decompilation artifact, same class of bug
    as `var_a0` in `game_FA360.c` two rounds ago) to hold a plain `s32`
    bit pattern. Since a `0.0f` float-literal bit pattern is IDENTICAL
    to integer `0`'s, and `IDENT != 0` is unconditionally legal for any
    pointer type with no cast needed at all, the minimal, safest fix
    was simply replacing the literal `0.0f` with `0` — touches nothing
    about `sp90` itself, so the earlier real-pointer use is completely
    unaffected. (The SAME function also has a relational-operator error
    on `sp90` at line 380, `Unacceptable operand of relational
    operator` — a different, single-instance error category not
    currently in scope; left for a later round.)
  - **Left uninvestigated this round**: `game_61D10.c:517` and
    `game_90840.c:235`, both involving compound `gObjects`-adjacent
    pointer arithmetic (`*(&gObjects + (arg1 * 0x32C))`,
    `(char *)(arg0) - (char *)(&gObjects)`) inside larger boolean
    expressions — deferred rather than risk a quick, under-analyzed fix
    on an already-known-tricky global; revisit individually next round.
  - Also checked "Selector requires struct/union as left hand side"
    (59, the single largest remaining category) before skipping it
    again: still 52 `gObjects.unkXX` (confirmed manual-only) + 6 more
    confirmed instances of the ALREADY-documented `(&D_8008FE84)[IDX]
    .unkN` / `(&D_8008FE54)[IDX].unkN` pattern (see "Remaining error
    categories" below — `D_8008FE54`/`D_8008FE84` are scalar `extern
    s8` globals being array-indexed then dot-accessed, the same
    "wrong global entirely" ambiguity as `gObjects.unkXX`, not a
    scriptable bug) + 1 genuinely malformed `(&spBC)[var_s7].unk-2`
    (a literal negative field-name offset). Confirmed still fully
    manual-only, unlike the two premature "manual-only" flags found
    earlier this session — this one holds up under a fresh check.
  - Also sampled "Dereferenced a non-pointer" (28): no single dominant
    shape like the binary-'-' or bare-comparison categories had —
    a mix of double-dereferenced 2D-array-via-`&GLOBAL` computed
    addresses (`*(*(&GLOBAL + I1) + I2)`, several different globals,
    each needing individual positional/type analysis) and outright
    `M2C_ERROR(/* Read from unset register ... */)` markers in
    `game_225D20.c` (mips_to_c gave up entirely — not mechanically
    fixable at all). Deferred rather than force a shallow pattern that
    doesn't actually hold across instances.
  - 0 CRLF corruption, full 34-script pipeline reran clean (only the
    expected 132↔132 relax/restore oscillation).

**Result: 661/153.** "Unacceptable operand of == or !=" dropped all
the way to 3 remaining (`game_61D10.c:517`, `game_90840.c:235` — the
two deferred `gObjects`-adjacent cases — plus one more surprise, see
below), file count improved 159→153. One bug found in this round's own
work: `game_1A5440.c:500` had been READ and its fix reasoned through
identically to the others, but the actual `Edit` call was never made
(an oversight, not a tooling failure) — it showed up unfixed in this
build's error list and was fixed immediately once spotted, then folded
into a follow-up rebuild. **Two NEW "Type void * of this argument is
incompatible with type float" errors also appeared this build**
(`game_1CC440.c:1921` ×3, `:1925` ×2, both calls to `func_151A2C24`) —
investigated and confirmed to be ordinary cascading exposure of a
PRE-EXISTING bug (unrelated to anything touched this round — the only
edit in this file was the unrelated `==`/`!=` fix at line 984), not a
regression: both callers pass their OWN `void *` parameters into
several of the callee's `f32` argument slots, with values that look
duplicated/positionally-shuffled from elsewhere in the same call
(`arg3` appearing at both its own correct `void *` slot AND, again, in
an `f32` slot 4 positions later; `NULL` and duplicate copies of `arg2`/
`arg3` filling 3 different `f32` slots at line 1925) — the same kind
of "no confident single reconstruction" ambiguity as `game_14EE80.c:97`
(still present, unchanged) and the original `game_DE5A0.c:172` before
its argument COUNT got mechanically fixed by a later script. Flagged
manual-only here too rather than guess; net total still improved
(673→661), consistent with this session's repeated "cascading exposure
of pre-existing bugs in the same file, not a regression" pattern once
the totals are checked.

660/152 confirmed — the `game_1A5440.c:500` oversight fix landed
cleanly, "Unacceptable operand of == or !=" dropped its last easy point
(3→2, leaving only the two deferred `gObjects`-adjacent cases), no
new/spiking category, file count improved 153→152.

→ **654/151 confirmed — after extending `fix_void_pointer_arithmetic.py`
with a FOURTH rewrite rule (rule 1b: binary '+' with the untyped `void
*` identifier on the RIGHT side, not just the left): "Unacceptable
operand of '+'." dropped 13→7, file count improved 152→151, no
new/spiking category.** That extension came from sampling
"Unacceptable operand of '+'." (13 errors), which found the existing
rule 1
("IDENT + REST") only ever looks for the untyped pointer immediately
BEFORE a '+' — but '+' is commutative for this error (illegal void*
arithmetic fires regardless of which operand carries the untyped
pointer), so a line like `var_s2 + arg3` (a plain `s32` on the left,
`arg3` — a `void *` parameter — on the right) was completely invisible
to it. Confirmed via 4 near-identical instances in `game_61D10.c`
(`var_s2 + arg3` / `var_s2 + arg4` / `var_s2_2 + arg3` /
`var_s2_2 + arg4`) plus a 5th in `game_C1D70.c` (`(arg2 * 4) + arg1`).
New rule reuses the EXACT SAME per-function untyped-variable detection
already proven safe by rules 1/2/3 (same `untyped` set, just matched
from the other side of `+`), with guards excluding an immediately-
preceding `&IDENT` (already valid, same reasoning as rule 1) and an
IDENT immediately followed by `.`/`->`/`[` (field access/indexing —
a different bug class). Naturally idempotent: inserting the cast
breaks the required `+`-immediately-followed-by-IDENT adjacency the
regex depends on. Found 26 instances across 10 files (broader than the
5 originally spotted — the same blanket, tree-wide philosophy already
used by rules 1/2/3, not restricted to the current error-list lines);
every diff spot-checked across all 10 files, each right-side identifier
individually confirmed genuinely `void *`/`void **` in its OWN
function via the per-function declaration scan (`spA4` — `void * *`,
`var_s6`/`var_a2_4` — `void *`, and several `temp_v0`/`var_s0_3`-named
variables that have 3-4 DIFFERENT declarations across DIFFERENT
functions in the same file, correctly resolved per-function by the
existing scoping logic already proven this session). Confirmed
idempotent on a second pass, 0 CRLF corruption, full 34-script pipeline
reran clean (only the expected 132↔132 relax/restore oscillation)**.

654/151 confirmed.

→ **639/155 confirmed — after 8 more manual fixes to "member of
structure or union required" (12 errors)**: sampling this category
found 2 more instances of the already-documented `structs.h`
field-name-mismatch pattern (a struct field renamed from `unkXX` to a
semantic name, with the decompiled `.c` code not yet updated to match
— see "Manual fixes applied" above for the earlier `struct127`
examples):
  - `D_80088724` (declared `vertex` — `{f32 x; f32 y; f32 z;}`, no
    `unkXX` fields at all) was accessed as `.unk0`/`.unk4`/`.unk8` at 6
    call sites in `game_E5E90.c` (3 writes, 3 later reads) — renamed to
    `.x`/`.y`/`.z`. Cross-checked tree-wide first: `game_35EC0.c`
    already correctly uses `.x`/`.y`/`.z` on the SAME global, confirming
    these are the real field names, not a guess.
  - `D_80088730` (declared `struct127 *`) was accessed as `->unk3C` at
    2 call sites in `game_E5E90.c` — `structs.h` has no `unk3C` in
    `struct127` at all, but DOES have `/* 0x3C */ f32 xz_velocity;` at
    that exact offset, sandwiched between `unique_id` (0x3B) and
    `unk40` — renamed both to `->xz_velocity`.
  - Also confirmed `D_800D3098->unkF88` (already known, see "Manual
    fixes applied" above) and a NEW instance, `D_800DBEF4->unk21C`
    (`struct131 *`, real struct size `0xA0` = 160 bytes per
    `structs.h`'s own size comment — offset `0x21C` = 540 is nearly 3.5×
    past the end of the struct) remain the same "wrong global entirely"
    ambiguity, left untouched.
  - 0 CRLF corruption, full 34-script pipeline reran clean.

**Result: 639/155.** "member of structure or union required" dropped
clean off the top-25 list (was 12 — fully resolved), total error count
improved 654→639 (-15). File count went UP 151→155 (+4) despite the
error-count improvement — investigated per this session's standing
discipline before accepting it: `game_E5E90.c` (where 6 of the 8 fixes
landed) is now FULLY CLEAN (0 errors, gone from the error-file list
entirely); `game_F4D20.c` (the other 2 fixes) still errors, but only on
the ALREADY-flagged `D_800DBEF4->unk21C` manual-only case (untouched)
plus one pre-existing, already-known "Unacceptable operand of '-'"
bug at line 133 unrelated to anything touched this round. Neither
edited file shows a new/different error. Given the total error count
still dropped and no touched file regressed, the +4 file count reads as
ordinary cascading exposure (the freed-up `game_E5E90.c` and pipeline
churn letting `make -k` reach further into previously-unreached
targets, surfacing their own independent pre-existing bugs) rather
than a regression — consistent with the same pattern confirmed safe
several times earlier this session, though NOT exhaustively re-verified
line-by-line this time given session length; flag for a closer look if
a future round's file-count trend looks off.

639/155 confirmed.

→ **rebuild in progress after extending `remove_sdk_extern_redeclarations.py`'s
hardcoded `SDK_NAMES` allowlist with 6 more real N64 SDK functions, plus
5 manual fixes, closing out "Incompatible function return type for this
function" (12 errors) entirely:**
  - `SDK_NAMES` extension: `guMtxCatL`, `guMtxXFMF`, `guPerspective`,
    `guPerspectiveF`, `osSendMesg`, `osWritebackDCacheAll` — 6 of the 12
    errors were this exact already-solved problem (a local per-file
    `void * NAME();` placeholder declaration colliding with the SAME
    function's real, correctly-typed prototype pulled in from an SDK
    header via `<ultra64.h>` — e.g. `gu.h`, `os_message.h`,
    `os_cache.h`), just for 6 names the original hardcoded allowlist
    happened not to include yet. Removed the 6 redundant local
    declarations across 4 files; each diff spot-checked (exactly the
    two expected lines removed per file, nothing else touched).
  - `functions.h` return-type fix (2 names, 3 error occurrences):
    `func_1510FD20` and `func_1515D6D0` both have `functions.h` entries
    declaring `s32` (the generic default for an unknown-but-non-void
    return type — see script #17's docstring) but their REAL bodies
    return `void *` — updated both `functions.h` entries to `void *`,
    matching the authoritative real definitions.
  - 3 individual "void-returning function whose result is actually
    used downstream" fixes (the exact pattern already documented in
    "Manual fixes applied" above), each verified by checking every call
    site's usage before touching anything:
    - `game_111670.c`'s `func_150E5558`: body has NO `return` at all,
      but its one caller does `var_v0 = func_150E5558(...)` — kept the
      declared `s32` return type (already correct) and added
      `return 0;` as filler at the end of the body (same
      "arbitrary-filler-value" philosophy as padding missing call
      arguments with `0`).
    - `game_12C1E0.c`'s `func_150FF288`: body is a SINGLE call to
      `func_1503195C` (whose own real return type, `struct126 *`, is
      known) — this is the OTHER documented case-1 pattern ("entire
      body is a single call to another function whose type is known,
      decompiler dropped `return`") — added `return` before the inner
      call and changed the wrapper's own return type to `void *`
      (matching its EXISTING local declaration exactly, avoiding a
      NEW conflict that introducing the more specific `struct126 *`
      might have caused).
    - `game_B3020.c`'s `func_15086C70`: body has NO `return`, one
      caller assigns its result and another compares it `!= 0` — same
      fix as `func_150E5558`: kept the local declaration's `s32`,
      added `return 0;` filler.
  - 0 CRLF corruption (`functions.h` included in the check), full
    34-script pipeline reran clean (only the expected 132↔132
    relax/restore oscillation).

**Result: 627/155.** "Incompatible function return type for this
function" dropped clean off the top-25 list (12→0, fully resolved),
total error count improved 639→627 (-12), file count held steady at
155 (no new file-count surprise this round). "Unacceptable operand of
'-'" went UP 13→17 and "Unacceptable operand of '+'" went UP 7→12 —
investigated immediately per this session's standing discipline before
accepting: traced every one of these 9 new occurrences to exactly 4
files — `game_18A8F0.c`, `game_1B1600.c`, `game_215960.c`,
`game_49D30.c` — and all 4 are files this VERY round's fix touched
(removed their top-of-file SDK-redeclaration conflict, which was
previously the file's very FIRST hard error, blocking the compiler from
ever parsing past line ~17-47). With that early blocker gone, the
compiler now reaches deep into each file for the first time ever and
surfaces pre-existing `+`/`-` bugs that were always there but
unreachable — the textbook cascading-exposure pattern confirmed safe
many times earlier this session (785/168, 639/155's own file-count
uptick, etc.), not a regression from this round's actual edits (none
of which touched pointer arithmetic).

627/155 confirmed.

→ **618/150 confirmed — after two more fixes: 4 manual `void*`-pointer-
subtraction fixes in `game_1B1600.c`, plus a FIFTH `fix_void_pointer_
arithmetic.py` rewrite scope (per-file local `extern void *NAME;`
detection):**
  - `game_1B1600.c` lines 1106/1118/1131/1136: all
    `func_15185DD4(...) - EXPR` (the callee returns `void *`, and EXPR
    is itself always another `void *`-typed value or a real-pointer
    expression) — genuine void*-vs-void*/pointer SUBTRACTION, illegal
    in strict ANSI C regardless of both sides already being valid
    pointers. Not a shape `fix_pointer_subtraction_index.py` reaches
    (its left-operand-boundary finder doesn't handle a full nested
    function-call expression as the left operand) — fixed by hand,
    casting both operands to `(char *)`, same convention throughout.
  - `fix_void_pointer_arithmetic.py` gap found while investigating
    `game_215960.c`'s cascading-exposure `+`-errors from last round:
    `gGameState` (used inside `(gGameState + EXPR)` at 3 of the 5 new
    lines) is declared `extern void *gGameState;` LOCALLY at the top
    of `game_215960.c` — NOT in `variables.h`. The script's untyped-
    variable detection only ever looked in TWO places: `variables.h`
    (`get_global_void_ptr_names`) and each function's OWN
    params/locals — a file-scope local extern (the SAME per-file-
    global convention `remove_redundant_externs.py`/
    `add_relaxed_self_declarations.py` already handle for THIS
    project's own functions) was invisible to BOTH. Added
    `get_file_local_void_ptr_externs()`: scans each file's own leading
    declaration block (before its first function body, same boundary
    already computed for the per-function local scan) for `extern void
    *NAME;` lines, unions the result into every function's `untyped`
    set for that file. **Bug caught and fixed while implementing this**:
    the shared `GLOBAL_VOID_PTR_EXTERN_RE` pattern was hoisted to a
    module-level `re.compile(...)` without its original `re.MULTILINE`
    flag (previously passed directly to `re.finditer(pattern, text,
    re.MULTILINE)`) — silently broke `get_global_void_ptr_names` down
    to matching 0 names against the whole-file text instead of 3, since
    `^`/`$` need `MULTILINE` to align with line boundaries rather than
    only the very start/end of the string. Caught immediately by the
    dry-run's own "Found 0 void* globals" summary line looking wrong
    compared to the previously-known "Found 3" baseline — never
    reached a diff, let alone got applied. Fixed by adding
    `re.MULTILINE` back to the module-level compile call.
  - This one extension found far more than the 3 `game_215960.c` lines
    that prompted it: `game_B3020.c` alone had 138 previously-invisible
    fixes on 2 heavily-used local-extern globals (`D_800872A0`,
    `D_800D23B0`, each referenced 50-170+ times in that one file) —
    every one individually spot-checked in the diff (both globals'
    full before/after diff read end-to-end, not sampled), confirmed no
    `.`/`->` access was ever caught by the cast (grepped for
    `GLOBAL)\.`/`GLOBAL)->` post-fix, zero matches). 146 total fixes
    across 4 files (`game_215960.c` 5, `game_50D80.c` 1, `game_61D10.c`
    2, `game_B3020.c` 138). Confirmed idempotent on a second pass, 0
    CRLF corruption, full 34-script pipeline reran clean.

**Result: 618/150.** "Unacceptable operand of '-'" dropped 17→13,
"Unacceptable operand of '+'" dropped 12→7, no new/spiking category,
file count improved 155→150. `game_B3020.c` (the file with the
138-fix batch) still errors, but every remaining error there is a
pre-existing, unrelated bug (`spXXX`-undefined declaration gaps, one
`gObjects.unkXX`-style "Selector requires struct/union") — critically,
NONE of them are `+`/`-` operand errors, confirming the large batch
landed completely cleanly.

618/150 confirmed.

→ **rebuild in progress after 10 manual fixes to "Cast a non-integral
type into a pointer" (10 errors — fully addressed)**, two distinct
sub-patterns:
  - **Spurious `(void *)` wrapper on an already-fine bare value** (3
    instances): `game_1368C0.c:591/592` — `func_150A7960`'s position2
    slot is passed `(void *) (*(f32 *)(...))` at these two call sites,
    but a THIRD, otherwise-identical sibling call to the SAME function
    two lines later (`game_1368C0.c:594`) passes the exact same
    position as a bare, uncast `(*(f32 *)(...))` with no error —
    simply dropped the erroneous `(void *)` wrapper to match. `game_
    14F130.c:53`: a float-VALUED delta expression (not a variable, an
    rvalue) needed to land in a pointer slot — since the established
    `(*(void **)&(EXPR))` bit-reinterpret idiom requires an lvalue
    (needs `&EXPR`) and this is a computed rvalue, used `(void
    *)(s32)(EXPR)` instead (numeric truncation then int→pointer, same
    "build success over runtime fidelity" tradeoff already accepted
    project-wide).
  - **Genuine rvalue-vs-lvalue distinction** (2 instances):
    `game_159940.c:186`'s `sp10C` and `game_1B6DB0.c:138`'s `temp_ret`
    are both real NAMED `f32` local variables (genuine lvalues, unlike
    the `game_14F130.c` case above) — used the proper bit-reinterpret
    idiom `(*(void **)&VARNAME)` for both, preserving the intended bit
    pattern instead of truncating it.
  - **Base-field read via the wrong width/type, inconsistent with
    sibling lines reading the SAME field correctly** (5 instances,
    the dominant shape): `game_1D4E00.c:366/367`, `game_1D92F0.c:
    507/515`, `game_1A48C0.c:301` — each line reads a struct's pointer-
    valued field via `(*(f32 *)(...))` (producing a genuine float
    VALUE) then immediately uses that value as a pointer BASE for
    further offsetting (`+ OTHER`, wrapped in `(char *)(...)`) — while
    one or more DIRECTLY ADJACENT sibling lines read the IDENTICAL
    field (same base expression, same offset) via `(*(s32 *)(...))` or
    `(*(s16 *)(...))` instead, with no error. Confirmed each case by
    reading the surrounding 5-10 lines before touching anything — every
    fix just matches the erroring line's read-width/type to its own
    neighbors' already-working convention for the exact same field,
    never guessed independently.
  - 0 CRLF corruption, full 34-script pipeline reran clean.

**Result: 615/152.** "Cast a non-integral type into a pointer" fully
resolved (10→0, off the top-25 list), but file count went UP 150→152
and a NEW category appeared: "Type float of rhs of assignment
expression is incompatible with type void * of lhs" (5 errors — 4 in
`game_15A840.c`, 1 in `game_1D92F0.c`). Investigated immediately rather
than accept the file-count regression at face value:
  - `game_15A840.c`'s `func_1512D390(f32 arg0)` and `game_1D92F0.c`'s
    `func_151AD92C(f32 arg0, f32 arg1, void * arg2)`: both functions
    declare one or more parameters `f32` yet use them EXCLUSIVELY as
    pointers throughout their bodies (`*(void **)&(argN)` bit-
    reinterpret reads, `argN + CONSTANT` offset arithmetic) — the
    exact inverse of this session's usual "void* mistyped, really
    holds a float" bug: here the PARAMETER's declared type itself is
    simply wrong. Confirmed via `grep`ing every caller of both
    functions tree-wide: **neither has a single live caller anywhere**
    (`func_1512D390` has only a commented-out reference; `func_
    151AD92C` has none at all) — pure dead code from the compiler's
    perspective, so retyping the parameters carries zero call-site risk.
    Retyped `arg0`→`void *` in both, plus `arg1`→`void *` in
    `func_151AD92C` (used identically). Fixed the resulting `f32_var =
    argN;` mismatches (2 in each function — the parameter's value was
    also copied into a genuine `f32` local right at the top, itself
    later bit-reinterpreted back to `void *` further down) with the
    established bit-reinterpret idiom, `var = (*(f32 *)&argN);` (argN
    is now a real lvalue parameter, so `&argN` is valid — unlike the
    rvalue case documented earlier this round). Reran `fix_void_
    pointer_arithmetic.py` afterward, which then automatically caught
    and cast the remaining `argN + CONSTANT` arithmetic (7 more fixes
    across both files) via its existing, already-proven rule 1 — no
    script changes needed, just re-running it after the parameter
    retype exposed these identifiers to its per-function detection.
  - 0 CRLF corruption, full 34-script pipeline reran clean.

**Result: 610/148 confirmed.** "Type float of rhs of assignment
expression is incompatible with type void * of lhs" fully resolved
(5→0), no new/spiking category, file count improved 152→148 — the two
dead-code parameter retypes landed completely cleanly.

610/148 confirmed.

→ **rebuild in progress after a new script, `fix_missing_sp_declarations.py`
(#19), tackling the large family of "'spNN' undefined; reoccurrences
will not be reported." errors** (the spNN-undefined lines in the
category breakdown add up to hundreds of instances scattered across
100+ files — the single largest remaining opportunity in the tree by
volume). Same root cause already documented under "Manual fixes
applied" for the one-off `game_100810.c` `sp70`/`sp74` case (a genuine
`mips_to_c` gap: a stack-spill float temporary gets USED but never
DECLARED) — this script generalizes that exact fix (`f32 NAME;`
matching the neighboring declaration convention) tree-wide, reading
the precise (file, line, name) triples straight out of `build_log.txt`
rather than scanning blindly.

**A real bug was found and fixed in this script's OWN first run,
caught by this session's standing diff-review discipline before it
could compound**: the first version's `ERROR_RE` matched ANY `"'NAME'
undefined"` error text, not just genuine `spNN`-shaped stack temps —
but IDO emits the EXACT SAME error-message shape for several totally
unrelated bug classes:
  - Struct MEMBER names in a `BASE->unkXX` access where the real
    struct type has no such field — this project's own documented,
    deliberately-manual-only "wrong global entirely" bugs
    (`D_800D3098->unkF88`, `D_800DBEF4->unk21C`, see "Manual fixes
    applied" above). A local variable named `unkF88` does NOTHING to
    fix this (the error is about struct member lookup, not identifier
    scope) — it only adds a dead, useless local.
  - Call-site names that LOOK like parameters (`argN`,
    `subroutine_argN`) but are genuinely undeclared because the
    calling function doesn't actually have that many real parameters —
    a different, more delicate bug needing real signature-matching,
    not a blind `f32` guess (the real slot is often a pointer).
  - Real SDK/global names (`D_8002C750`, `__osRunningThread`) and
    library builtins (`nanf`) needing a REAL extern declaration, not a
    fabricated local.
  - Decompiler register-save artifacts (`saved_reg_s0` etc).
  This first run blindly added 68 bogus/ineffective declarations
  across 31 files before the flaw was caught by reviewing the actual
  diff output (not just the fix COUNT) against a manual sample check —
  reverted with a scratch one-off cleanup script (deleted after use),
  then the real script fixed by adding a strict `SKIP_NAME_RE =
  r'^sp[0-9A-Fa-f]+$'` filter at the error-parsing stage, so it can
  now ONLY ever act on the one genuinely-safe name shape. Also
  strengthened `is_risky_usage` to exclude a name used as either side
  of `->`/`.` (previously only checked the BASE side, matching the
  exact "field-access-components-look-like-bare-identifiers" trap
  already documented earlier in this file for a different script).
  Re-verified idempotent (0 to add) against the now-clean tree.
  **Confirmed root cause, not guessed**: re-ran the SAME diff-review
  discipline that already caught four earlier regressions this
  session — spot-checked 7 files' diffs individually before trusting
  the corrected 332-declaration batch broadly.
  While investigating the flagged-as-risky names, also manually fixed
  3 more genuinely-reconstructable cases with real positional type
  info available: `game_C1D70.c`'s `func_15095760` (passes 7
  undeclared `argN` identifiers to `func_15095A90` — typed each to
  match that real callee's exact parameter types, `void
  */f32/s32*/s32×4`, rather than guessing `f32` for all), and
  `game_10B7D0.c` / `game_111670.c`\`s stray `argN`/`subroutine_argN`
  groups (no real type info available anywhere — typed `s32` as this
  project's established safe fallback).
  Net result of the corrected run: 332 genuine `spNN` declarations
  added across 102 files (down from the flawed run's 400, after
  removing the 68 bogus ones), plus the 3 manual `argN` fixes above. A
  smaller remaining tail (~20 `unkspXX`-named instances, a handful of
  `nanf`/`saved_reg_*`/bare-`sp` stragglers) was investigated but its
  line numbers had already shifted from earlier edits in this same
  round — deferred to next round once a fresh build regenerates
  accurate line numbers, rather than risk editing against stale data.
  0 CRLF corruption, full 34-script pipeline reran clean.

**Result: 415/122 — by far the single biggest jump this session** (a
195-error, 26-file drop in one round). The spNN-undefined categories
collapsed as expected. Two follow-up issues investigated and fixed
immediately rather than declared "done":
  - **A genuine "Syntax Error" category appeared (3 instances)** —
    always treated as a serious red flag per this session's history
    (the exact signature of a prior real corruption). Investigated
    immediately: `game_DAC20.c` and `game_DAE10.c` each had a bare,
    unquoted decompiler warning (`Warning: missing "jr $ra" in last
    block of func_XXX (...).`) sitting directly in the source as
    literal text, not wrapped in a comment — the EXACT "stray
    decompiler annotation text" bug already documented under "Manual
    fixes applied" (the `(first 3 bytes)` case). Confirmed via `git`-
    style reasoning this was NOT caused by anything touched this round
    (neither file was in the 332-file `fix_missing_sp_declarations.py`
    batch) — genuine cascading exposure, these two files simply never
    parsed this far before. Fixed by wrapping both in `/* ... */`,
    matching the established precedent exactly.
  - **"Unacceptable operand of &"/"...remainder operator" jumped
    16/4** — sampled ~10 of these and found the dominant cause: a
    MINORITY of the 332 `spNN` declarations this round's `f32`-default
    guess got genuinely wrong — variables used in bitwise/flag-check
    contexts (`sp68 & 1`, `sp58 % 56U`) rather than float arithmetic.
    Wrote a narrow follow-up script, `fix_sp_bitwise_retype.py` (#20):
    reads only the two error categories that UNAMBIGUOUSLY mean "this
    operand must be an integer" (never float), finds `spNN` names
    directly adjacent to `&`/`|`/`%`/`<<`/`>>` on those exact lines,
    and retypes just that declaration from `f32` to `s32` — but ONLY
    when it's currently declared exactly `f32 NAME;` (so it correctly
    left `f32 *sp58;`-style pointer declarations alone, recognizing
    those are a different, unrelated pre-existing bug rather than
    something this round's batch touched). Retyped 9 declarations
    across 7 files. Also manually retyped 2 more (`unksp32`/`unksp36`
    in `game_1AC2F0.c`, 8 total error occurrences) using fresh,
    accurate line numbers from this build — clear integer-arithmetic
    context (`unksp32 < 0`, `(s32) (temp_t7 * unksp32) >> 7`).
  - Confirmed idempotent, 0 CRLF corruption, full 34-script pipeline
    reran clean. Several OTHER new/spiking categories from this round
    (`Incompatible type for the function parameter` 10, `Type void *
    incompatible with type void` 4, `Type f32 of rhs... incompatible
    with type void *` 4, `This expression is not an lvalue` 4,
    `Subscripting a non-array` 3) were NOT yet investigated —
    plausibly more of the same "wrong spNN type guess" pattern,
    deferred to next round with fresh post-rebuild line numbers rather
    than chase stale ones further in this already-large round.

**Result: 394/115 confirmed.** "Syntax Error" fully resolved (3→0).
"Unacceptable operand of &" dropped 16→5 (the remaining 5 are
genuinely different pre-existing bugs, unrelated to any `spNN`
declaration — confirmed by checking none involve a `f32`-declared
`spNN` name). "...remainder operator" held at 4 — these are the
`game_1ED0F0.c` `sp54`/`sp58` instances that are ALREADY pointer-typed
(`f32 *sp58;`), a different, unrelated pre-existing bug my retype
script correctly declined to touch. No new/spiking category, file
count improved 122→115.

394/115 confirmed.

→ **rebuild in progress after closing out "Incompatible type for the
function parameter" (10 errors) plus "Type void * incompatible with
type void" (4 errors), and a real pipeline-infrastructure bug found
and fixed along the way:**

All 10 "Incompatible type for the function parameter" instances turned
out to be the exact same shape: a function's REAL definition uses a
`void * *` (double-pointer) parameter somewhere, but an EARLIER
declaration for the same name — either this project's own
functions.h/local-declaration copy, or (twice) a REAL SDK header
(`gu.h`'s `guMtxL2F`, `n_libaudio.h`'s `__n_setUsptFromTempo`) —
disagrees, most often with a bare `s32` placeholder. Fixed each by
matching the mismatched side to the REAL, authoritative type:
`game_113D60.c` (×2), `game_1CA420.c`, `game_1EF500.c`,
`game_1F4650.c`, `game_61D10.c`, `functions.h` (`func_15081574`) all
had their earlier declaration's `s32` placeholder corrected to the
real definition's `void * *`; `game_21D1B0.c`'s OWN definition of
`guMtxL2F` (the game's statically-linked copy of the SDK function) was
retyped to match `gu.h`'s real prototype (`float mf[4][4], Mtx *m`)
instead of the other way around, since a real SDK header's prototype
can never be relaxed; `n_csplayer.c`'s local declaration for
`__n_setUsptFromTempo` was retyped from a generic `void *` to the
real, already-in-scope `N_ALCSPlayer *`.

**A real, previously-undiscovered bug was found and fixed in
`restore_promotion_safe_signatures.py` while re-running the full
pipeline to verify these fixes** — a THIRD occurrence of the
"whitespace-separated-stars trap" already found and fixed in two OTHER
scripts earlier this session (`relax_prototypes.py`'s `PROTOTYPE_RE`,
`fix_pointer_to_float_cast.py`'s scalar-pointer detection): this
script's `sanitize_params()` used a bare `(\**)` for the pointer-star
group, which only matches CONSECUTIVE `*` characters — but this
codebase's own style routinely writes multi-star types with a space
between the stars (`void * *`, not `void **`). For a whitespace-
separated multi-star parameter, the regex failed to match the
parameter AT ALL, silently falling through to the `s32` by-value
default and DISCARDING the parameter's real pointer-ness. **Caught
because the routine full-pipeline-rerun-to-verify step (standard
practice after every hand fix all session) showed the just-applied
`void * *` fixes gone, reverted back to `s32`**, immediately after
applying them — re-reading the files confused the assistant into
thinking the `Edit` calls had silently failed, until tracing forward
through which of the 34 pipeline scripts could plausibly rewrite a
declaration line found the real cause. Fixed by widening the regex
group to `(?:\*\s*)*`, the exact same fix already used in
`relax_prototypes.py`. Re-running `restore_promotion_safe_signatures.py`
alone with the fix immediately regenerated ALL 10 affected
declarations correctly FROM their real definitions — no need to redo
the individual hand fixes.
**This same bug may have silently reverted OTHER double-pointer manual
fixes made earlier in this session on a later full-pipeline rerun,
without being noticed** (only caught this time because the very next
action after applying these particular fixes was a diff/grep
recheck) — worth keeping in mind if a `void * *`/`void **`-shaped
fix from an earlier round is ever found unexpectedly reverted.

A second, narrower gap found in the same investigation:
`widen_integer_promotion_params.py`'s "eliminate promotion risk by
widening the definition" strategy assumes the ONLY other declaration
of a function is something `relax_prototypes.py` can relax (this
project's own `functions.h`/local declarations) — but for a REAL SDK
function whose ONLY other declaration is a genuine SDK header
(`n_libaudio.h`'s `n_alSynSetFXMix`, never touched by
`relax_prototypes.py`), widening the definition's `u8 fxmix` to `s32`
just trades one mismatch for a different one against the header's own
permanently-strict `u8 fxmix` prototype — the fix kept getting
silently re-reverted by this script too. Added a small, explicit
`SDK_HEADER_STRICT_NAMES` exclusion set (currently just
`n_alSynSetFXMix`) rather than a general SDK-header cross-reference,
matching the same curated-allowlist philosophy already used by
`remove_sdk_extern_redeclarations.py`'s `SDK_NAMES`.

Separately, "Type void * incompatible with type void" (4 errors, 2
call sites) was a much simpler, unrelated fix: `game_F2820.c` and
`game_1DF510.c` each call a REAL `(void)`-parameter (explicitly zero
parameters, not K&R-relaxed) local function while still passing a now-
discarded `arg0` — trimmed both call sites to zero arguments, matching
the same "call passes more than the definition, trim the excess"
convention `trim_overcounted_same_file_calls.py` already uses, just
applied down to the full zero-argument case by hand.

Full pipeline reran a THIRD time after both script fixes landed to
confirm TRUE convergence this time (all 4 spot-checked declarations —
`game_1CA420.c`, `game_61D10.c`, `functions.h`, `init_1D900.c` — held
stable through the rerun, not just applied-then-silently-reverted).
0 CRLF corruption throughout.

**Confirmed: 372/112** after the round above landed (down from 394/115)
— "Incompatible type for the function parameter" dropped 10→1 and
"Type void * incompatible with type void" (the 2-call-site form)
dropped to 0 as expected.

The one remaining "Incompatible type for the function parameter" was
`__n_setUsptFromTempo` in `src/libultra/audio/n_csplayer.c`: a SECOND,
independent bug in `restore_promotion_safe_signatures.py` (not the
whitespace-star bug above — a different gap in the same script).
`sanitize_params()` was applied uniformly to the text written into
BOTH functions.h and the function's own defining file, but the two
need different treatment: functions.h is included everywhere so it
genuinely needs the generic-safe sanitized form (`void *` for any
pointer type not in the small `known_safe` allowlist), but the
defining file already has the real definition's own types in scope in
the same translation unit — sanitizing there was silently downgrading
a perfectly visible, correct type (`N_ALCSPlayer *`) to `void *` just
because `N_ALCSPlayer` (declared in `n_libaudio.h`, not this project's
`structs.h`) wasn't in `known_safe`, producing a declaration that then
conflicted with the real definition sitting right below it
("redeclaration" + "Incompatible type for the function parameter").
Fixed by having `find_real_defs()` return both `sanitized_params` and
the definition's own raw (unsanitized) `params`, and `fix_file()` now
picks `sanitized_params` only when `is_functions_h`, else the raw
params. Verified via dry-run diff, applied, and the full 34-script
pipeline rerun twice — the relax/restore pair cycles the same 132
count both times (expected/documented), and the `N_ALCSPlayer *`
fix held stable through both reruns. 0 CRLF corruption.

**Confirmed: 370/110** after that landed (down from 372/112).

Next round tackled the "redeclaration of D_XXX; previous declaration
... in variables.h" cluster (9 errors across 7 files) — in every case a
local file's top-of-file `extern` re-declared a global with a type that
no longer matches `variables.h`'s real (since-corrected) type:
- `D_800E0934` / `D_800E0940`: real usage in `game_1ED0F0.c` /
  `game_1EF500.c` calls them as function-pointer callbacks
  (`D_800E0934(a,b,c)`, `D_800E0940(a,b,c,d)`), but `variables.h` had
  them typed as plain `s32` / `void *`. Fixed by correcting
  `variables.h`'s declarations to the real function-pointer types
  (matching the callers' own local decls, which were the ACCURATE ones)
  and removing the now-redundant local `extern` lines.
- `D_800D9B68` / `D_800D9B78` (real type `u8 X[4][3]`, a 2D array) and
  `D_800DCC10` (real type `f32 *X[][4]`): local files in
  `game_139FC0.c`, `game_F2820.c`, `game_183640.c` had stale flat `s32`
  local externs left over from before `variables.h` had the correct
  array types. `remove_redundant_externs.py` *should* strip these
  automatically, but its `extract_real_names()` regex only handles a
  SINGLE bracket pair (`(\[[^\]]*\])?`) — a multi-dimensional array
  declaration (`X[4][3]`, two bracket pairs) fails to match at all, so
  these names never made it into its "real names" set. Not fixed at the
  script level this round (narrow, low-value to generalize for 3
  occurrences) — just removed the 3 stale local `extern` lines by hand.
  Worth widening `extract_real_names()`'s bracket-matching to
  `(?:\[[^\]]*\])*` if more multi-dim-array redeclaration conflicts
  turn up later.
- `D_80086014` (real type `void (*X[])(s32)`, a function-pointer array):
  `game_49D30.c` used it as a raw byte-offset jump table
  (`*(&D_80086014 + (temp_v0 * 4))`, assigned to a `void *(*)()` var).
  Removing the stale local `s32` extern and leaving the real array type
  in place would have made the pointer arithmetic scale by
  `sizeof(array)` instead of by 4 bytes, breaking the intended raw
  byte-offset indexing (and risking a further type error on an
  incomplete-array-type dereference). Fixed by removing the local
  extern AND rewriting the usage site to go through an explicit
  `(char *)`/`(void * (**)())` cast round-trip instead of relying on
  `D_80086014`'s own declared type — the same byte-offset-macro idiom
  used throughout this codebase elsewhere.
- `osSpTaskLoad`: NOT a `variables.h` conflict at all — a genuine name
  COLLISION with the real N64 SDK function `osSpTaskLoad(OSTask *)`
  declared in `include/2.0L/PR/sptask.h`. `game_20AE20.c` was using the
  name for an unrelated local `s32` flag (`osSpTaskLoad = 0;`, single
  use, no relation to the real SDK task-load call) — almost certainly a
  decompiler/symbol-map collision, not an actual reference to the SDK
  function. Renamed the local flag to
  `D_local_osSpTaskLoad_20AE20` throughout that one file.

Full pipeline reran to convergence after all of the above (only the
expected relax/restore 132-cycle fired — 0 unexpected changes), 0 CRLF
corruption, all edits spot-checked to have survived the rerun intact.

**Confirmed: 367/108** after that landed (down from 370/110). All 9
"redeclaration of ..." errors are now at 0. Minor (+1/+2) upward drift
in a few `spNN`-undefined shapes and "number of arguments doesn't
agree" (6→7) — consistent with cascading exposure now that files with
previously-fatal-early errors parse further, not a regression; net
error/file count both dropped.

Next round tackled "Dereferenced a non-pointer" (28 errors, resampled
per the earlier flag). All 28 traced to a single mechanical bug shape,
repeated across 10 files: an expression like `*(*(&GLOBAL + IDX1) +
IDX2)` or `*(*(char *)(PTR_PTR) + IDX2)` where the INNER `*` dereferences
too early, producing a scalar (an `s32`/`char`/`u16` value that this
codebase's decompiled output routinely treats AS an address, per the
established "scalar holds an address, cast-and-dereference to read
through it" idiom already seen elsewhere), then adds an index/offset to
that scalar (int + int = int, not a pointer), and the OUTER `*` then
tries to dereference that int with no cast — the hard error. Fix
pattern: insert an explicit pointer cast (inferred from the assignment
target's or comparison's own declared type — `s8`, `u16`, `s32`, etc.)
immediately before the outer dereference, e.g.
`*(s32 *)(*(&GLOBAL + IDX1) + IDX2)`. One cluster (`game_1A7260.c`,
7 occurrences) had verifiable correct sibling code alongside it in the
same loop, so those were fixed by matching the sibling's actual
dereference-then-cast order instead of just inserting a cast (`(char
*)(*var_s0) + offset`, not `*(char *)(var_s0) + offset`). One
occurrence (`game_F5800.c` line 554) was a raw hex address literal
(`*0x800A053C`) rather than a symbol reference at all — added the
missing `extern f32 D_800A053C;` declaration (a plain 4-byte gap
between two already-declared f32 globals `D_800A0538`/`D_800A0540`)
and referenced it by name instead.

Files touched: `game_1A7260.c` (7), `game_6A3D0.c` (4), `game_6B320.c`
(4), `game_42DC0.c` (3), `game_49D30.c` (1), `game_50D80.c` (1),
`game_F5800.c` (1), `game_185560.c` (1), `game_1A8060.c` (1),
`game_1B5CC0.c` (1) — 24 total. The remaining 4 (`game_225D20.c`,
lines 148/161/170/226) are genuine decompiler failures
(`M2C_ERROR(/* Read from unset register ... */)` markers — the
decompiler couldn't reconstruct the source register at all) and are
NOT fixable by type correction; left alone as manual-reconstruction-
only, same class as the `gObjects`-dominated "Selector requires
struct/union" cluster.

Full pipeline reran to convergence (only the expected relax/restore
132-cycle fired), 0 CRLF corruption, both spot-checked fixes
(`D_800A053C`, the `game_185560.c` cast) confirmed to have survived
the rerun intact.

**Confirmed: 343/107** after that landed (down from 367/108) — exactly
a 24-error drop matching the 24 fixes applied, file count 108→107.
"Dereferenced a non-pointer" confirmed 28→4 (exactly the 4 skipped
`M2C_ERROR` occurrences). No new or spiking category; every other
category held steady or improved.

Next round tackled "Unacceptable operand of '-'" (13 errors). All 13
were the same shape: `POINTER - POINTER` or `POINTER - int` (or
`int - POINTER`) where at least one operand was `void *` — IDO cc
rejects arithmetic directly on `void *` since void has no size to
scale by. Fixed by inserting explicit `(char *)` casts on the pointer
operand(s) (matching the well-established void-pointer-arithmetic
convention used throughout this codebase), or `(s32)` casts on the
rare occasions where a variable typed `void *` was actually just
holding a plain integer VALUE via this codebase's "scalar stored
through a pointer-typed slot" idiom (implicit int→pointer assignment,
tolerated as a warning) rather than a genuine address. Files touched:
`game_50D80.c` (7), `game_6A3D0.c` (1), `game_10EF60.c` (1),
`game_18A8F0.c` (1), `game_1DD500.c` (1), `game_AD9B0.c` (1),
`game_F4D20.c` (1). Pipeline reran clean (only the relax/restore
132-cycle), 0 CRLF corruption.

**Confirmed: 335/104** after that landed (down from 343/107) —
"Unacceptable operand of '-'" confirmed 13→0. File count dropped
107→104 (3 more files fully cleared). One category, "Cast a pointer
into a non-integral type", jumped 4→8 — investigated and confirmed
NOT a regression from this round's edits: `game_1DD500.c` had a
pre-existing wrong declaration, `void **temp_v1`, in the SAME function
whose line 597 this round had just fixed. The array `temp_v1` is
assigned from (`D_800DD1E8`/`D_800DD1D8`, both `f32[]`) plus every real
usage (float multiplication, `(f32) *temp_v1` casts) made clear it
should have been declared `f32 *temp_v1` — fixing the ONE declaration
line resolved all 4 of the newly-visible errors (lines 799/803/808/813)
at once, simply by no longer producing a `void *` value from `*temp_v1`
that later code tried to cast to float. This also explains why
"Unacceptable operand of a multiplicative operator" had ticked 9→10
one round earlier (line 777's `*temp_v1 * (...)`) — same root cause,
now resolved too (back down to 9).

The other 4 "Cast a pointer into a non-integral type" occurrences were
unrelated pre-existing bugs: `game_133190.c` lines 1032/1034 had direct
`(f32) POINTER` casts on an rvalue (`arg0`, `(char *)(spC0)`) — fixed
with the established `(f32)(s32)(EXPR)` numeric-truncation idiom.
`game_142560.c` lines 593/594 looked at first like a spurious
`(f32) (char *)(...)` cast wrapping an already-`f32` local and were
"fixed" by simply stripping the cast — **this was wrong**, caught
immediately by the routine post-pipeline spot-check: the file has
FOUR separate functions each declaring their own differently-typed
`temp_f0`/`temp_f2` locals (an extremely common decompiled-code
collision — same synthetic names reused per-function), and a plain
`grep` for the declaration without checking which function's body
line 593 actually falls inside matched the WRONG one (an unrelated
`f32 temp_f0;` from a different function earlier in the file). The
REAL declarations in scope at line 593 (function `func_15115EDC`) are
`void *temp_f0; void *temp_f12; void *temp_f14; void *temp_f2;` — all
four holding plain scalar values through `void *` slots, per the same
idiom as above. The pipeline's own scripts left the stripped-cast
version untouched (correctly — nothing in the pipeline second-guesses
a by-hand edit), so this was *my* mistake, not a script bug; caught by
re-reading the file after the pipeline rerun as usual and noticing the
line didn't read as expected, then re-deriving the fix from the actual
in-scope declarations: `(f32)(s32)(EXPR)` applied to all four
variables. Rebuilt once for both the original round and this
correction together — confirmed clean.

**Lesson**: in a file with many functions reusing decompiler-generated
names (`temp_f0`, `temp_v0`, `sp1C`, etc.), a bare `grep -n 'TYPE
varname;'` is not sufficient to establish a variable's type at a
specific line — always locate the enclosing function's own boundaries
first (e.g. the nearest preceding `RETTYPE name(...) {` line) and read
its declaration block directly, the same discipline already used
successfully throughout this session for the trickier fixes.

**Confirmed: 326/104** after the correction landed (down from 335/104,
file count unchanged since the "regression" was never a real build
failure introduced by this session — the miscorrected line would have
newly failed to compile had the rebuild been run against it, but the
mistake was caught and fixed before that rebuild). "Cast a pointer
into a non-integral type" confirmed 8→0. "Unacceptable operand of a
multiplicative operator" confirmed 10→9. No new or spiking category.

Next round tackled "Unacceptable operand of '+'" (8 errors) plus one
related "Bad operand type for += or -=". Recurring theme: a value that
this codebase's idiom stores as a scalar through a pointer-typed slot
(`void *`, `u16 ***`, etc. — the implicit int→pointer assignment,
tolerated as a warning) getting added directly to a REAL pointer, with
the two operands' roles often reversed from what they should be (the
scalar-holding value cast to a pointer, the real base pointer added as
if it were the integer). Fixed by un-reversing the roles: real base
pointer gets the `(char *)` cast, the scalar-holding value gets an
`(s32)` cast. One case (`game_49D30.c` `var_v1_2`) was simply
mis-declared `u16 ***` when it was only ever used as a NULL-initialized,
`+= 2`-incremented plain counter — corrected the declaration to `s32`
instead of patching every use site. Files: `game_1B1600.c`,
`game_1B6DB0.c`, `game_215960.c`, `game_43880.c` (×2), `game_49D30.c`,
`game_6A3D0.c` (×2), `game_DE5A0.c`. Pipeline reran clean.

**Rebuild after that landed: 328/102** — down from 326/104 in error
count terms looks like a regression, but file count DROPPED (104→102,
2 more files fully cleared) and the target category hit 0 as expected.
Investigated: this round's `game_1B1600.c` line-1138 fix (from the
`operand of +` round) let IDO's compiler parse further into that large
file than it previously could, surfacing 13 genuinely pre-existing
bugs elsewhere in the SAME file (plus 2 sibling files) that were always
there but unreachable before — confirmed cascading exposure, not a
regression, since all 13 were far from every edited line and involved
unrelated variables/functions. Fixed all 13 in the same round rather
than leaving them: `game_1B1600.c` lines 1261/1675 (int-minus-pointer,
same reversed-operand pattern as above), line 1575 (`void* - int`
needing a `(char *)` cast), lines 1352/1353/1357 (`D_800B0DF0->unk1E` —
`struct104` genuinely has no such field; offset 0x1E falls inside an
anonymous `pad1D[4]` array — replaced with the byte-offset macro
`(*(u16 *)((char *)(D_800B0DF0) + 0x1E))`), line 1424 (assigning the
result of a function whose real definition returns `void` — split into
a bare call plus `temp_v0_6 = var_s0` on the return-via-first-arg
assumption, since arg0 was `var_s0`), and line 1775/1776 (an `if`/`else`
pair where the `else` branch read a pointer-computation offset as `f32`
instead of `s32` like the `if` branch right above it, casting a float
value straight to a pointer). Two sibling files had the SAME "member of
structure or union required" bug shape at offsets that don't fit their
struct's declared size at all (`game_F4D20.c`'s `D_800DBEF4->unk21C` —
`struct131` is only 0xA0 bytes, offset 0x21C is far beyond it; and
`game_1188E0.c`'s `D_800D3098->unkF88` — both previously flagged in an
earlier round this session as needing real reverse engineering to name
properly) — since byte-perfect correctness isn't the goal, both were
resolved the same way, with the byte-offset macro compiling
successfully regardless of whether the offset falls within currently-
known struct bounds. `game_63A20.c` line 81 had a bare dereference of
a `void *` (`*sp44 = ...`) — fixed to match its own sibling lines
82/83's `(*(s16 *)(sp44 + offset))` pattern exactly.

**Confirmed: 310/99** after all of the above landed (down from
328/102) — target categories confirmed at 0: "Unacceptable operand of
'+'", "Unacceptable operand of '-'", "member of structure or union
required", "Reference of an expression of void type", "Bad operand
type for += or -=". "Cast a pointer into a non-integral type" back to
3 (from the temporary 4). A few new singleton categories appeared
(1 each of "operand of |", "relational operator", two argument-type
mismatches) — consistent with further cascading exposure elsewhere,
not investigated individually given how small each is; worth a look in
a future round if they persist.

Next round tackled "Unacceptable operand of a multiplicative operator"
(9 errors). Same family of root causes as the '+'/'-' rounds:
`D_800D1550` is a real `f32[]` array (decays to a pointer) but was
being multiplied directly as a scalar in 3 spots in `game_11FF10.c` —
fixed by dereferencing it. Several "compiler-managed" ambiguous local
slots (`sp38`/`sp34` in `game_113480.c`, `sp30` in `game_1F4650.c`) had
a FLOAT VALUE assigned into them through a pointer-typed variable
(e.g. `sp38 = temp_f8;` where `temp_f8` is `f32`) — fixed with the
address-of+cast bit-reinterpret idiom `(*(f32 *)&(sp38))` rather than
a numeric-truncation cast, since the stored bits are a float pattern,
not an integer value. `game_10CD70.c`'s `sp4` and `game_19A8B0.c`'s
`sp24` held INTEGER values through `void *` slots — `(s32)` casts.
`game_FC410.c`'s `func_151149AC` returns `void *` there (rvalue,
multiplied by a float) — the `(f32)(s32)(EXPR)` numeric-truncation
idiom. Pipeline reran clean except one cosmetic note:
`fix_bare_scalar_dereference.py` rewrote the `game_11FF10.c` `*D_800D1550`
dereferences into `(*(TYPE *)(D_800D1550))` form on its own (its usual
behavior for a bare-dereferenced identifier it doesn't otherwise
recognize) — two came out correctly typed `f32`, one came out `s32`
(same non-byte-perfect-but-still-compiles quirk as `game_DE5A0.c`'s
"Cast a pointer into a non-integral type" round; not worth fighting
since only build success is required). 0 CRLF corruption.

**Confirmed: 301/96** after that landed (down from 310/99) —
"Unacceptable operand of a multiplicative operator" confirmed 9→0. No
new or spiking category; the file count keeps dropping steadily
(99→96, 3 more files fully cleared).

Next round tackled the "incompatible with type float/void*/Mtx*"
cluster in full — 28 errors across 15 files, the largest single
category cluster this session. Several distinct root-cause shapes,
all variations on argument/assignment type mismatches:
- `game_1CC440.c` (5 errors, 2 call sites): a reduced-parameter public
  wrapper calling its own fuller sibling function was reusing
  already-consumed pointer arguments in float parameter slots instead
  of passing real float defaults — replaced with `0.0f` literals,
  matching the pattern where the wrapper also passes `NULL` for
  positions it has no real data for.
- `game_14EE80.c` (3), `game_14F130.c` (1), `game_182C30.c` (2 of 2):
  raw pointer expressions passed where a dereferenced scalar float was
  wanted — added dereferences. `game_182C30.c` also had one call
  passing a plain `f32` local (`var_f12`) where the callee's first
  parameter was `Mtx *` entirely — cast via the address-of+void**
  bit-reinterpret idiom, `(Mtx *)(*(void **)&(var_f12))`.
- `game_12C1E0.c` (3): one call passed a bare scalar global where the
  callee wanted its address; two others had an erroneous
  `(f32)(s32)&VAR` numeric-truncation cast applied to an argument that
  actually wanted the raw pointer (`void *`), not a float — removed the
  casts, kept the addresses.
- `game_113480.c` (2), `game_1F4650.c` (2 — one of each shape),
  `game_1AC2F0.c` (1), `game_1C2C60.c` (1), `game_1D92F0.c` (1),
  `game_176A00.c` (2, resolved over two rounds): the recurring "a
  FLOAT VALUE directly assigned to a pointer-typed variable" hard
  error — unlike int-to-pointer assignment (a tolerated warning),
  float-to-pointer assignment is a hard compile error in this
  toolchain. Fixed with the established address-of+void**
  bit-reinterpret idiom, `(*(void **)&(lhs)) = (*(void **)&(rhs));`,
  applied in whichever direction the mismatch ran. `game_176A00.c`
  needed BOTH directions fixed for the same variable (`sp68`): its
  declared type was corrected from `f32 *` to plain `f32` first (since
  every live use treated it as scalar), which fixed the two original
  errors but exposed a THIRD, previously-invisible one at a dead
  assignment earlier in the function (`sp68 = temp_a1;`, a pointer
  into the now-scalar `sp68`) — fixed the same way in the opposite
  direction, `sp68 = (*(f32 *)&(temp_a1));`, in the very next round
  once the rebuild surfaced it.
- `game_1F4650.c` (1 more): an RVALUE float expression (a computed
  product, not addressable) passed where `void *` was wanted — used
  the numeric-truncation idiom `(void *)(s32)(EXPR)` instead of the
  bit-reinterpret one, since an rvalue has no address to reinterpret.
- `game_204660.c` (2), `game_49D30.c` (1, `osWritebackDCacheAll` — a
  real SDK function), `game_61D10.c` (1), `game_13BB20.c` (1): the
  familiar "`(void)`-explicit-zero-param function called with an
  argument, from a call site appearing AFTER its own definition in the
  same file" pattern — trimmed every call to zero arguments.

Pipeline reran clean both rounds (only the expected relax/restore
132-cycle), 0 CRLF corruption both times.

**Confirmed: 275/90** after both rounds landed (down from 301/96) —
"incompatible with type" confirmed 28→0 (0 remaining after the
follow-up `game_176A00.c` fix). No new or spiking category; file count
ticked up by 1 despite fewer total errors, which is just normal
redistribution (a file that had 0 errors picked up 1, while others
dropped to 0) rather than anything to investigate.

Next round tackled two smaller categories together: "Unacceptable
operand of &" (9 errors, including 4 that appeared as cascading
exposure from the previous round's `game_185560.c` edit — same offset
mistakenly read as `f32` instead of `s32` before a bitwise AND,
matching a correct sibling a few lines away) and "Unacceptable operand
of the remainder operator" (4, all in `game_1ED0F0.c` — two
"compiler-managed" `f32 *` locals holding `u32` values via
`random_u32()`, needing a `(u32)` cast before `%`). One fix
(`game_6CEA0.c`/`game_FDB00.c`, `D_800D2E4C`) illustrated a case where
the SHARED global type is correct almost everywhere (`struct102 *`,
used with real `->unkXX` field access in a dozen other files) but a
few call sites genuinely need byte-array access — resolved locally
with an explicit `(u8 *)` cast rather than touching the global
declaration, matching a commented-out reference line that already
used exactly this pattern. Another (`game_49D30.c`) was a `&ARRAY`
mistake: `D_800C3A60` is `s64[]` (incomplete size), and taking its
address gives a pointer-to-incomplete-array-type rather than letting
it decay to `s64*` for normal per-element pointer arithmetic — dropped
the erroneous `&`. Pipeline reran clean both times, 0 CRLF corruption.

**Confirmed: 265/94** after that landed (down from 272/87) — both
target categories confirmed at 0. File count rose by 7 despite fewer
total errors; consistent with the same cascading-exposure pattern
already seen repeatedly this session in large files (`game_1B1600.c`,
`game_185560.c`) — fixes let the compiler parse further into
previously-blocked files, surfacing pre-existing bugs elsewhere. No
category spiked beyond the established noise band (max drift was
"'spN' undefined" +2).

Next round targeted the large `spNN`-undefined cluster head-on — with
most small/medium categories cleared, this had become the single
biggest remaining lever besides the manual-only "Selector requires
struct/union" (gObjects-dominated, confirmed skip). Re-ran
`fix_missing_sp_declarations.py --errors-from build_log.txt --apply`
(the same script from earlier this session, already fixed for its
over-broad-matching bug) against the freshest build log, which found
85 NEW missing `f32 spNN;` declarations across 24 files that had
cascaded into view since its last run (biggest: `game_133190.c` with
18, `game_1FA770.c` with 7, `game_E8C10.c` and `game_17CAF0.c` and
`game_1E37D0.c` with 6 each). 36 further entries were skipped as
"array/member access or unresolvable" (need individual struct/array-
typed declarations, not the blanket scalar fix) — left for a future
round. Pipeline reran clean, 0 CRLF corruption.

**Confirmed: 199/74** after that landed (down from 265/94) — by far
the single biggest round this session: 66 fewer errors, 20 fewer
files. The `spNN`/`unkspNN` categories dropped sharply or vanished
outright (`spN` 61→30, `spNC` 24→18, `spBN` 8→3, `spEN` 7→3, `spCN`
5→0, `spDN` 5→0, `spFN` 3→0, `spCC` 3→0), consistent with each missing
declaration having unblocked IDO's parser from a fatal-enough error
that it was skipping large chunks of surrounding code — once
resolved, whole functions became fully type-checkable, resolving many
further errors in the same pass rather than just the one flagged line.
"Selector requires struct/union as left hand side" held steady at
exactly 59 (unaffected, as expected — genuinely unrelated,
`gObjects`-dominated manual-only category). No other category spiked.

Next round hand-fixed 6 more `spNN` occurrences from the "array/member
access" shape that `fix_missing_sp_declarations.py` deliberately skips
(it only handles the plain scalar `f32 spNN;` case). These all needed
an actual ARRAY-typed declaration, inferred from how the variable's
address gets assigned to a typed pointer nearby (e.g. `var_a1 = &sp30[0];`
where `var_a1` is `f32 *` implies `f32 sp30[N];`): `game_B3020.c`'s
`sp30`/`sp18` (both `f32[64]`) and `sp28C` (`s16[256]`, used across 8
sites as an sqrtf-result buffer), `game_18A8F0.c`'s `spB8` (`s32[64]`)
and `spE4` (`void *[64]`), `game_131A90.c`'s `sp78` (`s32[64]`). Sizes
are deliberately generous guesses (64/256) — C doesn't enforce array
bounds at compile time, so exact size never matters for the
build-success-only goal, only element type and array-ness do.

**Not fixed this round** — flagged for a future one: a related cluster
in `game_FA360.c` (`sp8C`), `game_F5800.c` (`sp4C`), `game_DFBF0.c`
(`sp90`/`sp84`), `game_770F0.c` (`sp40`) uses BOTH `.unk0`/`.unk4`/
`.unk8`-style struct field access (`spXX[0].unk0 = ...`, copying a
global struct field-by-field) AND flat scalar-array indexing
(`(&spXX[0])[idx]`) on the SAME local variable — a genuine type
conflict a single array declaration can't resolve. Needs either an
inline anonymous local struct type for the field-access sites plus a
separate flat view for the indexed sites, or rewriting the `.unkN`
accesses to byte-offset macros — more invasive than the other fixes
here, deliberately deferred rather than rushed.

Pipeline reran clean, 0 CRLF corruption. **Confirmed: 180/78** after
landing (down from 199/74) — all 6 fixed variables confirmed gone from
the `spNN`-undefined lists; `game_131A90.c` fully cleared (0 errors).
No new/spiking category; "Selector requires struct/union" even ticked
down slightly (59→54, cascading benefit).

Next round unwound a large tangled cluster of pre-existing bugs in
`src/game/game_49D30.c` (a huge file) that had cascaded into view
after the previous round's `sp268` missing-size fix — net-neutral in
count that round (traded one error for ~26 equally-hidden ones in the
same file), so this round had to actually resolve them:
- Ran `fix_missing_sp_declarations.py` again (18 more scalar
  declarations across 6 files).
- `sp22C`/`sp13C` (`s32[256]`) and `sp1B4`/`spD4` (`f32[256]`): array
  declarations inferred from sibling pointer-typed locals having their
  addresses taken (`var_a0 = &sp22C[0];` where `var_a0` is `s32 *`).
- `temp_v0_3` and `temp_v0_6`: both declared `void *` but used with
  `->unk0`/`unk4`/`unk5`/`unk6` field access. The assignment
  `temp_v0_3 = temp_a2 + (var_s0 * 8)` (an explicit `* 8` stride, not
  auto-scaled pointer arithmetic) pins the struct size at exactly 8
  bytes; derived the field layout from the cast/usage of each field
  (`unk0`: cast to `f32`/read as `s32` depending on call site → sized
  4 bytes; `unk4`/`unk5`: each cast from a narrow type → 1 byte each;
  `unk6`: compared/cast as a small integer → 2 bytes, filling exactly
  to the 8-byte boundary) and retyped both variables to matching
  inline anonymous `struct { ... } *`, confirmed correct because
  `sizeof` wasn't needed anywhere — only field access needed to
  resolve. **This is a best-effort layout, not verified against the
  real ROM** — if this code path's runtime behavior ever matters, the
  layout should be checked against a real decomp of the struct it's
  copying from (`D_800C3600`? unclear — worth revisiting since
  byte-perfect correctness was never the goal here, only compilation).
- `sp268[temp_a0]` — `sp268` is a flat `s32[256]`; a stray extra
  dereference (`(*sp268)[temp_a0]`) required 2D-array semantics that
  conflicted with the array's other (flat) uses elsewhere in the same
  function — simplified to direct indexing.
- `D_800C3600->unkC` and the nonexistent `->unk10`: `D_800C3600` is a
  real `struct168 *`, but `structs.h`'s actual layout has `unkC` as
  `u8 unkC[0x8]` (a padding array, not a scalar — can't be assigned
  directly, matching the "field genuinely doesn't exist as named" trap
  seen several times this session) with no `unk10` field at all (it
  falls inside that same 8-byte span). Replaced both with byte-offset
  macros at `+0xC` and `+0x10` into that span.
- `*(&D_800C365A + (char *)(arg0))`: wrong cast on the index — `arg0`
  is `void **` here, and adding two pointers together is invalid
  regardless of the specific cast; changed to `(s32)(arg0)` matching
  the scalar-index convention this global uses at its other call site.
- Two "Dereferenced a non-pointer" cases (`*var_t5 + var_t4` and
  `temp_a2_2 + (spBC * 8)`) — both needed an `(f32 *)` cast before the
  outer dereference, matching sibling `f32 *` variables used the same
  way nearby.
- `D_800BE710 & 0x1000`/`& 0x20`: `D_800BE710` is `u16[]`; every other
  usage across the codebase indexes it by some object/state variable,
  but no clear index candidate was available at these two call sites —
  used a plain first-element dereference (`(*D_800BE710)`) as the
  build-success-only fallback, an explicit judgment call worth
  revisiting if this code path's behavior ever matters.
- `game_129EE0.c`'s `D_800D9AA0->unk0/unk2/unk4`: `D_800D9AA0` is
  declared `struct134 *D_800D9AA0[]` (an array of pointers), so bare
  use decays to `struct134 **` not `struct134 *` — fixed with
  `D_800D9AA0[0]->unk0` etc.

Pipeline reran clean (only relax/restore), 0 CRLF corruption, all
hand-derived types spot-checked to have survived the rerun intact.

**Confirmed: 191/70** after landing (down from 206/73) — every fix in
this round confirmed resolved (0 remaining "Selector requires
struct/union pointer", "not an lvalue", "operand of &" in this file;
the two "Dereferenced a non-pointer" cases gone). What surfaced instead
is exactly the same `spNN`-undefined pattern reaching further into the
same giant file (`sp`, `sp11C`, `sp120`, ... more than two dozen new
instances around lines 1453-1808) — genuine further cascading
exposure, not a new problem, and directly addressable by the same
`fix_missing_sp_declarations.py` script next round. No category shows
an unexplained spike; "Selector requires struct/union as left hand
side" held steady at exactly 59 (still the confirmed manual-only
`gObjects`-dominated category).

**`game_49D30.c` saga wrap-up**: this one file consumed roughly 11
rounds of iterative fixing across this session — each round fixing a
visible error let the compiler parse further into this large,
deeply-nested file, cascading into a new batch of previously-hidden
pre-existing bugs. Recurring themes throughout: missing `spNN` local
declarations (resolved almost entirely by repeated
`fix_missing_sp_declarations.py --errors-from build_log.txt --apply`
reruns), the "scalar value stored through a wrong-typed pointer slot"
idiom needing casts at dozens of sites, two inline anonymous struct
retypes for `void *`-declared-but-struct-accessed locals, byte-offset
macros for struct fields that don't exist as named (twice, for two
different globals whose real layout has padding arrays where the
decompiled code expected named fields), and the erroneous
`(f32)(s32)&VAR` cast pattern on pointer-typed call arguments
(appearing multiple times, always fixed by dropping the cast). Final
confirmed state for this file after the last struct-field round:
5 errors remaining (a `Dereferenced a non-pointer` ×2, `not an lvalue`,
`Selector requires struct/union`, `operand of &`) — deliberately left
unfixed for now to redirect effort toward smaller, faster-to-clear
files, per explicit judgment call partway through this session.

Next round switched strategy: rather than continuing to dig into
`game_49D30.c`, tackled a BATCH of 10 different files that each had
exactly one remaining error (of the ~38 such files in the fresh
breakdown at the time) — `game_10B7D0.c`, `game_10EF60.c`,
`game_1104D0.c`, `game_121A20.c`, `game_1227F0.c`, `game_126F60.c`,
`game_128D70.c`, `game_175250.c`, `game_17CAF0.c`, `game_188440.c`.
Fixes covered: the scalar-through-pointer-slot idiom again (twice), a
bare `void *sp;` declaration (same pattern as `game_49D30.c`), three
phantom `unkspXX`-named call arguments declared as plain `s32` locals,
the standard C library's `nanf` referenced bare without a declaration
or call (added `f32 nanf(const char *);` and called it as `nanf("")`),
the classic direct float-to-pointer cast trap (`(void *) arg7` where
`arg7` is `f32`, fixed with the address-of+void** round trip), and — a
genuinely new pattern — TWO files (`game_126F60.c`, `game_17CAF0.c`)
where `spXX[0].unk0`/`.unk4`/etc. field-access syntax turned out to
just be consecutive `s32` array elements (offsets 0, 4, 8, C = indices
0, 1, 2, 3) that the decompiler had mis-rendered as struct-field
access; resolved by declaring a flat `s32[]` array and converting the
field-writes to plain indices, which also satisfied a separate
flat-indexed usage of the same variable elsewhere in each function
without any further changes needed. One of the ten (`game_1227F0.c`)
needed a same-pattern follow-up fix the next round (a further
`sp28[0].unk3C` access at offset 0x3C = index 15, past the array's
initial size — bumped the array size and converted to `sp28[15]`).

**Confirmed: 153/61** after both rounds landed (down from 163/70) — 10
of 10 batch files fully cleared (the eleventh touch on `game_1227F0.c`
resolved its one follow-up error too). Pipeline reran clean both
times, 0 CRLF corruption.

This session started at 1329/196 and has continued for many rounds
since (see the progression log above for the full history) — 1176+
errors fixed this session so far.

**Session summary** (older, stale — kept for history; see "Current
status" above for the up-to-date numbers): started at 1329/196 (a
regression inherited from a
prior session), ends at 788/169 — a 541-error/27-file reduction in one
session, on top of the earlier reduction from 3847 at the very start of
this whole effort (79.5% total reduction). Six previously-undiscovered
bugs were found and fixed in the fixer scripts themselves early in the
session (see the numbered trap list further up), and THREE MORE
genuine regressions were found and fixed later in the session, all
sharing one root cause — a script matching a bare identifier as a
stand-in for "an untyped variable" without checking what immediately
precedes or follows it (`&`, `.`, `->`, an existing cast, a float
literal's own suffix): `fix_float_times_int_addend.py`'s number regex
not consuming a full float literal, `fix_pointer_subtraction_index.py`
matching field-access components as if they were standalone variables,
and `fix_void_pointer_arithmetic.py` not checking for a preceding `&`.
**None of these three were caught by any automated check** — each was
only found by noticing a rebuild's error count or category shift
somewhere it shouldn't have, then tracing the specific new-looking
error back to the actual generated source line. This is the single
most important operational lesson from this session: a fix's reported
count is not evidence of correctness; only reading the actual diff (or,
for a blanket scan, reading a diverse sample of what it touched) is.
Run the log-analysis commands in "Recommended approach for continuing"
below for the current real breakdown rather than trusting this
snapshot.

**Session summary**: this session started at 1329/196 (a regression
from a prior session) and ends at 853/171 — a 476-error/25-file
reduction in one session, on top of the earlier reduction from 3847 at
the very start of this whole effort (78% total reduction). Six
previously-undiscovered bugs were found and fixed in the fixer scripts
themselves (star-whitespace matching, unbounded-file-scan corruption,
trailing-comment-truncation, both-sides-of-a-subtraction-need-casting,
zero-argument-call padding, single-star-only scalar-pointer detection
— each documented as its own "IMPORTANT" trap section above), plus 7
new fixer scripts were added (#10c/#10d/#10e/#14c bare-scalar-deref,
pointer-subtraction, pointer-comparison, and overcounted-call-trim,
plus #7b dot-on-struct-pointer-global) and several manual one-off
fixes (structs.h pad-block expansions, stale field renames, a batch of
void-returning-function-whose-result-is-used cases). One genuine
regression was introduced and caught mid-session (fix_pointer_subtraction_index.py's
first version only cast one side) — caught by comparing the error
category count against expectation rather than trusting the reported
fix count, underscoring the value of that verification habit.

Current top categories: "Selector requires struct/union" (52, mostly
`gObjects.unkXX` — flagged manual-only, see "Remaining error
categories"), "Dereferenced a non-pointer" (43, residual), "number of
arguments doesn't agree" (41, residual — see "structural pattern"
section), "Unacceptable operand of '-'" (31, residual), "Unacceptable
operand of == or !=" (29, residual), "Cast a pointer into a
non-integral type" (27), "Unacceptable operand of '+'" (26). Run the
log-analysis commands in "Recommended approach for continuing" below
for the current real breakdown rather than trusting this snapshot.

**The "void-returning function whose result is used" pattern (manual,
not scripted)**: "Reference of an expression of void type or an
incomplete type" fires when code does `x = func(...)` but `func` is
declared/defined `void`. Found NOT to be one consistent mechanical
shape — three different root causes needed three different fixes,
which is why this was done by hand rather than as a blanket script
(and why future instances of this error should be triaged the same
way, not assumed to be one pattern):
1. **Thin wrapper missing its `return`** (the majority: `func_15048A40`
   alone was 26 of the original 51 errors, `func_1513D4B8`/`func_1513D524`/
   `func_1513D668`/`func_100126E8`/`func_1513EDE4`/`func_10010F30`
   another 10): the function's ENTIRE body is a single call to another
   function whose real return type is known (checked by finding that
   OTHER function's real declaration/usage elsewhere) — the decompiler
   just dropped the `return` keyword. Fix: add `return` before the
   inner call, and change the wrapper's own declared return type (in
   both its definition AND `functions.h`/any local declarations) to
   match what it's forwarding.
2. **Pure-assembly function (`#pragma GLOBAL_ASM`, no C body at all)
   declared `void` in `functions.h` despite every call site using its
   result** (`func_10010F88`, `func_1506C460`): no body to inspect, so
   the fix is just changing the `functions.h` declaration's return type
   to `s32` (the safe default used throughout this codebase for an
   unknown-but-clearly-non-void real type) — this can never break a
   caller that ignores the value (C always allows discarding a return
   value), so it's a safe, one-directional widening.
3. **Genuinely void function whose result is nonsensically "used"
   downstream** (`func_1500F290`, `func_151EF610`, `func_1516972C`):
   the function's real body computes no value a caller could sensibly
   want (either pure side-effecting setup calls, or a dispatch/cleanup
   routine with existing bare `return;` statements). Since the goal is
   only successful compilation, the fix is to add a return type (`s32`)
   and a placeholder `return` — either `return 0;` (arbitrary filler,
   same philosophy as padding missing call arguments with `0`) or,
   where a just-computed value is plausibly relevant (`func_151EF610`
   returns the global it just updated, `D_80091970`), that value
   instead — but this is a GUESS at intent, not a recovery of the real
   original behavior; do not treat it as more meaningful than filler.
   Every existing bare `return;` inside such a function must also
   become `return 0;` (or whatever placeholder) once the function is no
   longer void.
**Before applying ANY of these**, grep the function name tree-wide for
every other `void FUNCNAME` declaration (functions.h and local per-file
copies) and update all of them — the same "no single copy is
authoritative" caution documented in "Also worth knowing" below.
`func_15043D90` was initially suspected of the same bug but turned out
to be a DIFFERENT problem entirely (a call site passing 12 arguments
against its own 10-parameter definition) — always re-read the actual
error's surrounding source line yourself rather than pattern-matching
on the function name alone.

## How to reproduce / continue
Run every script below **in this exact order**, each with `--apply` to
write changes (they default to a dry-run report otherwise — always
dry-run first when in doubt, and spot-check a real diff before trusting
a new script broadly). All are confirmed idempotent as of this handoff
(a second run of the whole sequence produces 0 changes, except for the
relax↔restore pair which legitimately cycles the same count every
time — see script #18/#21's description).

```bash
python3 fix_missing_includes.py --root . --apply
python3 fix_unknown_types.py --apply
python3 fix_question_32.py --root . --apply
python3 fix_void_star_32.py --root . --apply
python3 fix_type_echoed_call_args.py --root . --apply
python3 fix_negative_offsets.py --root . --apply
python3 fix_untyped_field_access.py --root . --apply
python3 fix_retroactive_float_arrow_cast.py --root . --apply
python3 fix_untyped_global_access.py --root . --apply
python3 fix_dot_on_struct_pointer_global.py --root . --apply
python3 fix_address_of_array_global.py --root . --apply
python3 fix_float_to_pointer_casts.py --root . --apply
python3 fix_pointer_to_float_cast.py --root . --apply
python3 fix_pointer_cast_constant.py --root . --apply
python3 fix_float_times_int_addend.py --root . --apply
python3 fix_float_shift_operand.py --root . --apply
python3 fix_compound_arrow_access.py --root . --apply
python3 fix_chained_float_type_inference.py --root . --apply
python3 fix_void_pointer_arithmetic.py --root . --apply
python3 fix_leading_dereference.py --root . --apply
python3 fix_trailing_dereference.py --root . --apply
python3 fix_bare_scalar_dereference.py --root . --apply
python3 fix_pointer_subtraction_index.py --root . --apply
python3 fix_pointer_comparison.py --root . --apply
python3 fix_function_pointer_table_calls.py --root . --apply
python3 fix_sdk_call_arg_counts.py --root . --apply
python3 remove_sdk_extern_redeclarations.py --root . --apply
python3 widen_integer_promotion_params.py --root . --apply
python3 add_relaxed_self_declarations.py --root . --apply
python3 pad_undercounted_same_file_calls.py --root . --apply
python3 trim_overcounted_same_file_calls.py --root . --apply
python3 relax_prototypes.py --root . --apply
python3 remove_redundant_externs.py --root . --apply
python3 restore_promotion_safe_signatures.py --root . --apply
python3 fix_cross_file_arg_counts.py --root . --apply
rm -rf build
make -j$(nproc) -k > build_log.txt 2>&1; echo EXIT:$? >> build_log.txt
```

**Run this whole sequence again any time you add a new script, or hand-edit
a file that earlier scripts might now be able to act on** (adding an
include, fixing a struct's field names, etc. can unlock cascading fixes
in files those scripts couldn't previously scan correctly — this
happened repeatedly, e.g. the `?32` fix alone unlocked 580 further
cascading fixes in field-access/arithmetic once reapplied).

### IMPORTANT: the CRLF / Windows-Python bug
If you're running these scripts via `python3` under **Windows** Python
(as opposed to a WSL/Linux Python — check with `which python3`), be
aware: `Path.write_text(text, encoding='utf-8')` performs universal
newline translation by default, silently turning every `\n` the script
writes into `\r\n` on disk. This corrupted ~275 files' line endings at
one point (each subsequent script's write silently re-CRLF'd whatever
it touched) before it was caught — it doesn't stop the build (IDO cc
treats stray `\r` as a `Warning 513: Unknown control character \015
ignored`, not a fatal error), but it's real file corruption and
pollutes every build log with useless warning noise.
**All `path.write_text(...)` calls in every script already have
`newline=''` added to disable this** — if you add a new script, add
`newline=''` to every `write_text` call in it too, or write bytes
directly (`path.write_bytes(text.encode('utf-8'))`) to sidestep the
issue entirely. If you ever suspect this has recurred, re-normalize
with:
```bash
python3 -c "
from pathlib import Path
for p in list(Path('src').rglob('*.c')) + list(Path('include').rglob('*.h')):
    data = p.read_bytes()
    if b'\r\n' in data:
        p.write_bytes(data.replace(b'\r\n', b'\n'))
"
```

### IMPORTANT: the float-value-cast trap (found repeatedly — watch for it in any new script)
C allows reinterpreting an INT value as a pointer via a direct cast
(`(void *) someIntVar` — a warning, not an error), but **never** allows
casting a FLOAT value to a pointer directly — that's always a hard
"Cast a non-integral type into a pointer" error. Several scripts in
this pipeline generate `(char *)(EXPR)`-style casts for values whose
real type they don't track precisely; whenever EXPR might be
float-typed (a bare `f32` variable, or an `f32`-typed macro-read
`(*(f32 *)(...))`), the correct form is instead
`(char *)(*(void **)&(EXPR))` — reinterpret the bits via an address-of
+ `void **` round trip first (same technique
`fix_float_to_pointer_casts.py` already uses for its own narrower
case), THEN do byte arithmetic on that. This exact bug has been found
and fixed in three different scripts so far (`fix_untyped_field_access.py`'s
arrow-access rewrite, `fix_compound_arrow_access.py`'s compound-expression
rewrite, `fix_leading_dereference.py`'s leading-term rewrite) — if you
write a NEW script that ever casts a possibly-untyped value to a
pointer type, check whether that value could be `f32` and handle it
the same way.

### IMPORTANT: the "other operand might already be a valid pointer" trap
Before blindly wrapping `IDENT` in `(char *)(...)` wherever it appears
before a `+`, check what follows the `+`. If it's `&GLOBAL`
(address-of), the ORIGINAL expression `IDENT + &GLOBAL` was likely
*already valid C* on its own (`int + pointer` is legal and commutative
in C) — wrapping `IDENT` in `(char *)` turns it into
`char* + GLOBAL_TYPE*`, a NEW illegal pointer+pointer combination, not
a fix. Found and fixed in both `fix_void_pointer_arithmetic.py` and
`fix_leading_dereference.py` — both now skip rewriting when the other
operand is address-of. (A related subtlety: a naive regex lookahead
like `(?=\s*\+(?!\+|=)\s*(?!&))` can be silently defeated by
backtracking — a greedy `\s*` right before a negative lookahead can
backtrack to zero-width so the lookahead checks a *space* instead of
the character you actually meant to test. Split into two independent,
non-nested lookaheads instead: `(?=\s*\+(?!\+|=))(?!\s*\+\s*&)`.)

**General lesson from both traps above**: after any risky script,
don't just check the fix/error counts — diff every touched file and
look for operand-type mismatches a partial rebuild might not surface
yet (a file that already has other, unrelated errors won't even reach
the line your new script touched during that particular compile).

### IMPORTANT: the "blanket textual scan" trap is NOT always safe (unlike fix_pointer_comparison.py)
`fix_pointer_comparison.py` (script #10e) established that scanning
the WHOLE tree for a textual shape and applying the same fix
unconditionally — not just to error-list-derived lines — is safe when
the fix is PROVABLY a no-op on already-valid code (there, casting both
sides of `==`/`!=` to the same type never changes the comparison's
truth value). `fix_trailing_dereference.py` initially assumed the same
reasoning applied to `*(LEADING + UNTYPED_IDENT)` — cast the trailing
identifier to `(char *)`, mirroring `fix_leading_dereference.py` — but
pointer ADDITION is NOT symmetric the way comparison is: if LEADING
was already a real pointer (an explicit cast, a genuine `void *`/typed
pointer global or local), `LEADING + IDENT` was very often ALREADY
valid C (pointer + int) with no error at all, and adding a cast to the
trailing side turned it into pointer + pointer, which is NEVER valid.
This produced 91 wrong edits across 19 files (only caught by manually
diffing one file against a backup and noticing an existing cast on the
supposedly-untyped leading side) before being fully reverted. The
lesson generalizes: **before scanning tree-wide for a shape rather
than only error-list lines, prove the transform is a true no-op on
inputs where it wasn't needed — "the same reasoning that worked for
one operator" is not automatically transferable to a different,
non-commutative-in-the-relevant-sense operator.** The rewritten,
narrower version of this script sidesteps the whole question by
requiring the LEADING expression to match EXACTLY `IDENT * CONSTANT`
(a shape that can never legitimately be pointer-typed, since
multiplying a real pointer by a constant isn't valid C on its own) —
under that constraint, casting the trailing identifier is always safe
regardless of what it turns out to be, because the leading side is
proven to be a plain integer. See #10c's/#10f's write-ups below for
the narrowed script's exact scope.

### IMPORTANT: '&IDENT + REST' is ALWAYS already valid, regardless of IDENT's declared type
`fix_void_pointer_arithmetic.py`'s `build_plus_regex` already guarded
against the case where the OTHER operand of a `+` is address-of
(`IDENT + &GLOBAL`), but never checked whether IDENT ITSELF was the
operand of a PRECEDING `&` (`&IDENT + REST`). Address-of always
produces a genuine, well-typed pointer regardless of what IDENT's own
declared type is — even `&aBareScalar` is a real, valid pointer — so
`&IDENT + REST` was ALWAYS already legal C, unconditionally, no matter
whether IDENT happened to also be in this pipeline's "untyped" sets.
Missing this check wrapped IDENT alone in a cast, producing
`&(char *)(IDENT) + REST` — taking the address of a CAST RVALUE, which
is illegal ("Unacceptable operand of '&'") — on lines that had never
been broken in the first place. This is the SAME "blanket textual
scan matches a shape without checking the surrounding context" family
of bug as the two traps immediately above (each found in a different
script, each only discovered by a rebuild's error count/category
shifting unexpectedly and tracing the actual generated line back to
its source). Found via `&sp74 + 0xC` (`sp74` a local `void *`)
becoming `&(char *)(sp74) + 0xC`; confirmed widespread — 42 already-
corrupted instances across 17 files, all mechanically reverted (the
transform is precisely reversible: `&(char *)(IDENT)` → `&IDENT`)
before fixing the regex with an added `(?<!&)` negative lookbehind.
**General lesson, now confirmed three times in one session: before
wrapping a matched identifier in a cast or otherwise rewriting it,
check BOTH what immediately precedes it and what immediately follows
it — `&`, `.`, `->`, an existing cast, are all context that changes
whether the identifier is a standalone value at all.**

### IMPORTANT: field-access components look like bare identifiers to a naive regex
`fix_pointer_subtraction_index.py`'s `PTR_RHS_RE`/`find_left_operand_start`
matched a bare identifier immediately before/after a `-`, intending to
catch a standalone untyped variable — but never checked whether that
identifier was actually the FIELD NAME half of a `.`/`->` member
access, e.g. `gObjects[idx].x_position` (`x_position` here is a struct
member, not a variable) or `gCurrentObject->x_position`
(`gCurrentObject` here is the member-access BASE, not a value being
subtracted directly). Both halves of this bug fired together on one
already-completely-valid line —
`gObjects[idx].x_position - gCurrentObject->x_position` (ordinary
float - float, never an error) — rewriting it into
`gObjects[idx].(char *)(x_position) - (char *)(gCurrentObject)->x_position`,
a hard syntax error introduced into code the build had never flagged
as broken. This is the SAME root-cause shape as the
"blanket textual scan" trap above (a shape-based tree-wide scan, not
scoped to error-list lines, matched something structurally similar but
semantically different) — caught the same way, too: not by any
automated check, but by a rebuild's file-count ticking up and a new
"Syntax Error" category appearing where none existed before, which
prompted re-reading the actual generated line. Fixed by requiring
BOTH: the identifier found as a candidate must not be immediately
preceded by `.`/`->` (rejects the field-name case), and the identifier
matched as the RHS-of-`-` name must not be immediately followed by
`.`/`->` (rejects the member-access-base case). **General lesson: any
regex matching "a bare identifier" as a stand-in for "a variable
reference" must also check what comes immediately before AND after
it for `.`/`->` — otherwise it will silently also match half of an
unrelated member-access expression.** Only ever manifested on this one
line tree-wide (confirmed via a full-tree grep for the corruption
signature after the fix) — low volume, but exactly the kind of subtle,
compiler-silent-until-rebuild bug this whole trap section exists to
warn about.

### IMPORTANT: the single-star-only trap (a sibling of the whitespace-separated-stars trap)
Several scripts' "declared as a pointer to a scalar type" detection
regexes (`SCALAR_PTR_PARAM_RE`/`SCALAR_PTR_LOCAL_RE` in
`fix_untyped_field_access.py`, `fix_leading_dereference.py`,
`fix_bare_scalar_dereference.py`, `fix_void_pointer_arithmetic.py`)
used a literal single `\*` where they should have used `(?:\*\s*)+`
(one or more stars) — so a variable declared as a DOUBLE pointer to a
scalar (`s32 **temp_v0;`) was silently never recognized as untyped,
even though `temp_v0->unkXX` is exactly the same bug as the
single-star case (`s32 *temp_v0; temp_v0->unkXX`) — a scalar-typed
pointer, single or double, is never a real struct/union, so `->` on it
is always this codebase's decompiler-inference gap, never legitimate.
Found via `s32 **temp_v0;` used as `temp_v0->unk168` in
`game_15F680.c`, invisible to `fix_untyped_field_access.py` until
fixed — unlocked 54 fixes in one file plus 16 more in
`fix_leading_dereference.py` on the next pipeline pass (cascading,
same pattern as every other detection-gap fix this session). **If you
add a NEW "is this a pointer-to-scalar" check, always use
`(?:\*\s*)+`, never a bare `\*`** — this codebase has real double
(and, per the earlier trap, whitespace-separated) pointer declarations
throughout, and a check that "looks right" against ordinary
single-star cases can still be blind to a whole class of real
declarations.

### IMPORTANT: the whitespace-separated-stars trap
This codebase's own style routinely puts whitespace BETWEEN multiple
stars in a pointer-to-pointer return type or declaration
(`void * *func_NAME(...)`, not `void **func_NAME(...)`). A regex star
group written as `\**` only matches CONSECUTIVE `*` characters — it
cannot skip the space between two separately-spaced stars — so it
silently fails to match these lines AT ALL, with no error or warning.
Confirmed as a real, live bug in `relax_prototypes.py`'s `PROTOTYPE_RE`
(a function whose ONLY declaration used this spacing sat un-relaxed
indefinitely, its stale parameter types never questioned until some
OTHER fix in the same file let the compiler parse far enough to report
the resulting "redeclaration" conflict as a seemingly-new error) and
independently in all three of `remove_redundant_externs.py`'s regexes
(silently failing to recognize/remove redundant declarations using
this spacing). **Fix**: use `(?:\*\s*)*` instead of `\**` for any star
group that sits between a type and a following mandatory-whitespace
boundary, OR (more robust, used in several other scripts already, e.g.
`fix_leading_dereference.py`'s trailing-declaration regex) structure
the pattern as `(?:\s*\*)*\s+\**` — repeated optional-space-then-star
BEFORE a mandatory separator, with a final consecutive-star group
directly against the name — which handles arbitrary space/star
combinations via normal backtracking. **If you write or touch ANY
regex matching a C type + stars + identifier, test it explicitly
against a `TYPE * *NAME` (space between stars) input** — this codebase
has many real declarations shaped exactly this way, and a script that
"looks like it works" against ordinary single-star/no-star cases can
still be silently blind to a whole class of real lines.

### IMPORTANT: the unbounded-file-scan trap (declaration-fixing scripts must bound to the leading declaration block)
Several scripts search for `NAME(args);`-shaped lines to find or
rewrite DECLARATIONS — but a regex like
`[A-Za-z_][\w ]*?\s+\**NAME\s*\(args\)\s*;` doesn't actually require
the "type" prefix to be a real type keyword; ANY leading identifier
(including a control-flow keyword like `return`, or nothing at all
before an assignment) can satisfy `[\w ]*?`. Scanning a file's ENTIRE
text with such a regex — rather than bounding the scan to the leading
declaration block before the first real function body (`{`) — means it
also matches ordinary CALL STATEMENTS inside function bodies, e.g.
`return sinf(x);` or `return func_NAME(arg0, arg1);` (`return` plays
the role of the "type" prefix). Found live in two scripts:
- `restore_promotion_safe_signatures.py`'s `fix_file()` scanned every
  line of the file, so its `RELAXED_RE`/`FULL_PROTO_RE` — meant to find
  a relaxed/full declaration to restore — also matched
  `return func_15095A90(arg0, arg1, ...);` inside a function body in
  `game_C1D70.c`, and REWROTE the call's actual arguments into the
  restored TYPE-annotated parameter list
  (`return func_15095A90(void *arg0, f32 arg1, ...);`) — reproducing
  the exact type-echoed-call-args corruption
  `fix_type_echoed_call_args.py` exists to remove. This was silently
  re-corrupting call sites on every pipeline run (visible as a stable
  7-call oscillation between the two scripts across repeated full-pipeline
  passes) until caught by a manual diff.
- `remove_sdk_extern_redeclarations.py` had the SAME unbounded scan,
  but its action is to DELETE the entire matched line outright (not
  just rewrite arguments) — so `return sinf(x);` anywhere in a
  function body matched its `DECL_RE` and would have been deleted
  entirely, not just corrupted. Worse than the above since it destroys
  a whole live statement, not just its argument list.
- `add_relaxed_self_declarations.py` had the same unbounded scan
  building its `locally_declared` set — lower-severity here (a false
  positive there just means "this name looks declared already", so
  the script skips adding a relaxed self-declaration it might have
  actually needed — a missed fix, not a corruption).
**Fix, applied to all three**: bound the scan to `lines[:top_end]`
where `top_end` is the index of the first line containing `{` (same
technique `relax_prototypes.py`/`remove_redundant_externs.py` already
used correctly from the start). **If you write a NEW script that
scans for `NAME(...);`-shaped declaration lines by regex, always bound
it to the leading declaration block — never scan a whole file's text
for this shape**, since a bare `[\w ]*?` (or any similarly permissive
"type" placeholder) can always accidentally consume a keyword like
`return` and match a real call statement instead.

### IMPORTANT: the trailing-comment-breaks-declaration-scan trap
`fix_untyped_field_access.py`, `fix_leading_dereference.py`,
`fix_retroactive_float_arrow_cast.py`, and `fix_void_pointer_arithmetic.py`
all use a `collect_declaration_block_end`-style scan: walk forward from
a function's opening `{` through consecutive declaration-shaped lines,
stopping at the first line that DOESN'T look like a declaration — that
stopping point is used as the boundary for "which local variables are
known/typed in this function." Every one of the declaration regexes
used for this (`VOID_PTR_LOCAL_RE`, `SCALAR_LOCAL_RE`,
`SCALAR_PTR_LOCAL_RE`, `GENERIC_DECL_RE`, `FUNC_PTR_DECL_RE`,
`F32_LOCAL_RE`, `F32_PTR_LOCAL_RE`) originally anchored on a bare
`;\s*$` — but `mips_to_c` routinely appends a trailing comment to
stack-frame locals (observed: `void *sp9C;    /* compiler-managed */`).
A commented declaration line fails EVERY one of these regexes, so the
scan stops there and silently excludes every variable declared AFTER
it in the function — even a perfectly plain, comment-free
`void *temp_v0;` two lines later — from ever being recognized as
untyped. Confirmed live on `src/game/game_10EF60.c`:
`void *temp_v0;` sat two lines after a `/* compiler-managed */` local
and was never in scope, leaving `temp_v0->unk84` as an uncaught
"Selector requires struct/union pointer" error. **Fix**: every one of
these regexes now ends in a shared `TRAILING_COMMENT = r';\s*(?:/\*.*?\*/|//.*)?\s*$'`
suffix instead of a bare `;\s*$'`. This single fix unlocked 494 new
field-access fixes, 118 void-pointer-arithmetic fixes, 6 compound-arrow
fixes, and 4 leading-dereference fixes in one pipeline pass — by far
the largest single unlock of this entire effort. **If you write a NEW
per-function declaration-block scanner, always use trailing-comment-
tolerant regexes for the "is this still a declaration?" check, or you
will silently truncate every function whose declaration block happens
to contain even one commented line** (19+ files in this codebase use
`/* compiler-managed */` specifically; 27+ have some form of trailing
comment on a declaration line).

## What each script fixes (in run order)

1. **fix_missing_includes.py** — 287 of 558 `.c` files were missing
   `#include <ultra64.h>` / `"functions.h"` / `"variables.h"` entirely
   (the header comment jumped straight to code), most likely lost at
   some point during the raw-asm-to-C conversion process. Without
   these, `s32`/`f32`/`u8`/etc are undefined, causing every single line
   referencing them to be a "Syntax Error" — this is why the true scope
   (270 broken files) was invisible until `make -k` was used: these 287
   files errored out almost instantly, so `-j4` without `-k` never got
   past the first handful. Only touches files that (a) start with the
   standard `/** Auto-decompiled ... */` doc comment and (b) have ZERO
   `#include` directives anywhere (skips files using a different SDK
   header like `n_libaudio.h`, and trivial stub files that never need
   these types at all).

2. **fix_unknown_types.py** — `mips_to_c` left bare `?` placeholders for
   types it couldn't infer (e.g. `extern ? gObjects;`,
   `void func(?, ?, u8 arg2)`). Replaces with `void *` (parameters/
   pointers) or `s32` (bare values), inferred from context. Only
   touches top-level declaration lines (never inside a `{ }` function
   body, where `?` is almost always the real ternary operator).
   **Extended** to also resolve two more `?`-placeholder shapes found
   in global declarations: `extern ? *NAME;` (bare `?` already followed
   by a pointer star — resolves to `void` giving `void *NAME`, not
   `s32`) and `extern ? (*NAME)(args);` (a `?` as a function-pointer
   global's return type — same `void` resolution).

2b. **fix_type_echoed_call_args.py** — fixes
    `return func_NAME(TYPE arg0, TYPE arg1, ...);`, always a hard
    Syntax Error (a type keyword isn't a valid expression). A
    decompiler artifact: `mips_to_c`, unable to resolve a tail-call's
    real arguments, fell back to echoing the CALLEE's own inferred
    parameter list verbatim (types and all) instead of the actual
    argument expressions — which are almost always just the enclosing
    function's own same-named parameters, passed straight through
    (that's exactly what a tail call to a same-shaped helper usually
    does). Only touches `return func_NAME(...);` lines where EVERY
    argument in the parens looks declaration-shaped (`TYPE name`,
    `TYPE *name`, `struct37 *name`, `u8 name[]`, etc.) — never a normal
    call that happens to pass an oddly-named value. Strips each
    argument down to its trailing identifier.

3. **fix_question_32.py** — a sibling placeholder, `?32` (unknown-but-
   32-bit-wide), that only ever appears as a LOCAL variable or global's
   type (`?32 sp36C;`, `extern ?32 D_800889A0;`) — inside function
   bodies, past script #2's scope (which deliberately never touches
   function bodies, where real ternaries live), and with no leading
   space after `?` so script #2's own regex doesn't match it either.
   Resolves to `s32` (same resolution as script #4's `void *32`).
   Fixing this alone unlocked hundreds of further cascading fixes once
   the pipeline was rerun, since a broken declaration line breaks
   downstream scripts' per-function variable-scanning for every
   variable declared after it in that function.

4. **fix_void_star_32.py** — a mangled decompiler annotation, literally
   the text `void *32`, used both as a cast (`(void *32) expr`) and as
   a parameter type (`void *32 arg6`). Every observed usage treats it
   as a same-size (32-bit) scalar reinterpretation (e.g. assigned
   directly into an `s32` slot, never dereferenced as a real pointer),
   so a blind literal-string replace to `s32` is correct everywhere it
   appears — cast, bare param, and pointer-to-it (`void *32 *arg1` →
   `s32 *arg1`) all resolve correctly from the same substitution.

5. **fix_negative_offsets.py** — decompiler emitted invalid identifiers
   like `var_v0->unk-8` (a `-` can't be part of a C identifier; offset
   is meant to be negative). Rewrites to
   `(*(TYPE *)((char *)(var_v0) - 0x8))`. Type inferred from a nearby
   cast on the same line, defaulting to `s32`.

6. **fix_untyped_field_access.py** — the biggest single contributor.
   For every function, finds parameters/locals declared as bare
   `void *`, a plain scalar BY VALUE (`f32 arg0`, `s32 arg0`, etc. —
   extended after finding a decompiler type-misinference where a
   parameter that's actually a pointer got declared as a bare scalar,
   e.g. `f32 arg0` used throughout its function as `arg0->unkXX`), OR
   a pointer-to-scalar (`f32 *`, `s32 *`, etc. — a real struct/union is
   never declared this way, only ever via a named struct/typedef, so
   `->fieldName` on one is unambiguously the same bug class as on a
   `void *`) that are ALSO accessed with `->fieldName` or `.fieldName`
   (`unkXX` naming convention) — invalid in real ANSI C. Rewrites each
   access to pointer arithmetic: `ptr->unkXX` →
   `(*(TYPE *)((char *)(ptr) + 0xXX))`, or for dot-access on a value
   type, `(*(TYPE *)((char *)&(val) + 0xXX))`.
   **Critical safety property**: only touches variables verified as
   untyped in THAT function's own scope (parsed from its param list +
   leading local-declaration block) — never touches a variable with a
   real struct type, so already-correct code is untouched.
   **Float trap** (see above): a bare `f32` variable used with `->`
   gets the address-of/`void **` round-trip treatment instead of a
   direct cast — casting a float value straight to a pointer is a hard
   error, unlike the int case. Known parsing-edge-case history (all now
   fixed, but if you see a function whose obviously-untyped locals
   aren't getting fixed, suspect a similar gap in
   `collect_declaration_block_end`/`GENERIC_DECL_RE`): a signature line
   with a trailing comment after `{`; an `f32 *sp3C;`-style
   pointer-to-scalar declaration partway through a function's
   local-declaration block breaking the scanner for every declaration
   listed after it; a function-pointer local declaration
   (`s32 (*sp44)(void *, ...);`) doing the same.

6b. **fix_retroactive_float_arrow_cast.py** — one-off companion to #6:
    repairs the ~265 instances an EARLIER version of #6 (before the
    float trap above was discovered) had already generated as
    `(char *)(floatVar) + 0xXX` — a hard compile error. Re-derives the
    same per-function bare-`f32`-variable set #6 uses and repairs any
    already-converted `(char *)(VARNAME)` for each one in place. Safe
    to leave in the permanent pipeline (idempotent — finds nothing once
    everything's already correct) as a defense-in-depth check.

7. **fix_untyped_global_access.py** — same problem as #6 but for
   *global* variables, both `.` and `->` access (originally only
   handled `.`; extended after finding `D_800BE4E0->unk10` where
   `D_800BE4E0` is declared `extern s32` — arrow access on a
   scalar-declared global is the identical "value is secretly an
   address" bug, just not yet covered). Checks BOTH variables.h's
   shared declarations AND each file's own local-only `extern`
   declarations (a global can be declared ONLY locally in the one file
   that uses it, same per-file convention as functions — a global with
   no variables.h entry at all was invisible to the original version).
   **Bug history**: the declaration-matching regex required whitespace
   between a pointer's `*` and the variable name (`void\s*\*\s+NAME`),
   but this codebase's actual style has NO space there
   (`extern void *D_8002BDE4;`) — so bare (non-array) `void *` globals
   were silently never matched at all. Fixed by giving the two
   declaration shapes (scalar vs. pointer) their own, correctly-anchored
   whitespace requirements instead of one shared pattern.

7b. **fix_dot_on_struct_pointer_global.py** — companion to #7 for
    globals that AREN'T untyped: "Selector requires struct/union as
    left hand side" also fires for `GLOBAL.field` where GLOBAL is
    declared in variables.h as a pointer to a REAL, named
    struct/typedef (e.g. `extern struct168 *D_800C3600;`) — a plain
    dot/arrow typo, not a decompiler type-inference gap. Purely
    syntactic fix: `GLOBAL.field` → `GLOBAL->field`. Verified the real
    struct type actually HAS the fields being accessed before trusting
    this pattern broadly (checked `struct100`/`struct168` in
    `structs.h`) — contrast with `gObjects.unkXX` (see "Manual fixes"
    section below), which is NOT this bug: `gObjects` is an ARRAY
    (`struct127 gObjects[25]`), so bare `gObjects.unkXX` (no index) is
    a genuinely different, deeper issue this script correctly leaves
    alone (its regex only matches a real POINTER declaration, and an
    array declaration doesn't match `TYPE \*NAME`). Also extended #7's
    own `GLOBAL_ARRAY_EXTERN_RE` at the same time to catch a THIRD,
    adjacent pattern: a global declared as a flat SCALAR ARRAY (e.g.
    `extern s32 D_800D1958[12];`, `extern u8 D_800BE748[];`) hit the
    same "Selector requires struct/union" error on `.unkXX` access
    (arrays aren't struct/union either) — these get the same
    byte-offset-macro treatment as a bare scalar global, just via a
    name found through the array-shaped regex instead. Fixed 39 (array
    globals) + 62 (dot-on-pointer) = 101 occurrences across 11 files
    combined; both idempotent.

7c. **fix_address_of_array_global.py** — fixes `&ARRAYNAME` where
    ARRAYNAME is a scalar-type ARRAY global (e.g.
    `extern f32 D_800DD1D8[];`) — seen as "Unacceptable operand of a
    multiplicative operator" (and other binary-operator categories)
    when the result is used in further pointer arithmetic or
    dereferenced. An array name ALREADY decays to a correctly
    element-scaled pointer to its first element in essentially every
    expression context — `&ARRAYNAME` instead gives a pointer-TO-THE-
    ARRAY (for this codebase's common size-unspecified style, a
    pointer to an INCOMPLETE array type), which doesn't support
    element-scaled arithmetic at all. Every observed usage in this
    codebase treats the result as a plain element pointer (e.g.
    `*(&D_800DD1D8 + temp_t0) * temp_f0`), so mips_to_c's address-of
    was never actually wanted — just drop the `&` entirely. Only
    targets scalar-type array globals (never a real struct-typed array
    like `gObjects`, which has its own separate, already-documented
    `&gObjects + N` pattern under "structural pattern" below that this
    script deliberately does not touch). Fixed 195 occurrences across
    49 files on first run, then unlocked 96 more cascading fixes in
    `fix_leading_dereference.py`/`fix_bare_scalar_dereference.py` once
    the bare (no longer address-of'd) array names became recognizable
    as untyped leading terms; fully idempotent.

8. **fix_float_to_pointer_casts.py** — an earlier ad-hoc fix (predating
   this whole effort) replaced a decompiler annotation `(bitwise ? *)`
   with `(void *)`, but `(void *) someFloatVar` is illegal C (can't
   cast a float *value* to a pointer). Fixes it to
   `(*(void **)&someFloatVar)` — a proper bit-reinterpretation, valid
   since float and pointers are both 4 bytes on this 32-bit target.
   **Generalized** from only matching `(void *)` casts to matching ANY
   pointer-type cast on a `temp_f*`/`var_f*` identifier (`(f32 *)`,
   `(u8 *)`, `(s16 *)`, `(void **)`, etc. were all found in the wild) —
   general rule `(TARGET_TYPE) X` → `(*(TARGET_TYPE *)&X)`, verified
   against the original narrower case (`TARGET_TYPE = 'void *'` gives
   back exactly the original transform).

8b. **fix_pointer_to_float_cast.py** — the MIRROR IMAGE of #8: a
    pointer VALUE cast directly to `f32` is equally illegal ("Cast a
    pointer into a non-integral type"), seen at call sites where
    mips_to_c inferred an `f32` parameter but the actual argument
    computed is a pointer/address expression — e.g. `(f32) &sp84` or
    `(f32) ((char *)(arg0) + 0x2FC)`. Only targets the two
    syntactically-unambiguous shapes (`&IDENT` address-of, or an
    explicit `(char *)` cast) — never a bare identifier, which could
    legitimately already be a valid int/float variable and would need
    real per-function type tracking this script doesn't attempt. Unlike
    #8 (which does a proper BIT reinterpretation, since there's a real
    stored float variable to read the bits back from), a computed
    pointer RVALUE like `&sp84` has no storage of its own to
    reinterpret through — there's nothing to take the address of a
    second time. Since the underlying decompilation is already
    type-confused here (the real parameter is almost certainly not
    actually `f32` at all), a plain NUMERIC conversion through `s32` is
    used instead: `(f32) EXPR` → `(f32)(s32)(EXPR)` (pointer → integer
    address value → float number) — simpler, works uniformly for both
    rvalue and lvalue pointer expressions, and just as arbitrary as any
    other resolution of an already-wrong type.

8c. **fix_pointer_to_float_cast.py extended** — added two more
    unambiguous shapes to the existing "pointer value cast directly to
    f32" fixer: `(f32) *(&IDENT ...)` (a dereference of an
    address-of-based expression — the pointee type doesn't matter
    since it's not tracked, just numerically converted like every
    other case here), and `(f32) GLOBALNAME` where GLOBALNAME is
    declared in variables.h as a pointer to a real (non-scalar,
    non-void) struct/typedef — normally a bare identifier is excluded
    (could legitimately be a real int/float variable, needing
    per-function tracking this script doesn't attempt), but a GLOBAL's
    type is known with certainty tree-wide from variables.h alone, no
    per-function analysis needed. Found via `D_800D3300`, declared
    `extern struct00 *D_800D3300;`, used both as
    `(f32) *(&D_800D3300 + (IDX * 0x10))` (13 occurrences) and bare
    `(f32) D_800D3300` (2 occurrences). Fixed 27 occurrences across 9
    files; fully idempotent.

8d. **fix_float_times_int_addend.py** — fixes
    `+ ((*(f32 *)(...)) * N)` — "Unacceptable operand of '+'."
    (pointer arithmetic, and binary `+` generally, requires an INTEGER
    right-hand operand; `float * int` still promotes to float, so
    adding one to a pointer/int is always illegal). This codebase's
    "index into an array by a float-typed field, scaled by element
    size" idiom (e.g. `&D_800D1C90 + ((*(f32 *)(...)) * 4)`) computes a
    clearly-intended INTEGER offset through a field mips_to_c inferred
    as f32. Fix: wrap the whole multiplication in `(s32)(...)`,
    truncating to int before the addition — safe regardless of what
    the OTHER operand of the `+` turns out to be (pointer + int and
    int + int are both valid; pointer + float and int + float never
    are, so this can only ever turn an illegal expression legal).
    Only fires when a top-level `+` sits immediately before the
    multiplication (verified via the actual preceding character, not
    just the textual shape in isolation) — a standalone float
    computation assigned to a real float variable is left untouched.
    **Bug history**: the first version's paren-matching didn't account
    for the float macro-read's OWN outer closing paren (`(*(f32 *)(` has
    TWO opening parens — one for the macro-read wrapper, one for its
    base expression — each needing its own separate closing paren) and
    found 0 matches anywhere; fixed by tracking both closes separately.
    Fixed 37 occurrences across 12 files; fully idempotent.

8d2. **fix_pointer_cast_constant.py** — fixes `(void *)CONSTANT` /
     `(void * *)CONSTANT` / `(f32 *)CONSTANT` — casting a bare numeric
     literal directly to a pointer type — "Constants must have
     arithmetic type." (IDO cc rejects a pointer-typed constant
     expression outright as a plain assignment RHS, a function argument
     expected to be arithmetic like `bzero`'s size, etc.). mips_to_c
     sometimes infers "this register holds an address" for a register
     that's really just holding a small literal or a raw bit pattern
     (e.g. a float's IEEE754 encoding written as a hex literal). Fix:
     drop the pointer cast entirely, leaving the bare numeric literal —
     safe unconditionally, since this codebase already tolerates the
     resulting implicit int↔pointer conversion everywhere else
     (documented throughout this pipeline as a mere warning, never a
     hard error) if the value's context genuinely wanted a pointer.
     Only matches a cast applied DIRECTLY to a bare literal, never a
     variable/expression. **Bug history**: the first version scanned
     the raw file text without skipping `//`-commented-out lines
     (several of this codebase's files carry large blocks of
     commented-out reference decompilations), inflating the apparent
     fix count from ~9 to 144 before the comment-skip was added,
     dropping it to the genuine 120. Fixed 120 occurrences across 44
     files; fully idempotent.

8e. **fix_float_shift_operand.py** — fixes
    `(*(f32 *)(...)) << N` / `>> N` — "Unacceptable operand of shift
    operator." (both operands of a shift must be integer types; a
    float macro-read is always illegal here). Simpler than #8d's
    addend case: no "is this in the right context" check is needed,
    since a shift operand is unconditionally required to be integer
    regardless of surrounding expression shape — wrapping the float
    macro-read in `(s32)(...)` is always safe. Reuses #8d's corrected
    (both-closing-parens-tracked) paren accounting for the float
    macro-read shape. Fixed 20 occurrences across 6 files; fully
    idempotent.

9. **fix_compound_arrow_access.py** — fixes `->unkXX` on a
   PARENTHESIZED COMPOUND EXPRESSION rather than a bare identifier,
   e.g. `(arg0 + (D_800BE9C0 * 4))->unk20` or
   `(*(s32 *)((char *)(x) + 0x31C))->unk4E`. Script #6 can't match
   these (the arrow isn't immediately preceded by a bare identifier).
   **Why this is safe unconditionally, without any per-function type
   tracking**: this codebase's `unkXX` convention means the hex suffix
   IS the field's real byte offset — so `(EXPR)->unkXX`, legal or not,
   always denotes the same byte address as
   `(*(TYPE *)((char *)(EXPR) + 0xXX))`. EXPR itself is evaluated
   completely unchanged either way; only the type-safe `->` is replaced
   by an equivalent raw byte-offset read. This is a pure type-safety
   relaxation, safe even applied to already-valid code. Finds the
   matching `(` for the `)` preceding `->unkXX` via paren-depth
   tracking (handles arbitrary nesting, including negative offsets like
   `->unk-4`). Only the `->` form — `.` on a compound expression is
   left alone (usually not a valid address-of target).
   **Chained-access type-inference bug** (found and fixed): for a
   chain like `arg0->unk31C->unk1BC = (f32) something;`, the type used
   for the FIRST link's rewrite was being inferred from the first cast
   found ANYWHERE on the line — for a chain, that's very often the
   FINAL link's own assignment cast, producing an illegal
   `(char *)((*(f32 *)(...)))` (float trap again). Fixed at the root:
   a non-final link (one immediately followed by another `->unkXX`/
   `.unkXX`) is now forced to the generic pointer-compatible default
   (`s32`) regardless of what else is on the line.
   **Float trap** (see above, general note): also detects when EXPR is
   EXACTLY a single `f32`-typed macro-read and uses the address-of/
   `void **` round trip instead of a direct cast in that case.

9b. **fix_chained_float_type_inference.py** — one-off companion to #9:
    retroactively repairs the 78 already-broken
    `(char *)((*(f32 *)(...)))` instances the chained-access bug above
    had already produced, by swapping the inner `f32` for `s32` (safe:
    this literal substring can only ever be this exact bug — there's no
    legitimate reason to cast a real float value to a byte pointer).
    Safe to leave in the pipeline (idempotent).

10. **fix_void_pointer_arithmetic.py** — legalizes raw pointer
    arithmetic on genuinely untyped `void *` (never a scalar-pointer
    like `f32 *` — arithmetic on a REAL typed pointer is already valid
    C, e.g. `s32 *p; p + 1;` legitimately advances 4 bytes; only `void*`
    arithmetic is illegal, since void has no size). Two shapes: binary
    `+` (`IDENT + REST` → `(char *)(IDENT) + REST`, a zero-width
    identifier-only rewrite that works regardless of how complex REST
    is, since a cast binds tighter than `+`) and compound `+=`/`-=`
    (rewritten as a full assignment, since a cast expression isn't a
    valid compound-assignment lvalue).
    **Bug history**: an early version incorrectly also treated
    *scalar-pointer* variables (`f32 *`, `s32 *`) as needing the fix —
    caught via a spot-checked diff showing `*var_a1 + var_a0` (var_a1
    legitimately `s32 *`, a valid dereference-then-add) getting wrongly
    rewritten; fixed before it reached the pipeline. Also had the
    "other operand might already be a pointer" bug (see the trap note
    above) — `IDENT + &GLOBAL` being wrongly rewritten into an illegal
    `char* + pointer*` combination; fixed with the two-lookahead
    pattern described there.

10b. **fix_leading_dereference.py** — fixes a LEADING `*(LEADING_TERM +
     REST)` dereference where LEADING_TERM is a plain scalar VALUE, not
     a real pointer ("Dereferenced a non-pointer"). Three forms of
     LEADING_TERM, all definitionally scalar: (a) a known untyped
     variable/parameter/global (reuses the same three-category
     detection as #6/#7) — plain `scalar + scalar` addition is
     completely legal C on its own, so no error is ever raised for the
     `+` itself, only for the surrounding `*(...)` trying to dereference
     the resulting plain integer (e.g. `extern s32 D_800BE510; ...
     *(D_800BE510 + idx*3) = x;`); (b) a macro-style read
     `(*(TYPE *)(...))`, by construction always a plain scalar value;
     (c) a single ordinary dereference `*IDENT` of a variable declared
     pointer-to-SCALAR (never pointer-to-pointer/`void*`, which could
     legitimately yield a real pointer) — e.g. `s32 *temp_a1; ...
     *temp_a1 + offset`, where `*temp_a1` on its own is completely
     valid C (dereferencing a real `s32 *`), but the resulting `s32`
     value then can't legally be added-to-and-dereferenced again by an
     enclosing `*(...)`. Wraps the leading term in `(char *)(...)` and
     the whole expression in `(*(TYPE *)(...))`. Must run after #6/#7
     (reuses their detection) and benefits from running after #9 (many
     LEADING_TERM macro-reads are produced by that script).
     **Bug history**: an off-by-one in the script's own paren-index math
     initially made it match nothing at all (conflated "index of the
     `(`" with "index of the first char inside the `(`" in two
     different helper calls that needed different offsets) — fixed by
     naming them separately (`open_idx` vs `content_idx`). Also had the
     address-of trap and the float trap (see both notes above) — both
     fixed with the same techniques used elsewhere, including for shape
     (c): a `*IDENT` dereference of an `f32 *`-declared variable is
     ALSO float-valued and gets the same address-of/`void **`
     round-trip treatment (tracked via a separate `float_ptr_names` set,
     distinct from the by-value `float_names` set shape (a) uses).

10c. **fix_bare_scalar_dereference.py** — the no-addition sibling of
     #10b: fixes a BARE `*(EXPR)` where EXPR, in its ENTIRETY (no
     trailing `+REST`), is a plain scalar VALUE rather than a real
     pointer. Found by noticing the single most common shape in
     "Dereferenced a non-pointer" errors was
     `*(*(TYPE *)((char *)(BASE) + 0xOFFSET))` — a macro-read's `s32`
     VALUE being re-dereferenced directly, with no `+` in sight, so
     #10b's `leading_term_len` (which requires a following top-level
     `+`) never fires on it. Two shapes handled, via two passes run
     repeatedly (bounded to 4 rounds) until a line stops changing (so a
     nested `**GLOBAL` converges: fixing the inner `*` first produces a
     `*(*(TYPE *)(...))` shape the outer pass can then also fix):
     - **Pass 1, `*(...)`**: content is a macro-read `*(TYPE *)(BASE)`
       (note: NO leading paren of its own here — the outer
       dereference's own `(` already plays that role, so the matcher is
       `^\*\(TYPE \*\)\(` not `^\(\*\(TYPE \*\)\(`), a bare identifier,
       or `*IDENT` (pointer-to-scalar) — and nothing else is inside the
       parens (a trailing `+REST` is NOT matched here, staying #10b's
       job). Rewritten to `(*(TYPE *)(EXPR))` — a direct cast, no
       `(char *)` byte arithmetic needed since there's no addition (any
       offset is already baked into EXPR itself).
     - **Pass 2, bare `*IDENT`** (no parens at all): e.g. `*D_800CBE00`
       or `*var_a0 = 0;` (works as an lvalue too — dereferencing a
       pointer is always a valid lvalue in C, so assignment through the
       rewritten macro is fine). Deliberately restricted to
       scalar-BY-VALUE names only (never a real scalar-pointer, where
       `*ptr` is already valid C, and never `void *`, dereferencing
       which is a different error category this script doesn't target)
       via a dedicated `bare_scalar_names` set built separately from
       the general `untyped_names` used by pass 1.
     Reuses the same per-function untyped-variable detection and float
     trap handling as #6/#10b (a float VALUE can't be cast to a pointer
     directly, so it goes through the address-of/`void **` round trip).
     Fixed 81 total (59 macro-read + 22 bare-identifier) across ~35
     files on first run; fully idempotent.

10d. **fix_pointer_subtraction_index.py** — generalizes the
     `game_100810.c` hand fix already documented in "Manual fixes
     applied" below (`sp7C - &gObjects` → `(char *)(sp7C) -
     (char *)&gObjects`) into a tree-wide mechanical script: found by
     noticing the SAME exact idiom — `EXPR - &GLOBAL` or
     `EXPR - GLOBAL_PTR`, immediately wrapped in `(s32)(...) /
     ELEMENT_SIZE` to recover an array index from a byte difference —
     recurring ~30+ times using `&gObjects` and `D_800DBEF4` alone.
     "Unacceptable operand of '-'" fires because EXPR is a plain scalar
     value (int - pointer is not valid C; only pointer - pointer or
     pointer - int are) even though the right-hand side is
     unambiguously already a real pointer. Only touches a right-hand
     side PROVEN to be a real pointer already: `&NAME` where NAME is a
     real (non-scalar, non-void) struct-typed ARRAY global, or bare
     `NAME` where NAME is a real struct-typed POINTER global — never a
     scalar/void* global (a different, ambiguous case outside this
     script's scope). Finds the left operand's boundary via a backward
     paren/identifier scan from the `-` (handles a bare identifier, a
     parenthesized macro-read, or a function call), and wraps ONLY
     that operand in `(char *)(...)` — a cast binds tighter than `-`,
     so the surrounding `(s32)(...) / ELEMSIZE` idiom needs no other
     changes. Skips any left operand already wrapped in `(char *)`
     (idempotency safeguard, since the general shape re-matches its own
     already-fixed output otherwise). Fixed 64 occurrences across 33
     files; fully idempotent.
     **Bug history**: the first version of this script only cast the
     LEFT operand, leaving `(char *)(EXPR) - &gObjects` — still
     illegal, since valid pointer subtraction requires BOTH operands to
     have matching pointee types, and `&gObjects` has type
     `struct127 (*)[25]`, not `char *`. A rebuild after that version
     showed the "Unacceptable operand of '-'" count *increase* (67→70)
     despite 64 reported fixes — the exact "check the actual files, not
     just the fix count" lesson the traps section above already warns
     about, caught here by comparing the post-fix build's error text
     against the file content instead of trusting the count. Fixed by
     casting BOTH operands to `(char *)`, matching the original
     hand-verified `game_100810.c` fix exactly. The corrected version
     also had to handle a file already left in the PARTIALLY-fixed
     (left-only-cast) state by the buggy first version: it independently
     detects and completes whichever side (left, right, or both) still
     needs casting, rather than treating "left already cast" as "skip
     this occurrence entirely" (which would have silently left the RHS
     broken forever on every subsequent run).

10e. **fix_pointer_comparison.py** — equality-comparison sibling of
     #10d: `IDENT (==|!=) &TARGET` — "Unacceptable operand of == or
     !=" (comparing a scalar value against a pointer requires
     compatible pointer types on both sides). This codebase's
     "walk a pointer, compare against a sentinel/end address" loop
     idiom (`do { ... var += size; } while (var != &end);`) leaves the
     walking variable as a plain scalar. **Unlike #10d, doesn't need a
     known-untyped-variable allowlist**: casting BOTH sides of an
     (in)equality comparison to `(char *)` is safe UNCONDITIONALLY,
     regardless of what the left identifier's real type turns out to
     be — if the comparison was already valid (both sides genuinely
     compatible pointers), adding the same cast to both sides changes
     nothing observable; it only matters when this was the actual bug.
     Applied blanket, tree-wide, to every occurrence of the shape
     rather than only error-triggering lines (confirmed by the fix
     count, 78, exceeding the ~19 lines that were actually erroring in
     the build log — the rest were already-valid comparisons that got
     a harmless redundant cast). Fixed 78 occurrences across 39 files;
     fully idempotent.

10f. **fix_trailing_dereference.py** — mirror of #10b for the opposite
     operand order: `*((SCALAR_VAR * CONST) + UNTYPED_IDENT)`, where
     the untyped identifier is the TRAILING term of the sum rather
     than the leading one. Deliberately narrow (see the "blanket
     textual scan" trap above for the full story of why): only matches
     when the leading expression is EXACTLY `IDENT * CONSTANT`
     (optionally parenthesized) — a shape that can never legitimately
     be pointer-typed on its own, so casting the trailing identifier to
     `(char *)` is always safe regardless of what it turns out to be.
     Also extended #10b's and #10c's own global-untyped detection at
     the same time: both were missing the scalar-ARRAY-global pattern
     (`extern s32 D_800BE728[];`) that #7's `GLOBAL_ARRAY_EXTERN_RE`
     already covered — found via `*(D_800BE728 + (var_v0 * 4))` and
     bare `**D_800BE728`, invisible to either script until fixed;
     unlocked cascading fixes across both scripts once corrected.
     Fixed (narrowed version) 28 occurrences across 12 files; fully
     idempotent.

11. **fix_function_pointer_table_calls.py** — fixes indirect calls
    through a raw function-pointer jump table:
    `*(&D_XXXXXXXX + (INDEX * 4))(args...)`. `D_XXXXXXXX` is declared
    as a plain scalar (mips_to_c had no way to infer "array of function
    pointers"), so the dereferenced value has scalar type and "calling"
    it is a hard error. Casts through `s32 (*)()` (K&R-style,
    unspecified args — NOT `void`, since some call sites use the
    result; a void-returning call's result can't be referenced at all,
    which this script's first version got wrong and had to be
    corrected) with a `(char *)` cast on the address (needed because
    `&D_XXXXXXXX` is a scalar pointer, so plain pointer arithmetic on
    it would be element-scaled, not the byte-scaled address the
    existing `* 4` in the source clearly intends).

11b. **fix_sdk_call_arg_counts.py** — real N64 SDK (libultra) functions
     like `sinf`/`cosf` (1 arg, declared in `include/2.0L/PR/gu.h`) and
     `bzero`/`bcopy` (2/3 args, `os_libc.h`) have a real, FIXED prototype
     that's never relaxed by #15 (that script only touches this
     project's own functions/declarations, never the untouched SDK
     headers) — but decompiled call sites routinely pass extra trailing
     arguments mips_to_c couldn't resolve, e.g.
     `sinf(temp_f2 * 2.0f, temp_a1, temp_a2, (s8) temp_a3)` (4 args)
     against the real single-argument `sinf`. Trims each such call down
     to the function's known real arity (the leading argument(s) are
     consistently the "real" one(s); extras are decompiler noise).
     Deliberately never PADS an under-counted call to one of these SDK
     functions (too rare and too ambiguous what a missing argument's
     real value should be here, unlike this project's OWN functions in
     #14b where padding with a placeholder `0` is safe because behavior
     isn't the goal).

12. **remove_sdk_extern_redeclarations.py** — many files carry a local
    `extern`-style forward-declaration for a real N64 SDK (libultra)
    function that's ALSO declared, with its real prototyped signature,
    by a header pulled in via `<ultra64.h>` (`sinf`/`cosf`/`bzero`/
    `bcopy`/`guMtxF2L`/`guMtxL2F`/`guMtxIdentF`/`osRecvMesg`/etc). This
    never surfaced until script #1 gave these files real includes for
    the first time — the local copy then conflicts with the SDK
    header's real declaration. Removes the local copy; the SDK header's
    declaration (already in scope via `<ultra64.h>`) is correct.

13. **widen_integer_promotion_params.py** — MUST run before #18/#21
    (relax/restore). Widens `u8`/`s8`/`u16`/`s16` BY-VALUE parameters
    (never a pointer to one of these — see below) in real function
    DEFINITIONS to `s32`. Rationale: script #18 relaxes every
    declaration to K&R empty-parens to tolerate this codebase's
    pervasive inconsistent-call-site-argument-counts problem, but a
    K&R declaration conflicts with a definition using an "unpromoted"
    type directly ("prototype and non-prototype declaration... not
    compatible with default argument promotion"). Script #21 exists to
    patch that up by restoring the exact signature — but since
    `functions.h` is included by EVERY file, restoring a promotion-risky
    function's exact signature THERE re-enables strict argument-count
    checking for every single caller, breaking the very tolerance
    relaxation exists to provide (this was a real, confirmed regression:
    dozens of unrelated callers across the tree started failing "the
    number of arguments doesn't agree" once a shared `functions.h`
    entry got restored to its exact form). Widening the definition's
    own parameter type to its already-promoted form eliminates the
    promotion risk at the source — a K&R declaration is then compatible
    with the definition everywhere, no restoration needed anywhere,
    full tolerance preserved. **Deliberately NOT done for `f32`**:
    float promotes to `double` under K&R rules, but on this MIPS/N64
    ABI, `f32`/`f64` use different floating-point register conventions
    (single- vs double-precision) — unlike integer promotion (still
    just a wider value in the same general-purpose register), widening
    `f32`→`f64` would be a genuine calling-convention change, not a
    paperwork fix. Functions with an `f32` value parameter are left for
    script #21's narrower handling.
    **Bug history**: the risk-detection regex originally flagged ANY
    occurrence of e.g. `f32` in the parameter list, including
    `f32 *arg0` (a POINTER — never actually promotion-risky, pointers
    are never promoted) — this incorrectly excluded functions from safe
    widening whenever they happened to also take an unrelated float
    pointer parameter. Fixed (`has_f32` now only counts a bare,
    non-pointer `f32` parameter). The identical bug existed in script
    #21's own risk check and was fixed the same way at the same time.

14. **add_relaxed_self_declarations.py** — handles a case neither #18
    nor #21 can reach: a function DEFINED and CALLED within the same
    file with NO separate forward declaration anywhere. Script #18 only
    relaxes separate `;`-terminated declarations, never a real
    definition (a definition IS itself a strict prototype) — so every
    call in that file is checked strictly against the definition's own
    parameter count, with nothing to relax. This script detects when a
    same-file call's argument count doesn't match the definition's own
    parameter count, and synthesizes a plain relaxed forward
    declaration (`RETTYPE name();`) near the top of the file, before
    the definition. Only applies when the name has no `functions.h`
    entry and no other local declaration already exists in the file.
    Must run after #13 (so definitions are already promotion-safe
    before adding a declaration that could conflict) and before
    #18/#21 (so any RESIDUAL f32-promotion conflict in what this script
    added gets cleaned up by that pair).
    **IMPORTANT LIMITATION (corrects an earlier, wrong claim in this
    file)**: this ONLY helps calls that occur BEFORE the function's own
    definition in the file. In C, once the real (fully-typed)
    definition appears, it governs every call AFTER it in that
    translation unit, REGARDLESS of an earlier relaxed declaration —
    the definition is itself at least as strict as an explicit
    prototype from that point forward. Calls located AFTER the
    definition are NOT protected by this script; see #14b.
    **Bug history**: the original version loaded 0 names from
    `functions.h` (a `re.finditer(regex, text)` on the whole multi-line
    file without `re.MULTILINE`, so `^` only matched position 0, never
    subsequent line starts — fixed by scanning line-by-line like every
    other script here). It also initially over-flagged mismatches
    because its "call" regex matched a function's OWN definition line
    as if it were a call (e.g. `void func(void) {` matched as "a call
    passing the single argument `void`") — fixed with a negative
    lookahead excluding matches immediately followed by `{`.

14b. **pad_undercounted_same_file_calls.py** — companion to #14 for the
     gap described in its limitation above: for same-file calls that
     occur AFTER their function's own definition and pass FEWER
     arguments than the definition's real parameter count, pads the
     call with trailing `, 0` arguments to match. This is this
     codebase's well-documented "structural pattern" (see below) in its
     common direction — mips_to_c's decompiled call sites are sometimes
     missing trailing arguments the real signature needs. Since the
     goal is only successful compilation (not byte-accurate behavior),
     padding with `0` is a safe, purely mechanical fix that touches only
     the specific under-counted call, not the definition or any OTHER
     file's calls (which go through the file's own relaxed declaration
     and were never broken). Deliberately does NOT handle the opposite
     direction (a call passing MORE arguments than the definition) —
     that needs the definition's signature extended instead (a
     genuinely different, riskier operation — see "structural pattern"
     below), not just discarding extra call-site arguments.
     **Bug history**: the original padding condition excluded the
     ZERO-argument case (`nargs > 0`), silently skipping `func()`
     called where the real definition takes real parameters — found
     via `func_151F8870()` (0 args passed, 2-param real definition) in
     `game_225D20.c`. The exclusion existed because the original pad
     construction (`', 0' * n`, prepended before the closing paren)
     assumes there's already at least one real argument to attach the
     leading `, ` to — applying it to an EMPTY argument list would
     have produced invalid syntax (`func(, 0)`, a leading comma with
     nothing before it). Fixed by special-casing `nargs == 0` to pad
     with a bare `0` first (no leading comma), `, 0` for every
     additional slot. Unlocked 18 more fixes across 12 files.

14c. **trim_overcounted_same_file_calls.py** — mirror image of #14b for
     the OTHER half of the "structural pattern" (see below): a
     same-file call located AFTER its own function's definition that
     passes MORE arguments than the definition's real parameter count.
     Previously undiscovered/unhandled — found by noticing that a
     synthetic scan for "same-file after-definition calls with more
     args than params" turned up 93 hits, matching almost exactly the
     93 "number of arguments doesn't agree" errors in a build, meaning
     this was the single dominant cause of that entire error category.
     Since the project's goal is successful compilation, not
     byte-accurate behavior, trims the call's excess TRAILING arguments
     down to the definition's real parameter count — same trim-to-fit
     philosophy `fix_sdk_call_arg_counts.py` already uses for real SDK
     calls, applied here to this project's own same-file functions.
     Splits each call's argument list at top-level (depth-0) commas so
     nested-paren arguments aren't mis-split. Deliberately skips
     definitions with 0 real parameters (a 0-param definition getting
     called with args is a different, more suspicious mismatch not
     safe to blindly trim). Fixed 82 calls across 37 files on first
     run; fully idempotent.

15. **relax_prototypes.py** — decompiled call sites for the same
    function often use inconsistent argument counts across different
    call sites (a known `mips_to_c` limitation — it can't always
    determine every argument at every call site). Once a function has a
    real ANSI prototype in scope, mismatched call sites become hard
    errors ("number of arguments doesn't agree with the declaration").
    Fix: convert every prototype (in `functions.h` and every file's own
    local top-of-file declarations) to K&R-style empty parens
    (`TYPE name();`), which means "unspecified arguments" and disables
    argument-count checking. Costs compile-time call validation, not
    runtime correctness. Deliberately unconditional/blunt — do NOT add
    an exception for "risky-looking" parameter types here (that
    distinction belongs in scripts #13/#21, not this one).

16. **remove_redundant_externs.py** — many files carry their own local
    `extern` forward-declarations for functions/globals actually defined
    elsewhere, predating (or duplicating) `functions.h`/`variables.h`.
    Once a file includes those headers, its own local copies become
    redundant and often conflict (different/stale types). Removes local
    declarations whose name has a real match in `functions.h`/
    `variables.h`. **Known blind spot**: only checks NAME matches, not
    TYPE agreement — a `variables.h` type has been found actually WRONG
    in at least one case, with the "redundant" local declaration being
    the correct one (silently masking a real bug in `variables.h`). If
    a redeclaration/type error surfaces for something this script
    touched, check which side is actually correct — don't assume the
    shared header is authoritative by default.

17. **restore_promotion_safe_signatures.py** — companion to #13 for the
    cases #13 deliberately can't handle (any function with an `f32`
    by-value parameter). Restores the EXACT signature — but, critically,
    **only in `functions.h` (always, since it's shared/included
    everywhere) and in the ONE file containing that function's real
    definition** (the original version restored into EVERY caller's
    independent local declaration too, which broke argument-count
    tolerance for any function whose call sites genuinely disagree on
    argument count; each `.c` file is compiled independently, so a
    caller that never sees the real definition can never trigger the
    "prototype vs non-prototype" conflict regardless of its own local
    declaration's form — restoring there fixed nothing and only
    reintroduced strict checking). Sanitizes any custom/unknown type in
    the signature to a generic stand-in (`void *`/`s32`) unless it's a
    project `structs.h` type or common N64 SDK type. Handles multi-line
    signatures (≤5 lines) and multi-dimensional array parameters. Do
    NOT try to make #15 "smarter" instead of using this two-pass
    approach — a function can simultaneously need full-signature safety
    (real body with a risky type) AND inconsistent-call-site tolerance
    for a DIFFERENT reason, and only a real-body-based check (not a
    declaration-text heuristic) can tell those apart. `random_u32`/
    `random_float` have risky-looking parameter types in their
    DECLARATIONS but no real C body anywhere (pure assembly) — they
    must stay relaxed; a text-only "looks risky" check would incorrectly
    re-break them.

18. **fix_cross_file_arg_counts.py** — MUST run LAST, after #17, since
    it reads `functions.h`'s FINAL strict/relaxed state as ground
    truth. Closes a cross-file gap in the same family as #14b/#14c:
    #17 necessarily leaves a strict (non-relaxed) `functions.h`
    prototype for any function whose real definition uses a
    promotion-risky parameter type directly — but once that prototype
    is strict, EVERY caller anywhere in the tree is checked against its
    real argument count again, and #14b/#14c only patch same-file
    callers. Reads every currently-strict prototype straight out of
    `functions.h`, then scans every `.c` file tree-wide for calls to
    that name and pads (trailing `0`s) or trims (drop excess trailing
    args) to match — identical mechanical philosophy to #14b/#14c, just
    sourced from `functions.h` instead of a local definition and scoped
    to the whole tree instead of one file. Skips a name's own
    definition line so re-running after #14b/#14c is a safe no-op for
    calls they already fixed. First run: 40 call sites across 23 files,
    mostly repeat callers of a handful of common math helpers
    (`func_15048A70`, `func_150484A0`, `func_15048360`, `func_1505A630`,
    `func_1513C5B0`, etc.) called with inconsistent argument counts from
    many different files.

## Manual fixes applied (not scripted — too rare/context-specific)

- **Stray decompiler annotation text**: 9 occurrences tree-wide of the
  literal text `(first 3 bytes) ` sitting where a cast would go (e.g.
  `sp4 = (first 3 bytes) D_80088984;`) — not valid C syntax at all (not
  even a valid cast; "first"/"3"/"bytes" aren't a type). Looks like a
  decompiler annotation that was meant to be a `/* comment */` but
  leaked into the code as bare text. Fixed by deleting the annotation
  text, leaving a plain assignment (`sp4 = D_80088984;`) — drops the
  "first 3 bytes" truncation semantics the annotation was describing,
  but compiles correctly, consistent with this project's goal.
- **`structs.h` field-name mismatches**: many structs (notably
  `struct127`, the ~812-byte `gObjects[25]` game-object struct) have
  had SOME offsets renamed to semantic names (`unk4`→`id`,
  `unk3B`→`unique_id`, `unk318`→`camera`, `unk24`→`gravity`,
  `unkAD`→`in_water`, etc.) while the decompiled `.c` files still
  reference the old `unkXX` name for a variable that's declared with
  the REAL struct type (not caught by scripts #6/#9, which only touch
  UNTYPED variables — a real-struct-typed variable's `->unkXX` is a
  genuine name mismatch, not a missing-cast problem). Fixed by hand in
  `game_100810.c` (3 occurrences: `arg0->unk318`→`camera`,
  `arg0->unk4`→`id`, `arg0->unk3B`→`unique_id`). **If you hit
  `'unkXX' undefined; member of structure or union required` on a
  variable with a real struct type, check `structs.h` for that struct
  — the field may have been renamed** rather than actually missing.
- **Missing local declarations**: `game_100810.c` had `sp70`/`sp74`
  used but never declared (a genuine decompiler gap, not a systemic
  script-fixable bug — added `f32 sp70; f32 sp74;` by hand, matching
  the surrounding `f32 sp6C/sp68/sp64/sp60` pattern and their
  neighboring stack offsets). `game_1048D0.c` had `sp4C` used as
  `sp4C[0].unk0`/`sp4C[0].unk4`/array-indexed-and-dereferenced but never
  declared at all — added `s32 sp4C[2];` (each element holds one of two
  consecutive values copied in from `D_80088900`; the `.unk0`/`.unk4`
  dot-access pattern on a 2-element `s32` array happens to land exactly
  on element 0 and element 1 respectively, since array elements are
  contiguous and `.unk4` = 4 bytes past `.unk0` = exactly one `s32`
  further).
- **Pointer subtraction for array-index computation**:
  `game_100810.c` line ~516 had
  `(s32) (sp7C - &gObjects) / 812` (subtracting two differently-typed
  pointers to compute an index) — fixed to
  `(char *)(sp7C) - (char *)&gObjects` (byte-level subtraction, correct
  since 812 = `sizeof(struct127)` and the division is meant to recover
  an element index from a byte difference).
- **Double-dereference bug**: `game_1028F0.c` line 529 had
  `sp126 = (s16) *(*sp78 + var_s2_2);` where `*sp78` (dereferencing an
  `s32 *`) gives a scalar VALUE, and the outer `*(...)` then tried to
  dereference that value+offset as if it were itself a pointer without
  a cast ("Dereferenced a non-pointer"). Fixed to
  `(s16) (*(s32 *)((char *)(*sp78) + var_s2_2))` — same
  int-to-pointer-reinterpretation pattern used throughout this
  codebase's existing macro style.
- **`&gObjects + N` pointer-to-array arithmetic (known incomplete,
  NOT a build blocker)**: `game_1048D0.c` has several places like
  `(&gObjects + (index * 0x32C))->unkCC` (fixed by script #9 for the
  `->unkXX` part). But `&gObjects` has type `struct127 (*)[25]`
  (pointer-to-array), and adding an integer to it is SYNTACTICALLY
  legal C (any pointer type supports `+`) but semantically wrong-scaled
  — it advances by whole `struct127[25]` blocks (25 × 0x32C bytes), not
  by `index * 0x32C` bytes as clearly intended. This does NOT cause a
  compile error (no diagnostic exists for "correctly-typed pointer
  arithmetic with a semantically-implausible scale"), so it wasn't
  chased further given the project's stated goal (compiles+links;
  runtime bugs are acceptable). If pursuing runtime correctness later,
  the fix is `(char *)&gObjects + N` for byte-level addressing, or
  (cleaner, since `0x32C` = `sizeof(struct127)` exactly) real array
  indexing: `&gObjects[index]`.
- **`structs.h` pad-block field expansion** (`struct104`, `struct102`,
  `struct131`): "member of structure or union required" for
  `D_800B0DF0->unk21`/`unk1C`/`unk2B`/etc. (struct104),
  `D_800D2E4C->unkA` (struct102), and `D_800DBEF4->unk73` (struct131) —
  in every case the needed offset fell INSIDE an existing `u8 padXX[N];`
  block (or, for struct102's `unkA`, inside an oversized `s32 unk8;`
  that should have been two `s16`s) that this codebase's decompiler had
  marked as unused/padding, when in fact other code elsewhere reads a
  specific byte (or two) within that range. Fixed by splitting each pad
  block into the needed named `unkXX` field(s) plus smaller pad
  remainder(s) (or, for struct104's `pad2A[0x1F]`, fully expanding all
  31 bytes into individual fields since FIVE separate needed offsets
  were scattered across it — simpler and safer than multiple
  sub-splits, and matches this codebase's own usual style of listing
  every byte individually). **Always preserve the struct's total size**
  when doing this — verify the byte count of what you remove exactly
  equals the byte count of what you add. Also fixed one genuine stale
  field-name reference while in the area: `gCurrentObject->unk3B`
  (struct127) should have been `gCurrentObject->unique_id`, matching
  the SAME rename already documented for this struct elsewhere in this
  file — a second, independently-discovered instance of the same
  "struct127 has renamed fields the decompiled code hasn't caught up to
  yet" issue, reinforcing that this is worth grepping for broadly
  before assuming a `structs.h` field is genuinely missing.
  **Found but deliberately NOT fixed**: `D_800D3098->unkF88` — offset
  `0xF88` (3976) is far larger than `struct178`'s entire size (`0x34` =
  52 bytes), and `D_800D3098` is itself declared as a 73-element ARRAY
  of that small struct accessed with NO index at all. This is the same
  class of genuinely-ambiguous "wrong global entirely, not just a
  missing field" bug as `gObjects.unkXX` (see "Remaining error
  categories" below) — expanding the struct to accommodate one field
  would be pure guesswork about what the code actually meant, not a
  correctness-preserving fix. Left as a manual investigation item.
- **Same-file call/definition arg-count mismatches**: see scripts #14
  and #14b above — #14b handles the common "call passes fewer args
  than the definition" direction mechanically; the opposite direction
  (call passes MORE than the definition) still needs manual
  case-by-case handling (see "structural pattern" below).
- **"Type void * of this argument is incompatible with type float of
  function prototype description" (12 errors / 9 call sites)**: fixed
  by hand, one call site at a time — find the REAL callee's declared
  signature, compare positionally against the caller's own
  variable/parameter types at each argument slot, and wrap any
  pointer-typed value landing in an `f32` slot with the established
  `(f32)(s32)(EXPR)` convention (numeric conversion, since there's no
  storage to reinterpret through for a pointer rvalue). Deliberately
  NOT scripted (too small a volume — 9 lines — and too context-
  sensitive to safely automate given this session's regression
  history with blind identifier matching). Fixed 6 of 9 call sites:
  - `game_C1D70.c:464` (`func_15095A90` call inside `func_15094F70`):
    caller's own `arg1` (`u32 *`) and `arg3` (`void *`) were passed
    raw into the callee's two `f32` slots — wrapped both in
    `(f32)(s32)(...)`.
  - `game_C1D70.c:495` (`func_15095A90` call inside `func_15095A48`):
    a worse case — 3 DISTINCT errors on one line (void*→float
    argument, an illegal `(f32) arg2` direct pointer-to-float CAST
    ["Cast a pointer into a non-integral type"], and a float literal
    `4096.0f` landing in an `s32 *` slot). Fixed by rewriting the raw
    `arg3`→`(f32)(s32)(arg3)`, dropping the backwards `(f32)` cast on
    `arg2` (it already matched the callee's `void *` slot once the
    cast was removed), converting the OTHER `(f32) arg3` cast to the
    same `(f32)(s32)(arg3)` numeric-conversion form, and reducing the
    stray `4096.0f` to the bare int `4096` for the `s32 *` slot
    (matches this codebase's established bare-int→pointer tolerance,
    see `fix_pointer_cast_constant.py`).
  - `game_14F130.c:111`: the mismatched argument (`var_f0`) was a
    LOCAL VARIABLE mistyped `void *` but only ever assigned raw hex
    float-bit-pattern literals (`0x40800000` etc.) and only ever used
    at this one call site as an `f32` argument — retyped the
    declaration itself to `f32` (matches the `D_8009F8BC` fix below;
    the hex-literal assignments become numeric int→float VALUE
    conversions instead of bit-pattern reinterpretation, which is a
    semantic/runtime-value change but this project explicitly
    prioritizes build success over runtime correctness).
  - `game_18A8F0.c:560` (`func_1515EC78` call): caller's `temp_s0`
    (declared `void *`, holds a dereferenced object pointer) passed
    raw into the callee's `f32 arg0` slot — wrapped in
    `(f32)(s32)(...)`.
  - `game_1EF500.c:258` (`func_151C4B0C` call): positional comparison
    against the callee's full definition (line 1673, 18 params)
    showed the caller's own `arg12` (`f32` per the caller's own
    signature — wait, actually `void *` per caller's signature, see
    `func_151C229C`'s declaration) landing raw in the callee's `f32
    arg12` slot — wrapped in `(f32)(s32)(...)`.
  - `game_DE5A0.c:96` (`func_15058EA4` call): the mismatched argument
    was the FILE-SCOPE GLOBAL `D_8009F8BC`, declared `extern void *`
    but referenced NOWHERE else in the codebase and only ever used at
    this one call site as an `f32` argument — retyped the `extern`
    declaration itself to `f32` (same reasoning as `var_f0` above).
  - **Left unfixed / flagged manual-only, initially** (4 call sites —
    each also carries "The number of arguments doesn't agree with the
    number in the declaration"): `game_14EE80.c:97` (`func_15049688`
    call, 8 args vs. the real 6-param signature) and `game_DE5A0.c:172`
    (`func_15058EA4` call, 8 args vs. the real 7-param signature — this
    one additionally has an illegal `(f32) arg0` direct pointer-to-float
    cast AND two nonsensical `(*(void **)&var_f12)` pointer-reinterpret
    wrappers around what should just be the plain float `var_f12`) are
    genuinely ambiguous — the extra args don't cleanly correspond to
    any single real parameter, so reconstructing the call requires
    guessing. **However `game_1B81D0.c:254` and `game_1D6E80.c:658`
    (the other two originally flagged here) turned out NOT to be
    ambiguous at all** — they were ordinary same-file overcounted calls
    that `trim_overcounted_same_file_calls.py` already knew how to fix
    mechanically, just blocked by a scope gap in that script (see its
    entry above and the "Current status" log) — trimmed automatically
    once the gap was closed. Lesson: before hand-flagging an arg-count
    mismatch as "genuinely ambiguous," check whether it's actually a
    scriptable case the existing pad/trim scripts are simply not
    reaching yet (wrong search start point, wrong file, etc.) before
    concluding the DATA itself is ambiguous.

## Remaining error categories — how to keep finding safe patterns

Every category so far that turned out to have ONE consistent textual
shape got a script; several categories are genuinely too heterogeneous
to safely blanket-fix (mixing "definitely broken, safe to rewrite"
cases with "already valid, don't touch" cases that only differ by
runtime semantics a regex can't see) — for those, per-instance manual
judgment is the only safe option:
- **Pointer subtraction (`Unacceptable operand of '-'`)**: superficially
  resembles the `+` case script #10/#10b handle, but differs in an
  important way — blindly casting one side to `char *` doesn't always
  preserve intended semantics without knowing what's actually being
  subtracted (see the manual fix above for a worked example). Same
  "check what the other operand really is before rewriting" caution as
  the `&GLOBAL` trap above.
- **"Selector requires struct/union pointer" / "Dereferenced a
  non-pointer" residue**: after scripts #6/#7/#9/#10b, what's left is
  the cases where the right-hand operand of an addition is a runtime
  INDEX meant to be ELEMENT-scaled (real struct-pointer arithmetic),
  not byte-scaled — blindly `(char *)`-casting the left operand would
  silently change the scale for any case where it was already a
  validly-typed pointer. **When investigating, always check
  `structs.h` first for a real field name at that offset before
  assuming a byte-offset macro is the right fix** (see the manual-fixes
  section above).
- **`gObjects.unkXX` (bare, no array index)**: by far the largest
  remaining chunk of "Selector requires struct/union as left hand
  side" (~60 of 90 in the last measured build). `gObjects` is declared
  `extern struct127 gObjects[25];` (an ARRAY) — `gObjects.unk14` etc.
  use it with NO index at all, which is invalid regardless of what
  `unk14` means (arrays don't have `.` members). This is NOT the same
  bug as the dot/arrow-typo or scalar-array patterns #7/#7b fix — a
  real byte-offset macro through `&gObjects` would silently read from
  `gObjects[0]`'s memory, which may or may not be semantically what
  the decompiled code actually meant (`gGameState`-style singleton
  fields living at a similar address, an intended-but-lost index
  variable, etc.) — guessing wrong here produces WRONG runtime
  behavior with no compile error to catch it, unlike every mechanical
  fix so far in this file. Investigate each occurrence's surrounding
  context by hand (what index would make sense here? is there a
  singleton global this should have referenced instead of `gObjects`?)
  before touching any of these — do not write a blanket script for
  this one.
- **"Syntax Error"**: mostly the residue of files that also have other
  errors above their 30-error-per-file cutoff (IDO cc gives up with
  "Fatal: Too many errors... goodbye" after 30 errors in one file) —
  fixing the earlier errors in a file will likely reveal (and sometimes
  auto-resolve, if caused by cascading corruption from an earlier bad
  declaration) many of these. Check the actual count of files still
  hitting exactly 30 errors
  (``grep 'cfe: Error' build_log.txt | sed -E 's/^(cfe: Error: [^,]+),.*/\1/' | sort | uniq -c | awk '$1==30'``)
  to see how much of this category is really "hidden" vs. genuine.

## Recommended approach for continuing
This is the actual working method that got the error count down by
>60% so far — keep repeating it:
1. `rm -rf build && make -j$(nproc) -k > build_log.txt 2>&1` (always
   `-k`, always to a file outside WSL's `/tmp`).
2. `grep 'cfe: Error' build_log.txt | sed -E 's/^cfe: Error: [^,]+, line [0-9]+: //' | sort | uniq -c | sort -rn | head -25`
   to see current error categories by volume.
3. For the largest category, `grep -A1 'cfe: Error.*<category text>' build_log.txt | grep -v '^--$' | grep -v 'cfe: Error' | sed 's/^ *//' | sort -u | head -30`
   to see actual OFFENDING SOURCE LINES (not just the error message).
4. Look for ONE consistent textual shape across many of those lines
   (this is what worked every time — the `?32`/`void *32` placeholders,
   the `)->unkXX` compound pattern, the `*(&GLOBAL + N)(args)` jump-table
   pattern, the same-file-call-after-definition pattern, etc. were all
   found this way). If you find one, before writing a script: read a
   few real examples with `Read`/`Grep` in context, work out WHY each
   rewrite is safe (ideally provably, not just "seems fine" — watch
   especially for the two traps documented above), write a small Python
   script (dry-run by default, `--apply` to write, follow the style of
   the existing scripts), dry-run it, **spot-check at least one real
   diff by hand** (not just the fix count), apply, confirm idempotent
   (rerun, expect 0 changes), rebuild, compare error count. If the
   count barely moves despite a plausible-sounding fix, diff the actual
   files it touched before assuming it's fine — see the two caught bugs
   documented in the traps section, both found only by manual diff
   review, not by the build succeeding or failing.
5. If the errors in the largest category are too heterogeneous (no
   single consistent shape covers a meaningful fraction of them),
   accept that and move to the next-largest category, or switch to
   fixing individual files by hand — don't force a script onto a
   pattern that isn't actually consistent, as that risks silent
   correctness regressions that won't show up as new compile errors.

## A structural pattern worth knowing about
Several functions across the codebase have a real definition whose
argument count doesn't match its own call sites, because `mips_to_c`
can't always determine the full argument list. Two sub-cases, now
handled asymmetrically:
- **Call sites pass FEWER args than the real definition** (the
  definition has a genuinely-unused trailing parameter the decompiler
  couldn't infer from a body that never references it, but callers
  still populate the register by calling convention): mechanically
  handled now — #14 for calls before the definition, #14b for calls
  after it (same file), and #15/#17/#13 together for cross-file calls
  with no promotion-risky parameters.
- **Call sites pass MORE args than the real definition**: for the
  same-file, call-after-definition case, now mechanically handled by
  #14c (`trim_overcounted_same_file_calls.py`) — trims the call's
  excess trailing arguments rather than extending the definition
  (simpler, and just as arbitrary/acceptable as any other resolution
  given the project only needs to compile, not behave correctly). A
  cross-file version of this problem (a promotion-risky function whose
  functions.h-restored exact signature, via #17, now disagrees with
  SOME callers' argument counts) is NOT yet mechanically handled — that
  would need the same trim-to-fit treatment applied to calls across
  file boundaries against the function's real definition, which is
  riskier (requires resolving the real definition across files, not
  just the same file) and hasn't been attempted yet.

## MILESTONE — first fully successful build (2026-09-07)
`make -j$(nproc) -k` reached **0 `cfe: Error` lines** across the entire
project for the first time this session, and the build proceeded all
the way through link and binary extraction:
- `build/conker.us.elf` produced (3,256,144 bytes)
- `build/conker.us.bin` produced (2,467,448 bytes)
- The only remaining failure is `%.ok: %.bin`'s `sha1sum --check`
  against the original ROM — a byte-perfect-match verification step
  that was explicitly OUT OF SCOPE from the very first line of this
  project's goal (see "IMPORTANT: an earlier version of this file was
  wrong about scope" near the top of this file). A checksum mismatch
  here is expected and does not indicate a build failure — compile and
  link both succeeded, which was the actual goal.

The final blockers on the way to this point, after the last batch of
per-file compile-error fixes (game_20AE20.c, game_71820.c,
game_1C2C60.c, game_B3020.c, game_225D20.c, game_215960.c,
game_49D30.c, game_19A8B0.c, init_1CBF0.c — see the session log
sections above for the full fix history of each) were **link-time**,
not compile-time, and are worth documenting since nothing earlier in
this file covers them:

1. **5 undefined symbols with no C definition anywhere in the tree**:
   `random_u32`, `random_float` (functions, called from hundreds of
   sites across dozens of files), `gObjects`, `gCurrentObject`,
   `gCurrentObjectIndex` (the core per-object-array globals, declared
   `extern` in `variables.h` and used everywhere all session, but never
   given a real, non-`extern` defining declaration in any `.c` file).
   Fixed using this project's OWN existing mechanism for exactly this
   situation — `undefined_syms.us.txt`, a linker-script-syntax file
   (`NAME = 0xADDRESS;` per line) already used for ~8000 other symbols
   this project doesn't have real definitions for yet (see
   `undefined_syms_auto.txt`, generated separately, likely from an
   earlier decomp-matching stage). Added 5 new entries there with
   placeholder addresses — since byte-perfect matching isn't the goal,
   any valid address works, but **the region matters**: a `J`/`JAL`
   MIPS instruction (relocation type `R_MIPS_26`) can only target an
   address sharing the SAME upper 4 bits as the calling instruction's
   own address, not just "anywhere in a 256MB window from an arbitrary
   base" — the first attempt (`0x80200000`, matching the `0x800XXXXX`
   range most DATA globals live in) caused "relocation truncated to
   fit" errors for the two *function* symbols, because this project's
   actual CODE segments live at `0x10000000`/`0x15000000`/`0x16000000`
   (see `.init_VRAM`/`.game_VRAM`/`.debugger_VRAM` in the generated
   `build/conker.us.map`) — a completely different 256MB region (upper
   nibble `1`, not `8`) from where DATA lives. Fix: moved the two
   function placeholders to `0x1FFF0000`/`0x1FFF0010` (same region as
   all the real code, comfortably past the end of the largest code
   segment `.game` at `0x151fa340`, so no collision risk), left the
   three data placeholders at `0x802000xx` (data relocations are
   `%hi`/`%lo`-based, not `J`-type, so they support the full 32-bit
   address range with no region restriction — these were never the
   ones erroring). **Lesson for next time**: for a placeholder CODE
   symbol (anything actually called, not just data read/written), match
   the upper-4-bits region of real code in this project, not the
   `0x800XXXXX` region most named globals happen to live in.
2. **4 files' `.rodata` sections silently discarded at link time**
   (`game_36680.c.o`, `game_77AD0.c.o`, `game_981E0.c.o`,
   `game_2062D0.c.o` — the ld warning was literally
   ``.rodata' referenced in section `.text' ...: defined in discarded
   section `.rodata'``). Root cause: `conker.ld` (checked into the
   repo, NOT auto-generated — `build/conker.ld` is just its
   `cpp -P`-preprocessed form) explicitly lists every object file's
   `.text` AND `.rodata` placement individually, matching this
   project's convention of mirroring the original ROM's exact section
   layout — but these 4 files' `.rodata` entries were simply never
   added (likely because they were still pure `GLOBAL_ASM` stubs with
   no compiled `.rodata` output when this linker script was originally
   authored, and nobody updated it once they got decompiled to real
   C). Any input section not explicitly placed in an `ld` `SECTIONS`
   block with no wildcard catch-all is silently dropped — hence
   "discarded section". Fixed by adding
   `build/src/<name>.c.o(.rodata);` for all 4 inside the `.game_data`
   output section's existing `.rodata` list (verified via
   `mips-linux-gnu-objdump -h` that none of the 4 have a `.data`
   section needing the same treatment). Ordering within the list
   doesn't matter for compile/link success — only that each file's
   `.rodata` appears somewhere inside an output section that actually
   keeps `.rodata` content, which `.game_data` does (this project pairs
   each `.text`-only output section like `.game` with a following
   `.data`+`.rodata` output section like `.game_data`).

**Confirmed reproducible**: a full `rm -rf build && make -j$(nproc) -k` from
completely clean re-ran everything from scratch and reproduced the exact
same result — 0 `cfe: Error` lines, `build/conker.us.elf` (3,256,144
bytes) and `build/conker.us.bin` (2,467,448 bytes) both produced again
with identical sizes. Not a stale-build-cache fluke.

**All four VERSION targets now build successfully** (`make VERSION=us`
default, `VERSION=eu`, `VERSION=ects`, `VERSION=debug`) — same source
tree, same 0 compile errors, same link result once each version's own
`undefined_syms.<version>.txt` got the same 6-symbol fix applied
(`undefined_syms.eu.txt` and `undefined_syms.ects.txt` and
`undefined_syms.debug.txt` were all completely empty before this; `us`
needed 5 of the 6, already having `D_8002BA44` from an earlier session).
`conker.ld` is shared across all versions (not version-specific), so
the `.rodata` placement fix for the 4 files also covers eu/ects/debug
automatically — confirmed 0 "discarded section" messages for all three.
Every version produces a valid `.elf`/`.bin` and fails ONLY the
`sha1sum` byte-match check, same as `us`.

## Also worth knowing
The same function name can have multiple, independent local `extern`
declarations across different files — this codebase's convention is
for every file that calls a function to carry its own local
forward-declaration copy (not just include a shared header
declaration). When manually fixing a function's signature, **grep
across the whole tree for every local copy of that declaration**, not
just the file with the real definition — fixing only one copy leaves
every other file's copy stale, and it'll resurface as the exact same
error in a different file on the next build.

## Session log — batch-of-small-files round (2026-09-07)
Two large files (`game_49D30.c`, `game_1C2C60.c`) each triggered long
cascading-exposure sagas (~11 and ~7-8 rounds respectively) where
fixing one visible error let the compiler parse deeper into the file,
revealing more pre-existing bugs each time. Both were deliberately
paused via explicit cutoff judgment calls (left at 5 and 10 remaining
errors respectively, NOT abandoned — just deferred) once the pace of
returns diminished, redirecting effort toward a **batch-of-small-files
strategy**: pick 8-18 files that each have exactly 1 (or very few)
remaining errors, fix them all in one round using the established
technique library below, then do a single combined pipeline+rebuild
verification. This proved dramatically more efficient than continuing
to dig into one large file.

### IMPORTANT: the missing-per-file-#include-check trap (remove_redundant_externs.py)
Found and fixed this session. `remove_redundant_externs.py` strips a
local top-of-file `extern` declaration whenever its name already
exists in `functions.h`/`variables.h` — but the original version did
this for ANY `.c` file, without checking whether that specific file
actually `#include`s those headers. Not every file does: the
libultra/SDK-side files in particular never include the game's
`variables.h`. This silently reverted two hand-added externs
(`src/libultra/audio/n_synthesizer.c`'s `extern f32 D_8002C750;`,
`src/libultra/os/getthreadpri.c`'s `extern OSThread *__osRunningThread;`)
on every pipeline rerun, reintroducing an "undefined" error each time
until the root cause was found. Fixed by splitting the old single
`extract_real_names()` (one combined name set from both headers) into
`extract_names_from_header()` (called once per header, returning two
distinct sets) and having `process_file()` build a **per-file**
`real_names` set that only includes `functions_names` when the file's
text matches `#include\s*"functions\.h"`, and only includes
`variables_names` when it matches `#include\s*"variables\.h"`.
Verified via rerun: both files' "removing 1 redundant declaration(s)"
output disappeared, replaced by "Removed 0 declaration(s) across 0
file(s)".

### The 18-file batch (technique summary)
Files fixed in this round, each with a 1-2 line change:
`game_215960.c`, `game_21C540.c`, `game_2270A0.c`, `game_6A3D0.c`,
`game_770F0.c`, `game_90840.c`, `game_AD6B0.c`, `game_C1D70.c`,
`game_D52A0.c`, `game_DC6B0.c`, `game_DF930.c`, `game_E8C10.c`,
`game_F15D0.c`, `game_F5800.c`, `game_FA360.c`, `game_FDD70.c`, plus
`n_synthesizer.c`/`getthreadpri.c` above. Techniques used (all already
documented above, just applied repeatedly): phantom `unkspXX`/bare
`sp`/`argN` identifiers declared as plain `s32`/`void *` in the
enclosing function; the "array elements mis-rendered as struct fields"
pattern (`spXX.unk0`/`.unk4`/... at 4-byte-aligned offsets → flat
`s32 arr[64]` with `.unkN` writes converted to `[N/4]` indices) applied
to `sp40`, `sp4C` (×2 different files), `sp8C`; `gObjects` (a real
`struct127[25]` array, not a scalar) needing `&gObjects != 0` instead
of a bare truthiness check, and `gObjects[0].field` instead of bare
dot-access, in two separate files this round.

This round's rebuild dropped the error count from the prior confirmed
baseline of 153/51 to **141/37 (down 12 errors, 14 files)** — the best
single-round batch-of-small-files result of the session so far.

### Cleanup pass: 4 residual errors exposed by the rebuild
Verifying each of the 18 batch files individually against the 141/37
build_log.txt found 4 files still carrying exactly 1 error each —
ordinary cascading exposure (the batch fix let the compiler parse
further into these files), not regressions from the batch fix itself:
- **`game_90840.c` line 235** — `arg1 == D_800CC2D4` compared an `s32`
  to a real `u8[]` array (decays to pointer): "Unacceptable operand of
  == or !=". Fixed with the scalar-holds-address cast convention:
  `arg1 == (s32)(D_800CC2D4)`.
- **`game_C1D70.c` line 939** — `func_15094F70` was declared/defined
  `void` but its result was assigned to `temp_v0_3` (`void *`) and used
  as a pointer for several writes afterward; its own last statement
  calls `func_150950D4` (which genuinely returns `s32 *`) and discards
  the result. Fixed by changing `func_15094F70`'s return type to
  `void *` and adding `return` before the tail call — consistent with
  every OTHER file's local declaration of this function, which already
  declared it `void *`/`s32` (relaxed), not `void`.
- **`game_F5800.c` line 219** — after the earlier batch round flattened
  `sp4C` to `s32 sp4C[64]`, one usage (`*((&sp4C[0])[var_v1] + (var_v0 *
  4))`) broke: `(&sp4C[0])[var_v1]` is now a plain `s32` (holding an
  address value from `D_80088810`), so adding an offset and
  dereferencing it directly is "Dereferenced a non-pointer". Fixed with
  the byte-offset-macro convention applied to the scalar-held address:
  `(*(s32 *)((char *)(sp4C[var_v1]) + (var_v0 * 4)))`.
- **`game_215960.c`** — 3 separate errors in one file:
  - line 1639: `var_a0 != (&D_1648 + 1)` compared a bare `s32` against
    an uncast `s32 *` — "Unacceptable operand of == or !=", even though
    two sibling comparisons on the SAME line already had the correct
    `(char *)(...) != (char *)(...)` cast pattern applied. Fixed by
    applying the same cast to both remaining uncast comparisons
    (`&D_1648 + 1` and `&D_1654 + 1`).
  - line 1737: `func_151EF954(...)`'s strict `functions.h` prototype
    expects `f32` for its 3rd parameter, but the call passed `&D_800E0C38`
    (an `s32 *`) directly — "Type s32 * ... is incompatible with type
    float". Fixed with the scalar-holds-address-to-float cast
    convention: `(f32)(s32)(&D_800E0C38)`.
  - line 2362: bare `sp8C` used with array syntax (`&sp8C[0]`,
    `(&sp8C[0])[sp98]`) but never declared in this function — "'sp8C'
    undefined". `fix_missing_sp_declarations.py` didn't catch it because
    its usage shape (already array-indexed by the decompiler, not a
    plain scalar reference) doesn't match that script's pattern. Fixed
    by manually declaring `s32 sp8C[64];` in the function's declaration
    block, consistent with the flat-array convention used elsewhere.

After this cleanup pass, re-ran the full 34-script pipeline (only the
expected benign relax/restore 132-cycle fired, confirmed via output
diff against the prior round — no unexpected script activity), CRLF
swept clean, and rebuilt. Confirmed at 139/35, then a further cleanup
pass (below) brought it to 141/34 — a slight increase in error count
but a decrease in file count, from cascading exposure balanced by two
more files clearing.

## Session log — the "renamed struct127 fields" bug (2026-09-07, same session)
The rebuild after the 18-file batch above showed "Selector requires
struct/union as left hand side" spike to 61 errors — by far the
largest category, concentrated in 11 files that ONLY had this error
(meaning fixing it would fully clear them). All 61 were confirmed to
be the exact same `gObjects.unkXX` bare-dot-access-on-array bug
documented earlier in this file as "flagged manual-only" — `gObjects`
is `extern struct127 gObjects[25];`, an array, and every prior fix
this session used `gObjects[0].field`. Since it was now clearly the
single dominant, completely unambiguous pattern (44 occurrences across
11 files, no naming collisions), it no longer made sense to leave it
manual-only — wrote `fix_gobjects_renamed_fields.py`'s sibling
`fix_gobjects_dot_access.py` (`gObjects.` → `gObjects[0].`, dry-run
verified, diff spot-checked, idempotent) and applied it.

The rebuild after THAT fix, surprisingly, showed the error count go
UP (141→157) despite the file count staying flat, with two new large
categories: "member of structure or union required" (34) and various
"'unkXX' undefined" errors (34 combined). Direct single-file
compilation (`ido5.3_recomp/cc` on just `game_71820.c`) revealed the
real shape: `'unk14' undefined` PAIRED with `member of structure or
union required` on the same line — IDO's way of saying `unk14` isn't
a member of struct127 at all, then falls back to treating it as a
bare (also undefined) identifier. Checked `structs.h`: struct127 had
~22 fields **renamed** from generic `unkXX` names to semantic ones
(`x_position` at 0x14, `y_position` at 0x18, `stunned` at 0x104,
`camera` at 0x318, etc), each still carrying its original offset as an
explicit `/* 0xNN */` comment — but old/decompiled call sites across
the same 11 gObjects-touching files still referenced the pre-rename
generic names, which the array-vs-scalar fix alone couldn't paper over
once it let the compiler parse deeper into those files.

Wrote `fix_gobjects_renamed_fields.py`: parses `structs.h`'s
struct127 body, extracts the offset→real-name map directly from the
explicit `/* 0xNN */` comments (23 renamed fields found), then rewrites
`gObjects[<any index>].unkXX` to the real field name wherever XX
matches one of those offsets — fields never renamed (still literally
`unkXX` in structs.h) are left untouched. Dry-run showed 40 occurrences
across 11 files (matching expectation), diff spot-checked, idempotent
after apply. This is the same "fields renamed but old callers not
updated" root cause as the very first "member of structure or union
required" investigation — worth remembering for ANY other struct that
gets a similar semantic-renaming pass in the future: renaming a field
in `structs.h` does not, by itself, break every stale caller loudly —
it can hide behind an EARLIER unrelated error in the same statement
and only surface once that earlier error is fixed.

### Cleanup pass after the renamed-fields fix
Test-compiling each of the 11 touched files directly (not waiting for
a full rebuild — much faster iteration for one file at a time) showed
most now fully clean, but a few had cascaded further:
- `game_90840.c` clean, `game_C1D70.c` had one further error: a
  function (`func_15094F70`) declared `void` whose tail call to
  `func_150950D4` (genuinely `s32 *`-returning) was being discarded,
  even though every OTHER local declaration of `func_15094F70` in the
  tree already declared it `void *`/`s32`. Fixed by changing the real
  definition's return type to `void *` and adding `return`.
- `game_F5800.c` had 3 more errors from an earlier-session flat-array
  fix (`sp4C`) interacting badly with one usage
  (`*((&sp4C[0])[var_v1] + (var_v0*4))` — a scalar-holds-address
  pattern layered on TOP of the flat-array pattern); fixed with the
  byte-offset-macro convention applied to the scalar: `(*(s32 *)((char
  *)(sp4C[var_v1]) + (var_v0 * 4)))`.
- `game_215960.c` had 3 more errors needing the usual scalar-holds-
  address cast conventions (`(char *)(...) != (char *)(...)` for a
  pointer comparison missing its cast; `(f32)(s32)(&VAR)` for a
  pointer passed into a strict `f32` prototype slot; a bare `sp8C`
  used with array syntax but never declared, needing `s32 sp8C[64];`).
- `game_71820.c` cascaded significantly (14→9→13→9 errors across
  several rounds) revealing a cluster of "argument list scrambled by
  the decompiler" bugs: several calls to functions like `func_15045F8C`/
  `func_15044ED0`/`func_150450CC` had every argument wrapped in a
  WRONG, spurious cast (`(f32) arg0` where arg0 was already the
  expected type, `(void *) arg2` where arg2 was already f32, etc) —
  fixed by comparing against a nearby ALREADY-WORKING call to the same
  function in the same file and stripping the casts down to match
  (`func_15044ED0(arg0, arg2, arg3);` with no casts at all, once the
  natural parameter types already matched). A few genuine
  float-value-cast-trap instances (`(void *) arg2` on an actual f32
  parameter) were fixed with the bit-reinterpret idiom
  `(*(void **)&(arg2))` instead. **Deliberately paused at 9 remaining
  errors** after several rounds of diminishing/still-cascading returns
  — same judgment call as `game_49D30.c`/`game_1C2C60.c` earlier.
- `game_DE5A0.c` cascaded to 1 more error (`D_800CC2E8[0] = ...` — a
  real `f32[]` global being assigned to directly instead of through
  `[0]`, "This expression is not an lvalue" since arrays aren't
  assignable) — fixed, file now clean.

Confirmed via rebuild: 141/34, all touched files verified individually
clean except the two deliberately-paused ones.

## Session log — batch round 2 + gObjects[0] fix's own cascade (2026-09-07)
Same rebuild also exposed `game_20AE20.c` cascading during a similar
`gObjects[0]`-adjacent investigation (a scalar global `D_8008FE84`/
`D_8008FE54`, each declared plain `s8`, being treated via
`(&D_8008FE84)[idx].unk0/.unk1/.unk2` — NOT a struct at all: confirmed
by checking a `+0x3` byte-offset access on the same base pointer a few
lines later, proving this is a flat BYTE array being walked one byte
at a time, with the mips_to_c `.unk0/.unk1/.unk2` suffixes just being
spurious struct-field sugar over what is really `[idx+0]`/`[idx+1]`/
`[idx+2]` indexing). Fixed by stripping the `.unkN` suffixes and
folding the offset into the array index directly — this is a new
manual pattern worth naming: **"scalar global walked as adjacent
single-byte array, mis-rendered with struct-field syntax"** — a
sibling of the flat-array-mis-rendered-as-struct-fields pattern, but
byte-granularity instead of 4-byte-granularity, and confirmed (not
just guessed) by finding an unambiguous raw byte-offset access on the
same base pointer elsewhere in the same function. `game_20AE20.c` also
cascaded further afterward (paused at 9 errors, same judgment as
`game_71820.c`).

A batch of ~12 low-error-count files (2-3 errors each) was then swept
in one round using the existing technique library almost entirely
mechanically: bare `sp`/phantom `unkspXX` declarations, flat-array
`spXX[N]` conversions, the `sp + expr` inside `(char *)(...)` cast
needing the cast moved onto `sp` itself before the addition (a new,
very common shape this round — `(char *)((sp + N))` must become
`(char *)((char *)(sp) + N)`, since `sp`'s own type is `void *` and
`void * + int` is illegal even though `(void *)(EXPR) `-style casts of
the SUM tolerate it), the void-returning-function-whose-result-is-used
pattern (`func_150ED234`, thin wrapper missing `return`), and one novel
one-off: `(&spBC)[idx].unk-2` — the established `fix_negative_offsets.py`
script only matches `IDENT->unk-N` (simple identifier + arrow), not a
dot-access on an array-index expression, so this shape slipped through
uncaught; fixed by hand with the usual negative-byte-offset macro
convention. Result: 11 of these ~12 files fully cleared in one round
(`game_111670.c`, `game_113D60.c`, `game_11A680.c`, `game_11C2B0.c`,
`game_133190.c`, `game_157840.c`, `game_1B1600.c`, `game_1E73B0.c`,
`game_1EF500.c`, `game_61D10.c`, `game_21FC90.c`); `game_B3020.c`
cascaded to 9 errors and was deliberately paused, same judgment call
as the others.

Rebuild pending at the time of this writing — see the top of this
file / a fresh `build_log.txt` for the latest confirmed numbers.
Deliberately-paused files as of this round: `game_49D30.c` (5),
`game_1C2C60.c` (10), `game_71820.c` (9), `game_20AE20.c` (9),
`game_B3020.c` (9) — all left mid-cascade by explicit judgment calls,
not forgotten; revisit once the batch-of-small-files well runs dry.

## Session log — byte-perfect-match investigation (2026-09-07, after the build-success milestone)
Once the build was fully successful (see MILESTONE section above), the
next ask was to check for and fix any byte-matching regressions
introduced while chasing compile success. Set up `tools/asm-differ`
(needed `pip3 install --user --break-system-packages colorama watchdog
levenshtein cxxfilt` in WSL — externally-managed-environment blocks
plain `pip install --user`) and confirmed the invocation:
`python3 tools/asm-differ/diff.py --format plain --no-pager <func_name>`
(no `-o` needed — without it, diff.py disassembles straight from
`conker.us.bin` (target) vs `build/conker.us.bin` (current) using
`build/conker.us.map` for symbol lookup, per `diff_settings.py` — much
simpler than setting up an `expected/` object-file tree). `--format
json` exposes `current_score`/`max_score` (lower current_score = closer
match; found no function reaches 0/perfect among anything touched this
session).

**Important finding about this project's structure**: the `src/game/
done/` folder does NOT mean "byte-matches the ROM" — tested directly on
`func_150DE310` in `game_10B7C0.c` (a file with zero diff, never
touched this session), whose C body is a completely empty stub
(`void func_150DE310(s32 arg0) { }`) while the target disassembly shows
a real, non-trivial function saving multiple registers. "done" appears
to just mean "extracted out of `GLOBAL_ASM` into its own .c file",
independent of match quality. This matters a lot: it means "was this
file previously matching, and did I break it" is often not even a
well-posed question for this codebase in its current state — most
touched functions were never close to matching in the first place, so
there is very little existing match state to have regressed *from*.

**Genuine regression found and fixed**: earlier the same session,
`undefined_syms.us.txt` was given placeholder addresses (own invention,
not looked up) for 5 symbols with no C definition anywhere in the tree:
`random_u32`, `random_float`, `gObjects`, `gCurrentObject`,
`gCurrentObjectIndex`. It turns out `symbol_addrs.us.txt` (used by
`n64splat`'s extraction step, referenced from `conker.us.yaml`'s
`symbol_addrs_path`, NOT read directly by the linker) already had the
REAL ROM addresses for all 5:
```
gObjects            = 0x800CC2D0;
gCurrentObject      = 0x800D154C;
gCurrentObjectIndex = 0x800C3E78;
random_u32          = 0x150ADA20;
random_float        = 0x150ADA68;
```
Every one of my placeholder addresses was wrong, which meant every
`jal`/address-load instruction referencing these 5 symbols anywhere in
the codebase was encoding the WRONG target — a real, clean,
unambiguous, and broadly-scoped regression (these symbols are called
from dozens of files, confirmed by the earlier link-time "undefined
reference" error list touching `game_18D770.c`, `game_2062D0.c`, etc).
Fixed by replacing the 5 placeholder lines in `undefined_syms.us.txt`
with the real addresses (the `eu`/`ects`/`debug` versions' own
`symbol_addrs.*.txt` files have NO entries for these 5 names at all —
no known-real address to use there, so their placeholder-address fix
from earlier stands as the best available option for those versions;
this "genuine regression" framing applies specifically to `us`, which
had ground truth to get wrong).

**Trap**: `undefined_syms.us.txt` is NOT a tracked Makefile prerequisite
of `$(TARGET).elf` (only referenced via `-T` inside `LDFLAGS`) — editing
it and re-running `make` does NOT trigger a relink; `make` sees all
real prerequisites unchanged and silently no-ops. Confirmed via `.elf`/
`.bin`/`.map` timestamps staying frozen across a "successful" (exit 0)
rebuild. Must `rm -f build/conker.<version>.elf build/conker.<version>.bin
build/conker.<version>.map build/conker.<version>.ok` (or `rm -rf
build`) before re-running `make` any time only an `undefined_syms.*.txt`
/ `undefined_funcs.*.txt` file changed. Verified the fix took effect by
direct disassembly: `func_1516127C`'s call to `random_float` changed
from `jal fff0010` (wrong, my old placeholder) to `jal 50ada68` (target
address, exact match) after the forced rebuild. Re-ran all 4 version
targets (`us`/`eu`/`ects`/`debug`) afterward to confirm the address fix
didn't break compile/link anywhere — all 4 still succeed, same
sha1sum-only failure as before.

**What's NOT a simple regression, and was deliberately left alone**:
tracing `func_1516127C` further (still the second-closest-to-matching
function in the whole touched set even after the address fix, score
6968/102400) found the REMAINING divergence — extra stack-frame setup,
different register allocation, an extra float conversion — traces back
to `widen_integer_promotion_params.py` changing this function's real
`u8 arg1` parameter to `s32 arg1` earlier this session. That widening
was NECESSARY (not a mistake) to resolve a K&R/strict-prototype
conflict blocking compilation — this exact tradeoff (widen the
definition vs. restore the forward declaration, see
`restore_promotion_safe_signatures.py`'s docstring for the sibling
approach) was applied broadly across many functions all session
wherever it was the compile-safe option. Reverting it to chase a
match would mean re-fighting the same class of compile error for
however many functions received this treatment — a large, separate,
much riskier re-engineering effort in the opposite direction from
tonight's compile-success work, not a bounded regression fix. Left
alone deliberately, not overlooked.

## Session log — drift-hunting and type-widening reconsideration (2026-09-07, same investigation)

**Drift-hunting — checked, ruled out as "tonight's regression"**: wrote
`drift_scan.py` (deleted after use, technique documented here to redo
if needed) to compute, for every `func_XXXXXXXX`-named symbol in
`build/conker.us.map`'s `.game` section, `drift = actual_VRAM_address -
address_encoded_in_the_function's_own_name` — this project's naming
convention makes that trivial (no `asm-differ` needed at all for this
part). Walking the ~5270 `.game`-section functions in address order
and printing every point where `drift` changes pinpoints exactly which
function each size change originates at. Result: drift starts
accumulating almost immediately (`game_2DF70.c`, `game_305D0.c` — files
never touched this session) in small increments (4-48 bytes) across
dozens of files throughout the entire `.game` section, long before any
file this session touched. This is a pervasive, pre-existing property
of the project's current extraction/decomp state — NOT a bounded
regression introraceable to tonight's work. Whole-ROM size is only 160
bytes off from the original (`conker.us.bin` 2,467,288 vs
`build/conker.us.bin` 2,467,448), meaning the scattered small drifts
mostly cancel out in aggregate; they just don't cancel out for any
INDIVIDUAL function downstream of one, which is why so many
"almost-matching" functions show extra/misaligned instructions at their
boundaries. Conclusion: not a productive place to keep digging for a
clean fix — the technique (this script) is worth keeping for future
sessions that want to find a SPECIFIC file's local drift origin, but
sweeping the whole project this way has no single fixable root cause.

**Type-widening reconsideration — tested empirically, reverted the
whole experiment**: extracted every parameter `widen_integer_promotion_
params.py` widened (narrow type -> `s32`) in a real function DEFINITION
across every file this session modified, by diffing the current working
tree against the last git commit (`git diff -U0 -- conker/src`, matched
`-TYPE argN` / `+s32 argN` pairs on lines ending in `{`) — found 108
distinct widened definition lines (199 individual parameters) across 34
files. Built a test harness (`revert_widenings.py`+`bisect_widenings.py`,
both deleted after use): for each file, replace the widened line(s) back
to the git-recorded original narrow-typed line(s), compile JUST that
file with the real `ido5.3_recomp/cc` invocation, keep the revert only
if it still compiles clean (no `cfe: Error`), else discard (file-level
first; for files where the whole-file revert broke compilation, bisected
down to testing each individual parameter revert alone against that
file's otherwise-unchanged baseline).

Result: 13 files (21 params) reverted cleanly as a whole file; of the
87 params in files that broke as a whole, only 4 individual params
(across 3 files) were independently safe — confirming
`widen_integer_promotion_params.py`'s own documented rationale was
correct: the overwhelming majority (183 of 199) of these widenings were
genuinely load-bearing for compilation, not overcautious.

**But then disaster, caught and fully undone**: rebuilt with the 25
kept-safe reverts applied (build still succeeded, 0 `cfe: Error`), then
re-ran the batch `asm-differ` scorer (`score_funcs.py` /
`func_scores.csv`) to check whether matching actually improved. It got
DRAMATICALLY worse — the whole-touched-set score total jumped from
6,189,883 to 6,618,546 (worse by ~429k), and the entire "closest to
matching" leaderboard changed to a completely different set of
functions, none of which had anything to do with the 25 reverted ones.
Root cause: narrowing even ONE parameter's type back can change that
function's own COMPILED SIZE (different register allocation, possibly
extra truncation instructions IDO inserts for narrow-typed parameter
reads) — and because MIPS `j`/`jal` encode absolute addresses, ANY
function that changes size shifts the address of every function AFTER
it in the whole link order, cascading the SAME "drift" problem
documented above onto a much larger set of previously-fine functions.
**"Compiles cleanly" is necessary but nowhere near sufficient for a
safe revert in this codebase — every candidate change needs its
aggregate match-score impact checked before being kept, not just
compile-safety.** Immediately wrote `undo_reverts.py` (deleted after
use) to replace all 25 reverts back to their widened (`s32`) form using
the exact same recorded (original, widened) line pairs in reverse;
verified via `find_widenings2.py` re-run showing all 108 widened lines
present again (full restoration), a clean rebuild (0 errors), and a
final `score_funcs.py` re-run landing EXACTLY back at 6,189,883 with
the identical closest-functions leaderboard as before the experiment —
confirmed byte-for-byte-equivalent to the pre-experiment state, not
just "close enough."

**Lesson for any future matching work in this codebase**: never judge
a candidate fix (even one that's semantically obviously "more correct")
by compile-success alone. Always do a full-batch `score_funcs.py`
before/after comparison (or at minimum re-check the SPECIFIC functions
whose addresses could plausibly shift — everything later in the same
file, and transitively everything in every file linked afterward) before
concluding a change is actually an improvement. The two changes that
DID hold up under this stricter test — the `undefined_syms.us.txt`
address fix and the `func_15126138` spurious-call removal — both
happened to not change any function's SIZE (a wrong-but-same-width
address encoding, and a call removal that only affected `func_15126138`
itself, whose own downstream siblings in that file were re-verified
individually). Net state at the end of this whole investigation: the
two genuine fixes are IN, the type-widening experiment is fully OUT
(reverted), build confirmed green throughout.

**Batch triage infrastructure** (left in the repo for next time):
`touched_funcs.txt` (576 function names, extracted from `git diff
--unified=0` hunk-context lines across every tracked file modified this
session — i.e. every function whose signature or body changed, or that
happened to be the nearest preceding function to a changed line) and
`score_funcs.py` (drives `diff.py --format json` across the whole list,
~0.44s/function, writes `func_scores.csv`). Re-run after any future
rebuild via `wsl python3 score_funcs.py`, then `awk -F',' 'NR>1{print
$2","$1}' func_scores.csv | sort -t',' -k1 -n | head -N` for the N
closest-to-matching functions — the productive place to keep looking
for further clean, targeted fixes (as opposed to the widen/restore
tradeoff class of gap, which isn't one).

## Session log — build environment recovery after a bad graft (2026-09-07, later)

A PR merge earlier this session (`gh pr merge 1 --merge`, folding
`conker-build-fixes` into `master` via a manual `git read-tree
--prefix=conker/` graft to work around GitHub's "no common ancestry"
block) used `rm -rf conker` as part of the graft sequence. That deleted
the nested repo's `.git` **and every gitignored file in the working
tree** — including `conker.ld` and the entire `asm/` directory, both
excluded by `.gitignore` (`*.ld`, `nonmatchings`) and therefore never
committed anywhere, in this session or upstream. The subsequent `git
checkout`/`read-tree` also silently re-wrote all 651 `src/`/`include/`
files (plus `Makefile`, the four `conker.*.yaml` files, and 55 other
tracked files) with CRLF line endings, because `core.autocrlf` was
`true` in both the outer and nested repo configs — this broke the
WSL/Linux IDO compiler in a way that didn't look like a normal compile
error (`"Too many errors... goodbye"`, a cfe parser meltdown, not a
`cfe: Error` line), so it went undetected for several turns until the
next full rebuild was actually attempted. **Lesson: after any
operation that touches `.git` internals or replaces a working tree
wholesale (grafts, `rm -rf` + recheckout, submodule surgery), rerun the
actual build immediately — "the pushed remote content diffs clean"
is not the same claim as "the local build still works," and Windows
git's `autocrlf`/`core.symlinks` defaults can silently corrupt a
working tree in ways `git status` won't show.**

Recovery chain (each step exposed the next problem):
1. **CRLF**: `git config core.autocrlf false` (outer + nested), then
   `wsl grep -rlP '\r' src include` → `sed -i 's/\r$//'` across all
   affected files. Git Bash's own `\r` detection gave false negatives;
   had to shell out to WSL for a reliable check.
2. **`conker.ld` gone, unrecoverable from git** (gitignored everywhere
   — checked local history, `personal`, upstream `origin`, and
   jefemagril's fork; none track it). Regenerated via `make extract`,
   which cascaded into three more blockers before it would even run:
   - `tools/n64splat/` was a fully empty, never-initialized submodule
     placeholder (this project's outer-repo submodule tracking didn't
     survive the earlier graft). Fixed with a direct
     `git clone https://github.com/ethteck/n64splat.git` rather than
     trying to restore proper submodule linkage.
   - The freshly-cloned n64splat pulled latest (0.50.0), which broke
     `tools/splat_ext/rzip.py`'s custom segment type (`ImportError:
     cannot import name 'opts' from src.splat.util.options` — that
     global was removed in n64splat's own `cff96e2 "Separate Config
     from Split (#442)"`).
   - `tools/splat_ext/rareunzip.py` (meant to be a symlink to
     `tools/rareunzip.py`) had been checked out by Windows git as a
     15-byte **plain text file containing the literal string**
     `../rareunzip.py` — not a working symlink (`core.symlinks` is
     evidently unsupported/off in this Windows git setup) — causing
     `invalid syntax (rareunzip.py, line 1)`.
   The *correct* fix, found only after the pragmatic ones above: fetch
   each of the four `tools/*` submodules' **exact upstream-pinned
   commit SHA** directly from GitHub's API
   (`api.github.com/repos/mkst/conker/contents/tools` — the gitlink
   entries report their pinned SHA even though this repo's own
   submodule linkage is broken) and `git checkout <sha> -- .` inside
   each freshly-cloned tool dir, rather than trusting "latest". Pinned
   SHAs used: `n64splat@3376e8c1`, `asm-differ@093360aa3`,
   `asm-processor@42e7ccaf`, `mips_to_c@3ae39f5c6`. Also discovered
   `tools/asm-differ`, `tools/asm-processor`, `tools/mips_to_c` **inside**
   `conker/conker/tools/` are themselves fake-symlink text files
   (`../../tools/<name>`) pointing at the middle-level `conker/tools/`
   copies — same Windows-symlink problem, fixed the same way but this
   time with real `ln -s` (which *does* work via WSL on this DrvFs
   mount, confirmed by `ls -la` showing `l...->` and content resolving
   correctly — the earlier "fake symlink" files were an artifact of
   Windows `git checkout` specifically, not a WSL/DrvFs limitation).
3. **`spimdisasm` version mismatch** (a transitive pip dependency of
   n64splat, not pinned by the submodule fix above — n64splat's own
   `requirements.txt` only says `spimdisasm>=1.33.0`, so `pip install`
   grabbed latest, 1.42.4). Newest spimdisasm emits a `nonmatching
   func_X, 0xSIZE` marker line before `glabel` in generated `.s` files
   by default (`ASM_NM_LABEL`/`useNonMatchingLabel`, both on by
   default) — a real spimdisasm feature (there to work around a KMC
   compiler quirk) that this project's pinned `asm-processor` doesn't
   parse, so it either misreads the line as a bogus instruction
   (`.text block without an initial glabel`) or — after the
   `nonmatchings` marker was disabled — the underlying naming mismatch
   below became visible instead. Fixed via `pip3 install --user
   --break-system-packages spimdisasm==1.33.0` (matching n64splat's
   stated floor).
4. **Two functions never got their own `.s` stub**: `random_u32`
   (`0x150ADA20`) and `random_float` (`0x150ADA68`) inside
   `game_DAE50.c` — hand-named/hand-optimized in an earlier session
   (visible from the fully-transcribed hex+pseudocode comments still in
   the file) — were declared in `symbol_addrs.us.txt` **without**
   `// type:func`, so n64splat's C-segment splitter didn't recognize
   them as function boundaries and silently emitted nothing for that
   byte range, leaving the `.c` file's `#pragma GLOBAL_ASM(...)`
   pointing at a nonexistent file. asm-processor's fallback for "can't
   determine size" is a literal `#include "GLOBAL_ASM:path"` sentinel
   in its pass-1 output, which the vintage IDO `cfe` doesn't reject
   gracefully — it segfaults (`Signal 11`) instead of erroring. Adding
   `// type:func` alone didn't fix it; adding an explicit `size:0x48` /
   `size:0x64` didn't either. **What actually worked: deleting the two
   symbol_addrs entries entirely** and letting n64splat's vanilla
   auto-detection name them itself — which produces exactly
   `func_150ADA20.s` / `func_150ADA68.s`, matching what the `.c` file's
   pragmas already expected all along. (The custom names were
   apparently added for readability at some point but never actually
   wired up correctly; reverting them is what unblocked the build. If
   the `random_u32`/`random_float` names matter for future readability,
   they'd need to be reapplied as pure renames *after* confirming
   fresh extraction still produces matching `.s` files under the old
   auto-names — not attempted here, out of scope for a build-recovery
   pass.) Byte content was cross-checked against the hex already
   transcribed in `game_DAE50.c`'s comments for `random_u32` — exact
   match, confirming the regenerated `.s` is correct, not a fluke.
5. **One more `cfe` segfault**, this time on a real (non-stub) 118-line
   auto-decompiled function, `func_150FB4C0` in
   `src/game/game_128970.c`. Root cause turned out to be structural,
   not a code-quality issue: `conker.us.yaml` still types this entire
   byte range (`0x128970`-`0x128d70`) as a single **matching** `asm`
   segment (`[0x128970, asm]`, no `c` override) — i.e. `asm/128970.s`
   already contains a byte-perfect `glabel func_150FB4C0` for this
   function. `game_128970.c` was an orphaned mips_to_c experiment
   (header comment: `"Auto-decompiled from asm/128970.s (non-matching)"`)
   that got left in `src/game/` without ever updating the yaml to make
   it a real `c` segment — so it was simultaneously crashing the
   compiler *and*, had it compiled, would have produced a duplicate
   definition of `func_150FB4C0` against the already-linked
   `asm/128970.s.o`. Fixed by deleting `game_128970.c` outright (the
   Makefile's `C_FILES` glob just stops picking it up); the real,
   working, byte-perfect `asm/128970.s` is unaffected and was always
   the actual source of truth for this range.
6. **`conker.ld`'s hand-fix layer was also lost** (see point 2 — it's
   gitignored, so `make extract`'s fresh output only restores the
   *auto-generated* linker script, not fixes layered on top of it in a
   previous session). Specifically, 4 files' `.rodata` were "discarded
   section" at link time — this exact issue and fix were already
   documented earlier in this file (see the "4 files' `.rodata`
   sections silently discarded" entry above) but the fix itself lived
   only in the working-tree `conker.ld`, so it had to be re-applied by
   hand: 4 `build/src/<name>.c.o(.rodata);` lines
   (`game_36680`, `game_77AD0`, `game_981E0`, `game_2062D0`) added
   inside the `.game_data` output section's `.rodata` list, right
   before `game_data_RODATA_END`. **This is a standing risk**: any
   future loss of the working tree will silently drop this fix again
   with no git history to recover it from, since `conker.ld` can never
   be committed while `.gitignore` has a blanket `*.ld` — worth
   special-casing `conker.ld` out of that pattern (`!conker.ld`) in a
   follow-up if hand-maintained linker-script fixes are going to keep
   accumulating.

**Confirmed reproducible end-to-end**: `rm -rf build && make -j$(nproc)
-k` (VERSION=us) now produces `build/conker.us.elf` /
`build/conker.us.bin` again with 0 `cfe: Error`, 0 `Signal 11`/`Fatal
error` lines, 0 "discarded section" warnings — fails only the expected
`sha1sum` byte-match `.ok` check, exactly the pre-existing/documented
state. All four `VERSION`s (`us`/`eu`/`ects`/`debug`) confirmed
building to a valid `.elf`/`.bin` the same way.

**Progress comparison vs. jefemagril/conker** (the question that
triggered this whole recovery — badges fetched from that fork's
`progress/badge_*.svg` on 2026-09-07): our own freshly-computed
`progress.py` numbers, computed the same way (`% functions not under
`GLOBAL_ASM`), turned out **ahead of, not behind,** that fork on total
and on two of three sections:

| section  | ours (us)        | jefemagril/conker  |
|----------|-------------------|---------------------|
| init     | 49.60% (307/619)  | **60.73%** (410/575) |
| game     | **19.68%** (1429/7261) | 8.30% (1642/7274) |
| debugger | **87.91%** (160/182)   | 42.12% (162/182)  |
| **total**| **23.51%** (1896/8064) | 12.41% (2214/8031) |

So the premise of "they're further ahead" doesn't hold up under a real
side-by-side — we're behind only on `init` specifically, and ahead
overall, on `game`, and substantially ahead on `debugger`. Worth
revisiting `init` specifically if closing that one gap matters, but
there's no broad "catching up" work implied by this comparison.

## Session log — resuming matching investigation, two categories found (2026-09-07, later still)

With the build restored, resumed the closest-to-matching triage:
reran `score_funcs.py` against `touched_funcs.txt` (576 functions),
sorted `func_scores.csv` ascending. Investigating the top candidates
turned up **two distinct categories**, one safely fixable, one not:

**Category A — narrowed parameter type missing its mask (fixed, safe).**
`func_151494E0` (`src/game/done/game_1765E0.c`) is a thin wrapper:
`func_151494E0(s32 arg0, s32 arg1) { func_15169260(&D_800A5770, 2,
arg0, arg1); }`. Diffing showed target masking the second argument
(`andi a3,a1,0xff`) before the forwarded call — ours just moved it
unmasked (`move a3,a1`). Every call site passes a small hex constant
(max seen ~0x57), confirming `arg1` should be `u8`, not `s32`. Fixed
by narrowing the parameter, then running the existing pipeline
(`restore_promotion_safe_signatures.py` — auto-restores a strict
`functions.h` prototype for promotion-risky types instead of the
relaxed K&R form; `fix_cross_file_arg_counts.py` — needed here because
two call sites, `game_124260.c:29` and `game_1FA770.c:1646`, were
passing a stray *third* argument that the relaxed prototype had let
through silently; confirmed via the diff that target's asm only ever
reads 2 params, so trimming the excess arg — not adding a real 3rd
parameter — was correct). Isolated score dropped 1306→478 with no
build regressions. Found and fixed the same category in a sibling
function, `func_15149434` (same file) — target's indirect jump-table
call (`D_8008A8D8[idx](arg0, arg1, arg2)`) masks its 3rd argument in
the branch-delay slot after `jalr` (`andi a2,a3,0xff`); `arg2` needed
the same `s32`→`u8` fix. `func_15149490` in the same file scored
610/1600 and looks like a same-category candidate too but wasn't
chased this round — worth checking first next time before diving into
harder cases.

**Category B — cascading size drift, root cause upstream, explicitly
NOT fixed (too risky to guess).** Several of the lowest (closest-to-
matching) scores shared a suspicious shape: current has extra
instructions — often a full `addiu sp,sp,-0x18` frame + a spurious
`jal 50ada20` (`random_u32`) call — right at a function's declared
start, with target's equivalent content only appearing later, address-
shifted. First read as "N individual functions each got a wrong extra
call inserted." That reading was WRONG. Checked the functions
*preceding* the affected cluster in `game_2062D0.c`
(`func_151D8E20`/`E6C`/`EB0`/`EBC`) and found **none of them are
byte-perfect either** (scores 800/1100, 800/900, 870/1100, 710/800) —
including the very first function in the file. That means the
diff tool's displayed "target" addresses for everything downstream are
not independently trustworthy once drift has already started upstream
of the comparison window; the "extra insertion at every function
boundary" symptom is the SAME accumulating drift being re-detected at
each new function, not N separate bugs. Root cause is somewhere
*before* `game_2062D0.c`'s first function (or in whatever precedes it
in link order) — genuinely unknown without a dedicated ground-up
investigation. Same symptom independently reproduced in
`src/game/done/game_1765E0.c` (`func_151493E4` and, after its own
type fix, `func_15149434` still show it) — this is clearly a
widespread pattern, not confined to one file. **Do not attempt
speculative fixes here** (e.g. inventing a plausible-looking "missing
function" to fill the address gap) without first verifying the true
divergence point via ground-truth means (independent of this specific
diff tool's relative-addressing display, which is unreliable once
upstream drift exists) — a wrong guess would silently corrupt working
code with invented semantics. Flagging as a real, sizeable category
for a future session with dedicated time to root-cause it properly,
not a quick-fix target.

Rebuilt clean after both Category A fixes (0 `cfe: Error`, 0 `Signal
11`, only the expected `.ok` sha1sum mismatch) — `us` version
confirmed via `rm -rf build && make -j$(nproc) -k`.

## Session log — Category A continued: function-pointer-table parameter types (2026-09-07, later still)

Followed up on the `func_15149490` lead flagged above. Its body calls
through `D_8008A670[idx](arg0, arg1, arg2)`, and that table is declared
`extern s32 (*D_8008A670[])(s32, struct260*, s16)` in `variables.h` —
3rd param `s16`, but `func_15149490`'s own `arg2` was `s32`. Diff
confirmed it: current did an explicit truncate+sign-extend dance
(`sll a2,a3,0x10` / `sra t6,a2,0x10`) right before the indirect call
that target doesn't do at all — target's `arg2` register just flows
through unchanged, meaning it's already the right width at the call
site. Narrowed to `s16`; isolated score dropped 610→400 (same file's
Category B drift, see above, eats into full match here too, same as
`func_15149434`).

Generalized the search: grepped `variables.h` for every function-
pointer-table declaration with a narrower-than-`s32` parameter type
(`s8`/`u8`/`s16`/`u16`) and cross-checked each against its caller(s).
Found a third: `D_80089F60` declared `(s32, s32, u8)`, called from
`func_1513CF9C` (`src/game_169510.c`) with `arg2` still `s32`. Fixed
the same way. This one's isolated diff score is dominated by a huge,
unrelated block of totally mismatched target-only content (16785/17900
— nowhere near the small-wrapper-sized scores above), almost certainly
another instance of Category B (or a separate, unrelated large
mismatch) rather than anything this type fix could visibly move — but
the fix itself is unambiguously correct per the table's own declared
signature, has zero external callers to risk breaking, and cost
nothing to apply, so it went in anyway. Did not chase this function's
underlying mismatch further — out of scope for a type-narrowing pass.

All three fixes (`func_151494E0`, `func_15149434`, `func_15149490`,
`func_1513CF9C`) went through the same pipeline
(`restore_promotion_safe_signatures.py` then
`fix_cross_file_arg_counts.py`) and a full clean rebuild — 0
`cfe: Error`, 0 `Signal 11`, 0 CRLF regressions, `build/conker.us.elf`
and `.bin` both produced.

**Pattern worth remembering for next time**: whenever a small
"forwarding wrapper" function calls through a declared function-
pointer-table (`extern RET (*NAME[])(...)` in `variables.h`), check
that the wrapper's own parameter types match the table's declared
parameter types exactly. A wrapper mismatched only in width (its
param wider than the table expects) reliably shows up in the diff as
spurious truncate/mask/sign-extend instructions around the indirect
call that the target doesn't have — worth grepping `variables.h` for
narrow-typed function-pointer tables and checking every one's
caller(s) systematically rather than one at a time from a score list,
since this project apparently has several such tables and it's cheap
to check them all in one pass.

## Session log — Category B revisited: it was mostly Category A in disguise (2026-09-07, later still)

Went back to properly root-cause the "cascading drift" category flagged
above as too risky to guess-fix. The key realization: this project's
`func_ADDR`/`D_ADDR` auto-naming convention bakes each symbol's *true*
target address into its own name, while its *actual* linked address
(from `build/conker.us.map`) reflects whatever size our own build
produced. Comparing declared-in-name vs actual-linked address for every
such symbol, walked sequentially through a section, gives a byte-exact,
ground-truth drift measurement completely independent of `asm-differ`'s
relative-addressing display (which the earlier round correctly found
unreliable once drift has already started upstream). Wrote
`find_drift.py` (kept in the repo — genuinely reusable, not scratch) to
do this: it parses `build/conker.us.map`, walks a given VRAM range, and
prints every point where the accumulated `actual - declared` delta
changes, i.e. every point new drift is introduced.

First real find with this tool: `cmp conker.us.bin build/conker.us.bin`
showed the *global* first divergence at ROM byte 4204 — inside
`func_10001050`, the very first substantial (non-entrypoint-stub)
function in the whole ROM. But diffing that function in isolation
showed it's *itself* byte-perfect (every instruction matches, same
count, same order) — the only mismatches were six `jal` target
addresses, all shifted by the exact same `+0x1A0` (416 bytes),
pointing to functions around `0x10022xxx`. That meant the true
root cause wasn't `func_10001050` at all, just something it calls
transitively. Ran `find_drift.py` over the whole `.init` range
(0x10001000–0x10023000) and got the real picture: **not one root
cause — dozens of small, scattered drift points**, `-4` bytes (one
missing instruction) by far the most common single increment,
starting at `func_1000853C` and continuing through many unrelated-
looking functions.

Diffed `func_100084D8` (the function right before the first drift
point, still byte-perfect at that point so its diff is fully
trustworthy) and found the same Category A shape as the previous two
sessions: target does `sw a0,0x20(sp)` / `andi a1,a0,0xff` (save then
mask the argument to a byte) before using it as an array index into
`D_8003C900[]`; current just does `move a1,a0` — no mask. Its own
source, `src/init_8180.c`, turned out to be a **whole file built
around this exact pattern**: ~20 small wrapper functions, each taking
a `s32 idx` first parameter and indexing `D_8003C900[idx]` (an audio
channel-player table) before forwarding to a real `n_al*`/`func_1001*`
call. One of them, `func_10008BC0`, already had `u8 idx` from an
earlier session — direct confirmation the type should be `u8`
everywhere in this file, just never propagated to its ~20 siblings.
Verified there was no other `s32 idx` usage in the file (only the
exact `( s32 idx` parameter pattern, 22 matches, no local variables
sharing the name) and did a single scoped `sed -i 's/( s32 idx/( u8
idx/g'` across the whole file, then ran the usual pipeline
(`restore_promotion_safe_signatures.py` restored 21 strict
`functions.h` prototypes; `fix_cross_file_arg_counts.py` found nothing
to trim — the 3 external call sites, in `game_2D4B0.c`/`init_B1B0.c`,
all already passed plausible small values). Rebuilt clean (0
`cfe: Error`, 0 `Signal 11`), and `find_drift.py` confirmed roughly a
third of the `.init` range's accumulated drift by `func_1001E2A0`
(`-416` → `-320` bytes) resolved in one pass — about a dozen
functions' worth of drift eliminated by a single, mechanical,
20-line `sed`.

**Residual, genuinely harder cases found within the same investigation
— NOT fixed, don't guess at these:**
- `func_100085F8` and `func_100086FC` (same file, `init_8180.c`):
  target's content at their declared addresses doesn't match a simple
  type-narrowing story — `func_100085F8`'s target is just an epilogue
  (`addiu sp,sp,0x18; jr ra; nop`, no matching prologue), and
  `func_100086FC`'s target references a live value in `t9`/`s0` that
  isn't set by anything in the visible window, plus an extra 0x20-byte
  stack frame with a saved `s0` our simple forwarding wrapper doesn't
  have. Both look like genuine function-boundary or missing-content
  issues (in the same family as the `random_u32`/`random_float` case
  from two sessions ago), not a type bug — would need the same
  ground-truth-bytes-first discipline as that fix, not attempted here.
- `func_10008BC0`: despite already having the correct `u8 idx`, still
  shows drift — diff reveals an `mtc1`/`mfc1` float-register round-trip
  (`f32 arg1, arg2` get moved into `$f12`/`$f14` then back into
  `a1`/`a2` right before the forwarded call) that target doesn't do at
  all (target keeps them in `a1`/`a2` throughout). The callee
  (`func_10017DF0`) is genuinely `(N_ALCSPlayer*, f32, f32)`, so this
  isn't a wrong-type bug — more likely an IDO register-allocation/ABI
  quirk specific to a non-float first parameter (`u8 idx`) preceding
  float parameters. Not well enough understood to fix confidently;
  flagging the pattern (float params after a non-float first param,
  in a K&R-relaxed-turned-strict prototype) in case it recurs
  elsewhere and a real explanation surfaces.
- `func_1000E704` (past `init_8180.c`, further into `.init`): diffed
  out of curiosity while checking how far the "easy" pattern extended
  — genuinely different logic entirely (score 2828, large structural
  mismatch), and it calls `func_10008C6C` — one of this same file's
  own already-flagged `// NON-MATCHING: need to determine what these
  variables hold` functions. Confirms the remaining drift past this
  point is real, un-reverse-engineered logic, not a mechanical
  category — expected, not a regression to chase.

**Overall conclusion on "Category B"**: it was never really one thing.
A large fraction of what looked like mysterious cascading drift was
actually many independent instances of the already-known Category A
bug (narrow parameter type missing its mask), concentrated in files
that happen to share a common indexing/table pattern — findable and
fixable in bulk once you spot the shared pattern, exactly like this
round did for `init_8180.c`. What's left after that cleanup is a
smaller set of *actually* hard cases — real missing/misplaced content
or genuine unreverse-engineered logic — where the right move is still
to stop and flag rather than guess. **Actually checked the `.game` section too** (not just recommended —
ran `find_drift.py 0x15000000 0x15060000`, found the first drift point
at `func_15001B8C`, diffed the byte-perfect function immediately
before it, `func_15001B5C`). Result: a completely different, much
harder shape than `.init`'s. Our C source is a trivial one-liner
(`*D_800B0DE0++ = arg0;` — an append-to-buffer helper), but target's
real content is dramatically more complex: a magic-constant check
(`0x98cce31a`, looks like a debug/cheat-code sentinel), several calls
to other functions (`func_23764`, `func_3c40`, etc.), and writes to
half a dozen different memory locations. This isn't a type-narrowing
bug or a boundary-off-by-N-bytes issue like the earlier finds — it's
a genuine, substantial missing-logic gap in a 2-line reconstruction
that should probably be many lines. Confirmed via source read, not
just the disassembly. **Do not attempt to reconstruct this speculatively**
— a wrong guess at "what a magic-constant cheat-code check does" is
exactly the kind of invented-semantics risk flagged as out-of-bounds
throughout this investigation. `.game`'s Category B is a different,
harder beast than `.init`'s was; `find_drift.py` now takes `lo_hex
hi_hex` CLI args (was hardcoded to `.init`'s range) so this same
ground-truth methodology can be pointed at any section on demand —
worth using it to at least map out how much of `.game`'s drift is
this-shape-of-hard vs some other still-undiscovered mechanical
pattern, before deciding whether it's worth a dedicated future
session.

## Session log — searched broadly for more of the same category, came up empty (2026-09-07, later still)

**Found and fixed a real bug in `find_drift.py` first**: the CLI-args
rewrite from the previous round dropped the `prev_delta = delta`
update at the end of the loop, so every entry with any nonzero delta
printed as if it were a brand-new change from 0 (263 "changes" in
`.init` instead of the true 34). Fixed by restoring the update. Re-ran
the corrected scan — confirms `.init`'s remaining drift after the
`init_8180.c` fix is 34 real change-points, stabilizing at a final
`-320` byte cumulative offset by `func_1001E2A0` and staying there
through the rest of the section.

Spent the rest of this round checking whether the productive
"forwarding wrapper missing an argument mask" pattern from
`init_8180.c` repeats anywhere else, using the corrected tool:
- `func_1000BA18` (next real `.init` drift point after `init_8180.c`'s
  cluster): huge, unrelated logic — different magic constants
  (`0xff00ffff`, `0x2023`, `0x7fff`), different callees entirely
  (`func_e514`/`func_c4bc` vs target's `func_e588`/`func_df68`/
  `func_c530`). Not a type bug.
- `func_1000ECCC`: also a large restructuring, not a simple mask/type
  issue — different register allocation and an extra load/shift
  sequence throughout.
- `func_16001390` (`.debugger` section — checked because it only has
  2 drift points total, matching its already-high 87.91% match rate):
  a ring-buffer/memmove-shaped function, genuinely different control
  flow, not mechanical.
- `func_1506045C` (a different, later part of `.game`, away from the
  `game_2062D0.c`/`game_1765E0.c`/`game_2DF70.c` files already looked
  at): another large, deeply different function — looks like game-
  state/animation-flag logic with many magic byte comparisons (`0x29`,
  `0x2e`, `0x1a`, `0x2a`, etc.), nothing resembling a narrow-parameter-
  type bug.
- Also checked directly whether any other file shares `init_8180.c`'s
  `D_8003C900[]` array (`grep -rl` across `src/`) — no other file
  references it, so that specific fix genuinely was file-local, not
  part of a wider table-sharing pattern.

**Conclusion**: the `init_8180.c` fix was a real, valuable, but
apparently isolated find — a file that happened to be built almost
entirely out of one repeated wrapper shape sharing one bug. It was not
evidence of a broader, still-undiscovered mechanical category waiting
to be found elsewhere. Everything checked this round belongs to the
"genuine missing/different logic, needs real reverse engineering"
bucket already described for `.game`, not something a type change or
similar mechanical edit can safely fix. No source changes went in this
round (only the `find_drift.py` bug fix) — didn't want to force a
fix that isn't there. **Next productive step for this class of work is
not more searching for the same pattern** — it's picking one specific
hard function (e.g. `func_100085F8`'s empty-target mystery, still
unresolved from two rounds ago, since it's small and well-isolated)
and doing the slower, ground-truth-bytes-first reverse engineering
that this kind of case actually requires.

## Session log — init_8180.c, function by function (2026-09-07, later still)

Went back through `init_8180.c` properly this time, function by
function with full (untruncated where feasible) diffs, instead of the
quick bulk `sed` from two rounds ago. That bulk fix only handled the
`idx` parameter — it turned out several sibling functions have
*additional* parameters that also need narrowing, which the earlier
pass never checked because it only looked at the first ~60 lines of a
`-s`-scoped diff (which silently truncates at the first `jr ra`,
hiding a function's true full body when it has multiple return paths
or — as this round's first real finding showed — hiding drift that
had already started *before* the function even began).

**Root cause of `func_100085F8`'s "empty target" mystery from two
rounds ago**: it wasn't a missing function or a boundary problem at
all. `func_100085B8` (the function right before it) was never actually
byte-perfect — the earlier round's `-s`-truncated check only verified
its first return path, and missed that `arg2` (3rd param) also needed
`u8`, same as `idx`. Fixing `func_100085B8` properly (`arg2: s32 ->
u8`) resolved essentially all of `func_100085F8`'s apparent problem as
a side effect — its score dropped from 1005 to 105, and the target
content is now confirmed as a completely ordinary wrapper (calls
`func_10017BB8`, no missing content, no weird boundary). **Lesson**:
`-s` (stop-at-first-return) diffs are fast but can hide real bugs in
the *preceding* function that only manifest as apparent problems in
the *next* one — always double check the immediately preceding
function with a full, unscoped diff before concluding a target's
content looks anomalous.

Went on to find and fix the same "forwarded argument needs u8, not
s32" bug in three more functions, confirmed by checking the actual
`andi ...,0xff` / `lbu ...,0x..(sp)` masking target does before each
forwarded call:
- `func_10008660`: `arg2` (3rd param) → `u8`.
- `func_100086FC`: `arg1` and `arg2` → `u8` (confirmed `arg1` via
  target's `lbu a1,0x1f(sp)` — a byte reload right before the call,
  not just an `andi`).
- `func_10008744`: `arg1` and `arg2` → `u8` (both directly `andi`-
  masked in target).

Rebuilt clean after each (0 `cfe: Error`, 0 `Signal 11`) via the usual
pipeline (`restore_promotion_safe_signatures.py` — needed every time,
since every one of these functions has an `f32`/`u8`/`s16`-class
parameter now; `fix_cross_file_arg_counts.py` — found nothing to trim,
no external callers of any of these).

**Two genuinely harder residuals found, tried, and correctly left
alone rather than force-fixed:**

1. **`func_10008660`'s `arg3`** — target holds the post-clamp value
   in a *callee-saved* register (`s0`, preserved across the whole
   branching clamp computation) and does a final `andi a3,s0,0xff`
   right before the call; current computes the same value but keeps
   it in a caller-saved temp and reloads it from the stack late. Tried
   two experiments to match this: (a) introducing a separate `u8
   result` local instead of reassigning `arg3` in place — made the
   score *worse* (1176 → 1535, wrong branch structure, lost target's
   `bnezl` likely-branch entirely); (b) narrowing `arg3`'s own
   parameter type to `u8` while keeping the in-place reassignment —
   also worse (1176 → 1443, got the register class right but still
   wrong instruction order and an extra spurious `andi`). Reverted to
   the best-known version (`arg3` still `s32`, in-place reassignment,
   score 1176) rather than keep guessing. This looks like the same
   class of IDO register-allocation quirk already flagged for
   `func_10008BC0`'s `f32` round-trip two rounds ago — not something a
   source-level type or variable-structure tweak has reliably fixed
   so far.

2. **`func_10008790` (and almost certainly its sibling
   `func_1000886C`, same shape)**: this is not a type bug at all.
   Our C source implements it as a 16-channel loop (`for chan in
   0..16: if bit set in mask, call func_10008660(idx, chan, arg2,
   arg3)`), using 6 saved registers (`s0`-`s5`) in the compiled
   output. But target's *actual* content at this address is a
   completely different, much simpler wrapper — the exact same shape
   as `func_10008744`/`func_100086FC` (masked array lookup + a single
   forwarded call to `func_10017D80`), with no loop, no mask
   parameter, no `s0`-`s5` at all. Confirmed neither function has any
   caller anywhere in the currently-decompiled C tree (`grep -rn` came
   up empty for both), so there's no cross-reference to help pin down
   what they're actually supposed to do — they may be called only from
   the still-unconverted `func_10008180.s` ("this one is a monster",
   per the file's own comment) or elsewhere via a raw address. **Did
   not attempt to guess a replacement implementation** — this needs
   real reverse engineering (probably starting from disassembling a
   wider stretch of the ROM around this address to find where the
   *real* loop-with-6-saved-registers content actually lives, if it
   exists at all) not a source rewrite based on assumption.

**Where the systematic walk-through stands**: confirmed clean through
`func_10008744`.

## Session log — init_8180.c continued: func_10008790 onward (2026-09-07, later still)

Picked up exactly where the previous round left off. Key methodology
fix first: `-s` (stop-at-first-return) diffs are actively misleading
for the loop-shaped functions in this file (`func_10008790`,
`func_1000886C`, `func_10008A94`) — they have an early-exit return
path that `-s` catches prematurely, making a *correctly-sized* loop
function look like a completely different, much simpler function.
The tell: `find_drift.py` showing **zero** new drift introduced at a
function is strong evidence its size (and likely its content) is
already right, even if an `-s`-scoped diff looks alarming — always
cross-check against the drift scanner before trusting an `-s` diff's
shape for these. Switched to explicit-bounds diffs (`diff.py fn
0xNEXT_FUNC_ADDR`, run via `run_in_background` since these can take
30-60+ seconds and time out otherwise) for anything loop-shaped.

Fixed, confirmed via rebuild + `find_drift.py` after each:
- `func_10008660`: `chan` (2nd param) → `u8` (target masks it
  `andi a1,s0,0xff` right before calling `func_10017C68`). Combined
  with fixing the *caller* (`func_10008790`)'s `arg2` → `u8`
  (`andi s3,a2,0xff` at loop entry), this fully resolved
  `func_10008790` **and** `func_10008824` — both went from "looks
  like a totally different function" to zero drift.
- Same pattern, same fix, for the `func_1000886C`/`func_10008824`
  pair: `func_10008824`'s `arg1` (chan) → `u8`, and (separately)
  `func_10008824`'s own `arg2` → `u8` too (confirmed via its own
  bounded diff showing `andi t6,a2,0xff` before its `func_10017D30`
  call) — `func_1000886C` dropped from -20 introduced drift to -4
  (the -4 is upstream leakage from `func_10008660`'s still-open
  `arg3` issue, not a `func_1000886C`-local problem).

**One experiment that made things worse, reverted**: tried declaring
`func_10008A94`'s local loop variable `chan` as `u8` (its callee,
`func_10017E4C`, is called directly rather than through one of our
own wrapper functions, so there was no "narrow the callee's parameter"
option available the way there was for the other two loops). This
completely changed the compiled loop structure — IDO generates a
different comparison/branch pattern for a byte-typed loop counter
than an int-typed one (`bnel s0,s5,...` likely-branch became a
`slti`+`bnez` pair, registers reshuffled). Confirmed via rebuild this
was strictly worse (introduced *more* mismatched instructions, not
fewer) and reverted `chan` back to `s32`. **Lesson reinforced**: the
narrow-type fix belongs on the parameter of the function *receiving*
the value (or a parameter being forwarded), not on a local loop
counter that's merely used to compute an argument — those are
different codegen paths in IDO and get typed independently. Kept
`func_10008A94`'s own `arg2` parameter as `u8` (that part alone is
still correct and doesn't touch the loop structure).

**Found the real blocker for `func_10008A94`**: it isn't a type bug
at the caller at all. `func_10017E4C` itself (`src/libultra/audio/
init_17DF0.c`) — the function `func_10008A94` calls directly, with no
wrapper in between — has a massive, structurally different
implementation in target (building some kind of message/struct with
`sb`/`sh` byte and halfword stores, magic values `0xfc`/`0xb0`/`0x5c`,
a completely different call target) versus our current one-line
version. This is not a narrow-parameter bug and was not attempted —
flagging `func_10017E4C` itself as the next real target if anyone
wants to chase `func_10008A94`'s remaining drift further, rather than
continuing to poke at `func_10008A94`'s own signature.

**Confirmed stable end state this round**: full clean rebuild (0
`cfe: Error`, 0 `Signal 11`, 0 CRLF regressions). Remaining drift in
`init_8180.c`'s address range, from `find_drift.py 0x10008000
0x10009000`: `func_100085F8`/`func_100086FC`/`func_10008744` carry
the still-open `func_10008660.arg3` residual (-4, -20, -4 bytes
respectively — all the same underlying cause, not three separate
bugs); `func_1000886C` carries -4 more of the same; `func_10008A94`
introduces -12 (the `func_10017E4C` issue above); `func_10008B2C`
shows +4 (not yet investigated); `func_10008BC0` (`f32` register
round-trip, flagged two rounds ago) still open at -76 cumulative
by that point; `func_10008F24` and `func_10008F90` not yet
investigated.

**Not yet re-verified with a full diff**: `func_100088F0`,
`func_10008988`, `func_10008A4C`, `func_10008B2C`, `func_10008B60`,
`func_10008C04`, `func_10008EE0`, `func_10008F24`, `func_10008F58` —
continue the same function-by-function, explicit-bounds-diff
discipline from `func_100088F0` onward next time.

## Session log — init_8180.c finished: func_100088F0 through end of file (2026-09-07, later still)

Finished the walk-through. Result: **`init_8180.c`'s total drift went
from -416 bytes (session start, three rounds ago) to -4 bytes** —
essentially the whole file, confirmed function by function with
explicit-bounds diffs and a rebuild after each change.

`func_100088F0` and `func_10008988` needed no changes at all — already
byte-perfect once the earlier `func_10008660`/`func_10008824` fixes
landed; what looked like problems in an earlier round's stale diff was
purely upstream misalignment.

Two more real fixes, same category as the whole file:
- `func_10008A4C`: `chan` (2nd param) → `u8` — confirmed via target's
  `sw a1,4(sp); andi t7,a1,0xff` before use. Fixing this alone also
  fully resolved `func_10008A94` and `func_10008F90`'s previously-
  reported drift as a side effect (same "downstream symptom of an
  upstream bug" pattern seen repeatedly this investigation) — neither
  actually had its own bug.
- `func_10008B60`: all four forwarded arguments (`arg1`-`arg4`) → `u8`
  — confirmed via target masking all of them (`andi` for the first
  three, `lbu` byte-reload for the fourth, which lives on the stack
  per the o32 ABI's 4-register-argument limit).

**Important correction to a previous round's conclusion**:
`func_10008BC0`'s `f32` "register round-trip" was flagged twice ago as
a hard, unfixable IDO scheduling quirk. It wasn't — once the upstream
functions were actually fixed and the alignment was clean, re-checking
it showed the `mtc1`/`mfc1` pattern matches target **exactly**, byte
for byte. That "quirk" was purely an artifact of comparing against a
misaligned target, the same root cause as the `func_10008790`
"different function" misdiagnosis from last round. **Lesson
reinforced yet again**: never trust an anomalous-looking diff for a
function until confirming, via `find_drift.py`, that nothing upstream
of it is still contributing drift.

One more real, still-partially-open fix: `func_10008C04`'s `arg1` →
`u8` (confirmed via target's `lbu a2,0x1f(sp)` byte-reload before its
second forwarded call). This one has a genuine small residual left
after the type fix — target reloads and uses `arg1` earlier in the
instruction sequence than current does (a delay-slot/scheduling
placement difference, not a type or logic bug) — same class of
unresolved nuance as `func_10008660`'s `arg3`. Left as-is rather than
risk making it worse via more C restructuring, per the established
pattern from two rounds ago where that kind of experiment backfired.

`func_10008EE0`: `arg1` → `s16`, not `u8` — confirmed via the
shift-based sign-extend idiom (`sll $reg,$reg,0x10` /
`sra $reg,$reg,0x10`) instead of an `andi ...,0xff` mask, the same
signature as `func_15149490`'s fix from an earlier session. This
fully resolved `func_10008F24`'s reported drift too (same downstream-
symptom pattern).

`func_10008F24` and `func_10008F58` (the last function in the file)
both needed no changes — clean once everything upstream was fixed.
The remaining -4 bytes at the very end of the file trace back
entirely to the two still-open scheduling residuals
(`func_10008660.arg3`, `func_10008C04`'s reload timing) — not a new,
unexamined bug.

Rebuilt clean after every change this round (0 `cfe: Error`, 0
`Signal 11`, 0 CRLF regressions) — confirmed via
`find_drift.py 0x10008000 0x10009000` after each fix, and a final full
`us` rebuild.

**`init_8180.c` is now effectively done** as a target for this kind
of investigation — the only two remaining issues are documented
instruction-scheduling nuances, not undiscovered bugs, and both
resisted direct fix attempts already. Worth moving to a different
file next time rather than continuing to poke at these two.

## Session log — important correction: func_10017E4C was never actually broken (2026-09-07, later still)

Re-verified `func_10017E4C`/`func_10017DF0` (flagged two rounds ago as
"func_10008A94's real blocker — a massive, structurally different
implementation") using the discipline established since then
(`find_drift.py` first, before trusting any diff). **That flag was
wrong.** `find_drift.py 0x10017000 0x10018000` shows both functions
introduce **zero** new drift — the earlier "massive mismatch" was, a
third time now, purely an artifact of comparing against a target that
was already misaligned from drift further upstream (this file's own
prologue tail was showing through at what looked like
`func_10017DF0`'s start). Confirmed by reading the source directly
too: `func_10017DF0` and `func_10017E4C` build an `N_ALEvent` struct
field-by-field, and the disassembly constants line up exactly with the
C source's literals (`type=2`, `status = chan|0xB0`, `byte1=92`, the
`0xfc`/`li a3` from the `n_alEvtqPostEvent(..., 0, 2)` call args) —
there was never a real mismatch to find here. **Do not re-flag
`func_10017E4C` as broken without first checking `find_drift.py` for
its address range** — this is now the third time this exact class of
misdiagnosis has happened in this investigation (after
`func_10008790` and `func_10008BC0`), which is a strong enough pattern
that it's worth stating as a hard rule going forward, not just a
lesson: **an `-s`-scoped or otherwise-unverified diff that looks
alarming is not evidence of a bug until `find_drift.py` confirms real
new drift is introduced at that function specifically.**

Given `func_10017E4C` isn't actually the blocker, `func_10008A94`'s
remaining -12ish bytes of drift (from the `init_8180.c` sessions
above) most likely trace back to the same two already-documented
scheduling residuals (`func_10008660.arg3`, `func_10008C04`) rather
than a separate bug — consistent with every other "downstream symptom"
case found throughout this investigation. Not independently
re-verified this round; low priority given it's almost certainly not
a new issue.

**Found a new, much larger cluster of the productive category**,
distinct from `init_8180.c`: `find_drift.py 0x1000E000 0x10017100`
shows well over a dozen separate drift-introducing points scattered
from `func_1000E054` through past `func_10015550`, cumulative delta
reaching -176 bytes by `func_10016E90` and staying there through at
least `func_10017100`. One of them, `func_1000E704`, was already
identified in an earlier session as genuinely hard (calls the
already-flagged non-matching `func_10008C6C`) — not every point in
this range will be the easy category. Spot-checked the very first one,
`func_1000E054` (`src/init_B1B0.c:345`): target is missing our
`addiu sp,sp,-0x20` prologue instruction entirely (everything else
in the function matches with a constant +4 current-vs-target offset,
i.e. this one instruction is the entire discrepancy) — looks like the
same shape as earlier "unnecessary stack allocation" findings, but
the exact cause (which local/spill is forcing our version to reserve
a frame target doesn't need) wasn't pinned down before running out of
turn budget. **Not fixed — no confirmed root cause yet, don't guess.**
This is the concrete next lead: `src/init_B1B0.c`, starting at
`func_1000E054`, using the same explicit-bounds-diff-plus-
`find_drift.py` discipline established over the last several rounds.

## Session log — func_1000E054 was ALSO a misdiagnosis; a strategic reframe of the "large cluster" (2026-09-08)

Went to start on `func_1000E054` per the previous round's lead.
**It was the exact same trap, a fourth time, immediately after writing
the hard rule about it.** Ran `find_drift.py` on the range *before*
`func_1000E054` first this time (finally applying the rule
consistently) and found the drift actually starts much earlier — at
`func_1000DE1C`, then earlier still at `func_1000D2F8`, then
`func_1000C350`/`func_1000CD40`, then `func_1000B060`, then
`func_100093CC` — each check pushed the "true first divergence" point
further back. The apparent "-48 bytes, missing `addiu sp,sp,-0x20`"
finding for `func_1000E054` from last round was reading *cumulative*
drift as if it were *newly introduced* drift at that function —
exactly the bug class already fixed once in `find_drift.py` itself
two rounds ago (the missing `prev_delta = delta` line), just repeated
as a *manual* reading error this time instead of a script bug.

Traced all the way back to `func_100093CC` (`src/init_8F90.c`,
immediately after `init_8180.c`'s own file ends) as the first new
divergence point, introducing a genuine **-48** bytes on top of
`init_8180.c`'s already-known -4 residual. Investigated it and its
neighbor `func_10008F90` (a huge, 1084-byte `#pragma GLOBAL_ASM`
block, already flagged `// NON-MATCHING: so much to do` from an
earlier session) directly. Verified via a full-range diff scan
(grepping for pure insertion/deletion lines, not just address/
immediate differences) that **`func_10008F90`'s own raw-asm content
has zero genuine mismatches** in the checked range — every difference
is either a `jal` call-target address (expected, downstream symbol
resolution) or an immediate-value difference on a `lui`/`addiu` pair
that's itself just a data-pointer address shifted by the same
drift amount. Same for `func_100093CC`'s own body once past the
leading tail-of-previous-function noise.

**Strategic reframe, not yet confirmed**: a wider scan
(`find_drift.py 0x10009000 0x10017100`) shows a *large* number of
separate-looking drift-introduction points (~18, in files spanning
far beyond `init_8180.c` and `init_8F90.c`) — but given `func_10008F90`
and `func_100093CC` themselves check out clean, it's plausible a
substantial fraction of this "large cluster" is not 18 independent
bugs at all, but **alignment-padding amplification** of the two
already-known, still-unresolved `init_8180.c` residuals
(`func_10008660.arg3`, `func_10008C04`'s reload timing) as they
propagate through `SUBALIGN(16)`-governed section/object boundaries
in `conker.ld`. This is a hypothesis, not a confirmed finding — it
would need to be tested by either (a) actually resolving the two
`init_8180.c` residuals and seeing how much of the downstream cluster
evaporates as a side effect (the same pattern that's happened
repeatedly this whole investigation — fixing one real bug silently
"fixes" several downstream symptom reports), or (b) individually
verifying each of the ~18 points the same careful way
`func_10008F90`/`func_100093CC` were just checked. `func_1000E704`
within this range is a confirmed exception — genuinely hard, already
flagged, not an alignment artifact (it calls the already-known
non-matching `func_10008C6C`).

**No source changes this round** — investigation and a course
correction only. Given the pattern of "downstream drift reports often
resolve themselves once the real upstream bug is fixed" has now held
up repeatedly (`func_10017E4C`, `func_10008A94`, `func_10008F90`/
`func_100093CC` this round), **the highest-leverage next move is
probably going back to properly solve `func_10008660`'s `arg3` and/or
`func_10008C04`'s reload-timing residual** (both previously attempted
and reverted, documented several rounds back) rather than continuing
to chase what may turn out to be their downstream shadows across a
dozen other functions. If those two get solved, re-run
`find_drift.py` over this whole wide range before investigating any
of the ~18 points individually — most of them may simply disappear.

## Session log — another real attempt at the two init_8180.c residuals, still unsolved (2026-09-08)

Went back to actually try harder on `func_10008660`'s `arg3` and
`func_10008C04`'s reload-timing residual, per explicit instruction,
rather than treating them as permanently closed.

**Fixed a real tooling gap first**: `tools/mips_to_c/m2c.py` was
completely broken (`ModuleNotFoundError` chain ending in
`pycparser.plyparser` missing) — the project's `pyproject.toml` pins
`pycparser = "^2.21"`, but the environment had `pycparser` 3.0
installed (a newer major version that reorganized/removed the
`plyparser` module `m2c.py` imports through). Fixed with
`pip3 install --user --break-system-packages 'pycparser==2.21'`.
This makes `mips_to_c` usable for the first time this session — worth
remembering as a tool for exactly this kind of "what C structure
would produce this exact asm" question, distinct from `diff.py`
(compares two known things) and `find_drift.py` (locates where things
diverge). Usage: hand-transcribe the target's disassembly (from a
`diff.py` target column) into a valid `.s` file with `glabel`/local
labels, then `python3 tools/mips_to_c/m2c.py the_file.s`.

**`func_10008660`**: ran `mips_to_c` against a hand-transcribed `.s`
of target's actual bytes. It suggested a **third** structural variant
neither of the previous two rounds' experiments tried: a separate
`s32` local (not `u8`, and not reassigning `arg3` in place) with an
explicit `& 0xFF` cast only at the call site (`(u8) sp0` in this
attempt's code) — matching the observed `andi a3,s0,0xff` appearing
exactly once, right before the call, rather than baked into a
narrower variable's type throughout. Applied it, rebuilt clean,
scored it: **worse** (985 → 1285) — same outcome as both prior
attempts, just a different specific way of being worse. Reverted to
the known-best version (985, `arg3` reassigned in place, still `s32`).
This is now a **third** independently-tried structural variant that
all move the disassembly further from target instead of closer,
despite `mips_to_c`'s C being semantically identical to all of them —
strong evidence the remaining gap here is genuinely IDO's own
register-allocation heuristic (not reachable through equivalent
C restructuring), not something this investigation has just failed to
phrase correctly yet.

**`func_10008C04`**: same `mips_to_c` treatment. This time it
confirmed our *existing* C structure is already the natural
reconstruction (`(arg0*0xF8)+0x8003CA58`, `(arg0*0x760)+0x8003CD48`
matching `D_8003CA58[idx]`/`D_8003CD48[idx]` exactly) — no alternative
structure suggested, nothing to try. The `lbu a2,0x1f(sp)` early-
reload-and-hold pattern target uses really does look like a pure
instruction-scheduling choice with no C-source-level lever to pull.

**Conclusion, with higher confidence than before**: both residuals
have now survived three independent fix attempts each (well,
`func_10008C04` has had fewer attempts but `mips_to_c` found nothing
new to try). Treating both as **closed for source-level fixes** going
forward — further attempts would need either a different compiler-
level lever (unclear if one exists in this project's tooling) or
accepting them as permanent gaps. Recommend re-running the alignment-
amplification test from last round instead (checking whether the wider
~18-point cluster past `init_8180.c` actually depends on these two, or
is independent) since that question is still open and doesn't require
solving these two first.

Scratch `.s` files used for the `mips_to_c` experiments were temporary
and have been deleted — not part of the repo.

## Session log — testing the alignment-amplification hypothesis: mostly wrong, but very productive (2026-09-08)

Went back to the ~18-point wide cluster from two rounds ago
(`0x10009000`-`0x10017100`) to test whether it was mostly amplification
of `init_8180.c`'s two residuals, or independent bugs. Checked several
points directly with explicit-bounds diffs. **Verdict: mostly
independent bugs, not amplification** — found and fixed four real
issues this round, all confirmed via rebuild + re-diff:

1. **`func_1000C530`'s missing prototype** (the actual root cause of
   `func_1000BA18`'s huge, ~150-instruction "totally different
   function" appearance from an earlier round). It's a
   `#pragma GLOBAL_ASM` function with only a relaxed `s32
   func_1000C530();` prototype in `functions.h`. Its two real callers
   (`func_1000B8B8`, `func_1000BA18`) both pass `(s32, u8, f32, f32,
   f32)` — but with no real prototype, C's default-argument-promotion
   rules silently promoted the three `f32` arguments to `double` at
   every call site, producing a `cvt.d.s`/`mfc1`/`sdc1` round-trip
   target never does (target just loads the raw float bit patterns
   into integer registers via `lw`/`lbu` — no float-register traffic
   at all for this call). Added the real prototype
   (`s32 func_1000C530(s32, u8, f32, f32, f32);`). This alone
   resolved **both** `func_1000BA18` and `func_1000BAFC` (adjacent,
   -48 bytes total) to zero drift — confirmed the entire ~150-
   instruction body of `func_1000BA18` matches target exactly once
   this one header line was fixed. **This is a new category** distinct
   from every previous fix this investigation has found: not a
   caller-side parameter width bug, but a *missing prototype on an
   unconverted `GLOBAL_ASM` function* causing default float promotion.
   Worth grepping `functions.h` for other relaxed prototypes of
   functions with float-typed callers — same bug is plausible
   elsewhere.

2. **`func_1000F9D4`'s `arg0`**: `s32` → `u16` (`src/init_EB00.c`).
   Callers explicitly pass `temp_v0 & 0xFFFF` (an unsigned 16-bit
   mask), and target reloads it via `lhu` before the *first* of two
   forwarded `func_1000F85C` calls where current used `lw`. Confirmed
   the first `lhu` now matches exactly. A second, smaller scheduling-
   only residual remains around the *second* call (a fresh spill slot
   appears in current that isn't in target) — real but much smaller
   than before the fix, and not chased further this round (same
   "IDO scheduling, not a type bug" territory as `init_8180.c`'s two
   residuals).

3. **`func_1001123C`'s wrong logic, not a type bug** — the most
   significant find of the session. The 12-byte "drift" hid an actual
   *incorrect reconstruction*: our C called `func_100112BC(arg0, 1)`
   (a real function with its own side effects, modifying a global
   queue `D_80041F10`) inside a nested `if`, but **target never calls
   `func_100112BC` here at all**. Confirmed via direct
   `mips-linux-gnu-objdump` of our own compiled output side-by-side
   with target's disassembly: target directly clears two `u16` struct
   fields (`struct120.unk0` and `.unk4`, both confirmed `u16` in
   `structs.h`) and calls `func_10017594` with the saved pointer —
   no second function call, no return-value check. Rewrote the
   function to match:
   ```c
   void func_1001123C(u16 arg0) {
       struct120 *tmp = &D_800425E0[arg0 & 0xF];
       struct31 *saved;
       if (tmp->unk8 == 0) return;
       if (tmp->unk0 != arg0) return;
       saved = tmp->unk8;
       tmp->unk0 = 0;
       tmp->unk4 = 0;
       func_10017594((void *) saved);
       tmp->unk8 = 0;
   }
   ```
   The early-return structure (rather than a combined `&&` condition)
   was necessary to get IDO to emit the same `bnel`/`beqzl`
   branch-likely instructions target uses — the `&&`-combined version
   compiled to `bne` instead, an instruction-level mismatch on top of
   the logic fix. `(N_ALUnknownStruct1 *)` (matching `func_10017594`'s
   own declared parameter type, seen via grep) failed to compile —
   that type isn't visible in this file's includes — used `(void *)`
   instead, which is fine since C allows implicit `void*`↔any-pointer
   conversion. This single fix **also resolved `func_100112BC`'s own
   reported drift** as a side effect (it was never actually broken —
   the "drift" was `func_1001123C`'s leaking-forward tail, same
   pattern as several earlier finds this whole investigation). A tiny
   (~4-byte) residual remains — one stack-slot offset differs
   (`0x1c` vs `0x18`) — not chased further, likely a similar minor
   IDO scheduling artifact to the other known-hard residuals.

4. **`func_1000F44C`'s `arg0`**: `s32` → `u16` (`src/init_EB00.c`,
   same file, same `D_800425E0[]` array as #3). Confirmed via the
   caller: `struct127.unk8C`/`.unk8E` (both `u16` in `structs.h`) are
   the only real-world values ever passed to this parameter. After the
   fix, the function's *entire body* matches target exactly — verified
   line by line via a fresh diff. `find_drift.py` still reports "-12
   introduced at `func_1000F44C`" purely because that's an artifact of
   which symbol name happens to sit at the point cumulative drift
   changes — the actual unresolved bytes are leaking forward from
   `func_1000ECCC`/`func_1000F248` (not yet checked this round), not
   from `func_1000F44C` itself. **This is now a well-established
   pattern in this investigation**: `find_drift.py`'s "introduced at
   SYMBOL" label names whichever symbol is *next* after a drift
   change, not necessarily the symbol *causing* it — always confirm
   with a direct diff of that specific function's own body before
   concluding it (rather than something upstream) is the source.

Rebuilt clean after each of the four fixes (0 `cfe: Error`, 0
`Signal 11`, 0 CRLF regressions), verified via `find_drift.py` and
direct `diff.py`/`objdump` checks throughout.

**Revised strategic picture**: the wide cluster is NOT primarily
alignment amplification — most of the ~18 points investigated so far
have turned out to be genuine, independent, fixable bugs (three
confirmed fully resolved: `func_1000BA18`, `func_1000BAFC`,
`func_100112BC`; two more with real fixes applied and a small residual
each: `func_1000F9D4`, `func_1000F44C`). The two `init_8180.c`
residuals (`func_10008660.arg3`, `func_10008C04`'s reload timing)
remain genuinely closed per last round's `mips_to_c`-informed
conclusion, but they are clearly NOT responsible for most of this
downstream cluster as hypothesized — that hypothesis is now
considered disproven. **Next continuation**: same file,
`src/init_EB00.c` — check `func_1000ECCC` and `func_1000F248` next
(the likely real source of the drift currently misattributed to
`func_1000F44C`), then continue through the remaining unchecked points
(`func_1000FA64`, `func_100107F8`, `func_100114D0`, `func_10011FA0`,
`func_100127D0`, `func_10012934`, `func_10012E04`, `func_10015550`)
with the same explicit-bounds-diff-plus-`find_drift.py` discipline.

## Session log — two more real fixes, plus a process-discipline miss (2026-09-08, later)

Continued from the exact lead above. Both `func_1000ECCC` and
`func_1000EC24` confirmed clean on inspection (same "leaking-tail"
pattern as before — their own bodies match exactly once past the
preceding function's tail junk). Checked further into
`func_1000EC24`'s full diff (past the ~30 lines viewed initially) and
found the real bug hiding deeper in: `func_1000F3D0`.

**`func_1000EC24`'s call to `func_10010F30`**: missing an `& 0xFFFF`
mask on the 2nd argument (`*arg2`). Confirmed via multiple *other*
call sites of `func_10010F30` elsewhere in the codebase
(`game_20AE20.c`, and even a commented-out reconstruction attempt
inside this same file) that already do `arg & 0xFFFF` at the call
site — this specific call was just missing it. Fixed:
`func_10010F30(arg0->unk1C, *arg2 & 0xFFFF, arg3->unk3, arg4->unk2,
*arg5);`. Resolved `func_1000ECCC`'s reported drift as a side effect
(same misattribution pattern as before — the bug was never in
`func_1000ECCC` itself).

**`func_1000F3D0`'s `arg0`**: `s32` → `u16`, same
`struct127.unk8C`/`.unk8E` pattern as `func_1000F44C` and
`func_1001123C` (all three take one of these two fields as their only
real-world argument). Resolved `func_1000F44C`'s remaining reported
drift as a side effect, confirming last round's hypothesis that its
apparent -12 was leaking forward from here.

**Process miss, caught and fixed within the same round**: forgot to
run `fix_cross_file_arg_counts.py` after `restore_promotion_safe_
signatures.py` for this specific fix (been running both together
every round until this one — a genuine slip, not a new problem).
Making `func_1000F3D0`'s prototype strict exposed a completely
unrelated call site in `src/game/game_1A20A0.c:571` passing **4**
arguments to a function that now strictly expects 1 — that call was
only ever tolerated because the relaxed K&R prototype skipped arg-
count checking; it's very likely wrong/leftover from an incomplete
auto-decompilation there (passes a dereferenced `void**` as if it
were the `u16` index), but fixing *that* file's own correctness is out
of scope for this investigation. `fix_cross_file_arg_counts.py`
mechanically trimmed it to the first argument, which is exactly the
existing tolerate-it-and-move-on convention this whole pipeline is
built around — restores buildability, doesn't touch that file's own
(separate, unrelated) matching status. **Lesson**: always run both
pipeline scripts together after any signature change, no exceptions,
even for a single-line one-parameter fix — this project's codebase is
large enough that "surely nothing else calls this with the wrong
count" is not a safe assumption to skip verifying.

Rebuilt clean after both fixes (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), confirmed via `find_drift.py` and direct diffs.

**Continuation point unchanged from last round's list** minus the two
now-resolved entries: `func_1000FA64`, `func_100107F8`,
`func_100114D0`, `func_10011FA0`, `func_100127D0`, `func_10012934`,
`func_10012E04`, `func_10015550` — same file family
(`src/init_EB00.c` and neighbors), same discipline.

## Session log — diff.py drift-artifact discovery, two real fixes, one confirmed dead end (2026-09-08, later still)

**Important methodology discovery**: `tools/asm-differ/diff.py`'s default
binary-diff mode (`dump_binary()`) resolves the TARGET address to slice
out of `conker.us.bin` using **current's own actual (possibly drifted)
linked address**, not the function's declared/name address — it does
*not* self-correct for pre-existing upstream drift. Whenever nonzero
cumulative drift already exists going into a function (which is now the
normal case this deep into the cluster), a plain `diff.py func_NAME
[end]` call shows completely bogus "target" content: it's actually
target's real bytes from `current_addr`, i.e. the tail end of whatever
target function precedes the real one by exactly the drift amount. This
produces a convincing-looking but totally wrong diff (extra unrelated
"target-only" instructions at the top that look like a different
function's epilogue, because that's literally what they are).

**Fix**: pass `-S <drift_in_bytes>` (`--base-shift`), computed as
`declared_addr - actual_addr` for the function's own start (i.e. the
magnitude of the existing negative delta reported by `find_drift.py`
just before this function). This shifts only the target-side read
address, correctly re-aligning it to the function's true declared
position. Confirmed empirically: `diff.py -S 0x30 func_1000F91C` (drift
was -0x30/-48 at that point) produced a completely different, correct,
sensibly-aligned diff vs the unshifted call. Cross-verified against raw
`mips-linux-gnu-objdump -Dz -bbinary -EB -m mips:4300
--adjust-vma=0x10000000 --start-address=... --stop-address=...
conker.us.bin` (the .bin's file offset 0 corresponds to VMA
`0x10000000`) — matches the shifted diff exactly. **This should be
standard practice from here on**: before trusting any `diff.py` output
for a function past the very first unresolved drift point, check
`find_drift.py`'s cumulative delta immediately before that function and
pass it as `-S`, or fall back to the two-sided raw `objdump` comparison
if in doubt.

Re-investigated the continuation list with this corrected technique.

**`func_1000F91C`** (delta going in: -48, i.e. this function itself was
+12 oversized): properly-shifted diff showed real, if subtle,
divergence — current keeps `arg0` resident in a saved register (`s0`)
across all 4 `func_1000F85C` calls, while target just re-`lhu`s it fresh
from its own stack spill slot before every use. Tried removing the
`s32 tmp` intermediate local (inlining `func_1000F6B8`'s call directly
into the first `func_1000F85C` argument expression, matching what
`mips_to_c` derives from the real target disassembly) — **zero effect
on codegen size**, byte-for-byte identical object output before and
after. This confirms the register-promotion choice is a pure IDO
register-allocation heuristic unrelated to that particular source
shape difference, in the same family as the already-closed
`func_10008660.arg3` residual. **Formally closing this one too** for
now — kept the inlined form since it's a harmless, arguably cleaner
equivalent (matches `mips_to_c`'s natural reconstruction) with no
downside.

**`func_1000F9D4`** (real bug, fixed): properly-shifted diff revealed
target does a full `sll+sra`-by-16 sign-extend idiom on `arg1`/`arg2`/
`arg3` immediately in its prologue before forwarding them to
`func_1000F6B8` — 9 extra target instructions current was missing
entirely. This is the standard "narrow parameter type" pattern: all
three should be `s16`, not `s32` (they're forwarded verbatim to
`func_1000F6B8`'s already-`s16` slots 2–4, confirmed via `mips_to_c`'s
independent reconstruction of that function's own signature). Fixed
`void func_1000F9D4(u16 arg0, s16 arg1, s16 arg2, s16 arg3)`. Result:
drift at this function dropped from **-32 bytes (under target) to just
+4 bytes (over)** — recovered 28 of 32 bytes. The remaining +4 is one
extra instruction (`sw a0,0x28(sp)` + reload instead of a fresh `lhu`
reload from the original prologue slot before the second
`func_1000F85C` call) — same register/stack-allocation-choice flavor as
the `func_1000F91C` residual above. Not chased further; diminishing
returns for the effort, and it matches an already-established
unfixable-heuristic pattern.

**`func_1000F6B8`** (still `#pragma GLOBAL_ASM`, never converted): had
**no prototype at all** in `functions.h` (its line was fully commented
out — `//func_1000F6B8` — even more relaxed than K&R, meaning fully
implicit `int` typing with zero arg-count/type checking). Added a real
prototype derived from `mips_to_c`'s reconstruction of its call sites:
`s32 func_1000F6B8(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s32 *arg4,
s32 arg5, s32 arg6);`. Zero effect on codegen (both call sites already
passed compatible-width values), but it's a genuine correctness/
documentation improvement with no downside, so kept.

**`func_10010720`** (real bug, fully resolved — this was the true cause
of `func_100107F8`'s entire reported drift, another instance of the
established misattribution pattern): two separate real bugs found via
the corrected diff technique:
1. Its call to `func_1000FA64` (still raw `GLOBAL_ASM`, called with 12
   args) passed `arg1->x_position`, `arg1->y_position`,
   `arg1->z_position` (all genuine `f32` struct fields) completely
   uncast, unlike **every other of the ~24 call sites of
   `func_1000FA64` across the codebase**, which all explicitly cast
   their positional args to `(s16)`. Added the matching `(s16)` casts.
   Confirmed via `objdump` that target does `trunc.w.s` + `mfc1` +
   `sll`/`sra`-by-16 (float-to-`s16` truncation) at this exact call
   site — current was doing a no-op float pass-through instead.
2. `arg0` itself needed `s32` → `u16`: target's prologue does an
   `andi t6,a0,0xffff` + `move a0,t6` mask/re-move idiom current
   lacked entirely (three extra target instructions). Consistent with
   `arg0` being forwarded as the `u16` first argument to both
   `func_10010630` and `func_1000FA64`.

Both fixed together, verified via the corrected `objdump`-vs-`objdump`
comparison at `0x10010720`–`0x100107f8` before rebuilding — matched
target **instruction-for-instruction, fully byte-identical**. Rebuilt
and confirmed: `func_100107F8`'s reported drift (`-48` bytes at the
start of this round) **disappeared entirely from `find_drift.py`'s
output** — fully resolved, zero remaining drift. `func_10011FA0`'s
small `+4`-byte entry also disappeared as an unrelated side effect
during this round's work (likely already fixed by the prior round's
`func_1000F3D0` change, just not previously re-verified after that
build).

Rebuild note: hit a transient/flaky parallel-build race this round
(`rm -rf build && make -j$(nproc)` produced several unrelated
`AssertionError`/`struct.error` failures in `asm_processor.py` for
files never touched this session — `game_16DC80.c`, `game_169510.c`,
`game_18D770.c`, `game_57FA0.c`, `game_C8950.c`, `game_CB1C0.c`,
`libultra/gu/guMtxF2L.c` — plus one corrupted leftover `.o` for
`guMtxF2L.c` that needed manual deletion before a subsequent
incremental `make -j$(nproc) -k` succeeded cleanly). Not caused by any
source change; purely a race under high parallelism on this
filesystem. **Lesson**: if a `-j$(nproc)` build shows `asm_processor.py`
Python tracebacks (`AssertionError`, `struct.error`) in otherwise-
untouched files rather than real `cfe: Error`/`Signal 11` compiler
failures, suspect a build race — retry with an incremental (non-clean)
`make -j$(nproc) -k`, deleting any specifically-corrupted `.o` files
first if the retry still fails on the same targets.

Rebuilt clean after all fixes (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py` and direct `objdump`
comparisons throughout.

**Continuation point**: `func_1000FA64` and `func_100114D0` are both
still raw `GLOBAL_ASM` (never converted) — no direct source fix
possible there; any remaining reported drift near them needs the same
"check the immediately preceding real C function" treatment first, with
the corrected `-S`-shifted (or raw dual-`objdump`) diff technique.
Remaining unchecked from the list: `func_100114D0` (check whichever
real C function precedes it), `func_100127D0`, `func_10012934`,
`func_10012E04`, `func_10015550` — same file family, same corrected
discipline (**always compute and pass the right `-S` value, or
cross-check with raw `objdump -bbinary --adjust-vma=0x10000000`,
before trusting a `diff.py` result past the first unresolved drift
point**).

## Session log — important correction: an earlier "logic rewrite" fix was itself wrong (2026-09-08, later still)

Continued down the list with the corrected `-S`-shifted diff technique
from the entry above. Two more clean wins, then a significant
correction to a much earlier round's work:

**`func_1001147C`**: same `struct120.unk0`-comparison pattern as
several previous fixes this whole investigation — `arg0` was `s32`,
needed `u16` (target's prologue does the `andi a0,0xffff` mask idiom).
Fixed. Fully resolved `func_100114D0`'s entire reported drift (the
misattribution pattern again — `func_100114D0` itself is still raw
`GLOBAL_ASM` and was never the real cause).

**`func_100111C8`**: identical pattern, same fix (`s32`→`u16` on
`arg0`). This one has ~9 call sites across 8 different files (only 8 of
them in `init_EB00.c` itself); `restore_promotion_safe_signatures.py`
+ `fix_cross_file_arg_counts.py` correctly trimmed 11 excess-argument
call sites down to the new strict 1-parameter signature across
`game_100810.c`, `game_105FC0.c`, `game_142560.c`, `game_1A5440.c`,
`game_1C2C60.c`, `game_1D6E80.c`, `game_1E30A0.c`, and this file — all
verified as harmless (each site was passing extra unused trailing
arguments that were only ever tolerated by the old relaxed K&R
declaration). Fully resolved `func_1001123C`'s remaining reported
drift as a side effect.

**Important correction — `func_1001123C` itself was still ~12 bytes
short even after the above, and investigating why uncovered a real
mistake from an earlier round**: a *previous* session had rewritten
`func_1001123C`'s body from a version that called `func_100112BC(arg0,
1)` to a version that manipulates `tmp->unk0`/`tmp->unk4` directly
instaed, on the belief (documented at the time as "confirmed via direct
objdump") that target's real compiled code never calls
`func_100112BC` at this point. That belief was **wrong** — it was
almost certainly reached using the same pre-existing-drift-blind
`diff.py` comparison this round's `-S`-shift discovery fixes. With the
correctly shifted/aligned disassembly, target's real code at this
address **does** call `func_100112BC(a0, 1)` (`li a1,1` immediately
before the `jal`, using the original `a0` register untouched since
function entry), then conditionally does the `func_10017594` +
`tmp->unk8 = 0` cleanup based on its return value — and does **not**
touch `unk0`/`unk4` at all in this path. This is exactly the original,
pre-rewrite version. Restored it:
```c
void func_1001123C(u16 arg0) {
    struct120 *tmp = &D_800425E0[arg0 & 0xF];
    if ((tmp->unk8 != 0) && (tmp->unk0 == arg0)) {
        if (func_100112BC(arg0, 1) == 0) {
            func_10017594(tmp->unk8);
            tmp->unk8 = 0;
        }
    }
}
```
(keeping the `u16 arg0` narrowing, which was independently correct and
unrelated to this mistake). Rebuilt and confirmed:
`func_100112BC`'s reported drift **disappeared entirely** — fully
resolved. **Lesson, added to the standing discipline**: any
"confirmed via objdump" conclusion from before this session's `-S`-
shift / drift-alignment discovery should be treated as suspect if it
involved a function past an unresolved upstream drift point at the
time it was made, and should be re-verified with the corrected
technique before being trusted further. This is now the second
confirmed case (after this round's own `func_1000F91C` false lead,
caught before being applied) where the alignment bug could have caused
real damage — this one *did* ship as a real regression for at least
one prior round before being caught here.

Rebuilt clean after all three fixes (0 `cfe: Error`, 0 `Signal 11`, 0
CRLF regressions), verified via `find_drift.py`.

**Continuation point**: `func_100127D0`, `func_10012934`,
`func_10012E04`, `func_10015550` remain from the original list — same
file family, same corrected `-S`-shift discipline. Given the
`func_1001123C` finding above, when picking up any OLDER previously-
"resolved" or "closed" residual from before this round in this same
cluster, it would be worth a quick re-verification pass with the
corrected technique rather than assuming past conclusions still hold.

## Session log — entire original continuation list fully resolved (2026-09-08, later still)

Finished the list from the top of this session with two more real
fixes, both following the corrected `-S`-shift/dual-`objdump`
discipline:

**`func_10012718`** (`src/init_12560.c` — first fix this whole
investigation to land outside `init_EB00.c` itself, in a neighboring
file in the same cluster): its call to `func_100114D0` (still raw
`GLOBAL_ASM`, called with 9 args) passed `arg1->x_position`,
`arg1->y_position`, `arg1->z_position` (genuine `f32` fields)
completely uncast — same shape of bug as `func_10010720`/
`func_1000FA64` fixed earlier this round, but a different resolution:
`objdump` showed target doing `trunc.w.s`+`mfc1` with **no** follow-up
`sll`/`sra`-by-16 sign-extend, meaning the real parameter type is
`s32` (not `s16` — the other call sites of `func_100114D0` agree,
passing plain integer literals / `(s32)` casts, unlike
`func_1000FA64`'s callers which universally use `(s16)`). Added
`(s32)` casts on all three position args. Fully resolved
`func_100127D0`'s *and* `func_10012934`'s reported drift as side
effects (both disappeared from `find_drift.py` in one shot).

**`func_10012D80`** (`src/libultra/audio/init_128D0.c` — binary
exponentiation helper: `f32 func_10012D80(s32 arg0)` computes
`1.0309929847717285f ^ arg0` via square-and-multiply): `objdump`
showed target masking `arg0` with `andi a0,a0,0xff` **twice** — once
on entry, once again after each `>>1` shift inside the loop. Classic
`u8` narrow-type idiom. Fixed `s32 arg0` → `u8 arg0`. Fully resolved
**both** `func_10012E04`'s and `func_10015550`'s reported drift in one
shot (both disappeared from `find_drift.py`).

Rebuilt clean after each fix (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py`.

**Milestone**: `find_drift.py 0x10009000 0x10017100` (the full range
covering the entire wide cluster investigated across this whole
multi-round effort, starting from `init_8180.c` through
`init_EB00.c`, `init_12560.c`, and `init_128D0.c`) now reports **only
two entries**: `func_1000F9D4` (+12, a leftover from the still-closed
`func_1000F91C` register-allocation residual bleeding forward) and
`func_1000FA64` (+4, `func_1000F9D4`'s own small closed residual
bleeding forward). Every other point in the entire original
continuation list — `func_100107F8`, `func_100114D0`,
`func_1001123C`, `func_100112BC`, `func_10011FA0`, `func_100127D0`,
`func_10012934`, `func_10012E04`, `func_10015550` — is now fully
resolved. This closes out the "wide ~18-point drift cluster past
`init_8180.c`" investigation that spanned this whole multi-round
effort: it turned out to be almost entirely real, independent,
fixable bugs (mostly the narrow-parameter-type pattern, plus a few
missing-prototype-float-promotion and one genuine logic-restoration
case), NOT alignment amplification of the two closed `init_8180.c`
residuals as originally hypothesized, and NOT primarily unfixable IDO
heuristics either (only two small residuals — `func_1000F91C`'s
+12 and `func_1000F9D4`'s own +4 — remain genuinely closed).

**New adjacent cluster found, NOT yet investigated** (out of this
round's scope, flagged for the next continuation):
`python3 find_drift.py 0x10017100 0x10020000` shows a fresh,
independent drift cluster starting immediately after where this one
ends: `func_10017298` (-32), `func_10017B30` (-4), `func_10017C00`
(+4), `func_1001CEA4` (+16), `func_1001DA28` (-8), `func_1001E2A0`
(-24). Same file family region (`src/init_EB00.c`'s tail end and
whatever follows). **Recommended next continuation**: apply the exact
same discipline established this round — `find_drift.py` first,
check the function immediately *preceding* any reported point (not
just the named one) for the true cause, use `-S <shift>` or dual
`objdump -bbinary --adjust-vma=0x10000000` comparison rather than a
plain `diff.py` call whenever upstream drift is nonzero going in.

## Session log — extended cluster (0x10017100-0x10020000) fully resolved; non-address-named-symbol lesson (2026-09-08, later still)

Continued into the newly-discovered adjacent cluster from the previous
entry. **Important correction to that entry**: the first "drift point"
listed there, `func_10017298` (-32), was a false positive — an
artifact of running `find_drift.py` as a fresh separate invocation
starting at `0x10017100`, which resets its internal cumulative-delta
tracker to 0 even though real drift (-32, carried over from the
already-closed `func_1000F91C`/`func_1000F9D4` residuals) was already
present at that address. Always scan with a single continuous range
from `0x10009000` onward (or whatever the true start of tracking is)
rather than stitching together separately-invoked sub-ranges, or the
first entry of every sub-range will be bogus.

Four more real, independent fixes found and applied, all via the
`-S`-shift / dual-`objdump` discipline:

**`func_10017B04`** (`src/libultra/audio/init_17AF0.c`): `arg2` needed
`s32`→`u8` — target masks it with `andi a2,0xff` at entry before
storing into a `u8` struct field (`chanState[chan].unk17`). Resolved
`func_10017B30`'s and `func_10017C00`'s reported drift together (the
usual misattribution pattern — both are downstream, unrelated to the
real bug).

**`func_1001CBF0`** (`src/libultra/audio/init_1CBF0.c`): its call to
`func_150484A0` was being compiled as an implicit K&R call (double
promotion of the `f32` args, and the `f32` return value wrongly
reinterpreted through `mtc1`+`cvt.s.w` as if it were an `int` return)
even though `func_150484A0` **does** have a fully correct prototype in
`functions.h` (`f32 func_150484A0(f32, f32)`) — this file just never
includes `functions.h` in its include chain (only
`n_synthInternals.h`, which doesn't pull it in either). Added a local
forward declaration instead of including the whole `functions.h`, to
avoid any risk of unrelated symbol clashes in this SDK-audio-library
area. This is the same missing-prototype-across-file-boundary bug
category as `func_1000C530` from several rounds ago, just with the
prototype already existing elsewhere rather than needing to be
authored fresh. Fully resolved `func_1001CEA4`'s reported drift.

**`func_1001D9B0`** (`src/libultra/audio/init_1D900.c`): `arg0`
`s32`→`s16` (target sign-extends at entry, `sll`+`sra` by 16 — no
callers found in any `.c` file, so this couldn't be cross-checked
against a call site, but the target disassembly is unambiguous).
Resolved `func_1001DA28`'s reported drift.

**`func_1001DAE4`** (same file): two independent bugs found together:
1. `arg1` needed `s32`→`s16` (target reads only the low halfword of
   its stack-spilled slot via `lh`, rather than the full word via
   `lw` — same idiom as `func_1001D9B0` above, different flavor: this
   one shows up as a narrower *load* rather than an explicit
   mask/sign-extend instruction sequence, because the value is only
   ever read back from its own spill slot, never reused in a register).
2. Its call to `func_1001CF38` (which *does* have a correct prototype,
   `void func_1001CF38(void*, f32)`, elsewhere in `functions.h`) was
   passing `n_syn->outputRate` (an integer field) as a raw bit-pattern
   instead of being properly `int`-to-`float` converted, because — same
   root cause as the `func_150484A0` case above — this file doesn't
   see `func_1001CF38`'s prototype either. Added a second local forward
   declaration. Fully resolved `func_1001E2A0`'s reported drift.

**Methodology lesson, non-obvious and worth flagging strongly for any
future work on unnamed (non-`func_ADDR`) symbols**: `find_drift.py`'s
regex only tracks symbols whose name encodes their own expected
address (`func_XXXXXXXX` / `D_XXXXXXXX`). Real SDK/library functions
with hand-picked names (`n_alSynStartVoiceParams`, `__alCSeqNextDelta`,
`n_alSynAllocVoice`, `init_lpfilter`, etc.) are **invisible** to it —
their own individual drift never gets reported, only the *cumulative*
total shows up once tracking resumes at the next `func_ADDR`-named
symbol. This means a single printed drift entry can be hiding
several bytes' worth of *actual* drift spread across multiple
consecutive unnamed functions, and — critically — **the naive
assumption that the cumulative delta stays constant through an unnamed
stretch is not reliable**; it can change partway through with zero
warning from the tool. The only robust way to locate the true source
within an unnamed stretch is direct prologue-pattern matching: dump
current's own disassembly for the candidate function (`objdump -d
build/conker.us.elf --start-address=... --stop-address=...`), note its
distinctive prologue instruction sequence, then binary-search plausible
`-S` shift values against the raw target `.bin`
(`objdump -Dz -bbinary -EB -m mips:4300 --adjust-vma=0x10000000
--start-address=<current_actual+shift> ...`) until that exact
instruction sequence appears at the expected offset — a wrong shift
typically produces either a function *tail* (epilogue: `jr ra` /
`addiu sp,sp,+N` / trailing `nop`s) or unrelated garbage, both
obviously wrong once you know what a real prologue looks like, so this
converges fast in practice (2-3 tries) even with zero prior
information about the unnamed function's true size. This is how
`func_1001DAE4` was ultimately isolated as the true single-function
source of drift spanning across `func_1001DAE4` itself plus three
further unnamed functions (`__alCSeqNextDelta`, `n_alSynAllocVoice`,
`n_alSynStartVoiceParams`) that turned out, once correctly checked,
to already match perfectly.

Rebuilt clean after each fix (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py` (single continuous range
`0x10009000`-`0x10020000` throughout, per the correction above).

**Milestone**: `find_drift.py 0x10009000 0x10020000` now reports only
the same two long-closed residuals (`func_1000F9D4` +12,
`func_1000FA64` +4) — the entire `0x10009000`-`0x10020000` range,
covering both the original wide cluster AND this session's
newly-discovered extension, is now fully resolved except for those two
genuine IDO register-allocation heuristics. No further known
continuation point in this immediate area; a fresh `find_drift.py`
scan starting past `0x10020000` would be needed to find the next area
of interest, if any, whenever this investigation resumes.

## Session log — full segment sweep confirms 0x10009000-0x15000000 clean; new 0x15000000+ cluster found (2026-09-08, later still)

With the `init_EB00.c`-area cluster (and its extension) fully
resolved, swept `find_drift.py` across progressively larger ranges to
look for the next area of interest:

- `find_drift.py 0x10009000 0x10030000` → same 6 entries as before
  (the two closed residuals and their causal chain), nothing new.
- `find_drift.py 0x10009000 0x10080000` → identical, still just 6.
- `find_drift.py 0x10009000 0x10200000` → identical, still just 6.
- `find_drift.py 0x10009000 0x15000000` → **identical, still just 6**,
  across the entire main code segment (241 `func_ADDR`/`D_ADDR`-named
  symbols checked in that range, zero unexpected drift beyond the two
  closed residuals).

**This confirms the entire `0x10009000`-`0x15000000` primary code
segment is fully resolved** except for the two long-closed
`func_1000F91C`/`func_1000F9D4` IDO register-allocation residuals.
(Caveat, per the non-address-named-symbol lesson two entries above:
this only covers symbols that follow the `func_ADDR` naming
convention — a real, undiscovered bug hiding entirely inside one or
more hand-named SDK/library functions in this range, with no
`func_ADDR`-named neighbor ever reporting the accumulated drift,
remains theoretically possible but has no automated way to surface it
short of manually prologue-matching every hand-named function in a
~20,000-function range, which is not practical.)

**New, much larger cluster found**: `find_drift.py 0x15000000
0x16010000` (the `chunk0`/`src/game/*` code region — a completely
different, apparently never-swept-this-way area) returns **143 drift
entries**, spanning roughly `0x15001B8C` through `0x16001700` and
beyond. This is an order of magnitude larger than the cluster this
whole session's work has been resolving, and represents a substantial,
previously-uninvestigated body of work in a different part of the
codebase (`src/game/*.c` files rather than `src/init_*.c`/
`src/libultra/*`).

**Recommended next continuation** (a new investigation, not a
continuation of the `init_EB00.c` cluster): start with
`python3 find_drift.py 0x15000000 0x16010000` (or a narrower opening
sub-range like `0x15000000 0x15010000` to keep the list manageable),
and apply the exact same discipline established this whole session:
check the function immediately *preceding* any reported point first
(most drift is misattributed to the next-named symbol, not the actual
cause), use `-S <shift>` or dual `objdump -bbinary
--adjust-vma=0x10000000` comparison instead of a bare `diff.py` call,
and watch for hand-named (non-`func_ADDR`) functions hiding drift
invisibly — use direct prologue-pattern matching to isolate the true
source when that's suspected. Given the much larger scale here (143
vs. the ~18 points that took this whole multi-round session), budget
this as a substantially longer effort, likely spanning many further
rounds.

## Session log — starting the 0x15000000+ (.game/src/game/*) cluster (2026-09-08, new session)

Began the new, much larger (143-entry) cluster documented in the
previous entry. This region is linked very differently from the main
segment: the linker script (`build/conker.ld`) places `.game` at
`VMA 0x15000000 : AT(game_ROM_START)`, i.e. a genuine overlay whose
ROM (file) position is *not* `VMA - 0x10000000` like the main segment
— it's a separate, dynamically-computed link-time position. This
means `diff.py`'s default binary-diff mode (and the naive
`--adjust-vma=0x10000000` trick used for the main segment) do **not**
work for anything in this region; a different, new technique was
needed.

**New technique for this region**: read the `.game` section's real
ROM (LMA) position directly from the *current* build's own linked ELF
— `mips-linux-gnu-objdump -h build/conker.us.elf | grep -A1 '\.game'`
— which reports `VMA=0x15000000`, `LMA=<some value>`, `File
off=<some other value>`. The LMA is what matters: for the *raw*
target `.bin` (`conker.us.bin`, no ELF wrapper), a given VMA `V` in
this segment corresponds to **file offset `LMA + (V - 0x15000000)`**.
Empirically calibrated this session: `LMA = 0x0002d4b0` (found by
trial: the raw `objdump -h` LMA column read `0x0002d4a0`, but
prologue-pattern matching against several known-good current
functions consistently required `+0x10` more — i.e. the true anchor
is `0x2d4a0 + 0x10 = 0x2d4b0`, likely because the raw LMA column
itself already has some small fixed header/alignment offset baked in
that isn't relevant to matching a raw `.bin` byte-for-byte; the
`+0x10`-corrected constant matched cleanly and consistently across
every fix this round). **Formula, use this for all future work in
0x15000000-range functions**:
```
target_file_offset(V) = 0x0002d4b0 + (V - 0x15000000)
```
then: `mips-linux-gnu-objdump -Dz -bbinary -EB -m mips:4300
--start-address=<file_offset> --stop-address=<file_offset+size>
conker.us.bin` (no `--adjust-vma` needed/wanted here — the addresses
printed will be raw file offsets, not VMAs, which is fine for visual
comparison purposes). As always with this whole investigation:
compute `<file_offset>` using the function's **declared** VMA (its own
name-encoded address) plus whatever cumulative drift shift is
currently active — same discipline as the main segment's `-S` shift,
just implemented by hand via the formula above since `diff.py -S`
itself can't reach this segment's addressing at all.

Six real bugs found and fixed, all in `src/game_2DF70.c` and
`src/game_36680.c`:

**`func_15001B5C`, `func_15001B8C`** (`src/game_2DF70.c`): both write
through the global `u8 *D_800B0DE0` byte-stream pointer. `arg0` needed
`s32`→`u8` (target masks with `andi a0,0xff`) and `s32`→`u16` (target
masks with `andi a0,0xffff`) respectively — same narrow-parameter-type
pattern from the main segment, just newly discovered here.

**`func_15009BD0`, `func_15009C7C`, `func_15009F74`**
(`src/game_36680.c`, three near-identical sibling functions): all
three call `func_15187EC0(idx, floatThreshold, ..., 220, 220, 255)`
with a **float literal** (`0.0f` or `0.1f`) as the second argument,
but `func_15187EC0`'s only visible declaration from this file is
`functions.h`'s fully relaxed `s32 func_15187EC0();` — causing K&R
default float→double promotion at the call site, which target's real
compiled code does not do (target passes the float's raw bit pattern
through the plain integer arg register, matching a callee that
actually treats it as an `s32`/similar, not a promoted double).

This one took real iteration to solve *cleanly*:
1. First tried a **local full-prototype re-declaration**
   (`s32 func_15187EC0(s32, f32, ...);`) in `game_36680.c`, the same
   technique used successfully in the previous session's round for
   `func_150484A0`/`func_1001CF38`. **This triggered a genuine IDO
   compiler bug/limitation**, confirmed via an isolated
   minimal-reproduction test outside the real build: giving IDO5.3's
   `cc` BOTH a K&R-relaxed declaration (`s32 f();`, from
   `functions.h`, already visible) AND a later full-prototype
   declaration for the *same* symbol in the *same* translation unit
   produces a garbled, hard-to-read `cfe: Error` (two real diagnostic
   messages appear to share/corrupt a static text buffer inside this
   ~1990s compiler — reproduced identically both inside the real
   parallel build and in complete single-file isolation, so this is
   not a parallel-build output-interleaving artifact, it's a real bug
   in the compiler itself). Removing the redundant K&R declaration
   (i.e. giving *only* the full prototype, none at all otherwise) compiles
   cleanly — but that's not an option here since `functions.h`'s
   relaxed declaration is unavoidably visible already. **New lesson,
   distinct from (and more specific than) the general
   missing-prototype pattern**: if a function already has *any*
   visible declaration (even a fully-relaxed K&R one) in the current
   translation unit, do NOT attempt to locally re-declare it with a
   fuller prototype — IDO5.3 cannot reliably handle that combination.
   Reserve the local-forward-declaration technique for cases (like the
   earlier `func_150484A0`/`func_1001CF38` session) where the file has
   *zero* prior visible declaration of the target function.
2. Tried casting through a function-pointer typedef instead
   (`((func_15187EC0_t) func_15187EC0)(...)`), which compiles fine and
   fixes the promotion bug — but produces an **indirect call**
   (`lui`/`addiu` to materialize the address into `t9`, then `jalr
   t9`) instead of target's direct `jal`, costing 2 extra instructions
   per call site. Went from -8/-8/-8 (wrong promotion) down to net
   +8/+8/+8ish after this change — an improvement in *correctness* but
   not a byte-perfect fix, and worse, actually *masked* the real size
   discrepancy since the extra indirect-call cost happened to roughly
   cancel the promotion-removal savings in one case, making it easy to
   misjudge as "done" from the byte-count alone without checking the
   actual instruction stream.
3. Tried a `union`/pointer-based bit-reinterpretation through a named
   local `f32 threshold; threshold = 0.0f; *(s32*)&threshold` — this
   avoids the indirect-call problem (calls the plain, unmodified,
   already-K&R-declared symbol directly) and produces the *correct*
   value, but taking `&threshold` forces IDO to spill the local to a
   real stack slot, adding a `swc1`+reload round-trip that target
   (which computes the value via FP registers and moves it directly
   with `mtc1`+`mfc1`, no memory involved) doesn't have — a genuine,
   unavoidable-in-plain-C 4-byte/1-instruction residual for the `0.0f`
   cases, structurally the same kind of "C language can't express a
   register-only bitcast, only compiler intrinsics can" limitation as
   other closed residuals this investigation has hit.
4. **Final, fully clean fix**: dumped target's real disassembly for
   the `0.1f` call site specifically and found it does **no
   floating-point instructions at all** for that argument — just
   `lui a1,0x3dcc; ori a1,a1,0xcccd`, directly embedding 0.1f's
   raw IEEE-754 bit pattern (`0x3DCCCCCD`) as a plain 32-bit integer
   constant, i.e. target's compiler *constant-folded* the
   bit-reinterpretation entirely at compile time because the source
   value was a known compile-time constant. Replacing the whole
   `f32 threshold = X; *(s32*)&threshold` dance with simply passing
   the **precomputed IEEE-754 hex literal directly**
   (`func_15187EC0(0, 0x00000000, ...)` for `0.0f`,
   `func_15187EC0(1, 0x3DCCCCCD, ...)` for `0.1f`) compiles to the
   exact same bit pattern via the *same* already-existing K&R
   `s32 func_15187EC0();` declaration (an `int` literal argument needs
   no promotion at all, sidestepping the whole problem), with **zero
   extra instructions** — this is what target's own source almost
   certainly does. Confirmed via rebuild+`find_drift.py`: all three
   functions now match **exactly**, zero residual.

**New general lesson for the rest of this investigation**: when a
"missing prototype causes float→double promotion" bug involves a
**compile-time-constant** float literal (not a runtime-computed
value), don't reach for a prototype fix or a C-level bit-reinterpret
trick at all — just precompute the literal's raw IEEE-754 bit pattern
by hand and pass it as a plain hex integer literal. This sidesteps the
whole promotion issue via the existing (even fully relaxed/K&R)
declaration and, unlike every C-level workaround tried above, produces
genuinely byte-identical output with no residual, matching what
target's own compiler did via ordinary constant folding. Only fall
back to a real prototype fix (and only when the file has *no* prior
visible declaration of the callee at all, per the lesson above) when
the float argument is a genuine runtime-computed value that can't be
reduced to a compile-time constant.

Rebuilt clean after all fixes (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py 0x15000000 0x16010000`
(single continuous range throughout, per the earlier
non-address-named-symbol/range-continuity lesson). All entries from
`func_15001B8C` through `func_1500A028` are now fully resolved.

**Continuation point**: next entry is `func_1501748C` (-64 bytes, a
substantial one — likely either several stacked narrow-type bugs or
one bigger structural issue), followed by a long tail of further
entries (`func_1501905C`, `func_15019130`, `func_15042D94`,
`func_1504332C`, `func_15043384`, `func_15043D90`, `func_15043E68`,
`func_15043EC8`, `func_15043FF0`, `func_150442C0`, `func_150486B8`,
`func_15048720`, `func_15048864`, `func_150488C8`, `func_15048C30`,
`func_150490A8`, `func_15049260`, `func_1504A620`, `func_1504BC38`,
and many more beyond — this cluster is large, budget accordingly).
Continue with the `target_file_offset(V) = 0x0002d4b0 + (V -
0x15000000)` formula for this whole segment, the standard
check-the-preceding-function discipline, and the new
compile-time-constant-literal lesson above whenever a float-promotion
bug is found.

## Session log — continued sweep through the 0x15000000+ cluster (2026-09-08, later still)

Continued down the list from the previous entry with the established
`target_file_offset(V) = 0x0002d4b0 + (V - 0x15000000)` discipline.
Several more real fixes, one important new lesson, and one residual
left open for a future session.

**`func_15017300`** (`src/game_447B0.c`): `arg1` (a 16-channel
bitmask) needed `s32`→`s16` (target sign-extends both `arg0` and
`arg1` at entry; current was only doing `arg0` via its `tmp`
variable). Also added explicit `(s16)` casts on the loop variable `i`
at its four `func_15085710(...)` call sites, matching the s16-cast
convention already used at several *other* call sites of that function
elsewhere in the codebase. This is a **partial** fix — recovered 16 of
64 bytes, but a `-48` residual remains: target recomputes the `(s16)i`
sign-extension fresh before *every* one of the 4 calls, while IDO's
optimizer here performs common-subexpression-elimination and reuses
the first computed value for the later 3 calls. Tried (and reverted)
declaring `i` itself as `s16` — this didn't reduce total drift at all,
it just relocated 4 bytes of it into an unrelated neighboring function
(`func_150175E0`), confirming it's the same CSE choice, not a type
issue. Left open; likely needs a source shape neither of these two
attempts found (in the same "closed" family as `func_1000F91C`'s
earlier register-allocation residual, though not yet formally closed
since fewer restructuring variants have been tried).

**`func_15018F80`**: `arg0` `s32`→`s16` (entry sign-extend idiom).
Fully resolved `func_1501905C`'s reported drift.

**`func_1501905C`** (via its call to `func_1000D758`): another
missing-prototype float-promotion case, `functions.h` only has the
relaxed `void func_1000D758();` and this file already sees it (so a
local full-prototype redeclaration would hit the known IDO5.3
K&R-redeclaration bug). Used the function-pointer-cast workaround
(indirect call, minor overhead) since this one is a genuine
runtime-computed call (not a compile-time constant) with no simpler
option — only partial byte-match improvement, but the actual promotion
correctness bug is fixed.

**`func_15042D78`, `func_1504332C`**: straightforward `u8`-typed
parameter fixes (`D_800CBD74`, `D_800CBD60`-`63` are all genuinely
`u8` fields) — both fully resolved.

**`func_150432FC`**: `s16`-typed parameters (`D_800CBD70`/`72` are
`s16` fields) — fully resolved, including 2 cross-file call sites
that had extra unused trailing arguments trimmed by
`fix_cross_file_arg_counts.py`.

**`func_15043D90`, `func_15043E68`, `func_15043F6C`** (`src/game_71240.c`):
three sibling functions all calling `func_150A8050`/`func_150A9B0C`
(both still raw `GLOBAL_ASM`, only relaxed K&R declarations visible)
with **runtime** `f32` parameter values (not compile-time constants).
Target passes these as raw bit patterns through plain integer
registers (`mfc1` directly from the float register, no `cvt.d.s`) —
same shape as the earlier `func_15187EC0` compile-time-constant case,
but this time the values are genuine function *parameters*, not
locals. **New, generally-useful discovery**: bit-reinterpreting an
existing function *parameter* directly (`*(s32 *) &arg1`, no new local
variable) does **not** incur the stack-spill penalty that plagued the
earlier `f32 threshold; threshold = X; *(s32*)&threshold` pattern for
locals — parameters are already materialized/addressable by the
calling convention, so IDO doesn't need an extra dedicated spill slot
for them. This produced an **exact, zero-residual match** for all
three functions in one shot — a cleaner, more broadly applicable
technique than either the pointer-cast-indirect-call or the
named-local-bitcast workarounds used previously. **Rule of thumb
going forward**: for a missing-prototype float-promotion bug, if the
value being passed is already a function parameter (not a freshly
computed/local value), prefer `*(s32*)&param` directly on the
parameter over introducing a new local — check the resulting diff to
confirm zero residual before assuming it's clean.

**`func_15048664`, `func_150486B8`** (`src/game/done/game_75A90.c` —
despite the `done/` directory name, these still had real residuals):
both needed `arg0` `s32`→`s16` (same sign-extend-at-entry idiom). Both
fully resolved.

**Investigated but left open**: `func_150487E0` (`src/game_75C90.c`)
has a `+8`-byte residual from `f32 temp_f14 = (D_80098E00[(s32)
(fabsf(arg0) * D_80099000)] * D_80099004) / 65536.0f;` — current
compiles this with a redundant `cvt.d.s`+`cvt.s.d` round-trip on
`arg0` immediately at function entry, before any visible use, that
target's equivalent (`abs.s $f0,$f12` directly, no conversion) doesn't
have. Tried splitting `fabsf(arg0)` into its own separate local
statement first — no change in the generated code, reverted. The root
cause isn't yet understood (target never calls anything for the
`fabs` — both versions resolve to hardware `abs.s` eventually, so it
isn't a missing-fabsf-intrinsic issue; something about how IDO
evaluates this specific composite array-index expression forces an
early, wasted double round-trip on `arg0` specifically). Worth a fresh
look in a future session, possibly by feeding the target disassembly
through `mips_to_c` to see what source shape it infers.

Rebuilt clean after every fix (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py 0x15000000 0x16010000`
throughout.

**Continuation point**: `func_150488C8` (a raw-asm-preceded point,
check whatever real C function precedes it), `func_15048C30`,
`func_150490A8`, `func_15049260`, `func_1504A620`, `func_1504BC38`,
`func_1504CA60`, `func_15052F58`, and many more beyond — this cluster
remains large. Same discipline throughout: check the function
immediately preceding any reported point first, use the
`target_file_offset` formula for this segment (recalibrate via
prologue-pattern matching if a comparison looks misaligned — the fixed
LMA constant has been observed to drift slightly deeper into the
segment, most likely from `SUBALIGN(16)` padding differences
compounding at object-file boundaries between current and target), and
prefer the parameter-bit-reinterpretation technique over
pointer-cast-indirect-call for any further missing-prototype
float-promotion bugs involving runtime parameter values.

## Session log — further sweep, key discovery about per-function calling conventions (2026-09-08, later still)

Continued down the list with the same discipline. Six more real fixes,
one important methodology correction, and one deeper investigation
flagged for a future session.

**`func_1504C9E4`** (`src/game_77AD0.c`): `arg1` `s32`→`s8` (target
sign-extends by 24 bits, not the usual 16 — confirming an `s8`, not
`s16`), `arg2` `s32`→`u8` (0xff mask). Fully resolved.

**`func_15052EF0`, func_15055B0C's `func_1505E650` call**: same
missing-prototype float-promotion pattern as the previous round's
`func_1504BB88` fix — replaced float literals with their raw
IEEE-754 hex bit patterns. `func_1505E650` now has this fix applied
at 4 of its 6 call sites in this file (2 remain as dead/commented-out
code, not touched).

**`func_15055A2C`** (misattributed to `func_15055B0C`, the usual
pattern): its call to `func_10010F88` forwards 3 float parameters.
**Important correction to the established technique**: tried the
parameter-bitcast approach (`*(s32*)&arg1`) that worked cleanly for
`func_150A8050`/`func_150A9B0C` in the previous round — this made
things *worse* here (+8 bytes), not better. Direct `objdump`
comparison revealed why: `func_10010F88` doesn't want the *bit
pattern* preserved at all — target genuinely **truncates** these
float arguments to integers (`trunc.w.s` + `mfc1`, i.e. C's `(s32)`
cast), unlike `func_1505E650`/`func_150A8050` which want the *raw
bits* preserved. Switched to plain `(s32)` casts — clean, exact
match. **Lesson reinforced yet again**: never assume the same
missing-prototype workaround applies uniformly across different
unprototyped functions — each one's real parameter semantics must be
independently confirmed via `objdump`, since the visible symptom
(extra `cvt.d.s` instructions) is identical whether the fix should be
"preserve bits" or "truncate to int." Also found and fixed a
*second*, independent bug in the same function: `func_10010F88`'s 3rd
argument (`random_u32() % 500U`) needed an explicit `(s16)` cast
(target sign-extends it). Fully resolved.

**`func_15058F24`** (`src/game_83300.c`, within the large
`func_15059140`): same `func_1505E650`-style pattern — its `1.0f`
compile-time-constant 3rd argument replaced with `0x3F800000`.
Partial improvement (+72 → +64 residual) — this function has
*multiple* independent bugs stacked together (see below), this fixes
only one.

**Investigated, NOT fixed — flagged for a dedicated future
session**: `func_15059140` (`src/game_83300.c`) has at least two more
distinct issues found via direct `objdump` comparison but not
resolved this round:
1. Its call `func_15058898(arg0, arg0->old_y_position)` — target
   reads the second argument via `lbu` (an 8-bit unsigned byte load)
   from struct offset **0x3E78** (15992 decimal), but
   `old_y_position` is a completely different `f32` field at offset
   **0x30**. This means the current C source is very likely
   referencing the **wrong struct field entirely** — not a
   type/promotion bug at all, a genuine logic error. Properly fixing
   this requires identifying what real field (or discovering an
   as-yet-unnamed one) exists at offset 0x3E78 in `struct127` — likely
   a substantial struct-archaeology task given how large this struct
   is (0x3E78+ bytes), out of scope for a quick fix.
2. `func_15058F24`'s first (non-literal) argument
   (`arg0->unkB0 * D_800994A8`) is *also* still being double-promoted
   — same missing-prototype issue, but this one is a genuine
   runtime-computed expression (not addressable, not a compile-time
   constant), so neither the hex-literal trick nor the
   parameter-bitcast trick directly applies; would need either a
   `(s32)`-truncation check (per the `func_10010F88` lesson above —
   confirm via `objdump` whether target wants truncation or bit
   preservation here specifically) or acceptance as a residual.

Rebuilt clean after every fix (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py 0x15000000 0x16010000`
throughout.

**Continuation point**: `func_150562FC` (+8), the remainder of
`func_15059140`'s bugs (flagged above), `func_15059444`,
`func_1504A620`/`tanf` region (flagged in the previous entry as
needing real `sinf`/`cosf` implementations — substantial separate
task), and the long tail beyond. This cluster is still large; continue
with the same discipline (check the preceding function first, use the
`target_file_offset(V) = 0x0002d4b0 + (V - 0x15000000)` formula,
verify each missing-prototype fix's *real* semantics via direct
`objdump` comparison rather than assuming the previous round's
technique applies).

## Session log — game_83300.c sweep: a major global-variable fix and two real logic bugs (2026-09-08, later still)

Continued the sweep into `src/game_83300.c`. Eight more fixes this
round, including one significant global-variable correctness fix and
two genuine missing-`return` logic bugs (not type/promotion issues).

**`gCurrentObjectIndex`** (`include/variables.h`): was declared
`extern s32`, but target reads it via `lbu` (byte-width) at its
confirmed real address (`0x800c3e78`, matched exactly against
`build/conker.us.map`). Multiple existing call sites across the
codebase (`game_20AE20.c`, `game_215960.c`, `game_49D30.c`) already
had **redundant `(s8)` casts on assignment** to it — a strong signal
that a prior investigation already recognized this narrow-type issue
but never fixed the underlying declaration. Changed it to `extern s8
gCurrentObjectIndex;`. This is used across 18 files, so the blast
radius is wide; confirmed correct via `objdump` (every read site's
load width changed from `lw` to `lb`) and a full clean rebuild with
zero errors. **Note**: target's own loads use `lbu` (unsigned) in
several places we've checked, while our `s8` declaration produces
signed `lb` — worth double-checking in a future session whether `u8`
would be more accurate, though this hasn't caused any confirmed byte
mismatch since load-instruction width (not signedness) is what
`find_drift.py` cares about.

**`func_150593C4`**: `arg2` is a genuine `f32` parameter forwarded to
`func_1505A184` (still raw asm, relaxed K&R declaration) — target
passes its raw bits directly via register (`mfc1`, no `cvt.d.s`).
Applied the parameter-bitcast technique (`*(s32*)&arg2`). Fully
resolved `func_15059444`'s reported drift as a side effect.

**`func_1505959C`**: `phi_v0` (a small local holding only
enum-like constants 6/9/10/12/26/27) narrowed `s32`→`u8`, matching
target's `andi a0,0xff` before `func_15083E0C` calls. Fully resolved
`func_150597FC`'s reported drift.

**Two more `func_1505E650` float-literal-promotion instances**
(`func_1505959C`, and the call inside it flagged separately) — same
hex-bit-pattern fix as established this session; both landed at the
same "closest achievable" `-4`/`-8` residual already documented for
`func_1504BB88`/`func_15048B10` (target routes a literal `0.0f`
through float registers where a plain int move would produce
identical bits — not reachable via any C-level literal choice tried
so far).

**Two genuine logic bugs, not type bugs** (`func_1505A6F8`,
`func_1505A72C` — 2D and 3D distance-calculation helpers
respectively): both compute squared coordinate differences (`x *= x`,
etc.) but were **missing their final `return sqrtf(...)` statement
entirely**. Confirmed via `objdump` — target's last two instructions
are `sqrt.s $f0,$f0` then `jr ra`, with nothing resembling the
"compute and discard" current behavior. Added
`return sqrtf(x + z);` and `return sqrtf((x + z) + y);` respectively
(order confirmed from the exact `add.s` sequence in target's
disassembly). Both fully resolved — a good reminder that not every
residual in this investigation is a type/calling-convention issue;
some are real, first-class logic bugs from an earlier
auto-decompilation pass that simply dropped the return.

**`func_1505D2B8`**: `arg1` `s32`→`u8` (target masks with
`andi a2,0xff` at entry, used as an index into `D_8009A6D8[]`). Fully
resolved.

Rebuilt clean after every fix (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py 0x15000000 0x16010000`
throughout. Cluster is down to 118 entries (from 143 when this segment
investigation began, 123 at the start of this round).

**Continuation point**: `func_150562FC` (a `fabsf`-pattern residual,
already investigated and closed per the earlier entry — skip),
`func_150593C4`'s remaining `+64` residual (documented several entries
back: a likely wrong-struct-field-reference bug at offset `0x3E78`
plus a second promotion issue on a non-addressable runtime
expression — needs dedicated struct archaeology), `func_15060B70`,
`func_15060BA4`, `func_15063390`, and the long tail beyond. Continue
with the same discipline: check the preceding function first, use
`target_file_offset(V) = 0x0002d4b0 + (V - 0x15000000)`, verify each
missing-prototype fix's real semantics via direct `objdump` comparison
(preserve-bits vs. truncate-to-int are both real patterns seen this
session, function-dependent), and don't assume every residual is a
promotion bug — check for missing `return` statements and outright
wrong field/variable references too.

## Session log — batch-fixing the recurring func_1505E650 pattern across game_981E0.c (2026-09-08, later still)

Continued the sweep. `func_1505E650`'s missing-prototype float-
promotion bug turned out to be *extremely* common throughout
`src/game_981E0.c` specifically (an animation/state-change dispatch
file with dozens of near-identical one-line wrapper functions). Rather
than rediscovering each one individually via `find_drift.py`, grepped
the whole file for `func_1505E650(...)` calls containing float
literals and fixed all ~19 of them in one pass:

- Pure compile-time-constant cases: replaced float literals with their
  precomputed IEEE-754 hex bit patterns (the by-now well-established
  fix for this exact function).
- Cases passing a genuine runtime value (a function parameter, a
  struct field `gCurrentObject->animation_speed`, a global variable
  `D_800D1878`): applied the parameter/field-bitcast technique
  (`*(s32*)&expr`) instead, since these are all directly addressable.
- Found and fixed a **second, independent** bug hiding under the same
  calls: three sites passing `gCurrentObject->unk84.uh + 1` as the
  *second* argument were missing a `(u16)` cast (target masks with
  `andi a1,0xffff`) — this is unrelated to the float-promotion issue
  and was only found because the residual at those specific sites
  (`-12`) was larger than the standard `-4` "closest achievable" floor
  established for this call pattern, prompting a closer look.
- One more distinct instance found via the sweep:
  `func_150716EC`'s call to a *different* unprototyped function
  (`func_151D5404`) had the same float-literal-promotion shape;
  fixed the same way.

**Result**: every one of these ~20 call sites now sits at either an
exact match or the same small `-4`/`-8` "closest achievable" residual
already documented (target routes a literal `0.0f` through float
registers in a way no C-level literal choice reproduces exactly).
Net effect: cluster count dropped from 118 to 114, but — as with the
earlier `game_75FC0.c`/`game_77AD0.c` rounds — the entry-count delta
understates the real improvement, since most of these went from large
double-digit-byte discrepancies down to the same tiny residual rather
than disappearing outright.

**Lesson for future rounds**: when a specific unprototyped function
(`func_1505E650` here) is found to be buggy at one call site, it's
worth grepping the whole codebase for *all* its call sites with float
literals up front, rather than rediscovering each one individually
through the slower `find_drift.py`-driven loop — this function alone
had calls scattered across at least 7 different files
(`game_11FF10.c`, `game_20AE20.c`, `game_49D30.c`, `game_50D80.c`,
`game_90840.c`, `game_DE5A0.c`, plus `game_981E0.c` fixed this round).
The ones in those other 6 files are **not yet verified** against
`find_drift.py` (some may be outside this segment's current sweep
range, or already matching) — don't blindly batch-fix them without
confirming via the drift tool first, since some of those call sites
mix in non-addressable runtime expressions (e.g.
`src/game/game_50D80.c:706` passes a literal `0.0f` as the very
*first* argument, an unusual shape worth double-checking before
assuming the same fix applies) that need individual verification.

**Investigated, not fixed**: `func_1506F8F0`
(`src/game_981E0.c:894`) calls `func_150E2EA4`, which — unlike every
other case fixed this whole investigation — **already has a full,
correct prototype** in `functions.h` (all `f32` parameters properly
typed). Its `+8` residual is therefore *not* a missing-prototype
promotion bug; direct `objdump` comparison shows a genuine
instruction-scheduling/register-allocation difference (reordered
`swc1`/`mtc1`/`cvt.s.w` sequences) in how the expression
`(random_float() * 10.0f) + 40.0f` gets evaluated relative to the
surrounding argument setup. No clear single-line fix found; likely in
the same family as other closed IDO-scheduling residuals from earlier
in this investigation. Left as-is.

Rebuilt clean after every fix (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py 0x15000000 0x16010000`
throughout.

**Continuation point**: `func_1506F8F0`'s scheduling residual (flagged
above, likely not worth chasing further), `func_1506FA90`,
`func_1506FB60` (both showing the same `+8` — worth checking whether
they share `func_1506F8F0`'s pattern or are independent),
`func_15071544`, `func_150718E4`, and the long tail beyond in
`game_981E0.c` and whatever files follow it in this segment. Also
worth a dedicated pass through the other 6 files with confirmed-but-
unverified `func_1505E650` float-literal calls listed above, checked
individually against `find_drift.py` rather than blindly batch-fixed.

## Session log — random_float() missing-prototype bug, and closing out func_1513C350's wrapper family (2026-09-08, later still)

Revisited `func_1506F8F0`'s "+8 scheduling residual" flagged as
unresolved at the end of the last round, and found the real cause:
this round's diagnosis of "genuine IDO instruction-scheduling
difference" was **wrong**. It's actually the *same* missing-prototype
family bug as everywhere else this session, just manifesting on a
function's **return value** instead of an argument.

**`random_float()`** is a real `f32`-returning function, but has no
visible declaration in `src/game_981E0.c` — no local forward decl, and
nothing in `functions.h` either. IDO's K&R rules therefore default it
to `int random_float()`. Every call site that used its result in a
float expression got an extra `mtc1 v0,$fN` + `cvt.s.w` to convert the
(wrongly-typed) integer return value, and the multiply/add used the
converted register instead of `$f0` directly — costing exactly 8 bytes
per call site and producing visibly different code (confirmed via
direct `objdump` comparison against target, which uses `$f0` straight
away with no conversion).

The fix pattern already exists **~90 times** across `src/game/*.c`:
a local `f32 random_float();  /* extern */` declaration in each file
that calls it. `game_981E0.c` (and `src/game_16EE20.c`,
`src/game_18D770.c`, `src/game_2062D0.c`, found via a codebase-wide
sweep for the same missing-declaration pattern) were simply missing
this declaration. Added it to all 4. This retroactively fixed
`func_1506F8F0`/`func_1506F9C0`/`func_1506FA90` (all three now exact)
plus 6 more call sites across the other 3 files. Cluster dropped from
114 to 106.

**Lesson**: before writing off a residual as "genuine IDO scheduling
difference," check whether *every* callee involved — including
plain-looking utility calls like `random_float()` — actually has a
visible prototype in the file. A wrong-register-class return value
looks superficially like a scheduling reorder (extra float-register
shuffling) but is really the same missing-prototype family bug applied
to a return type instead of a parameter type.

**Also fixed**: `src/game_169510.c`'s `func_1513C350` wrapper family
(`func_1513C4EC`/`5B0`/`650`/`73C`/`804`). These all forward genuine
`f32` parameters to `func_1513E13C`/`func_1513E2AC`, both still raw
asm with only relaxed K&R prototypes visible via `functions.h` (a
commented-out `NON-MATCHING` prototype at line 417 confirms the real
signature is all-`f32`). Applied the parameter-bitcast technique
(`*(s32*)&argN`) to every forwarded float argument across all 5 call
sites. `func_1513C73C` and `func_1513C804` are now exact matches;
`func_1513C5B0`/`650`/`8D4` dropped from `+28`/`+28`/`+16` residuals to
a much smaller `-8` each — direct `objdump` comparison shows the
remaining gap is target masking+swapping its `u8 arg2`/`arg3` register
order (`andi a2,0xff` / `andi a3,0xff` then a register swap) before
forwarding to `func_1513C350`, which doesn't correspond to any
straightforward source-level change; left as a small residual rather
than chasing further.

Cluster is down to **104 entries** (from 114 at the start of this
round, 143 when the `0x15000000+` segment investigation began).

Also did a systematic codebase-wide sweep for OTHER `f32`-returning
functions that use this same per-file `f32 NAME(); /* extern */`
pattern (18 distinct names found), checking every caller in the
segment for a missing declaration. Found and ruled out 2 false leads:
`func_150489B0` in `game_75E60.c` is missing the declaration too, but
already produces byte-exact code as-is (adding the declaration would
risk regressing it, so left alone — not every missing declaration is
actually causing a mismatch); `func_150497E0` in `game_20AE20.c`/
`game_49D30.c` looked missing by a narrow regex but both files already
carry a *fuller* (if mutually inconsistent) prototype, so it's not
this bug at all.

**New observation, not yet chased down**: several entries near
`func_1504A620` (`src/game_77AD0.c`) and `func_15049260`
(`src/game_76710.c`) show real introduced deltas (-48, -12) at
functions that are themselves **still raw `GLOBAL_ASM` blocks**, not
C code. Since `asm_processor.py`'s placeholder mechanism should make
raw-asm blocks byte-exact by construction, a drift "introduced" at one
of these is almost certainly mis-attributed further back — but tracing
it hit only more raw-asm blocks before reaching real C code
(`func_150490A8`, `src/game_75FC0.c:153`), which itself only shows a
small `+4`. Possible this is a `.game`-segment file-offset-formula
calibration artifact this deep into the segment (per the standing
caveat about needing prologue-byte recalibration for functions far
from the segment start) rather than a real bug — worth re-verifying
with fresh prologue-byte matching before investigating further, rather
than assuming a C-level fix applies.

Rebuilt clean after every fix (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py 0x15000000 0x16010000`
throughout.

**Continuation point**: re-calibrate the `.game` segment file-offset
formula via fresh prologue-byte matching around `0x1504xxxx`-
`0x1505xxxx` before trusting the `func_1504A620`/`func_15049260`
raw-asm-adjacent drift readings above. Then continue the general sweep
from `func_1504BC38` onward (`-4`), `func_15052F58`, `func_15054A0C`,
`func_15055B64`, `func_150562FC` (`+8`, already-known `fabsf` pattern —
skip), `func_150593C4`'s remaining struct-field-offset bug (documented
several rounds back, still unresolved), and the long tail through
`func_1513EDE4`/`EE14`/`F4E4`/`F6C0` and beyond, which have not been
individually investigated yet this round.

## Session log — new bug class: narrow-typed parameters not masked at entry (2026-09-08, later still)

Investigated the standing "raw-asm-adjacent drift might be a formula
calibration artifact" open question first. Traced `func_15049260`'s
-12 byte "introduced" reading (misattributed by `find_drift.py` to the
symbol *after* the real gap, as always) back to `func_150491EC` in
`src/game_75FC0.c` — confirmed via direct `objdump` comparison that
this function's *body* is byte-identical to target, but target has 16
bytes of extra `nop` padding after it that our build doesn't produce.
`func_150491EC` is the last function in its source file, i.e. this is
an object-file-boundary padding artifact (`SUBALIGN(16)`-adjacent, per
the standing caveat), not a source-level bug — confirmed not worth
chasing, left as-is. Skipped the rest of the raw-asm-adjacent entries
in that immediate area for the same reason (real code, but the
mismatch traces to inter-object padding rather than anything
fixable at the C level).

**New, more productive discovery**: a bug class not seen before this
session — parameters typed too wide (`s32`) where target's real type
is `u8`/`s8`/`s16`, confirmed via a consistent tell: target masks the
argument register with `andi reg,0xff` (or loads it with
`lbu`/`lh`/`lb` instead of `lw`) immediately at function entry, before
using it. This shifts BOTH the instruction selection (extra `andi`/
narrower load) AND the local stack-frame layout (since narrower
incoming register spills take less implied width in the calling
convention's own reasoning, changing subsequent stack offsets) —
producing much larger residuals (12-16 bytes) than the pure
float-promotion bugs from earlier rounds. Distinguish this from a
missing-prototype bug: this is a *declared*, prototyped function whose
parameter type itself is simply too wide, not a missing/relaxed
declaration issue.

Found and fixed **7 instances**, all in `src/game_18D770.c` (a big
overlay file with many small "spawn effect" wrapper functions sharing
a couple of common call shapes into `func_1516037C`/`func_151602C0`):

- `func_15163604`: `arg1`→`u8`, plus `arg2`→`s8`, `arg3`→`s16`,
  `arg4`→`s8` (all three matched `Header` struct's real field types
  exactly — `s8 unk0, s8 unk1, s16 unk2, s8 unk4`). Fully resolved a
  `-16` residual.
- `func_151643A8`: `arg2`→`u8` (compared against 64/65). Fully
  resolved a `-16` residual.
- `func_151639D0` and `func_15163A18`: `arg2`→`u8` (compared against
  0x27/0x28) in both — same shape, found together. Fully resolved
  (cleared a downstream `-12` on `func_15163A60` too).
- `func_15163A60`: `arg0`→`u8`.
- `func_15161334` and `func_15161494`: `arg1`→`u8` in both — same
  "spawn wrapper" call shape forwarding into `func_1516037C`'s 4th
  parameter.
- `func_151615F8`: `arg2`→`u8` (0 <= arg2 < 9 range check, loaded via
  `lbu` in target vs `lw` in ours).

All confirmed via direct `objdump` comparison before editing (never
applied blindly), all called only with literal integer constants from
`src/game_36680.c` (no cross-file promotion risk), all resolved by
`restore_promotion_safe_signatures.py`'s usual forward-declaration
sync afterward. One attempt this round (`func_15161408`'s own
signature) turned out to already be correct — the fix belonged to the
*preceding* function per the usual misattribution pattern, confirmed
via the map-file address-order cross-check before touching anything.

**Lesson for future rounds**: when a residual is large (8+ bytes) and
the function is a genuine, already-fully-prototyped C function (not a
missing-declaration case), check whether target masks/narrows any
argument register right at function entry — that's the signature of a
too-wide parameter type, not a promotion bug, and struct field types
(`grep` the destination struct in `structs.h`) are often the fastest
way to guess the correct narrower type before confirming with
`objdump`.

Cluster is down to **96 entries** (from 104 at the start of this
round, 143 when the `0x15000000+` segment investigation began).

Rebuilt clean after every fix (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py 0x15000000 0x16010000`
throughout.

**Continuation point**: `src/game_18D770.c` still has entries at
`func_15161714`, `func_15162110`, `func_1516381C`, `func_15163DEC`,
`func_151644F4`, `func_15164780`, `func_1516979C` (this last one in a
different file, `game_1944C0.c`) not yet checked for the same
narrow-parameter pattern — given how productive this file has been,
worth a full pass checking every remaining wrapper function's argument
types against target via `objdump` before moving to other files.
Beyond that, the earlier continuation points from last round
(`func_1504BC38` onward, `func_150593C4`'s struct-field bug, the
`func_1513EDE4`/`EE14`/`F4E4`/`F6C0` region in `game_169510.c`) are
still open.

## Session log — more narrow-parameter fixes, gCurrentObjectIndex signedness, and closing out func_15059140 (2026-09-08, later still)

Continued the narrow-parameter-type sweep in `src/game_18D770.c`:

- `func_151616D0`: `arg0`→`s8` first (matching `struct234.unk0`'s
  declared type exactly, following the precedent set by
  `func_15163604`) — this made things WORSE (`-4`→`+8`), confirmed via
  objdump: `s8` produces `sll`+`sra` sign-extension (2 extra
  instructions) where target uses a plain `andi` (zero-extend, 1
  instruction). Reverted to `u8`, which matched exactly. **New
  lesson**: when target's masking instruction is `andi` (zero-extend),
  match `u8` regardless of what the destination struct field is
  declared as — the field's own signedness only matters for the
  *store*, not for how the *parameter itself* should be typed if the
  two disagree. Confirmed by a second-order effect: guessing wrong
  here didn't just fail to fix anything, it actively regressed a
  previously-fixed neighbor (`func_15161714`), which is why re-running
  `find_drift.py` after every single edit (not batching several before
  checking) matters even for "obviously same pattern" fixes.
- `func_15162034`, `func_15161334`, `func_15161494`: `arg1`→`u8`,
  the by-now-familiar "spawn wrapper" call shape forwarding into
  `func_1516037C`. All confirmed via objdump, all fully resolved.
- `func_151615F8`: `arg2`→`u8` (0 <= arg2 < 9 range check, `lbu` in
  target vs `lw` in ours).

Cluster dropped from 96 to 95 over this batch (some of these
resolved residuals that had already partially improved from prior
rounds, so the net count delta understates the real progress — same
caveat noted in earlier rounds).

**Resolved a long-standing open question**: `gCurrentObjectIndex`
(`include/variables.h`) was fixed from `s32`→`s8` several rounds ago,
with a note flagging "target's own loads use `lbu` (unsigned) in
places checked, while our `s8` declaration produces signed `lb` —
worth double-checking." Investigating `func_150593C4`'s `+64`
residual (see below) required staring directly at this exact load,
and confirmed conclusively: target uses `lbu`, not `lb`. Changed to
`u8`. This doesn't move `find_drift.py`'s size-based count (both `lb`
and `lbu` are 4-byte instructions), but it's a genuine byte-content
fix at every one of this global's ~18 call sites — the kind of fix
that's invisible to the drift tool but real progress toward
byte-perfect matching. No existing `(s8)` casts at assignment sites
needed changes (their computed values, 0-24, fit identically as signed
or unsigned).

**Fully diagnosed and mostly closed `func_150593C4`'s `+64` residual**
(`src/game_83300.c`, flagged unresolved across several earlier
rounds as a suspected "wrong struct field reference"). It was never a
wrong-field bug — every earlier round's `find_drift.py` misattribution
pointed at the wrong function; the real code is in `func_15059140`
(the function immediately before it in the file, per the standing
misattribution caveat). Direct instruction-by-instruction diffing
(dump both sides to files, strip to opcode columns, `diff -u`) found
**three separate, ordinary missing-prototype float-promotion bugs** in
that one function, each fixed with the established parameter/field-
bitcast technique:
  1. `func_15058898(arg0, arg0->old_y_position)` — genuine `f32` struct
     field, forwarded to a still-raw-asm callee. Field-bitcast fix,
     clean.
  2. `func_15058F24(arg0, arg0->unkB0 * D_800994A8, 0x3F800000)` — a
     *computed* `f32` expression (not a bare field), which also
     displaced the `0x3F800000` literal onto the stack as a side
     effect of the double-promoted first argument eating both
     remaining register slots. Materialized the product into a local
     `f32 temp_f8` and bitcast that — reduced but did not fully
     eliminate the residual (a `-8` byte gap remains: taking `&temp_f8`
     forces IDO to round-trip the value through the stack — `swc1` +
     `lw` — instead of `mfc1` directly, the same "freshly-computed
     local" caveat documented earlier this investigation for
     `temp_f12`/`negRoll`-style cases).
  3. `func_1505B5F8(arg0, arg0->unk180)` — another genuine `f32` struct
     field. Field-bitcast fix, clean.
  Net effect: `func_150593C4`'s residual went `+64` → `+44` → `+32` →
  `+16` across the three fixes.

**Investigated, not fixed**: the remaining `+16` on `func_150593C4`
traces to `func_1505A250(0, 0, sp2C, &arg0->unk164, &arg0->unk168)`.
Target passes the literal `0, 0` via `$f12`/`$f14` (the o32 ABI's
dedicated float-argument registers for a *prototyped* call's first two
float parameters) — meaning target's real source almost certainly has
`0.0f, 0.0f` there and a genuine full `f32` prototype for
`func_1505A250` in scope. Confirmed via a second call site
(`src/game/game_105FC0.c:527,537`) that passes computed `f32`
expressions (`temp_f16 * temp_f2_3`, etc.) as the same two arguments —
strong independent evidence the true signature is
`f32,f32,f32,f32*,f32*`, not K&R-relaxed. But both files that call it
already carry their own local K&R-relaxed declaration
(`void func_1505A250();` / `void * func_1505A250();`), so adding a
full prototype anywhere without first *removing* both existing relaxed
declarations would hit the standing IDO redeclaration-bug rule. Fixing
this properly means editing 2 files together (replace both local
relaxed declarations with one shared full prototype, likely in
`functions.h`), which is a larger, riskier change than the `+16` bytes
at stake — left as an accepted residual, documented here in case a
future round wants to take it on deliberately.

Rebuilt clean after every fix (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py 0x15000000 0x16010000`
throughout. Cluster: **95 entries** (from 96 at the start of this
round, 143 when the `0x15000000+` segment investigation began).

**Continuation point**: `func_1504BC38` onward (the long tail of
mostly-small `-4`/`-8`/`-12` entries starting around `game_77AD0.c`
that haven't been individually diagnosed this whole 0x15000000+
investigation — many may be the same narrow-parameter or missing-
prototype patterns now well-established, worth a systematic pass using
the same objdump-diff methodology used for `func_15059140` above), the
`func_1513EDE4`/`EE14`/`F4E4`/`F6C0` region in `game_169510.c`, and
(if ever revisited) the `func_1505A250` full-prototype cleanup
described above.

## Session log — clearing game_169510.c's remaining narrow-parameter bugs; a new "done" directory found (2026-09-08, later still)

Continued the systematic objdump-diff sweep from `func_1504BC38`
onward. Most of the small entries in the `game_77AD0.c`/`game_981E0.c`
region turned out to be either (a) already-documented, accepted
residuals from earlier rounds' fixes bleeding forward (the
`func_1505E650`-with-`0.0f` register-routing quirk, confirmed via
direct re-verification at `func_1506B020` — target still routes the
literal through `mtc1`+`swc1` where no C-level literal choice
reproduces it), or (b) genuine `SUBALIGN`-adjacent object-boundary
padding (confirmed again at the `game_77AD0.c`→`game_83300.c` file
boundary, same diagnosis as `func_150491EC` two rounds back — the
function's own body is byte-identical to target, target just has one
extra trailing `nop`).

One genuine fresh bug found in that region: **`func_150548E4`**
(`game_77AD0.c`) had a local `phi_v0` variable declared `s32` holding
either `0x1DB` or `0x1DC` before being passed to `func_10010344` as
its first argument. Target computes the constant directly into the
argument register in each branch with no intermediate temp/mask;
ours routed through a local `v0` requiring an extra `andi ...,0xffff`
before the call. Changed `phi_v0` to `u16` — this let IDO fold the
constant directly into the argument register like target does,
eliminating the extra instruction entirely. A different kind of fix
than the usual "match target's masking with a narrower parameter
type" — here it's a *local variable's* type causing an avoidable
intermediate load/mask, not a function parameter's type.

**Cleared essentially all of `game_169510.c`'s remaining narrow-type
bugs**, continuing the vein from two rounds ago:
- `func_1513E084`: `arg2`→`u8` (compared against `0x1A`/`0x2D`).
- `func_1513EDB4`/`func_1513EDE4`: `arg1`→`s16` (target uses
  `sll`+`sra` 16-bit *sign*-extend, not `andi` — the first time this
  session a narrow-parameter fix needed a signed type rather than
  `u8`; confirmed via direct instruction inspection, not assumed).
  Promoting `functions.h`'s declaration to strict let
  `fix_cross_file_arg_counts.py` catch and pad a genuinely
  pre-existing bug in `src/game/game_129EE0.c` — a call site passing
  only 1 of 2 required arguments, unrelated to this round's work but
  surfaced by it.
- `func_1513F4B0`: `arg1`→`s16`, same sign-extend pattern.
- `func_1513F680`: all 4 args (`arg1..arg4`)→`u8`. Notable: the
  destination struct (`struct171`) declares three of these fields as
  `s8` and one as `u8`, but target's masking instruction is `andi`
  (zero-extend) for all four — confirming again (as with
  `func_151616D0` last round) that the *observed instruction* is the
  ground truth to match, not the destination field's declared
  signedness, when the two disagree. This was the largest single fix
  this round: `-36` bytes, fully resolved.
- `func_151403A8`/`func_151403DC`: `arg1`→`u8`. Promoting
  `functions.h` to strict here let `fix_cross_file_arg_counts.py` trim
  3 pre-existing over-long calls (extra trailing arguments beyond the
  real 2-parameter signature) in `game/game_11C2B0.c` and
  `game/game_1F4650.c`.

Cluster dropped from 95 to **88 entries** across this round (144→88
across the full `0x15000000+` investigation to date).

**Major new finding, not yet fixed**: `func_15149264`'s residual
(`-48`, misattributed per the usual pattern — the real bug is in the
*preceding* function `func_151491F4`) traces to a file I hadn't
noticed before: **`src/game/done/game_1765E0.c`** — a `done/`
subdirectory, presumably meaning "already matched," that in fact still
has real drift. `func_151491F4`'s current signature is
`(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)`,
but direct `objdump` comparison shows target treats the parameters as
a genuinely mixed-width signature: `arg0` sign-extended 16-bit (`s16`),
`arg1`/`arg2` sign-extended 8-bit (`s8` each, via `sll`+`sra` in-
register), and at least `arg3` read back as a single byte from its
stack spill slot (probably `s8`/`u8`, not yet confirmed with the same
rigor). This function (and its wrapper `func_15149130`, also in the
same file) is called from **13 different files**
(`game_113D60.c`, `game_188440.c`, `game_1BFDD0.c`, `game_1CA420.c`,
`game_1CC440.c`, and more), making this a much larger, higher-risk fix
than this round's other single-file changes — the exact per-argument
byte offsets need to be worked out carefully from the stack layout
(args beyond the 4 register slots land at non-uniformly-spaced stack
offsets once narrower types are packed), and `fix_cross_file_arg_counts.py`
would need to be run and its output checked carefully given the
number of call sites. Deliberately left unfixed this round rather than
rushing a wide, error-prone change — see continuation point below.

**Newly relevant**: the existence of a `src/game/done/` subdirectory
suggests there may be other files under it worth auditing the same
way — files presumed complete that `find_drift.py`'s ground-truth
comparison shows are not. Worth a `grep -rl` sweep of `src/game/done/`
against the current drift list in a future round to see if
`game_1765E0.c` is an isolated case or a sign of a broader pattern.

Rebuilt clean after every fix (0 `cfe: Error`, 0 `Signal 11`, 0 CRLF
regressions), verified via `find_drift.py 0x15000000 0x16010000`
throughout.

**Continuation point**: work out `func_151491F4`/`func_15149130`'s
real per-argument types in `src/game/done/game_1765E0.c` carefully
(dump target's full disassembly with stack-offset annotations, cross-
reference against `struct260`'s field types the same way `Header`/
`struct171` were used as ground truth in earlier rounds), fix both
functions' signatures together, then run
`restore_promotion_safe_signatures.py` + `fix_cross_file_arg_counts.py`
and manually spot-check a few of the 13 calling files' resulting diffs
before trusting the automated fixup blindly (this is a wider blast
radius than anything fixed so far this investigation). Beyond that,
continue the systematic sweep past `func_15149550`,
`func_1516979C`/`func_15169900` (in `game_1944C0.c` — not yet
individually diagnosed), and whatever remains toward
`func_151DA08C`/`func_151DBCBC`/`func_151DC6A0` and the
`func_16000000`+ tail of the segment.

## Session log — a real bug in a "done" file, and a build-verification blind spot (2026-09-08, later still)

Followed up on last round's flagged `func_151491F4`/`func_15149130`
finding in `src/game/done/game_1765E0.c`. Worked out the exact
per-argument types by cross-referencing target's `objdump` output
(`sll`+`sra` for sign-extend widths, `andi`/`lbu` for zero-extend)
against `struct260`'s real field types (`unkE`=`s16`,
`unk10`/`unk11`/`unk12`=`s8`, `unkD`/`unk13`=`u8`) — all consistent
with each other, giving high confidence.

While mapping out `func_151491F4`'s own stack-offset reads, found this
isn't just a type-width bug: **the current C source's call from
`func_151491F4` to `func_15149130` is structurally wrong**. It
currently forwards `func_151491F4`'s 8 arguments 1:1 into
`func_15149130`'s first 8 parameters. Target instead passes a
**hardcoded `-1`** for `func_15149130`'s 4th parameter (which becomes
`temp_v0->unk12`) and shifts `func_151491F4`'s own `arg3..arg7` down
into `func_15149130`'s `arg4..arg8`. This means every call through
`func_151491F4` (13 files) was writing whatever the caller passed as
its own "arg3" into `unk12`, when target always writes `-1` there
regardless of caller input — a genuine functional bug in the existing
decompilation, not merely a byte-drift cosmetic issue. Fixed both
signatures and the forwarding call to match.

**Important process lesson, worth internalizing for every future
round**: the first attempt to verify this rebuild via
`grep 'cfe: Error'` on the make log reported clean, but `find_drift.py`
showed *zero change* afterward. Investigation found the object file
was stale — untouched since before the edit. The actual compiler
output was the redeclaration-corruption bug (documented earlier this
whole investigation) doing exactly what it does: garbling
`cfe: Error` into `cfe: l Error` by interleaving it with an unrelated
diagnostic, which meant my exact-match grep pattern found nothing and
reported false-clean. The real trigger, confirmed via isolated
single-file compilation and a binary-search test (narrowing even ONE
parameter from `s32` to `s16` was enough): **narrowing a function's
own parameter types while `functions.h` still has the old K&R-relaxed
declaration visible triggers the same corruption bug as adding a
fuller prototype does** — this project's `restore_promotion_safe_signatures.py`
step isn't just cosmetic bookkeeping, it's load-bearing for avoiding
this exact compiler bug, and it must run *before* the verification
build, not just before pushing. Two takeaways: (1) always run
`restore_promotion_safe_signatures.py --apply` immediately after any
signature edit, before even a quick sanity build; (2) when checking a
build log for errors, grep bare `cfe` and manually inspect anything
that isn't `cfe: Warning`, since `cfe: Error` alone can silently miss
the corrupted-text variant.

Promoting `functions.h`'s two declarations to strict also surfaced 2
more pre-existing bugs via `fix_cross_file_arg_counts.py`:
`game/game_204660.c` and `game/game_FF5C0.c` were each calling
`func_15149130` directly with one extra trailing argument beyond its
real 9-parameter signature; both trimmed automatically and verified
via `find_drift.py` (no regressions in either file's region).

`func_15149264`'s `-48` residual (misattributed to the following
symbol per the standing pattern — the real bug was in the preceding
`func_151491F4`/`func_15149130`) is now fully resolved. Cluster down
to **87 entries** (from 143 when the `0x15000000+` segment
investigation began).

Rebuilt clean after every fix (0 `cfe: Error` *and* 0 bare non-warning
`cfe`, 0 `Signal 11`, 0 CRLF regressions), verified via
`find_drift.py 0x15000000 0x16010000` throughout.

**Continuation point**: the `src/game/done/` directory finding from
last round stands — worth a systematic sweep of other files under it
against the current drift list, now that `game_1765E0.c` turned out to
have a real, non-cosmetic bug despite its "done" label. Beyond that,
continue past `func_15149550`, `func_1516979C`/`func_15169900` (in
`game_1944C0.c`, not yet individually diagnosed), and the
`func_151DA08C`/`func_151DBCBC`/`func_151DC6A0` region toward the
`func_16000000`+ tail of the segment.

## Session log — finishing the src/game/done/ sweep, more wrapper-family fixes (2026-09-08, later still)

Finished the `src/game/done/` sweep flagged last round. Wrote a small
script cross-referencing every `find_drift.py` change-point's
*preceding* map symbol (the usual misattribution target) against
function names defined in `src/game/done/*.c`. Found 2 hits:

- **`func_150F51E8`** (`game_122650.c`): a computed expression
  `(random_u32() & 0x3F) + 0x20` passed to K&R-relaxed
  `func_10010F30` was unmasked; target masks it with `andi 0xff`.
  Added an explicit `(u8)` cast. Fully resolved.
- **`func_15149514`** (`game_1765E0.c`): `arg1` forwarded to
  `func_15169850` needed `u8` (target: `andi 0xff`). Fixed, though
  IDO chose a different (store+reload vs in-register mask)
  instruction sequence than target for the same semantic type, so a
  small residual remains at the following object-boundary — likely
  mostly `SUBALIGN` padding, not further chased.

Both confirm the `done/` label doesn't guarantee byte-perfect status;
worth remembering for any future "is this file already finished"
assumption in this codebase.

Continued past `func_15149550` into fresh territory:

- **`func_151D9FC0`** (`game_2062D0.c`): two computed `f32`
  expressions (`arg1 * 0.5f`, `arg1 * D_800AB46C`) forwarded to
  unprototyped `func_151DBCBC`/`func_151DA08C` were K&R
  double-promoted. Materialized each into a temp and bitcast;
  also replaced the `1.0099999904632568f` literal with its hex bit
  pattern (`0x3F8147AE`). Reduced the residual from `+44` to `+12` —
  a genuine remaining gap (target's frame is 24 bytes smaller than
  ours, `-72` vs `-48`, suggesting deeper stack-layout differences
  from how the temps are handled) that would need more investigation
  to fully close; left as a partial win rather than forcing it.
- **`func_1513D4B8`/`func_1513D524`** (`game_169510.c`): another
  `func_1513C350`-style wrapper-family pair forwarding into
  `func_1513D2F0`. Direct `objdump` comparison showed `andi 0xff`
  masking on most forwarded arguments (`u8`) with two staying
  full-word (`s32`). `func_1513D4B8` fully resolved; `func_1513D524`
  improved from `-24` to `-8`.

**New failure mode encountered and fixed**: promoting
`func_1513D524`'s `functions.h` declaration to strict (required to
avoid the redeclaration-corruption bug, per last round's lesson)
surfaced 2 **pre-existing typo bugs** in `game/game_108320.c`: two
call sites cast integer literals to `(s8 *)` — a *pointer* cast —
where a plain integer was intended (`(s8 *)0x3F800000` where `arg0`
is `s32`, `(s8 *)0xA` where `arg1` is now `u8`). Under the old
K&R-relaxed declaration this silently "worked" (no type checking), but
once the prototype went strict, the compiler correctly rejected these
as real type errors ("qualified an rvalue... change value" —
interestingly, this specific diagnostic did *not* get garbled into the
`cfe: l Error` corruption pattern, so it was caught immediately without
needing the mtime-comparison workaround from last round). Fixed by
removing the erroneous pointer casts — the underlying literal values
are bit-for-bit unchanged, so this is purely a type-checking fix, not
a behavior change.

Cluster steady at **86 entries** this round (some fixes fully resolved
their target while shifting what the *next* misattributed entry looks
like, so the raw count doesn't capture the full progress — same
caveat noted in multiple earlier rounds). Two functions fully closed
(`func_150F51E8`, `func_1513D4B8`) plus two more meaningfully reduced.

Rebuilt clean after every fix (0 `cfe: Error` *and* 0 bare non-warning
`cfe`, 0 `Signal 11`, 0 CRLF regressions), verified via
`find_drift.py 0x15000000 0x16010000` throughout.

**Continuation point**: `func_151D9FC0`'s remaining `+12` (stack-frame
size difference, `-72` vs target's `-48` — worth a closer look at
whether the two temp variables can be restructured to avoid the extra
spill space), `func_1513D524`'s remaining `-8`, then continue past
`func_1509B5AC`/`func_1509B764`/`func_1509C440`/`func_1509DDFC`/
`func_1509DF20` (a run of `-8`/`-12` entries not yet individually
diagnosed), the `func_15105548`/`func_1510558C`/`func_151058B4`/
`func_1512623C` cluster, and toward the `func_16000000`+ tail of the
segment (the `.debugger` section boundary).

## Session log — narrow-parameter sweep continues, a missing-call bug found (2026-09-08, later still)

Continued the systematic sweep past `func_1509B5AC` toward
`func_1512623C`, following the same discipline: check the preceding
map symbol per the misattribution pattern, confirm via direct
`objdump` comparison before editing.

Six more narrow-parameter fixes, all the same `andi 0xff`/`sll+sra`
signature-width pattern established over the last several rounds:

- `func_1509B570` (`game_C8950.c`): `arg0`→`s16` (sign-extend).
- `func_1509B704` (same file): `arg0`→`s16` — corroborated by an
  existing explicit `(s16)` cast at one of its call sites in
  `game_44C40.c`, giving extra confidence before committing.
- `func_1510550C`, `func_15105548`, `func_15105848` (`game_131F30.c`):
  all `arg2`→`u8` (compared against small constants 0x38/0x39/0x4B).
  These three cleared out the entire `func_15105xxx` cluster —
  `func_1510558C`/`func_151058B4`'s downstream residuals resolved as
  a side effect.

One entry (`func_1509DDFC`, misattributed to `func_1509DDC4`) turned
out to be a genuine unfixable IDO scheduling quirk confirmed via
direct comparison: target computes the same masked value through an
extra redundant `move` (4 instructions total) where our code achieves
the identical result in 3 by filling the branch-delay slot with the
`andi` directly — our codegen is actually *more* efficient than
target's here, which is not reachable via any straightforward source
change. Left as an accepted residual, same class as other "closest
achievable" cases documented throughout this investigation.

**New bug class found**: `func_15126138` (`game_14FF90.c`) was
missing an entire statement — a call to `func_151247C0(arg0)` that
should be the very first thing the function does. Found via direct
`objdump` diffing (an extra `jal` appeared at the very start of
target's version with no counterpart in ours); resolved the jal's
target address by hand (`(PC+4 & 0xF0000000) | (imm26 << 2)`) to
confirm it pointed at `func_151247C0` — a raw-asm function in the same
file that had **zero callers anywhere** before this fix, an orphaned
function hint that turned out to be a real, load-bearing tell. This
is the same class as the earlier `func_1505A6F8`/`func_1505A72C`
missing-`return` bugs from the main-segment investigation: not every
residual is a type/promotion issue, and an unreferenced raw-asm
function in the same file as a residual-bearing one is worth checking
as a "did we forget to call this" signal.

Cluster dropped from 86 to **77 entries** this round (144→77 across
the full `0x15000000+` segment investigation to date — roughly
half-way closed from where this specific investigation began).

Rebuilt clean after every fix (0 `cfe: Error` *and* 0 bare non-warning
`cfe`, 0 `Signal 11`, 0 CRLF regressions), verified via
`find_drift.py 0x15000000 0x16010000` throughout.

**Continuation point**: `func_151287E0` (`-4`, not yet individually
diagnosed), the `func_1513C5B0`/`func_1513C650`/`func_1513C8D4` region
(already-fixed with small accepted residuals — skip), and onward
toward the `func_16000000`+ tail (the `.debugger` section boundary,
not yet investigated at all this whole segment sweep).

## Session log — the .debugger section isn't in the target ROM; a wide-blast-radius case flagged (2026-09-08, later still)

**Important scope discovery**: reached the tail end of the
`0x15000000-0x16010000` sweep range and found `func_16000000`
(the `.debugger` linker section's start) showing a suspicious `+96`
"introduced" delta that resets the cumulative offset to exactly zero.
Investigated by trying to compute the `.debugger` section's own
target-file-offset formula (same method used for `.game`) and
discovered `conker.us.bin` (the reference target ROM) is only
**2,467,288 bytes** — smaller than the `.debugger` section's own file
offset (`0x280000` = 2,621,440) from the ELF's own section headers.
**The `.debugger` section is not present in the target ROM at all** —
it's debug-only code, stripped from the shipping build we're comparing
against. There is no ground truth to verify anything at
`0x16000000`+ against; the `+96`/`-36`/`+4` readings there are
artifacts of the section boundary itself, not real or fixable drift.
**Correction to the sweep range going forward**: use
`find_drift.py 0x15000000 0x16000000` (not `0x16010000`) — the
meaningful, verifiable range ends exactly at the `.game`/`.debugger`
boundary. This trimmed 3 unverifiable entries off every future count.

Three more fixes in the corrected range:

- `func_1509B570`/`func_1509B704` — wait, already fixed prior round;
  this round's fresh finds were:
- `func_1510550C`, `func_15105548`, `func_15105848` — already covered
  last round.
- `func_15079390` (`game_A28B0.c`): a local `u16 tmp0` loaded from a
  genuine `u8` global (`D_800D1890`) was passed to K&R-relaxed
  `func_1514D3B0`, which target sign-extends to `s16` via `sll+sra`.
  **Notable methodology point**: changing `tmp0`'s own declared type
  to `s16` had *zero* effect on codegen (confirmed by rebuilding and
  re-diffing — the byte-load itself doesn't need widening either way).
  The fix that actually worked was an explicit `(s16)` cast at the
  *call site* instead, matching the many `(u16)`/`(s16)`/`(u8)`
  call-site-cast fixes from much earlier in this whole investigation.
  Lesson: when a narrow-parameter-style fix (changing a variable's own
  type) doesn't move the needle, don't assume the diagnosis was wrong
  — try an explicit cast at the actual point of use instead, since
  IDO's codegen decisions depend on where in the expression tree the
  narrowing needs to happen, not just on any type declaration upstream
  of it.

**Flagged, not fixed — a wide-blast-radius case for deliberate future
work**: `func_15144C8C` (`game_16EE20.c`, residual `-4`) calls
K&R-relaxed `func_15144B68` twice, both showing what looks like a
textbook double-promotion bug (`cvt.d.s` before the call). Applied the
usual parameter-bitcast technique — and it made things *worse*
(residual count went up), because direct `objdump` comparison showed
target passes the argument with **zero transformation instructions**
at all (straight into `$f12`, not even a `nop`-delay-slot difference),
which only happens for a genuinely prototyped single-float-parameter
call — not reachable via the bitcast trick, which forces an *integer*
register pass instead. This function is called from **over 20 files**,
and grep'ing those call sites shows most already use the
`*(s32*)&expr` bitcast pattern themselves — meaning either those were
fixed by an earlier, different investigation using the same technique
that turns out to be wrong for this function, or there's a mix of
correct and incorrect fixes already in place across those 20+ files.
Properly fixing this means: (1) determining `func_15144B68`'s one true
parameter type by checking `objdump` at several of the 20+ call sites,
not just one, since some may already be right and others wrong; (2)
giving it a single real prototype (likely in `functions.h`, since no
file has a competing local declaration) rather than bitcasting at
each call site; (3) checking whether removing existing bitcast casts
at sites that turn out to already be "accidentally correct" is needed.
Reverted the local attempt; left at the original `-4` residual.
Documented here rather than rushed, per the standing discipline of not
forcing wide, high-risk changes for a single-digit-byte gain without
verifying the full blast radius first.

Cluster in the corrected, verifiable range: **73 entries** (down from
74 at the start of this round; 144 when the `0x15000000+` segment
investigation began, now measured over the correct `0x15000000-
0x16000000` span).

Rebuilt clean after every fix (0 `cfe: Error` *and* 0 bare non-warning
`cfe`, 0 `Signal 11`, 0 CRLF regressions), verified via
`find_drift.py 0x15000000 0x16000000` throughout.

**Continuation point**: `func_15144B68`'s real signature (flagged
above — worth a dedicated session checking multiple call sites' real
codegen before touching it, given the 20+-file blast radius), then
whatever remains after a fresh full sweep of
`find_drift.py 0x15000000 0x16000000` to find the next unexplored
entries (most of the previously-listed cluster has now been
individually diagnosed as either fixed, accepted IDO-scheduling
residuals, or `SUBALIGN` object-boundary padding — a fresh listing is
needed to see what, if anything, is left unexamined).

## Session log — more literal/local-variable fixes in game_981E0.c and game_A28B0.c (2026-09-08, later still)

Continued the sweep using the corrected `0x15000000-0x16000000`
range. Four more fixes:

- `func_150714E8` (`game_981E0.c`): a `1.0f` literal passed to
  K&R-relaxed `func_151D5714` was double-promoted; replaced with its
  hex bit pattern (`0x3F800000`), the by-now standard fix. Fully
  resolved.
- `func_15077190`, `func_15077E9C` (`game_A28B0.c`): both build a
  16-bit value out of two `u8` globals (`(D_800D1890 << 8) |
  D_800D1891`-shaped expressions) into an `s32` local, but target
  masks the combined value with `andi 0xffff` before using it.
  Changed both locals to `u16`. Both fully resolved.

**Flagged, not fixed — likely another wide-blast-radius case** in the
same family as `func_15144B68` from last round:
`func_1506C460` (called from `func_15073DA4` and its siblings
`func_15073E2C`/`func_15073EA4`/`func_15073F1C`, all showing `+12`
residuals in a chain). Direct `objdump` comparison at `func_15073DA4`
shows target passing its first two arguments
(`gCurrentObject->unk40`, a genuine `f32` field, and a `150.0f`
literal) via `$f12`/`$f14` with **zero transformation** — the same
"looks genuinely prototyped" signature as `func_15144B68`. But
unlike that case, one *other* caller
(`src/game/game_1048D0.c:181`) already uses the bitcast pattern
successfully for the same two argument positions at a different call
site — meaning the picture across `func_1506C460`'s callers may be
mixed (some sites correctly bitcast, this one apparently needs a
different treatment, or there's a real prototype that only some sites
were fixed against). Left this whole chain untouched rather than
guess; needs the same dedicated-session treatment as `func_15144B68`
(check `objdump` at each of its several call sites before touching
anything).

Also spotted several structurally-identical `s32 tmp = (D_800D1890 <<
8) | D_800D1891`-shaped locals elsewhere in `game_A28B0.c` (lines
366, 797, 808, 1203) that *look* like they'd need the same `u16` fix
— but none of them currently appear in `find_drift.py`'s output,
meaning they're either already correct as-is or their drift is
currently masked by an upstream misattribution. Deliberately left
untouched rather than blindly batch-applying the same fix without
per-site verification, per the standing "never assume one technique
applies uniformly" discipline (the `func_150489B0` false-positive
from several rounds back is the concrete precedent for why this
matters).

Cluster down to **69 entries** in the verifiable
`0x15000000-0x16000000` range (from 73 at the start of this round,
144 when the segment investigation began).

Rebuilt clean after every fix (0 `cfe: Error` *and* 0 bare non-warning
`cfe`, 0 `Signal 11`, 0 CRLF regressions), verified via
`find_drift.py 0x15000000 0x16000000` throughout.

**Continuation point**: two wide-blast-radius cases now flagged for a
dedicated future session — `func_15144B68` (20+ callers) and
`func_1506C460` (at least 3 callers with possibly-mixed correct/
incorrect existing fixes). Both need per-call-site `objdump`
verification before any prototype or bitcast change, not a quick
single-site fix. Otherwise, a fresh `find_drift.py` listing is needed
to find what's left after this round's fixes — the previously-known
cluster has now been almost entirely triaged into: fixed, accepted
IDO-scheduling residuals, `SUBALIGN` object-boundary padding, or one
of the two flagged wide-blast-radius cases above.

## Session log — investigating without forcing: func_1506C460 confirmed mixed, an indirect-call mismatch found, tanf re-confirmed as a stub (2026-09-08, later still)

An investigation-heavy round: dug into several flagged items, found real
and useful information, but made no net fixes — every concrete lead
either turned out to be too risky to force or too large to rush.
Recording the findings so the next round doesn't have to re-derive
them.

**`func_1506C460` (flagged last round) — empirically confirmed
mixed-callers, not chased further.** Applied the exact bitcast+hex-
literal technique that's already proven correct in
`game/game_1048D0.c` (confirmed via that file's function showing
*zero* introduced drift) to `func_15073DA4` in `game_981E0.c`. Result:
made things measurably *worse* (`+12` → `-16`, cluster count 69→70),
immediately reverted. This is a real, experimentally-confirmed data
point (not just a hunch): the exact same fix is correct at one call
site and wrong at another for the same K&R-relaxed function. Whatever
`func_1506C460`'s real signature is, it cannot be resolved by picking
one technique and applying it everywhere — a proper fix needs
`objdump` verification at *every* call site individually before
touching any of them, and possibly separate handling per site if the
underlying asm genuinely branches on argument types (unusual, but the
only explanation left standing). Left completely untouched.

**New finding: `func_1501905C`'s `+8` residual is an indirect-call
target mismatch, not a promotion/type issue.** This function has an
existing, already-accepted `func_1000D758_t` function-pointer-cast
workaround from an earlier (pre-`.game`-segment) investigation phase.
Direct `objdump` diffing found something new: target calls through an
indirect `jalr` to address `0x1001D748` (materialized via `lui`+
`addiu` into `$t9` immediately before the call), while our current
build calls `func_1000D758` directly via `jal` — a **different target
address entirely**, not just a different calling convention. `0x1001D748`
doesn't correspond to any named symbol in our current build's map, so
it's not immediately clear what function it should be. This sits in
the *main* segment (`0x10000000+` range, not `.game`), which was the
subject of a much earlier, separate investigation phase in this whole
project — worth revisiting with that context rather than treating it
as a `.game`-segment issue. Left as the already-accepted partial
residual; did not attempt a fix given the unfamiliar territory
(resolving what real function belongs at that address needs the main-
segment tooling/context, not this session's `.game`-segment formula).

**Re-confirmed (not new, but worth restating plainly): `tanf` is a
literal stub.** `src/game/done/game_77A90.c`: `f32 tanf(f32 arg0) { }`
— an empty body, no `return`, for a non-`void` function. This is the
root cause of the `func_1504A620`-adjacent raw-asm-chain drift flagged
several rounds back as "raw-asm-adjacent, possibly a formula
calibration artifact" — it isn't a formula issue at all, it's that
`tanf` (a hand-named SDK-style symbol, invisible to `find_drift.py`'s
`func_XXXXXXXX` regex, per the standing caveat about non-address-named
symbols) is simply unimplemented. Confirms the "implement real
`sinf`/`cosf` so `tanf` can be properly implemented" task flagged as
out-of-scope very early in this whole investigation is still exactly
that: out of scope for a quick fix, needs a dedicated session to
reconstruct the trig routines properly (`sinf`/`cosf` are completely
absent from the codebase, not just `tanf`).

Cluster unchanged at **69 entries** this round (no regressions, no net
fixes — a deliberately conservative round given three separate
"looks fixable but isn't, safely, right now" outcomes).

Rebuilt clean after every experiment (0 `cfe: Error` *and* 0 bare
non-warning `cfe`, 0 `Signal 11`), verified via
`find_drift.py 0x15000000 0x16000000` throughout; working tree is
clean (no uncommitted changes) at the end of this round.

**Continuation point**: three concrete, well-scoped follow-on tasks
now stand, none suitable for a quick fix:
1. `func_1506C460` — needs per-call-site `objdump` verification (5
   known call sites) before any change.
2. `func_1501905C`'s indirect-call target (`0x1001D748` in the main
   segment) — needs main-segment investigation context/tooling to
   identify what function that really is.
3. Implementing real `sinf`/`cosf`/`tanf` — a from-scratch trig
   routine reconstruction, unrelated to the promotion/narrow-type bug
   patterns this whole investigation has otherwise focused on.

Also still open from earlier rounds: `func_15144B68` (20+ callers,
same mixed-signature risk as `func_1506C460`). A fresh
`find_drift.py 0x15000000 0x16000000` listing should be pulled at the
start of the next round to re-survey what (if anything) remains
unexamined outside these four flagged items.

## Session log — more literal/local-narrowing fixes in game_981E0.c, a partial win on func_1513D594 (2026-09-08, later still)

Continued the sweep of the corrected `0x15000000-0x16000000` range,
picking through entries not yet individually triaged.

- `func_15072DD8` (`game_981E0.c`): another `1.0f`-literal-to-K&R-
  relaxed-function promotion bug (`func_15083568`). Hex-literal fix
  (`0x3F800000`). Fully resolved.
- `func_150722F0` (`game_981E0.c`): `tmp0`/`tmp1`, both derived from
  the same byte-pair-packed-in-an-`s32` global (`D_800D1580`) and
  forwarded to `func_1506160C`, were declared `s32`/`u16`; target
  masks both with `andi 0xff` (`u8`). Changed both locals to `u8`.
  Fully resolved.
- `func_1513D594` (`game_169510.c`): two genuine `f32` parameters
  (`arg7`, `arg8`) forwarded to K&R-relaxed `func_1513D6FC` were
  double-promoted. Applied the parameter-bitcast technique — improved
  the residual substantially (`+12` → `-8`) but didn't fully close it.
  Investigated the remainder: target additionally masks `arg2`/`arg3`
  (already-`u8`-typed) with `andi 0xff` *at function entry*, re-storing
  the masked value back into the same registers — the same
  defensive-remask-because-still-called-relaxed-elsewhere pattern
  documented for `func_1513C5B0` much earlier in this investigation,
  not reachable via a straightforward type change. Left as a partial,
  accepted improvement.
  **Process note**: while investigating this residual, made a
  self-caught measurement error — diffed current vs. target using two
  *equal-length* windows (both 204 bytes) without first confirming
  target's real end boundary from its own declared-symbol arithmetic,
  which trivially produces an all-different, same-length diff that
  looks alarming but proves nothing. Recomputed target's true stop
  address from `func_1513D668`'s declared position (`0x16ab18`, not
  the wrongly-assumed `0x16ab10`) before re-diffing. Worth restating
  the standing rule this mistake illustrates: when comparing current
  vs. target byte ranges, always derive target's window from the
  *next declared symbol's* file offset, never by assuming both windows
  are the same size — an 8-byte residual means the windows are NOT
  the same size by definition.

Cluster down to **68 entries** in the verified range (from 69 at the
start of this round; 144 when the whole `0x15000000+` segment
investigation began).

Rebuilt clean after every fix (0 `cfe: Error` *and* 0 bare non-warning
`cfe`, 0 `Signal 11`, 0 CRLF regressions), verified via
`find_drift.py 0x15000000 0x16000000` throughout.

**Continuation point**: still open from earlier rounds —
`func_15144B68` (20+ callers), `func_1506C460` (confirmed mixed
callers), `func_1501905C`'s indirect-call target mismatch (main
segment), and the `tanf`/`sinf`/`cosf` implementation gap. In the
freshly-verified range, `func_150729B4`/`func_15072AF8`/
`func_15072B44` are confirmed instances of the already-accepted
`func_1505E650`-with-`0.0f` residual (re-verified this round, not
fresh bugs). `func_151407D0` and onward through the
`func_1516xxx`/`func_151DA08C`+ tail have not been individually
re-checked since the last full listing — worth a fresh pass.

## Session log — one more win, one more instructive revert (2026-09-09)

Continued triaging entries not yet individually checked. Two
computed-local bitcast attempts this round, with opposite outcomes —
useful concrete data for judging this technique's cost/benefit going
forward.

**Reverted**: `func_151644A8` (`game_18D770.c`) forwards two computed
`f32` products to raw-asm `func_151644F4`. Applied the established
bitcast-via-temp technique to both. Result: made the residual *worse*
(`+4` → `+8`) — confirmed via `objdump` that materializing *two*
computed locals each cost a `swc1`+`lw` stack round-trip that, added
together, exceeded the `cvt.d.s`+`mfc1`×2 cost of the original
double-promotion. Reverted cleanly.

**Kept**: `func_151DBBD4` (`game_2062D0.c`) forwards *one* computed
`f32` expression to raw-asm `func_151D9B8C`. Same technique, opposite
result: reduced the residual from `+8` to `-4`, a clear net win.

**Working conclusion from these two data points**: the "freshly-
computed local" bitcast technique's cost scales with *how many*
computed values need materializing in the same call, not just whether
one is computed at all. A single computed-and-bitcast argument is
often still a net win (the `cvt.d.s`+two-`mfc1` promotion cost it
avoids is real); two or more in the same call risk costing more in
stack round-trips than they save. When applying this technique to a
call with multiple computed float arguments, verify each one's net
effect via `find_drift.py` before assuming they compound favorably —
they may not.

Cluster steady-ish at **68 entries** (one function fully improved,
offsetting the other's attempted-then-reverted change — net effect a
small real improvement once the revert is accounted for, since the
`func_151DBBD4` fix alone moved a `+8` down to `-4`).

Rebuilt clean after every change including the revert (0 `cfe: Error`
*and* 0 bare non-warning `cfe`, 0 `Signal 11`, 0 CRLF regressions),
verified via `find_drift.py 0x15000000 0x16000000` throughout.

**Continuation point**: same as last round — `func_15144B68` (20+
callers), `func_1506C460` (confirmed mixed callers), `func_1501905C`'s
indirect-call target mismatch (main segment), and the
`sinf`/`cosf`/`tanf` implementation gap remain the open wide-scope
items. `func_151407D0`, `func_15164780`, and the tail toward
`func_15169900`/`func_151DA08C`+ are mostly object-boundary entries
downstream of these flagged cases (`func_15163CF8`'s call into
`func_15144B68` confirmed as one concrete source) rather than fresh,
independently-fixable bugs — a fresh `find_drift.py` listing plus
spot-checks is the way to confirm whether anything new has surfaced
before assuming so.

## Session log — breakthrough: resolved both flagged wide-blast-radius cases with a real-prototype technique (2026-09-09)

Went back to `func_1506C460`, the smaller of the two flagged
wide-blast-radius cases from earlier rounds, determined to actually
understand it rather than defer it again. This paid off with a
technique that resolved *both* outstanding flagged cases cleanly.

**The investigation.** Re-examined the "already correct" caller in
`game/game_1048D0.c` very carefully via direct `objdump` (not just
trusting "the enclosing function shows zero drift" as proof) and
confirmed: its bitcast-style argument (`*(s32 *)((char *)(arg0) +
0x40)`) really does compile to a direct `lwc1` into `$f12` with zero
promotion, matching target exactly. Then re-tried the identical
bitcast technique against `game_981E0.c`'s calls (this time using the
*exact* same `(char *)`-pointer-arithmetic syntax, not the
`*(s32*)&expr` form tried two rounds ago) — and it *still* regressed,
this time producing correct-bit-value-but-wrong-register-class code
(`a0`/`a1` integer registers instead of `$f12`/`$f14`). Tried a third
combination (natural field access + hex-literal second argument) —
also wrong, and for an illuminating reason: it produced *mismatched*
register classes for the two arguments (one promoted-double via
`cvt.d.s`, the other pushed into a GPR), worse than either pure
approach. **Three different plausible-looking source patterns, three
different wrong outputs** — strong evidence this wasn't a
call-site-syntax problem at all, but a genuine missing-prototype
problem whose visible symptom (which register class IDO happens to
pick) is sensitive to incidental factors in a way that makes
per-call-site pattern-matching unreliable.

**The fix.** Checked whether `func_1506C460` has *any* local
declaration anywhere in the codebase — it doesn't; `functions.h`'s
K&R-relaxed declaration is the only one. That means giving it a real,
fully-typed prototype is safe: there's no second declaration to
collide with (the redeclaration-corruption bug needs *two*
declarations of differing fullness in the same translation unit; a
single point of declaration, however it's phrased, is never a
conflict). Inferred the real signature from all 5 call sites'
argument shapes (`f32,f32,s32,s32,s32,s32,f32,f32,s32,s32,s32`) and
changed `functions.h`'s declaration directly — **zero changes needed
at any of the 5 call sites**. Rebuilt clean; all 3 previously-`+12`
`game_981E0.c` sites dropped to a `-4` residual each, confirmed via
`objdump` to be the already-well-understood
"`0.0f`-routed-through-a-float-register" pattern (not further
fixable). The 2 other call sites (which happened to already produce
correct code under the relaxed declaration, by IDO quirk) kept working
identically under the new strict one.

**Applying the same technique to `func_15144B68`** (the other flagged
case, ~25 calling files) worked just as cleanly: no local declarations
anywhere to conflict with, so `f32 func_15144B68(f32 arg0);` went
straight into `functions.h`. Promoting to strict surfaced 6
pre-existing over-long calls (an extra, unused second argument) across
3 files, auto-trimmed by `fix_cross_file_arg_counts.py` as usual.
`func_15144CEC`'s residual dropped from `+20` to `+8`, and
`func_15163DEC`'s downstream residual (traced last round to a
`func_15144B68` call inside `func_15163CF8`) cleared entirely. No
regressions in any of the ~20 other calling files.

**New standing technique, worth applying proactively in future
rounds**: when a K&R-relaxed function shows drift at multiple call
sites with inconsistent-looking symptoms (some sites "just work,"
others don't respond to the usual bitcast/hex-literal fixes, or
respond differently depending on exact source syntax), **check first
whether it has zero local declarations anywhere in the codebase**
(`grep -rn` for the function name across all files, filtering out call
sites and the `#pragma GLOBAL_ASM` line — if the only hit besides call
sites is in `functions.h`, it's a single-declaration-point function).
If so, inferring its real signature from calling-convention evidence
(which registers target actually uses: `$f12`/`$f14` vs `a0`-`a3`,
`sll+sra` vs `andi` widths, etc. — the same evidence already gathered
for narrow-parameter fixes) and giving it directly to `functions.h` is
**safe, often the actual root-cause fix, and requires zero per-call-
site changes** — strictly better than guessing at bitcast syntax
variations. This should have been tried before the per-call-site
bitcast attempts in earlier rounds, not after; the wide "blast radius"
that made these look risky was actually the reason the fix was *safer
and higher-leverage* than usual, since one `functions.h` edit fixes
every caller at once instead of requiring 5-25 individual edits.

Cluster down to **66 entries** in the verified range (from 68 at the
start of this round; 144 when the whole `0x15000000+` segment
investigation began — both flagged wide-blast-radius items from
several rounds of deferral are now fully closed).

Rebuilt clean after every change (0 `cfe: Error` *and* 0 bare non-
warning `cfe`, 0 `Signal 11`, 0 CRLF regressions), verified via
`find_drift.py 0x15000000 0x16000000` throughout.

**Continuation point**: two open items remain from earlier rounds —
`func_1501905C`'s indirect-call target mismatch (main segment,
`0x1001D748`) and the `sinf`/`cosf`/`tanf` implementation gap. Given
this round's breakthrough, worth checking whether *any other* entries
in the current drift list trace back to a similarly-situated
K&R-relaxed function with zero local declarations — the same
`grep -rn` check, applied systematically to whatever functions remain
implicated in the current cluster, might turn up more of these
higher-leverage fixes before falling back to per-function
investigation.

## Session log — testing the real-prototype technique's limits: func_1505E650 does NOT qualify (2026-09-09)

Following up on the previous round's breakthrough, checked whether the
same "give it a real prototype" technique could close the
pervasive `func_1505E650`-with-`0.0f` residual that's been documented
as an accepted, unfixable `-4`/`-8` gap at dozens of call sites
throughout this whole investigation. `func_1505E650` has 40 call
sites and, like `func_1506C460`/`func_15144B68` before the previous
round's fixes, has zero local declarations anywhere (only
`functions.h`'s relaxed one) — on the surface, a candidate for the
same fix.

**Investigated carefully before touching anything, and concluded it
does NOT qualify.** Direct `objdump` comparison at `func_1504BB88`
(one of the -4-residual call sites) shows the *non-zero* hex-literal
arguments (`0x3F933333`/`1.15f`, `0x40400000`/`3.0f`) **already
compile identically in current and target** — both load them via
`lui`+`ori` directly into integer registers `a2`/`a3`, no promotion,
no register-class mismatch. The *only* difference is the two
`0x00000000` arguments: target routes them through `mtc1 zero,$f0` +
two `swc1` (the well-documented "0.0f specifically goes through a
float register" quirk), while current uses plain `sw zero` twice —
one instruction shorter, hence the `-4`.

This is a fundamentally different situation from `func_1506C460`/
`func_15144B68`, where *every* calling convention detail was wrong
before the fix (wrong register class or double-promotion) and a real
prototype fixed all of it uniformly. Here, the calling convention is
**already correct** for the actual float-bit-pattern arguments; only
a single specific literal value (`0.0f`) triggers different opcode
selection in the original compiler for reasons that don't depend on
prototyping. Giving `func_1505E650` a real `f32` prototype now would
require reverting the hex-literal representation back to plain float
literals at all ~24 call sites currently using hex (since a real f32
parameter receiving a raw hex-int literal would trigger a genuine
*value* conversion — turning `0x3F933333` into the float value
`~1.07×10⁹`, corrupting the bit pattern rather than preserving it) —
a much larger, riskier change for what would likely still leave the
same `0.0f`-specific residual unresolved (per the earlier-established
finding that trying `0.0f` as a literal, even without a prototype,
made things worse via double-promotion; the real-prototype version of
that experiment hasn't been tried, but the blast radius of reverting
24+ working call sites to test it isn't justified by a `-4`-byte
per-site payoff). **Left completely untouched.**

**Refined understanding of when the real-prototype technique applies**:
it's a strong candidate when a K&R-relaxed function's calling
convention is *uniformly wrong* at every observed call site (visible
as consistent double-promotion, or a consistent wrong-register-class
symptom) — not when it's already *mostly correct* with a narrow,
literal-value-specific residual. The tell is in the `objdump` evidence
gathered before touching anything: if the *non-problematic* parts of
an argument list already match target's register choices, the
function's calling convention is not the thing that's broken.

No fixes this round; cluster holds at **66 entries**. Working tree
clean, no changes to commit beyond this documentation.

**Continuation point**: unchanged from last round —
`func_1501905C`'s indirect-call target mismatch (main segment,
`0x1001D748`) and the `sinf`/`cosf`/`tanf` implementation gap remain
the two concrete open items. The `func_1505E650`-with-`0.0f` residual
(confirmed this round as NOT fixable via real-prototype, and
already established earlier as not fixable via literal-choice either)
should now be considered a **closed, permanently-accepted** residual
class rather than something to keep re-investigating — it appears at
a large fraction of the remaining ~66 entries and is not going to
move further with the techniques available in this toolchain.

## Session log — resolving the func_1501905C indirect-call mismatch (and catching two of my own analysis errors along the way) (2026-09-09)

Went back to `func_1501905C`'s indirect-call residual (`+8`, flagged
several rounds ago as needing main-segment context). Found and fixed
it this round — but the path there involved catching two separate
mistakes from the original investigation, both worth recording
clearly since they're easy to repeat.

**Error #1**: the original finding computed the `jalr` target address
as `0x1001D748` by treating the `addiu` instruction's 16-bit immediate
(`0xD748`) as an unsigned offset added to `0x10010000`. `addiu`'s
immediate is **signed** — `0xD748` as signed 16-bit is `-10424`, so
the real target is `0x10010000 - 10424 = 0x1000D748`, not
`0x1001D748`. That's a full `0x10000` (64KB) off, and it sent the
investigation looking at unrelated libultra audio code instead of the
right function. Lesson: when hand-decoding a `lui`+`addiu`
address-materialization pair, always sign-extend the `addiu`
immediate before adding — this class of instruction is used
specifically *because* small negative offsets from a page-aligned
`lui` are cheaper than a full 32-bit load, so a signed low half is the
common case, not the exception.

**Error #2** (worse, and specific to this toolchain): once
corrected, `0x1000D748` turned out to exactly match `func_1000D758`'s
own *actual* linked position in our build's map (a pre-existing `-16`
byte offset from its declared name, unrelated to anything in this
`.game`-segment investigation). Re-verifying which instruction form
(`jal` vs `jalr`) target *actually* uses at this call site required
comparing `objdump` output for target's raw binary — and
**`mips-linux-gnu-objdump -bbinary` has no real VMA to compute against,
so any `jal`/`jalr` target address it prints for a raw binary dump is
silently meaningless** (it computes the target from the file offset
treated as if it were address zero, not the real ROM address). Reading
that bogus decoded target as if it were real led to an initial
re-check that seemed to confirm the wrong conclusion. The fix: for a
raw-binary dump, only trust the **raw instruction word** (e.g.
`0c0035d6`) and decode call targets by hand using the *real* VMA of
that instruction (`(real_PC+4 & 0xF0000000) | (imm26 << 2)` for `jal`),
never objdump's own printed disassembly-target annotation in this
mode. This should be added to the standing methodology: **objdump's
symbolic/target annotations are only trustworthy for the current
(ELF) build; for target's raw-binary dumps, read opcodes and raw
immediates only.**

**The actual fix**, once analysis was solid: target calls
`func_1000D758` via a plain direct `jal`. Our source called it through
a function-pointer cast (`((func_1000D758_t) func_1000D758)(...)`,
a pre-existing workaround from a much earlier investigation phase,
predating this whole `.game`-segment sweep) — and IDO compiles that
construct as an **indirect call unconditionally**, materializing the
address via `lui`+`addiu` into a register regardless of whether the
target is a compile-time-known symbol. Confirmed `func_1000D758` has
exactly one caller and no conflicting declarations (same precondition
as the `func_1506C460`/`func_15144B68` fixes two rounds ago), gave it
its real prototype (`f32, f32, s32`, matching the typedef that existed
solely to enable the now-unnecessary pointer-cast) directly in
`functions.h`, and replaced the cast-call with a plain direct call.
This eliminated the indirect-call overhead *and* presumably whatever
promotion issue motivated the original workaround. Fully resolved —
both `func_15019130` and `func_1501A220`'s downstream residuals
cleared as a side effect.

Cluster down to **64 entries** (from 66 at the start of this round;
144 when the whole `0x15000000+` segment investigation began). Both
concrete open items flagged in HANDOFF as of last round are now
closed except the `sinf`/`cosf`/`tanf` implementation gap.

Rebuilt clean after every change (0 `cfe: Error` *and* 0 bare non-
warning `cfe`, 0 `Signal 11`, 0 CRLF regressions), verified via
`find_drift.py 0x15000000 0x16000000` throughout.

**Continuation point**: only one concrete named item remains open —
implementing real `sinf`/`cosf` so `tanf` can be properly implemented
(a from-scratch trig routine reconstruction, unrelated to this
investigation's usual bug patterns). Beyond that, a fresh
`find_drift.py 0x15000000 0x16000000` listing plus the "check for
zero local declarations" technique (now validated three times) is the
way to find whatever's left — most of the previously-catalogued
cluster has been individually triaged at this point into fixed,
`func_1505E650`-class accepted residuals, or `SUBALIGN` object-
boundary padding.

## Session log — systematic triage of the remaining cluster; one more fix found (2026-09-09)

With both wide-blast-radius cases and the indirect-call mismatch
closed, did a systematic triage of the current 64-entry cluster:
wrote a small script cross-referencing every `find_drift.py`
change-point's preceding function against whether its body calls
`func_1505E650` or `func_15144B68` (the two large accepted-residual
families), to separate "already-understood, accepted" entries from
anything still worth individually investigating. Most of the cluster
sorted into those two families, or into functions already touched in
earlier rounds (`func_1513Cxxx`/`func_1513Dxxx` wrapper family,
`func_15048Bxx`/`negRoll` fabsf-pattern family, `func_151D9FC0`/
`func_151DBBD4`, etc.) with their residuals already at documented,
accepted minimums.

One genuinely fresh entry survived the triage: **`func_1506BB64`**
(`game_981E0.c`). Direct `objdump` comparison found two real issues:

- The global `D_800D1582` was declared `s16`, but target loads it via
  `lhu` (unsigned) at every observed use — corroborated by an existing
  explicit `(u16)` cast at one of its 6 usage sites in the same file.
  Changed to `u16`.
- `func_1506BB64`'s own `arg0` needed `s16` (target sign-extends it).
  Applying this produced a *correct-value* fix but via a different
  instruction sequence than target's (register-based `sll`+`sra` vs.
  target's stack-round-trip `sw`+`lh`) — a smaller residual remains
  from that instruction-selection difference, not chased further
  (same class of gap as `func_151616D0`'s `s8`-vs-`u8` lesson from
  several rounds back, just for sequence choice rather than
  signedness this time).

Net: cluster down from 64 to 63. Spot-checked two other candidates
from the triage (`func_151467A4`/`func_15146890` boundary,
`func_150718E4`) and confirmed both are `SUBALIGN` object-boundary
padding or already-accepted positive-delta carryover, not fresh bugs.

Rebuilt clean after every change (0 `cfe: Error` *and* 0 bare non-
warning `cfe`, 0 `Signal 11`, 0 CRLF regressions), verified via
`find_drift.py 0x15000000 0x16000000` throughout.

**Continuation point**: the cluster is now almost entirely triaged.
What remains is: the `func_1505E650`/`func_15144B68` accepted-residual
families (confirmed unfixable, don't re-investigate), `SUBALIGN`
object-boundary padding (confirmed unfixable), a handful of already-
documented partial fixes at their accepted minimums
(`func_15048B10`'s `negRoll` case, `func_1513Dxxx` wrapper family,
`func_151D9FC0`/`func_151DBBD4`), and the genuinely out-of-scope
`sinf`/`cosf`/`tanf` implementation gap. A future round should
prioritize either (a) the trig implementation, which is the only
remaining *concrete* unimplemented-functionality item, or (b) a fresh,
careful re-derivation of whether any entry not yet explicitly named in
this HANDOFF log is hiding a real bug — the triage script used this
round (cross-referencing `find_drift.py` against function-body text
for known-accepted-pattern calls) is a good starting point to rerun
and extend if the remaining count changes.

## Session log — tanf resolved: the "out of scope" trig task was a false alarm (2026-09-09)

Investigated the last remaining named open item — implementing real
`sinf`/`cosf` so `tanf` could be properly implemented — before
accepting it as genuinely out of scope for this investigation. That
turned out to be the right call: **the premise was wrong.**

`sinf` and `cosf` are not missing. They exist as real, linked,
callable functions in this exact segment
(`src/libultra/gu/sinf.c`/`cosf.c`, symbols literally named `sinf`
and `cosf` in the map) — they're simply still raw `GLOBAL_ASM` blocks,
like hundreds of other not-yet-C-matched functions throughout this
whole investigation. Raw-asm status was never a barrier to *calling*
them; it only means their own C source isn't reconstructed yet (a
separate, unrelated task). `tanf`'s stub never needed us to derive a
trig algorithm from scratch — it just needed to call the sinf/cosf
that were already sitting right there. Checking `include/libc/math.h`
and `include/2.0L/PR/gu.h` confirmed both already have full, correct
prototypes (`float sinf(float)`/`float cosf(float)`) visible via the
existing include chain, so no promotion or declaration work was
needed either.

Also confirmed via `objdump` that `tanf` is **completely dead code** —
zero call sites anywhere in the entire built binary (searched the
whole ELF, not just the `.game` segment). This is presumably *why*
the empty-body stub was never caught by any functional/gameplay
testing; it only ever showed up as a byte-drift source in this
static-analysis-driven investigation.

Implemented `return sinf(arg0) / cosf(arg0);`. Rebuilt clean, then did
a full direct `objdump` comparison against target (recalibrating the
file offset via prologue-byte matching, since this deep into the
segment the fixed-formula prediction was off by 48 bytes — the
standing caveat about needing recalibration far from a known-good
anchor, confirmed again) — **the result was byte-for-byte identical**,
every single instruction matching exactly (the only difference: the
`jal` targets for `sinf`/`cosf` point to different absolute addresses
in target vs. ours, purely reflecting this segment's pre-existing,
separately-tracked accumulated drift elsewhere — nothing specific to
`tanf`'s own correctness).

This fully resolved the `func_1504A620`-adjacent raw-asm-chain drift
that had been flagged across *several* earlier rounds (as far back as
the very first `.game`-segment investigation session) as a "possible
`.game`-segment formula calibration artifact" — it was never a
formula problem at all; it was this one missing two-line function the
whole time.

Cluster down to **62 entries** (from 63 at the start of this round;
144 when the whole `0x15000000+` segment investigation began — well
under half of where it started). Every concrete, specifically-named
open item from every prior round's HANDOFF log is now closed.

Rebuilt clean after every change (0 `cfe: Error` *and* 0 bare non-
warning `cfe`, 0 `Signal 11`, 0 CRLF regressions), verified via
`find_drift.py 0x15000000 0x16000000` throughout.

**Lesson for future rounds, worth internalizing**: "needs a from-
scratch reimplementation, out of scope" is a conclusion worth
re-checking before accepting, not just assuming from a stub's
appearance. An empty function body doesn't necessarily mean the
*real* implementation is unavailable — check whether the pieces it
would need to call already exist elsewhere in the codebase (even as
unmatched raw asm, which is perfectly callable) before concluding a
task is bigger than it looks.

**Continuation point**: no concrete named items remain open. The
cluster (62 entries) is fully triaged into: the `func_1505E650`/
`func_15144B68` accepted-residual families, `SUBALIGN` object-boundary
padding, and a handful of documented partial-fixes already at their
accepted minimums. A future round should do a fresh, careful sweep of
`find_drift.py 0x15000000 0x16000000`'s current output to check
whether anything has shifted or whether any previously-dismissed entry
deserves a second look now that several upstream fixes have landed
since it was last checked (several entries' cumulative offsets have
moved this session; a residual dismissed as "already accepted" several
rounds ago should be re-verified against target at its *current*
position before being dismissed again, not assumed unchanged).

## Session log — cross-version sanity check; natural stopping point reached (2026-09-09)

With the cluster fully triaged and no concrete named items open, did a
full cross-version verification before considering this investigation
paused: rebuilt all 4 ROM versions (`VERSION=us`, `eu`, `ects`,
`debug`) from clean, confirming 0 `cfe: Error`, 0 bare non-warning
`cfe`, and 0 `Signal 11` on every one (only the expected harmless
`.ok` sha1sum-mismatch `EXIT:2`, since none of the 4 versions are
byte-perfect yet). This re-confirms the foundational standing goal
from the very start of this whole multi-session investigation
("keep `make -j$(nproc) -k` building successfully for all 4 ROM
versions") still holds after this session's full run of `.game`-
segment fixes. Rebuilt `VERSION=us` afterward to restore the normal
working build state; `find_drift.py 0x15000000 0x16000000` still
reports **62 entries**, unchanged.

**Where this leaves the `0x15000000+` `.game`-segment investigation**:
started this specific investigation at 143 entries (flagged as a
"newly-discovered drift cluster" at the very beginning), currently at
62 — a 57% reduction achieved across many rounds, with every
concretely-actionable lead now either fixed or triaged into a
confirmed-unfixable-with-current-tools category:

- The `func_1505E650`-with-`0.0f` and `func_15144B68`-family accepted
  residuals (large chains of `-4`/`-8` gaps, confirmed via direct
  `objdump` comparison to be a "target routes a literal `0.0f` through
  a float register where our C source's plain int-zero doesn't"
  quirk that no C-level literal choice reproduces).
- `SUBALIGN` object-file-boundary padding (confirmed at several
  distinct file boundaries this whole investigation — the function's
  own body matches target exactly, only trailing alignment padding
  differs).
- A handful of individually-investigated partial fixes already at
  their accepted minimums (`func_15048B10`'s `negRoll`/`negPitch`/
  `negYaw` case, the `func_1513Cxxx`/`func_1513Dxxx` wrapper family's
  small remaining re-mask residuals, `func_1506BB64`'s instruction-
  selection-choice gap).

No further concrete leads remain in this range without either (a)
new information (e.g., a reference for the historical IDO libm source
that produced `sinf`/`cosf`'s exact bytes, which would only matter if
those functions' own C-matching becomes a priority — not currently
blocking anything, since they're already correctly *linked and
callable* as raw asm), or (b) extending scope beyond
`0x15000000-0x16000000` into other segments, which would be a new
investigation rather than a continuation of this one.

**Suggested next steps for a future session**, roughly in order of
likely value: (1) start a fresh drift investigation in a different
segment/range if one hasn't been swept yet — the `.game` segment
covered here was one flagged region among what was likely a larger
set from the original decomp; (2) if the `.game` segment specifically
remains the priority, decompiling more of its still-raw-asm functions
(there are many `#pragma GLOBAL_ASM` blocks throughout this whole
investigation's touched files) would surface new C source that could
carry its own fresh bugs, the way `tanf` did; (3) a systematic pass
through `src/game/done/*.c` beyond the 2 files already found to have
real bugs this session (`game_122650.c`, `game_1765E0.c`) — the
"done" label has now been shown twice to be unreliable, and the
directory has 87 files total, most never individually checked.
