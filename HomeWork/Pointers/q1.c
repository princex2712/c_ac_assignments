// 1.C Program for Reverse a String Using Pointer
#include<stdio.h>
#include<string.h>

void reverse(char *str){
    int len=strlen(str);

    char *start= str;
    char *end = str + len - 1;
    
    while(start<end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

}

int main(){
    char inStr[100];
    printf("\nEnter Your String: ");
    fgets(inStr,sizeof(inStr),stdin);
    
    inStr[strcspn(inStr,"\n")]='\0';

    reverse(inStr);

    printf("\nReversed String:%s ",inStr);
    return 0;
}