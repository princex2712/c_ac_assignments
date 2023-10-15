// 4. Program for Finding Greater Between Two Number
#include<stdio.h>

int main(){
    int a,b;
    printf("\nEnter First Number : ");
    scanf("%d",&a);
    printf("\nEnter Second Number : ");
    scanf("%d",&b);
    if(a==b){
        printf("\n %d And %d Are Equal",a,b);
    }else if(a>b){
        printf("\n%d Is Greater Number",a);
    }else{
        printf("\n%d Is Greater Number",b);
    }
    return 0;
}