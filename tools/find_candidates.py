import json
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
b = json.loads((ROOT / 'build.json').read_text(encoding='utf-8'))
readme = (ROOT / 'README.md').read_text(encoding='utf-8')
notes_funcs = set()
for line in readme.splitlines():
    if line.startswith("- `"):
        parts = line.split("`")
        if len(parts) >= 2:
            notes_funcs.add(parts[1])

funcs = b['functions']
first_data_vram = b['segments'][0]['pieces'][0]['vram']

candidates = []
for i, f in enumerate(funcs):
    vram = f['vram']
    next_vram = funcs[i + 1]['vram'] if i + 1 < len(funcs) else first_data_vram
    size = next_vram - vram
    name = f['name']
    seg = f['seg']
    c_file = ROOT / 'src' / seg / f'{name}.c'
    if not c_file.exists() and name not in notes_funcs:
        asm_path = ROOT / f['asm']
        text = asm_path.read_text(encoding='utf-8', errors='replace')
        if any(w in text for w in ['/* Handwritten', 'syscall', 'mtc0', 'mfc0', 'cfc2', 'ctc2', 'sync']):
            continue
        instr_lines = [l for l in text.splitlines() if '/*' in l and '*/' in l]
        candidates.append((len(instr_lines), size, name, seg, f['asm'], vram))

candidates.sort(key=lambda x: x[0])
print(f'Total pure C candidate functions: {len(candidates)}')
print('Smallest 20 candidates by instruction count:')
for ninstr, sz, name, seg, asm, vram in candidates[:20]:
    print(f'{name} ({ninstr} instructions, {sz} bytes, 0x{vram:X})')
