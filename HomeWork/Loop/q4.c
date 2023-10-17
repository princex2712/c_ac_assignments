// 4. Write a C Program to Print the Multiplication Table of N

#include<stdio.h>

int main(){
    int n,fact=1;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    if(n<0){
        printf("\nTable of Negative is not possible");
    }else{
        for(int i=1 ;i<=10;i++){
            printf("\n%d x %d = %d",n,i,n*i);
        }
    }
    return 0;
}   