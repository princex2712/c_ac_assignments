// 1.Linear Search Program in C
#include<stdio.h>
int main(){
    int arr[]={7,4,5,2,9};
    int c,total=0;
    printf("\nEnter Number to Search: ");
    scanf("%d",&c);
    for(int i=0;i<5;i++){
        if(arr[i]==c){
            printf("\n%d is At Location %d",c,i+1);
            total++;
       }
    }
    printf("\n %d is %d times",c,total);
    return 0;
}
