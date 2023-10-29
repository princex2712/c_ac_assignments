// 1. C Program to Convert Celsius to Fahrenheit And Vice Versa
#include<stdio.h>
int main(){
    float Celsius,Fahrenheit;
    int c;

    printf("\nEnter Your Choice\n(1) Fahrenheit to Celsius\n(2) Celsius to Fahrenheit: ");
    scanf("%d",&c);

    switch(c){
        case 1:
            printf("\nEnter Tempreture in Fahrenheit: ");
            scanf("%f",&Fahrenheit);
            printf("\nTempreture in Celsius: %.3f",(Fahrenheit-32.0)*(5.0/9.0));
            break;
        case 2:
            printf("\nEnter Tempreture in Celsius: ");
            scanf("%f",&Celsius);
            printf("\nTempreture in Fahrenheit: %.3f",((Celsius)*(9.0/5.0))+32);
            break;
        default:
            printf("\nEnter Valid Operation");
            main();
    }
    return 0;
}