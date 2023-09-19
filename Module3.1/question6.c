// WAP to convert years into days and days into years
#include<stdio.h>

int main(){

    float days,years;
    int c;
    printf("Enter your choice:\n(1) for years to days\n(2) for days to year\nYour choice:");
    scanf("%d",&c);

    switch(c){
        case 1:
                printf("\nEnter value of years:");
                scanf("%f", &years);
                printf("\nDays:%.2f",(years*365.25));
                break;
        case 2:
                printf("\nEnter value of days:");
                scanf("%f", &days);
                printf("\nYears:%.2f",(days/365.25));
                break;
        default:
                printf("Invalid Input");
    }
    return 0;
}