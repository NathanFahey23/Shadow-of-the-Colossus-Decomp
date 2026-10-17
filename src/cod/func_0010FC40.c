#include "common.h"

u32 *func_0010FC40(u32 *cur, u32 *end, u32 val) {
    while (1) {
        if (*cur == val || !(cur < end)) {
            break;
        }
        cur++;
    }
    return (cur < end) ? cur : NULL;
}
