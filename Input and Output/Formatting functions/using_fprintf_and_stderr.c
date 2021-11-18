#include <stdio.h>
#include <stdlib.h>

/* ==========================================================================================
Notes: stderr is used when one the redirect the error messages to a different output then the normal output of the program. For instance if the program outputs to a file, stderr will display errors on the terminal window
=========================================================================================== */

int main(void)
{
    FILE *fp=NULL;

    fp=fopen("thefilew.txt", "r");

    if(fp==NULL)
    {
        fprintf(stderr,"Error when opening the file.");
        exit(-1);
    }

    return 0;
}