// 3.INSERTION Sort in Ascending Order
#include<stdio.h>
int main(){
    int arr[]={7,4,5,2,9};
    for(int i=1;i<5;i++){
        int num = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>num){
            arr[j+1] = arr[j];
            j -=1;
        }
        arr[j+1] = num;
    }
    for(int i=0;i<5;i++){
        printf("%d, ",arr[i]);
    }
}
