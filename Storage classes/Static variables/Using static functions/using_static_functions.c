#include <stdio.h>
#include "supplementary.c"

/* =======================================================
Notes: anytime when the storage class is not specified for a function it means it is 'extern' so it can be used and seen from other files as well
========================================================== */

extern void foo();

int main(int argc, char *argv[])
{
    foo();
    bar();

    return 0;
}
