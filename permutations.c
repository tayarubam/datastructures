#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void permute(char * str, int i, int n);
void swap (char *a, char *b);
int main()
{
	char str[100];
	strcpy(str, "TAYARU");
	permute(str, 0, strlen(str));
}

void permute(char *str, int start, int n)
{
	int j = 0; 
	/*If it is the last character print it */
	if( n-1 == start )
	{
		printf("%s\n", str);
	}
	else
	{
		for(j = start+1; j<n; j++)
		{
			swap((str+start), (str+j));
			permute(str, start+1, n);
			swap((str+start), (str+j));
		}
	}
}

void swap(char *a, char *b)
{
	char tmp; 
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}	
	
