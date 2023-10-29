// 6. Convert All Input String Simultaneously into an Asterisk *
#include<stdio.h>
#include<ctype.h>

int main(){
    char string[] = "Hello Hi";

    for(int i=0;string[i]!='\0';i++){
        if(string[i]== ' '){
            printf(" ");
        }else{
            printf("*");
        } 
    }
    return 0;
}
