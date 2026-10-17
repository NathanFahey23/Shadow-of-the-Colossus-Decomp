#include "common.h"

typedef struct {
    s32 active;
    s32 id;
    u8 pad[0x1C];
} Item163CC8;

extern Item163CC8 D_00163CC8[];

s32 func_001220B0(s32 arg0) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (D_00163CC8[i].active != 0 && D_00163CC8[i].id == arg0) {
            return i;
        }
    }
    return -1;
}
