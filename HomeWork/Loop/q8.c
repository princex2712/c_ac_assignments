// 8. C Program to Reverse a Number Using FOR Loop
#include<stdio.h>

int main(){

    int n,reversed=0,num;
    printf("\nEnter a Number:");
    scanf("%d",&n);
    int temp = n;
    for(; n>0; n/=10){
        num = n%10;
        reversed = reversed*10 + num;
    }
    printf("\nReversed : %d",reversed);
    return 0;
}
