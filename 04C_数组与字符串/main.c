#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//print的函数栈空间：1M
//值传递
void print(int a[], int num){
    int i;
    for(i=0;i<num;i++){  //sizeof(a)为整个存储字节数，sizeof(int)=4
        printf("a[%d]=%d\n",i,a[i]);
    }
}

void print2(int b[][4], int num){
    int i,j;
    for(i=0;i<num;i++){  //sizeof(a)为整个存储字节数，sizeof(int)=4
        for(j=0;j< sizeof(b[0])/ sizeof(int);j++){
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }
}

void read_string(char c[]){
    int i = 0;
    while (scanf("%c",&c[i]),'\n'!=c[i]){
        i++;
    }
    c[i]=0;
}

size_t mystrlen(char c[]){
    int i=0;
    while (c[i]!=0){
        i++;
    }
    return i;
}


// 所有变量的空间不能超过1M，否则会超出栈空间容量
int main() {
    int li[5] = {11,22,33,44,55};
    print(li, 5);

    int li2[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    print2(li2, 3);

    //字符数组
    char li3[5] = {'h','e','l','l','o'};
    printf("%s\n",li3);

    char a[10]={0};  //初始化0
    scanf("%s",a);  //读取字符串，会自动带上结束符
    printf("%s\n",a);
    read_string(a);
    printf("%s\n",a);

    char c[20];
    while(gets(c)!=NULL){  //输入，对字符串支持更好，支持空格的输入，且会去除\n
        puts(c);  //输出，会自动添加\n
        printf("len=%d\n",mystrlen(c));
    }
    strcpy(c,"world");  // 字符串直接赋值，使用copy

    // 比较大小，如果是字符串就从左向右比较ascii码大小，如果有一位有差异就会返回，而不是比较整体大小
    strcmp("how","hello");

    //字符串拼接，第一个必须为数组，存储在栈空间，且它后面还有多余的空间，否则会报越界
    strcat(c,"hello");

    return 0;
}

