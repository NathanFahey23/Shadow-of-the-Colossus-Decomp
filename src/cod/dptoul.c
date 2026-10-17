#include "common.h"

// TARGET: 0x001258F8
// TC: 2.96
// -G0
// -O2

typedef enum {
    CLASS_SNAN,
    CLASS_QNAN,
    CLASS_ZERO,
    CLASS_NUMBER,
    CLASS_INFINITY
} fp_class_type;

typedef struct {
    fp_class_type class;
    unsigned int sign;
    int normal_exp;
    u64 fraction;
} fp_number_type;

typedef union {
    f64 f;
    s64 value;
    u64 value_raw;
} FLO_union_type;

void func_001271B0(FLO_union_type *, fp_number_type *);

u32 dptoul(f64 value) {
    fp_number_type a;
    FLO_union_type au;

    au.f = value;
    func_001271B0(&au, &a);

    if ((a.class ^ 2) == 0)
        return 0;
    if (a.class < 2)
        return 0;
    if (a.sign)
        return 0;
    if ((a.class ^ 4) == 0)
        return (u32)-1;
    if (a.normal_exp < 0)
        return 0;
    if (a.normal_exp > 31)
        return (u32)-1;

    if (a.normal_exp >= 61)
        return a.fraction << (a.normal_exp - 60);
    else
        return a.fraction >> (60 - a.normal_exp);
}
