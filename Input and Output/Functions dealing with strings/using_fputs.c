#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* int fputs(const char *myString, FILE *filePointer) => returns EOF in case of an error AND non negative number in case stuffs went alright */
    /* fputs()  does not add automatically the '\n' character. The terminating null character is not written to the file */

    FILE *filePointer=NULL;
    char *myString=NULL;

    filePointer=fopen("thefile.txt","a");

    if(!filePointer)
    {
        puts("An error occurred.");
        exit(1);
    }

    fputs("This Udemy course is a great one to help you learn C",filePointer);

    fclose(filePointer);



    return 0;
}