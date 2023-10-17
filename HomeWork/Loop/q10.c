// 10. Count the Number of Digits of an Integer Using the While Loop
#include<stdio.h>
#include<math.h>

int main(){
    int n,dig=0;
    
    printf("\nEnter an Integer Number: ");
    scanf("%d",&n);

    while(abs(n)>0){
        dig++;
        n/=10;
    }
    printf("\nDigits: %d",dig);
    return 0;
}