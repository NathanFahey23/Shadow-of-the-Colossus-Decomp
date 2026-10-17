#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    u8 pad[0x324];
} PadSocket;

extern s32 D_001339E8;
extern PadSocket D_0014B598[16];

s32 func_00115008(void) {
    PadSocket *p;
    s32 end;
    D_001339E8 = 1;
    p = D_0014B598;
    end = (s32)p + 0x3340;
    do {
        p->f0 = 0;
        p->f4 = 0;
        p->f8 = 0;
        p->fC = 0;
        p++;
    } while ((s32)p < end);
    return 1;
}
