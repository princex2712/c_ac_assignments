// WAP to find simple interest
#include <stdio.h>
int main(){

    float p,r,t;

    printf("Enter a value of Principal:");
    scanf("%f",&p);
    printf("\nEnter a value of Rate:");
    scanf("%f",&r);
    printf("\nEnter a value of Time:");
    scanf("%f",&t);

    printf("\n%f",(p*r*t)/100);

    return 0;
}
