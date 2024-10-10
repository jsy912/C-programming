#include <stdio.h>

void binary(int num)
{
	int result = 0;
	if (num == 0)
	{
		return;
	}
	else
	{
		result = num % 2;
		binary((int)(num / 2));
		printf("%d", result);
	}
}

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	binary(num);
	return 0;
}