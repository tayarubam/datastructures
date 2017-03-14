#include <iostream>
#include <vector>
using namespace std; 

int main()
{
	int array[] = {5, 3, 7, 2};
	int sum_target = 10;
	int size = 4; 
	int complement = 0; 
	
	for(int i = 0; i<size; i++)
	{
		complement = sum_target - array[i];
		if(complement == array[i])
		cout<< " The index of complement is %d	"<< i <<endl;
	}
	return 0;
}
