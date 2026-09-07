#!/usr/bin/env bash
# batch_m2c_v2.sh — improved automated m2c + cleanup pipeline
set -euo pipefail

# ============== CONFIG ==============
CONKER_ROOT="/mnt/d/Retro Emulation/Conker's Recomp/conker/conker"
ASM_DIR="${CONKER_ROOT}/asm"
SRC_DIR="${CONKER_ROOT}/src"
M2C_DIR="/mnt/d/Retro Emulation/Conker's Recomp/tools/m2c"
OUT_DIR="/mnt/d/Retro Emulation/Conker's Recomp/tools/cleaned_src"
GAME_OUT="${OUT_DIR}/game"

TARGET="mips-ido-c"
MAX_FILES=0
MAX_ASM_SIZE=0
ONLY_NEW=1
# ====================================

mkdir -p "${GAME_OUT}"

if [[ -f "${M2C_DIR}/.venv/bin/activate" ]]; then
  # shellcheck disable=SC1091
  source "${M2C_DIR}/.venv/bin/activate"
fi

M2C_PY="${M2C_DIR}/m2c.py"
[[ -f "${M2C_PY}" ]] || { echo "ERROR: m2c.py not found"; exit 1; }

apply_renames() {
  local f="$1"
  sed -i \
    -e 's/\bD_8008FDD4\b/gGameState/g' \
    -e 's/\bD_800CC2D0\b/gObjects/g' \
    "$f"
}

declare -A SKIP
if [[ -d "${SRC_DIR}" ]]; then
  while IFS= read -r -d '' f; do
    b=$(basename "$f" .c)
    SKIP["$b"]=1
    SKIP["${b#game_}"]=1
    SKIP["${b#init_}"]=1
  done < <(find "${SRC_DIR}" -name '*.c' -print0 2>/dev/null || true)
fi
if [[ -d "${GAME_OUT}" ]]; then
  while IFS= read -r -d '' f; do
    b=$(basename "$f" .c)
    SKIP["$b"]=1
    SKIP["${b#game_}"]=1
  done < <(find "${GAME_OUT}" -name '*.c' -print0 2>/dev/null || true)
fi

echo "Skip set size: ${#SKIP[@]}"

count=0; skipped=0; failed=0
mapfile -t ASM_FILES < <(find "${ASM_DIR}" -maxdepth 1 -name '*.s' -type f | sort)

for asm in "${ASM_FILES[@]}"; do
  name=$(basename "$asm" .s)
  [[ "$name" == "header" ]] && { ((skipped++))||true; continue; }
  if [[ -n "${SKIP[$name]+x}" ]]; then
    ((skipped++))||true
    continue
  fi
  if (( MAX_ASM_SIZE > 0 )); then
    sz=$(stat -c%s "$asm")
    if (( sz > MAX_ASM_SIZE )); then
      echo "SKIP large ($sz): $name"
      ((skipped++))||true
      continue
    fi
  fi
  out_c="${GAME_OUT}/game_${name}.c"
  if [[ "$ONLY_NEW" == "1" && -f "$out_c" ]]; then
    ((skipped++))||true
    continue
  fi
  echo -n "m2c ${name} ... "
  if python3 "${M2C_PY}" --target "${TARGET}" "$asm" > "${out_c}.tmp" 2>/dev/null; then
    if [[ ! -s "${out_c}.tmp" ]] || [[ $(wc -c < "${out_c}.tmp") -lt 40 ]]; then
      echo "empty"; rm -f "${out_c}.tmp"; ((failed++))||true; continue
    fi
    {
      echo "/**"
      echo " * Auto-decompiled from asm/${name}.s (non-matching)"
      echo " * Renames: D_8008FDD4->gGameState, D_800CC2D0->gObjects"
      echo " */"
      echo
      cat "${out_c}.tmp"
    } > "${out_c}"
    rm -f "${out_c}.tmp"
    apply_renames "${out_c}"
    echo "OK ($(wc -c < "${out_c}") bytes)"
    ((count++))||true
  else
    echo "FAIL"
    rm -f "${out_c}.tmp"
    ((failed++))||true
  fi
  if (( MAX_FILES > 0 && count >= MAX_FILES )); then
    echo "Hit MAX_FILES=$MAX_FILES"; break
  fi
done

echo "Post-pass renames..."
find "${OUT_DIR}" -name '*.c' -print0 | while IFS= read -r -d '' f; do
  apply_renames "$f"
done

cat > "${OUT_DIR}/symbols_suggested.txt" << 'EOF'
gGameState = 0x8008FDD4;
gObjects   = 0x800CC2D0; // element size 812 (0x32C)
EOF

echo
echo "======== DONE ========"
echo "Converted : $count"
echo "Skipped   : $skipped"
echo "Failed    : $failed"
echo "Output    : $OUT_DIR"
