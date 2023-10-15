// 5. Calculate a Simple Interest
#include<stdio.h>

int main(){
    float p,r,t,res;

    printf("\nEnter Principal of Interest:");
    scanf("%f",&p);
    printf("\nEnter Rate of Interest:");
    scanf("%f",&r);
    printf("\nEnter Time of Interest(Years):");
    scanf("%f",&t);

    res = (p*r*t)/100;
    printf("\nSimple Interest: %.2f",res);

    return 0;
}
