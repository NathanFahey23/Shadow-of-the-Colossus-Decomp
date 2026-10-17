#include "common.h"

typedef struct _Bigint {
    struct _Bigint *_next;
    s32 _k;
    s32 _maxwds;
    s32 _sign;
    s32 _wds;
    u32 _x[1];
} _Bigint;

_Bigint *func_0012E7E8(void *ptr, s32 k);
_Bigint *func_0012E8C0(void *ptr, _Bigint *b, s32 m, s32 a);

_Bigint *func_0012E9C8(void *ptr, const char *s, s32 nd0, s32 nd, u32 y9) {
    _Bigint *b;
    s32 i, k;
    s32 x, y;

    x = (nd + 8) / 9;
    for (k = 0, y = 1; x > y; y <<= 1, k++);
    b = func_0012E7E8(ptr, k);
    b->_x[0] = y9;
    b->_wds = 1;

    i = 9;
    if (9 < nd0) {
        s += 9;
        do {
            b = func_0012E8C0(ptr, b, 10, *s++ - '0');
        } while (++i < nd0);
        s++;
    } else {
        s += 10;
    }
    for (; i < nd; i++) {
        b = func_0012E8C0(ptr, b, 10, *s++ - '0');
    }
    return b;
}
