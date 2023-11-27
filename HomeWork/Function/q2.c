// 2. Convert Binary Numbers to Decimal or Decimal Numbers to Binary
#include<stdio.h>
#include<math.h>
int main(){
    int c;
    printf("\n(1) Binary to Decimal\n(2) Decimal to Binary\nEnter Your Choice: ");
    scanf("%d",&c);
    switch(c){
        case 1:
        case 2:
            int num;
            printf("\nEnter Your Number: ");
            scanf("%d",&num);
            double binary=0,i=0;
            while(num !=0){
                binary += (num%2)*pow(10,i);
                num /= 2;
                i++;
            }
            printf("Coverted Number: %lf",binary);
            break;

    }
    return 0;
}
