#include <stdio.h>
#include <stdlib.h>

/* =========================================================================================
Notes: int fscanf(FILE *filepointer, const char format, argument1,....) 
-fscanf() function is similar to scanf() with regard to it is reading data from something, but fscanf() reads from a file into a variable
=========================================================================================== */

int main(void)
{
    FILE *filepointer=NULL;
    char buffer[100];

    filepointer=fopen("thefile.txt","r");

    while(fscanf(filepointer,"%s",buffer)!=EOF)
    {
        printf("%s",buffer);
    }

    fclose(filepointer);


    return 0;
}