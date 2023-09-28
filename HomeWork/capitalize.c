//method-1
#include<stdio.h>
int main(){
    char arr[20];
    printf("Enter a string:");
    scanf("%20s",arr);
    for(int i=0;arr[i]!='\0';i++){
        if(i==0){
            if(arr[i]>='a'){
                arr[i]-=32;
                printf("%c",arr[i]);
            }else{
                printf("%c",arr[i]);
            }
        }else{
            if(arr[i]<'a'){
                arr[i]+=32;
                printf("%c",arr[i]);
            }else{
                printf("%c",arr[i]);
            }
        }
    }
}
//method-2

// #include<stdio.h>
// int main(){
//     char arr[20];
//     printf("Enter a string:");
//     scanf("%20s",arr);
//     for(int i=0;arr[i]!='\0';i++){
//         if(i==0){
//             if((int)arr[i]>=97){
//                 arr[i]=(int)arr[i]-32;
//                 printf("%c",arr[i]);
//             }else{
//                 printf("%c",arr[i]);
//             }
//         }else{
//             if((int)arr[i]<97){
//                 arr[i]=(int)arr[i]+32;
//                 printf("%c",arr[i]);
//             }else{
//                 printf("%c",arr[i]);
//             }
//         }
//     }
//     return 0;
// }