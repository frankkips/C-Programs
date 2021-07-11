#include <stdio.h>

// This program opens and inserts a value into a text file

void main(){
    FILE *fp;
    char text[300];

    

    fp = fopen("text_file.txt" , "r");
    printf("%s" , fgets(text , 200 , fp));

    fclose(fp);
    
}