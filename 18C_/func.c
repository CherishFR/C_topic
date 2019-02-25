#include "func.h"

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

