#!/usr/bin/env python3
"""
Add a missing local 'f32 spXXX;' declaration for a decompiler-named
stack-spill variable ('spNN', 'tempNN', etc. -- specifically the
'sp[0-9A-F]+'-shaped names this codebase's mips_to_c output uses for
stack-frame float temporaries) that mips_to_c emitted a USE for but no
DECLARATION for -- "'spXXX' undefined; reoccurrences will not be
reported."

Background: this is the same class of genuine decompiler gap already
fixed by hand a few times earlier in this project (see "Manual fixes
applied" in HANDOFF.md -- 'game_100810.c had sp70/sp74 used but never
declared... added f32 sp70; f32 sp74; by hand, matching the surrounding
f32 sp6C/sp68/sp64/sp60 pattern'), just occurring far too often (300+
instances across the tree) to keep doing one at a time.

Why 'f32' as the blanket default type, rather than inferring per-
variable: sampling ~40 of these across many files shows the
overwhelming majority are float stack temporaries used in ordinary
float arithmetic (subtraction/addition/multiplication with other f32
values or float literals) -- consistent with this being a
physics-and-graphics-heavy N64 game. Critically, this project's stated
goal is BUILD SUCCESS ONLY (see HANDOFF.md's Goal section) -- and this
codebase already tolerates cross-type int/float/pointer assignment
almost everywhere as a mere WARNING, never a hard error (see the
'illegal combination of pointer and integer' warnings throughout every
build log). So even where 'f32' isn't the semantically perfect type
for a given spNN, the declaration still overwhelmingly resolves the
'undefined' hard error into, at worst, a tolerated warning -- not a
new hard error -- which is exactly this project's acceptable tradeoff.

IMPORTANT bug found and fixed after this script's first run: "'NAME'
undefined; reoccurrences will not be reported." is NOT specific to
stack-temp declarations -- IDO emits the exact same message shape for
several UNRELATED bug classes that must never get a bare local f32:
  - A struct MEMBER name in a 'BASE->unkXX'/'BASE.unkXX' access where
    the real struct type has no such field (this project's own
    documented, deliberately-manual-only "wrong global entirely" bugs,
    e.g. 'D_800D3098->unkF88', 'D_800DBEF4->unk21C' -- see "Manual
    fixes applied" / "Remaining error categories" in HANDOFF.md). A
    local variable named 'unkF88' does NOTHING to fix this -- the
    error is about struct MEMBER lookup, not identifier scope -- and
    adding one only pollutes the function with a dead unused local.
  - A call passing a genuinely-undeclared 'argN'/'subroutine_argN'
    name that isn't actually one of the enclosing function's own real
    parameters (a pre-existing decompiler bug in its own right) --
    these need the SAME real-signature positional analysis as this
    project's manual void*/float call-site fixes, not a blind f32
    guess (the real slot might be a pointer, not a float).
  - SDK/global names ('D_8002C750', '__osRunningThread') and
    library builtins ('nanf') -- these need a REAL extern declaration
    (matching an SDK header or variables.h), not a fabricated local.
  - Decompiler register-save artifacts ('saved_reg_s0' etc) -- unclear
    real type, don't guess.
First run blindly matched ANY undefined-identifier error text and
default-typed it f32, adding 68 bogus/ineffective declarations across
31 files before this was caught by reviewing the diff (per this
project's own established discipline) and reverted. Fixed by requiring
the name to match 'sp[0-9A-Fa-f]+' EXACTLY (SKIP_NAME_RE) -- the one
shape genuinely specific to mips_to_c's stack-temp float convention.

Deliberately conservative about what it WON'T touch even within the
spNN-shaped names, to avoid the riskier remaining shapes:
  - Any spNN used with '[' anywhere in its own function (array
    indexing) -- these need an array declaration with a real element
    count, which this script has no basis to guess; left for manual
    handling.
  - Any spNN used with '->' or '.member' access anywhere in its own
    function, EITHER as the base ('spXX->field') OR (defensively) as
    the field-name half ('BASE->spXX', which shouldn't occur for a
    genuine stack temp but is excluded anyway since a false negative
    here is cheap and a false positive is not) -- left for manual
    handling.
  - A name already declared anywhere in the function (shouldn't happen
    given these are compiler-reported as undefined, but checked
    defensively).

Reads the exact (file, line, varname) triples straight out of a
build_log.txt-shaped error list (via --errors-from) rather than
scanning the tree blindly for the 'spNN'-looks-undeclared shape --
there is no way to tell a genuinely-undeclared spNN from a validly-
declared one via text alone, so this only ever acts on names the
compiler itself already confirmed are missing.

Usage:
    python3 fix_missing_sp_declarations.py --errors-from build_log.txt --root .            # dry run
    python3 fix_missing_sp_declarations.py --errors-from build_log.txt --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path
from collections import defaultdict

ERROR_RE = re.compile(
    r"^cfe: Error: ([^,]+), line (\d+): '([A-Za-z_]\w*)' undefined"
)
# The ONLY name shape this script may ever act on -- see module
# docstring for the full list of unrelated bug classes that share the
# exact same "'NAME' undefined" error text and must never get a bare
# f32 declaration.
SKIP_NAME_RE = re.compile(r'^sp[0-9A-Fa-f]+$')

FUNC_DEF_RE = re.compile(
    r'^[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{\s*(?://.*)?$'
)
TRAILING_COMMENT = r';\s*(?:/\*.*?\*/|//.*)?\s*$'
VOID_PTR_LOCAL_RE = re.compile(r'^\s*void\s*(?:\*\s*)+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT)
SCALAR_TYPES = {"f32", "s32", "u32", "s16", "u16", "s8", "u8"}
SCALAR_PTR_LOCAL_RE = re.compile(
    r'^\s*(?:' + '|'.join(SCALAR_TYPES) + r')\s*(?:\*\s*)+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT
)
SCALAR_LOCAL_RE = re.compile(
    r'^\s*(?:' + '|'.join(SCALAR_TYPES) + r')\s+([A-Za-z_]\w*)\s*' + TRAILING_COMMENT
)
GENERIC_DECL_RE = re.compile(
    r'^\s*[A-Za-z_]\w*(?:\s*\*)*\s+\**[A-Za-z_]\w*\s*(?:\[[^\]]*\])?\s*' + TRAILING_COMMENT
)
FUNC_PTR_DECL_RE = re.compile(
    r'^\s*[A-Za-z_]\w*(?:\s*\*)*\s*\(\s*\*+\s*[A-Za-z_]\w*\s*\)\s*\([^;]*\)\s*' + TRAILING_COMMENT
)


def parse_errors(errors_path):
    """file -> list of (line_no_1indexed, varname), in the order reported."""
    by_file = defaultdict(list)
    text = Path(errors_path).read_text(encoding='utf-8', errors='replace')
    for line in text.split('\n'):
        m = ERROR_RE.match(line)
        if not m:
            continue
        path, lineno, varname = m.group(1), int(m.group(2)), m.group(3)
        if not SKIP_NAME_RE.match(varname):
            continue
        path = path.replace('\\', '/')
        by_file[path].append((lineno, varname))
    return by_file


def find_function_start(lines, error_line_idx):
    """Scan backward from the error line to the enclosing function's
    opening '{' line. Returns that line's index, or None."""
    i = error_line_idx
    depth = 0
    while i >= 0:
        depth += lines[i].count('}') - lines[i].count('{')
        if depth < 0 and FUNC_DEF_RE.match(lines[i]):
            return i
        i -= 1
    return None


