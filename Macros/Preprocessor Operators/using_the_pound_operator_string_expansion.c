#include <stdio.h>

#define PRINTF(var) ( printf(#var "is %d.\n",var))
#define HELLO(x) (printf("Hello" #x "!\n"))
#define STR(x) (#x)

int main(void)
{
    puts(STR("Guten tag"));

    int i=10;
    PRINTF(i);

    HELLO("George");

    return 0;
}