//This program has an error
#include <stdio.h>

void print_to_n (int n);
void print_n(int n);

int main(){
    int n = 10;
    typedef void (*printer_t)(int);             //around here
    printer_t p = &print_to_n;
    void (*p)(int) = &print_to_n;
    print_n(n);
}

void print_to_n (int n){
    for (int i = 1; i <= n; i++){
        printf("%d\n" , i);
    }
}

void print_n(int n){
    printf("n = %d\n" , n);
}