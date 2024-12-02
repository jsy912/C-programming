#include <stdio.h>

typedef struct city
{
	char name[50];
	char country[50];
	int population;
} City;

void ShowCityInfo(City* sptr, int i)
{
	printf("%d. %s in %s with a population of %d people \n", i + 1, sptr->name, sptr->country, sptr->population);
}

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int main(void)
{
	City arr[3] = { 0 };
	int i;

	printf("Input three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> "); fgets(arr[i].name, sizeof(arr[i].name), stdin);
		arr[i].name[strlen(arr[i].name) - 1] = '\0';
		printf("Country> "); fgets(arr[i].country, sizeof(arr[i].country), stdin);
		arr[i].country[strlen(arr[i].country) - 1] = '\0';
		printf("Population> "); scanf_s("%d", &arr[i].population);
		ClearLineFromReadBuffer();
	}
	printf("\n");
	printf("Printing the three cities: \n");
	for (i = 0; i < 3; i++)
	{
		ShowCityInfo(&arr[i], i);
	}
	return 0;
}