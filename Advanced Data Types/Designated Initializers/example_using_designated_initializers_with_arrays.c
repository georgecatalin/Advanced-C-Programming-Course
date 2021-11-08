#include <stdio.h>

int main(void)
{
    int myArray[100]={1,2,3,[3 ... 50]=19, [3]=44,34}; //all elements which are not initialized take the default value which is O; hence [54]=34 ; [55]=0

    for(int i=0;i<100;i++)
    {
        printf("Element for index [%d]..................%d\n",i,myArray[i]);
    }


    return 0;
}
