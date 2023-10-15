// 1. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>

int main(){
    char a;
    printf("\nEnter Your Character : ");
    scanf("%c",&a);

    if(a>='A' && a<='Z'){
        printf("\n %c Is UpperCase",a);
    }else if(a>='a' && a<='z'){
        printf("\n %c Is LowerCase",a);
    }else if(a>='0' && a<='9'){
        printf("\n %c Is Digit",a);
    }else{
        printf("\n%c Is Special Character",a);
    }
    return 0;
}