//add numbers until the user enters zero
#include<stdio.h>

int main()
{
    int i , j;
    i = 0;
    
    do{
        j = 1;
        do{
            printf("%d" , j);
            j++;
        }
        while (j <= i);
        printf("\n");
        i++;
    }
    while (i <= 5);
    return 0;
}