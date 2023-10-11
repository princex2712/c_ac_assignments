// 4] Write a program to copy string from one string to another string and also set in uppercase with user
// define function.
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char mainString[]="Hello",copied[100];

    for(int i=0;i<strlen(mainString);i++){
        mainString[i] = toupper(mainString[i]);
    }
    strcpy(copied,mainString);

    printf("\nCopied: %s",copied);
}