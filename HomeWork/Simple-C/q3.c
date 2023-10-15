// 3. C Program to Find Area of Triangle Given Base And Height

#include<stdio.h>
int main(){
    float b,h,area;
    
    printf("\nEnter Base Of Triangle:");
    scanf("%f",&b);
    printf("\nEnter Height Of Triangle:");
    scanf("%f",&h);
    area = 0.5*b*h;

    printf("\nArea Of Triangle: %.2f",area);
    
    return 0;
}