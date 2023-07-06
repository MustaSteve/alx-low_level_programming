#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value
 * @n: pointer
 * @index: sarting from 0
 * Return: Always 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
