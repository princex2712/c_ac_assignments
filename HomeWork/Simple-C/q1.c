// 1. C Program to Find Area And Circumference of Circle
#include<stdio.h>
int main(){
    float area,r,circumf;
    
    printf("\nEnter Radius Of Circle:");
    scanf("%f",&r);
    area = 3.14*r*r;
    circumf = 2*3.14*r;

    printf("\nArea Of Circle: %.2f\nCircumference Of Circle:%.2f",area,circumf);
    
    return 0;
}