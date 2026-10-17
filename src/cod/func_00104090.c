#include "common.h"

extern char D_00136DE0[];
extern char D_0013A088[];
extern char D_00136E00[];
extern char D_0013A090[];
extern char D_00136E68[];
extern char D_0013A098[];
extern char D_00136EA0[];
extern char D_0013A0A0[];
extern char D_00136EC0[];
extern char D_0013A0A8[];
extern char D_00136EE0[];
extern char D_0013A0B0[];
extern char D_00136F00[];
extern char D_0013A0B8[];
extern char D_00136F20[];
extern char D_0013A0C0[];
extern char D_00136F40[];
extern char D_0013A0C8[];
extern char D_00136F60[];
extern char D_0013A0D0[];
extern char D_00136F78[];
extern char D_0013A0D8[];
extern char D_00136F98[];
extern char D_0013A0E0[];
extern char D_00136FB8[];
extern char D_00136FD8[];
extern char D_00136E20[];
extern char D_00136E88[];
s32 func_00103CB8(char*,s32,void*);
void func_00103340(char*);
s32 func_00104090(s32 mode) {
if(func_00103CB8(D_00136DE0,0,NULL)<0) return -1; func_00103340(D_0013A088);
if(func_00103CB8(D_00136E00,70,D_00136E20)<0) return -1; func_00103340(D_0013A090);
if(func_00103CB8(D_00136E68,20,D_00136E88)<0) return -1; func_00103340(D_0013A098);
switch(mode) {
case 1: case 2:
if(func_00103CB8(D_00136EA0,0,NULL)<0) return -1; func_00103340(D_0013A0A0);
if(func_00103CB8(D_00136EC0,0,NULL)<0) return -1; func_00103340(D_0013A0A8);
break;
case 5:
if(func_00103CB8(D_00136EA0,0,NULL)<0) return -1; func_00103340(D_0013A0A0);
break;
case 3: case 4:
if(func_00103CB8(D_00136EE0,0,NULL)<0) return -1; func_00103340(D_0013A0B0);
if(func_00103CB8(D_00136F00,0,NULL)<0) return -1; func_00103340(D_0013A0B8);
break;
case 0: break;
}
switch(mode) {
case 2: case 4:
if(func_00103CB8(D_00136F20,0,NULL)<0) return -1; func_00103340(D_0013A0C0);
if(func_00103CB8(D_00136F40,0,NULL)<0) return -1; func_00103340(D_0013A0C8);
break;
case 5:
if(func_00103CB8(D_00136F20,0,NULL)<0) return -1; func_00103340(D_0013A0C0);
if(func_00103CB8(D_00136F60,1,D_0013A0D0)<0) return -1; func_00103340(D_0013A0D0);
break;
case 0:
func_00103CB8(D_00136EA0,0,NULL);
func_00103CB8(D_00136EC0,0,NULL);
func_00103CB8(D_00136EE0,0,NULL);
func_00103CB8(D_00136F00,0,NULL);
func_00103CB8(D_00136F20,0,NULL);
func_00103CB8(D_00136F40,0,NULL);
break;
}
if(func_00103CB8(D_00136F78,0,NULL)<0) return -1; func_00103340(D_0013A0D8);
if(func_00103CB8(D_00136F98,0,NULL)<0) return -1; func_00103340(D_0013A0E0);
if(func_00103CB8(D_00136FB8,0,NULL)<0) return -1; func_00103340(D_00136FD8);
return 0;
}
