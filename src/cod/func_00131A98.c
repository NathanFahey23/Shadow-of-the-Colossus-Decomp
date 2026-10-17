#include "common.h"

#include "common.h"

u64 func_00124C78(f64);
s32 func_00125768(f64, f64);
f64 func_00125338(f64, f64);

s64 func_00131A98(f64 a) {
    if (func_00125768(a, 0.0) < 0) {
        return -func_00124C78(func_00125338(0.0, a));
    }
    return func_00124C78(a);
}
