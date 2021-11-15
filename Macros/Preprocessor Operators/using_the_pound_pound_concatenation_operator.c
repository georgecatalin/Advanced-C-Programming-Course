#include <stdio.h>


#define concatenate(a,b) (a##b)

#define MAKE_FUNCTION(name) int my_##name(int foo){} 
#define MAKE_FUNCTION_STRING(name) "int my_"#name "(int foo){}"


int main(void)
{
    MAKE_FUNCTION(start);

    printf("This is the command:\n %d\n",concatenate(1,0));

    printf("This is the command:%s\n",MAKE_FUNCTION_STRING(end));

    return 0;
}