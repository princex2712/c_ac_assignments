// WAP to print table up to given numbers 
#include <stdio.h>
int main(){

    int num;
    printf("Enter a integer number:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("\n%d x %d = %d",num,i,i*num);
    }
    return 0;
}