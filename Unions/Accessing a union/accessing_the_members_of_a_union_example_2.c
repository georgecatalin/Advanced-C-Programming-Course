#include <stdio.h>

union example
{
    int number1;
    int number2;
};

int main(void)
{
    union example u;

    u.number1=43;
    printf("The member of the union object are 'u.number1'=%d \t and 'u.number2'=%d. \n",u.number1, u.number2);

    u.number2=100;
    printf("The member of the union object are 'u.number1'=%d \t and 'u.number2'=%d. \n",u.number1, u.number2);

    return 0;
}
