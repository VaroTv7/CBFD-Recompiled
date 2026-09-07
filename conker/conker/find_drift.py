import re, sys

# Parse the .map file for a sequential list of (actual_linked_addr, symbol_name)
# entries whose name encodes func_/D_ + hex address (the project's auto-naming
# convention). Compare declared-in-name address vs actual-linked address to
# find exactly where cumulative size drift is introduced.
#
# Usage: python3 find_drift.py [lo_hex] [hi_hex]
#   defaults to the .init section range if no args given.

pat = re.compile(r'^\s*0x([0-9a-fA-F]{8})\s+((?:func|D)_([0-9A-Fa-f]{8}))\s*$')

entries = []
with open('build/conker.us.map', encoding='utf-8', errors='replace') as f:
    for line in f:
        m = pat.match(line)
        if not m:
            continue
        actual = int(m.group(1), 16)
        name = m.group(2)
        declared = int(m.group(3), 16)
        entries.append((actual, declared, name))

lo = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x10001000
hi = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x10023000
entries = [e for e in entries if lo <= e[0] < hi]

prev_delta = 0
for actual, declared, name in entries:
    delta = actual - declared
    if delta != prev_delta:
        print(f"DRIFT CHANGE at {name}: actual=0x{actual:08x} declared=0x{declared:08x} "
              f"delta {prev_delta:+d} -> {delta:+d} (introduced {delta-prev_delta:+d} bytes here)")
        prev_delta = delta
