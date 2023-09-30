// Pattern
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

//Method 1

#include<stdio.h>
int main(){
    printf("Pattern\n");
    for(int i=1;i<=5;i++){
        char curr_char='A';
        for(int j=1;j<=i;j++){
          printf("%c ",curr_char);
          curr_char++;
        }
        printf("\n");
    }
    return 0;
}


//Method 2

// #include<stdio.h>
// int main(){
//     printf("Pattern\n");
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             switch(j){
//                 case 1:
//                     printf("A ");
//                     break;
//                 case 2:
//                     printf("B ");
//                     break;
//                 case 3:
//                     printf("C ");
//                     break;
//                 case 4:
//                     printf("D ");
//                     break;
//                 case 5:
//                     printf("E ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }