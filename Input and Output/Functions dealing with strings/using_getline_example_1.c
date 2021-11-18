#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char *buffer=NULL; //memory has to be allocated with malloc or calloc for this
    size_t buffer_size=12;
    size_t number_of_characters_read;

    buffer=(char *) malloc(buffer_size*sizeof(char));
    
    if(!buffer)
    {
        puts("There was an error when allocating memory.");
        exit(1);
    }

    puts("Please type something:");
    number_of_characters_read=getline(&buffer,&buffer_size,stdin);

    /* ===========================================================
    Note: The getline() function reads also the '\n' character, but it does not read the '\0' character
    ============================================================ */

    printf("The number of characters read is %zu.\n",number_of_characters_read);
    printf("You read the following buffer: %s.\n", buffer);


    return 0;
}