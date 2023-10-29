// 4. Write a C Program to Find the Grade of a Student Using Switch Case
#include<stdio.h>

int main(){
    int mark[5],intPer;
    float per,total=0.0;
    for(int i=1;i<=5;i++){
        printf("\nEnter Your Marks In Subject %d: ",i);
        scanf("%d",&mark[i-1]);
        total += mark[i-1];
    }
    per =(total/500.0)*100;
    intPer = (int)per;
    switch(intPer/10){
        case 7:
            printf("\nGrade: A");
            break;
        case 6:
            printf("\nGrade: B");
            break;
        case 5:
            printf("\nGrade: C");
            break;
        case 4:
            printf("\nGrade: D");
            break;
        default:
            printf("\nFailed");
    }
    return 0;
}