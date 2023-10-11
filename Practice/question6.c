#include<stdio.h>
int main(){
    printf("\nPattern\n");

    for(int i=1;i<=7;i++){
        if(i%2==0){
            for(int j=1;j<=7;j++){
                if(j==1 || j==7){
                    printf("* ");
                }else if(j%2!=0 && j>i){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }else{
            for(int j=1;j<=7;j++){
               if(j%2==0 && j>1 && j <7 && i%2==0){
                printf("  ");
               }else if((i==3 || i==5) && j>i){
                printf("  ");
               }else{
                printf("* ");
               }
            }
        }
        printf("\n");
    }
}
// * * * * * * * 
// *   *   *   * 
// * * * * * * * 
// *       *   * 
// * * * * * * * 
// *           * 
// * * * * * * * 

