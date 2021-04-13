#include<stdio.h>
//Determine if a number is Even or Odd
int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    (input % 2 == 0) ? printf("%d is Even", input) : printf("%d is Odd",input);
    return 0;
}