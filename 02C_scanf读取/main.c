#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int j;
    int res;
    float f;
    char c;
//    scanf("%d",&i);  // 获取输入内存中起始位置的整形数据
//    printf("i=%d\n",i);
//    scanf("%c",&c);  // 如果输入内存中还有数据，继续匹配后续的字符型数据，而不会再让用户输入
//    res = scanf("%d",&j);  // 如果输入内存为空，则会让用户继续输入
//    printf("j=%d\n",j);
//    printf("c=%c\n",c);
//    printf("res=%d\n",res);  // 如果scanf匹配到数据，则会返回1，否则返回0


//    while (fflush(stdin),scanf("%d",&i)!=EOF){
//        printf("i=%d\n",i);
//    }

//    // 读取字符串
//    while (scanf("%c",&c)!=EOF){
//        if(c!='\n'){
//            printf("%c",c-32);
//        } else{
//            printf("%c",c);
//        }
//    }

    // 混合输入
    fflush(stdin);  // 清空标准输入缓冲区
    res = scanf("%d %c%f",&i,&c,&f);
    printf("i=%d\n",i);
    printf("f=%f\n",f);
    printf("c=%c\n",c);
    return 0;
}