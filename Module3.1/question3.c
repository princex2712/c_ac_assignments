// WAP to find area of circle, rectangle and triangle
#include <stdio.h>

int main(){
    float r,b,h,l,w;
    int c;
    printf("Enter your choice:\n(1) for circle\n(2) for rectangle\n(3) for triangle\n Your Choice:");
    scanf("%d",&c);
    
    switch(c){
    case 1:
        printf("\nEnter a radius of cirlce:");
        scanf("%f", &r);
        printf("%f",(3.14*r*r));
        break;
    case 2:
        printf("\nEnter a length of rectangle:");
        scanf("%f", &l);
        printf("\nEnter a width of rectangle:");
        scanf("%f", &w);
        printf("\n%f",(w*l));
        break;
    case 3:
        printf("\nEnter a base of triangle:");
        scanf("%f", &b);
        printf("\nEnter a heigth of triangle:");
        scanf("%f", &h);
        printf("\n%f",(0.5*b*h));
        break;
    default:
        printf("Invalid input!");
    }
    
    return 0;
}
