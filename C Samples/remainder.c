#include<stdio.h>
//To calculate the quotient and the remainder
//using the divident and the divisor

int main(){
    int divident, divisor, quotient, remainder;
    printf("Enter the divident: ");
    scanf("%d", &divident);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    quotient = divident / divisor;

    remainder = divident % divisor;
    printf("Quotient = %d\n",quotient);
    printf("Remainder = %d", remainder);
    return 0;
}