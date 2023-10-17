// 3. Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>

int main(){
    
    int n,sum=0,temp;
    printf("\nEnter a Number: ");
    scanf("%d",&n);
    temp = n;

    while(n>0){
        sum+=n;
        n--;
    }
    printf("\nSum of %d Natural Numbers is %d",temp,sum);

    return 0;    
}