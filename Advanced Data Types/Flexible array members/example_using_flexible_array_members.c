#include <stdio.h>
#include <stdlib.h>


struct myStruct
{
    int arraySize;
    int array[];//this is a flexible array member inside the struct.Got support from C99.
};

/* =========================================================
Good practices: when using flexible array members
1. there can be only a single flexible array member inside a struct
2. the flexible array member had to be last last member of the struct
3. structs with flexible array members can not be used inside other structs
============================================================ */


int main(void)
{

   int desired_size=6;

   struct myStruct* ptrToStruct;

   ptrToStruct=malloc(sizeof(struct myStruct)+desired_size*sizeof(int));


    return 0;
}
