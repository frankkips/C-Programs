#include <stdio.h>

int swap(int a,int b){
    int c;
    printf("a = %d and b = %d\n", a , b);
    c = a;
    a = b;
    b = c;
    printf("a = %d and b = %d(after)", a , b);
    return 0;


}
int main(){
    swap(10 , 20);

    return 0;
}
