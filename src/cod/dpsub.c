#include "common.h"

typedef struct {
    s32 kind;
    s32 sign;
    s32 exp;
    s32 pad;
    u64 fraction;
    u64 pad2;
} UnpackedDouble;

void func_001271B0(f64 *, UnpackedDouble *);
UnpackedDouble *func_00125080(UnpackedDouble *, UnpackedDouble *, UnpackedDouble *);
f64 func_001270D8(UnpackedDouble *);

f64 dpsub(f64 a, f64 b) {
    UnpackedDouble u1;
    UnpackedDouble u2;
    UnpackedDouble res;

    func_001271B0(&a, &u1);
    func_001271B0(&b, &u2);
    u2.sign ^= 1;
    return func_001270D8(func_00125080(&u1, &u2, &res));
}
