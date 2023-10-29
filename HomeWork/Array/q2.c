// C Program for Remove Duplicates Items
#include<stdio.h>

int main(){
    int arr[5] = {11,46,12,46,11};
    int new[5], index=0;

    for(int i=0;i<=4;i++){
        int duplicate = 0;
        for(int j=0;j<index;j++){
            if(arr[i]==new[j]){
                duplicate = 1;  
                break;
            }
        }
        if(!duplicate){
            new[index] = arr[i];
            index++;
        }
    }
    printf("\nAfter Filtering Array: ");
    for(int i=0;i<index;i++){
        printf("%d ",new[i]);
    }
    return 0;
}