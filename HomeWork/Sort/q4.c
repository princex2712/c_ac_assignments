// 4.QUICK Sort in Ascending Order
#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int division(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low -1;

    for(int j = low ;j <=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi = division(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main(){ 
    int arr[]={10,80,30,90,40,50,70};
        int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}
