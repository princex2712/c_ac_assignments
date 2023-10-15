// 7. Check Character Is a Vowel or Not Using If-Else

#include<stdio.h>
#include<ctype.h>
int main(){
    char a;

    printf("\nEnter a Character: ");
    scanf("%c",&a);

    switch(tolower(a)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n%c is Vowel",a);
            break;
        default:
            printf("\n%c is Not a Vowel",a);
    }
    return 0;
}