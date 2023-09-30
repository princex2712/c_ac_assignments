// Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) 
#include<stdio.h>
int main(){
    int max,n,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=0){
        n = (-1)*n;
    }
    while(n>0){
        temp = n%10;
        if(max<temp){
            max = temp;
        }
        n = n/10;
    }
    printf("Max: %d",max);
    return 0;
}