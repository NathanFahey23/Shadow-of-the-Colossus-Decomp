#include "common.h"

void *func_0012E7E8(s32, s32);
void func_0012E890(s32, void *);
void *func_0012EF80(s32 ctx, void *input, s32 shift) {
s32 words=shift>>5;
s32 capacity=*(s32 *)((char *)input+8);
s32 count=words+*(s32 *)((char *)input+16)+1;
s32 size=*(s32 *)((char *)input+4);
u32 *out,*in,*end;
void *result;
s32 n;
u32 carry, value;
while(capacity<count) {capacity*=2;size++;}
result=func_0012E7E8(ctx,size);
out=(u32 *)((char *)result+20);
if(words>0){capacity=words;do{capacity--;*out++=0;}while(capacity);}
in=(u32 *)((char *)input+20);
shift &=31;
end=in+*(s32 *)((char *)input+16);
if(shift) {
size=32-shift;
carry=0;
do{*out++=(*in<<shift)|carry;value=*in++;carry=value>>size;}while(in<end);
*out=carry;
if(carry)count++;
}else{do{*out++=*in++;}while(in<end);}
*(s32 *)((char *)result+16)=count-1;
func_0012E890(ctx,input);
return result;
}
