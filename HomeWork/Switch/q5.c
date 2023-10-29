// 5. Finding Radius Circumference
#include<stdio.h>

int main(){
    int c;
    float Radius,Circumference;
    printf("\n(1)Find Circumference\n(2)Find Radius\nEnter Your choice: ");
    scanf("%d",&c);

    switch(c){
        case 1: 
            printf("\nEnter Radius of Circle: ");
            scanf("%f",&Radius);
            printf("\nCircumference: %.2f",(2.0*3.14*Radius));
            break;
        case 2: 
            printf("\nEnter Circumference of Circle: ");
            scanf("%f",&Circumference);
            printf("\nRadius: %.2f",(Circumference/(2.0*3.14)));
            break;
        default:
            printf("\nEnter Valid Choice");
    }
    return 0;
}