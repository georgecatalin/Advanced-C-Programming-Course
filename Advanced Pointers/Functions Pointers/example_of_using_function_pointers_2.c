#include <stdio.h>


void function1(int var);
void function2(int var);

typedef void (*Func)(int);

int main(void)
{
    //declare the function pointer
    /* void (*function_pointer)(int) or */
    Func function_pointer=NULL;

    //assignment
    function_pointer=function1; //or function_pointer=&function1

    //invocation
    (*function_pointer)(100);

    //re-assignment of the function 
    function_pointer=function2;

    //re-invocation
    (*function_pointer)(200);

    return 0;
}

void function1(int var)
{
    printf("The variable is passed through function1 as %d.\n",var);
}

void function2(int var)
{
    printf("The variable is passed through function2 as %d.\n",var);
}