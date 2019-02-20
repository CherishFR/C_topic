#include "func.h"

void list_head_insert(pstu* pphead, pstu* pptail, int i){
    pstu pnew;
    pnew=(pstu)malloc(sizeof(stu));
    memset(pnew,0, sizeof(stu));
    pnew->num = i;
    if(NULL==*pphead){  //链表为空，新节点既是头指针也是尾指针
        *pphead = pnew;
        *pptail = pnew;
    } else{
        pnew->pnext=*pphead;  // 原有链表头作为新节点pnext
        *pphead = pnew;  // 新节点作为头节点
    }
}

void list_tail_insert(pstu* pphead, pstu* pptail, int i){
    pstu pnew;
    pnew=(pstu)calloc(1, sizeof(stu));  // calloc会全部初始化为0
    pnew->num = i;
    if(NULL==*pptail){
        *pphead = pnew;
        *pptail = pnew;
    } else{
        (*pptail)->pnext=pnew;  // 新节点变为原有尾节点的pnext
        *pptail = pnew;  // 新节点成为尾节点
    }
}

void list_sort_insert(pstu* pphead, pstu* pptail, int i){
    pstu pnew;
    pstu pcur,ppre;
    pnew=(pstu)calloc(1, sizeof(stu));
    pnew->num = i;
    pcur = *pphead;
    ppre = *pphead;
    if(NULL==*pptail){
        *pphead = pnew;  // 不能替换成pcur
        *pptail = pnew;
    } else if(i<(*pphead)->num){  // 头插法
        pnew->pnext=*pphead;
        *pphead = pnew;
    } else{  // 判断是否插在中间
        while (pcur!=NULL){
            if (pcur->num > i){
                ppre->pnext=pnew;
                pnew->pnext=pcur;
                break;
            }
            ppre=pcur;
            pcur = pcur->pnext;
        }
        if(NULL==pcur){  // NULL==pcur，说明要插入到尾部
            (*pptail)->pnext=pnew;
            *pptail = pnew;
        }
    }
}

void list_delete(pstu* pphead, pstu* pptail, int d){
    pstu ppre, pcur;
    ppre = *pphead;
    pcur = *pphead;
    if (NULL == pcur){
        printf("List is empty\n");
        return;
    } else if (pcur->num == d) {
        *pphead = (*pphead)->pnext;
        if (NULL == *pphead){  // 链表中只有一个元素
            *pptail = NULL;
        }
        free(pcur);
    } else {  // 删除中间或尾部
        while (pcur!=NULL){
            if (pcur->num == d){
                ppre->pnext = pcur->pnext;
                break;
            }
            ppre = pcur;
            pcur = pcur->pnext;
        }
        if (pcur == *pptail){  //删除的尾节点
            *pptail = ppre;
        }
        if (NULL == pcur){
            printf("this node is not in list\n");
        } else {
            free(pcur);
        }
    }
}

void list_modify(pstu phead,int i, float score){
    while (phead!=NULL){
        if (i == phead->num){
            phead->score = score;
            break;
        }
        phead = phead->pnext;
    }
    if (NULL==phead){
        printf("this num is not in list\n")
    }

}

void list_print(pstu phead){
    while (phead!=NULL){
        printf("%3d",phead->num);
        phead=phead->pnext;
    }
    printf("\n");
}

void list_print_score(pstu phead){
    while (phead!=NULL){
        printf("%3d %5.2f\n",phead->num,phead->score);
        phead=phead->pnext;
    }
    printf("\n");
}
