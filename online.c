#include <stdio.h>

int main(){
    int k = 3;
    char s = '\0';
    while(k < -1){
        s = "%d %c ",k,s;
        k--;
    }
    printf("%d",s);
    return 0;
}