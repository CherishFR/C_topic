#include "func.h"

void arr_print(int *arr){
    int i;
    for (i = 0; i < N; ++i) {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}

void arr_select(int *arr){
    int i,j,max_pos;
    for (i = N; i > 0 ; --i) {
        max_pos = 0;
        for (j = 1; j < i; ++j) {
            if(arr[max_pos]<arr[j]){
                max_pos = j;
            }
        }
        SWAP(arr[max_pos],arr[i-1]);
    }
}

void arr_insert(int *arr){
    int i,j,k,insert_value;
    for (i=1;i<N;i++){
        for (j=0;j<i;j++){
            if (arr[i]<arr[j]){  // 一旦发现插入位置，从插入点开始的数据全部往后移
                insert_value = arr[i];
                for (k=i-1;k>=j;k--){
                    arr[k+1] = arr[k];
                }
                arr[j] = insert_value;
                break;
            }
        }
    }
}

int partition(int *arr,int left,int right){
    int i,k;
    k=left;
    for (i=left;i<right;i++){
        if(arr[right]>arr[i]){
            SWAP(arr[k],arr[i]);
            k++;
        }
    }
    SWAP(arr[k],arr[right]);
    return k;
}

void arr_quick(int *arr,int left,int right){
    int pivit;
    if(left<right){
        pivit = partition(arr,left,right);
        arr_quick(arr,left,pivit-1);
        arr_quick(arr,pivit+1,right);
    }
}

void heap_max(int *arr,int start, int end){
    int dad = start;
    int son = 2*dad+1;
    while (son<end){
        if(son+1<end&&arr[son]<arr[son+1]){
            son++;
        }
        if(arr[dad]>arr[son]){
            return;
        } else {
            SWAP(arr[dad],arr[son]);
            dad = son;
            son = 2*dad+1;
        }
    }
}

void arr_heap(int *arr){
    int i;
    for(i=N/2-1;i>=0;i--){
        heap_max(arr,i,N);
    }
    SWAP(arr[0],arr[N-1]);
    for(i=N-2;i>0;i--){
        heap_max(arr,0,i);  // 将数组重新调整为大顶堆
        SWAP(arr[0],arr[i-1]);  // 将根部元素放到数组最后一个元素
    }
}
