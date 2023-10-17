// 7. Program to Find LCM of Two Numbers in C Using While Loop
#include<stdio.h>

int main(){
    int a,b,flag=0;

    printf("\nEnter First Number: ");
    scanf("%d",&a);
    printf("\nEnter Second Number: ");
    scanf("%d",&b);
    
    int max = (a>b)?a:b;
    while(!flag){
        if(max%a==0 && max%b==0){
            flag = 1;
        }
        max++;
    }
   
    printf("\nLCM of %d And %d Is %d",a,b,(max-1));

    return 0;
}