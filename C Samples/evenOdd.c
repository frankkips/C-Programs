#include<stdio.h>
//Determine if a number is Even or Odd
int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    if (input % 2 == 0){
        printf("\n%d is Even", input);
    }else{
        printf("\n%d is Odd", input);
    }
    return 0;
}