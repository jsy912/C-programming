#include <stdio.h>

int main(void)
{
	int num[5];
	int i, idx = 0;

	printf("Please input five integers: ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &num[i]);
		idx++;
	}
	printf("\n");

	printf("Odd numbers: ");
	for (i = 0; i < idx; i++)
	{
		if (num[i] % 2 == 1)
		{
			printf("%d ", num[i]);
		}
	}
	printf("\n");

	printf("Even numbers: ");
	for (i = 0; i < idx; i++)
	{
		if (num[i] % 2 == 0)
		{
			printf("%d ", num[i]);
		}
	}

	return 0;
}