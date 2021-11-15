#include <stdio.h>

#define MIN(a,b) \
    ((a)<(b) ? (a) : (b))

int main(void)
{
    int a=10,b=43;

    printf("The minimum between %d and %d  is  %d.\n",a,b,MIN(a,b));

    return 0;
}
