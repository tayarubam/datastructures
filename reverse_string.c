#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

void reverse (char * str);
void swap (char *start, char *end);
int main()
{
   char str[] = "TAYARU\0";
   reverse(str);
}

void reverse(char * str)
{
	char * start = NULL; 
	char * end = NULL; 

	if(NULL == str )
	{
		printf ("ERROR: The input string is NULL");
		return; 
	}
	else
	{
		
		start = (char*)malloc(sizeof(char));
		end = (char*)malloc(sizeof(char));
		start = str;
                end = str + strlen(str)-1;
     
                while(start<end)
		{
			swap(start,end);
			++start;
			--end;
		}
	}
	printf ("Reversed string is %s \n",*str);
}

void swap (char *start, char *end)
{
	char tmp ; 
	if((NULL!= start) && (NULL != end))
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
	}
}
