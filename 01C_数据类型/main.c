#include <stdio.h>
#include <stdlib.h>

#define PI 3  // 符号常量，不可修改
int main() {
    int i,j,k;  // 定义变量
    short a,b;
    float n = 1.456;
    long double m = 1.456;
    double e = 1e-6;
    float f,g;
    char a_c = 'a';  // 字符使用''
    char str[] = "hello";  // 字符串使用""
    i = 10;  // 变量赋值
    j = 0xa;  // 赋值16进制
    k = 012;  // 赋值8进制
    printf("i=%d\n", i);
    printf("j=%d\n", j);
    printf("k=%d\n", k);
    printf("PI=%d\n", PI);
    printf("n=%f\n", n);
    printf("a_c=%c\n", a_c-32);
    printf("str=%s\n", str);

    // 溢出
    a = 32767;
    b = a + 1;
    printf("b=%d\n", b);

    // 精度缺失
    f = 1.23456e8;
    g = f+20;
    printf("f=%f\n", f);
    printf("g=%f\n", g);

    // 混合运算
    float f_a;
    i = 5;
//    f_a = i/2; // i为整数5, i/2也为整数
    f_a = (float)i/2; // 强制类型转换
    printf("f_a=%f\n", f_a);

    return 0;
}
