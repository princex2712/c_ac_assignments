// 4.Right Half Diamond Star Pattern
#include<stdio.h>

int main(){
    printf("\nPatetrn\n");
    for(int i=1;i<=5;i++){
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--){
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

