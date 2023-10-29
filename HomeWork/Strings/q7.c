// 7. Compare Two String Using STRCMP Function

#include<stdio.h>
#include<string.h>

int main(){
    char string[] = "HELLO", string2[]= "WORLD";
    char str[]="Hi", str2[]="Hi";

    //string and strin2 are different thats why result is non zero
    printf("\nComparing String: %d",strcmp(string,string2));

    //str and str2 are same thats why result is zero
    printf("\nComparing Str: %d",strcmp(str,str2));
    return 0;
}