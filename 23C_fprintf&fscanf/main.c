#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int num;
    char name[20];
    float score;
}stu;


// fwrite和fread不会做二进制与ASCII码的转换,效率较高
// fscanf会在输出的时候将二进制转换为字符形式
// fprintf会在输入的时候将ASCII码转换成二进制
int main(int argc, char* argv[]) {
    stu s={10001,"liujintao",98.6};
    stu s1;
    FILE *fp;
    if (argc!=2){
        printf("error args,exe fliename\n");
        return -1;
    }
    fp = fopen(argv[1],"r+");
    if(NULL == fp){
        perror("fopen");
        return -1;
    }
//    fwrite(&s, sizeof(s),1,fp);
    fprintf(fp,"%d %s %5.2f\n",s.num,s.name,s.score);
    memcpy(&s1,&s, sizeof(s));  // 内存拷贝,用来拷贝结构体,整型数组等
    return 0;
}