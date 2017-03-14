#include <stdio.h> 
#include <pthread.h> 
void* HelloWorld(void* data)
{
	pthread_detach(pthread_self());
	int mydata=(int*)data;
	printf("Hello my dear thread %d\n",mydata);
	pthread_exit(NULL);
}
int main()
{
	pthread_t thread; 
	int t =11;
	int rc = 0; 
	rc=pthread_create(&thread, NULL, HelloWorld, (void*)& t );
        if(rc)
	{
	   printf("ERROR: Thread creation failed in error %d \n",rc);
	}
	pthread_exit(NULL);
	return 0;
}
