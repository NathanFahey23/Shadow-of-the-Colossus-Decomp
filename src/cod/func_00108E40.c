#include "common.h"

int func_00108D10();
int func_00107FF8(int (*)(), char **, int, const char *, void *);

int func_00108E40(char *buf, int size, const char *fmt, ...) {
    char *p = buf;
    void *ap = (char *)&p + 0x68;
    return func_00107FF8(func_00108D10, &p, size, fmt, ap);
}
