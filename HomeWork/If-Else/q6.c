// 6. Leap Year Program in C with Logic, Explanation and Output

#include<stdio.h>

int main(){

//  Initializing Variable
    int y;

//  Taking Input From User
    printf("\nEnter Year : ");
    scanf("%d",&y);

//  Cheking Whether it is Leap Year or Not And Printing Output
    if(y%400==0){
        printf("\n %d Is Leap Year",y);
    }else if(y%4==0 && y%100!=0){
        printf("\n %d Is Leap Year",y);
    }else{
        printf("\n %d Is Not A Leap Year",y);
    }
    return 0;
}