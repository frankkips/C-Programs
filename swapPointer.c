#include <stdio.h>

void swap(int *a,int *b);
int main(){
    int num1,num2;

    printf("Please Enter your first number: \n");
    scanf("%d" , &num1);

    printf("Please Enter your second number: \n");
    scanf("%d" , &num2);

    printf("The numbers before swap are: num1 = %d and num2 = %d\n" , num1 ,num2);

    swap(&num1,&num2);

    printf("The numbers after swap are: num1 = %d and num2 = %d\n" , num1 ,num2);
}

void swap(int *a, int *b){
    int t;

    t = *a;
    *a = *b;
    *b = t;
}