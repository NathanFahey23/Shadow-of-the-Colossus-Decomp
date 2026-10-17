#include "common.h"

typedef struct { s32 a,b,sendlen,recvlen; u8 send[128]; u8 recv[128]; s32 result; } DbcData;
extern DbcData D_0014EA00;
extern s32 D_00150DC0;
extern u8 D_0014E900[];
extern char D_00138748[];
void func_00107020(s32);
void func_00107000(s32);
s32 func_00116C58(const char *, ...);
s32 func_00109980(void *,u32,s32,void *,s32,void *,s32,void *,void *);
s32 func_00116568(s32 a,s32 b,s32 *sendlen,u8 *send,s32 *recvlen,u8 *recv) {
 DbcData *rpc;
 s32 i,res;
 func_00107020(D_00150DC0);
 D_0014EA00.a=a;
 rpc=&D_0014EA00;
 rpc->b=b;
 rpc->sendlen=*sendlen;
 rpc->recvlen=*recvlen;
 for(i=0;i<*sendlen;i++) rpc->send[i]=send[i];
 if(func_00109980(D_0014E900,0x80001318,0,&D_0014EA00,0x90,&D_0014EA00,0x90,0,0)<0) {
 func_00116C58(D_00138748); func_00107000(D_00150DC0); return 0;
 }
 res=rpc->result;
 if(res>=0) {
 *sendlen=rpc->sendlen; *recvlen=rpc->recvlen;
 for(i=0;i<rpc->recvlen;i++) recv[i]=rpc->recv[i];
 res=rpc->result;
 }
 func_00107000(D_00150DC0); return res;
}
