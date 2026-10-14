#include<stdio.h>
int main(void){
    int a=10;
    int b=20;
    int c=a;
    a=b;
    b=c;
    printf("Value of a=%d\n", a);
    printf("Value of b=%d\n", b);
    return 0;}
