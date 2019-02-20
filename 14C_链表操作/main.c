#include "func.h"

int main() {
    pstu phead=NULL,ptail=NULL;
    int i;
    float score;
    while (scanf("%d",&i)!=EOF) {
        list_head_insert(&phead, &ptail, i);
    }
    list_print(phead);
    while (scanf("%d",&i)!=EOF) {
        list_delete(&phead, &ptail, i);
        list_print(phead);
    }
    return 0;
}