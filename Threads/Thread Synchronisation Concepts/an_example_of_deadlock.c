#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


pthread_mutex_t mutex1,mutex2;

void *thread_function1(void *argument)
{
    puts("The work started in with resource 1");

    pthread_mutex_lock(&mutex1);
    sleep(2);

    puts("Trying to get resource no.2");

    pthread_mutex_lock(&mutex2);
    puts("Resource 2 was acquired.");

    pthread_mutex_unlock(&mutex2);
    puts("Resource 2 unlocked ");

    pthread_mutex_unlock(&mutex1);
    puts("Resource 1 unlocked.");

    pthread_exit(NULL);
}

void *thread_function2(void *argument)
{
    puts("The work has started with the resource 2");
    pthread_mutex_lock(&mutex2);
    sleep(2);

    puts("Trying to get resource 1");
    pthread_mutex_lock(&mutex1);
    puts("Resource 1 was acquired");

    pthread_mutex_unlock(&mutex1);
    puts("Resource 1 was freed.");

    pthread_mutex_unlock(&mutex2);
    puts("Resource 2 was freed");

    pthread_exit(NULL);
}



int main(int argc, char **argv)
{
    pthread_mutex_init(&mutex1,NULL);
    pthread_mutex_init(&mutex2,NULL);

    pthread_t thread1, thread2;

    pthread_create(&thread1,NULL,thread_function1,NULL);
    pthread_create(&thread2,NULL,thread_function2,NULL);


    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);

    return 0;
}
