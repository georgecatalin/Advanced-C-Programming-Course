#include <stdio.h>

#define JUST_CHECKING
#define LIMIT 10

int main(void)
{
    int i=0;
    int total=0;

    for(i;i<LIMIT;i++)
    {
        total+=2*i*i+1;

        #ifdef JUST_CHECKING
            printf("The current value of i is %d and the running total is %d.\n",i,total);
        #endif
    }

    printf("The global total is %d.\n",total);

    return 0;
}
