// 9.Pascal Triangle Using a Number
#include<stdio.h>
int main(){

    printf("\nTriangle\n");
    for(int i=1;i<=10;i++){
        int num = 1;
        for(int j=1;j<=10-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf(" %d",num);
            num = num * (i-k)/(k);
        }
        printf("\n");
    }
    return 0;
}