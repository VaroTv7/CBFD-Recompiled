import json, subprocess, sys

with open('touched_funcs.txt') as f:
    funcs = [l.strip() for l in f if l.strip()]

results = []
for i, fn in enumerate(funcs):
    try:
        out = subprocess.run(
            ['python3', 'tools/asm-differ/diff.py', '--format', 'json', '--no-pager', fn],
            capture_output=True, text=True, timeout=15
        )
        data = json.loads(out.stdout)
        cur = data.get('current_score')
        mx = data.get('max_score')
        results.append((fn, cur, mx))
    except Exception as e:
        results.append((fn, None, None))
    if (i+1) % 50 == 0:
        print(f'{i+1}/{len(funcs)}', file=sys.stderr)

with open('func_scores.csv', 'w') as f:
    f.write('func,current_score,max_score\n')
    for fn, cur, mx in results:
        f.write(f'{fn},{cur},{mx}\n')
