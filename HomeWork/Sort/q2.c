// 2.SELECTION Sort in Ascending and Descending Order
#include<stdio.h>

    int main(){
        int c;
        int arr[]={12,43,25,13,64};
        printf("\n(1) Ascending\n(2)Descending\nEnter Your Choice: ");
        scanf("%d",&c);
        switch(c){
            case 1:
                for(int i=0;i<5;i++){
                    int index = i;
                    for(int j=i+1;j<5;j++){
                        if(arr[j]<arr[index]){
                            index = j;
                        }
                    }
                    int temp = arr[i];
                    arr[i] = arr[index];
                    arr[index]=temp;
                    printf("%d, ",arr[i]);
                }
            break;
            case 2:
                for(int i=0;i<5;i++){
                    int index = i;
                    for(int j=i+1;j<5;j++){
                        if(arr[j]>arr[index]){
                            index = j;
                        }
                    }
                    int temp = arr[i];
                    arr[i] = arr[index];    
                    arr[index]=temp;
                    printf("%d, ",arr[i]);
                }
            break;
            default: 
                printf("\nEnter Valid Choice");
        }
        return 0;
    }
