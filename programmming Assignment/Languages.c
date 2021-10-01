//Aliases using union
#include <stdio.h>

union clothes {
    int price1;
    int price2;
};

int main(void){
    union clothes c;

    c.price1 = 200;
    c.price2 = 400;
    printf("The value for price1 is %d and for price2 is %d\n" , c.price1 , c.price2);
    c.price2 = 600;
    printf("price1 is %d" , c.price1);
    //The union stores two variables in the same memory location
}
