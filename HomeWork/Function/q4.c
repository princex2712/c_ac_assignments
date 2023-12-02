// 4. C Program for Convert Binary to Octal and Vice Versa
#include<stdio.h>
#include<math.h>

int BinToOct(int n){
    int Octal=0,i=0;
    while(n!=0){
        Octal+=(n%1000)*pow(2,i);
        n/=1000;
        i++;
    }
    return Octal;
}

long long OctToBin(int n){
    long long Binary=0;
    int i=0;
    while(n!=0){
        Binary += (n%10)*pow(2,i);
        n/=10;
        i+=3;
    }
    return Binary;
}
int main(){
    long long num;
    int C;
    printf("\nEnter Your Choice \n(1) Binary to Octal\n(2)  Octal to Binary:");
    scanf("%d",&C);

    switch(C){
        case 1:
            printf("\nEnter an Binary number: ");
            scanf("%lld", &num);
            printf("\nOctal Number:%d",BinToOct(num));
            break;
        case 2:
            printf("\nEnter an Octal number: ");
            scanf("%o", &num);
            printf("\nOctal Number:%lld",OctToBin(num));
            break;
        default:
            printf("\nPlease Enter Valid Operation");
    }
    return 0;
}