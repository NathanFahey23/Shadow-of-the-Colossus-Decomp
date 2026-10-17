#include "common.h"

typedef struct {
    s32 active;
    s32 id;
    u8 pad[0x1C];
} Item163CC8;

extern Item163CC8 D_00163CC8[];
s32 func_001161A0(s32);

s32 func_00121E88(s32 arg0) {
    return func_001161A0(D_00163CC8[arg0].id) != 3;
}
