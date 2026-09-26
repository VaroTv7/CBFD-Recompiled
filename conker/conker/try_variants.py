#!/usr/bin/env python3
# Tries C variants of one function: each replaces the function's body in its
# source file, rebuilds, and reports the function's differences (and the total
# count, to catch size changes). The file is restored afterwards.
#   python try_variants.py variants.py
# variants.py defines FILE, FUNC and VARIANTS = [(name, full definition text), ...].
import re, runpy, subprocess, sys

spec = runpy.run_path(sys.argv[1])
path, func, variants = spec['FILE'], spec['FUNC'], spec['VARIANTS']
original = open(path, 'rb').read()
text = original.decode()
m = re.search(r'^[A-Za-z][^;\n]*\b' + func + r'\([^;{]*\{', text, re.M)
start, end = m.start(), text.index('\n}\n', m.start()) + 3
try:
    for name, body in variants:
        open(path, 'wb').write((text[:start] + body.strip('\n') + '\n' + text[end:]).encode())
        build = subprocess.run(['wsl', 'bash', '-c', 'make -j8 NON_MATCHING=1 2>&1 | grep -E "Error" | head -3'],
                               capture_output=True, text=True).stdout.strip()
        if build:
            print(f'{name}: build error')
            continue
        census = subprocess.run([sys.executable, 'find_code_diff.py'], capture_output=True, text=True).stdout
        total = sum(int(x) for x in re.findall(r'functions with non-reloc diffs: (\d+)', census))
        mine = re.search(r'^\s+' + func + r' (\d+)$', census, re.M)
        print(f'{name}: {mine.group(1) if mine else 0} differences in {func}, {total} functions differ overall')
finally:
    open(path, 'wb').write(original)
