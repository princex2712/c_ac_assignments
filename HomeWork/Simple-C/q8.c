// 8. Convert Temperature Celsius into Fahrenheit
#include<stdio.h>

int main(){
    float c,f;

    printf("\nEnter Tempreture in Celsius: ");
    scanf("%f",&c);

    f = c *(9.0/5.0) + 32;
    printf("\nTempreture in Fahrenheit: %.2f",f);

    return 0;
}