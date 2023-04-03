#include "main.h"
/**
* print_diagsums - a function that prints the sum of the two diagonals.
* @size: int
* @a: int
* Return: 0
*/
void print_diagsums(int *a, int size)
{
	int i, diab1, diab2;

	diab1 = diab2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		diab1 += a[i];
	}
	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
		diab2 += a[i];
	}
	printf("%i, %i\n", diab1, diab2);
}
