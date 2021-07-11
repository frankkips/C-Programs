#include<stdio.h>
void f(void);
int main(){
    for(int i = 0; i < 10; i++)
        f();
    return 0;
}

void f(void){
    static int count = 0; /* static storage class preserves the value of the variable*/
    count++;
    printf("Count is : %d\n" , count);
}