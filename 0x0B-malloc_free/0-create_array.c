#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 *
 * @size: size of array
 *
 * @c: char to initialize array
 *
 * Return: pointer to array NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{

	char *x;
	unsigned int y;

	x = malloc(sizeof(char) * size);
	if (size == 0 || x == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		x[y] = c;
	return (x);
}
