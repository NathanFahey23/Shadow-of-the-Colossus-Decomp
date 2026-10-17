#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
} PadInfoEntry;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    void *buf;
    PadInfoEntry info[0x28];
    u8 pad[0x334 - 0x14 - sizeof(PadInfoEntry) * 0x28];
} PadSocket;

typedef struct {
    u8 f0;
    u8 f1;
    u8 f2;
    u8 f3;
    s32 f4;
    u8 pad[0x14];
    u8 data[1];
} PadData;

extern PadSocket D_0014B598[];

void *func_0012821C(void *, const void *, u32);
s32 func_00115650(s32);
PadData *func_001156A8(s32);
s32 func_001157D8(u8 *, PadInfoEntry *);

s32 func_00115210(s32 arg0, void *arg1) {
    PadData *p;
    u32 len;

    if (D_0014B598[arg0].f0 == 0) {
        return -1;
    }
    if (D_0014B598[arg0].f4 == 0) {
        if (func_00115650(arg0) < 0) {
            return -1;
        }
    }
    p = func_001156A8(arg0);
    len = p->f2;
    if (len != 0 && p->data != NULL) {
        func_0012821C(arg1, p->data, len);
        func_001157D8(&p->data[p->f2], D_0014B598[arg0].info);
    }
    if (p->f4 == 0) {
        return -1;
    }
    return p->f2;
}
