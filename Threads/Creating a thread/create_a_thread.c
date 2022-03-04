#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *my_function()
{
    puts("Hello, World!");
    return NULL;
}

int main(int argc, char *argv[])
{
    pthread_t this_thread;

    pthread_create(&this_thread,NULL,my_function,NULL);
    pthread_join(this_thread,NULL);

    pthread_exit(NULL);

    return 0;
}
