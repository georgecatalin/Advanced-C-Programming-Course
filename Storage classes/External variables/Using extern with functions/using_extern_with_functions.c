/* =========================================================================
By using extern with functions , one can use functions without having the need to declare them in header files
============================================================================ */

#include <stdio.h>
#include "other_file.c"


int myGlobalVariable;

extern void displayFunction();

int main(int argc, char *argv[])
{
    myGlobalVariable=65;
    displayFunction();

    return 0;
}
