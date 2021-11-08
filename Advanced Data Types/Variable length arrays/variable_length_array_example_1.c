#include <stdio.h>

int main(void)
{
    size_t mySize=0;

    printf("Enter the size you wish for the array:\n");
    scanf("%zd",&mySize);

    float myArray[mySize];

    return 0;
}
