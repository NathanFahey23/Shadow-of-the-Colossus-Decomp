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

_Bigint *func_0012E7E8(void *ptr, s32 k);
s32 func_0012EB78(u32 *y);
s32 func_0012EAF8(u32 x);

_Bigint *func_0012F538(void *ptr, double _d, s32 *e, s32 *bits) {
    union double_union d;
    _Bigint *b;
    s32 de, i, k;
    u32 *x, y, z;

    d.d = _d;
    b = func_0012E7E8(ptr, 1);
    x = b->_x;

    z = d0 & 0xfffff;
    d0 &= 0x7fffffff;
    if ((de = (int)(d0 >> 20)) != 0)
        z |= 0x100000;

    if (d1) {
        y = d1;
        k = func_0012EB78(&y);
        if (k) {
            x[0] = y | (z << (32 - k));
            z >>= k;
        } else {
            x[0] = y;
        }
        i = b->_wds = (x[1] = z) ? 2 : 1;
    } else {
        k = func_0012EB78(&z);
        x[0] = z;
        i = b->_wds = 1;
        k += 32;
    }

    if (de) {
        *e = de - 1023 - (53 - 1) + k;
        *bits = 53 - k;
    } else {
        *e = de - 1023 - (53 - 1) + 1 + k;
        *bits = 32 * i - func_0012EAF8(x[i - 1]);
    }
    return b;
}
