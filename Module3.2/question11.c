// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main(){
    int n,reversed;
    printf("Enter an integer:");
    scanf("%d",&n);
    while(n>0){
        reversed = n%10;
        printf("%d",reversed);
        n = n/10;
    }
    return 0;
}