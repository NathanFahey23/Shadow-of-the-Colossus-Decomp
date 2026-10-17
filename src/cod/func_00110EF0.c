#include "common.h"

extern volatile s32 D_00133918[];

s32 func_00110EF0(s32 *arg0, s32 *arg1) {
    if (D_00133918[2] < 0) {
        return 0x80008001;
    }
    if (arg0 != NULL) {
        *arg0 = D_00133918[4];
    }
    if (arg1 != NULL) {
        *arg1 = 0x80 - D_00133918[4];
    }
    return 0;
}
