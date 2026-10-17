#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    u8 pad[0x324];
} PadSocket;

extern PadSocket D_0014B598[];
s32 func_00116030(void);

volatile s64 func_00115650(s32 arg0) {
    s32 res = func_00116030();
    int one;
    if (res >= 0) {
        one = 1;
        D_0014B598[arg0].fC = res;
        D_0014B598[arg0].f4 = one;
        return res;
    }
}
