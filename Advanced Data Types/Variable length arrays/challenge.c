#include <stdio.h>

int array_magic()
{
    size_t size_of_the_array=0;
    int total=0;

    printf("Please enter the size of the array you wish to summate its elements.\n");
    scanf("%zd",&size_of_the_array);

    int myArray[size_of_the_array];

    for(int i=0;i<size_of_the_array;i++)
    {
        printf("Please enter the value of the element[%d]:",i);
        scanf("%d",&myArray[i]);
        printf("\n");

        total+=myArray[i];
        printf("The value of the subtotal is %d.\n\n",total);
    }

    printf("And the total is %d",total);
}


int main(void)
{
    array_magic();

    return 0;
}
