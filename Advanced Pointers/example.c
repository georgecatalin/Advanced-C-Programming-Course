#include <stdio.h>

int main(void)
{
    int a=10;

    int *ptr=NULL;
    int **ptrptr=NULL;

    ptr=&a;
    ptrptr=&ptr;

    printf("The memory address where the variable \"a\" is stored is %p.\n",&a);
    printf("The memory address where the variable \"ptr\"i is stored is %p.\n",&ptr);
    printf("The memory address where the variabe \"ptrptr\" is stored is %p.\n",&ptrptr);

    printf("The value stored at the memory address stored by \"ptr\" is %d.\n",*ptr); //should be a
    printf("The value stored at the memory address stored by \"ptrptr\" is %p.\n",*ptrptr); //should be &a
    printf("The value of **\"ptrptr\" is %d.\n ",**ptrptr);

    return 0;
}