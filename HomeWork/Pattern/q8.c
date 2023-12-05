// 8.Left Arrow * Pattern
#include<stdio.h>

int main(){
    printf("\nPatetrn\n");
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            if(k==1 || k==2){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=7;i>=1;i--){
        for(int j=1;j<=7-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            if(k==0 || (k==1 && i!=1) ){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
