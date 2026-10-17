#include "common.h"

typedef struct {
    u8 *_p;
    s32 _r;
    s32 _w;
    s16 _flags;
    s16 _file;
    struct {
        u8 *_base;
        s32 _size;
    } _bf;
    s32 _lbfsize;
    u8 pad[0x54 - 0x1C];
    void *_data;
} NewlibFILE;

s32 func_00129930(NewlibFILE *f, const char *fmt, void *ap);

s32 func_00128A70(char *str, const char *fmt, ...) {
    NewlibFILE f;
    char *ap;
    s32 ret;

    f._flags = 0x208;
    f._bf._size = f._w = 0x7FFFFFFF;
    f._bf._base = f._p = (u8 *)str;
    f._data = (void *)D_00135C60[0];
    ap = (char *)__builtin_next_arg(fmt) - 0x30;
    ret = func_00129930(&f, fmt, ap);
    *f._p = 0;
    return ret;
}
