// 5. String Palindrome Program in C With Explanation
#include<stdio.h>
#include<ctype.h>

int main(){
    char string[100],palindrome[100];
    int len=0,index=0,flag=1;

    printf("\nEnter Your String: ");
    scanf("%99s",string);

    for(int i=0;string[i]!='\0';i++){
        len++;
    }
    for(int i=(len-1);i>=0;i--){
        palindrome[index]=string[i];
        index++;
    }
    for(int i=0;i<len;i++){
        if(tolower(string[i])!=tolower(palindrome[i])){
            flag = 0;
            break;
        }
    }
    if(flag==1){
        printf("\nYour String is Palindrome");
    }else{
        printf("\nYour String is not Palindrome");

    }
    return 0;
}