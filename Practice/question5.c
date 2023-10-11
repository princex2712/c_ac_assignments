
// 5] Pyramid Program (using while loop)
// * * * * *
//   * * * *
//     * * *
//       * *
// 	       *
#include<stdio.h>
int main(){
    int i = 5;
    while(i>0){
        int j = 5 - i;
        while(j>0){
            printf("  ");
            j--;
        }
        j=i;
        while(j>0){
            printf("* ");
            j--;
        }
        printf("\n");
        i--;
    }
    return 0;
}