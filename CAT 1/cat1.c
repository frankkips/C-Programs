#include <stdio.h>

int myLarge(int num1, int num2, int num3){
    if (num1 >= num2 && num1 >= num3)
        return num1;
    else if (num2 >= num1 && num2 >= num3)
        return num2;
    else if (num3 >= num2 && num3 >= num1)
        return num3;
    //else if (num1== num2 && num2==num3)
        //return num1;
    else
        printf("Invalid!!");
}

int main(){
    int num1, num2, num3;

    printf("Enter three numbers:\n");
    scanf("%d\n%d\n%d" ,&num1 ,&num2 ,&num3);
    if (myLarge(num1, num2 , num3) == 0)
        printf(" Wrong Format");
    else
        printf("%d is the largest number" ,myLarge(num1, num2 , num3));
    
}