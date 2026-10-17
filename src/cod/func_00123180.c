#include "common.h"

#include "scus_map.h"

void iSignalSema(s32);

void func_00123180(s32 arg0) {
    iSignalSema(arg0);
    ExitHandler();
}
