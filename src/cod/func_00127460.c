#include "common.h"

// TARGET: 0x00127460
// TC: 2.96
// -G0
// -O2

typedef void (*func_ptr)(void);

struct _atexit {
    struct _atexit *_next;
    int _ind;
    func_ptr _fns[32];
};

struct _reent {
    char pad[0x148];
    struct _atexit *_atexit;
    struct _atexit _atexit0;
};

void *func_00127768(int);

s32 func_00127460(func_ptr fn) {
    register struct _atexit *p;
    struct _reent ** const reent_ptr = (struct _reent **)D_00135C60;

    if ((p = (*reent_ptr)->_atexit) == 0) {
        (*reent_ptr)->_atexit = p = &(*reent_ptr)->_atexit0;
    }
    if (p->_ind >= 32) {
        if ((p = (struct _atexit *)func_00127768(sizeof(struct _atexit))) == 0) {
            return -1;
        }
        p->_ind = 0;
        p->_next = (*reent_ptr)->_atexit;
        (*reent_ptr)->_atexit = p;
    }
    p->_fns[p->_ind++] = fn;
    return 0;
}
