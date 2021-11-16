#include <stdio.h>


void foo(int *thePointer) //this function passes a copy of the pointer, not the pointer itself
{
    int a=43;
    thePointer=&a; //this is a copy of the initial pointer and these properties stay here in the function.
    printf("The address of the pointer variable is %p, the value stored in the pointer is %p and the value it points to is %d.\n",&thePointer,thePointer,*thePointer);
}

int main(void)
{
    int x=65;

    int *pp=NULL;
    int *p=NULL;
   

    p=&x;
    pp=&p;

    printf("The memory address where pp is stored is %p.\n",&pp);
    printf("The memory address where p is stored is %p.\n",&p);

    puts("==================================================");

    printf("The value stored in the pp variable is %p.\n",pp);
    printf("The value stored in the p variable is %p.\n",p);

    puts("==================================================");

    printf("The value stored at the location where the pp variable points to is %p=%p. \n",*pp,p);
    printf("The value stored at the location where the p variable points to is %d.\n",*p);
    //printf("The dereferenced variable of **pp is %d.\n",(int *) **pp);

    puts("==================================================");
    puts("==================================================");

    foo(p); //function foo() takes as argument a copy of the pointer p. Locally it is assigned to a certain memory address ,but the actual p pointer does not change
    printf("The memory address where p is stored is %p.\n",&p);
    printf("The value stored in the p variable is %p.\n",p);
    printf("The value stored at the location where the p variable points to is %d.\n",*p);

    return 0;
}