// 6. C Program to Check Prime or Armstrong Number
#include<stdio.h>
#include<stdbool.h>
bool is_bool(int num){
    if(num<2){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
bool armstrong(int num){
    int temp =num;
    int sum = 0;
    while(temp!=0){
        int digit = temp%10;
        sum +=digit*digit*digit;
        temp/=10;
    }
    return num==sum;
}
int main(){
    int c,num;
    
    printf("\n(1) Check Prime or Not \n(2) Check Armstrong or Not\nEnter your choice: ");
    scanf("%d",&c);

    printf("\nEnter Your Number: ");
    scanf("%d",&num);

    if(c==1){
        if(is_bool(num)){
            printf("\nYour Number is prime");
        }else{
            printf("\nYour Number Not prime");
        }
    }else if(c==2){
        if(armstrong(num)){
            printf("\nYour Number is Armstrong");
        }else{
            printf("\nYour Number Not Armstrong");
        }
    } else {
        printf("\nInvalid choice\n");
    }

    return 0;
}