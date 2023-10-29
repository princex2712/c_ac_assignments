// 1. Insert an Element at a Specific Position in an Array in C Program
#include<stdio.h>

int main(){
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}