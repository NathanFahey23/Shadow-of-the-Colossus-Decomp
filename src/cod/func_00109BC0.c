#include "common.h"

typedef struct Queue { s32 id, f4, f8, fc, f10; struct Queue *next; } Queue;
typedef struct State { u8 pad[0x28]; Queue *head; u8 tail[0x14]; } State;
extern State D_00145940;
s32 func_0010FB20(void);
s32 func_0010FB70(void);
void func_00109BC0(Queue *node, s32 id) {
Queue *curr;
func_0010FB20();
node->id=id;
node->f4=0; node->f8=0; node->fc=0; node->f10=0; node->next=0;
if(D_00145940.head==0) D_00145940.head=node;
else {
curr=D_00145940.head;
while(curr->next!=0) curr=curr->next;
curr->next=node;
}
func_0010FB70();
}
