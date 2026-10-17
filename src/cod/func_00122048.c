#include "common.h"

typedef struct {
    s32 active;
    s32 id;
    u8 pad[0x1C];
} Item163CC8;

extern Item163CC8 D_00163CC8[];

s32 func_00122018(s32);
void func_00115F70(s32);

s32 func_00122048(s32 arg0) {
    if (func_00122018(arg0)) {
        goto label;
    }
    return 0;
label:
    func_00115F70(D_00163CC8[arg0].id);
    D_00163CC8[arg0].active = 0;
    return 1;
}
