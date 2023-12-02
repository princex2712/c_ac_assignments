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
int main(){
    int s,e;
    printf("\nEnter Start Point: ");
    scanf("%d",&s);
    printf("\nEnter End Point: ");
    scanf("%d",&e);

    for(int i=s;i<=e;i++){
       if(is_bool(i)){
        printf("%d, ",i);
       }
    }
    return 0;
}