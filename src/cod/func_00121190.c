#include "common.h"

typedef struct {
    s32 active;
    s32 id;
    u8 pad[0x14];
    s32 f1c;
    s32 f20;
} Item163CC8;

extern Item163CC8 D_00163CC8[];

s32 func_00121190(s32 arg0, s32 arg1, s32 arg2) {
    D_00163CC8[arg0].f1c = arg1;
    D_00163CC8[arg0].f20 = arg2;
    return 1;
}
