#!/usr/bin/env python3
"""postprocess_m2c.py — bulk rename + hot-symbol report on a folder of m2c C files."""
import re, sys, collections
from pathlib import Path

RENAMES = {
    "D_8008FDD4": "gGameState",
    "D_800CC2D0": "gObjects",
    "D_800D154C": "gCurrentObject",
    "D_800C3E78": "gCurrentObjectIndex",
    "func_150ADA20": "random_u32",
    "func_150ADA68": "random_float",
}

def apply_renames(text: str) -> str:
    for old, new in RENAMES.items():
        text = re.sub(r"\b" + re.escape(old) + r"\b", new, text)
    return text

def main(root: str) -> None:
    root_p = Path(root)
    func_refs = collections.Counter()
    data_refs = collections.Counter()
    gstate_fields = collections.Counter()
    n_files = 0

    for path in sorted(root_p.rglob("*.c")):
        text = path.read_text(encoding="utf-8", errors="replace")
        new = apply_renames(text)
        if new != text:
            path.write_text(new, encoding="utf-8")
        n_files += 1
        for m in re.finditer(r"\b(func_[0-9A-Fa-f]+)\b", new):
            func_refs[m.group(1)] += 1
        for m in re.finditer(r"\b(D_[0-9A-Fa-f]+)\b", new):
            data_refs[m.group(1)] += 1
        for m in re.finditer(r"gGameState\s*->\s*(unk[0-9A-Fa-f]+)", new):
            gstate_fields[m.group(1)] += 1

    print(f"Processed {n_files} files")
    print("\nTop remaining D_ symbols:")
    for s, c in data_refs.most_common(25):
        print(f"  {s}: {c}")
    print("\nTop func_ refs:")
    for s, c in func_refs.most_common(20):
        print(f"  {s}: {c}")
    print("\ngGameState fields:")
    for s, c in gstate_fields.most_common(15):
        print(f"  ->{s}: {c}")

    out = root_p / "symbols_suggested.txt"
    lines = [
        "gGameState = 0x8008FDD4; // fields: "
        + ", ".join(f"{k}({v})" for k, v in gstate_fields.most_common(8)),
        "gObjects   = 0x800CC2D0; // stride 812 (0x32C)",
        "",
        "# Top unnamed data (name these next):",
    ]
    for s, c in data_refs.most_common(15):
        lines.append(f"# {s}  ({c} refs)")
    out.write_text("\n".join(lines) + "\n", encoding="utf-8")
    print(f"\nWrote {out}")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print(f"Usage: {sys.argv[0]} <src_or_cleaned_src_folder>")
        sys.exit(1)
    main(sys.argv[1])
