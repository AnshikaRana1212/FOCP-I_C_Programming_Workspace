#include<stdio.h>
int main(void){
    int a,b;
    int Quotient;
    int Remainder;
    printf("Enter a=\n");
    scanf("%d", &a);
    printf("Enter b=\n");
    scanf("%d", &b);
    Quotient=a/b;
    printf("Quotient=%d\n", Quotient);
    Remainder=a-(b*Quotient);
    printf("Remainder=%d\n",Remainder);
return 0;}
