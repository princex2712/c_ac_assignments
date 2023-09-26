//Pattern-1
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
#include<stdio.h>

int main(){
        printf("Pattern 1\n");
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                printf("* ");
            }
            printf("\n");
        }
        return 0;
}