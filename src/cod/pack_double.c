#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    u64 f10;
} UnpackedDouble;

f64 func_001270D8(void *);

f64 pack_double(s32 arg0, s32 arg1, s32 arg2, u64 arg3) {
    UnpackedDouble u;
    u.f0 = arg0;
    u.f4 = arg1;
    u.f8 = arg2;
    u.f10 = arg3;
    return func_001270D8(&u);
}
