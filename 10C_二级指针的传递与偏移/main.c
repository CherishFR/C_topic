#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 二级指针的作用：实现对主函数中某个一级指针变量值的修改
void change(int **p2,int *pj){
    *p2 = pj;

}

#define N 5
int main() {
    int i = 10;
    int j=5;
    int *pi=&i,*pj;
    pj=&j;
    change(&pi,pj);

    char *p[N];
    char a[N][10]={"liu","jin","tao","zhao","xi"};
    char *t;
    char **p2;
    int b[N] = {9,12,4,3,7};
    int tmp;
    for(i=0;i<N;i++){
        p[i]=a[i];
    }
    for(i=0;i<N;i++){
        puts(p[i]);
    }

    // 冒泡
//    for(i=N-1;i>0;i--){
//        for(j=0;j<i;j++){
//            if(b[j]>b[j+1]){
//                tmp = b[j];
//                b[j] = b[j+1];
//                b[j+1] = tmp;
//            }
//        }
//    }
    p2=p;  // 一级指针数组也就是二级指针，p里面存放了5个指向a的内存地址，p每一次偏移都是偏移一个指针大小
    // 索引排序，不改变原数组的顺序，减少内存数据交换
    for(i=N-1;i>0;i--){
        for(j=0;j<i;j++){
            if(1==strcmp(p2[j],p2[j+1])){
                t = p2[j];
                p2[j] = p2[j+1];
                p2[j+1] = t;
            }
        }
    }
    for(i=0;i<N;i++){
        printf("%s\n",p[i]);
    }
    return 0;
}
