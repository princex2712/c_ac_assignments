// WAP to swap two numbers without using third variable 
#include<stdio.h>

int main(){
    int a, b;
    printf("\nEnter two integer saperated by space:");
    scanf("\n%d %d",&a, &b);
    printf("\na = %d ,b = %d",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\na = %d,b = %d",a,b);

    return 0;
}