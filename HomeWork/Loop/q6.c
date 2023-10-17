// 6. Find the GCD of Two Numbers Using Loop
#include<stdio.h>

int main(){
    int a,b,GCD=1;

    printf("\nEnter First Number: ");
    scanf("%d",&a);
    printf("\nEnter Second Number: ");
    scanf("%d",&b);
    int min = a;
    if(b<a){
        min = b;
    }
    for(int i=1;i<=b;i++){
        if(a%i==0 && b%i==0){
            GCD = i;
        }
    }
    printf("\nGCD of %d And %d Is %d",a,b,GCD);

    return 0;
}