#include <stdio.h>

#define US 1
#define UK 2
#define FRANCE 3
#define GERMANY 4 
#define COUNTRY FRANCE


int main(void)
{
    #if COUNTRY==US || COUNTRY==UK
        #define GREETING "Hello"
    #elif COUNTRY==FRANCE      //Always use #elif and not #else when using multiple options in the ifclause of preprocessor directives
        #define GREETING "Bonjour"
    #elif COUNTRY=GERMANY
        #define GREETING "Guten Tag"
    #endif

    printf("The greeting is %s.\n", GREETING);

    return 0;
}