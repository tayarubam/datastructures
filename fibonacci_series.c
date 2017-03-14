#include <stdio.h> 
#include <stdlib.h> 

int fib(int i);
int main()
{
   int i, result;
	printf ("Enter a number to commpute fibonacci series: "); 
	scanf ("%d", &i);
	result = fib(i);
	printf("The fibonacci value is %d", result);
	return 0; 
}

int fib(int i)
{
	if(i <= 1) 
	{
		return i; 
	}
	else 
	{
		return fib(i-1) + fib(i-2); 
	}
}
