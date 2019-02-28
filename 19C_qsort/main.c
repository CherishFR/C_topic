#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    char name[20];
    float chinese;
    float math;
    float english;
}stu,*pstu;

int compare(const void* p1,const void* p2){
    pstu pleft = (pstu)p1;
    pstu pright = (pstu)p2;
    return pleft->num - pright->num;
}

int compare_index(const void* p1,const void* p2){
    pstu *pleft = (pstu*) p1;
    pstu *pright = (pstu*) p2;
    return (*pleft)->num - (*pright)->num;
}

int compare_chinese(const void* p1,const void* p2){
    pstu pleft = (pstu)p1;
    pstu pright = (pstu)p2;
    if(pleft->chinese - pright->chinese>0.0001){
        return 1;
    } else if (pleft->chinese - pright->chinese<-0.0001){
        return -1;
    } else {
        return 0;
    }
}

int main() {
    stu s[5];
    pstu p[5];
    int i;
    for (i = 0; i < 5; i++){
        p[i] = &s[i];
    }
    for (i = 0; i < 5; ++i) {
        scanf("%d%s%f%f%f",&s[i].num,s[i].name,&s[i].chinese,&s[i].math,&s[i].english);
    }
//    qsort(s,5, sizeof(stu),compare_chinese);
    qsort(p,5, sizeof(pstu),compare_index);  // 索引式排序
    for (i=0;i<3;i++) {
        printf("%d %s %f %f %f\n",s[i].num,s[i].name,s[i].chinese,s[i].math,s[i].english);
    }
    for (i=0;i<3;i++) {
        printf("%d %s %f %f %f\n",p[i]->num,p[i]->name,p[i]->chinese,p[i]->math,p[i]->english);
    }
}
