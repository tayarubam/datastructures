#include <iostream>
using namespace std; 

#define NIL -1
#define MAX 100

int lookup[MAX]; 

/* Function to initilize the array */
static void _initialize()
{
	int i; 
	for(i=0; i<MAX; i++)
		lookup[i] = NIL;
}

int fib(int n)
{
	
	if (lookup[n] == -1)
	{
		if (n<=1)
			lookup[n] = n;
		else
			lookup[n] = fib(n-1) + fib(n-2); 
	}
	return lookup[n];
}

int main()
{
	int n = 40; 
	_initialize();
	cout<<"Fibonacci number is %d"<< fib(n)<<endl;
	return 0;
}
		

