// Pattern 2
// * * * * * 
// * * * * 
// * * * 
// * * 
// *
#include<stdio.h>

int main(){
    
    printf("Pattern 2\n");   
        for(int i=5;i>=1;i--){
            for(int j=i;j>=1;j--){
                printf("* ");
            }
            printf("\n");
        }
        return 0;
}