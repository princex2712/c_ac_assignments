// Pattern
//       1   
//     2   3   
//   4   5   6   
// 7   8   9   10 
#include<stdio.h>

int main(){
    int p=1;
    printf("Pattern\n");
    for(int i=1;i<=4;i++){
        for(int j=1;j<=(4-i);j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",p);
            p++;
            printf("  ");
        }
        printf("\n");
    }
    return 0;
} 
