// 3.Open a File(open a Program Itself) Using Pointer
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE  *ptr;
    char ch;

    ptr = fopen(__FILE__,"r");

    if(ptr == NULL){
        printf("The file is not opened. The program will now exit.");
    }

    while((ch=fgetc(ptr))!=EOF){
        putchar(ch);
    }
    fclose(ptr);
    return 0;
}