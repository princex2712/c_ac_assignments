// Pattern 4
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 

#include<stdio.h>
int main(){

    printf("Pattern 4\n");
        for(int i=1;i<=5;i++){
            for(int k=1;k<=i-1;k++){
                printf("  ");
            }
            for(int j=1;j<=(5-i+1);j++){
                printf("* ");
            }
            printf("\n");
        }
    return 0;
}