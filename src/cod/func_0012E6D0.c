#include "common.h"

int func_0012E6D0(void *r, int *pwc, const char *s, u32 n, int *state) {
    int dummy;
    unsigned char *t = (unsigned char *)s;

    if (pwc == NULL)
        pwc = &dummy;

    if (s == NULL)
        return 0;

    if (n == 0)
        return -1;

    *pwc = (int)*t;

    if (*t == '\0')
        return 0;

    return 1;
}
