#include "common.h"

s32 func_00106DF0(s32);
s32 func_00106E30(s32);
s32 func_00106FF0(s32);
s32 func_00108EF8(const char *, ...);
s32 func_0011B740(s32, s32);
s32 func_00121118(void);
extern s32 D_00135630[];
extern char D_00138C68[];
extern s32 D_00151904[];
extern s32 D_00151E20[];
extern s32 D_00151E2C[];
s32 func_0011A330(void) {
 if (!D_00135630[0]) return 0x81018001;
 if (D_00151904[0]) func_0011B740(0,0);
 if (D_00151E20[0]>=0) {
  if(func_00106E30(D_00151E20[0])<0) func_00108EF8(D_00138C68);
  func_00106DF0(D_00151E20[0]);
 }
 if (D_00151E20[1]>=0) func_00106FF0(D_00151E20[1]);
 if (D_00151E20[2]>=0) func_00106FF0(D_00151E20[2]);
 if (D_00151E2C[0]>=0) func_00106FF0(D_00151E2C[0]);
 func_00121118();
 D_00135630[0]=0;
 return 0;
}
