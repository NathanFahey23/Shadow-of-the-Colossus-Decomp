import sys, re, subprocess
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT))
import build
from decompnet.compiler import run_in, compile_source
from decompnet.project import compiler_config

name = sys.argv[1] if len(sys.argv) > 1 else 'func_001000C0'
cfg = compiler_config(build.ROOT, {'compiler': build.B['compiler']})
text = (build.ROOT / f'src/cod/{name}.c').read_text(encoding='utf-8')
m = re.match(r'\s*#include "([^"]+)"\s*\n', text)
header = (build.ROOT / 'include' / m.group(1)).read_text(encoding='utf-8') if m else ''
res = compile_source(cfg, header, text[m.end():] if m else text, trusted=True)
print("res.ok:", res.ok)
if not res.ok:
    print("res.log:", res.log)

if res.obj:
    tmp = ROOT / "build" / "temp.o"
    tmp.write_bytes(res.obj)
    objdump = build.binutils('objdump')
    out = subprocess.run([objdump, '-d', '-r', str(tmp)], capture_output=True)
    print("=== COMPILED ===")
    print(out.stdout.decode('utf-8', errors='replace'))

print("=== ORIGINAL ASM ===")
asm_path = build.ROOT / f'asm/nonmatchings/cod/{name}.s'
print(asm_path.read_text(encoding='utf-8'))
