#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *p="hello";  // 将常量区hello的首地址填到了指针变量中
    char c[10]="hello";  // 将常量区将hello每一个字符copy到栈空间，发生了strcpy()
    c[0]='H';  // OK
//    p[0]='H';  // 常量区的字符不可修改
    puts(p);
    puts(c);
    p="world";
    strcpy(c,"world");
    puts(p);
    puts(c);
    return 0;
}