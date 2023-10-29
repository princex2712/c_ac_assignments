// 2. C Program to Delete a Substring From a String

#include<stdio.h>
#include<string.h>

int main(){
    char string[] = "Hello", substr[] = "el", new[100];
    int start_index=0;
    for(int i=0;i<strlen(string);i++){
        if(string[i]==substr[start_index] && string[i+1]==substr[start_index+1]){
            start_index++;
            break;
        }else{
            new[i] = string[i];
        }
    }
    printf("\nString after removing vowels: %s",new);
    return 0;
}
