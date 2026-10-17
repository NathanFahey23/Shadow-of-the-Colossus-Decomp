#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    u8 pad[0x324];
} PadSocket;

extern PadSocket D_0014B598[];
char *func_001156A8(s32);

s32 func_00115778(s32 arg0) {
    char *p = func_001156A8(arg0);
    s32 val = *(s32 *)(p + 0x7C);
    if (!val) {
        return 0;
    }
    if (val == D_0014B598[arg0].f8) {
        return 0;
    }
    D_0014B598[arg0].f8 = val;
    return 1;
}
