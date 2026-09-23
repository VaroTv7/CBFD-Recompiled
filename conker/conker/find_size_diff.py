import re, sys

# Companion to find_drift.py. That script reports where cumulative drift
# CHANGES, which attributes an event to the function after the one at
# fault. This one compares each function's own size (distance to the next
# symbol) against target's (distance between the declared addresses in the
# names), so it names the function that is actually wrong and by how much.
#
# Usage: python3 find_size_diff.py [lo_hex] [hi_hex]
#   defaults to the .game overlay range.

pat = re.compile(r'^\s*0x([0-9a-fA-F]{8})\s+((?:func|D)_([0-9A-Fa-f]{8}))\s*$')
entries = []
for line in open('build/conker.us.map', encoding='utf-8', errors='replace'):
    m = pat.match(line)
    if m:
        entries.append((int(m.group(1), 16), int(m.group(3), 16), m.group(2)))

lo = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x15000000
hi = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x16000000
entries = [e for e in entries if lo <= e[0] < hi]
entries.sort()

out = []
for i in range(len(entries) - 1):
    a0, d0, n0 = entries[i]
    a1, d1, _ = entries[i + 1]
    ours, theirs = a1 - a0, d1 - d0
    if ours != theirs:
        out.append((theirs - ours, n0, ours, theirs))

print("%d functions differ in size" % len(out))
for delta, name, ours, theirs in out:
    print("  %-18s ours=%-5d target=%-5d  short by %+d" % (name, ours, theirs, delta))
