#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

struct car
{
    int speed;
    int weight;
    char brand[100];
};

void *function_thread(void * thread_argument);

int main(int argc, char *argv[])
{
    pthread_t thisThread;

    struct car this_car;

    this_car.speed=180;
    this_car.weight=1670;
    strcpy(this_car.brand,"Tesla");

    pthread_create(&thisThread,NULL,function_thread,(void *) &this_car);

    pthread_join(thisThread,NULL);
    pthread_exit(NULL);

    return 0;
}

void *function_thread(void * thread_argument)
{
   struct car *thread_car;

    thread_car=(struct car *) thread_argument;

    printf("the data passed from the main thread to the second thread is :\n car.speed=%d \t\t car.weight=%d \t\t car.brand=%s. \n",thread_car->speed, thread_car->weight,thread_car->brand);

}
