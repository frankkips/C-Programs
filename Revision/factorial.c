#include <stdio.h>

long int factorial(int n){
    int i;
    unsigned long long prod = 1;
    printf("integer is : %d\n" ,n );
    if (n < 0)
        printf("Error!! Factorial of a negative number does not exist!");
    else{
        for (i = 1; i <= n; i++){
        prod *= i;
        }
        printf("Factorial of %d = %llu" ,n , prod);
    }
    return(prod);
}

int main(){
    int num = 5;
    long moon = factorial(num);
    printf("%lf" , moon);
    return 0;
}