#!/usr/bin/env python3
"""
Add a relaxed (K&R empty-parens) forward declaration for a function
whose ONLY 'declaration' in its own file is its own definition, when
that file also calls it with a different argument count than its
definition's own parameter list.

Background: relax_prototypes.py tolerates inconsistent call-site
argument counts by relaxing every separate DECLARATION to empty
parens. It deliberately never touches a real DEFINITION (a definition
IS itself a full, strict prototype). So when a function is defined and
also called within the SAME file, with NO separate forward declaration
anywhere, every call in that file is checked strictly against the
definition's own parameter list -- with no relaxation possible, since
there's nothing else to relax. This produces the exact same
'the number of arguments doesn't agree with the number in the
declaration' error relax_prototypes.py exists to prevent, just via a
path that script can't reach.

Fix: insert a plain relaxed forward declaration ('RETTYPE name();')
near the top of the file, before the definition -- this becomes the
FIRST thing the compiler sees for that name, so every call anywhere in
the file (before or after the real definition) is checked against the
relaxed form instead, tolerating any argument count. The later full
definition is fine following a relaxed declaration UNLESS the
definition's own parameters are promotion-risky (see
widen_integer_promotion_params.py / restore_promotion_safe_signatures.py
-- run this AFTER those, since a promotion-risky definition would
conflict with the relaxed declaration this script adds).

Only applies when:
  - the function name has NO entry in functions.h (that would already
    govern every caller; adding a second, different local declaration
    would just create a NEW conflict), and
  - the file has no OTHER pre-existing local extern declaration for
    this name already (adding a second one would conflict with it, and
    if one already exists the tolerance problem is already solved).

Usage:
    python3 add_relaxed_self_declarations.py --root .            # dry run
    python3 add_relaxed_self_declarations.py --root . --apply    # write changes
"""
import argparse
import re
from pathlib import Path

FUNC_DEF_RE = re.compile(
    r'^([A-Za-z_][\w ]*?\**\s+\**)\s*([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{\s*(?://.*)?$'
)
DECL_RE = re.compile(
    r'^\s*[A-Za-z_][\w ]*?\**\s+\**\s*([A-Za-z_]\w*)\s*\([^;{]*\)\s*;'
)
CALL_RE_CACHE = {}


def get_functions_h_names(functions_h_path):
    text = Path(functions_h_path).read_text(errors='replace')
    names = set()
    for line in text.split('\n'):
        m = DECL_RE.match(line)
        if m:
            names.add(m.group(1))
    return names


def call_regex(name):
    r = CALL_RE_CACHE.get(name)
    if r is None:
        # Negative lookahead excludes the function's OWN definition line
        # ('name(params) {') -- a real call is never directly followed
        # by '{', only by ';' or more expression syntax.
        r = re.compile(r'\b' + re.escape(name) + r'\s*\(([^;{}]*)\)(?!\s*\{)')
        CALL_RE_CACHE[name] = r
    return r


def count_call_args(argstr):
    argstr = argstr.strip()
    if argstr in ('', 'void'):
        return 0
    depth = 0
    count = 1
    for ch in argstr:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        elif ch == ',' and depth == 0:
            count += 1
    return count


def count_params(paramstr):
    paramstr = paramstr.strip()
    if paramstr == '' or paramstr == 'void':
        return 0
    return len([p for p in paramstr.split(',') if p.strip() != ''])


def find_insertion_point(lines):
    """Right after the last top-of-file '#include' or plain local
    'extern'/declaration line, before the first real function body."""
    last = 0
    for i, line in enumerate(lines):
        s = line.strip()
        if s.startswith('#include') or s.startswith('extern ') or DECL_RE.match(line):
            last = i + 1
        elif '{' in line and not s.startswith('//'):
            break
    return last


def process_file(path, functions_h_names, apply_changes):
    text = path.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')

    # Names already declared locally somewhere in this file (as a real
    # standalone declaration, not the definition itself). Bounded to the
    # leading declaration block (before the first real function body):
    # DECL_RE's '[\w ]*?\s+...NAME\s*(...)... ;' shape also matches an
    # ordinary call statement inside a function body (e.g. 'return
    # func_NAME(arg0, arg1);', where 'return' plays the role of the
    # "type" prefix) -- scanning the whole file would wrongly mark that
    # name as already locally declared and skip adding the relaxed
    # self-declaration it actually needs.
    top_end = len(lines)
    for i, line in enumerate(lines):
        if '{' in line and not line.strip().startswith('//'):
            top_end = i
            break
    locally_declared = set()
    for line in lines[:top_end]:
        m = DECL_RE.match(line)
        if m:
            locally_declared.add(m.group(1))

    to_add = []  # (name, decl_text)
    for line in lines:
        m = FUNC_DEF_RE.match(line)
        if not m:
            continue
        prefix, name, params = m.groups()
        if name in functions_h_names or name in locally_declared:
            continue
        nparams = count_params(params)
        mismatched = False
        for cm in call_regex(name).finditer(text):
            nargs = count_call_args(cm.group(1))
            if nargs != nparams:
                mismatched = True
                break
        if mismatched:
            to_add.append((name, f'{prefix.strip()} {name}();'))

    if not to_add:
        return 0

    insert_at = find_insertion_point(lines)
    new_decls = [decl for _, decl in to_add]
    new_lines = lines[:insert_at] + new_decls + lines[insert_at:]

    print(f"{path}: added {len(to_add)} relaxed self-declaration(s): "
          f"{', '.join(n for n, _ in to_add)}")
    if apply_changes:
        path.write_text('\n'.join(new_lines), encoding='utf-8', newline='')
    return len(to_add)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--root', default='.')
    args = parser.parse_args()

    root = Path(args.root)
    functions_h_names = get_functions_h_names(root / 'include' / 'functions.h')
    print(f"Loaded {len(functions_h_names)} names from functions.h")

    total = 0
    files_touched = 0
    for path in sorted(root.glob('src/**/*.c')):
        count = process_file(path, functions_h_names, args.apply)
        if count:
            total += count
            files_touched += 1

    print()
    print(f"{'Would add' if not args.apply else 'Added'} {total} declaration(s) "
          f"across {files_touched} file(s)")
    if not args.apply:
        print("Re-run with --apply to write these changes.")


if __name__ == '__main__':
    main()
