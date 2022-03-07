#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NTHREADS 25

pthread_mutex_t my_lock=PTHREAD_MUTEX_INITIALIZER;
int global_variable=0;

void* thread_function(void *argument)
{
    printf("I am in the thread number %ld.\n", pthread_self());

    pthread_mutex_lock(&my_lock);
    global_variable++;
    pthread_mutex_unlock(&my_lock);

    return NULL;
}

int main(int argc, char **argv)
{
    pthread_t my_thread[NTHREADS];


    for(int i=0;i<NTHREADS;i++)
    {
        int result_create=pthread_create(&my_thread[i],NULL,thread_function,NULL);
    }

    for(int i=0;i<NTHREADS;i++)
    {
        int result_join=pthread_join(my_thread[i],NULL);
    }

    printf("The final value of the global variable is %d.\n",global_variable);

    return 0;
}
