#include <stdio.h>
#include <stdlib.h>
#define LENGTH 20
#define WIDTH '\n'

//Variable declaration
extern int c;

int main()
{
    c = LENGTH + WIDTH;
    printf("%d", c);
}
