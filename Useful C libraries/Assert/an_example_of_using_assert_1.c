#include <stdio.h>
#include <assert.h>


int main(void)
{
    int i=7;

    for(int j=0;j<30;++j)
    {
        printf("i=%d \t j=%d \n",i,j);
        assert(j<i); // this will failt at j=7 = i=7
    }


    return 0;
}