#include "common.h"

typedef struct {
    u8 pad[0x184];
} Struct135638;

extern Struct135638 D_00135638[];

s32 func_00120D10(s32 arg0, s32 arg1) {
    Struct135638 *p = &D_00135638[arg0];
    s32 *arr = (s32 *)((u8 *)p + 0xD0);
    s32 i;
    for (i = 0; i < 32; i++) {
        if (arr[i] == arg1) {
            return 1;
        }
    }
    return 0;
}
