#include "common.h"

typedef struct {
    s32 class;
    u32 sign;
    s32 normal_exp;
    u64 fraction;
} fp_number_type;

typedef union {
    s64 value;
    u64 value_raw;
} FLO_union_type;

void func_001271B0(FLO_union_type *, fp_number_type *);
s32 func_001270A8(s32, u32, s32, u32);

s32 func_001258A0(s64 arg_a) {
    fp_number_type a;
    FLO_union_type au;
    u32 f;

    au.value = arg_a;
    func_001271B0(&au, &a);
    f = a.fraction >> 30;
    if (a.fraction & 0x3fffffff)
        f |= 1;
    return func_001270A8(a.class, a.sign, a.normal_exp, f);
}
