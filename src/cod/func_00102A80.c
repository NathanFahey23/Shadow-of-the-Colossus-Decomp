#include "common.h"

extern s32 D_0013B790[256];
void func_00102A80(s32 (*callback)(s32)) {
s32 count=255;
s32 *p=D_0013B790;
do {
s32 value=*p++;
if(value!=-1) callback(value);
count--;
}while(count>=0);
}
