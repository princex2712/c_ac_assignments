// Pattern
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 
#include<stdio.h>

int main(){
        printf("Pattern\n");
        for(int i=1;i<=5;i++){
            for(int j=1;j<=(5-i);j++){
                printf("  ");
            }
            for(int k=1;k<=i;k++){
                printf("* ");
            }
            for(int l=1;l<i;l++){
                printf("* ");
            }
            printf("\n");
        }
        for(int i=1;i<=4;i++){
            for(int j=1;j<=i;j++){
                printf("  ");
            }
            for(int k=4;k>=i;k--){
                printf("* ");
            }
            for(int l=4;l>i;l--){
                printf("* ");
            }
            printf("\n");
        }
        return 0;
}