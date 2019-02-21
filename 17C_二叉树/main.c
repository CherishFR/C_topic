#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tag{
    char c;
    struct tag *pleft;
    struct tag *pright;
}Node,*pNode;

void preOrder(pNode p){
    if(p){
        putchar(p->c);
        preOrder(p->pleft);
        preOrder(p->pright);
    }
}

void minOrder(pNode p){
    if(p){
        preOrder(p->pleft);
        putchar(p->c);
        preOrder(p->pright);
    }
}

#define N 10
int main() {
    char c[N+1] = "ABCDEFGHIJ";
    pNode p[N];  // 用于存储每一个节点的地址值
    pNode tree;
    int i,j;
    for (i=0;i<N;i++){
        p[i]=(pNode)calloc(1, sizeof(Node));
        p[i]->c=c[i];
    }
    tree = p[0];  // 树根
    for (i=0;i<N;i++){  // 外层循环控制住树里面放的元素
        for(j=0;j<i;j++){  // 找出空闲的位置
            if(NULL == p[j]->pleft){
                p[j]->pleft = p[i];
                break;
            }
            if(NULL == p[j]->pright){
                p[j]->pright = p[i];
                break;
            }
        }
    }
    preOrder(tree);
    return 0;
}