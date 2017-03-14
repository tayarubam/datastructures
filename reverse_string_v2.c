#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char * str)
{
	char *end = str;
	char tmp;
	if(str)
	{
		while(*end)
		{
			++end;
		}
		--end;
		
		while(str<end)
		{
			tmp = *str;
			*str++ = *end;
		        *end-- = tmp;
		}		
	}
}

int main()
{
	char str[]="TAYARU\0";
	reverse(str);
	printf("%s reversed string\n",str);
	return 0;
}


