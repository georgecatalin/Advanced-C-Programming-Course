#include <stdio.h>

int main(void)
{
    char myChar='\0';
    int myAsciiCode=0;

    FILE *file_pointer=NULL;

    if(file_pointer=fopen("thefile.txt","rw"))
    {
        myChar=getc(file_pointer);
        printf("%c",myChar);

        while(myChar!=EOF)
        {
            myChar=getc(file_pointer);
            printf("%c",myChar);
        }
    }

    fclose(fp);

    return 0;
}