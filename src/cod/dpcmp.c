#include "common.h"

typedef struct {
    u8 pad[0x20];
} UnpackedDouble;

void func_001271B0(f64 *, UnpackedDouble *);
s32 func_00127270(UnpackedDouble *, UnpackedDouble *);

s32 dpcmp(f64 a, f64 b) {
    UnpackedDouble u1;
    UnpackedDouble u2;

    func_001271B0(&a, &u1);
    func_001271B0(&b, &u2);
    return func_00127270(&u1, &u2);
}
