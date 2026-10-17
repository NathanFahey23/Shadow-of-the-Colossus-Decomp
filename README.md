# Shadow of the Colossus (Decompilation)

[![Code](https://bytematch.dev/NathanFahey23/Shadow-of-the-Colossus-Decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://bytematch.dev/NathanFahey23/Shadow-of-the-Colossus-Decomp)
[![Functions](https://bytematch.dev/NathanFahey23/Shadow-of-the-Colossus-Decomp.svg?mode=shield&label=Functions&measure=matched_functions)](https://bytematch.dev/NathanFahey23/Shadow-of-the-Colossus-Decomp)

A matching decompilation of Shadow of the Colossus (PS2, NTSC-U) into standard C, started with [decomp.wtf](https://decomp.wtf).
Track live progress, function matching status, and history on **[ByteMatch](https://bytematch.dev/NathanFahey23/Shadow-of-the-Colossus-Decomp)**.

Currently, **575 of 1043 functions (55.13%)** and **35.56% of code bytes** compile to byte-for-byte identical machine code.
`build.py` rebuilds the game from this tree and checks it against your original, byte for byte.

## Build

1. Put your own copy of the game here as `baserom.bin` (it is in `.gitignore`; never commit it).
2. `python build.py` (needs decomp.wtf installed for the period compiler and assembler).

## Layout

| Path | What it is |
| :-- | :-- |
| `src/<segment>/<function>.c` | Decompiled functions, one per file, each matching the original. |
| `asm/nonmatchings/` | Assembly of every function (the target for the decompiled ones). |
| `asm/data/`, `asm/*.s`, `assets/` | Data, start-up code and binary parts, still as assembly or binary. |
| `include/common.h` | Types, structs and prototypes worked out so far. |
| `game.ld` | Places every function and data block at its original address. |
| `build.json`, `build.py` | How each file is built, and the build. |
| `objdiff.json` | Per-function units for [objdiff](https://github.com/encounter/objdiff). |

Keep going with any tool: write a function in C under `src/`, add it to `build.json` (see the existing entries),
run `build.py`. When it says *identical*, the function matches. This is the base for ports and mods: once
everything is C, the game can be rebuilt, changed and moved to other platforms.

The game's code and data belong to their rights holder: keep this tree to yourself unless you have the right to
share it.

## Notes
- `visit_and_clear_pending_entries`: kept as assembly, no longer matches
- `func_0010C058`: kept as assembly, no longer matches
- `func_0010C230`: kept as assembly, no longer matches
- `func_0010C600`: kept as assembly, no longer matches
- `func_0010CFB8`: kept as assembly, no longer matches
- `func_0010D408`: kept as assembly, no longer matches
- `func_0010DED8`: kept as assembly, no longer matches
- `func_0010E9F0`: kept as assembly, no longer matches
- `func_0010EC58`: kept as assembly, no longer matches
- `func_0010ED80`: kept as assembly, no longer matches
- `func_00112BD0`: kept as assembly, no longer matches
- `func_00112BE8`: kept as assembly, no longer matches
- `func_00117588`: kept as assembly, no longer matches
- `func_00119528`: kept as assembly, no longer matches
- `func_00119548`: kept as assembly, no longer matches
- `func_00120470`: kept as assembly, no longer matches
- `func_00120490`: kept as assembly, no longer matches
- `func_001204B0`: kept as assembly, no longer matches
- `func_00120CD0`: kept as assembly, no longer matches
- `func_00120CF0`: kept as assembly, no longer matches
- `func_00122338`: kept as assembly, no longer matches
- `func_00122358`: kept as assembly, no longer matches
