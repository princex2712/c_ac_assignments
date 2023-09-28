//WAP to print Fibonacci series up to given numbers
#include<stdio.h>

void fibo(int n){
    int a = 0;
    int b = 1;
    int c;
    for(int i=1;i<=n;i++){
        printf("%d, ",a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n<=0){
        printf("\nInvalid Input");
    }else{
        fibo(n);
    }
}