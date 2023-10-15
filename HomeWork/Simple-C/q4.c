// 4. C Program to Convert a Person's Name in Abbreviated Form
#include<stdio.h>
#include<string.h>


void main(){
    char fname[100],*token;
    printf("\nEnter Your Name:");
    fgets(fname,100,stdin);

    token = strtok(fname," ");

    while(token!=NULL){
        printf("%c.",token[0]);
        token = strtok(NULL," ");
    }
    
}