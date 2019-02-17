#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>

jmp_buf envbuf;  // 保存进程现场
void b(){
    printf("i am b func\n");
    longjmp(envbuf,10);
}

void a(){
    printf("i am a func\n");
    b();
    printf("after b, i am a func\n");
}

// 递归
int f(int n){
    if(1==n){
        return 1;
    }
    return n*f(n-1);
}

int step(int s){
    if(1==s){
        return 1;
    }
    if(2==s){
        return 2;
    }
    return (step(s-1)+step(s-2));
}

int main() {
    // 记录当前进程状态
    int ret;
    ret = setjmp(envbuf);  // 现场保存
    if (0==ret){
        a();
    }
    int n,s;
    scanf("%d",&n);
    printf("n!=%d\n",f(n));
    scanf("%d",&s);
    printf("case!=%d\n",step(s));
    return 0;
}