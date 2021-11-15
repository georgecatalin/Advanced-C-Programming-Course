#include <stdio.h>

#define MAX(a,b) ( (a)>(b) ?  (a) : (b))

int main(void)
{
    int a=43, b=45;

    printf("The maximum between the two arguments is MAX(%d,%d):%d.\n",a,b,MAX(a,b));

    return 0;
}