#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t this_lock;
int global_variable=43;


void *do_process(void *argument)
{
    puts("In this new thread I am using the global variable.");

    pthread_mutex_lock(&this_lock);
    int i=0;

    global_variable++;

    while(i<10)
    {
        printf("%d\t .....\n",global_variable);
        sleep(1);
        i++;
    }

    puts("....completing the work now.");

    pthread_mutex_unlock(&this_lock);

    return NULL;
}

int main(int argc, char **argv)
{
    int error;
    pthread_t thread1, thread2;

    int result=pthread_mutex_init(&this_lock,NULL);

    if(result)
    {
        printf("Error when creating mutex.\n");
        exit(1);
    }

    pthread_create(&thread1,NULL,do_process,NULL);
    pthread_create(&thread2,NULL,do_process,NULL);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);




    return 0;
}
