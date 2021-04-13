#include<stdio.h>
//Check if a character is a vowel or a constant
int main()
{
    char c;
    int upper_case, lower_case;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    upper_case = (c == 'A'|| c == 'E' || c == 'I' || c == 'O' || c == 'U');
    lower_case = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    if (upper_case || lower_case){
        printf("%c is a vowel", c);
    }else{
        printf("%c is a constant", c);
    }
    return 0;
}