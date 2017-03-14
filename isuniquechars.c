#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
bool isUniquechars(char str[]);

int main()
{
   bool ret_val = isUniquechars("ABCDEF\0"); 
   printf("%d has unique chars", ret_val);
   return 0;
}  

bool isUniquechars(char str[])
{
   int i = 0; 
   bool char_at[256] = {}; 
   
   printf("%s\n",str); 

   for(i=0; i<strlen(str); i++) 
   {
	if(char_at[str[i]])
	{
           printf("Value of char_at[str[i]] %d", char_at[str[i]]) ;
           return false; 
        }
        else
        {
	   char_at[str[i]] = true;
        }
   }
   return true;
}
