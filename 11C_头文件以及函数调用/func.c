#include "func.h"

extern int k;  // 借用其他文件的全局变量
int printstar(int i){
    static int j=0; // 静态局部变量，存放在数据段，只初始化一次，不会随着函数的结束而释放
    j++;
    printf("************************\n");
    printf("i am printstar %d\n",i);
    printf("i am j: %d\n",j);
    return i+3;
}

void printmsg(){
    printf("how do you do\n");
    printstar(4);
}

static void local(){  // static放在函数前，表示不能被调用
}