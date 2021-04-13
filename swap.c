#include<stdio.h>
//swap the numbers entered by the user

int main()
{
    double first, second, temp;
    printf("Enter the first number: ");
    scanf("%lf", &first);
    printf("Enter the second number: ");
    scanf("%lf", &second);
    //Equate temp to first 
    //temp = first;
    //Equate first to second
    //first = second;

    //second = temp;
    first = first - second;
    second = first + second;
    first = second - first;

    printf("First swapped number: %.2lf", first);
    printf("\n");
    printf("Second swapped number: %.2lf", second);
    return 0;
}