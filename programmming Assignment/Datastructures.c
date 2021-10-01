#include <stdio.h>


int main(){
    int catMarks[6] = {21 , 23 , 15 , 27 , 18 , 45};
    int item = 10;
    int k = 3;
    int n = 5;
    int i = 0;
    int j = n;

    printf("The original element\n");
    for (i = 0; i <= n; i++){
        printf("%d\n" , catMarks[i]);
    }
    j = k;
    while (j >= k){
        catMarks[j-1] = catMarks[j];
        j = j - 1;
    }
    catMarks[k] = item;
    printf("The array element after initialization\n");
    for (i = 0; i <= n; i++){
        printf("%d\n" , catMarks[i]);
    }
    return 0;
}