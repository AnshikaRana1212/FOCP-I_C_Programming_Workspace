#include<stdio.h>
int main(void){
    int cost1=20, Quantity1;
    int cost2=10, Quantity2;
    int cost3=40, Quantity3;
    printf("Enter the quantity of beans=\n");
    scanf("%d",&Quantity1);
    printf("Your bill now is %d\n", cost1*Quantity1);
    printf("Enter the quantity of chilli=\n");
    scanf("%d",&Quantity2);
    printf("Your bill now is %d\n", cost2*Quantity2);
    printf("Enter the quantity of breads=\n");
    scanf("%d",&Quantity3);
    printf("Your bill now is %d\n", cost3*Quantity3);
    int a=cost1 * Quantity1;
    int b=cost2 * Quantity2;
    int c=cost3 * Quantity3;
    int Total=a+b+c;
    printf("Total=%d\n", Total);
    return 0;
}
