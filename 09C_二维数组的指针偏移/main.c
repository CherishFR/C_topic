#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int (*p)[4],int row){
    int i=0,j=0;
    for(i=0;i<row;i++){
        for(j=0;j< sizeof(*p)/ sizeof(int);j++){
            printf("%3d",*(*(p+i)+j));  // *(*(p+i)+j)==a[i][j]
        }
    }
}

int main() {
    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    int b[4] = {1,2,3,4};
    int (*p)[4];
    int *pi;
    print(a,3);
    return 0;
}