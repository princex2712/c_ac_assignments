// * * * * * * * 
// *   *   *   * 
// * * * * * * * 
// *   *   *   * 
// * * * * * * * 
// *   *   *   * 
// * * * * * * * 

#include<stdio.h>
int main(){
    for(int i=1;i<=7;i++){
            for(int j=1;j<=7;j++){
            if(i==1 || i==7 ||j==1||j==7){
                printf("* ");
            }
            else if(i%2==0&&j%2==0){
                printf("  ");
            }
            else if(i%2!=0||j!=0){
                printf("* ");
            }
        }
                printf("\n");
    }
    return 0;
}