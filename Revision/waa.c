#include <stdio.h>

int main(){
    int *p;
    int q = 50;

    p = &q;
    p = 30;
    printf("%d\n" , q);
    printf("%u\n" , &q);
    printf("%d\n" , p);
    
}