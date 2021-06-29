#include <stdio.h>
// Declare the swap function b4 the main function
void swap(int *a,int *b);
int main(){
    int num1,num2;

    // Prompt the user to Enter the two numbers
    printf("Please Enter your first number: \n");
    scanf("%d" , &num1);

    printf("Please Enter your second number: \n");
    scanf("%d" , &num2);

    printf("The numbers before swap are: num1 = %d and num2 = %d\n" , num1 ,num2);

    // Lets call the function with parameters being the addresses of the num1 and num2 variables
    swap(&num1,&num2);

    printf("The numbers after swap are: num1 = %d and num2 = %d\n" , num1 ,num2);
}

void swap(int *a, int *b){
    int t;

    t = *a;     // The swap code
    *a = *b;
    *b = t;
}