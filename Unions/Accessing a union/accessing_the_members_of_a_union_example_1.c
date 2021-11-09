#include <stdio.h>


union mixed
{
        int i;
        float f;
        char c;
};


int main(void)
{
    union mixed thisUnion;

    thisUnion.c='c'; //there can be only one member initialized in a union at a given time because all member share the same memory
    printf("The member of the union object is ===> %c \n", thisUnion.c);

    thisUnion.i=100; //assigning another member of the union, hence purging the old one
    printf("The NEW member of the union object now is ===> %d \n", thisUnion.i);

    return 0;
}
