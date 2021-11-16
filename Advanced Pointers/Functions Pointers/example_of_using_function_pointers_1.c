#include <stdio.h>

int this_function();

int main(void)
{
    //declare the function pointer
    int (*function_pointer)();

    //assignment of function pointer
    function_pointer=this_function; //can be used as function_pointer=&this_function but it is not a must

    printf("The address of the function pointer called 'function_pointer' is %p.\n",function_pointer);

    //invocation
    (*function_pointer)();


    return 0;
}

int this_function()
{
    puts(" I have had enough of C course lately. But I still like it.");
    return 0;
}