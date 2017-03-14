#include <iostream> 
using namespace std; 
int fib( int i);

int main()
{
   int i, result;
	
	cout<< "Enter a number to commpute fibonacci series: "; 
	cin>>i;
	result = fib(i);
	cout<< "Fiboncci of "<< i <<" is "<< result<<endl; 
	return 0; 
}

int fib( int i)
{
	if(i <= 1) 
	{
		return 1; 
	}
	else 
	{
		return fib(i-1) + fib(i-2); 
	}
}
