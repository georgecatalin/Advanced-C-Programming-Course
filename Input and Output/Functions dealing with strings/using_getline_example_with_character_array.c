#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char myCharacterArray[50];
    char *buffer=myCharacterArray;
    size_t buffer_size=50;
    size_t number_of_characters_read_with_getline;

    //There is no need to allocate memory anymore with malloc or calloc to host the buffer as it is already initialized to an existing character array which by definition does have memory

    printf("Type something at the keyboard, please \n");
    number_of_characters_read_with_getline=getline(&buffer,&buffer_size,stdin);
    
    if(number_of_characters_read_with_getline==-1)
    {
        puts("There was an error when reading the line.");
    }
    else
    {
        printf("I read %zu characters from the standard input stream.\n",number_of_characters_read_with_getline);
        printf("The content of the buffer is %s.\n",buffer);
    }


    return 0;
}