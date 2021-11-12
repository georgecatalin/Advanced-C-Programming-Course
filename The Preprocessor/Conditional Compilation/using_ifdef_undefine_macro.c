#include <stdio.h>

//#define JUST_CHECKING
#define LIMIT 10

/* =====================================
Good practice: the preprocessor constants that do not exist can be added also at runtime when compiling the code:
    gcc -D JUST_CHECKING using_ifdef_undefine_macro.c -o test2
adds the JUST_CHECKING constant to the preprocesser like it was added in the source code of the file
======================================== */


int main(void)
{
    int i=0;
    int total=0;

    for(i;i<LIMIT;i++)
    {
        total+=2*i*i+1;

        #ifdef JUST_CHECKING
            printf("The current value of i is %d and the running total is %d.\n",i,total);
        #endif
    }

    printf("The global total is %d.\n",total);

    return 0;
}
