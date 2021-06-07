#include <stdio.h>

int main(){
    int item[100];
    int a , b , t;
    int count;
    /* Read in the numbers*/
    printf("How many numbers?\n");
    scanf("%d" , &count);
    //printf("\n");
    printf("Enter %d intergers\n" ,count);
    for (a = 0; a < count; a++){
        printf("num %d :" ,a);
        scanf("%d" , &item[a]);
    }
    //Now sort using bubble sort 
    for (a = 0; a < count - 1; a++)
        for (b = 0; b < count - a - 1; ++b){
            //Compare adjacent items
            if (item[b] > item[b + 1]){
                // Exchange the elements
                t = item[b];
                item[b] = item[b + 1];
                item[b + 1] = t;

            }
        }
    
    // Display sorted list
    printf("\n\n");
    for (t = 0; t < count; t++){
        printf("%d" , item[t]);
    }
    return 0;
}