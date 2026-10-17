#include "common.h"

typedef struct {
    s32 active;
    s32 id;
    u8 pad[0x1C];
} Item163CC8;

extern Item163CC8 D_00163CC8[];

s32 func_001220F8(s32 arg0) {
    if (D_00163CC8[arg0].active != 0) {
        goto label;
    }
    return -1;
label:
    return D_00163CC8[arg0].id;
}
