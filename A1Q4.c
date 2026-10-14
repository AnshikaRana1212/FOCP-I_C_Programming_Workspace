#include<stdio.h>
int main(void){
    int a;
    int b;
    int c;
    printf("enter value of a=\n");
    scanf("%d", &a);
    printf("enter value of b=\n");
    scanf("%d", &b);
    printf("enter value of c=\n");
    scanf("%d", &c);
    float average=(a+b+c)/3;
    printf("The average is %.2f", average);
    return 0;
}
