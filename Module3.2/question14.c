// Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans:-5)
#include<stdio.h>
int main(){
    int n,sum,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp = n%10;
    while(n>9){
        n = n/10;
    }
    sum = temp + n;
    printf("Summation: %d",sum);
    return 0;
}