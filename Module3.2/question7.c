// WAP to take 10 no. Input from user and find out …
// 1. How many Even numbers are there
// 2. How many odd numbers are there
// 3. Sum of even numbers
// 4. Sum of odd numbers 
#include <stdio.h>
int main(){
    int even=0,odd=0,sumOfOdd=0,sumOfEven=0,n;
    for(int i=0;i<=9;i++){
        printf("\nEnter (%d)th Integer Number:",i+1);
        scanf("%d",&n);
        if(n%2==0){
            even++;
            sumOfEven+=n;
        }else{
            odd++;
            sumOfOdd+=n;
        }
    }
    printf("\nTotal Even Numbers:%d\nTotal Odd Numbers:%d\nSum of even numbers:%d\nSum of odd numbers:%d",even,odd,sumOfEven,sumOfOdd);
    return 0;
}