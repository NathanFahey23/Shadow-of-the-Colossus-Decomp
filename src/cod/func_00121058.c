#include "common.h"

#include "scus_map.h"

void iSignalSema(s32);
extern s32 D_00163CC0;

void func_00121058(void) {
    iSignalSema(D_00163CC0);
    ExitHandler();
}
