#include <stdio.h>

int main(){
    char firstName[12];
    char secondName[12];
    printf("Enter your first name: ");
    scanf("%s" , &firstName);
    
    printf("Enter your second name: ");
    scanf("%s" , &secondName);
    
    printf("Your full name is %s %s\n" , firstName, secondName);
    
    return 0;

}