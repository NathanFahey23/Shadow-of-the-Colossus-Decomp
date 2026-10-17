#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    u8 pad[0x324];
} PadSocket;

extern PadSocket D_0014B598[16];
s32 func_00115F70(s32);

s32 func_001151B8(s32 arg0) {
    s32 res = func_00115F70(arg0);
    if (res < 0) {
        return res;
    }
    D_0014B598[arg0].f0 = 0;
    D_0014B598[arg0].f4 = 0;
    D_0014B598[arg0].fC = 0;
    return 1;
}
