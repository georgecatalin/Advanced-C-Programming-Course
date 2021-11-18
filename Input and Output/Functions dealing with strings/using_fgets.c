#include <stdio.h>
#include <string.h>

/* ===================================================
Note: only use fgets() when the data read can not contain the NULL character
===================================================== */

int main(void)
{
    char myBuffer[255];
    int i='\0';
    char *p=NULL;

    if(fgets(myBuffer,sizeof(myBuffer),stdin))
    {
        p=strchr(myBuffer,'\n');

        if(p)
        {
            *p='\0';
        }
        else
        {
            while((i=getchar())!='\n' && !feof(stdin) && !ferror(stdin));
        }

    }
    else
    {

        //an error occurred while reading with fgets(). Treat the error here
    }

    printf("The content of the buffer is %s.\n",myBuffer);

    return 0;
}