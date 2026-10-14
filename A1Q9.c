#include<stdio.h>
int main(void){
    int Celsius, Fahrenheit;
    printf("Enter Celsius=\n");
    scanf("%d", &Celsius);
    Fahrenheit = ((Celsius * 9 / 5) + 32);
    printf("%dF", Fahrenheit);
    return 0;
}