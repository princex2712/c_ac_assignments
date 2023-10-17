// 5. Fibonacci Series Program in C Using DO While Loop
#include<stdio.h>

int main(){
    int n;
    printf("\nEnter a Number: ");
    scanf("%d",&n);

    int count=0,a=0,b=1,c;
    while(count<=n){
        printf("%d, ",a);
        c = a+b;
        a = b;
        b = c;
        count++;
    }

    return 0;
}