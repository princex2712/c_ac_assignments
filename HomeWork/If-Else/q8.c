// 8. Given Date Month and the Year Is Correct

#include<stdio.h>
int main(){
    int d,m,y;

    printf("\nEnter Day Of Date: ");
    scanf("%d",&d);
    printf("\nEnter Month Of Date: ");
    scanf("%d",&m);
    printf("\nEnter Year Of Date: ");
    scanf("%d",&y);

    int validYear = (y > 0); 
    int validMonth = (m>=1 && m<=12);
    int validDay;
    
    if(validMonth){
        switch(m){
            case 4:
            case 6:
            case 9:
            case 11:
                validDay = (d>=1 && d<=30);
                break;
            case 2:
                if(y%400==0 || (y%4==0 && y%100!=0)){
                    validDay = (d>=1 && d<=29);
                }else{
                    validDay = (d>=1 && d<=28);
                }
                break;
            default:
                validDay = (d>=1 && d<=31);
        }
    }else{
        validDay = 0;
    }
    if(validDay && validMonth && validYear){
        printf("\n%d/%d/%d Is Correct Date",d,m,y);
    }else{
        printf("\n%d/%d/%d Is Not a Correct Date",d,m,y);
    }
    return 0;
}