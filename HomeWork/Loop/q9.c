// 9. Palindrome Program in C Using While Loop
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char usr[100],temp[100];
    
    printf("\nEnter Your String: ");
    scanf("%s",usr);

    int i=0,len=0;
    while(usr[i]!='\0'){
        len++;
        i++;
    }

    i=0;    
    while(i<len){
        temp[i] = usr[len-i-1];
        i++;
    }

    i=0;
    int flag =1;
    while(i<len){    
        if(tolower(usr[i])!=tolower(temp[i])){
            flag = 0;
            break;
        }
        i++;
    }

    if(flag==1){
        printf("\n%s is Pelindrome",usr);
    }else{
        printf("\n%s is not Pelindrome",usr);
    }
    return 0;
}
