// 3] Write a program to sort the array of 5 elements
#include<stdio.h>

int main(){
    int usrArr[5];

    for(int i=0;i<5;i++){
        printf("\nEnter %d Element of Array: ",i+1);
        scanf("%d",&usrArr[i]);
    }
     for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
           if(usrArr[i]>usrArr[j]){
            int temp = usrArr[i];
            usrArr[i]=usrArr[j];
            usrArr[j]=temp;
           } 
        }
    }
    printf("\nShorted Array as Below\n");
    for(int i=0;i<5;i++){
        printf("%d ",usrArr[i]);
    }
    return 0;
}