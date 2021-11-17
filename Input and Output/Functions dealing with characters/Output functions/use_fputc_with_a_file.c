#include <stdio.h>

int main(void)
{
    FILE *fp=NULL;
    char c='\0';

    fp=fopen("thefile.txt","w");

    if(fp!=NULL)
    {
        for(c='A';c<'Z';c++)
        {
            fputc(c,fp);
        }

    }
    fclose(fp);

    return 0;
}