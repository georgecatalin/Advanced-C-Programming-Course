#ifndef _MAIN_H
    #define _MAIN_H
        #include <stdio.h>

        /* =================================================================
        Note: the content of the definition of the macro extends until the first new line character after the # symbol before the 'define' 
        The value of the macro can be expanded over multiple lines by using the \ special character
        =================================================================== */

        #define PRNT(a,b) \
            printf("The value of a is %d\n",a); \
            printf("The value of b is %d.",b);

#endif