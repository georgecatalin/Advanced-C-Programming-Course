#include <stdio.h>
#include <ctype.h>

/* ==================================================================
int ungetc(int ch, FILE *fp) : the function puts back to the stream fp the character ch
the ungetc() returns EOF if it fails, or the character it puts back to the stream otherwise
==================================================================== */

int main(void)
{
    char myC='\0';

    while(isspace(myC=(char) getchar())); //reads from the stream , in this case stdin until a non-white character is found
    
    ungetc(myC,stdin); //as the first non white space character was already read, it puts it back to the stream to read it again
        
    
    printf("The character is %c",myC);
  

    return 0;
}
