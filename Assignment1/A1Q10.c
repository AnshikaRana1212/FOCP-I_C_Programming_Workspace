
#include<stdio.h>
int main(void) {
    int Product_ID, Product_Price, Quantity;
    int Discount_Percentage, Subtotal;
    int Discount_Amount, Final_Amount;
    printf("Enter Product ID=\n");
    scanf("%d", &Product_ID);
    printf("Enter Product Price=\n");
    scanf("%d", &Product_Price);
    printf("Enter Quantity=\n");
    scanf("%d", &Quantity);
    printf("Enter Discount Percentage=\n");
    scanf("%d", &Discount_Percentage);
    Subtotal = Product_Price * Quantity;
    Discount_Amount = (Subtotal * Discount_Percentage) / 100;
    Final_Amount = Subtotal - Discount_Amount;
    printf("Product ID = %d\n", Product_ID);
    printf("Subtotal = %d\n", Subtotal);
    printf("Discount Amount = %d\n", Discount_Amount);
    printf("Final Amount = %d\n", Final_Amount);
    return 0;
}
