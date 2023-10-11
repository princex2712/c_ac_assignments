#include<stdio.h>
int main(){
    int n = 7;
    printf("\nPattern\n");

    for(int i=1;i<=n;i++){
        if(i%2==0){
            for(int j=1;j<=n;j++){
                if(j==1 || j==n){
                    printf("* ");
                }else if(j%2!=0 && j>i){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }
        }else{
            if(i%2!=0 && i>1 && i<n){
                for(int j=1;j<=n;j++){
                    if(j<=i){
                        printf("* ");
                    }else if(j==n || j%2!=0){
                        printf("* ");
                    }
                    else{
                        printf("  ");
                    }
                }
            }else{
                for(int j=1;j<=n;j++){
                    printf("* ");
                }
            }
           
        }
        printf("\n");
    }
}
