#include <stdio.h>

/* ==============================================================
Good practice: Feel free to use the following predefined macros
__FILE__ : stands for the name (string %s) of the current file
__LINE__ : stands for the line number (integer %d) where it executes
__func__ : stands for the name of the function in whose body it is placed (string %s)
__DATE__ : stands for the date when the file was compiled last time (string %s)
__TIME__ : stands for the time when the file was compiled last time (string %s)
__STDC__ : stands for 1 is standard compiler implementation was used , or 0 if a non standard compiler was used (integer %d)
================================================================= */

void my_personal_function(void)
{
    printf("This is the name of the function being executed at this moment \"%s\" \n",__func__);
}


int main(void)
{
    printf("This file was last time compiled on %s and at time %s.\n",__DATE__,__TIME__);

    printf("The name of this file is %s and currently it runs the line %d.\n",__FILE__,__LINE__);

    if(__STDC__==1)
    {
        puts("Great news. This program was compiled using a compiler compliant with ISO C");
    }
    else
    {
        puts("Bad luck. This program was compiled using a compiler non-ISO compliant version of C");
    }

    my_personal_function();

    return 0;
}