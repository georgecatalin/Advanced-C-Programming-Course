#include <stdio.h>

int main(void)
{
    char hello[]="Hello, George. It is a great day to move \n on.";

    int i=0;

    while(hello[i]!='\0')
    {
        if(hello[i]!='\n')
        {
            putchar(hello[i]);
        }
        ++i;
    }


    return 0;
}