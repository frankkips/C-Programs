#include <stdio.h>

// This program opens and inserts a value into a text file

void main(){
    FILE *fp;
    

    fp = fopen("text_file.txt" , "w");
    fputs("The name is Frank, Frankline Kiplagat\n" , fp);
    fputs("The name is Frank, The frankkips" , fp);

    fclose(fp);
    
}