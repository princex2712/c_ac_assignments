// 6. Gross Salary Program in C Programs
#include<stdio.h>

int main(){
    float basicSalary, grossSalary;
    float allowances, deductions;

    printf("\nEnter basic salary: ");
    scanf("%f",&basicSalary);
    printf("\nEnter total allowances: ");
    scanf("%f",&allowances);
    printf("\nEnter total deductions: ");
    scanf("%f",&deductions);

    grossSalary = basicSalary + allowances - deductions;

    printf("\nGross Salary:%.2f",grossSalary);

    return 0;

}
