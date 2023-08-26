#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	i = 0;
	x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0' && x < n)
	{
		dest[i] = src[x];
		i++;
		x++;
	}

	dest[i] = '\0';

	return (dest);
}
