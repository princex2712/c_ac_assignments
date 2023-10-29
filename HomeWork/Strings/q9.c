// 9. Find the Number of Vowels, Consonants, Digits and White Space Character
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int Vowels=0,Consonants=0,Digits=0,Space=0,Special=0;
    char string[] = "Hello, World 12 !";
    int len = strlen(string);

    for(int i=0;i<len;i++){
        char c = tolower(string[i]);
        if(c>='0' && c<='9'){
            Digits++;
        }else if(c>='a' && c<='z'){
            if(c=='a' ||c=='e'||c=='i'||c=='o'||c=='u'){
                Vowels++;
            }else{
                Consonants++;
            }
        }else if(c == ' '){
            Space++;
        }else{
            Special++;
        }
    }
    printf("\nvowels: %d\nConsonants: %d\nDigit: %d\nSpace: %d\nSpecial: %d",Vowels,Consonants,Digits,Space,Special);
    return 0;
}