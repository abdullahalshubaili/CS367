#include <stdio.h>
//#include "lab6cfunc.c"
float third(float gallon, int size)
{
	return gallon * size;
}

void second(float gallon, int size, float cost)
{
	printf("gallon price $%.2f\n", gallon);
	printf("tank capacity : %d\n", size);
	printf("Total: $%.2f\n", cost);
}

void finalcostCost(float gallon, int size, float *cost)
{
	(*cost) = third(gallon, size);
}

void doit(float *gallon, int *size)
{
	printf("gallon's price: ");

	while (!scanf("%f", gallon)  || (*gallon) <= 0)
	{
		while (getchar() != '\n'); //similar to the method that was used in part b
		printf("please enter numbers only ");
	}

	printf("tank capacity: ");

	while (!scanf("%d", size) || (*size) <= 0)
	{
		while (getchar() != '\n');
		printf("numbers only: ");
	}
}
int main(int argc, char *argv[])
{
	float gallon = 0;
	int size = 0;
	float cost = 0;

	doit(&gallon, &size);

	finalcostCost(gallon, size, &cost);

	second(gallon, size, cost);

	return 0;
}
