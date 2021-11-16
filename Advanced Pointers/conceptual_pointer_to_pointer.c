#include <stdio.h>

int main(void)
{
    int **double_pointer=NULL;

    int var1=10,var2=43,var3=65;
    
    int *pVar1=&var1;
    int *pVar2=&var2;
    int *pVar3=&var3;

    double_pointer=&pVar1;
    
    printf("The value of the double pointer is %p and this is the memory address it points to (=%p) \n", double_pointer,&pVar1);
    printf("The memory address where is stored the double pointer is %p. \n",&double_pointer);
    printf("The value stored at the memory address where the double pointer is pointing to is %p while the address the address stored in the intermediate pointer is %p .\n",*double_pointer,pVar1);
    printf("The final value to where the chain of pointer to pointer is pointing to is %d.\n",**double_pointer);


    return 0;
}