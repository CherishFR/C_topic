#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 10
#define SWAP(a,b) {int tmp;tmp=a;a=b;b=tmp;}

void arr_print(int*);
void arr_select(int*);
void arr_insert(int*);
void arr_quick(int*,int,int);
void arr_heap(int*);
