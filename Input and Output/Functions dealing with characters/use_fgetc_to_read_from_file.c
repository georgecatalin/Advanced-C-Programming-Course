#include <stdio.h>

/* ======================================================================================
int fgetc(FILE *fp) : is a function similar to int getc(FILE *fp), but fgetc() only reads from a file
======================================================================================== */

int main(void)
{
    char c='\0';
    FILE *fp=NULL;

    fp=fopen("thefile.txt","r");

    if(fp==NULL)
    {
        printf("I could not open the file to read from it.\n");
        return 1;
    }

    while(1)
    {
        c=fgetc(fp);

        if(c==EOF)
        {
            break;
        }

        printf("%c",c);
    }

    fclose(fp);

    return 0;
}