// 6. Write a Program to Reverse a String in C
#include<stdio.h>
#include<string.h>

int main(){
    char string[] = "HELLO";
    int len = strlen(string);

    for(int i=0;i<len/2;i++){
        char temp = string[i];
        string[i] = string[len-i-1];
        string[len-i-1] = temp;
    }

    printf("\nReversed String: %s",string);
    return 0;
}