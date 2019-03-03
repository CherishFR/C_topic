#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]) {
    FILE *fp;
    char buf[20] = "hello\nworld";
    fp = fopen(argv[1],"r+");
    if (NULL == fp){
        perror("sopen");
    }
//    while (NULL!=fgets(buf, sizeof(buf)-1,fp)){
//        printf("%s",buf);
//    }
    fputs("world",fp);
    return 0;
}