#include <stdio.h>

int main(void)
{
    int **double_pointer=NULL;

    int var1=10;
    int var2=43;
    int var3=64;

    int *pVar1=&var1;
    int *pVar2=&var2;
    int *pVar3=&var3;

    double_pointer=&pVar1;

    printf("The memory address where \"double_pointer\" variable is stored is %p.\n",&double_pointer);
    printf("The value stored in the \"double pointer\" variable %p which is the memory address it points to %p.\n",double_pointer,&pVar1);
    printf("The value to which the \"double pointer\" points to is %p.\n", *double_pointer );
    printf("The value derefenced of the \"double pointer\" variable is %d=%d.\n",**double_pointer,*pVar1);
    puts("--------------------------------");
    
    *double_pointer=pVar2; //it means the double_pointer variable is dereferenced as pVar2, so to say the value it points to is pVar2. Hence since double_pointer=&pVar1 it means the pVar1 points to pVar2;

    printf("The value stored in the \"double pointer\" variable %p which is the memory address it points to %p.\n",double_pointer,&pVar1);
    printf("The value to which the \"double pointer\" points to is %p which is the memory address of where \"pVar2\".\n", *double_pointer );
    printf("The value derefenced of the \"double pointer\" variable is %d=%d.\n",**double_pointer,*pVar2);

    puts("--------------------- from the points of view of variable \"pVar1\"------------------");
    printf("The value stored in the variable \"pVar1\" is %p=%p.\n",pVar1,pVar2);
    printf("The value to which the variable \"pVar1\" points to is %d=%d.\n",*pVar1,*pVar2);

    return 0;
}