#include<stdio.h>
int main(void){
int BasicSalary, Allowance, Bonus, FinalSalary;
printf("Enter Basic Salary=\n");
scanf("%d", &BasicSalary);
printf("Enter Allownace=\n");
scanf("%d", &Allowance);
printf("Enter Bonus=\n");
scanf("%d", &Bonus);
FinalSalary = BasicSalary + Allowance + Bonus;
printf("%d", FinalSalary);
    return 0;
}
