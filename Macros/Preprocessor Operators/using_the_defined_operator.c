#include <stdio.h>

#define THIS_MACRO "Hello"

#if defined(THIS_MACRO)
    #define NEW_MACRO "Cocar"
#endif

int main(void)
{
    printf("%s \t %s .\n",THIS_MACRO,NEW_MACRO);

    return 0;
}