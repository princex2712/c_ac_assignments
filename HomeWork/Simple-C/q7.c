// 7. C Program to Find Percentage of 5 Subjects

#include<stdio.h>

int main(){
    int marks[5],total=0;
    float per;

    for(int i=0;i<5;i++){
        printf("\nEnter Marks of Subject %d: ",i+1);
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    per =(float)(total*100)/500;
    printf("\nTotal Percentage: %.2f%%",per);

    return 0;

}
