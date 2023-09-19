// Vowel or Consonant using switch case
#include <stdio.h> 
#include <ctype.h>
int main(){

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ch = tolower(ch);

    switch(ch){

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\nYou Entered Vowel");
            break;
        default:
            printf("You Entered Consonant");
    }
    return 0;
}