// 1. C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    while(abs(n)>0){
        int temp = abs(n)%10;
        printf("%d",temp);
        n/=10;
    }
    return 0;
}