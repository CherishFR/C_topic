#include "func.h"

void push(pstack p,int val){
    pNode pnew = (pNode)calloc(1, sizeof(Node));  //申请地址空间
    pnew->val = val;
    if(NULL==p->phead){
        p->phead = pnew;
    } else{
        pnew->pnext = p->phead;
        p->phead = pnew;
    }
    p->size++;
}

void pop(pstack p){
    pNode pcur;
    if(NULL==p->phead){
        printf("stack is empty\n");
        return;
    }
    pcur = p->phead;
    p->phead = pcur->pnext;
    p->size--;
    free(pcur);
}

int top(pstack p){
    pNode pcur;
    int val;
    if(NULL==p->phead){
        printf("stack is empty\n");
        return -1;
    }
    pcur = p->phead;
    val = pcur->val;
    p->phead = pcur->pnext;
    p->size--;
    free(pcur);
    return val;
}
