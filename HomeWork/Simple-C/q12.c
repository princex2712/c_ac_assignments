// 12. Calculate the Factorial of a Given Number

#include<stdio.h>
int main(){
    int a,fact=1;

    printf("\nEnter an Integer Number: ");
    scanf("%d",&a);

   if(a<0){
    printf("\nCan Not Possible Factorial For Negative Number");
   }else{
     for(int i=1;i<=a;i++){
        fact *=i;
    }
    printf("Factorial of %d is : %d",a,fact);
   }
   return 0;
}