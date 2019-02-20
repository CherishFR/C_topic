#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 结构体中每一个成员的取地址都是该成员的首地址，而共用体中每一个成员的取地址都是共用体的首地址
int main() {
    union data{
        int a;
        char ch;
        float f;
    }c;  // 所有成员共用一份地址
    c.a = 10;
    c.ch = 'h';
    c.f = 85.6;

    enum weekday{sum=1,mon,tue};  // 默认sum=0,mon=1,tue=2，枚举常量不能改变
    enum weekday workday;
    for (workday=sum;workday<=tue;workday++){
        printf("workday=%d\n",workday);
    }
    return 0;
}