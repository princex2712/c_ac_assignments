// WAP to find reverse of string using recursion
#include<stdio.h>

char rev(char arr[],int size){
    return arr[size-1];
}

int main(){
    char str[100];
    int size;
    printf("\nEnter a string:");
    scanf("%99s",&str);
    size = sizeof(str)/sizeof(str[0]);
    printf("%c",rev(str,size));  
}