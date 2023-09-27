#include<stdio.h>

int main(){
    char arr[20];
    int asciiArr[20];
    int c;
    printf("Enter Your First Name:");
    scanf("%20s",arr);
    printf("\nEnter your choice:\n(1) for Lower\n(2) for Upper\n(3) for opposite you entered\n");
    scanf("%d",&c);
    
    //converting char to ascii value
    for(int i=0;arr[i]!='\0';i++){
        asciiArr[i]=(int)arr[i];
    }

    switch(c){
        case 1:
            for(int i=0;asciiArr[i]!='\0';i++){
                if(asciiArr[i]>=97){
                    printf("%c",asciiArr[i]);
                }else{
                    asciiArr[i]=asciiArr[i]+32;
                    printf("%c",asciiArr[i]);
                }
            }
            break;
        case 2:
            for(int i=0;asciiArr[i]!='\0';i++){
                if(asciiArr[i]>=97){
                    asciiArr[i]=asciiArr[i]-32;
                    printf("%c",asciiArr[i]);
                }else{
                    printf("%c",asciiArr[i]);
                }
            }
            break;
        case 3:
           for(int i=0;asciiArr[i]!='\0';i++){
                if(asciiArr[i]>=97){
                    asciiArr[i]=asciiArr[i]-32;
                    printf("%c",asciiArr[i]);
                }else{
                    asciiArr[i]=asciiArr[i]+32;
                    printf("%c",asciiArr[i]);
                }
            } 
            break;
        default:
            printf("Invalid Operation");
    }
    return 0;
}       