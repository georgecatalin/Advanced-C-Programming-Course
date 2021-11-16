#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(char **word)
{
    *word= (char *) malloc(255);
    strcpy(*word,"Fuck off");
}

int main(void)
{
    char *this_char=NULL;

    foo(&this_char); //this passes a pointer to pointer 'this_char' hence it allocated memory 'this_char;
    printf("The phrase is %s \n", this_char);
    free(this_char);

    return 0;
}