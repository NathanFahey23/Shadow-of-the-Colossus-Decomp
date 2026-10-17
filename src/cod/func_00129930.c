#include "common.h"

// TARGET: 0x00129930
// TC: 2.96
// -G0
// -O2

typedef struct _reent {
    char pad[0x38];
    s32 __sdidinit;
} _reent;

typedef struct __sFILE {
    char pad[0x54];
    struct _reent *_data;
} FILE;

s32 func_001299A8(struct _reent *, FILE *, const char *, void *);
void func_0012DA00(struct _reent *);

s32 func_00129930(FILE *fp, const char *fmt0, void *ap) {
    do {
        if ((fp)->_data == 0)
            (fp)->_data = *(struct _reent **)D_00135C60;
        if (!(fp)->_data->__sdidinit)
            func_0012DA00((fp)->_data);
    } while (0);
    return func_001299A8(fp->_data, fp, fmt0, ap);
}
