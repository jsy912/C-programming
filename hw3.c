#include <stdio.h>

int main(void)
{
	int i, k, s;
	
	for (i = 0; i < 5; i++)
	{
		for (k = 1; k < 5 - i; k++) 
		{
			printf(" ");
		}
		for (s = 0; s < i * 2; s++)
		{
			printf("*");
		}
		k = 0;
		s = 0;
		printf("*\n");
	}
	return 0;
}