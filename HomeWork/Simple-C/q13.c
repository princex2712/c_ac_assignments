// 13. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>

int main(){
    int a,power;

    printf("\nEnter a Number: ");
    scanf("%d",&a);

    printf("\n%d^1 = %d",a,a);
    printf("\n%d^2 = %d",a,a*a);
    printf("\n%d^3 = %d",a,a*a*a);
    
    return 0;
}