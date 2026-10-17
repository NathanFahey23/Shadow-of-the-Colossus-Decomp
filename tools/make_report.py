import json
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
b = json.loads((ROOT / "build.json").read_text(encoding="utf-8"))
funcs = b["functions"]
first_data_vram = b["segments"][0]["pieces"][0]["vram"]

total_code = 0
matched_code = 0
total_funcs = len(funcs)
matched_funcs = 0

units = []

for i, f in enumerate(funcs):
    vram = f["vram"]
    next_vram = funcs[i + 1]["vram"] if i + 1 < len(funcs) else first_data_vram
    size = next_vram - vram
    total_code += size

    name = f["name"]
    seg = f["seg"]
    unit_name = f"{seg}/{name}"
    c_file = Path("src") / seg / f"{name}.c"
    is_matched = (ROOT / c_file).exists()

    if is_matched:
        matched_funcs += 1
        matched_code += size
        unit = {
            "name": unit_name,
            "measures": {
                "fuzzy_match_percent": 100.0,
                "total_code": str(size),
                "matched_code": str(size),
                "matched_code_percent": 100.0,
                "total_functions": 1,
                "matched_functions": 1,
                "matched_functions_percent": 100.0,
                "total_units": 1
            },
            "sections": [
                {
                    "name": ".text",
                    "size": str(size),
                    "fuzzy_match_percent": 100.0,
                    "metadata": {}
                }
            ],
            "functions": [
                {
                    "name": name,
                    "size": str(size),
                    "fuzzy_match_percent": 100.0,
                    "metadata": {},
                    "address": str(vram)
                }
            ],
            "metadata": {
                "source_path": c_file.as_posix(),
                "progress_categories": ["code"],
                "complete": True
            }
        }
    else:
        unit = {
            "name": unit_name,
            "measures": {
                "fuzzy_match_percent": 0.0,
                "total_code": str(size),
                "matched_code": "0",
                "matched_code_percent": 0.0,
                "total_functions": 1,
                "matched_functions": 0,
                "matched_functions_percent": 0.0,
                "total_units": 1
            },
            "sections": [
                {
                    "name": ".text",
                    "size": str(size),
                    "metadata": {}
                }
            ],
            "functions": [
                {
                    "name": name,
                    "size": str(size),
                    "metadata": {},
                    "address": str(vram)
                }
            ],
            "metadata": {
                "progress_categories": ["code"],
                "complete": False
            }
        }
    units.append(unit)

matched_pct = round(100.0 * matched_code / total_code, 4)
matched_funcs_pct = round(100.0 * matched_funcs / total_funcs, 4)

report = {
    "version": 2,
    "measures": {
        "fuzzy_match_percent": matched_pct,
        "total_code": str(total_code),
        "matched_code": str(matched_code),
        "matched_code_percent": matched_pct,
        "total_functions": total_funcs,
        "matched_functions": matched_funcs,
        "matched_functions_percent": matched_funcs_pct,
        "total_units": len(units)
    },
    "categories": [
        {
            "id": "code",
            "name": "Code",
            "measures": {
                "fuzzy_match_percent": matched_pct,
                "total_code": str(total_code),
                "matched_code": str(matched_code),
                "matched_code_percent": matched_pct,
                "total_functions": total_funcs,
                "matched_functions": matched_funcs,
                "matched_functions_percent": matched_funcs_pct,
                "total_units": len(units)
            }
        }
    ],
    "units": units
}

out_dir = ROOT / "build"
out_dir.mkdir(parents=True, exist_ok=True)
out_path = out_dir / "report.json"
out_path.write_text(json.dumps(report, indent=2), encoding="utf-8")
print(f"Report generated successfully: {out_path}")
print(f"Measures: {json.dumps(report['measures'], indent=2)}")
