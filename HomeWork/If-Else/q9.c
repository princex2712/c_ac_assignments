// 9. Largest of Three Numbers in C Using Nested if Else
#include<stdio.h>

int main(){
    int num[3];

    for (int i=0;i<=2;i++){
        printf("\nEnter %d Number: ",i+1);
        scanf("%d",&num[i]);
    }
    int result = num[0];
    if(num[1]>num[0]){
        result = num[1];
        if(num[2]>num[1]){
            result = num[2];
        }
    }else{
        if(num[2]>num[0]){
            result = num[2];
        }
    }
    printf("\nLargest Number: %d",result);
    return 0;
}