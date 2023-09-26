#include <stdio.h>
int main(){
    printf("Pattern\n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=(5-i);j++){
            printf(" ");
        }
        printf("*");
        if(i>1){
            for(int k=1;k>=2*(i-3);k++){
                printf(" ");
            }
        printf("*");
        }
        printf("\n");
    }
    for(int i=5-1;i>=1;i--){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        printf("*");
        if(i>1){
            for(int k=1;k<=2*(i-3);k++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