def find_function_end(lines, start_idx):
    depth = 1
    j = start_idx + 1
    while j < len(lines) and depth > 0:
        depth += lines[j].count('{') - lines[j].count('}')
        j += 1
    return j - 1


def collect_declaration_block_end(lines, start, end):
    j = start + 1
    while j <= end:
        stripped = lines[j].strip()
        if stripped == '':
            j += 1
            continue
        if (VOID_PTR_LOCAL_RE.match(lines[j]) or SCALAR_PTR_LOCAL_RE.match(lines[j])
                or SCALAR_LOCAL_RE.match(lines[j]) or GENERIC_DECL_RE.match(lines[j])
                or FUNC_PTR_DECL_RE.match(lines[j])):
            j += 1
            continue
        break
    return j - 1


def already_declared(lines, start, decl_end, varname):
    pat = re.compile(r'\b' + re.escape(varname) + r'\b')
    for j in range(start, decl_end + 1):
        if pat.search(lines[j]) and (
                VOID_PTR_LOCAL_RE.match(lines[j]) or SCALAR_PTR_LOCAL_RE.match(lines[j])
                or SCALAR_LOCAL_RE.match(lines[j])):
            return True
    return False


def is_risky_usage(lines, start, end, varname):
    """True if varname is used with array indexing or struct member
    access (as EITHER the base of '->'/'.' or, defensively, as the
    field-name half of one) anywhere in its own function -- too risky
    to guess a bare f32 declaration for."""
    array_pat = re.compile(r'\b' + re.escape(varname) + r'\s*\[')
    member_base_pat = re.compile(r'\b' + re.escape(varname) + r'\s*(?:->|\.)')
    member_field_pat = re.compile(r'(?:->|\.)\s*' + re.escape(varname) + r'\b')
    for j in range(start, end + 1):
        if (array_pat.search(lines[j]) or member_base_pat.search(lines[j])
                or member_field_pat.search(lines[j])):
            return True
    return False


