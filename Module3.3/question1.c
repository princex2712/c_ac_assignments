// Write a program to find out the max number from given array using function
#include<stdio.h>
int max(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    printf("\nEnter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter a value of (%d) element:",i+1);
        scanf("%d",&arr[i] );
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("\nMaximum number:%d",max(arr,size));
    return 0;
}   