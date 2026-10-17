#include "common.h"

struct _Bigint {
    struct _Bigint *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    int _x[1];
};

typedef struct {
    u8 pad[0x4C];
    struct _Bigint **_freelist;
} Reent;

void *func_00131048(void *ptr, u32 n, u32 size);

struct _Bigint *func_0012E7E8(Reent *ptr, int k) {
    int x;
    struct _Bigint *rv;

    if (ptr->_freelist == NULL) {
        ptr->_freelist = (struct _Bigint **)func_00131048(ptr, sizeof(struct _Bigint *), 16);
        if (ptr->_freelist == NULL) {
            return NULL;
        }
    }

    if ((rv = ptr->_freelist[k]) != 0) {
        ptr->_freelist[k] = rv->_next;
    } else {
        x = 1 << k;
        rv = (struct _Bigint *)func_00131048(ptr, 1, sizeof(struct _Bigint) + (x - 1) * sizeof(rv->_x[0]));
        if (rv == NULL) return NULL;
        rv->_k = k;
        rv->_maxwds = x;
    }
    rv->_sign = rv->_wds = 0;
    return rv;
}
