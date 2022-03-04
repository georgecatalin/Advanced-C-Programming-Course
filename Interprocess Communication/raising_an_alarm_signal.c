#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main(void)
{
	alarm(10); //raise an alarm signal for the process itself after 10 seconds. it it is not caught, by default it terminates the process
	
	for(int i=0;i<10;i++)
	{
		printf("%d.\n",i);
		sleep(1);
	}
	
	return 0;
}
