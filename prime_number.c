#include <stdio.h>

int main()
{
	int i, j, n, isprime; 
	
   printf("Enter a number to calculate prime numbers: ");
	scanf("%d", &n);

	for(i=2; i<=n; i++)
	{
		isprime = 1;
		for(j=2; j<=i/2; j++)
		{		
			if((i%j) == 0)
			{
				isprime = 0;
				break;
			}
		}
		if ( (1 == isprime) && (1 != n) )
		{
			printf("%d ", i);
		}
	}
		
}
