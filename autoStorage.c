#include <stdio.h>

int main(){
     int j = 1;{
         int j = 2;{
             int j = 3;
            printf("%d" , j);
        }
        printf("%d" , j);
    }
    printf("%d" , j);
}