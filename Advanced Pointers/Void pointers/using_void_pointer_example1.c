#include <stdio.h>

int main(void)
{
    int a=10;
    int pi=3.14;
    int myChar='G';


    void *void_pointer=NULL;

    void_pointer=&a;
    printf("The value stored in 'void_pointer' is %d.\n",*(int *)void_pointer);

    void_pointer=&pi;
    printf("The value stored in 'void_pointer' is %.2f.\n",*(float *)void_pointer);

    void_pointer=&myChar;
    printf("The value stored in 'void_pointer' is %c.\n",*(char *)void_pointer);

    return 0;
}