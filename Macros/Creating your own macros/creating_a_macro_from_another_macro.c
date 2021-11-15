#include <stdio.h>

#define FOO (BAR)
#define BAR ("This is interesting")

int main(void)
{
    printf("%s.\n",BAR);
    return 0;
}