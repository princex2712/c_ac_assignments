// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo) 
#include <stdio.h>
int main(){

    float a, b;
    int c;

    printf("Enter a first number:");
    scanf("%f",&a);
    printf("\nEnter a second number:");
    scanf("%f",&b);
    printf("\nEnter a operation you want to perform \n(1) for Addition\n(2) for Subtraction\n(3) for multiplication\n(4) for divide\n(5) for modulo\nYour choice:");
    scanf("%d",&c);
    
    if(c==1){
        printf("\nAddition: %f",(a+b));
    } else if(c==2){
        printf("\nSubtraction: %f",(a-b));
    } else if(c==3){
        printf("\nMultiply: %f",(a*b));
    } else if(c==4){
        if(b!=0){
            printf("\nDivison:%.2f",(a/b));
        }else{
            printf("\nDivision by zero is not allowed");
        }
    } else if(c==5){
        if(b!=0){
            printf("\nModulo:%f",(a%b));
        }else{
            printf("\nModulus by zero is not allowed.\n");
        }
    }  else {
        printf("\nInvalid choice");
    }

    return 0;
}