#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array pointer
 * @size: array size
 * @cmp: function pointer
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
