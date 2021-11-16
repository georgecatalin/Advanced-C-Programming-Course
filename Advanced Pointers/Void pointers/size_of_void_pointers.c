#include <stdio.h>

int main(void)
{
    void *void_pointer=NULL;
    int *int_pointer=NULL;
    float *float_pointer=NULL;
    char *char_pointer=NULL;

    printf("Size of the void * is %d.\n",sizeof(void_pointer));
    printf("Size of the int * is %d.\n",sizeof(int_pointer));
    printf("Size of the float * is %d.\n",sizeof(float_pointer));
    printf("Size of the char * is %d.\n",sizeof(char_pointer));

    return 0;
}