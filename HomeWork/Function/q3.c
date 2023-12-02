//3. Convert Octal Numbers to Decimals and Vice Versa
#include<stdio.h>
#include<math.h>
int OctToDec(int OctalNum){
    int decimal = 0,i=0;
    while(OctalNum!=0){
        decimal += (OctalNum%10) * pow(8,i);
        i++;
        OctalNum/=10;
    }
    return decimal;
}
int DectoOct(int Decimal){
    int Octal = 0,i=1;
    while(Decimal!=0){
        Octal += (Decimal%8) * i;
        Decimal /=8;
        i*=10;
    }
    return Octal;
}
int main(){
    int C,Num;

    printf("\nEnter Your Choice \n(1)Decimal to Octal\n(2)Octal to Decimal:");
    scanf("%d",&C);

    switch(C){
        case 1:
            printf("\nEnter an Decimal number: ");
            scanf("%d", &Num);
            printf("\nOctal Number:%d",DectoOct(Num));
            break;
        case 2:
            printf("\nEnter an Octal number: ");
            scanf("%d", &Num);
            printf("\nOctal Number:%d",OctToDec(Num));
            break;
        default:
            printf("\nPlease Enter Valid Operation");
    }

    return 0;
}