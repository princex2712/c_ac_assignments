// 6. Remove All Vowels from a String
#include<stdio.h>
#include<ctype.h>

int main(){
    char string[100];
    int len=0, non_vowels=0;

    printf("\nEnter Your String: ");
    scanf("%99s",string);

    for(int i=0;string[i]!='\0';i++){
        len++;
    }
    
    for(int i=0;i<len;i++){
        switch(tolower(string[i])){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                break;
            default:
                string[non_vowels]=string[i];
                non_vowels++;
        }
    }
    string[non_vowels] = '\0';
    printf("\nString After Deleting Vowels: %s",string);
    return 0;
}