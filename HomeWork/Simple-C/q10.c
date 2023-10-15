// 10. a Check Number Is Positive or Negative

#include<stdio.h>
int main(){
    int a;
    
    printf("\nEnter Integer Number:");
    scanf("%d",&a);

    if(a==0){
        printf("\n0 is not Positive or Negative");
    }else if(a>0){
        printf("\n%d is Positive Number",a);
    }else{
        printf("\n%d is Negative Number",a);
    }
    
    return 0;
}