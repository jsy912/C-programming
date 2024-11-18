#include <stdio.h>
#include <math.h>

double Standard_Deviation(int* arr, int size)
{
	int sum = 0;
	double avg;
	double dev = 0;
	int i, j;
	
	for (i = 0; i < 5; i++)
		sum += arr[i];

	avg = sum / size;

	for (j = 0; j < 5; j++)
	{
		dev += pow(arr[j] - avg, 2);
	}
	dev /= size;

	return sqrt(dev);
}

int main(void)
{
	int i;
	int arr[5] = {};
	double Stan_Dev;

	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);

	Stan_Dev = Standard_Deviation(arr, 5);

	printf("Standard Deviation = %.3lf", Stan_Dev);

	return 0;
}