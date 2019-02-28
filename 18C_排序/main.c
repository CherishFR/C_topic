#include "func.h"

int main() {
    int a[N];
    int i;
    srand(time(NULL));
    for (i = 0;  i<N ; i++) {
        a[i]=rand()%100;
    }
    arr_print(a);
    arr_select(a);
    arr_print(a);

    return 0;
}