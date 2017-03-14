#include <iostream>
using namespace std; 
#define ARRAY_SIZE 100

int fibonacci(int i);
int main()
{
	int i, result ; 
	cout << "Enter a number to calculate fibonacci value "<< endl;
	cin >> i ; 
	
	result = fibonacci(i);
	cout << "Fibonacci value of " << i << " is " << result << endl;
	return 0;
}

int fibonacci(int i)
{
	int *fib = NULL; 

	fib = new int[ARRAY_SIZE];
	
	for(int j =0; j <ARRAY_SIZE; j++)
	{
		fib[j] = 0;
	}
	if( i <= 1 ) 
	{
		fib[i] = i;
	}
	else
	{
		fib[i] = fibonacci(i-1) + fibonacci(i-2);
	}
	if( 0 != fib[i] )
	{
		return fib[i];
	}
}


