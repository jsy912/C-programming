#include <stdio.h>

int main(void)
{
	int num, i, pn;

	pn = 1;

	printf("Please enter a number: ");
	scanf_s("%d", &num);

	for (i = 2; i <= num - 1; i++)
	{
		if (num % i == 0)
		{
			pn = 0;
			break;
		}
	}

	if (pn == 1)
	{
		printf("It is a prime number.");
	}
	else
	{
		printf("It is not a prime number.");
	}
	return 0;
}