#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* print_stack(){
    char c[14];
    strcpy(c,"i am at stack");
    puts(c);
    return c;
}

char* print_malloc(){
    char *q;
    q=(char*) malloc(14);
    strcpy(q,"i am at malloc");
    puts(q);
    return q;
}

int main() {
    int i;
    char *p;
    printf("input size:");
    scanf("%d",&i);
    p = (char*) malloc(i);  // 申请堆空间，返回类型为vold，需要进行强制转换
    // 在申请的时候，操作系统会记录申请首位内存地址以及申请的空间大小
    strcpy(p,"malloc success");
    puts(p);
    free(p);  // 释放堆空间，想要准确的释放需要了解起始地址以及空间大小，为保证起始地址正确，这里的p不能进行偏移
    p = NULL;  // free()不会改变p的内存地址，需要人为赋值为NULL(0为不可用的内存空间)
    // 对于free()后未指向NULL的指针，我们称为野指针

    char *q;
    q = print_stack();
    puts(q);  // 栈空间的数据会随着函数结束而释放，因此这里无法输出
    q = print_malloc();
    puts(q);  // 堆空间只有在整个程序都结束时才会自动释放
    return 0;
}