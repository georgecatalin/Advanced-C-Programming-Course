#include <stdio.h>

//define or undefine NDEBUG in front of include <assert.h>
#define NDEBUG  //#undef NDEBUG to enable assertions on systems where they have been disabled by default
#include <assert.h>

int main(void)
{
    int i=0;

    assert(i<0); // when the condition in the assert is false, the program abort()
    printf("The variable is %d",i);

    return 0;
}