#include <stdio.h>

int main(void)
{
    int *ptrInt=NULL;

    ptrInt=(int *) malloc(sizeof(int));
    *ptrInt=43;
    free(ptrInt);

     *ptrInt=63; //error here due to accessing an undetermined area of memory. pointer was deleted. it is pointing nowhere now.

    return 0;
}