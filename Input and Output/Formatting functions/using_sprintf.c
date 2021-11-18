#include <stdio.h>
#include <stdlib.h>

/* ======================================================================================
Notes:
- sprintf()  goes from "String print formatted"
- int sprintf(char *string, const char *format,....) returns an integer which is he number of characters in the 'string' without accounting the null terrmination character '\0'
- int sprintf() returns a negative number in case of failure
========================================================================================= */

int main(void)
{
    char *myString=NULL;
    int result=0;

    myString=(char *) malloc(255);

    result=sprintf(myString,"the number is %d.\n",44);

    puts(myString);

    return 0;
}