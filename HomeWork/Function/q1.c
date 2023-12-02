// 1. Bubble Sort Using a Function in Ascending and Descending Order
#include<stdio.h>

void bubbleDsc(int arr[]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubbleAsc(int arr[]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[]={12,56,32,47,2};

   bubbleAsc(arr);
   printf("\nAscending Order: ");
   for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
   }

   bubbleDsc(arr); 
   printf("\nDescending Order: ");
   for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
   }
    return 0;
}
