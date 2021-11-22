#include <stdio.h>

int myFunction()
{
    //do nothing
}

int main(void)
{
    const int data[]={1,3,5,6,7};
    int i=0, sum=0;

    for(i=0;i>=0; ++i)
    {
        sum+=data[i];
    }

    printf("The sum is %i.\n", sum);

    return 0;
}