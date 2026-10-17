#include "common.h"

s32 func_00107000(s32);
s32 func_00107020(s32);
s32 func_001220B0(s32);
void *func_00128FB0(void *, const char *);
u32 func_001290C4(const char *);
extern s32 D_00135630[], D_00151E24[], D_00151E2C[];
typedef struct {s32 slot, command; u8 pad[0x414]; char name[128];} Request;
extern Request D_00151900;
u32 func_0011AD40(s32 arg0, const char *arg1) {

if(!D_00135630[0]) return 0x81018001;
arg0=func_001220B0(arg0);
if(arg0<0) return 0x81018002;
if(func_001290C4(arg1)>=128) return 0x8101005B;
func_00107020(D_00151E2C[0]);
if(D_00151900.command) {func_00107000(D_00151E2C[0]);return 0x81010010;}
D_00151900.slot=arg0;
D_00151900.command=8;
func_00128FB0(D_00151900.name,arg1);
func_00107000(D_00151E24[0]);
func_00107000(D_00151E2C[0]);
return 0;
}
