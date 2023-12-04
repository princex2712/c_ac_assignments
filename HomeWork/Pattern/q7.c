// 7.Right Arrow Star Pattern

#include<stdio.h>

int main(){
    printf("\nRight Arrow\n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
           printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int l=1;l<=i;l++){
            if(l==i || l==i-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i=5;i>=1;i--){
        for(int j=1;j<=5-i;j++){
           printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int l=2;l<=i;l++){
            if(l==i || l==i-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
