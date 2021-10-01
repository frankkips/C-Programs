#include <stdio.h>

int main(){
    int catMarks[] = {20,19,11,7,23};
    int k = 3, n = 5;
    int i , j;
    printf("The original Element:\n");
    for (i=0;i < n;i++){
        printf("%d %d\n", i , catMarks[i]);
    }
    j = k;
    while (j < n){
        catMarks[j - 1] = catMarks[j];
        j = j + 1;
    }
    n = n - 1;
    printf("The array elements after deletion\n");
    for (i = 0; i < n; i++){
        printf("catMarks[%d] = %d\n" , i , catMarks[i]);
    }
}