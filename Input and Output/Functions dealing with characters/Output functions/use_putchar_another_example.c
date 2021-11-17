#include <stdio.h>

int main(void)
{
    int ch=0;

    while((ch=getchar())!=EOF)
    {
        putchar(ch);
    }

    ungetc(ch,stdin);

    printf("Thank you.\n");

    return 0;
}