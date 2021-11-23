#include <stdio.h>

int main(void)
{
    int numbers_read=0;
    int i;

    numbers_read=scanf("%d", i); //error here due to not addressing a valid memory address in scanf

    return 0;
}