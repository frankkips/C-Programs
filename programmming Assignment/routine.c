#include <stdio.h>
#include <stdlib.h>

int wakeUpRoutine();
int cookingRoutine();
int main(){
    wakeUpRoutine();
    cookingRoutine();
    return 0;
}

int wakeUpRoutine(){
    printf("=============================\n");
    printf("| 6:00 am : wake up\t\t\t|\n");
    printf("| 6:00 am : make coffee\t\t|\n");
    printf("| 6:00 am : bath\t\t\t|\n");
    printf("| 6:00 am : take breakfast\t|\n");
    printf("| 6:00 am : brush teeth\t\t|\n");
    printf("| 6:00 am : Go to work\t\t|\n");
    printf("=============================\n");
}

int cookingRoutine(){
    printf("=================================\n");
    printf("| Morning \t: coffee with Bread\t|\n");
    printf("| Lunch \t: Rice with Beans\t|\n");
    printf("| Supper \t: Ugali with Kales\t|\n");
    printf("=================================\n");

}