#include <stdio.h>

int main(void)
{
    size_t rows=0;
    size_t columns=0;

    printf("Please enter the first size of the array you wish to generate.\n");
    scanf("%zd",&rows);

    printf("Please enter the second size of the array you with to generate. \n");
    scanf("%zd",&columns);

    float numbers[rows][columns];


    return 0;
}
