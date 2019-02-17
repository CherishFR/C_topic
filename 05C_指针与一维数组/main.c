#include <stdio.h>
#include <stdlib.h>

void change(int *j_pointer){  // 指针传递，传入传出参数
    *j_pointer=6;
}

#define N 5
int main() {
    // 指针的作用：传递与偏移
    int i=10;
    int *i_pointer;  // 初始化指针，*为取值运算符
    i_pointer = &i;  // 初始化地址是某个变量的取地址，&为取地址运算符
    printf("i=%d\n",i);  //直接访问
    printf("*i_pointer=%d\n",*i_pointer);  //间接访问
    *i_pointer = 6;
    printf("i=%d\n",i);

    change(&i);
    printf("i=%d\n",i);

    int li[5] = {1,2,3,4,5};
    int *p;
    int a;
    p=li;  // li为数组首位所在的内存地址
    for(a=0;a<N;a++){
        printf("%d\n",*(p+a));  // 指针偏移，*(p+1) = *(p+1*sizeof(int))，即指针+1就等于内存地址增大4字节
    }
    return 0;
}
