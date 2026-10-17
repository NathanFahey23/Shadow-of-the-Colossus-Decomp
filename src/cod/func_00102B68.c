#include "common.h"

s32 func_00106DF0(s32);
s32 func_00106E30(s32);
extern s32 D_0013B790[256];
void func_00102B68(void) {
s32 *p=D_0013B790;
s32 count=255;
do {
s32 value=*p;
if(value>=0) {func_00106E30(value);func_00106DF0(*p);*p=-1;}
count--;p++;
}while(count>=0);
}
