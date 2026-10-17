#include "common.h"

int func_00107440(void);
int func_00107450(void);
int func_0010F590(void);

int func_0010F550(void) {
    if (func_00107440() == 0x02000000) {
        return func_0010F590();
    }
    return func_00107450();
}
