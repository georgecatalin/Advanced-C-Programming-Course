#include <stdio.h>

int main(void)
{
    char *myString=NULL;

    myString="I am feeling great today.I am loving C.";

    myString="Error when trying to change this string because it is accessing a read-only memory region";

    return 0;
}