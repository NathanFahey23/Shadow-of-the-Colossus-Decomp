#include "common.h"

struct _Bigint {
    struct _Bigint *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    int _x[1];
};

struct _Bigint *func_0012E7E8(void *ptr, int k);

struct _Bigint *func_0012EC38(void *ptr, int i) {
    struct _Bigint *b;

    b = func_0012E7E8(ptr, 1);
    b->_x[0] = i;
    b->_wds = 1;
    return b;
}
