// 1. C Program for Remove All Vowels from a String
#include<stdio.h>
#include<string.h>

int main(){
    char string[] = "Hello";
    char new[strlen(string)];
    int index=0;
    for(int i=0;i<strlen(string);i++){
        switch(string[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                break;
            default:
                new[index]=string[i];
                index++;                
        }
    }
    printf("\nString after removing vowels: %s",new);
    return 0;
}
