#include <stdio.h>
#include <stdlib.h>


void foo(int **the_pointer)
{
    int a=10;
    *the_pointer=&a;
}

int main(void)
{
    int *ptr=NULL;

    ptr=(int *) malloc(sizeof(int));
    *ptr=42;

    printf("The memory address where the 'ptr' variable is stored is %p.\n",&ptr);
    printf("The value of the 'ptr' variable is %p.\n",ptr);
    printf("The value at the memory location stored in the 'ptr' variable is %d.\n",*ptr);

    puts("======== execute function passing a double pointer ========");
    foo(&ptr);

    printf("The memory address where the 'ptr' variable is stored is %p.\n",&ptr);
    printf("The value of the 'ptr' variable is %p.\n",ptr);
    printf("The value at the memory location stored in the 'ptr' variable is %d.\n",*ptr);

    return 0;
}