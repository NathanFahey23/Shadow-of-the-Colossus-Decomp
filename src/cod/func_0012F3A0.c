#include "common.h"

typedef struct _Bigint {
    struct _Bigint *_next;
    s32 _k;
    s32 _maxwds;
    s32 _sign;
    s32 _wds;
    u32 _x[1];
} _Bigint;

union double_union {
    double d;
    u32 i[2];
};

#define word0(x) ((x).i[1])
#define word1(x) ((x).i[0])
#define d0 word0(d)
#define d1 word1(d)

s32 func_0012EAF8(u32 x);

double func_0012F3A0(_Bigint *a, s32 *e) {
    u32 *xa, *xa0, w, y, z;
    s32 k;
    union double_union d;

    xa0 = a->_x;
    xa = xa0 + a->_wds;
    y = *--xa;
    k = func_0012EAF8(y);
    *e = 32 - k;
    if (k < 11) {
        d0 = 0x3ff00000 | (y >> (11 - k));
        w = xa > xa0 ? *--xa : 0;
        d1 = (y << ((32 - 11) + k)) | (w >> (11 - k));
        goto ret_d;
    }
    z = xa > xa0 ? *--xa : 0;
    if (k -= 11) {
        d0 = 0x3ff00000 | (y << k) | (z >> (32 - k));
        y = xa > xa0 ? *--xa : 0;
        d1 = (z << k) | (y >> (32 - k));
    } else {
        d0 = 0x3ff00000 | y;
        d1 = z;
    }
ret_d:
    return d.d;
}
