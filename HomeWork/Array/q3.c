// 3. Delete Element from an Array at a Desired or Specific Position
#include<stdio.h>

int main(){
    int arr[5] = {11,46,12,46,11};
    int len = 5;
    int element_to_remove=0;
    for(int i=element_to_remove;i<(len-1);i++){
        arr[i] = arr[i+1];
    }
    len--;
    
    printf("\nAfter Deleting Array Element: ");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
