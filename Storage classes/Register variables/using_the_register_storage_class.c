#include <stdio.h>


/* ===========================================
Note: The register storage class is used with frequently accessed variables to store these variables in a CPU register, unlike the normal way when the variables are stored in the RAM.
It gains speed, but the size of the variable gets limited to the size of the CPU register. Additionally there can not be applied the operator & address of to a variable of register type
============================================== */


int main(void)
{
    register int counter;

    for(counter=0; counter<=100;counter++)
    {
        printf("The value of the counter is %d.\n",counter);
    }


    return 0;
}
