#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * @array: pointer array
 * @size: size array
 * @action: pointer function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;

if (array && action)
{
for (i = 0; i < (int) size; i++)
{
action(array[i]);
}
}
}
