#include <stdio.h>

int main(void)
{
    int **pointer_to_pointer=NULL;

    int var1=10;
    int var2=43;
    int var3=66;

    int *pVar1=&var1;
    int *pVar2=&var2;
    int *pVar3=&var3;

    pointer_to_pointer=&pVar1;

    printf("The memory address where the \"pointer_to_pointer\" variable is stored is %p.\n",&pointer_to_pointer);
    printf("The value of the \"pointer_to_pointer\" variable which is the same value as the memory address where the variable \"pVar1\" is stored is %p=%p.\n",pointer_to_pointer,&pVar1);
    printf("The dereferenced \"pointer_to_pointer\" variable so to say the value that exists where \"pointer_to_pointer\" variable is pointing to is %p=%p.\n",*pointer_to_pointer,pVar1);
    printf("The completely derefenced value of the \"pointer_to_pointer\" variable which the value where the intermediate pointer variable points to is %d=%d.\n",**pointer_to_pointer,*pVar1);
    puts("=============================");

    *pointer_to_pointer=&var3;
    printf("The memory address where the \"pointer_to_pointer\" variable is stored is %p.\n",&pointer_to_pointer); //these remain the same as above
    printf("The value of the \"pointer_to_pointer\" variable which is the same value as the memory address where the variable \"pVar1\" is stored is %p=%p.\n",pointer_to_pointer,&pVar1); //these remain the same as above
    printf("The dereferenced \"pointer_to_pointer\" variable so to say the value that exists where \"pointer_to_pointer\" variable is pointing to is %p=%p.\n",*pointer_to_pointer,pVar1); //due to the change that affects the pointer_to_pointer, the intermediat pointer variable is affected too
    printf("The completely derefenced value of the \"pointer_to_pointer\" variable which the value where the intermediate pointer variable points to is %d=%d.\n",**pointer_to_pointer,*pVar1);
}