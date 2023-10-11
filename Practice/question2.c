// 2] Write a program you have to print the Fibonacci series up to user given
// number 
// 0 1 1 2 3 5

#include<stdio.h>

int main(){
    int a=0,b=1,usrNum,c;

    printf("\nEnter a Number: ");
    scanf("%d",&usrNum);
    
    for(int i =1;i<=usrNum;i++){
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}