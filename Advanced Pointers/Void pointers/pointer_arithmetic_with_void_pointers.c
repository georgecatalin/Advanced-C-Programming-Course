#include <stdio.h>

int main(void)
{
    int myArray[]={10,43,65};

    void *this_pointer=&myArray[1]; //this points to the second element of the array thus 43

    this_pointer+=sizeof(int); // pointer arithmetic this offsets with the size of one int thus -> 65

    printf("%d\n",*(int *) this_pointer); //should show 65

    return 0;
}