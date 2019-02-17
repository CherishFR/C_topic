#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 4+5*2-6/3-5;
    int shang,yushu;
    scanf("%d",&i);
    shang=i;
    while (shang){
        yushu=shang%10;  // 取余数
        shang=shang/10;
        printf("%d",yushu);
    }
    printf("\n")

    float f = 234.56;
    if (f == 234.56){  // f只是满足精度为234.56，可能真实值为234.559
        printf("f is 234.56\n");
    } else{
        printf("f is not 234.56\n");
    }
    if (-0.0001 < f - 234.56 && f - 234.56 < 0.0001){
        printf("f is 234.56\n");
    } else{
        printf("f is not 234.56\n");
    }

    scanf("%d",&i);
    switch (i){
        case 1:printf("i=1");
            break;
        case 2:printf("i=2");
            break;
        case 3:printf("i=3");
            break;
        case 4:printf("i=4");
            break;
    }

    int j=1;
    1==j && printf("j is 1\n");

    int k = 5;
    k = k << 1;  // 移位

    int a[5] = {11,5,9,2,7};
    int re = 0;
    for(i=0;i<5;i++){
        re = re^a[i];
    }
    printf("re = %d\n",re);

    int i_a,i_b,i_c;
    while (scanf("%d%d%d",&i_a,&i_b,&i_c) != EOF){
        k = (i_a>i_b?i_a:i_b)>i_c?(i_a>i_b?i_a:i_b):i_c;
        printf("k=%d\n",k);
    }

    // 利用goto实现循环
    label:
        i = i+5;
        if (i<=100){
            goto label;
        }
    return 0;
}