// WAP to check if the given year is a leap year or not
#include <stdio.h>

int main(){

    int year;
    printf("\nEnter any year: ");
    scanf("%d", &year);

    if(year%400==0){
        printf("\nThe entered year %d is a Leap Year.", year );
    }  else if(year%100!=0 && year%4==0){
        printf(" The entered year %d is a Leap Year.\n ", year) ;
    }   else {
        printf ("\nEntered year %d isn't a Leap Year \n" , year ) ;
    }
    return 0;
}