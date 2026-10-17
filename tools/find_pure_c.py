import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
b = json.loads((ROOT / "build.json").read_text(encoding="utf-8"))
readme = (ROOT / "README.md").read_text(encoding="utf-8")
excluded = set(re.findall(r'`(func_[0-9A-Fa-f]+|visit_and_clear_pending_entries)`', readme))
unmatched = {f["name"] for f in b["functions"] if "c" not in f} - excluded

candidates = []
for f in b["functions"]:
    if f["name"] not in unmatched:
        continue
    asm_path = ROOT / f["asm"]
    if not asm_path.exists():
        continue
    text = asm_path.read_text(encoding="utf-8", errors="replace")
    # Filter out handwritten assembly: syscall, cop0, sync, gp manipulation ($28)
    if re.search(r'syscall\s+0|mtc0|mfc0|\bsync\b|\$28|\$gp', text):
        continue
    # Filter out asm labels / stubs with nop loops
    lines = len(text.splitlines())
    candidates.append((lines, f["name"], f["vram"], f["seg"]))

candidates.sort()
print(f"Total pure C candidates without $gp: {len(candidates)}")
print("Smallest 30 candidates:")
for lines, name, vram, seg in candidates[:30]:
    print(f"  {name} ({lines} lines, 0x{vram:X}, {seg})")
