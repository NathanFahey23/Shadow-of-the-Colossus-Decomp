#include "common.h"

typedef struct {
    s32 active;
    u8 pad[0x330];
} PadSocket;

extern s32 D_001339E8;
extern PadSocket D_0014B598[16];

s32 func_001151B8(s32);

s32 func_00115048(void) {
    s32 i;
    D_001339E8 = 0;
    for (i = 0; i < 16; i++) {
        if (D_0014B598[i].active != 0) {
            s32 ret = func_001151B8(i);
            if (ret < 0) {
                return ret;
            }
        }
    }
    return 1;
}
