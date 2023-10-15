// 5. Checking Number Is Even or Odd

#include<stdio.h>

int main(){
    int a;
    printf("\nEnter Integer Number: ");
    scanf("%d",&a);

    if(a%2==0){
        printf("\n %d Is Even",a);
    }else{
        printf("\n %d Is Odd",a);
    }
    return 0;
}