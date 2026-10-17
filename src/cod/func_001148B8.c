#include "common.h"

u32 func_001148B8(u32 arg0) {
    if ((arg0 >> 28) == 7) {
        arg0 &= 0x0FFFFFFF;
        arg0 |= 0x80000000;
    }
    return arg0;
}
