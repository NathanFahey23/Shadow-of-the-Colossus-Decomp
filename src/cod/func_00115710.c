#include "common.h"

typedef struct {
    u8 pad[0x10];
    char *buf;
    u8 pad2[0x334 - 0x14];
} PadSocket;

extern PadSocket D_0014B598[];
void func_001318C0(char *, char *);

char *func_00115710(s32 arg0) {
    char *bufs[2];
    char *p = D_0014B598[arg0].buf;
    bufs[0] = p;
    bufs[1] = p + 0x80;
    func_001318C0(p, p + 0x100);
    return bufs[*(s32 *)(bufs[0] + 0x7C) < *(s32 *)(bufs[1] + 0x7C)];
}
