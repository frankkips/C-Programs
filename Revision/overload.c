#include <stdio.h>
int area(int a){
    int area = a * a;
    return area;
}
float area(int a, int b){
    float area = a * b;
    return area;
}
int main(){
    int areaSQ, areaRE;
    areaSQ = area(50);
    areaRE = area(40 , 50);
}


