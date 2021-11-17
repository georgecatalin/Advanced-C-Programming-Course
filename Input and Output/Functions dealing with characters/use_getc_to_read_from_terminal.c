#include <stdio.h>

int main(void)
{
    char myChar='\0';
    int myInt=0;

    myChar=getc(stdin);
    printf("Hey samurai, you wrote \t %c.\n",myChar);


    return 0;
}