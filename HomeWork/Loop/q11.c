// 11. Find a Generic Root of a Number Using While Loop

#include<stdio.h>

int gen(int n){
    int sum=0,dig;
    while(n>0){
        dig = n%10;
        sum +=dig;
        n/=10;
    }
    if(sum>9){
        return gen(sum);
    }else{
        return sum;
    }
}
int main(){
    int n;
    printf("\nEnter a Number:");
    scanf("%d",&n);
    printf("\nGeneric : %d",gen(n));
    return 0;
}