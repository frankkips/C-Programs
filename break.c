#include<stdio.h>
//To calculate the sum of numbers(10 numbers max)
//Negative number will terminate the loop

int main()
{
    int i;
    double number , sum = 0.0;

    for (i = 0; i <= 10; ++i)
    {
        printf("Enter n%d: " ,i);
        scanf("%lf" , &number);

        if (number < 0.0)
        {
            continue;
        }

        sum += number;
    }
    printf("Sum = %.2lf" ,sum);
    return 0;
}