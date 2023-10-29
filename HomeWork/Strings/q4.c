// 4. C Program to Convert Lowercase to Uppercase And Vice Versa
#include<stdio.h>
#include<string.h>

int main(){
    char string[] = "HELLO";
    int c;

    printf("\n(1) String to Uppercase\n(2) String to Lower\nEnter Your Choice: ");
    scanf("%d",&c); 

    switch(c){
        case 1:
            for(int i=0;i<strlen(string);i++){
                string[i] = toupper(string[i]);
            }
            printf("\nUpdated String: %s",string);
            break;
        case 2:
            for(int i=0;i<strlen(string);i++){
                string[i] = tolower(string[i]);
            }
            printf("\nUpdated String: %s",string);
            break;
        default:
            printf("\nEnter Valid Input 1 or 2");
    }
    return 0;
}
