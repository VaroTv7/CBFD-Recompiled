import os
import sys

def find_symbol_usages(directory, symbol):
    extensions = ('.c', '.h', '.s', '.asm', '.txt', '.toml', '.yaml', '.json')
    print(f"Searching for '{symbol}' in '{directory}'...\n")
    found = False
    
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith(extensions):
                filepath = os.path.join(root, file)
                try:
                    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
                        for line_num, line in enumerate(f, 1):
                            if symbol in line:
                                print(f"{filepath}:{line_num}: {line.strip()}")
                                found = True
                except Exception as e:
                    print(f"Error reading {filepath}: {e}", file=sys.stderr)
                    
    if not found:
        print(f"No usages of '{symbol}' found.")

if __name__ == "__main__":
    target_dir = sys.argv[1] if len(sys.argv) > 1 else "."
    symbol_to_find = sys.argv[2] if len(sys.argv) > 2 else "D_8008FD8C"
    find_symbol_usages(target_dir, symbol_to_find)