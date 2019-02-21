#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tag{
    int val;
    struct tag *pnext;
}Node,*pNode;

typedef struct{
    pNode  phead;
    int size;
}stack,*pstack;

void push(pstack,int);
void pop(pstack);
int top(pstack);