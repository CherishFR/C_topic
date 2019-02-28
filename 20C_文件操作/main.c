#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    FILE *fp;
    int i;
    char c;
//    for (i=0;i<argc;i++){
//        puts(argv[i]);
//    }
    fp = fopen(argv[1],"r");
    if (NULL==fp){
        perror("fopen");
    }
    while ((c=fgetc(fp))!=EOF){
        putchar(c);
    }
    fclose(fp);

    fp = fopen(argv[1],"w");
    i = fputc('H',fp);
    fclose(fp);  // 刷新缓冲区
//    fflush(fp);
}
