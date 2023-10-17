// 2. Program of Armstrong Number in C Using For Loop &amp; While Loop
#include<stdio.h>
#include<math.h>
int main(){
    int n,a,sum=0,len=0;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    int n1 = n,temp=n;

    while(n1>0){
        len++;
        n1 = n1/10;
    }

    while(n>0){
        a = n%10;
        sum = sum + pow(a,len);
        n/=10;
    }

    if(sum == temp){
        printf("\n%d Is Armstrong Number",temp);
    }else{
        printf("\n%d Is Not an Armstrong Number",temp);
    }
    
    return 0;
}