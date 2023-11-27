// 12. C Program to Print The Calendar of a Month of 31 Days
#include<stdio.h>

int main(){
    int strt;
    printf("\n(1) Sunday\n(2) Monday\n(3) Tuesday\n(4) Wednesday\n(5) Thursday\n(6) Friday\n(7) Saturday\nEnter Your Starting Day: ");
    scanf("%d",&strt);
    printf("\nSun\t\tMon\t\tTue\t\tWed\t\tThu\t\tFri\t\tSat\n");
    
    int spc=0;
    for(int i=1;i<strt;i++){
        printf("\t\t");
    }
    for(int i=1;i<=31;i++){
        for(int j=1;j<=7;j++,i++){
            printf(" %d\t\t",i);
            if(j==7){
                i--;
            }
        }
        printf("\n");
    }
    return 0;
}