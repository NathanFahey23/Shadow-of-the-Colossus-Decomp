#include "common.h"

typedef struct {
    u8 pad[0x54];
    void *_data;
} NewlibFILE;

typedef struct {
    u8 pad[0x8];
    NewlibFILE *_stdout;
} NewlibReent;

s32 func_00129930(NewlibFILE *f, const char *fmt, void *ap);

s32 func_001285C0(const char *fmt, ...) {
    char *ap = (char *)__builtin_next_arg(fmt) - 0x38;
    NewlibReent *reent = (NewlibReent *)D_00135C60[0];
    reent->_stdout->_data = reent;
    return func_00129930(reent->_stdout, fmt, ap);
}
