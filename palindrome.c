#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void isPalindrome(char str[])
{
   int l = 0; 
   int r = strlen(str) - 1;
   
   while (r>l)
   {
	if( str[l++] != str[r--] )
	{
	   printf("The string %s is not a palindrome \n", str);
	   return;
	}
   }

   printf("The string %s is a palindrome \n", str);
}

int main()
{
   isPalindrome("abba");
   isPalindrome("TAYARU");
   return 0;
}
