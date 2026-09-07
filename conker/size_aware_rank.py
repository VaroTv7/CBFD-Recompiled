import re, csv

# get function lengths from the map (.game section) by consecutive-address delta
with open('build/conker.us.map', encoding='utf-8', errors='replace') as f:
    lines = f.readlines()

in_sec = False
entries = []
for line in lines:
    if re.match(r'^\.game\s', line):
        in_sec = True
        continue
    if in_sec and re.match(r'^\.game_data\s', line):
        break
    if not in_sec:
        continue
    m = re.match(r'^\s+0x([0-9a-fA-F]{8})\s+(\S+)\s*$', line)
    if m:
        entries.append((int(m.group(1), 16), m.group(2)))

entries.sort()
length = {}
for i in range(len(entries)):
    addr, name = entries[i]
    nxt = entries[i+1][0] if i+1 < len(entries) else addr + 4
    length[name] = nxt - addr

scores = {}
with open('func_scores.csv') as f:
    r = csv.DictReader(f)
    for row in r:
        try:
            scores[row['func']] = int(row['current_score'])
        except ValueError:
            pass

results = []
for name, score in scores.items():
    ln = length.get(name)
    if ln and ln > 0:
        # instructions ~ ln/4; ratio = score per instruction
        ratio = score / (ln / 4)
        results.append((ratio, score, ln, ln // 4, name))

results.sort()
print(f'{'ratio':>8} {'score':>7} {'bytes':>6} {'instrs':>6}  name')
for ratio, score, ln, instrs, name in results[:30]:
    print(f'{ratio:8.1f} {score:7d} {ln:6d} {instrs:6d}  {name}')
