#include "main.h"


int main(void)
{
    int x=43;
    int y=10;

    PRNT(x,y); //actually the macro is a text substitution technique and it will be replaced by the content defined for its name in its definition

    return 0;
}