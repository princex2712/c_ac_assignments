// 3. Convert String to Integer Without Using Library Functions
#include<stdio.h>
#include <string.h>

int main(){
    char string[]="Hello";
    int str[strlen(string)];

    printf("String to Integer: ");
    for(int  i=0;i<strlen(string);i++){
        if(string[i]>='0' && string[i]<='9'){
            str[i]=string[i] - '0';
        }else{
            str[i] =string[i];
        }
        printf("%d",str[i]);
    }

    return 0;
}