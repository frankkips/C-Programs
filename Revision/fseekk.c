#include <stdio.h>

// This program opens and inserts a value into a text file

void main(){
    FILE *fp;
    char text[300];

    

    fp = fopen("text_file.txt" , "w+");
    fputs("The man himself" , fp);

    fseek(fp , 7 , SEEK_SET);
    fputs("kips lagats" , fp);
    

    fclose(fp);
    
}