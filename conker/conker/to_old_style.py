#!/usr/bin/env python3
# Rewrites a function's prototype-style definition as an old-style (K&R) one, and
# can retype its parameters on the way:
#   python to_old_style.py src/file.c func_10017870 arg0=u8 [pan=u8 ...]
# An old-style definition doesn't change how callers pass the arguments (they're
# promoted to int either way), but the function then reads a narrowed parameter
# back with lbu/lh from its stack slot, as IDO's code for the original does.
import re, sys

path, name, *retypes = sys.argv[1:]
retype = dict(r.split('=', 1) for r in retypes)
src = open(path, 'rb').read().decode()
m = re.search(r'^([^\n;#/]*?\b' + re.escape(name) + r')\(([^)]*)\)\s*\{', src, re.M)
if not m:
    sys.exit(f'{name}: no definition found in {path}')
params = []
for p in (x.strip() for x in m.group(2).split(',')):
    pm = re.match(r'(.*?)(\w+)$', p)
    ptype, pname = pm.group(1).strip(), pm.group(2)
    params.append((retype.pop(pname, ptype), pname))
if retype:
    sys.exit(f'{name}: no parameter named {", ".join(retype)}')
def declaration(ptype, pname):
    if ptype.endswith('*'):
        return f'    {ptype.rstrip("*").rstrip()} {"*" * (len(ptype) - len(ptype.rstrip("*")))}{pname};\n'
    return f'    {ptype} {pname};\n'


decls = ''.join(declaration(t, n) for t, n in params)
new = f'{m.group(1)}({", ".join(n for _, n in params)})\n{decls}{{'
src = src[:m.start()] + new + src[m.end():]
open(path, 'wb').write(src.encode())
print(new)
