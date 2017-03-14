#include <stdio.h>
#include <stdlib.h>

void quicksort(int *a, int size);
void print_array(int *a, int size);
int main()
{
	int a[] = {8, 0, 5, 7, 6, -32, 65};
	int a_size = sizeof(a)/sizeof(a[0]);
	
	quicksort(a, a_size);
	print_array(a, a_size);
	return 0;
}

void quicksort(int *a, int size)
{
	int i=0, j=0, temp =0, pivot =0; 

	if(size < 2) return;
	
	pivot = a[size/2]; 

	for(i=0, j=size-1; ;i++, j--)
	{
		while(a[i]<pivot) i++;
		while(pivot<a[j]) j--; 

		if(i>=j) break;

		temp = a[i]; 
		a[i] = a[j];
		a[j] = temp; 
 	}
 	quicksort(a, i);
 	quicksort(a+i, size-i);		
}
void print_array(int *a, int size)
{
	int i = 0; 
	for(i=0; i<size; i++)
	{
		printf("%d ,", a[i]);
	}
}
