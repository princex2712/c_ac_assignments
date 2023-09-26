// Pattern
//     * 
//    * * 
//   *   * 
//  *     * 
// *       * 
//  *     * 
//   *   * 
//    * * 
//     * 
       
#include<stdio.h>
int main(){
    printf("Pattern\n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=(5-i);j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            if(k==1){
                printf("* ");
            }else if(k==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--){
        for(int j=1;j<=(5-i);j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            if(k==1){
                printf("* ");
            }else if(k==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}