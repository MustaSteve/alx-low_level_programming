#include "main.h"
/**
* array_range - a function that creates an array of integers
* @min: number
* @max: number
* Return: 0
*/
int *array_range(int min, int max)
{
	int range, p;
	int *s;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	s = malloc(range * sizeof(int));

	if (!s)
		return (NULL);

	for (p = 0; p < range; p++)
		*(s + p) = min + p;

	return (s);
}
