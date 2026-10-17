import sys
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT))
import build

name = sys.argv[1] if len(sys.argv) > 1 else 'func_001091C0'
fn = next(f for f in build.B['functions'] if f['name'] == name)
wrap = build.ROOT / 'build' / 'wrap' / f'{fn["name"]}.s'
wrap.parent.mkdir(parents=True, exist_ok=True)
wrap.write_text(build.PREAMBLE[build.B['platform']] + f'.include "{fn["asm"]}"\n', encoding='utf-8')
obj = f'build/{Path(fn["asm"]).with_suffix(".o").as_posix()}'
Path(obj).parent.mkdir(parents=True, exist_ok=True)
as_ = build.binutils('as')
build.run([as_, *build.B['as_flags'], '-o', obj, wrap.relative_to(build.ROOT).as_posix()])
print(f'Successfully assembled {obj}')
