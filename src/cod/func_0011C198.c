#include "common.h"

extern char D_00138D08[];
extern char D_0015DF48[];

s32 func_0011C198(s32 arg0) {
    char *p = D_0015DF48 + (arg0 * 0x898);
    *((s32 *) ((D_0015DF48 + (arg0 * 0x898)) + 0x800)) = -1;
    *((s32 *) ((D_0015DF48 + (arg0 * 0x898)) + 0x804)) = -1;
    *((s32 *) ((D_0015DF48 + (arg0 * 0x898)) + 0x894)) = 0;
    *((s32 *) ((D_0015DF48 + (arg0 * 0x898)) + 0x888)) = 1;
    *((s32 *) ((D_0015DF48 + (arg0 * 0x898)) + 0x88C)) = 0;
    *((s32 *) ((D_0015DF48 + (arg0 * 0x898)) + 0x890)) = 0;
    __builtin_memcpy((D_0015DF48 + (arg0 * 0x898)) + 0x808, D_00138D08, 2);
    return 1;
}
