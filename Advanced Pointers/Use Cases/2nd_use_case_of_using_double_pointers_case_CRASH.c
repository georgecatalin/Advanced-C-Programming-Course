#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void foo(char *word)
{
    word=(char *) malloc(255);
    strcpy(word,"Fuck off");
}

int main(void)
{
    char *myChar=NULL;
 
    foo(myChar);

    printf("The phrase is %s.\n",myChar); // this program will crash either here when printing a null
    free(myChar); //or here when freeing memory not allocated
}