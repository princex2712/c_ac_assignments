// 10.Christmas Tree Pattern Using *
#include<stdio.h>

int main(){
    printf("\nPyramid\n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
           printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        for(int l=2;l<=i;l++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            printf("  ");
        }
        for(int k=0;k<=i;k++){
            printf("* ");
        }
        for(int l=1;l<=i;l++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6;j++){
            if(j==4 || j==5 || j==6){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
