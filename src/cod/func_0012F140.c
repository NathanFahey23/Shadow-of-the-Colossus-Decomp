#include "common.h"

typedef struct _Bigint {
    struct _Bigint *_next;
    s32 _k;
    s32 _maxwds;
    s32 _sign;
    s32 _wds;
    u32 _x[1];
} _Bigint;

int func_0012F0D8(_Bigint *a, _Bigint *b);
_Bigint *func_0012E7E8(void *ptr, s32 k);

#define Storeinc(a, b, c) (((unsigned short *)(a))[1] = (unsigned short)(b), ((unsigned short *)(a))[0] = (unsigned short)(c), (a)++)

_Bigint *func_0012F140(void *ptr, _Bigint *a, _Bigint *b) {
    _Bigint *c;
    int i, wa, wb;
    s32 borrow, y;
    u32 *xa, *xae, *xb, *xbe, *xc;
    s32 z;

    i = func_0012F0D8(a, b);
    if (!i) {
        c = func_0012E7E8(ptr, 0);
        c->_wds = 1;
        c->_x[0] = 0;
        return c;
    }
    if (i < 0) {
        c = a;
        a = b;
        b = c;
        i = 1;
    } else
        i = 0;
    c = func_0012E7E8(ptr, a->_k);
    c->_sign = i;
    wa = a->_wds;
    xa = a->_x;
    xae = xa + wa;
    wb = b->_wds;
    xb = b->_x;
    xbe = xb + wb;
    xc = c->_x;
    borrow = 0;
    do {
        y = (*xa & 0xffff) - (*xb & 0xffff) + borrow;
        borrow = y >> 16;
        z = (*xa++ >> 16) - (*xb++ >> 16) + borrow;
        borrow = z >> 16;
        Storeinc(xc, z, y);
    } while (xb < xbe);
    while (xa < xae) {
        y = (*xa & 0xffff) + borrow;
        borrow = y >> 16;
        z = (*xa++ >> 16) + borrow;
        borrow = z >> 16;
        Storeinc(xc, z, y);
    }
    while (!*--xc)
        wa--;
    c->_wds = wa;
    return c;
}
