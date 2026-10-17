#include "common.h"

struct S16 { char b[16]; };
extern char D_00163CC8[];

s32 func_001211B8(s32 arg0, void *arg1) {
    char *p = D_00163CC8 + arg0 * 0x24;
    *(struct S16 *)(p + 8) = *(struct S16 *)arg1;
    return 1;
}
