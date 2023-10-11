// 1] Write a program to find out the Max number from given Matrix
// 12	113	111
// 22	54	34

#include<stdio.h>

int main(){
    int mtx[2][3] = {{12,113,111},
                     {22,54,34}};
    int max=mtx[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(mtx[i][j]>max){
                max=mtx[i][j];
            }
        }
    }
    printf("\nMax Number :%d ",max);
}