#include <stdio.h>

void array(int size)
{
    char myArr[size];
    int i=0;

    while(i<=size)
    {
        myArr[i]='A'+i;
        printf("The member of the array is %c.\n",myArr[i]);
        i++;
    }

}



int main(void)
{
    array(5);
    array(10);
    array(20);

    return 0;
}
