#include<stdio.h>

int main (void)
{
    float amount, tax, total;
    tax = 1.05;
    printf("Enter an Amount of Money: ");
    scanf("%f", &amount);
    total = amount * tax;
    printf("With tax added: $ %.2f\n", total);
    return 0;
}
