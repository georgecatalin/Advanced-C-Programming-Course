#include <stdio.h>
#include <stdlib.h>

/* ===============================================
Notes: 
- int fprintf(FILE *filepointer,const char * characterformat,...)
- fprintf() goes from File Print Format
================================================= */

int main(void)
{
    FILE *file_pointer=NULL;
    char buffer[100];

    file_pointer=fopen("thefile.txt","r+");

    if(!file_pointer)
    {
        puts("Error when opening the file.");
        exit(-1);
    }

    for(int i=0;i<10;i++)
    {
        fprintf(file_pointer,"The calculus is %d.\n",i);
    }

    fclose(file_pointer);

    puts("============== reading the content of the file now =========");

  file_pointer=fopen("thefile.txt","r");

    if(!file_pointer)
    {
        puts("Error when opening the file.");
        exit(-1);
    }

    while(!feof(file_pointer))
    {
        fgets(buffer,100,file_pointer);
        printf("%s",buffer);
    }

    fclose(file_pointer);

    return 0;
}