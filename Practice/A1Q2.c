#include<stdio.h>
int main(void){
    int Age;
    int Height;
    char Grade ;
    printf("Enter Age=\n");
    scanf("%d", &Age);
    printf("Your age is %d\n",Age);
    printf("Enter Height(mm)=\n");
    scanf("%d", &Height);
    printf("Your height(mm) is %d\n",Height);
    printf("Enter Grade=\n");
    scanf(" %c", &Grade);
    printf("Your grade is %c\n",Grade);
    return 0;
}
