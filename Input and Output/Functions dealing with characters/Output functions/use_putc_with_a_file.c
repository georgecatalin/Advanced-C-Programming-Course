#include <stdio.h>

/* ==============================================
int putc(int character,FILE *fp);
================================================ */



int main(void)
{
    char myChar='\0';
    FILE *fp=NULL;

    if(fp=fopen("thefile.txt","rw"))
    {
        myChar=getc(fp);
        while(myChar!=EOF)
        {
            putc(myChar,fp);
            myChar=getc(fp);
        }

        fclose(fp);
    }




    return 0;
}