#include<stdio.h>
//Pyramid of alphabet

int main()
{
    int i, j;
    char input, alphabet = 'A';
    printf("Enter the last Uppercase letter on row ");
    scanf("%c",&input);

    for(i = 1; i <= (input - 'A' + 1); ++i)
    {
        for(j = 1; j <= i; ++j)
        {
            printf("%c", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    return 0;
}