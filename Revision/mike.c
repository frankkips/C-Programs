#include<stdio.h>
#define pi 3.142

double circ_area(int r){
    double area = pi * r * r;

    return area;
}

int main(){
    int r;
    double area;
    printf("Enter the radius");
    scanf("%d", &r);
    area = circ_area(r);
    printf("the area of the cicle is: %lf", area);
    return 0;
}