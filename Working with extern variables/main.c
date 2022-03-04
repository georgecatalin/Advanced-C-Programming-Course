#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "otherfile.h"
#include "file.h"

thiscar dacia;

int main()
{
    strcpy(dacia.color,"white");
    dacia.speed=120;
    dacia.power=75;

    printf("dacia spped is %d.\n",dacia.speed);
    printsome();
    printf("dacia spped is %d.\n",dacia.speed);
    wow();
    printf("dacia spped is %d.\n",dacia.speed);

    return 0;
}
