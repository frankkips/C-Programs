#include <stdio.h>

int main(){
    int cat[5], exam[5], total[5];
    char grade[10];
    printf("Input CAT for 10 students, Press Enter after each entry:\n");
    for (int i = 0; i < 5; i++){
        scanf("%d" , &cat[i]);
    }
    printf("Input EXAM for 10 students, Press Enter after each entry:\n");
    for (int i = 0; i < 5; i++){
        scanf("%d" , &exam[i]);
        total[i] = 0.5*(cat[i] + exam[i]);
    }
    for (int i = 0; i < 5; i++){
        if (total[i]>= 70)
            grade[i] = 'A';
        else if(total[i] >= 60)
            grade[i] = 'B';
        else if (total[i] >= 50)
            grade[i] = 'C';
        else if (total[i] >= 40)
            grade[i] = 'D';
        else if(total[i] >= 30)
            grade[i] = 'E';
        else
            grade[i] = 'F';
        
        printf("Student results below\n");
        printf("SN\t CAT\t EXAM\t TOTAL\t GRADE\t\n");
        for (int i = 0; i < 4; i++){
            printf("%d\t %d\t %d\t %d\t %c\t\n" ,i+1,cat[i],exam[i],total[i],grade[i]);
        }
        return 0;
    }

}