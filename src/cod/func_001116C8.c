#include "common.h"

// TC: 2.96
// -fno-optimize-sibling-calls
s32 func_00124D90(f32);

s32 func_001116C8(f32 freq) {
    return func_00124D90(147456000.0f / freq);
}
