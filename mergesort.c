#include <stdio.h>
#include <stdlib.h> 

void mergesort(int *arr, int size);

void merge(int *arr, int *left, int mid, int *right, int right_size);

int main()
{
	int arr[]={6,3,5,2,1,0,4};
	int arr_size = sizeof (arr)/sizeof(arr[0]);
	int i =0; 

	mergesort(arr, arr_size); 
   
   for (i=0; i<arr_size; i++)
		printf("%d ", arr[i]);
}

void mergesort(int *arr, int size)
{
   int mid = 0, i = 0;
   int *left = NULL, *right = NULL;  
	if ( (NULL == arr) || (size < 2) ) 
		return; 
	
   mid = size/2;
	left = (int*) malloc(sizeof(int)*mid);
	right = (int*) malloc(sizeof(int)*(size - mid));

	if(( NULL != left ) && (NULL != right))
	{
		for(i=0; i<mid; i++)
		{	
			left[i] = arr[i];
		}
		
		for(i=mid; i<size; i++)
		{
			right[i-mid] = arr[i];
		}
	}

	mergesort(left, mid);
	mergesort(right, size-mid);

	merge(arr, left, mid, right, size-mid);
	free(left);
	free(right);
}

void merge(int *arr, int *left, int mid, int *right, int right_size)
{
	int i =0, j = 0, k = 0; 
	
	if((NULL != arr) && (NULL != left) && (NULL != right))
	{
		while((i<mid) && (j <right_size))
		{
			if(left[i]<right[j])
			{
				arr[k++] = left[i++];
			}
			else
			{
				arr[k++] = right[j++];
			}
			while(i<mid) arr[k++] = left[i++];
			while(j<right_size) arr[k++] = right[j++];
		}
	}
}