def process_file(path, error_entries, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')

    to_insert = defaultdict(list)  # func_start_idx -> [varname, ...]
    skipped = []

    for lineno, varname in error_entries:
        error_idx = lineno - 1
        if error_idx < 0 or error_idx >= len(lines):
            continue
        func_start = find_function_start(lines, error_idx)
        if func_start is None:
            skipped.append((varname, 'no enclosing function found'))
            continue
        func_end = find_function_end(lines, func_start)
        decl_end = collect_declaration_block_end(lines, func_start, func_end)

        if already_declared(lines, func_start, decl_end, varname):
            continue
        if is_risky_usage(lines, func_start, func_end, varname):
            skipped.append((varname, 'array/member access'))
            continue
        if varname in to_insert[func_start]:
            continue
        to_insert[func_start].append(varname)

    if not to_insert:
        return 0, skipped

    # Apply insertions from the bottom of the file up so earlier
    # insertion points aren't shifted by later ones.
    total = 0
    for func_start in sorted(to_insert.keys(), reverse=True):
        func_end = find_function_end(lines, func_start)
        decl_end = collect_declaration_block_end(lines, func_start, func_end)
        varnames = to_insert[func_start]
        new_decls = [f'    f32 {name};' for name in varnames]
        lines[decl_end + 1:decl_end + 1] = new_decls
        total += len(varnames)

    if total > 0:
        print(f"{path}: added {total} declaration(s)")
        if apply_changes:
            path.write_text('\n'.join(lines), encoding='utf-8', newline='')

    return total, skipped


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    parser.add_argument('--errors-from', required=True,
                         help='build_log.txt-shaped file to read undefined-variable errors from')
    args = parser.parse_args()

    root = Path(args.root)
    by_file = parse_errors(args.errors_from)

    total = 0
    files_touched = 0
    all_skipped = []
    for file_rel, entries in sorted(by_file.items()):
        path = root / file_rel
        if not path.exists():
            continue
        count, skipped = process_file(path, entries, args.apply)
        if count:
            total += count
            files_touched += 1
        all_skipped.extend((file_rel, v, r) for v, r in skipped)

    print()
    print(f"{'Would add' if not args.apply else 'Added'} {total} declaration(s) "
          f"across {files_touched} file(s)")
    if all_skipped:
        print(f"Skipped {len(all_skipped)} entries (array/member access or unresolvable):")
        for file_rel, v, r in all_skipped[:30]:
            print(f"  {file_rel}: {v} ({r})")
        if len(all_skipped) > 30:
            print(f"  ... and {len(all_skipped) - 30} more")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
