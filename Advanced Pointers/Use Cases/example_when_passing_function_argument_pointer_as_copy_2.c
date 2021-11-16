#include <stdio.h>
#include <stdlib.h>

void foo(int *thePointer) //this function passes a copy of the pointer, not the pointer itself
{
    int a=43;
    thePointer=&a; //this is a copy of the initial pointer and these properties stay here in the function.
    puts("==== this is from inside the function =====");
    printf("The address of the pointer variable is %p, the value stored in the pointer is %p and the value it points to is %d.\n",&thePointer,thePointer,*thePointer);
    puts("==== function stops here =====");
}


int main(void)
{
    int *ptr=NULL;
    ptr=(int *) malloc(sizeof(int));

    printf("The memory address where the ptr variable is stored is %p.\n",&ptr);
    printf("The value stored in ptr is %p.\n",ptr);
    printf("The value stored at the memory location stored in the variable ptr is %d\n",*ptr);

    puts("==== execute function with a copy of the pointer as parameter ======");

    *ptr=10;
    foo(ptr);

    printf("The memory address where the ptr variable is stored is %p.\n",&ptr);
    printf("The value stored in ptr is %p.\n",ptr);
    printf("The value stored at the memory location stored in the variable ptr is %d\n",*ptr); //since the function used a copy of the pointer, the original pointer ptr still points to 10


    return 0;
}