#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 文本模式在写入时会把\n写成\r\n，读取时读到\r\n会变为\n
int main(int argc, char* argv[]) {
    FILE *fp;
    char buf[20] = "hello\nworld";
    int ret;
    fp = fopen(argv[1],"r+");
    if(NULL == fp){
        perror("fopen");
        return -1;
    }
    memset(buf,0, sizeof(buf));
    ret=fread(buf, sizeof(char), sizeof(buf)-1, fp);
    puts(buf);
    memset(buf,0, sizeof(buf));
    strcpy(buf, "world");
    fseek(fp,0,SEEK_CUR);  //刷新位置指针
    ret=fwrite(buf,sizeof(char),strlen(buf),fp);
    return 0;
}