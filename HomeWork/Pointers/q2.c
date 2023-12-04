// 2.Write a C Program to Compare Two Strings Using Pointers
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool cmp(char *str1,char *str2){

    int len = strlen(str1),len1 = strlen(str2);

    if(len==len1){
        for(int i=0;i<len;i++){
            if(*str1!=*str2){
                return false;
            }
            str1++;
            str2++;
        }
        return true;
    }
    return false;
}

int main(){
    char inStr[100],inStr2[100];
    printf("\nEnter Your String 1: ");
    fgets(inStr,sizeof(inStr),stdin);
    
    inStr[strcspn(inStr,"\n")]='\0';

    printf("\nEnter Your String 2: ");
    fgets(inStr2,sizeof(inStr2),stdin);

    inStr2[strcspn(inStr2,"\n")]='\0';

    if(cmp(inStr, inStr2)) {
        printf("\nThe strings are equal.\n");
    } else {
        printf("\nThe strings are not equal.\n");
    }
    return 0;
}