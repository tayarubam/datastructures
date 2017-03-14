#include <stdio.h>
#include <stdlib.h>

void swap( int *a, int *b);
int selection_sort(int *a, int size);
void print_array(int *a, int size);
int main()
{
	int a[] = {1,0,4,3,7,6,2};
	int size = sizeof(a)/sizeof(a[0]);

	selection_sort(a, size);
	print_array(a, size);
	return 0; 
}

int selection_sort(int *a, int size)
{
	int i = 0, j = 0; 
	int min = 0; 
	
	for(i=0; i<size-1; i++)
	{
		min = i;
		for(j=i+1; j<size-1; j++)
		{	
			if(a[j]<a[min]) 
			{
				min = j;
			}
		}
		swap(&a[i], &a[min]);
	}
}

void swap( int *a, int *b)
{
	int temp =0; 

	temp = *a; 
	*a = *b; 
	*b = temp; 
}

void print_array(int *a, int n)
{
	int i=0; 
	
	for(i=0; i<n-1; i++)
	{
		printf("%d ,", a[i]);
	}
}
