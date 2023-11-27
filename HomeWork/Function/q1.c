// 1. Bubble Sort Using a Function in Ascending and Descending Order
#include<stdio.h>

int main(){
    int arr[]={12,56,32,47,2};

    printf("Updated Array: ");
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ",arr[i]);
    }
    return 0;
}
