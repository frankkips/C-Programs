#include <stdio.h>
#define SEC_PER_MIN 60

int main(){
    int min, sec , sec_left;
    printf("==========CONVERTING SECONDS TO MINUTES AND SECONDS===========\n\n");
    printf("Enter the number of seconds you wish to convert:\n");
    scanf("%d" , &sec);
    min = sec / SEC_PER_MIN;
    sec_left = sec % SEC_PER_MIN;
    printf("%d seconds is %d minutes and %d seconds" , sec , min , sec_left);

}