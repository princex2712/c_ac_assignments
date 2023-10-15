// 3. Checking Whether You Are Eligible for Voting or Not

#include<stdio.h>

int main(){
    int a;
    printf("\nEnter Your Age : ");
    scanf("%d",&a);

    if(a>=18){
        printf("\n You are Eligible for Voting");
    }else{
        printf("\n You not are Eligible for Voting");
    }
    return 0;
}