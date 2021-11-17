#include <stdio.h>

/* ============================================================
int getchar(void) : unlike int getc(FILE *fp), getchar() function only reads from the terminal
Depending on the OS, system can enter the EOF character , which in Linux can be achieved by pressing CTRL+D
Always use ints when working with getchar() and comparing to the EOF character!!!
=============================================================== */

int main(void)
{
    int myCh=0;
    
    while((myCh=getchar())!=EOF) //it stops when one presses ctrl+d on Linux OS
    {
        printf("%c",myCh);
    }



    return 0;
}