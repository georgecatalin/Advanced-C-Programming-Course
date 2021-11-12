#include <stdio.h>

#ifdef UNIX 
    # define DATADIR "/unx/dir"
#else
    # define DATADIR "\\usr\\bin"
#endif

/* ============================
Good practices: The UNIX constant can be added at runtime, when compiling the code
    gcc -D UNIX using_if_else.c -o exe
============================= */

int main(void)
{
    char *thisString=DATADIR;

    printf("The constant value is %s.\n",thisString);

    return 0;
}