#include "common.h"

typedef char *va_list;
#define va_start(ap, last) ap = (char *)__builtin_next_arg(last) - 0x20

int func_00107FF8(void *, void *, int, void *, va_list);

int func_00108DB8(void *arg0, void *arg1, int *arg2, void *arg3, ...) {
    va_list ap;
    int res;
    va_start(ap, arg3);
    res = func_00107FF8(arg0, arg1, *arg2, arg3, ap);
    *arg2 -= res;
    return res;
}
