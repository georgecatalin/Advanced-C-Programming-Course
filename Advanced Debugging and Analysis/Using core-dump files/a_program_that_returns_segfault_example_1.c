#include <stdio.h>

int main(void)
{
    char *myString=NULL;

    myString="I am feeling great today.I am loving C.";

    printf("my string is : %s .\n",myString);

    myString="Error when trying to change this string because it is accessing a read-only memory region";

    printf("my string is : %s .\n",myString);

    return 0;
}