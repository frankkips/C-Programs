#include<stdio.h>
//The program calculates the products 
//of two numbers entered by the user
int main()
{
    double a, b, product;
    printf("Enter two numbers to multiply\na:");
    scanf("%lf",&a);
    printf("b:");
    scanf("%lf",&b);

    product = a * b;
    printf("Product = %.2lf", product,"\n");

    return 0;
}
