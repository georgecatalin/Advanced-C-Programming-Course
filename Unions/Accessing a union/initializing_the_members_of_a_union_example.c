#include <stdio.h>

union example
{
    int x;
    int y;
};

int main(void)
{
    union example u={.x=100};
    printf("The elements of the union are (%d,%d).\n",u.x, u.y);

    return 0;
}
