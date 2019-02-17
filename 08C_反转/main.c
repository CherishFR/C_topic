#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *start, char *end){
    char d;
    while (start<end){
        d = *start;
        *start = *end;
        *end = d;
        start++;
        end--;
    }
}

void word_reverse(char *c){
    char *ps,*pe;
    ps=c;
    pe=c;
    while (*ps) {
        while (*ps == ' ') { // 找到不为空格的单词起始位置
            ps++;
            pe++;
        }
        while (*pe != ' ' && *pe != 0) {  //找到单词结束位置
            pe++;
        }
        reverse(ps, pe - 1);
        ps = pe;
    }
}

int main() {
    char c[100];
    while (memset(c,0, sizeof(c)),gets(c)!=NULL){  // memset()将某段地址全部置为0
        puts(c);
        reverse(c,c+strlen(c)-1);  // c+strlen(c)-1为结束位的地址空间，-1是因为要去掉结束符
        puts(c);
        word_reverse(c);
        puts(c);
    }
    return 0;
}