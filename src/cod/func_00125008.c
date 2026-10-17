#include "common.h"

extern s32 D_00169F88;
void func_00124F48(void);

void func_00125008(void) {
    if (D_00169F88 == 0) {
        D_00169F88 = 1;
        func_00124F48();
    }
}
