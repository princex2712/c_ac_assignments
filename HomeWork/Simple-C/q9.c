// 9. Write a C Program to Display The Size of Different Data Types
#include<stdio.h>

int main(){

    printf("\nInt Datatype Size: %lu bytes",sizeof(int));
    printf("\nChar Datatype Size: %lu bytes",sizeof(char));
    printf("\nFloat Datatype Size: %lu bytes",sizeof(float));
    printf("\nLong Datatype Size: %lu bytes",sizeof(long));
    printf("\nShort Datatype Size: %lu bytes",sizeof(short));
    printf("\nLong Long Datatype Size: %lu bytes",sizeof(long long));
    printf("\nDouble Datatype Size: %lu bytes",sizeof(double));
    return 0;
}
