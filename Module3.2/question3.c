// WAP to find number is even or odd using ternary operator
#include<stdio.h>

int main(){

    int a;
    printf("Enter an integer value:");
    scanf("%d",&a);
    (a%2==0)?printf("%d is Even Number",a):printf("%d is odd Number",a);
    return 0;
}