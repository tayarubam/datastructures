#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADS 3

typedef struct _thread_data_t
{
	int tid;
	double stuff; 
}thread_data;

void * thread_function (void* arg)
{
	thread_data *tdata = (thread_data*) arg;
	
	printf("Hi from thread : %d", tdata->tid);
}

int main(

	
