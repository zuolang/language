#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
void *run(void *args);

char msg[] = "hello thread1";
int main()
{
	int res;
	pthread_t a_thread;
	void *thread_result;
	res = pthread_create(&a_thread,NULL,run,NULL);
	if(res!=0)
	{
		perror("thread create failures\n");
		exit(res);
	}
	printf("thread return result is :%s\n",(char *) thread_result);
	printf("message is now %s\n",msg);
	sleep(6);
	exit(0);
}

void *run(void* args)
{
	printf("thread function run\n");	
	sleep(2);
	printf("thank you for CPU time\n");

}
