#include <stdio.h>

#define UpTo(i,n) for((i)=0;(i)<(n);(i)++) printf("The current step is %d.\n",i)
#define UpTo1(i,n) for((i)=0;(i)<(n);(i)++)

int main(void)
{
    int i;

    UpTo(i,10);
   
   UpTo1(i,50)
   {
       printf("The current step is %d.\n",i);
   }

    return 0;
}