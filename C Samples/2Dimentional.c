#include <stdio.h>
#define STUDENT 3
#define CATS 4

int main(){
    int rows, cols, SCORE[STUDENT][CATS];
    float cats_sum, stud_average, total_sum = 0.0, average;

    printf("Enter the marks....... \n\n");
    for (rows = 0; rows < STUDENT; rows++){
        printf("\n STUDENT %d\n" , rows+1);
        cats_sum = 0.0;
        for (cols = 0; cols < CATS; cols++){
            printf("CAT %d\n", cols + 1);
            scanf("%d", &SCORE[rows][cols]);
            cats_sum += SCORE[rows][cols];
        }
        stud_average = cats_sum/CATS;
        printf("\n Total marks for student %d is %3.2f",
        rows+1 ,cats_sum);
        printf("\n Average score for the student is %3.2f",
        stud_average);
        total_sum += cats_sum;
    }
    average = total_sum/(STUDENT*CATS);
    printf("\n Total sum of the class is %3.2f\n",
        total_sum);
    printf("\n The class average is %3.2f\n",
        average);
    printf("\n The scores entered are: \n\n");
    for (rows = 0; rows < STUDENT; rows++){
        for (cols = 0; cols < CATS; cols++){
            printf("%d\t" ,SCORE[rows][cols]);
        }
        printf("\n");
    }
    return 0;
}