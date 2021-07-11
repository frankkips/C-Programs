#include <stdio.h>
// This program is gonna read the content in file ntakufinya.c
void main(){
    FILE *fp;
    char ch;
    fp = fopen("finya.c", "r");
    while (1){
        ch = fgetc(fp);
        if (ch == EOF)
        break;
        printf("%c",ch);
    }
    fclose(fp);
}