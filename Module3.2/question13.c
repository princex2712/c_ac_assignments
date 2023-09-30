// Write a program make a summation of given number (E.g., 1523 Ans: -11) 
#include<stdio.h>
int main(){
    int n,sum,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        temp = n%10;
        sum +=temp;
        n=n/10;
    }
    printf("Summation: %d",sum);
    return 0;
}