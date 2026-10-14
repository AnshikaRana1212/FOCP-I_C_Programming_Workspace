#include<stdio.h>
int main(void){
    float a,b,c,d,e;
    float total;
    float average;
    printf("Enter marks of Maths=\n");
    scanf("%f", &a);
    printf("Enter marks of English=\n");
    scanf("%f", &b);
    printf("Enter marks of SSC=\n");
    scanf("%f", &c);
    printf("Enter marks of Science=\n");
    scanf("%f", &d);
    printf("Enter marks of PE=\n");
    scanf("%f", &e);
    total=a+b+c+d+e;
    printf("Total=%.1f\n", total);
    average= (total/500)*100;
    printf("Average=%.1f\n", average);
    return 0;}
