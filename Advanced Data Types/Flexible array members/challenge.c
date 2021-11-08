#include <stdio.h>
#include <stdlib.h>


struct myArray
{
    int length;
    int array[]; //this is the flexible array member
};


int main(void)
{
    size_t size_of_flexible_array_member=0;

    printf("Read the size of the flexible array member from the keyboard : ");
    scanf("%zd",&size_of_flexible_array_member);

    struct myArray *ptrStruct=NULL;

    ptrStruct=(struct myArray *) malloc(sizeof(struct myArray)+size_of_flexible_array_member*sizeof(int));

    for(int i=0;i<size_of_flexible_array_member;i++)
    {
        ptrStruct->array[i]=0;
    }


    for(int i=0;i<size_of_flexible_array_member;i++)
    {
        printf("%d",(*ptrStruct).array[i]);
    }


    return 0;
}
